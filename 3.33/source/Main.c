#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length, breadth, i, j;
	char sign1 = ' ';
	char sign2 = '+';

	printf("輸入欲顯示矩形的長和寬，中間使用空白間隔\n");
	scanf_s("%d%d",&length,&breadth);

	for (i = 0; i < length; i++)
	{
		for (j = 0;j < breadth; j++)
		{
			if ((i == 0) || (i == (length-1)) || 
				(j == 0) || (j == (breadth-1)))
			{
				printf("%c", sign2);
			}
			else
			{
				printf("%c", sign1);
			};
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
