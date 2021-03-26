#include <stdio.h>
//이 프로그램은 키보드로 입력받은 숫자배열을 오름차순 정렬하는 C프로그램입니다. 

int main() {
	int n, prev, next, Temp;	
	int Numbers[n];
	scanf("%d",&n);//키보드로 Numbers[]에 들어갈 크기 지정
	for(int i=0; i<n; i++){
		scanf("%d", &Numbers[i]);
	}
	// 디버그 : 입력값이 제대로 입력되었는지 확인 (정렬전)
	/*
	for(int i=0; i<n;i++){
		printf("%d", Numbers[i]);
	}*/
	printf("\n");
//이중for문을 이용한 정렬로직(아래)
	for(prev=0; prev<n-1;prev++){
		for(next=prev+1;next<n;next++){
			if(Numbers[prev]>Numbers[next]){
				Temp=Numbers[prev];
				Numbers[prev]=Numbers[next];
				Numbers[next]=Temp;
			}
		}
	}//정렬후
	for(int i=0; i<n;i++){
		printf("%d ", Numbers[i]);
	}
	return 0;
}
