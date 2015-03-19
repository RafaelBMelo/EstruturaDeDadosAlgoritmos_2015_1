/*Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a
mensagem constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a 
nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0.*/

#include<stdio.h>
#include<stdlib.h>

int media_aluno (float N1, float N2, float N3){
	float med_aritmetica, final;
	
    med_aritmetica = (N1 + N2 + N3)/3;
    printf("A media aritmetica do aluno corresponde a %.1f. , o status do aluno eh ", med_aritmetica);
    if (med_aritmetica >= 7 && med_aritmetica <= 10){
        printf("Aprovado\n");
    }
    else if (med_aritmetica >= 3 && med_aritmetica < 7){
        printf("Exame\n");
        final = 12 - med_aritmetica;
        printf("O aluno devera tirar a nota %.1f na prova final.\n", final);
    }
	    else if (med_aritmetica >= 0 && med_aritmetica < 3){
        printf("Reprovado\n");
    }

}

int main()
{
	float Nota1, Nota2, Nota3;
	int media;
	
	scanf("%f %f %f", &Nota1, &Nota2, &Nota3);
	media = media_aluno(Nota1, Nota2, Nota3);
return 0;
}
