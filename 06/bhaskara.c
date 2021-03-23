//            $$\     $$\            $$\       $$\                 $$\                   $$\   
//            $$ |    \__|           \__|      $$ |                $$ |                $$$$ |  
//  $$$$$$\ $$$$$$\   $$\ $$\    $$\ $$\  $$$$$$$ | $$$$$$\   $$$$$$$ | $$$$$$\        \_$$ |  
//  \____$$\\_$$  _|  $$ |\$$\  $$  |$$ |$$  __$$ | \____$$\ $$  __$$ |$$  __$$\         $$ |  
//  $$$$$$$ | $$ |    $$ | \$$\$$  / $$ |$$ /  $$ | $$$$$$$ |$$ /  $$ |$$$$$$$$ |        $$ |  
// $$  __$$ | $$ |$$\ $$ |  \$$$  /  $$ |$$ |  $$ |$$  __$$ |$$ |  $$ |$$   ____|        $$ |  
// \$$$$$$$ | \$$$$  |$$ |   \$  /   $$ |\$$$$$$$ |\$$$$$$$ |\$$$$$$$ |\$$$$$$$\       $$$$$$\ 
//  \_______|  \____/ \__|    \_/    \__| \_______| \_______| \_______| \_______|      \______|
                                                                                                                                                       
#include <stdio.h>
#include <math.h>

int main(void){
    
    double a, b, c, discriminante , raiz1, raiz2, parteReal, parteImaginaria;
    
    printf("Insira o coeficiente a: ");
    scanf("%lf", &a);

    printf("Insira o coeficiente b: ");
    scanf("%lf", &b);

    printf("Insira o coeficiente c: ");
    scanf("%lf", &c);

    discriminante  = b * b - 4 * a * c;

    // raízes reais e diferentes
    if (discriminante  > 0) {
        raiz1 = (-b + sqrt(discriminante )) / (2 * a);
        raiz2 = (-b - sqrt(discriminante )) / (2 * a);
        printf("raiz1 = %.2lf and raiz2 = %.2lf", raiz1, raiz2);
    }

    // raízes reais e iguais
    else if (discriminante  == 0) {
        raiz1 = raiz2 = -b / (2 * a);
        printf("raiz1 = raiz2 = %.2lf;", raiz1);
    }

    // raíz imaginária
    else {
        parteReal = -b / (2 * a);
        parteImaginaria = sqrt(-discriminante ) / (2 * a);
        printf("raiz1 = %.2lf+%.2lfi and raiz2 = %.2f-%.2fi", parteReal, parteImaginaria, parteReal, parteImaginaria);
    }

    return 0;
} 