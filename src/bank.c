#include <stdio.h>
void main(){
	printf("안녕하세요 C언어 은행입출금 프로그램입니다.\n");
	int choic, total, inputMoney, drawMoney;
	total = 0;
	while(1){
		printf("1.예금 / 2.출금 / 3.잔고 / 4.종료 : ");
		scanf("%d", &choic);
		if(choic == 1){
			printf("현재금액 : %d원\n", total);
			printf("얼마를 입금하시겠습니까? : ");
			scanf("%d", &inputMoney);
			total = total + inputMoney;
			
			printf("예금 성공! 현재금액 : %d원\n\n\n", total);
		}
		else if (choic ==2){
			printf("현재금액 : %d원\n", total);
			printf("얼마를 출금하시겠습니까? : ");
			scanf("%d", &drawMoney);
			if(drawMoney> total){
				printf("잔액이 부족합니다. \n\n\n");
			}else{
				total = total - drawMoney;
				printf("출금 성공! 현재 잔액 : %d원\n\n\n", total);
			}
		}else if (choic ==3){
			printf("현재 잔액 : %d원\n\n\n", total);
		}
		else if (choic ==4){
			printf("현재 잔액 : %d원\n\n\n", total);
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else {
			printf("잘못 입력했습니다.다시 입력해주세요. \n\n\n");
		}
	}
}