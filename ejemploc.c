#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main() {
	int n1, n2, suma;
	
	printf ("\n Introduzca primer número:");
	scanf ("%d", &n1);
	printf ("\n Introduzca segundo número:");
	scanf ("%d", &n2);
	
	suma = n1 + n2;
	printf("\n La suma es: %d", suma );
	getch(); 
	return 0;
}
