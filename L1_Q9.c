//9­ Faça um Programa que leia o tamanho de um lado do quadrado e calcule sua área em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>

int Dobro_Area(int L)
{	
	int area, dobro;
	
	area = L*L;
	dobro = 2*area;
	return(dobro);
}

int main()
{
	int Lado;
	
	scanf("%d", &Lado);
    printf("O dobro da area do quadrado de lado %d corresponde a %d.\n", Lado, Dobro_Area(Lado));
return 0;
}
