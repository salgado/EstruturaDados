#include <stdio.h>
/* Algoritmo de ordenacao MergeSort - Complexidade - O(nLog(n)) */

void imprimeVet(int tam , int *vetor)
{
	int i;
	
	for(i=0;i<tam; i++)
	{
		printf("%d,", vetor[i]);
	}
}

void merge( int *leftV, int tamL, int *rigthV, int tamR, int *mainVet)
{
	int i=0, j=0, k =0;
	
	while ((i<tamL) && (j< tamR))
	{
		if (leftV[i] <= rigthV[j])
		{
			mainVet[k]=leftV[i];
			i++;
		}
		else
		{
			mainVet[k]=rigthV[j];
			j++;
		}
		k++;
	}
	
	while(i<tamL)
	{
		mainVet[k]=leftV[i];
		i++;
		k++;
	}
	while(j<tamR)
	{
		mainVet[k]=rigthV[j];
		j++;
		k++;
	}
		
	
}

void mergeSort(int tam, int *vetor)
{
	int meio = tam/2;
	int i=0;
	
	if (tam < 2)
		return;
	
	int esq = meio;
	int dir = tam - meio;
	int vetEsquerdo[esq];
	int vetDireito[dir];

	for(i=0;i<(meio);i++)
	{
		vetEsquerdo[i]=vetor[i];
	}
	for(i=meio;i<(tam);i++)
	{
		vetDireito[i-meio]=vetor[i];
	}

	mergeSort(esq, vetEsquerdo);
	mergeSort(dir, vetDireito);
	
	merge(vetEsquerdo, esq, vetDireito, dir, vetor);
}


int main()
{
	int vet[6]={20,80, 70, 21, 31, 33};
	
	printf("\n1-endereco %g", &vet );
	mergeSort(6, vet);
	imprimeVet(6, vet);
	
	return 0;
}
