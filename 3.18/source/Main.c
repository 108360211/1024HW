#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float A, B;   /*A:sales in dollars,B:salary*/

	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f", &A);

	while (A != -1)
	{
		B = (A * (0.09) + 200);
		printf("Salary is: $%.2f\n", B);
		
		printf("\nEnter sales in dollars(-1 to end):");
		scanf_s("%f", &A);
	}
	
	system("pause");
	return 0;
}
