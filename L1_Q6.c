//6­ Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>

int media_4_notas(float Nota1, float Nota2, float Nota3, float Nota4)
{
	printf("Digite as quatro notas bimestrais:\n");
	scanf("%f %f %f %f", &Nota1, &Nota2, &Nota3, &Nota4);	
	printf("A media das quatro notas bimestrais corresponde a %.1f\n", (Nota1 + Nota2 + Nota3 + Nota4)/4);
}

int main()
{
	float N1, N2, N3, N4;
	media_4_notas(N1, N2, N3, N4);
return 0;
}
