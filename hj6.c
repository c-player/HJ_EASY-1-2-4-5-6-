#define _CRT_SECURE_NO_WARNINGS 1

/*
描述
功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）


数据范围： 1≤n≤2×10^9+14
输入描述：
输入一个整数

输出描述：
按照从小到大的顺序输出它的所有质数的因子，以空格隔开。

示例1
输入：
180
输出：
2 2 3 3 5
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0, i = 0;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		//最大质因子不可能大于该数的平方根
		if (i > (int)sqrt(n))
		{
			i = n;
		}
		while (n%i == 0)
		{
			printf("%d ", i);
			n /= i;
		}
	}
    return 0;
}