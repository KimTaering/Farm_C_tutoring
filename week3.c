#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// main() 의 첫번째 매개변수는 인덱스
// 두 번째 매개변수 argv는 이중포인터로 입력받는 미개변수를 문자열로 담고 인덱스를 붙인다.
// 0 : a.out(실행파일의 이름), 1 ~ : 입력받는 인자 순서대로 저장
// asterisk(애스터리스크) * = '모든' (ex) *.exe : 확자자를 가진 모든 파일

// <제어 문자>
// \n : new line 개행 문자, 다음 행으로 넘어가는 것은 아님
// \r : carriage return 맨 앞으로 이동 (Cow\rW -> Wow)
// \b : backsapce 왼쪽 이동 (hella\bo -> hello)
// \t : 지정된 크기 만큼 space
// \0 : null(NULL) 널 문자(없음을 뜻하는 문자) 음

// <변환 문자>
// %d : decimal, 10진 정수
// %lf : long float(double, long double), 실수
// %s : string, 문자열 " " 큰 따옴표 사용
// %c : character, 문자 ' ' 작은 따옴표 사용
// sizeof() : 크기를 리턴

// int a = 10; // int형 변수 a를 선언함과 동시에 값 10 대입
// 선언 & 초기화 형태 : (자료형) (변수명) (대입연산자) (값);
// char a[6] = "hello"; // 6byte : h e l l o \0 문자열 선언 및 할당
// 배열 선언 & 초기화 형태 : (자료형) (변수명) [(배열의 크기+1)]
//값에는 상수, 변수, 수식 모두 대입 가능

// <정수 자료형 크기 비교>
// 2byte short(-32768~32767)
// 4byte int(-2147483648~-2147483647)
// 8byte long long (int) 생략
// sign : (+), (-) 부호
// unsigned : sign(부호)가 양수만 존재하는 자료형, 생략함

//<예약어와 식별자>
// const : constant상수, 선언과 동시에 "꼭" 초기화, 이후 수정 절대 불가
// 예약어 : 컴파일러와(with) 사용 방법이 약속된 언어
// 식별자 : 필요에 따라 만들어 사용하는 단어 (ex) 변수명
// 알파벳 대소문자, 숫자, '_'로만 이루어지며, 숫자로 시작할 수 없다.
// URL과 달리 대소문자를 구분함. 예약어는 식별자로 이용할 수 없다.

//주요 연산자
int main(void)
{
	int a = 4;
	int b = 7;
	int c = a + 3;
	int d, e;

	a = a + 2;
	b += a; // b = b + a , 더하기 연산 후 대입 연산, 다른 연산자에도 적용 가능
	d = b / a; // 몫
	e = b % a; // 나머지 연산

	printf_s("a = %d\nb = %d\nc = %d\n", a, b, c);
	printf_s("d = %d\ne = %d\n", d, e);

	// a++; a = a + 1, 증가 연산자 후위 표기
	// ++a; 증가 연산자 전위 표기, 먼저 계산

	return 0;
}

/*
int add(int n1, int n2); // maind()에서 add()가 실행될 수 있도록 선언
int c; // 전역 변수(global)
int week2(void) // 함수 원형(function prototype)
{
	int a; // 지역 변수(local)
	int b;
	int c;
	int d;

	//scanf()는 입력 받은 값의 개수를 반환
	c = scanf_s("%d %d %d", &a, &b, &d);
	//여기서 &는 a와 b의 주소를 나타냄(scanf()에게 초기화 해줄 a와 b가 어디에 있는지 알려줌)
	printf("%d + %d = %d\nscanf()_s's return is %d\n",a, b, add(a, b), c);
	//\n : 개행문자
	return 0;

	/*
	int a; 
	a = printf("Hello %s!", "World"); // printf() 호출
	printf("%d\n", a); //printf는 출력한 문자 수를 반환
	
	//선언부
	int a; // 변수 선언
	int b = 1; // 변수 선언과 초기화
	char c = 'c';
	a = 2; // a에 2를 할당, a에 2를 대입, 변수 초기화(init) 
	
	//구현부
	printf("%d", add(a, b));  //여기서 1, 2는 인자(argument)

	return 0;
}
*/

/*
// n1, n2 라는 매개 변수(parameter)를 더한 값을 반환하는 함수
int add(int n1, int n2)
{
	return (n1 + n2);
}


<unistd.h>에는 write()이라는 함수가 있다.
write 함수의 매개 변수에는 fd, char *, length가 있다.
- fd : file descriptor 입력과 출력을 숫자로 표현
	0 - si(std in), 1 - so(std out), 2 - se(std error)
- char * : 출력할 문자열
- length :  출력할 문자 수
ex) write(1, "Hello world!", 3); -> 표준 출력으로 "Hel" 출력
*/