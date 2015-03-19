//11­ Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C=(5*(F32)/9).

#include <stdio.h>

float Convert_Temp(float F)
{	
    float converte;

	converte = 5*(F-32)/9;
	return(converte);
}

int main()
{
	float Fahrenheit;
	
    printf("Digite o valor da temperatura em Farenheits:\n");
    scanf("%f", &Fahrenheit);
    printf("%.2f Farenheits corresponde a %.2f Celsius", Fahrenheit, Convert_Temp(Fahrenheit));
return 0;
}
