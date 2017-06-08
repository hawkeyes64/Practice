#include<stdio.h>
int main(){
	int tests, n, flag, total;
 
	scanf("%d",&tests);
 
	while(tests--){
		flag = 0;
		total = 0;
		scanf("%d",&n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
 
 
			if(a[i]==0){
				total += 1100;
				flag = 1;
			}
			else if(a[i]==1 && flag==1){
				total += 100;
			}
		}
		printf("%d\n",total);
 
	}
 
}

/*
https://www.codechef.com/problems/CHEFAPAR

Example

Input
4
2
1 1
2
0 0
3
0 1 0
2
0 1

Output
0
2200
2300
1200
*/