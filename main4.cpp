#include <iostream>
#include <cmath>

using namespace std;

int analisaDigitos(int n, int & primeiro, int & ultimo){
    int contador = 0, divs;
    ultimo = n % 10;
    primeiro = n;
    while(primeiro > 10){
        primeiro = primeiro /10;
    }

    while(n >= 1){
        n = n/10;
        contador ++;
}
    return contador;

}



int main(){

int primeiro, ultimo, n, soma =0, valor;
cout << "Digite a lista de numeros: " << endl;
cin >> n;

if (n==0){
    cout << "Nao foram fornecidos numeros" << endl;
}
else{

while(n != 0){

    if(n < 0){
        cout << "O numero deve ser positivo" << endl;
        cin >> n;
    }
    else{
        valor = analisaDigitos(n, primeiro, ultimo);
        cout << n << " tem "<< valor << " digitos " << endl;
        cout << "Primeiro = " << primeiro << endl;
        cout << "Ultimo = " << ultimo << endl;

    if(analisaDigitos(n, primeiro, ultimo) < 3){
        soma = soma + n;
    }
    cin >> n;
}
}

cout << "Soma dos numeros com uma quantidade de digitos menor que 3: " << soma << endl;
}
}
