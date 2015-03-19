//10­ Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

float Salario(float V_H, float N_H)
{	
	printf("Quanto voce ganha por hora?\n");
	scanf("%f", &V_H);
	printf("Voce trabalhou quantas horas neste mes?\n");
	scanf("%f", &N_H);	
	printf("O seu salario neste mes corresponde a R$ %.2f reais.\n", V_H*N_H);
}

int main()
{
	float valor_horas, num_horas;
	
    Salario(valor_horas, num_horas);
return 0;
}
