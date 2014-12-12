#include <stdio.h>
/* Exemplos de algoritmos recursivos
Fatorial e Sequencia de Fibonacci */

int fat(int n)
{
	if (n==1)  // base de fim de recursao
	 	return 1;
	else
	 {
	 	return ( n * fat(n-1));  // chamada recursiva
	 }
}

int fib( int n)
{
	if ( (n==1) || (n ==2) ) // base de fim de recursao
	{
		return 1;
	}
	else
	{
		return ( fib(n-1) + fib(n-2)); // chamada recursiva
	}
		
}
		
int main()
{

	int n,i;

   printf("Digite a quantidade de termos da sequência de Fibonacci: ");
   scanf("%d", &n);
   printf("\nA sequência de Fibonacci e: \n");

   for(i=0; i<n; i++)
       printf("%d ", fib(i+1));

   getch();
	
	return 0;
	
}
