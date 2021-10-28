#include <stdio.h>

int main(void)
{
	/*
	// 관계 연산자
	int a = 10, b = 20, c = 30; // , : 콤마 연산자 : 같은 자료형으로 여러 개를 선언할 때 사용
	int res; // res:result, dp:dynamic programming, cnt:count, ret:return

	res = a > b; // 관계 연산자는 boolean(bit : 0(False), 1(True)) 형태의 결과값 반환
	printf_s("%d\n", res);
	res = a < c;
	printf_s("%d\n", res);
	res = a == c;
	printf_s("%d\n", res);
	res = a != c;
	printf_s("%d\n", res);
	res = !(b==c);
	printf_s("%d\n", res);
	res = !(a < b);
	printf_s("%d\n", res);
	*/

	/*
	// 논리 연산자 (&& : AND, || : OR, ! : NOT)
	int res;
	printf_s("%d\n", (15 > 10) && (30 < 15)); 
	printf_s("%d\n", (15 > 10) && (30 > 15)); // AND는 둘 다 참이면 참
	printf_s("%d\n", (15 > 10) || (30 < 15));
	printf_s("%d\n", (15 > 10) || (30 < 15)); // OR은 둘 중 하나만 참이면 참

	int a = 30;
	printf_s("%d\n", 10 < a < 20); // 1 출력
	printf_s("%d\n", (10 < a ) && (10 < 20)); // 1 출력
	*/

	/*
	// 형 변환 연산자
	// 실수형, 정수형, 문자형 간 변환이 많음
	int a = 30;
	printf("%.2lf", (double)a); // 소수점 뒤 둘째 자리에서 반올림
	*/

	/*
	// 삼항 연산자
	// (조건식) ? (참일 때 선택) : (거짓일 때 선택)
	// 특정 변수값을 조건에 따라 결정할 때 사용
	int a = 3;
	printf("%d\n", (a > 5) ? 1 : 0);
	*/

	
	// 제어문
	// 선택문, 반복문, 분기문
	
	// 선택문 if ~ else, switch ~ case
	//if (조건식) { 실행문1 } else { 실행문2 } -> 만약 조건식이 true이면 실행문1 동작, 아니면 실행문2 동작
	//+ elif문의 경우 else에 조건식 추가
	/*
	swich(조건식)
	{
		case (조건식 결과값1) : (실행문1); break; // switch문에서 탈출
		case (조건식 결과값2) : (실행문2); break;
		...
		default : (실행문)
	}*/





	return 0;
}
