#pragma once
#include "AcidentesViacao.h"


AcidenteViacao::AcidenteViacao(string localAcidente, int data, double x, double y, int numFeridosGraves, int numVeiculosEnvolv) : Acidente(localAcidente, data, x, y) {
	this->numFeridosGraves = numFeridosGraves;
	this->numVeiculosEnvolv = numVeiculosEnvolv;
}


bool AcidenteViacao::precisadeamb() const {
	if (numFeridosGraves)
		return true;
	return false;
}
AcidenteViacao::AcidenteViacao(){};