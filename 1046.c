#include <stdio.h>
 
int main() {
    float inicio,fim,horas;
    scanf("%f %f",&inicio,&fim);

    if (inicio > fim ){
        horas = 24-inicio+fim;
        printf("O JOGO DUROU %.0f HORAS(S)\n",horas);
    }else if(inicio < fim){
        horas = (fim-inicio);
        printf("O JOGO DUROU %.0f HORAS(S)\n",horas);
    }else{
        horas = 24;
        printf("O JOGO DUROU %.0f HORAS(S)\n",horas);
    }
    
    return 0;
}