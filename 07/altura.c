#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main (void) {
double angulo, seno, radianos;

angulo = 45;   
radianos = PI / 180;
seno = sin(angulo*radianos);

double altura;
altura = seno*angulo;
printf("A altura alncaçade é de %2.lf. ", altura); 
   return(0);
}