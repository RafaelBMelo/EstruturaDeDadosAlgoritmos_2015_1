//4. Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário digitará três números diferentes.

#include<stdio.h>
#include<stdlib.h>

int maior_numero (int N1, int N2, int N3){
	int maior, aux1, aux2;
	
    if(N1<N2 && N2<N3)
       printf("%d %d %d", N1, N2, N3);
    else if (N1<N3 && N3<N2)
       printf("%d %d %d", N1, N3, N2);
    else if (N2<N3 && N3<N1)
       printf("%d %d %d", N2, N3, N1);
    else if (N2<N1 && N1<N3)
       printf("%d %d %d", N2, N1, N3);
    else if (N3<N2 && N2<N1)
       printf("%d %d %d", N3, N2, N1);
    else
       printf("%d %d %d", N3, N1, N2);
}
       
int main()
{
	int Num1, Num2, Num3;
	
	scanf("%d %d %d", &Num1, &Num2, &Num3);
	maior_numero(Num1, Num2, Num3);
return 0;
}
