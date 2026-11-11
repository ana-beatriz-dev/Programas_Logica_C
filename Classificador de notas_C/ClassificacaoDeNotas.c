#include<stdio.h>
int main(){
    float nota01, nota02, nota03, media;
    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f",&nota01);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f",&nota02),
    printf("Digite a nota do exame final: ");
    scanf("%f",&nota03);
    media = ((nota01 * 2) + (nota02 * 3) + (nota03 * 5)) / 10;
    printf("Media ponderada eh: %.2f \n", media);
    if(media >= 8 && media <= 10){
        printf("Obteve conceito A");
    }else if(media >= 7 && media < 8){
        printf("Obteve conceito B");
    }else if(media >= 6 && media < 7){
        printf("Obteve conceito C");
    }else if(media >= 5 && media < 6){
        printf("Obteve conceito D");
    }else if(media >= 0 && media < 5){
        printf("Obteve conceito E");
    }
    return 0;
}
