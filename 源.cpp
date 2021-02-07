#include<stdio.h>

int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i, j;
	for (i = 0;i < 3; i++)//先从第0行开始，整完第0行后整第一行...
	{
		for (j = 0; j < 4; j++)//相当于套娃
		{
			printf("%d", a[i][j]);
		}
		printf("\n");//此换行符在每一行打印完的后面

	}
	return 0;

}