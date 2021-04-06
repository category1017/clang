#include <stdio.h>
int main() {
	int n=0, maxCnt=0, Top=0, Max=0;
	scanf("%d",&n);
	int Vote[n];
	for(int i=0; i<n; i++){
		scanf("%d", &Vote[i]);
		if(Vote[i]> Max){
			Max = Vote[i];
		}
	}
	int Index[Max+1]; //배열크기 초기화하는 부분
	for(int i=0; i<=Max+1; i++){
		Index[i] = 0; //변수에 초기값 0 입력
	}
	for(int i=0; i<n; i++){
		Index[Vote[i]] = Index[Vote[i]] + 1;//중복값이 존재하면 카운팅이 발생
	}
	//최고값과 반복횟수 구하기
	for(int i=0;i<Max+1; i++){
		if(Index[i]> maxCnt){
			maxCnt = Index[i];
			Top = i;
		}
	}
	printf("최다 선택값 : %d, 선택한 회수: %d", Top, maxCnt);
	

	return 0;
}
