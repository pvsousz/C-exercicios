#include<stdio.h>

int main (){

  char nome[50];
  scanf("%s", &nome);

  double fixo;
  scanf("%lf", &fixo);

  double venda;
  scanf("%lf", &venda);

  double TOTAL = fixo + venda * 0.15;


  printf("TOTAL = R$ %.2lf\n",TOTAL);
   return 0;
}