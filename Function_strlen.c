#include <stdio.h>
//#include <string.h>

int make_strlen(char array[])
{
	//strlen �Լ� �����ϱ�
	int i, count = 0;
	for (i = 0; array[i] != '\0'; i++) {
		count++;
		//printf("%d ", count);
	}

	return count;
}

int main()
{
	/*
	int len;
	char a[6] = "hello";
	//strlen() : �Ű������� ���ڿ��� �޾�
	//�� �� null ����(\0)�� ������ ���ڿ��� ���̸� �����ϴ� �Լ�
	len = strlen(a);
	printf_s("%d", len); */
	int len;
	char arr[] = "Hello World!";

	len = make_strlen(arr);
	printf("%d\n", len);

	return 0;
}