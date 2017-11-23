#pragma once
#include "Acidentes.h"
Assalto::Assalto(string localAcidente, int data, double x, double y, int numCarros, int numSocorristas) : Acidente(localAcidente, data, x, y) {
	this->numCarros = numCarros;
	this->numSocorristas = numSocorristas;
}
Assalto::Assalto(){}

Assaltoparticular::Assaltoparticular(string localAcidente, int data, double x, double y,int numCarros, int NumSocorristas, int numFeridos): Assalto(localAcidente, data,x, y, numCarros, NumSocorristas) {
	this->numFeridos = numFeridos;
}

Assaltocomercial::Assaltocomercial(string localAcidente, int data, double x, double y, int numCarros, int NumSocorristas, int numFeridos) : Assalto(localAcidente, data, x, y, numCarros, NumSocorristas) {
	this->numFeridos = numFeridos;
}


bool Assaltocomercial::precisadeamb() const {
	if (numFeridos > 0)
		return true;
	return false;
}

/*bool Assaltoparticular::precisadeamb() const {
	if (numFeridos)
		return true;
	return false;
}

*/
void Assaltocomercial::printAcid() {
	cout << "Acidente tipo: Assalto comercial em " << localAcidente  << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridos << " Feridos " << endl;

}

void Assaltoparticular::printAcid() {
	cout << "Acidente tipo: Assalto particular em " << localAcidente  << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridos << " Feridos " << endl;

}

int Assalto::getNumCarros() {
	//return numCarrosBombeiros;
	return 0;
}
int Assalto::getNumSocorristas() {
	//return numBombeiros;
	return 0;
}