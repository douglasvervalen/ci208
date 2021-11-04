#include <iostream>

using namespace std;

long long numDigitos(long long codigo){
int contador = 0;
    while(codigo >= 1){
        codigo = codigo/10;
        contador ++;
}
    return contador;
}

long long numDezenas (long long codigo){
int digitos = numDigitos(codigo);

if(digitos % 2 == 0){
    return digitos/2;
}
else{
    return  (digitos + 1) / 2;
}
}

long long dezena (long long codigo, int n){
int contador = 1;
if(n==1){
    return codigo % 100;
}
else{
    while(n > contador){
        codigo = codigo/100;
        contador++;
    }
    return codigo % 100;
}

}

long long temRepeticoes(long long codigo, int & dezenarept, int & nrept){

int dezena1, dezena2, cont, ndigitos, ndezenas, dezenacont, temrept, i, j;

ndigitos = numDigitos(codigo);
ndezenas = numDezenas(codigo);

temrept = 0;
nrept = 0;
cont = 1;
i = 1;
j = i + 1;

while(i < ndezenas){
        while(j <= ndezenas){
            dezena1 = dezena(codigo, i);
            dezena2 = dezena(codigo, j);
            if (dezena1 == dezena2){
                temrept++;
                cont++;
                if(nrept < cont){
                    nrept = cont;
                    dezenarept = dezena1;
                }
            }
            j++;
        }

    i++;
    j = i+1;
    cont = 1;
}



if (temrept==0){
    return temrept;
}
else{
    return 1;
}
}

int main(){
long long codigo;
int d, r;
cout << "Digite o codigo: "<<endl;
cin >> codigo;
if(codigo <= 0){
    cout << "O codigo deve ser maior que 0" << endl;
}

else{
temRepeticoes(codigo, d, r);

cout << "O codigo tem " << numDigitos(codigo) <<  " digito(s)" << endl;
cout << "O codigo tem " << numDezenas(codigo) <<  " dezena(s)" << endl;
if(temRepeticoes(codigo, d, r) == 0){
   cout <<  "O codigo nao tem repeticoes" << endl;
}
else{
        cout <<  "O codigo tem repeticoes" << endl;
    cout << "A dezena mais repetida eh: " <<  d << " e repete " << r  << " vezes" << endl;
}

}


return 0;
}
