//12 ­ Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

float media_3_notas(float Nota1, float Nota2, float Nota3)
{
	float med_arit;
	
	med_arit = (Nota1 + Nota2 + Nota3)/3;
    return(med_arit);
}

int main()
{
	float N1, N2, N3;
	
	scanf("%f %f %f", &N1, &N2, &N3);
	printf("A media aritmetica das tres notas corresponde a %.1f\n", media_3_notas(N1, N2, N3));
return 0;
}
