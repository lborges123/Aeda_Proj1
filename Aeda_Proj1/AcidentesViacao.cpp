#include "Acidentes.h"
AcidenteViacao::AcidenteViacao(string localAcidente, int data, int x, int y, int numFeridosGraves, int numVeiculosEnvolv) : Acidente(localAcidente, data, x, y) {
	this->numFeridosGraves = numFeridosGraves;
	this->numVeiculosEnvolv = numVeiculosEnvolv;
}
