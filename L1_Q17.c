/*17­ Faça um programa que receba o salário base de um funcionário, calcule e mostre o seu salário a receber,
sabendo­se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.*/

#include <stdio.h>

float Salario_aum_imp2(float S)
{	
    float gratificacao, total;
    
	gratificacao = S + 50;
	total = gratificacao - gratificacao*10/100;
	return(total);
}

int main()
{
	float salario, salario_total;
	
	scanf("%f", &salario);
    salario_total = Salario_aum_imp2(salario);
    printf("O salario a receber corresponde a R$ %.2f reais.\n", salario_total);
return 0;
}
