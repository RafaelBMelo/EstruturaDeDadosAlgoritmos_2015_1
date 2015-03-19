//5­ Faça um Programa que peça dois números e imprima a soma.

#include <stdio.h>

int soma_2_numeros(int Num1, int Num2)
{
	int soma;
	printf("Digite dois numeros:\n");
	scanf("%d %d", &Num1, &Num2);
	soma = Num1 + Num2;	
	printf("%d + %d corresponde a %d.\n", Num1, Num2, soma);
}

int main()
{
	int N1, N2;
	soma_2_numeros(N1, N2);
return 0;
}
