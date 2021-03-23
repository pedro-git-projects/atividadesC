#include <stdio.h> //Standard input-output header

int main (void){
    
    int base, altura;
    int area; 
    
    printf("Insira a base:");
    scanf("%d",&base);
    
    printf("Insira a altura:");
    scanf("%d",&altura);

    area = (int)(base * altura / 2);
    printf("A áre do triângulo é:""%d \n",area);

    return 0;
}