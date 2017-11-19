#pragma once
#include "PostosDeSocorro.h"

Policia::Policia(int numSocorristas, int numVeiculos, string local, double x, double y, int numCarros, int numMotos) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {
	setNumVeiculos(numCarros + numMotos);
	this->numMotos = numMotos;
	this->numCarros = numCarros;
}
double Policia::getProximidade(double x, double y) {
	double distancia;
	double x1 = coord.first;
	double y1 = coord.second;
	distancia = sqrt(((double)x - (double)x1)*((double)x - (double)x1) + ((double)y - (double)y1)*((double)y - (double)y1));
	return distancia;
}