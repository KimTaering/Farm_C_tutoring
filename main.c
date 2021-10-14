//한 줄 주석
/*여러
줄
주석*/

#include <stdio.h> // printf(), scanf()를 갖고 있는 소스 파일

int add(int n1, int n2); // maind()에서 add()가 실행될 수 있도록 선언

int c; // 전역 변수(global)

int main(void) // 함수 원형(function prototype)
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
	*/

}

// n1, n2 라는 매개 변수(parameter)를 더한 값을 반환하는 함수
int add(int n1, int n2)
{
	return (n1 + n2);
}

/*
<unistd.h>에는 write()이라는 함수가 있다.
write 함수의 매개 변수에는 fd, char *, length가 있다.
- fd : file descriptor 입력과 출력을 숫자로 표현
	0 - si(std in), 1 - so(std out), 2 - se(std error)
- char * : 출력할 문자열
- length :  출력할 문자 수
ex) write(1, "Hello world!", 3); -> 표준 출력으로 "Hel" 출력
*/