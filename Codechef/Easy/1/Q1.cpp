#include <iostream>
using namespace std;

int main() {
	int T, N, M, A, B;

	cin>>T;
	
	for(int ctr_t=0;ctr_t<T;ctr_t++){
		int i[2];

		for(int ctr_i=0;ctr_i<2;ctr_i++){
			cin>>i[ctr_i];
		}

		int N[i[0]], M[i[1]];
		for(int ctr_n=0;ctr_n<i[0];ctr_n++){
			cin>>N[ctr_n];
		}

		for(int ctr_m=0;ctr_m<i[1];ctr_m++){
			cin>>M[ctr_m];
		}
		

	}
	return 0;
}