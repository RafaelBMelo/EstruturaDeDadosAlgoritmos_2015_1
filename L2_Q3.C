//3. Faça um programa que receba dois números e mostre o maior.

#include<stdio.h>
#include<stdlib.h>

int maior_numero (int N1, int N2){
	int maior;
	
    maior = N1;
    if (maior < N2)
        maior = N2;
    return(maior);
}

int main()
{
	int Num1, Num2;
	
	scanf("%d %d", &Num1, &Num2);
	printf("O maior numero corresponde ao numero %d", maior_numero(Num1, Num2));
return 0;
}
