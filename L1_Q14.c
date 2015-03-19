//14­ Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo­se que este sofreu um aumento de 25%.

#include <stdio.h>

int Salario_aum25(float S)
{	
	scanf("%f", &S);	
	printf("O salario do funcionario corresponde a R$ %.2f reais.\n", (S + S*25/100));
}

int main()
{
	float salario;
	
    Salario_aum25(salario);
return 0;
}
