#include <stdio.h> //Standard input-output header

int main (void){
    
    float A1, A2;
    float media; 
    
    printf("Insira o primeiro número:");
    scanf("%f",&A1);
    
    printf("Insira o segundo número:");
    scanf("%f",&A2);

    media = (float)(0.4 * A1)+(0.6 * A2);
    printf(" A média de %f e %f is: %.2f",A1,A2,media);

    return 0;
}
    