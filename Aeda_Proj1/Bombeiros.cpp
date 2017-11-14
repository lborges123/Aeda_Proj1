#pragma once
#include "PostosDeSocorro.h"

Bombeiros::Bombeiros(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numAutotanques) : PostoDeSocorro(numSocorristas, numVeiculos, local, x, y) {
	setNumVeiculos(numAmbulancias + numAutotanques);
	this->numAmbulancias = numAmbulancias;
	this->numAutotanques = numAutotanques;
}

