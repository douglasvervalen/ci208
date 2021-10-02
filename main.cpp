#include <iostream>
#include <cmath>
using namespace std;

int main(){
double valorA,valorB,valorcpf;
 double n1=1;

    cout<<"Digite valor (minimo 5 digitos):";
    cin>>valorcpf; // valor de exemplo: 12355

    if((valorcpf/10000)>=n1) /* Verifica se o CPF tem 5 dígitos.
        No valor de exemplo o CPF fica como: 1,2355, depois da divisão por 10000, oque é maior ou igual a 1.*/
    {
       valorB=valorcpf/100; // Separa os primeiros dígitos como a parte inteira. No valor de exemplo o CPF fica como: 123,55.

       valorA=(valorB-floor(valorB))* 100; /* Separa os dois últimos dígitos como a parte decimal.
       No valor de exemplo o CPF fica depois da primeira operação como: 0,55, e então multiplicando por 100 fica: 55 */

       int bint=floor(valorB); /* Converte o valor de B para um número inteiro.
       No valor de exemplo como o CPF tem um valor decimal igual ou maior que 5 precisamos que ele arredonde
       o valor para baixo e não para cima como deveria ser, então usamos a função
       floor() que permite arredondar para baixo um número decimal. */

       int aint= round(valorA); /* Converte o valor de A para um número inteiro. No nosso exemplo o valor de A já é um "inteiro" (55),
       mas o computador não o reconhece assim, para ele o valor de A é: 55,0, é por isso a necessidade da conversão.  */

       if(valorA==0) // Verifica se o valor de A é = 0.
       {
           cout<<"Não eh possivel dividir por zero."<<endl;
       }
         if(bint%aint==0) // Verifica se B é divisível por A.
    {
        cout <<"Numero fornecido aceito: " << (bint / aint) << endl;
    }

    else // No caso de B não ser divisível por A
    {
        cout << "Numero fornecido recusado.";
    }
    }

    else // No caso do CPF não ter 5 dígitos

    cout<<"entrada invalida";


}
