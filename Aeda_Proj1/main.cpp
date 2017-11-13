
#include "Acidentes.h"
//#include "ServicoEmergencia.h"

void adicionarAcidente();
void verOsPostosSocorro();
void verOsAcidentes();

//ServicoEmergencia<Acidente, PostoDeSocorro> servicoEmergencia;


void menuInicial() {

	cout << "O que pretende fazer?" << endl << endl;

	cout << "Adicionar/remover um acidente?(1)" << endl;
	cout << "Ver os acidentes?(2)" << endl;
	cout << "Adicionar/remover postos de socorro?(3)" << endl;
	cout << "Ver os postos de socorro?(4)" << endl;
	cout << "Reposta a um acidente?(5)" << endl;
	//cout << "Sair?(6)" << endl;
	cout << "Sair?(6)" << endl;
	int opcao;
	cin >> opcao;

	switch (opcao)
	{
	case 1:
		adicionarAcidente();
		return;
	case 2:
		verOsAcidentes();
		return;
	case 3:
		//adicinarPostos();
		return;
	case 4:
		verOsPostosSocorro();
		return;
	case 5:
		//respostaAcidentes();
		return;
	case 6:
		exit(0);
	}
	system("cls");
	menuInicial();
}
void adicionarAcidente() {
	system("cls");
	cout << "Que tipo de acidente pretende adicionar/remover?" << endl << endl;
	cout << "Um incendio?(1)" << endl;
	cout << "Um assalto?(2)" << endl;
	cout << "Um acidente de viacao?(3)" << endl;
	cout << "Sair e voltar ao menu inicial?(0)" << endl;
	int opcao;
	cin >> opcao;

	switch (opcao)
	{
	case 0:
		system("cls");
		menuInicial();
		return;
	case 1:
		//addIncendio();
		return;
	case 2:
		//addAssalto();
		return;
	case 3:
		//addAcidViacao();
		return;
	}
	
	adicionarAcidente();
}
void verOsPostosSocorro() {
//	servicoEmergencia.printPostos();
}
void verOsAcidentes() {
	//servicoEmergencia.printAcidentes();
}

int main() {
	

	cout << "Protecao civil - Trabalho de AEDA" << endl << endl;

	cout << "Trabalho desenvolvido por Henrique Sendim, Luis Borges e Mariana Neto." << endl << endl;
	
	menuInicial();


	

	return 0;

}
