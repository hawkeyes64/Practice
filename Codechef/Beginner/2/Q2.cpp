#include <iostream>
#include <string.h>
 
using namespace std;
 
int main(){
	int T, N;
	cin>>T;
	while(T--){
		bool o=true;
		cin>>N;
		string s[N+1];
		for(int i=0;i<N;i++){
			cin>>s[i];
		}
 
		if(N>1){
			for(int i=0;i<N;i++){
				if(s[i]=="cookie" && s[i+1]!="milk"){
					o = false;
				}
			}
		}
 
		else{
			if(s[0]=="cookie"){
				o = false;
			}
		}
		if(o==true){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
 
	return 0;
} 

/*
https://www.codechef.com/problems/COOMILK

Example

Input:
4
7
cookie milk milk cookie milk cookie milk
5
cookie cookie milk milk milk
4
milk milk milk milk
1
cookie

Output:
YES
NO
YES
NO
*/