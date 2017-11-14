#pragma once

#include <fstream>
#include "Acidentes.h"
#include "ServicoEmergencia.h"

void adicionarAcidente();
void verOsPostosSocorro();
void addIncendio();
void verOsAcidentes();
void adicionarIncendioFloresta();

//ServicoEmergencia<Acidente, PostoDeSocorro> servicoEmergencia;


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

int main() {
	

	cout << "Protecao civil - Trabalho de AEDA" << endl << endl;

	cout << "Trabalho desenvolvido por Henrique Sendim, Luis Borges e Mariana Neto." << endl << endl;
	
	menuInicial();


	

	return 0;

}
