#include <iostream>
#include <cmath>
#define N 25
#define ND 75
using namespace std;


void troca(int&a, int&b)
{
  int copia;
  copia=a;
  a=b;
  b=copia;
}


void espelhoVetor(int VD[], int k){
int j = k-1;
cout << endl;

for(int i = 0 ; i < k/2 ; i++){
   troca(VD[i], VD[j]);
   j--;
}
cout << "Espelhando esse vetor fica assim:";
for(int i = 0; i < k; i++ ){
   cout << " " << VD[i];}
}


void descompactaVetor(int Q[], int V[], int tamanho, int VD[]){
int k = 0;

for(int i = 0; i < tamanho; i++){
    for(int j = 0; j < Q[i]; j++){
    VD[k] = V[i];
    k++;
    }
}
cout << "O vetor descompactado fica assim:";
for(int i = 0 ; i < k; i++){
    cout << " " << VD[i];
}
espelhoVetor(VD, k);
}

int main(){
int V[N], Q[N], VD[ND];
int elemento, tamanho = 0, soma = 0;

cout << "Vetor de quantidades: ";
for(int i = 0 ; i < N; i++){
    cin >> elemento;
    if(elemento < 0){
        break;
    }
    Q[i] = elemento;
    tamanho++;

}
for(int i = 0 ; i < tamanho; i++){
    soma = soma + Q[i];
}
if(soma > ND){
    cout << "Forma descompactada teria " << soma << " numeros, NAO cabem no vetor Vd";
}
else{
cout << "Vetor com os valores: ";
for(int i = 0 ; i < tamanho; i++){
    cin >> V[i];
}

descompactaVetor(Q, V, tamanho, VD);
}

}
