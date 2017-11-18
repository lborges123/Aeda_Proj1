#include "menu.h"



ServicoEmergencia servicoEmergencia;


void menuInicial() {
	
	cout << "O que pretende fazer?" << endl;
	cout << "------------------------------------------------" << endl;
	cout << "[1] Adicionar acidente?" << endl;
	cout << "[2] Remover um acidente?" << endl;
	cout << "[3] Ver os acidentes?" << endl;
	cout << "[4] Adicionar postos de socorro?" << endl;
	cout << "[5] Remover postos de socorro?" << endl;
	cout << "[6] Ver os postos de socorro?" << endl;
	cout << "[7] Reposta a um acidente?" << endl;
	cout << "[0] Sair?" << endl;
	int opcao;
	cin >> opcao;
	
	switch (opcao)
	{
	case 1:
		adicionarAcidente();
		return;
	case 2:
		//removerAcidente();
		return;
	case 3:
		verOsAcidentes();
		return;
	case 4:
		//adicinarPostos();
		return;
	case 5:
		//removerPostos();
		return;
	case 6:
		verOsPostos();
		return;
	case 7:
		//respostaAcidentes();
		return;
	case 0:
		exit(0);
		return;
	}
	cin.clear();
	cin.ignore();
	system("cls");
	menuInicial();
}
void adicionarAcidente() {
	system("cls");
	cout << "----------------------------------------------------" << endl;
	cout << "[1] Um incendio?" << endl;
	cout << "[2] Um assalto?" << endl;
	cout << "[3] Um acidente de viacao?" << endl;
	cout << "[0] Sair e voltar ao menu inicial?" << endl;
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
		addAssalto();
		return;
	case 3:
		//addAcidViacao();
		return;
	}
	cin.clear();
	cin.ignore();
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
	cin.clear();
	cin.ignore();
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
		cout << "Incendio Florestal criado." << endl;
	}

	cout << "Vai ser direcionado para o menu anterior" << endl;
	cout << "Prima qualquer tecla." << endl;
	cin.ignore();
	cin.ignore();

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
		cout << "Incendio em moradia criado." << endl;
	}
	
	cout << "Vai ser direcionado para o menu anterior." << endl;
	cout << "Prima qualquer tecla." << endl;
	cin.ignore();
	cin.ignore();

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
		cout << "Incendio em moradia criado." << endl;
	}
	cout << "Vai ser direcionado para o menu anterior." << endl;
	cout << "Prima qualquer tecla." << endl;
	cin.ignore();
	cin.ignore();
	
	addIncendio();
	return;
}

void addAssalto() {
	system("cls");
	cout << "Que tipo de Assalto pretende adicionar?" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "[1] Um comercial?" << endl;
	cout << "[2] Um particular?" << endl;
	cout << "[0] Sair e voltar ao menu anterior?" << endl << endl;
	int opcao;
	cin >> opcao;

	switch (opcao)
	{
	case 0:
		adicionarAcidente();
		return;
	case 1:
		adicionarAssaltoComercial();
		return;
	case 2:
		adicionarAssaltoParticular();
		return;

	}
	cin.ignore();
	cin.ignore();
	addAssalto();
}

void adicionarAssaltoComercial() {
	system("cls");
	string local, confirmacao = "";
	int data, x, y, numFeridos;
	cout << "Menu adicionar assalto comercial" << endl << endl;

	cout << "Qual o local do acidente? ";
	cin >> local;
	cout << "\nQuando e que se passou esse acidente? ";			//Melhorar depois
	cin >> data;
	cout << "\nQual a localizacao x.";					//Melhorar depois
	cin >> x;
	cout << "\nQual a localizacao y.";					//Melhorar depois
	cin >> y;
	cout << "\nQual o número de feridos? ";
	cin >> numFeridos;
	cout << "Pretende reportar um assalto comercial em " << local << " ,na data " << data << " com a localizacao " << x << " " << y << " em que " << numFeridos << " foram feridos?(S, N)" << endl;
	cin >> confirmacao;
	while (!((confirmacao == "sim") || (confirmacao == "Sim") || (confirmacao == "nao") || (confirmacao == "Nao") || (confirmacao == "s") || (confirmacao == "n") || (confirmacao == "S") || (confirmacao == "N")))
	{
		cout << "String nao reconhecida!! Responda sim ou nao." << endl;
		cin >> confirmacao;
	}
	if (confirmacao == "sim" || confirmacao == "Sim" || confirmacao == "s" || confirmacao == "S")
	{
		Assaltocomercial A(local, data, x, y, numFeridos);
		servicoEmergencia.addAcidente(&A);
		cout << "Assalto comercial criado." << endl;
	}
	cout << "Vai ser direcionado para o menu anterior." << endl;
	cout << "Prima qualquer tecla." << endl;
	cin.ignore();
	cin.ignore();
	

	addAssalto();
	return;


	return;

}

void adicionarAssaltoParticular() {
	system("cls");
	string local, confirmacao = "";
	int data, x, y, numFeridos;
	cout << "Menu adicionar assalto particular" << endl << endl;

	cout << "Qual o local do acidente? ";
	cin >> local;
	cout << "\nQuando e que se passou esse acidente? ";			//Melhorar depois
	cin >> data;
	cout << "\nQual a localizacao x.";					//Melhorar depois
	cin >> x;
	cout << "\nQual a localizacao y.";					//Melhorar depois
	cin >> y;
	cout << "\nQual o número de feridos? ";
	cin >> numFeridos;
	cout << "Pretende reportar um assalto particular em " << local << " ,na data " << data << " com a localizacao " << x << " " << y << " em que " << numFeridos << " foram feridos?(S, N)" << endl;
	cin >> confirmacao;
	while (!((confirmacao == "sim") || (confirmacao == "Sim") || (confirmacao == "nao") || (confirmacao == "Nao") || (confirmacao == "s") || (confirmacao == "n") || (confirmacao == "S") || (confirmacao == "N")))
	{
		cout << "String nao reconhecida!! Responda sim ou nao." << endl;
		cin >> confirmacao;
	}
	if (confirmacao == "sim" || confirmacao == "Sim" || confirmacao == "s" || confirmacao == "S")
	{
		Assaltoparticular A(local, data, x, y, numFeridos);
		servicoEmergencia.addAcidente(&A);
		cout << "Assalto particular criado.";
	}

	cout << "Vai ser direcionado para o menu anterior." << endl;
	cout << "Prima qualquer tecla." << endl;
	cin.ignore();
	cin.ignore();

	

	addAssalto();
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
