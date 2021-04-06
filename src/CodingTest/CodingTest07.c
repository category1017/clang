#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int Score[n], Rank[n];
	for(int i=0; i<n; i++){
		scanf("%d", &Score[i]);
		Rank[i] = 0;
	}	
	for(int i=0; i<n; i++){
		for(int comp=0; comp<n; comp++){
			if(Score[i]< Score[comp]){
				Rank[i] = Rank[i]+1;
			}
		}
		Rank[i] = Rank[i] + 1;
	}
	
	for(int i=0; i<n; i++){
		printf("%d 번 학생의 점수는 : %3d, 등수는 : %2d \n", i, Score[i], Rank[i]); //%3d -> 3자리까지  %2d->2자리까지
	}
	return 0;
}
