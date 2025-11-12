#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> filaHerois;

    filaHerois.push("Homem-Aranha");
    filaHerois.push("Mulher-Maravilha");
    filaHerois.push("Batman");
    filaHerois.push("Homem de Ferro");
    filaHerois.push("Doutor Estranho");
    filaHerois.push("Pantera Negra");

    cout << "=== Verificacao Inicial ===" << endl;
    cout << "Primeiro da fila: " << filaHerois.front() << endl;
    cout << "Ultimo da fila: " << filaHerois.back() << endl;
    cout << "Tamanho da fila: " << filaHerois.size() << endl;

    filaHerois.pop(); 
    filaHerois.pop();
  
    cout << "\n=== Verificacao Final ===" << endl;
    cout << "Novo primeiro da fila: " << filaHerois.front() << endl;
    cout << "Novo ultimo da fila: " << filaHerois.back() << endl;
    cout << "Novo tamanho da fila: " << filaHerois.size() << endl;

    return 0;
}
