//4­ Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdio.h>

int soma_4_numeros(int Num1, int Num2, int Num3, int Num4)
{
	int soma;
	scanf("%d %d %d %d", &Num1, &Num2, &Num3, &Num4);
	soma = Num1 + Num2 + Num3 + Num4;	
	printf("%d + %d + %d + %d corresponde a %d.\n", Num1, Num2, Num3, Num4, soma);
}

int main()
{
	int N1, N2, N3, N4;
	soma_4_numeros(N1, N2, N3, N4);
return 0;
}
