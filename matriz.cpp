#include <iostream>

using namespace std;

#define M 5
#define N 7

int somaVizinhanca(int matriz[][N], int linha, int coluna, int r){

int soma = 0;


    for(int k = 1; k <= r; k++){
        //cout << i << " " << j << endl;
        if(k==1){
        soma = soma + matriz[i][j];
        //cout << "soma 0: " << soma << endl;
    }
        if((i+k)<M){
        soma = soma + matriz[i+k][j];
        //cout << "soma 1: " << soma << endl;
        }
        if((j+k)<N){
        soma = soma + matriz[i][j+k];
       // cout << "soma 2: " << soma << endl;
        }
        if((i - k) >= 0){
        soma = soma + matriz[i-k][j];
        //cout << "soma 3: " << soma << endl;
        }
        if((j - k) >= 0){
        soma = soma + matriz[i][j-k];
       //cout << "soma 4: " << soma << endl;
        }
    }



}

int main()
{
 int matriz[M][N], matrizs[M][N];
 int r;
cout << "Digite r: "<< endl;
cin >> r;
cout << "Digite a matriz A: "<< endl;
for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
        cin >> matriz[i][j];
    }
}
for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
        matrizs[i][j] = somaVizinhanca(matriz, i, j, r);
    }
}


cout << "A matriz Sv com a soma por vizinhanca eh: " << endl;
for(int i = 0; i < M; i++){
    for(int j = 0; j < N; j++){
        cout << matrizs[i][j] << " ";
    }
    cout << endl;
}

}

