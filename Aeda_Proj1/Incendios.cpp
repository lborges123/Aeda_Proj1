#include "Acidentes.h"
Incendio::Incendio(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros) : Acidente(localAcidente, data, x, y) {
	this->numBombeiros = numBombeiros;
	this->numCarrosBombeiros = numCarrosBombeiros;
}

IncendioFlorestal::IncendioFlorestal(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros, int areaChamas) : Incendio(localAcidente, data, x, y, numCarrosBombeiros, numBombeiros) {
	this->areaChamas = areaChamas;
	setNumCarros(numCarrosNecessarios(areaChamas));
	setNumBombeiros(numBombeirosNecessarios(areaChamas));
}

IncendioDomestico::IncendioDomestico(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros, bool moradia) : Incendio(localAcidente, data, x, y, numCarrosBombeiros, numBombeiros) {
	this->moradia = moradia;

}

int IncendioFlorestal::numCarrosNecessarios(int areaArdida) {
	int carros = 1;
	carros += areaArdida / 5;                   //envia pelo menos 1 carro + 1 por cada 5 hectares ardidos
	return carros;
}

int IncendioFlorestal::numBombeirosNecessarios(int areaArdida) {
	int bombeiros = 4;
	bombeiros += areaArdida / 5;                   //envia pelo menos 4 bombeiros + 4 por cada 5 hectares ardidos
	return bombeiros;
}

void Incendio::setNumCarros(int numCarros) {
	numCarrosBombeiros = numCarros;
}
void Incendio::setNumBombeiros(int numBombeiros) {
	this->numBombeiros = numBombeiros;
}