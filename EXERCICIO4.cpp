#include <iostream>

using namespace std;

struct No{
int conteudo;
No* proximo;
};

void inserirNoInicio(No* &head, int conteudo){
No* novoNo = new No();

novoNo -> conteudo = conteudo;
novoNo -> proximo = head;
head = novoNo;

}

void exibirLista(No* head){
No* atual = head;
    while(atual != nullptr){
        cout << atual -> conteudo << "->";
        atual = atual -> proximo;
    }
cout << "Null" << endl;
}

int main(){
No* head = nullptr;
inserirNoInicio(head, 3);
inserirNoInicio(head, 2);
inserirNoInicio(head, 1);
inserirNoInicio(head, 4);
exibirLista(head);
return 0;
}
