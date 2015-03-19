//1-Faça um programa que receba as três notas; calcule e mostre a média ponderada e o conceito que segue a tabela:

#include<stdio.h>
#include<stdlib.h>

int media_aluno (float Trb, float Av, float Ex){
	float med_pond;
	
    med_pond = (Trb*2 + Av*3 + Ex*5)/(2+3+5);
    printf("A media ponderada do aluno corresponde a %.1f.\n", med_pond);
    if (med_pond >= 8 && med_pond <= 10){
        printf("Conceito do aluno: A\n");
    }
    else if (med_pond >= 7 && med_pond < 8){
        printf("Conceito do aluno: B\n");
    }
	    else if (med_pond >= 6 && med_pond < 7){
        printf("Conceito do aluno: C\n");
    }
	    else if (med_pond >= 5 && med_pond < 6){
        printf("Conceito do aluno: D\n");
    }
        else if (med_pond >=0 && med_pond < 5){
        printf("Conceito do aluno: E\n");
    }     
}

int main()
{
	float trab, avalia, exam;
	int media_pond;
	
	scanf("%f %f %f", &trab, &avalia, &exam);
	media_pond = media_aluno(trab, avalia, exam);
return 0;
}
