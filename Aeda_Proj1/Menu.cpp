#include "menu.h"



ServicoEmergencia servicoEmergencia;


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
		verOsPostos();
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
		adicionarIncendioMoradia();
		return;
	case 3:
		adicionarIncendioApartamento();
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
	cout << "\nPretende construir um incendio florestal, em " << local << " ,na data " << data << " com a localizacao " << x << " " << y << " em que " << area << " hectares foram afetados?(S, N)" << endl;
	cin >> confirmacao;
	while (!((confirmacao == "sim") || (confirmacao == "Sim") || (confirmacao == "nao") || (confirmacao == "Nao") || (confirmacao == "s") || (confirmacao == "n") || (confirmacao == "S") || (confirmacao == "N")))
	{
		cout << "String nao reconhecida!! Responda sim ou nao." << endl;
		cin >> confirmacao;
	}
	if (confirmacao == "sim" || confirmacao == "Sim" || confirmacao == "s" || confirmacao == "S")
	{
		IncendioFlorestal A(local, data, x, y, 0, 0, area);
		servicoEmergencia.addAcidente(&A);
		cout << "Incendio Florestal criado.";
	}

	
	addIncendio();
	return;
}

void adicionarIncendioMoradia() {
	system("cls");
	string local, confirmacao = "";
	int data, x, y, nPessoas;
	cout << "Menu adicionar incendio florestal." << endl << endl;

	cout << "Qual o local do acidente? ";
	cin >> local;
	cout << "\nQuando e que se passou esse acidente? ";			//Melhorar depois
	cin >> data;
	cout << "\nQual a localizacao x.";					//Melhorar depois
	cin >> x;
	cout << "\nQual a localizacao y.";					//Melhorar depois
	cin >> y;
	cout << "\nQuantas pessoas estao nessa moradia? ";
	cin >> nPessoas;
	cout << "\nPretende construir um incendio numa moradia, em " << local << " ,na data " << data << " com a localizacao " << x << " " << y << " em que " << nPessoas << " afetadas?(S, N)" << endl;
	cin >> confirmacao;
	while (!((confirmacao == "sim") || (confirmacao == "Sim") || (confirmacao == "nao") || (confirmacao == "Nao") || (confirmacao == "s") || (confirmacao == "n") || (confirmacao == "S") || (confirmacao == "N")))
	{
		cout << "String nao reconhecida!! Responda sim ou nao." << endl;
		cin >> confirmacao;
	}
	if (confirmacao == "sim" || confirmacao == "Sim" || confirmacao == "s" || confirmacao == "S")
	{
		IncendioMoradia A(local, data, x, y, 0, 0, nPessoas);
		servicoEmergencia.addAcidente(&A);
		cout << "Incendio em moradia criado.";
	}
	
	addIncendio();
	return;
}
void adicionarIncendioApartamento() {
	system("cls");
	string local, confirmacao = "";
	int data, x, y, nPessoas;
	cout << "Menu adicionar incendio em apartamento." << endl << endl;

	cout << "Qual o local do acidente? ";
	cin >> local;
	cout << "\nQuando e que se passou esse acidente? ";			//Melhorar depois
	cin >> data;
	cout << "\nQual a localizacao x.";					//Melhorar depois
	cin >> x;
	cout << "\nQual a localizacao y.";					//Melhorar depois
	cin >> y;
	cout << "\nQuantos andares tem o apartamento? ";
	cin >> nPessoas;
	cout << "\nPretende construir um incendio em apartamento, em " << local << " ,na data " << data << " com a localizacao " << x << " " << y << " com " << nPessoas << " andares?(S, N)" << endl;
	cin >> confirmacao;
	while (!((confirmacao == "sim") || (confirmacao == "Sim") || (confirmacao == "nao") || (confirmacao == "Nao") || (confirmacao == "s") || (confirmacao == "n") || (confirmacao == "S") || (confirmacao == "N")))
	{
		cout << "String nao reconhecida!! Responda sim ou nao." << endl;
		cin >> confirmacao;
	}
	if (confirmacao == "sim" || confirmacao == "Sim" || confirmacao == "s" || confirmacao == "S")
	{
		IncendioApartamento A(local, data, x, y, 0, 0, nPessoas);
		servicoEmergencia.addAcidente(&A);
		cout << "Incendio em moradia criado.";
	}

	
	addIncendio();
	return;
}

void verOsAcidentes() {
	system("cls");
	string ab;

	servicoEmergencia.printAcidentes();
	cout << "\n\nPrima enter para continuar";
	cin.ignore();
	cin.ignore();
	
	system("cls");
	menuInicial();
}
void verOsPostos() {
	//servicoEmergencia.printPostos();
	menuInicial();
}
