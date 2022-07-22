#define _CRT_SECURE_NO_WARNINGS 1

/*
描述
写出一个程序，接受一个由字母、数字和空格组成的字符串，和一个字符，然后输出输入字符串中该字符的出现次数。
（不区分大小写字母）

数据范围：1≤n≤1000
输入描述：
第一行输入一个由字母和数字以及空格组成的字符串，第二行输入一个字符。

输出描述：
输出输入字符串中含有该字符的个数。（不区分大小写字母）

示例1
输入：
ABCabc
A
复制
输出：
2
*/

#include <stdio.h>
#include <ctype.h>

int get_ch_num(char* arr, char ch)
{
	int count = 0;
	int i = 0;
	while(arr[i])
	{
		if (isalpha(arr[i]))
		{
			if (tolower(ch) == tolower(arr[i])) count++;
		}
		else
		{
			if (ch == arr[i]) count++;
		}
		i++;
	}
	return count;
}

int main()
{
	char arr[1024] = { 0 };
	char ch;
	gets(arr);
	scanf("%c", &ch);
	printf("%d\n", get_ch_num(arr, ch));
    return 0;
}
