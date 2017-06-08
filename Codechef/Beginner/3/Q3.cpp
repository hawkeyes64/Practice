
#include <stdio.h>
int main(){
	int TC, N, K, T, D, cost;
 
	scanf("%d",&TC);
	while(TC--){
		scanf("%d %d",&N, &K);
		cost=0;
		for(int i=0;i<N;i++){
			scanf("%d %d",&T, &D);
			while(K>0 && T>0){
				K--;
				T--;
			}
			if(K==0){
				cost+=(T*D);
			}
		}
		printf("%d\n", cost);
	}
	return 0;
} 
/*
https://www.codechef.com/problems/DWNLD
Example

Input:
3
2 2
2 1
2 3
2 2
1 2
2 3
3 0
1 2
2 4
10 10
Output:
6
3
110
*/