#include <stdio.h>
 
int main() {

    double tempo,vem,litros;
    scanf("%lf %lf",&vem,&tempo);

    litros = (vem*tempo)/12;
    printf("%.3lf",litros);

 

    return 0;
}