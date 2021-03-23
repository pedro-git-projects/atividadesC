#include <stdio.h>

int main (void){
    
    unsigned int gigabyte;
    
    printf("Insira o valor em gigabytes:");
    scanf("%u", &gigabyte);
    printf("O tamanho em bytes é: %lu\n", (long)1024*1024*1024*gigabyte);

    return 0;
}