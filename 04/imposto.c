#include <stdio.h>

int main (void){
    
    float precoInicial;
    float precoFinal;
    
    printf("Insira o preço inicial:");
    scanf("%f",&precoInicial);

    float icms = precoInicial*0.17;
    float cofins = precoInicial*0.076;
    float pisPasep = precoInicial*0.0165;

    precoFinal = (float)((1 + icms + cofins + pisPasep)*precoInicial);
    printf("O preço final é ""%.2f \n",precoFinal);
}