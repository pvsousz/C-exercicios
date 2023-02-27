#include<stdio.h>


int main(){
    float n1,n2,n3,n4,n5,media,medianova;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    
    n1 = (n1*2);
    n2 = (n2*3);
    n3 = (n3*4);
    
    media = (n1+n2+n3+n4)/10;
    
    if (media >= 7.0){
            printf("Media:%.1f\n ",media);
            printf("Aluno aprovado.\n");
    }else if (media < 5.0){
            printf("Media: %.1f\n ",media);
            printf("Aluno reprovado.\n");
    }else if ( media > 5.0 && media < 6.9){
            scanf("%f",&n5);
            medianova = (media + n5)/2;
            printf("Media: %.1f \n ",media);
            printf("Aluno em exame.\n");
            printf("Nota do exame:%.1f\n",n5);
            if(medianova >= 5.0){
                printf("Aluno aprovado.\n");
            }else{
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n",medianova);
    }

    return 0;  
}