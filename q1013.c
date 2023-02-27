#include <stdio.h>

int main(){
    
        int a,b,c,maior;
        scanf("%d %d %d",&a,&b,&c);
        maior = a;
        if (a < b || a < c){
            if (b < c){
                maior = c;
            }
        else{
            maior = b;
        }
        }
        printf("%d eh o maior\n",maior);
        return 0;

}

 