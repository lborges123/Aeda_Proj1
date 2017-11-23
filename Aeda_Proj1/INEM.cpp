#pragma once
#include "PostosDeSocorro.h"


<<<<<<< HEAD
Inem::Inem(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numCarros, int numMotos) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {
=======
INEM::INEM(){ }


INEM::INEM(int numSocorristas, int numVeiculos, string local, double x, double y, int numAmbulancias, int numCarros, int numMotos) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
	setNumVeiculos(numCarros + numMotos + numAmbulancias);
	this->numMoto = numMotos;
	this->numCarro = numCarros;
	this->numAmbulancias = numAmbulancias;
}

double INEM::getProximidade(double x, double y) {
	double distancia;
	double x1 = coord.first;
	double y1 = coord.second;
	distancia = sqrt(((double)x - (double)x1)*((double)x - (double)x1) + ((double)y - (double)y1)*((double)y - (double)y1));
	return distancia;
}
