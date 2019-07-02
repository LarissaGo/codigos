#include <math.h>//exp
#include <stdio.h>//printf e scanf
#define deltax 0.001 // Precisao desejada
double funcao(double x, int opt); //Prototipo da funcao
double derivada(double x, int opt); //Prototipo da derivada
void main(){
double x1,fx,deriv, erro;
int n,i,opt=1;
//Valor inicial para x1
x1=1;
//Numero de iterações:
n=200;
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
y=pow(x,5)*(-4.96)*pow(10,-11)+pow(x,4)*2.4*pow(10,-8)-pow(x,3)*4.5*pow(10,-
6)+pow(x,2)*4.135*pow(10,-4)-x*0.019+0.331;
return y;
}
double derivada(double x, int opt){
double deriv;
deriv = (funcao(x+deltax,opt)-funcao(x,opt))/deltax;
return deriv;
}
