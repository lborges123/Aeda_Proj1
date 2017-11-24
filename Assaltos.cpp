#pragma once
<<<<<<< HEAD

#include "Assaltos.h"

Assalto::Assalto(string localAcidente, int data, int x, int y, int numFeridos) : Acidente(localAcidente, data, x, y) {
	this->numFeridos = numFeridos;
=======
#include "Acidentes.h"
Assalto::Assalto(string localAcidente, int data, double x, double y, int numCarros, int numSocorristas) : Acidente(localAcidente, data, x, y) {
	this->numCarros = numCarros;
	this->numSocorristas = numSocorristas;
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
}

<<<<<<< HEAD
Assaltoparticular::Assaltoparticular(string localAcidente, int data, int x, int y, int numFeridos) : Assalto( localAcidente,  data,  x,  y,  numFeridos){
	this->numFeridos = numFeridos;
}
/*
Assaltocomercial::Assaltocomercial(string localAcidente, int data, int x, int y, int numFeridos) {
=======
Assaltoparticular::Assaltoparticular(string localAcidente, int data, double x, double y,int numCarros, int NumSocorristas, int numFeridos): Assalto(localAcidente, data,x, y, numCarros, NumSocorristas) {
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
	this->numFeridos = numFeridos;
}

Assaltocomercial::Assaltocomercial(string localAcidente, int data, double x, double y, int numCarros, int NumSocorristas, int numFeridos) : Assalto(localAcidente, data, x, y, numCarros, NumSocorristas) {
	this->numFeridos = numFeridos;
}


bool Assaltocomercial::precisadeamb() const {
<<<<<<< HEAD
	if (numFeridos)
=======
	if (numFeridos > 0)
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
		return true;
	return false;
}

bool Assaltoparticular::precisadeamb() const {
	if (numFeridos)
		return true;
	return false;
}

<<<<<<< HEAD

void Assaltocomercial::print() {
=======
*/
void Assaltocomercial::printAcid() {
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
	cout << "Acidente tipo: Assalto comercial em " << localAcidente  << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridos << " Feridos " << endl;

}

void Assaltoparticular::printAcid() {
	cout << "Acidente tipo: Assalto particular em " << localAcidente  << "na localizacao x = " << coord.first << " y = " << coord.second << " em " << data << endl;
	cout << " no qual houveram " << numFeridos << " Feridos " << endl;

}
<<<<<<< HEAD
*/
=======

int Assalto::getNumCarros() {
	//return numCarrosBombeiros;
	return 0;
}
int Assalto::getNumSocorristas() {
	//return numBombeiros;
	return 0;
}
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
