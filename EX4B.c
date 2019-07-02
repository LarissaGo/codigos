#include <math.h>//exp
#include <stdio.h>//printf e scanf
#define deltax 0.001 // Precisao desejada
double funcao(double x, int opt); //Prototipo da funcao
double derivada(double x, int opt); //Prototipo da derivada
void main(){
double x1,fx,deriv, erro;
int n,i,opt=1;
printf("ENTRE COM UM VALOR PARA X1: \b");
x1=1;
printf("NUMERO MAXIMO DE INTERACOES: \b");
n=20000;
if ((x1!=0)&&(n>=1)){
for (i=1;i<=n;i++) {
fx=funcao(x1,opt);
deriv=derivada(x1,opt);
erro = (fx/deriv);
x1 = x1-(fx/deriv);
if(i==n){
printf("\nF(X%d) VALE: %.20lf\n",i,fx);
printf("DERIVADA DA F(X%d) VALE: %.20lf\n",n,deriv);
printf("ERRO DA FUNCAO: %.20lf\n",erro);
printf("X%d VALE: %.20lf\n",i+1,x1);
}
}
}
}
double funcao (double x, int opt){
double y;
//aqui vai minha função
y=pow(x,5)*(-4.96)*pow(10,-11)+pow(x,4)*1.74*pow(10,-8)-pow(x,3)*2.4*pow(10,-
6)+pow(x,2)*1.61*pow(10,-4)-x*5.23*pow(10,-3)+0.062;
return y;
}
double derivada(double x, int opt){
double deriv;
deriv = (funcao(x+deltax,opt)-funcao(x,opt))/deltax;
return deriv;
}
