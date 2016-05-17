#include <iostream>
#include <stdlib.h>
#include <algorithm>    // std::sort
#include <vector>
#include <math.h>

using namespace std;

bool myfunction (int i,int j) {
	return (i>j);
}

int main (){
	cout.precision(4);
	int N, A, i;
	cin >> N;
	cin >> A;
	while ( N != 0 && A != 0){
		vector<int> h(N);
		int total=0;
		for (i=0; i<N; i++){
			cin >> h[i]; 
			total+= h[i];
		}
	
		sort (h.begin(), h.end(), myfunction); //Ordenou ao contrário -> funciona
		float corte = h[0];
		
		float cont = 0;
		int aux = 0;
		while(true){
			if (total == A){
				cout << ":D" << endl;
				break;
			}
			else if (total < A){
				cout << "-.-" << endl;
				break;
			}
			float Hfinal;
			while(h[aux] == corte){
				aux++;
				cont++; //sabe quantos tem a mesma altura
			}
			if(cont > A){
				Hfinal = corte - (A/cont);
				cout << fixed << Hfinal << endl;
				break;
			}else if(cont == A){
				cout << fixed << corte-1 << endl;
				break;
			}else{
				corte -= 1;
				A -= cont;
			}
			//cout << "CONT:" << cont << endl;
		}
		//ultimas 2 linhas
		cin >> N;
		cin >> A;
	}
	return 0;
}