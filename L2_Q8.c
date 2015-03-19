//8. Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void menu_opcoes(){
	printf("\t\tMenu de Opcoes:\n\n");
	printf("1. Somar dois numeros\n");
	printf("2. Subtrair dois numeros\n");
	printf("3. Multiplicar dois numeros\n");
	printf("4. Dividir dois numeros\n");
    printf("5. Raiz quadrada de um numero\n\n");
}

int opcoes(int N){
	int a,b, resultado;
	
    if(N == 1){
    	printf("Escreva os numeros\n");			
	    scanf("%d %d", &a, &b);
		resultado = a + b;
		printf("A soma dos dois numeros corresponde a %d\n\n", resultado);
    }
	else if(N == 2){
			printf("Escreva os numeros\n");			
			scanf("%d %d", &a, &b);
			resultado = a - b;
			printf("A subtracao dos dois numeros corresponde a %d\n\n", resultado);
    }
    else if(N == 3){
			printf("Escreva os numeros\n");				
			scanf("%d %d", &a, &b);
			resultado = a*b;
			printf("A multiplicacao dos dois numeros corresponde a %d\n\n", resultado);
    }
    else if(N == 4){
			printf("Escreva os numeros\n");				
			scanf("%d %d", &a, &b);
			resultado = a/b;
			printf("A divisao dos dois numeros corresponde a %d\n\n", resultado);
    }
    else if(N == 5){
			printf("Escreva o numero\n");				
			scanf("%d", &a);
			resultado = sqrt(a);
			printf("A raiz quadrada do numero corresponde a %d\n\n", resultado);
    }	
}

int main()
{
	int Num;

    	menu_opcoes();
    	printf("Digite a opcao desejada:\n");
        scanf("%d", &Num);
        opcoes(Num);;
return 0;
}
