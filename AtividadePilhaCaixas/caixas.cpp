#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct Carga {
    int id_caixa;
    float peso_kg;
    string destino;
};

int main() {

    Carga um;
    Carga dois;
    Carga tres;

    um.id_caixa = 591;
    um.peso_kg = 15.5;
    um.destino = "Setor Leste";

    dois.id_caixa = 592;
    dois.peso_kg = 22.5;
    dois.destino = "Setor Oeste";

    tres.id_caixa = 593;
    tres.peso_kg = 19.3;
    tres.destino = "Setor Norte";

    stack<Carga> pilha;
    pilha.push(um);
    pilha.push(dois);
    pilha.push(tres);

    cout << "====== Verificacao Inicial ======" << endl;
    cout << "Id da caixa no topo da pilha: " << pilha.top().id_caixa << endl;
    cout << "Peso da Caixa no Topo da pilha: " << pilha.top().peso_kg << endl;
    cout << "Destino da Caixa no Topo da pilha: " << pilha.top().destino << endl;
    cout << endl;

    cout << "======= Caixa do Topo REMOVIDA =======" << endl;
    pilha.pop();
    cout << endl;

    cout << "====== Verificacao ======" << endl;
    cout << "Id da caixa no topo da pilha: " << pilha.top().id_caixa << endl;
    cout << "Peso da Caixa no Topo da pilha: " << pilha.top().peso_kg << endl;
    cout << "Destino da Caixa no Topo da pilha: " << pilha.top().destino << endl;
    cout << endl;

    cout << "======= Caixa do Topo REMOVIDA =======" << endl;
    pilha.pop();
    cout << endl;

    cout << "====== Verificacao FINAL ======" << endl;
    cout << "Id da caixa no topo da pilha: " << pilha.top().id_caixa << endl;
    cout << "Peso da Caixa no Topo da pilha: " << pilha.top().peso_kg << endl;
    cout << "Destino da Caixa no Topo da pilha: " << pilha.top().destino << endl;
    cout << endl;

    cout << "Tamanho da pilha: " << pilha.size() << endl;

    return 0;
}