#include <stdio.h> //#으로 시작하는 명령어는 메크로명령어라고 함
#define AGE 28  // 메크로명령어 끝에는 ; 없음.
#define PI 3.141592
#define NAME "김범주" //메크로로 정의한 상수
const int a=10; //const명령어로 상수를 정의 
const float b=10.56789;
const char c ='K';				//char 단일문자타입형태
const char *OPEN="오픈소스그룹"; //char* 포인터변수

void main(){
	int i=28;
	float j=4.0;
	char k='A';
	char ch[10] = "홍길동"; //char 배열문자
	char *p="프로그래머"; //char *포인터변수
	printf("기관은 %s\n이름은 %s\n나이는 %d\n", OPEN,NAME,AGE); //각각 바인딩시킴
	printf("-------------------------------------------------\n");
	printf("%s %s\n나이는 %d\n직급은 %c\n평점은 %f\n", p,ch,i,k,j);
}