#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float A, B, C, D;   /*A:loan principal  ,B:interest rate
						  C:term of the loan,D:interest charge*/

	printf("Enter loan principal (-1 to end):");
	scanf_s("%f", &A);

	while (A != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f", &B);
		
		printf("Enter term of the loan in days:");
		scanf_s("%f", &C);

		D = A * B*C / 365;
		printf("The interest charge is $%.2f\n",D);
		

		printf("\nEnter sales in dollars(-1 to end):");
		scanf_s("%f", &A);
	}

	system("pause");
	return 0;
}
