//6. Faça um programa que receba um número inteiro e verifique se é par ou ímpar.

#include<stdio.h>
#include<stdlib.h>

int par_impar (int N){
	if(N%2 == 0)
	   printf("%d eh par.\n", N);
	else
       printf("%d eh impar.\n", N);
}

int main()
{
	int Num;
	
	scanf("%d", &Num);
    par_impar(Num);
return 0;
}
