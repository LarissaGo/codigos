//código que implementa o método dos trapézios para a solução de integrais, para os exercícios
//da disciplina de Mecânica dos Fluidos, escrito em linguagem C
#include <stdio.h>
#include <math.h>
double f(double x);
int main()
{
  // aqui serão declaradas as variáveis utilizadas na solução.
  int i;
  int n = 100;	  // Esta define o número de partições.
  double a, b;	 // Declara os limites do intervalo de integração.
  double sum = 0;	// Resultará no valor da integral.
  double h;
  double x;
  // neste local definimos os valores dos limites de integração
  a=0;
  b=(4);
  // Aqui é definida a dimensão de cada partição.
  h = (b - a) / (n - 1);
  // Atribui se a x o valor inicial para começar o cálculo, no caso, o limite inferior de integração.
  x = a;
  // Então pode se realizar as iterações para obter-se o valor da integral.
  for (i = 1; i <= n - 1; i++)
  {
    sum = sum + f(x) + f(x + h);
    x = x + h;
  }
  sum = sum * h / 2;
  // Por fim, escreve se o resultado.
  printf("O resultado da soma e': %lf\n", sum);
  return 0;
}
// Aqui definimos a função que queremos integrar.
double f(double x)
{
  return 9.8*0.85*1000*5*x;
}
