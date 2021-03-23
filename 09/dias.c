#include <stdio.h>

int main (void){
    int tempoDias, ano, mes, dia;	
	
	printf("Insira o valor em dias: ");
	
	scanf("%d", &tempoDias);
	
	ano = (int) tempoDias/365;
	
	tempoDias = tempoDias-(365*ano);
		
	mes = (int)tempoDias/30;
	
	dia = (int)tempoDias-(mes*30);
	
	printf(" %d Anos \n %d Meses e \n %d Dias", ano, mes, dia);
	return 0;

}