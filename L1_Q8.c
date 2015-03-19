//8­ Ler o valor do raio de um circulo e calcular a área do circulo correspondente, considere pi = 3:141592.

#include <stdio.h>

float area_circ(float R)
{
	float pi = 3.141592;
	
	scanf("%f", &R);
	printf("A area do circulo de raio %.2f u.c. corresponde a %.2f u.a.", R, pi*R*R);
}

int main()
{
	float raio;
	
    area_circ(raio);
return 0;
}
