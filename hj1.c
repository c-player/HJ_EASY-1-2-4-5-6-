#define _CRT_SECURE_NO_WARNINGS 1

/*
����
�����ַ������һ�����ʵĳ��ȣ������Կո�������ַ�������С��5000����ע���ַ���ĩβ���Կո�Ϊ��β��
����������
����һ�У�����Ҫ������ַ������ǿգ�����С��5000��

���������
���һ����������ʾ�����ַ������һ�����ʵĳ��ȡ�

ʾ��1
���룺
hello nowcoder
����
�����
8
����
˵����
���һ������Ϊnowcoder������Ϊ8
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
	printf("����һ���ַ�����");
	gets(arr);
	len = strlen(arr);
	printf("%d\n", get_str_len(arr, len));
	return 0;
}