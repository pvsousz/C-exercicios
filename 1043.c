#include<stdio.h>
int main(){
    float a,b,c,perimetro,trapezio;
    scanf("%f %f %f",&a,&b,&c);

    if(a <b+c && b<a+c && c<b+a){
        perimetro = a +b + c;
        printf("Perimetro = %.1f\n",perimetro);
    }else{
        trapezio = ((a + b) *c)/2;
        printf("Area = %.1f\n",trapezio);
    }
    return 0;
}