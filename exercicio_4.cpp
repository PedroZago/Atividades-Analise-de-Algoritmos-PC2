#include <iostream>
using namespace std;

int main()
{
  float grade;

  cout << "Sua nota: ";
  cin >> grade;

  grade >= 7 ? (cout << "Aprovado") : (cout << "Reprovado");

  return 0;
}
