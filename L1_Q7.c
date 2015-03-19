//7­ Faça um Programa que converta metros para centímetros.

#include <stdio.h>

int convert_met_cent(float med)
{
	scanf("%f", &med);
	if (med == 1)
	   printf("%.2f metro equivale a %.2f centimetros\n", med, med*100);
	else if(med*100 == 1)
	   printf("%.2f metros equivale a %.2f centimetro\n", med, med*100);
	else
	   printf("%.2f metros equivale a %.2f centimetros\n", med, med*100);
}

int main()
{
	float medida;
	convert_met_cent(medida);
return 0;
}
