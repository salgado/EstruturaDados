#include <stdio.h>
/* Algoritmo de ordenacao SelectionSort - Complexidade - O(n2) */

void imprimeVet(int tam , int *vetor)
{
	int i;
	
	for(i=0;i<tam; i++)
	{
		printf("%d,", vetor[i]);
	}
}

void selectionSort(int tam, int *vetor)
{
	int i, j, iMin, temp;
	for(i=0;i<tam-1;i++)	
	{
		iMin = i;
		for (j=i+1; j<tam;j++)
		{
			if (vetor[j] < vetor[iMin])
			{
				iMin = j;
			}
		}
		
		temp = vetor[i];
		vetor[i]=vetor[iMin];
		vetor[iMin] = temp;
		
	}
}


int main()
{
	int vet[6]={20,80, 70, 21, 31, 33};

	imprimeVet(6, vet);
    printf("\n");	
	
	selectionSort(6, vet);
	
	printf("\n");	
	imprimeVet(6, vet);
	getch();
	return 0;
}
