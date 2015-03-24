#include<stdio.h>
#include<stdlib.h>

float crescente(float *N1, float *N2, float *N3){
	float aux;
	
	if(*N1 > *N2 && *N2 > *N3){
	    aux = *N3;
	    *N3 = *N1;
	    *N1 = aux;
    }
    else if(*N1 > *N3 && *N3 > *N2){
	    aux = *N2;
	    *N2 = *N3;
	    *N3 = *N1;
	    *N1 = aux;
    }
    else if(*N2 > *N1 && *N1 > *N3){
	    aux = *N2;
	    *N2 = *N1;
	    *N3 = aux;
	    *N1 = *N3;
    }
	else if(*N2 > *N3 && *N3 > *N1){
	    aux = *N2;
	    *N2 = *N3;
	    *N3 = aux;
    }
    else if(*N3 > *N1 && *N1 > *N2){
	    aux = *N2;
	    *N2 = *N1;
	    *N1 = aux;
    }	 	 
}

float decrescente(float *N1, float *N2, float *N3){
	float aux;
	
    if(*N1 > *N3 && *N3 > *N2){
	    aux = *N2;
	    *N2 = *N3;
	    *N3 = *N1;
    }
    else if(*N2 > *N1 && *N1 > *N3){
	    aux = *N1;
	    *N1 = *N2;
	    *N2 = aux;
    }
	else if(*N2 > *N3 && *N3 > *N1){
	    aux = *N1;
	    *N1 = *N2;
	    *N2 = *N3;
	    *N3 = aux;
    }
    else if(*N3 > *N2 && *N2 > *N1){
	    aux = *N1;
	    *N1 = *N3;
	    *N3 = aux;
    }
	else if(*N3 > *N1 && *N1 > *N2){
		aux = *N2;
	    *N2 = *N1;
		*N1 = *N3;
		*N3 = aux;
	}	 	 
}

float meio(float *N1, float *N2, float *N3){
	float aux;
	
	if((*N1 > *N2 && *N1 < *N3) || (*N1 < *N2 && *N1 > *N3)){
		aux = *N1;
		*N1 = *N2;
		*N2 = aux;
	}
	else if((*N3 > *N1 && *N3 < *N2) || (*N3 < *N1 && *N3 > *N2)){
		aux = *N3;
		*N3 = *N2;
		*N2 = aux;
	}
}


int main()
{
	int I;
	float A, B, C;
	
	scanf("%d", &I);
	scanf("%f %f %f", &A, &B, &C);
	if (I==1)
	   crescente(&A, &B, &C);
	else if (I==2)
	   decrescente(&A,&B,&C);
	else
	   meio(&A, &B, &C);
	printf("%.1f %.1f %.1f", A, B, C);
	return 0;
}
