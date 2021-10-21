#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// main() �� ù��° �Ű������� �ε���
// �� ��° �Ű����� argv�� ���������ͷ� �Է¹޴� �̰������� ���ڿ��� ��� �ε����� ���δ�.
// 0 : a.out(���������� �̸�), 1 ~ : �Է¹޴� ���� ������� ����
// asterisk(�ֽ��͸���ũ) * = '���' (ex) *.exe : Ȯ���ڸ� ���� ��� ����

// <���� ����>
// \n : new line ���� ����, ���� ������ �Ѿ�� ���� �ƴ�
// \r : carriage return �� ������ �̵� (Cow\rW -> Wow)
// \b : backsapce ���� �̵� (hella\bo -> hello)
// \t : ������ ũ�� ��ŭ space
// \0 : null(NULL) �� ����(������ ���ϴ� ����) ��

// <��ȯ ����>
// %d : decimal, 10�� ����
// %lf : long float(double, long double), �Ǽ�
// %s : string, ���ڿ� " " ū ����ǥ ���
// %c : character, ���� ' ' ���� ����ǥ ���
// sizeof() : ũ�⸦ ����

// int a = 10; // int�� ���� a�� �����԰� ���ÿ� �� 10 ����
// ���� & �ʱ�ȭ ���� : (�ڷ���) (������) (���Կ�����) (��);
// char a[6] = "hello"; // 6byte : h e l l o \0 ���ڿ� ���� �� �Ҵ�
// �迭 ���� & �ʱ�ȭ ���� : (�ڷ���) (������) [(�迭�� ũ��+1)]
//������ ���, ����, ���� ��� ���� ����

// <���� �ڷ��� ũ�� ��>
// 2byte short(-32768~32767)
// 4byte int(-2147483648~-2147483647)
// 8byte long long (int) ����
// sign : (+), (-) ��ȣ
// unsigned : sign(��ȣ)�� ����� �����ϴ� �ڷ���, ������

//<������ �ĺ���>
// const : constant���, ����� ���ÿ� "��" �ʱ�ȭ, ���� ���� ���� �Ұ�
// ����� : �����Ϸ���(with) ��� ����� ��ӵ� ���
// �ĺ��� : �ʿ信 ���� ����� ����ϴ� �ܾ� (ex) ������
// ���ĺ� ��ҹ���, ����, '_'�θ� �̷������, ���ڷ� ������ �� ����.
// URL�� �޸� ��ҹ��ڸ� ������. ������ �ĺ��ڷ� �̿��� �� ����.

//�ֿ� ������
int main(void)
{
	int a = 4;
	int b = 7;
	int c = a + 3;
	int d, e;

	a = a + 2;
	b += a; // b = b + a , ���ϱ� ���� �� ���� ����, �ٸ� �����ڿ��� ���� ����
	d = b / a; // ��
	e = b % a; // ������ ����

	printf_s("a = %d\nb = %d\nc = %d\n", a, b, c);
	printf_s("d = %d\ne = %d\n", d, e);

	// a++; a = a + 1, ���� ������ ���� ǥ��
	// ++a; ���� ������ ���� ǥ��, ���� ���

	return 0;
}

/*
int add(int n1, int n2); // maind()���� add()�� ����� �� �ֵ��� ����
int c; // ���� ����(global)
int week2(void) // �Լ� ����(function prototype)
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
}
*/

/*
// n1, n2 ��� �Ű� ����(parameter)�� ���� ���� ��ȯ�ϴ� �Լ�
int add(int n1, int n2)
{
	return (n1 + n2);
}


<unistd.h>���� write()�̶�� �Լ��� �ִ�.
write �Լ��� �Ű� �������� fd, char *, length�� �ִ�.
- fd : file descriptor �Է°� ����� ���ڷ� ǥ��
	0 - si(std in), 1 - so(std out), 2 - se(std error)
- char * : ����� ���ڿ�
- length :  ����� ���� ��
ex) write(1, "Hello world!", 3); -> ǥ�� ������� "Hel" ���
*/