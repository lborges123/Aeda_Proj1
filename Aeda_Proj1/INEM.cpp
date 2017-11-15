#pragma once
#include "INEM.h"


INEM::INEM(){ }


INEM::INEM(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numCarros, int numMotos) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {
	setNumVeiculos(numCarros + numMotos + numAmbulancias);
	this->numMotos = numMotos;
	this->numCarros = numCarros;
	this->numAmbulancias = numAmbulancias;
}

