#include <iostream>
#include <vector>
#include <stdexcept>
#include <limits>

int main()
{
  std::vector<int> vetor(10);

  try
  {
    for (int i = 0; i < 10; ++i)
    {
      int valor;
      int posicao;

      std::cout << "Informe o valor a ser inserido: ";
      std::cin >> valor;

      std::cout << "Informe a posição (0-9) no vetor: ";
      std::cin >> posicao;

      if (posicao < 0 || posicao >= 10)
      {
        throw std::out_of_range("Posição inválida");
      }

      if (std::cin.fail())
      {
        throw std::invalid_argument("Valor inválido");
      }

      vetor[posicao] = valor;

      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  catch (const std::out_of_range &e)
  {
    std::cerr << "Erro: " << e.what() << std::endl;
  }
  catch (const std::invalid_argument &e)
  {
    std::cerr << "Erro: " << e.what() << std::endl;
  }

  std::cout << "Vetor preenchido:";
  for (int num : vetor)
  {
    std::cout << " " << num;
  }
  std::cout << std::endl;

  return 0;
}
