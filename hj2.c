#define _CRT_SECURE_NO_WARNINGS 1

/*
����
д��һ�����򣬽���һ������ĸ�����ֺͿո���ɵ��ַ�������һ���ַ���Ȼ����������ַ����и��ַ��ĳ��ִ�����
�������ִ�Сд��ĸ��

���ݷ�Χ��1��n��1000
����������
��һ������һ������ĸ�������Լ��ո���ɵ��ַ������ڶ�������һ���ַ���

���������
��������ַ����к��и��ַ��ĸ������������ִ�Сд��ĸ��

ʾ��1
���룺
ABCabc
A
����
�����
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
