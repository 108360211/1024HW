#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float A, B, C;   /*A:hours  ,B:hourly of the worker
					   C:Salary*/

	printf("Enter # of hours worked (-1 to end):");
	scanf_s("%f", &A);

	while (A != -1)
	{
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &B);

		if (A <= 40)
		{
			C = A * B;
		}
		else
		{
			C = 40 * B + (A - 40)*(1.5*B);
		}
		
		printf("Salary is $%.2f\n", C);

		printf("\nEnter # of hours worked (-1 to end):");
		scanf_s("%f", &A);
	}

	system("pause");
	return 0;
}
