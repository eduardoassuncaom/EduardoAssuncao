#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> pilhaFoguetes;

    pilhaFoguetes.push("Alfa");
    pilhaFoguetes.push("Beta");
    pilhaFoguetes.push("Gama");
    pilhaFoguetes.push("Delta");

    cout << "=== Verificacao Inicial ===" << endl;
    cout << "Topo da Pilha: " << pilhaFoguetes.top() << endl;

    pilhaFoguetes.pop(); 
    
    cout << "=== Verificacao ===" << endl;
    cout << "Topo da Pilha: " << pilhaFoguetes.top() << endl;
    
    pilhaFoguetes.pop();
    
    cout << "=== Verificacao ===" << endl;
    cout << "Topo da Pilha: " << pilhaFoguetes.top() << endl;
    
    pilhaFoguetes.pop();
    
    cout << "=== Verificacao ===" << endl;
    cout << "Topo da Pilha: " << pilhaFoguetes.top() << endl;
    
    pilhaFoguetes.pop();

    return 0;
}
