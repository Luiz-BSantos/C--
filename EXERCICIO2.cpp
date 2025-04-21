#include <iostream>

using namespace std;

int main(){

string nome1;
string nome2;

cout<<"digite um nome: "<<endl;
cin >> nome1;
cout<<"digite um outro nome: "<<endl;
cin >> nome2;

int tam1 = nome1.length();
int tam2 = nome2.length();

if(tam1 > tam2){
    cout<<"a primeira palavra é maior que a segunda"<<endl;
}
else if(tam2 > tam1){
cout<<"a segunda palavra é maior que a primeira"<<endl;
}



}
