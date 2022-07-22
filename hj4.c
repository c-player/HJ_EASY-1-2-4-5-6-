#define _CRT_SECURE_NO_WARNINGS 1

/*
描述
•输入一个字符串，请按长度为8拆分每个输入字符串并进行输出；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
输入描述：
连续输入字符串(每个字符串长度小于等于100)

输出描述：
依次输出所有分割后的长度为8的新字符串

示例1
输入：
abc

输出：
abc00000
*/

#include <stdio.h>
#include <string.h>

int main()
{
	int len = 0, i = 0;
	char str[110] = { 0 };
	gets(str);
	len = strlen(str);
	if (len % 8)
	{
		for (i = len; i < len + 8 - len % 8; i++)
		{
			str[i] = '0';
		}
		str[i] = '\0';
		for (i = 0; i < len + 8 - len % 8; i++)
		{
			if (i % 8 == 0 && i)
				putchar('\n');
			putchar(str[i]);
		}
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			if (i % 8 == 0 && i)
				putchar('\n');
			putchar(str[i]);
		}
	}
    return 0;
}