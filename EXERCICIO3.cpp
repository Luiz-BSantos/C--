#include<iostream>
#include<fstream>

using namespace std;


struct Carro{
string marca;
string modelo;
double valor;
int    ano;
bool   ar_condicionado;
};

void exibirCarro(Carro carros[],int i){
    cout <<"Marca: " <<carros[i].marca<<endl;
    cout <<"modelo: " <<carros[i].modelo<<endl;
    cout <<"valor: " <<carros[i].valor<<endl;
    cout <<"ano: " <<carros[i].ano<<endl;
    if(carros[i].ar_condicionado == 1){
     cout <<"Ar: sim"<<endl;
    }
    else{
        cout <<"Ar: nao"<<endl;
    }
    cout<<endl;


}

int main(){

int i=0;


Carro carros[10] = {
{"Renault","Kwid",75000,2025,1},
{"Renault","Sandero",60000,2020,1},
{"Fiat","Uno",30000,2010,0},
{"Nissan","Versa",37000,2015,1},
{"Chevrolet","Corsa",7000,2000,0},
{"Chevrolet","S10",30000,2000,1},
{"Ford","Fiesta",2600.0,2010,1},
{"Ford","Ka",17000.0,2010,1},
{"Toyota","Corolla",25000.0,2007,1},
{"Volkswagen","Fox",18000.0,2012,1},


for(i =0; i<10; i++){
/*    exibirCarro(carros, i);
}*/

cout << "exibir carros com ar-condicionado" << endl;

for(int i = 0; i < 10; i++){
    if(carros[i].ar_condicionado == 1){
        cout << carros[i].modelo << endl;
    }
}

cout << "\n" << endl;

cout << "exibir carros até valores 30000" << endl;

for(int i = 0; i < 10; i++){
    if(carros[i].valor <= 30000){
        cout << carros[i].modelo << endl;
    }
}

cout << "\n" << endl;
cout << "Exibir até 2010 para frente" <<endl;


for(int i = 0; i < 10; i++){
    if(carros[i].ano > 2010){
        cout << carros[i].modelo << endl;
    }
}



}
