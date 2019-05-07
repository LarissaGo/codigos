//c�digo que implementa o m�todo dos trap�zios para a solu��o de integrais, para os exerc�cios
//da disciplina de Mec�nica dos Fluidos, escrito em linguagem C
#include <stdio.h>
#include <math.h>
double f(double x);
int main()
{
  // aqui ser�o declaradas as vari�veis utilizadas na solu��o.
  int i;
  int n = 100;	  // Esta define o n�mero de parti��es.
  double a, b;	 // Declara os limites do intervalo de integra��o.
  double sum = 0;	// Resultar� no valor da integral.
  double h;
  double x;
  // neste local definimos os valores dos limites de integra��o
  a=0;
  b=(4);
  // Aqui � definida a dimens�o de cada parti��o.
  h = (b - a) / (n - 1);
  // Atribui se a x o valor inicial para come�ar o c�lculo, no caso, o limite inferior de integra��o.
  x = a;
  // Ent�o pode se realizar as itera��es para obter-se o valor da integral.
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
// Aqui definimos a fun��o que queremos integrar.
double f(double x)
{
  return 9.8*0.85*1000*5*x;
}
