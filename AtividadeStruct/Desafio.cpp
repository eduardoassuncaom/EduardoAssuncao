#include <iostream>
#include <string>
using namespace std;

struct Feitico{
	string nome;
	int dificuldade;
	int dano_base;
	float custo_mana_final;
};

int main(){
	Feitico feitico1;
	feitico1.nome = "Relampago em Cadeia";
	feitico1.dificuldade = 4;
	feitico1.dano_base = 75;
	
	float multiplicador;	
	cout << "Descricao de: " << feitico1.nome << endl;
	cout << "Dificuldade: " << feitico1.dificuldade << endl;
	cout << "Dano Base: " << feitico1.dano_base << endl;
		
	if(feitico1.dificuldade == 5){
		multiplicador = 2.0;
	} else if (feitico1.dificuldade == 4 || feitico1.dificuldade == 3){
		multiplicador = 1.5;
	} else if(feitico1.dificuldade == 1 || feitico1.dificuldade == 2){
		multiplicador = 1.0;
	}
	
	feitico1.custo_mana_final = feitico1.dano_base * multiplicador;
	
	cout << "O custo final de mana do feitico: " << feitico1.custo_mana_final << endl;
	
		return 0;
}

