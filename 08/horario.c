#include <stdio.h>

int main(void){
	
    int segundos, h, m, s;
	printf("Insira o tempo em segundos:");
	
    scanf("%d", &segundos);
	
	h = (segundos/3600); 

	m = (segundos -(3600*h))/60;
	
	s = (segundos -(3600*h)-(m*60));
	
	printf("O tempo emhoras, minutos e segundos é %d:%d:%d\n",h,m,s);
	
	return 0;
}
