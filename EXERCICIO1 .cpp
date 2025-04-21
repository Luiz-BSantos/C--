#include <iostream>

using namespace std;

int main(){

string nome;

cout<<"Digite qualquer palavra: "<<endl;
cin >> nome;
for(int i = 0; i < nome.length(); i++){
    if(nome[i] == 'a' || nome[i] == 'A'){
        nome[i] = '4';
    }
    if(nome[i] == 'i' || nome[i] == 'I'){
        nome[i] = '3';
    }
    if(nome[i] == 'o' || nome[i] == 'O'){
        nome[i] = '0';
    }

}
cout << nome;


}
