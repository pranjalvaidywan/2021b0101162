// C PROGRAM TO INSERT VALUE IN AN ARRAY

#include <stdio.h>

int main()
{
    // TAKING A LARGE SIZE OF ARRAY FOR EDITING PURPOSE

	int A[100] = { 0 };
	int i, x, pos, n = 5;

	// INTIALIZE ARRAY OF SIZE 5

	for (i = 0; i < 5; i++)
		scanf("%d",&A[i]);

	// PRINT THE ORIGINAL ARRAY

	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");

	// ELEMENT TO BE INSERTED ASKED BY USER

    printf("ENTER THE ELEMENT TO BE INSERTED ");
	scanf("%d",&x);

	// POSITION ASKED BY USER WHERE TO INSERT THE VALUE

    printf("ENTER THE POSITION WHERE TO INSERT THE VALUE ");
	scanf("%d",&pos);

	// INCREASE THE SIZE OF ARRAY BY 1

	n++;

	// SHIFTING OF ELEMENTS FORWARD

	for (i = n-1; i >= pos; i--)
		A[i] = A[i - 1];

	// INSERT THE VALUE X AT THE POSITION

	A[pos - 1] = x;

	// PRINT THE UPDATED ARRAY
	
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");

	return 0;
}
