#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//primeiro estabelecemos algumas fun��es que ser�o usadas no c�digo
double y(double t) {//Aqui � calulada a solucao y(t) da equacao
return pow(0.6324-0.022*t,2);
}
double f(double t,double y){//Aqui � calculada a derivada atrav�s da funcao f(x,y)
return 0.04429447*y;
}
int main(void){
//agora come�amos o m�todo de Euler declarando as v�riavies utilizadas
double tn,tn1,tmax; //variaveis tn e tn+1 utilizadas para os limites de t
double yn, yn1; //variaveis yn e yn+1
double y0,t0; //valores iniciais de y e t
double h; //passo
int n;
t0 = 0.0; //atribuimos os valores iniciais de t e y nessa parte
y0 = 0.4;
tmax = 6.0; //Aqui definimos o valor de t para o qual queremos o resultado
h = 0.001; //Definimos o valor do passo
tn = t0; //E atribuimos os valores as vari�veis que est�o no la�o.
yn = y0;
n =0;
while(tn<tmax){
yn1 = yn + h*f(tn,yn); //prinic�pio do m�todo, define o valor de yn1 com base em yn
tn1 = tn + h; //define tn1 para o pr�ximo loop
n++; //incrementa n
yn = yn1; //atribui yn1 a yn pra ser reutilizado
tn = tn1; //atribui o xn1 a xn pra ser reutilizado
}//fim while
printf(" %i \n", n); //escreve o n�mero de itera��es que ocorreram
printf(" %f \n", tn);// escreve o valor final de t
printf(" %f \n ",y(tn));// escreve o valor de y(t) para o t definido
return 0;
}
