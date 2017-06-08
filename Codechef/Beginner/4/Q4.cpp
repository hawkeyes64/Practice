#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
using std::find;
using std::vector;
int main(){
	int T;
 
	cin>>T;
	while(T--){
		int in[2];
 
		for(int i=0;i<2;i++){
			cin>>in[i];
		}
 
		int A[in[0]], B[in[1]], input;
		vector<int> vec_a,vec_b,vec_c;
 
		for(int i=0;i<in[0];i++){
			cin>>input;
			vec_a.push_back(input);
		}
 
		for(int i=0;i<in[1];i++){
			cin>>input;
			vec_b.push_back(input);
		}
		std::sort(vec_a.begin(), vec_a.end());
		std::sort(vec_b.begin(), vec_b.end());
 
		std::set_intersection (
			vec_a.begin(), vec_a.end(),
			vec_b.begin(), vec_b.end(), 
			std::inserter(vec_c,vec_c.begin()));
 
		cout<<vec_c.size()<<endl;
 
	}
 
	return 0;
} 
/*
https://www.codechef.com/problems/NOTINCOM
Example

Input:
2
3 4
1 2 3
3 4 5 6
3 3
1 2 3
4 5 6

Output:
1
0
*/