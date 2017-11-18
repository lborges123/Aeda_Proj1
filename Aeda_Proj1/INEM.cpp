#pragma once
#include "PostosDeSocorro.h"


Inem::Inem(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numCarros, int numMotos) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {
	setNumVeiculos(numCarros + numMotos + numAmbulancias);
	this->numMoto = numMotos;
	this->numCarro = numCarros;
	this->numAmbulancias = numAmbulancias;
}

