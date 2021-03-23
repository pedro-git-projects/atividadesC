#include <stdio.h>

int main (void){
    
    float PI = 3.1416;
    int raio;
    float perimetro; 
    
    printf("Insira o raio:");
    scanf("%d",&raio);

    perimetro = (float)(2 * PI * raio);
    printf("O perímetro da pizza é ""%f \n",perimetro);

    return 0; 
}