#include <stdio.h>

static void decompor(int n, long long potenciaDeDez, char *separador) {
    
    if (potenciaDeDez == 0) {
        return;
    }

    if (n >= potenciaDeDez) {
        printf("%s%lld", separador, (n / potenciaDeDez) * potenciaDeDez);
        separador = " + ";
    }
    decompor(n % potenciaDeDez, potenciaDeDez / 10, separador);
}

int main(int argc, char **argv) {
    printf("insira um número até 10.000.000.000:");
    int n;

    scanf("%d", &n);

    decompor(n, 100000000000LL, "");

    return 0;
}