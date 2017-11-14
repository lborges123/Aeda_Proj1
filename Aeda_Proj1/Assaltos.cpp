#include "Acidentes.h"
Assalto::Assalto(string localAcidente, int data, int x, int y, int numFeridos) : Acidente(localAcidente, data, x, y) {
	this->numFeridos = numFeridos;
}

Assaltoparticular::Assaltoparticular(string localAcidente, int data, int x, int y, int numFeridos) {
	this->numFeridos = numFeridos;
}

Assaltocomercial::Assaltocomercial(string localAcidente, int data, int x, int y, int numFeridos) {
	this->numFeridos = numFeridos;
}

void Assalto::setNumFeridos(int numFeridos) {
	this->numFeridos = numFeridos;
}

bool Assaltocomercial::precisadeamb() const {
	if (numFeridos)
		return true;
	return false;
}

bool Assaltoparticular::precisadeamb() const {
	if (numFeridos)
		return true;
	return false;
}


void Assaltocomercial::print() {
	cout << "Acidente tipo: Assalto comercial em " << localAcidente  << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridos << " Feridos " << endl;

}

void Assaltoparticular::print() {
	cout << "Acidente tipo: Assalto particular em " << localAcidente  << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridos << " Feridos " << endl;

}
