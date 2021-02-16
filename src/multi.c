#include <stdio.h> // 라이브러리 임포트
int multi(int x, int y); //함수 명세 표시 = 스프링의 인터페이스와 같은 역할, 없어도됨 

void main(){
	int a, b, c; //int정수형 변수 a,b,c선언
	printf("곱하기할 첫번째 수를 입력하세요 : ");
	scanf("%d", &a); //%d 형태 중 decimal형-십진수
	printf("곱하기할 두번째 수를 입력하세요 : ");
	scanf("%d", &b);
	c = multi(a,b); //함수호출
	printf("실행결과 : %d * %d = %d 입니다. \n",a,b,c); //%d 각각 a,b,c 
	//\n은 newLine줄바꿈
	
}

//메서드 구현
int multi(int x, int y){
	return (x*y);
}
