#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if (b > c && d > a && c + d > a +b && c > 0 && d >0 && a%2 ==0){
        printf("valores aceitos\n");
    }else{
        printf("valores não aceitos\n");
    }

    printf("おはよございます");
    return 0;
}

