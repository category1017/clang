#include <stdio.h>//전처리 내장헤더파일<> 외장헤더파일은 <>없음

void main(){
	printf("C언어 구구단 프로그램입니다.\n");
	int cnt, sub_cnt;
	
	for(cnt=1;cnt<=9;cnt++){
		for(sub_cnt=1;sub_cnt<=9;sub_cnt++){
			printf(" %d  x  %d =  %d \n", cnt, sub_cnt, cnt*sub_cnt);
		}
		printf("----------------\n");
	}
}