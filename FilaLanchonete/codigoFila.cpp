#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Pedido{
	int identificador;
	string descricao;
	double valor_total;
};

int main() {
	Pedido pedido1;
	Pedido pedido2;
	Pedido pedido3;
	
	pedido1.identificador = 101;
	pedido1.descricao = "Sanduiche de Frango";
	pedido1.valor_total = 22.50;
	
	pedido2.identificador = 102;
	pedido2.descricao = "Batata Frita Grande";
	pedido2.valor_total = 12.00;
	
	pedido3.identificador = 103;
	pedido3.descricao = "Combo Família";
	pedido3.valor_total = 45.90;
	
	queue<Pedido> filaPedidos;
	
	filaPedidos.push(pedido1);
	filaPedidos.push(pedido2);
	filaPedidos.push(pedido3);
	
	cout << "=== Verificacao Inicial ===" << endl;
	cout << "Próximo pedido: " << filaPedidos.front().identificador << " - " << filaPedidos.front().descricao << endl;
	
	filaPedidos.pop();
	cout << "========================================================" << endl;
	cout << "Pedido Entregue!" << endl;
	cout << "========================================================" << endl;
	
	cout << "Próximo pedido: " << filaPedidos.front().identificador << " - " << filaPedidos.front().descricao << endl;
	
	return 0;
}
