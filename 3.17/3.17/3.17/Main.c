#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A;
	float B, C, D, E, F;

	/*A:account number,B:beginning blance,C:total charges*/
	/*D:total credits ,E:credit limit    ,F:new balance  */

	printf("Enter account number (-1 to end):");
	scanf_s("%d", &A);

	while (A != -1)
	{
		printf("Enter beginning balance:");
		scanf_s("%f", &B);

		printf("Enter total charges:");
		scanf_s("%f", &C);

		printf("Enter total credits:");
		scanf_s("%f", &D);

		printf("Enter credit limit:");
		scanf_s("%f", &E);

		F = (B + C - D);
		
		if (F > E)
		{
			printf("Account:\t%d\n", A);
			printf("Credit limit:\t%.2f\n", E);
			printf("Balance:\t%.2f\n", (B + D));
			printf("Credit Limit Exceeded");
			printf("\n");
		};
		
		printf("\nEnter account number (-1 to end):");
		scanf_s("%d", &A);
		
	};

	printf("");
	 
	system("pause");
	return 0;
}
