//�� �� �ּ�
/*����
��
�ּ�*/

#include <stdio.h> // printf(), scanf()�� ���� �ִ� �ҽ� ����

int add(int n1, int n2); // maind()���� add()�� ����� �� �ֵ��� ����

int c; // ���� ����(global)

int main(void) // �Լ� ����(function prototype)
{
	int a; // ���� ����(local)
	int b;
	int c;
	int d;

	//scanf()�� �Է� ���� ���� ������ ��ȯ
	c = scanf_s("%d %d %d", &a, &b, &d);
	//���⼭ &�� a�� b�� �ּҸ� ��Ÿ��(scanf()���� �ʱ�ȭ ���� a�� b�� ��� �ִ��� �˷���)
	printf("%d + %d = %d\nscanf()_s's return is %d\n",a, b, add(a, b), c);
	//\n : ���๮��
	return 0;

	/*
	int a; 
	a = printf("Hello %s!", "World"); // printf() ȣ��
	printf("%d\n", a); //printf�� ����� ���� ���� ��ȯ
	
	//�����
	int a; // ���� ����
	int b = 1; // ���� ����� �ʱ�ȭ
	char c = 'c';
	a = 2; // a�� 2�� �Ҵ�, a�� 2�� ����, ���� �ʱ�ȭ(init) 
	
	//������
	printf("%d", add(a, b));  //���⼭ 1, 2�� ����(argument)

	return 0;
	*/

}

// n1, n2 ��� �Ű� ����(parameter)�� ���� ���� ��ȯ�ϴ� �Լ�
int add(int n1, int n2)
{
	return (n1 + n2);
}

/*
<unistd.h>���� write()�̶�� �Լ��� �ִ�.
write �Լ��� �Ű� �������� fd, char *, length�� �ִ�.
- fd : file descriptor �Է°� ����� ���ڷ� ǥ��
	0 - si(std in), 1 - so(std out), 2 - se(std error)
- char * : ����� ���ڿ�
- length :  ����� ���� ��
ex) write(1, "Hello world!", 3); -> ǥ�� ������� "Hel" ���
*/