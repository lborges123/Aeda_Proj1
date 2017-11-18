#pragma once
#include "PostosDeSocorro.h"

Policia::Policia(int numSocorristas, int numVeiculos, string local, int x, int y, int numCarros, int numMotos) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {
	//setNumVeiculos(numCarros + numMotos);
	this->numMotos = numMotos;
	this->numCarros = numCarros;
}
