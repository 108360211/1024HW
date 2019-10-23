#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 9; i ++)
	{
		for (j = 1; j <= 9; j++)
		{
			if ((i == 1) || (i == 9))
			{
				if (j == 5)
				{
					printf("%s", "*");
				}
				else
				{
					printf("%s", " ");
				};
			}
			else if ((i == 2) || (i == 8))
			{
				if ((j == 4) || (j == 5) || (j == 6))
				{
					printf("%s", "*");
				}
				else
				{
					printf("%s", " ");
				};
			}
			else if ((i == 3) || (i == 7))
			{
				if ((j == 3) || (j == 4) || (j == 5) || (j == 6) || (j == 7))
				{
					printf("%s", "*");
				}
				else
				{
					printf("%s", " ");
				};
			}
			else if ((i == 4) || (i == 6))
			{
				if ((j != 1) && (j != 9))
				{
					printf("%s", "*");
				}
				else
				{
					printf("%s", " ");
				};
			}
			else if (i == 5)
			{
				printf("%s", "*");
			};
		}
		printf("\n");
	}
	system("pause");
	return 0;
}