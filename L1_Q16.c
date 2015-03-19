//16­ Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo­se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% sobre este salário.

#include <stdio.h>

float Salario_aum_imp(float S)
{	
    float gratificacao, total;
    
	gratificacao = S + S*5/100;
	printf("%.2f\n", gratificacao);
	total = gratificacao - gratificacao*7/100;
    printf("%.2f\n", total);
	return(total);
}

int main()
{
	float salario, salario_total;
	
	scanf("%f", &salario);
    salario_total = Salario_aum_imp(salario);
    printf("O salario a receber corresponde a R$ %.2f reais.\n", salario_total);
return 0;
}
