#include <stdio.h>
//#include <string.h>

int make_strlen(char array[])
{
	//strlen 함수 구현하기
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
	//strlen() : 매개변수로 문자열을 받아
	//맨 뒤 null 문자(\0)를 제외한 문자열의 길이를 리턴하는 함수
	len = strlen(a);
	printf_s("%d", len); */
	int len;
	char arr[] = "Hello World!";

	len = make_strlen(arr);
	printf("%d\n", len);

	return 0;
}