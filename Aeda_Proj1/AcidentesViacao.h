#pragma once
#include "Acidentes.h"


class AcidenteViacao : public Acidente {
private:
	int numFeridosGraves;
	int numVeiculosEnvolv;
	string localAcidente;
	int numCarros;
	int numAmbulancias;
	int numMotos;
	int ae; //1-EN OU 0-AE

public:
	AcidenteViacao(string localAcidente, int ae, int data, int x, int y, int numFeridosGraves, int numVeiculosEnvolv);
	void setNumCarros(int numero);
	void setNumAmbulancias(int numero);
	void setNumMotos(int numero);
	int numCarrosNecessarios();
	int numAmbulanciasNecessarias();
	int numMotosNecessarias();
};
