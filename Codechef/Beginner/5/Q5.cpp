#include <iostream>

using namespace std;
int main(){

	int N=0,T,ctr,cur,prev;
	cin>>T;
	
	while(T--){
		cin>>N;
		long long ans=0;

		for (int i=0;i<N;i++){
			cin>>cur;

			if(i==0){
				ctr=1;
			}
			else{
				if(cur>=prev){
					++ctr;
				}
				else{
					ctr=1;
				}
			}
			ans+=ctr;
			prev = cur;
		}
		cout<<ans<<endl;
	}
	return 0;
}

/*
https://www.codechef.com/problems/SUBINC


*/