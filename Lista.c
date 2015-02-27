#include <stdlib.h>
/* Algoritmo simples para construcao do TAD Lista */

typedef struct no
{
    int info;
    struct no *prox;
} Lista;


struct no
{
    int info;
    struct no *prox;
};

typedef struct no Lista;
*/
Lista *cria()
{
	return NULL;
}

Lista* insere(int n, Lista* l)
{
	Lista *novo = (Lista*)malloc(sizeof(Lista));
	novo->n = n;
	novo->prox = l;
	
	return novo;	
	
}

void imprime (Lista *l)
{
	Lista *lista;
	
	for(lista=l;lista != NULL; lista = lista->prox )
	{
		printf("%d\n", lista->n);
	}
}

int main()
{
	Lista *lista;
	lista = cria();

	lista = insere( 1, lista);
	lista = insere( 11, lista);
	lista = insere( 13, lista);
	
	imprime(lista);
	
	return 0;
}
