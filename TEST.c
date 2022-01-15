#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	char c = 0;
//	scanf("%d%c%d", &a, &c, &b);
//	switch (c)
//	{
//	case'+':
//		printf("%d\n", a + b);
//		break;
//	case'-':
//		printf("%d\n", a - b);
//		break;
//	case'*':
//		printf("%d\n", a * b);
//		break;
//	case'/':
//		if (b != 0)
//			printf("%d\n", a / b);
//		else
//			printf("除数不能为零\n");
//		break;
//	default:
//		printf("输入有误\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a[11][11] = { 0 };
//	for (i = 1; i < 11; i++)
//	{
//		a[i][i] = 1;
//		a[i][1] = 1;
//	}
//	for (i = 3; i < 11; i++)
//	{
//		for (j = 1; j <= i - 1; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 1; i < 11; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%4d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 1;
//	printf("time  red ball  white ball  black ball\n");
//	for (i = 0; i <= 3; i++)
//	{
//		for (j = 0; j <= 3; j++)
//		{
//			if ((8 - i - j) <= 6)
//				printf("%3d%8d%9d%10d\n", count++, i, j, 8 - i - j);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int f = 0;
//	int l = 0;
//	int m ;
//	int n = 1;
//	int i = 0;
//	int sum = 0;
//	while (1)
//	{
//		m = n;
//		for (i = 1; i < 8; i++)
//		{
//			m = m * 2;
//			sum += m;
//		}
//		sum += n;
//		if (sum == 765)
//		{
//			printf("f %d\n", n);
//			printf("l %d\n", m);
//			break;
//		}
//		n++;
//	}
//	return 0;
//}


