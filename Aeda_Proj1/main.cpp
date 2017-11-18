
#pragma once


#include <fstream>


#include "menu.h"

void addIncendio();
void adicionarAcidente();
void verOsPostosSocorro();
void adicionarIncendioFloresta();
void verOsAcidentes();

ServicoEmergencia servicoEmergencia();

/*
void menuInicial() {

	cout << "O que pretende fazer?" << endl << endl;

	cout << "Adicionar/remover um acidente?(1)" << endl;
	cout << "Ver os acidentes?(2)" << endl;
	cout << "Adicionar/remover postos de socorro?(3)" << endl;
	cout << "Ver os postos de socorro?(4)" << endl;
	cout << "Reposta a um acidente?(5)" << endl;
	cout << "Sair?(0)" << endl;
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
	case 0:
		exit(0);
		return;
	}
	system("cls");
	menuInicial();
}

//MENU ADICIONAR ACIDENTE {INCENDIO, ASSALTO, ACIDENTE VIACAO}
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
		addIncendio();
		return;
	case 2:
		//addAssalto();
		return;
	case 3:
	//	adicionarAcidenteViacao();
		return;
	}
	adicionarAcidente();
}

//VER OS POSTOS DE SOCORRO
void verOsPostosSocorro() {
//	servicoEmergencia.printPostos();
}

//VER OS ACIDENTES
void verOsAcidentes() {
	//servicoEmergencia.printAcidentes();
}

//MENU ADICIONAR INCENDIO
void addIncendio() {
	system("cls");
	cout << "Que tipo de incendio pretende adicionar?" << endl << endl;
	cout << "Um florestal?(1)" << endl;
	cout << "Numa moradia?(2)" << endl;
	cout << "Num apartamento?(3)" << endl;
	cout << "Sair e voltar ao menu anterior?(0)" << endl << endl;
	int opcao;
	cin >> opcao;

	switch (opcao)
	{
	case 0:
		adicionarAcidente();
		return;
	case 1:
		adicionarIncendioFloresta();
		return;
	case 2:
		//adicionarIncendioMoradia();
		return;
	case 3:
		//adicionarIncendioApartamento();
		return;
	}

	addIncendio();
}
void adicionarIncendioFloresta() {
	system("cls");
	string local, confirmacao = "";
	int data, x, y, area;
	cout << "Menu adicionar incendio florestal." << endl << endl;

	cout << "Qual o local do acidente? ";
	cin >> local;
	cout << "\nQuando e que se passou esse acidente? ";			//Melhorar depois
	cin >> data;
	cout << "\nQual a localizacao x.";					//Melhorar depois
	cin >> x;
	cout << "\nQual a localizacao y.";					//Melhorar depois
	cin >> y;
	cout << "\nQuantos hectares foram afetados? ";
	cin >> area;
	cout << "Pretende construir um incendio florestal, em " << local << " ,na data " << data << " com a localizacao " << x << " " << y << " em que " << area << " hectares foram afetados?(S, N)" << endl;
	cin >> confirmacao;
	while (!((confirmacao == "sim") || (confirmacao == "Sim") || (confirmacao == "nao") || (confirmacao == "Nao") || (confirmacao == "s") || (confirmacao == "n") || (confirmacao == "S") || (confirmacao == "N")))
	{
		cout << "String nao reconhecida!! Responda sim ou nao." << endl;
		cin >> confirmacao;
	}
	if (confirmacao == "sim" || confirmacao == "Sim" || confirmacao == "s" || confirmacao == "S")
	{
		//servicoEmergencia.addAcidente(IncendioFlorestal(local, data, x, y, 0, 0, area));
		//servicoEmergencia.addAcidente(Acidente(local, data, x, y));
		cout << "Incendio Florestal criado.";
	}
	cin.clear();
	cin.ignore(1000);
	cout << "Vai ser direcionado para o menu anterior.";
	do {
		cout << '\n' << "Presse a tecla Enter para continuar.";
	} while (cin.get() != '\n');

	addIncendio();
	return;


	return;

}



//MENU ADICIONAR ACIDENTE VIACAO
void adicionarAcidenteViacao() {
	system("cls");
	string confirmacao = "";
	int data, x, y, fgraves, veiculos, ae;
	string local;
	cout << "Menu adicionar acidente de viacao" << endl << endl;

	cout << "Qual o local do acidente? (0 - autoestrada ou 1 - estrada nacional)";
	cin >> ae;
	cout << "Qual a localizacao do acidente?";
	cin >> local;
	cout << "\nQuando e que se passou esse acidente? ";			//Melhorar depois
	cin >> data;
	cout << "\nQual a localizacao x.";					//Melhorar depois
	cin >> x;
	cout << "\nQual a localizacao y.";					//Melhorar depois
	cin >> y;
	cout << "\nQuantos veiculos foram envolvidos? ";
	cin >> veiculos;
	cout <<"\nQuantos feridos graves? ";
	cin >> fgraves;
	cout << "Pretende construir um acidente grave, em " << local << ", na data " << data << " com a localizacao " << x << " " << y << " em que foram envolidos "
			<< veiculos << " veiculos e " << fgraves << " feridos graves?(S, N)" << endl;
	cin >> confirmacao;
	while (!((confirmacao == "sim") || (confirmacao == "Sim") || (confirmacao == "nao") || (confirmacao == "Nao") || (confirmacao == "s") || (confirmacao == "n") || (confirmacao == "S") || (confirmacao == "N")))
	{
		cout << "String nao reconhecida!! Responda sim ou nao." << endl;
		cin >> confirmacao;
	}
	if (confirmacao == "sim" || confirmacao == "Sim" || confirmacao == "s" || confirmacao == "S")
	{

		AcidenteViacao a = AcidenteViacao(local, data, ae, x, y, fgraves, veiculos);
		servicoEmergencia.addAcidente(a);

		cout << "Acidente de viacao criado.";
	}
	cin.clear();
	cin.ignore(1000);
	cout << "Vai ser direcionado para o menu anterior.";
	do {
		cout << '\n' << "Presse a tecla Enter para continuar.";
	} while (cin.get() != '\n');

	adicionarAcidenteViacao();
	return;


}




*/

int main() {


	cout << "Protecao civil - Trabalho de AEDA" << endl << endl;

	cout << "Trabalho desenvolvido por Henrique Sendim, Luis Borges e Mariana Neto." << endl << endl;

	menuInicial();




	return 0;

}
