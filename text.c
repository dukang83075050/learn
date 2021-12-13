//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//#include<stdio.h>
////函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//void Swap (int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;//写一个函数-交换两个整型变量的值（Swap）
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap (a, b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0; 
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;//4个字节空间
//	int* pa = &a;//pa是一个指针变量
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//#include<stdio.h>
////函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//void Swap (int *pa, int *pb)
//{
//	int z = 0;
//	z = *pa; 
//	*pa = *pb;
//	*pb=z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;//写一个函数-交换两个整型变量的值（Swap）
//	printf("交换前:a=%d b=%d\n", a, b);
//	Swap (&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0; 
//}

//写一个函数判断是不是素数
//
//#include<stdio.h>
//int is_prime(int n)
//{
////2->n-1之间的数
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if(is_prime(i)==1)
//		{
//			count++;
//			printf("\ncount=%d\n",count);
//
//		}
//	}
//}



//#include<stdio.h>
////is_leap_year
////如果是闰年返回一；
////如果不是闰年返回0；
//is_leap_year(int n)
//
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	printf("helow world\n");
	main();
	return 0;
}