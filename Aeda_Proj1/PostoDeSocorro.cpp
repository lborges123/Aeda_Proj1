#include "Acidentes.h"

PostoDeSocorro::PostoDeSocorro(int numSocorristas, int numVeiculos, string local, int x, int y) {
	this->numSocorristas = numSocorristas;
	this->local = local;
	this->numSocorristas = numSocorristas;
	this->numVeiculos = numVeiculos;
	pair<int, int> coord(x, y);
	this->coord = coord;
}

void PostoDeSocorro::setNumVeiculos(int numVeiculos) {
	this->numVeiculos = numVeiculos;
}