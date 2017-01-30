/*
**	name：打印100~200之间的素数
**	author：侯乐 
**	date:9-7
*/
#include<stdio.h>
int main()
{
	int a,b;
	for (a = 0; a <= 100; a++)
	{
		for (b = 2; b < a; b++)
		{
			if (a%b == 0)
			{
				break;    
			}
		}
			if (a == b)
			{
				printf("%d\n", a);
			}
	}
	return 0;
}

//#include<stdio.h>
//int i, j;
//int main(void)
//{
//	
//	scanf("%s,%s", &i,&j);
//	printf("%d,%d",i, j);
//	if (i < j)
//	{
//		printf("%d\n", i);
//
//	}
//	else
//	{
//		printf("%d\n", j);
//
//	}
//
//}