#include <iostream>
#include <cmath>

using namespace std;

int contabiliza(int n1, int n2, int & cresc, int & decresc, int & neut){

int comp;



if(n2 > n1){
    cresc++;
}
if(n1 > n2){
    decresc++;
}
if(n1 == n2){
    neut++;
}

return abs(n1 - n2);


}
int main(){


int cresc = 0, decresc = 0, neut = 0;
int n1, n2, valor, n1max, n2max, valormax;

cout << "Digite sequencia de 2 inteiros:" <<endl;
cin >> n1 >> n2;

if(n1 == 0 && n2 == 0){
    cout << "Sem conjunto de valores" << endl;
}

while(n1 !=0 && n2 != 0){
    valor = contabiliza(n1, n2, cresc, decresc, neut);
    cin >> n1 >> n2;
    if(abs(n1 - n2) > valor){
        n1max = n1;
        n2max = n2;
        valormax = abs(n1 - n2);
    }

}


cout << "Quantidade ordem crescente: " << cresc << endl;
cout << "Qantidade ordem decrescente: " << decresc << endl;
cout << "Quantidade ordem neutra: " << neut << endl;
cout << n1max << " " << n2max << " eh o maior intervalo: " << valormax << endl;


return 0;
}
