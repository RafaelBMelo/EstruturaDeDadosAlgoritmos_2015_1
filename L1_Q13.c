//13­ Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.

#include <stdio.h>

int media_pond_3_notas(float N1, float N2, float N3, int P1, int P2, int P3)
{
	scanf("%f %f %f %d %d %d", &N1, &N2, &N3, &P1, &P2, &P3);	
	printf("A media ponderada das tres notas com seus pesos corresponde a %.1f\n", (N1*P1 + N2*P2 + N3*P3)/(P1 + P2 + P3));
}

int main()
{
	float Nota1, Nota2, Nota3;
	int Peso1, Peso2, Peso3;
	
	media_pond_3_notas(Nota1, Nota2, Nota3, Peso1, Peso2, Peso3);
return 0;
}
