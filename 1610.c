#include <iostream>
#include <set>
#include <stdlib.h>
  
using namespace std;
  
int matriz[10005][10005], m, n;
int vetor[10005], fechado[10005];
  
int busca_grafo(int inicio){
    if(fechado[inicio] == 1) return 0;
    vetor[inicio] = 1;
    for(int i = 0; i < n; i++){
        if(matriz[inicio][i] == 1){
            if(vetor[i] == 0){
                int busca = busca_grafo(i);
                if(busca == 1) return 1;
            }else{
                return 1;
            }
        }
    }
    vetor[inicio] = 0;
    fechado[inicio] = 1;
    return 0;
}
  
int main(void){
    int c;
    cin >> c;
    for(int i = 0; i < c; i++){
        cin >> n >> m;
          
        for(int j = 0; j < n; j++){
            for(int h = 0; h < n; h++){
                matriz[j][h] = 0;
            }
        }
          
        for(int j = 0; j < m; j++){
            int a, b;
            cin >> a >> b;
            matriz[a-1][b-1] = 1;
        }
          
        std::set<int> lista;
        std::set<int>::iterator it;
        for(int j = 0; j < n; j++){
            lista.insert(j);
            vetor[j] = 0;
            fechado[j] = 0;
        }
          
        int busca = 0;
        for(it=lista.begin(); it!=lista.end(); it++){
            busca = busca_grafo(*it);
            if(busca == 1){
                break;
            }
        }
        if(busca == 1) cout << "SIM" << endl; else cout << "NAO" << endl;
    }
}