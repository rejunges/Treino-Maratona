#include <iostream>

using namespace std;

int main(){
	int j;
	while((cin >> j)!=0){
		int v[j];
		int custo;
		cin >> custo;
		for(int i=0; i<j; i++){
			cin >> v[i];
		}

		int max=0,rend=0,k;
		for(int i = 0; i < j; i++){
			k = i;
			max=0;
			if ((v[i]-custo) > rend) rend=v[i]-custo;
			for(k; k < j; k++){
				max+=v[k]-custo;
				if(max>rend) rend=max;
			}
		}
		cout << rend << endl;
	}
}