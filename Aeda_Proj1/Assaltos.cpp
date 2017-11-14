#pragma once
#include "Acidentes.h"
Assalto::Assalto(string localAcidente, int data, int x, int y, int numFeridos) : Acidente(localAcidente, data, x, y) {
	this->numFeridos = numFeridos;
}

Assaltoparticular::Assaltoparticular() {

}

Assaltocomercial::Assaltocomercial() {


}

int Assaltoparticular::numFeridos() {}

int Assaltocomercial::numFeridos() {}
