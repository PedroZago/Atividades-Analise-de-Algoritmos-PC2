#include <iostream>
#include <cmath>

double f(double x)
{
  return sqrt(x) - exp(-x);
}

double bisection(double a, double b, double epsilon)
{
  if (f(a) * f(b) >= 0)
  {
    std::cout << "A função f(a) e f(b) têm o mesmo sinal no intervalo [" << a << ", " << b << "]." << std::endl;
    return 0.0;
  }

  int iterations = 0;
  double c;

  while ((b - a) >= epsilon)
  {
    c = (a + b) / 2.0;

    if (f(c) == 0.0)
    {
      break;
    }
    else if (f(c) * f(a) < 0)
    {
      b = c;
    }
    else
    {
      a = c;
    }

    iterations++;
  }

  return c;
}

int main()
{
  double a = 0.0, b = 1.0;
  double epsilon = 1e-3;

  double root = bisection(a, b, epsilon);

  std::cout << "Raiz encontrada: " << root << std::endl;

  return 0;
}
