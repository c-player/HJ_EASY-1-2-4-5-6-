#define _CRT_SECURE_NO_WARNINGS 1

/*
描述
计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。（注：字符串末尾不以空格为结尾）
输入描述：
输入一行，代表要计算的字符串，非空，长度小于5000。

输出描述：
输出一个整数，表示输入字符串最后一个单词的长度。

示例1
输入：
hello nowcoder
复制
输出：
8
复制
说明：
最后一个单词为nowcoder，长度为8
*/

#include <stdio.h>
#include <string.h>

int get_str_len(char* arr, int n)
{
	int count = 0;
	while (*(arr + n - 1) != ' ')
	{
		n--;
		count++;
		if (n == 0)
		{
			break;
		}
	}
	return count;
}

int main()
{
	char arr[5000] = { 0 };
	int len = 0;
	printf("输入一行字符串：");
	gets(arr);
	len = strlen(arr);
	printf("%d\n", get_str_len(arr, len));
	return 0;
}