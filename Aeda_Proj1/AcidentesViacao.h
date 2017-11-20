#pragma once
#include "PostosDeSocorro.h"

class AcidenteViacao : public Acidente {
private:
	int numFeridosGraves;
	int numVeiculosEnvolv;
	int numCarros;
	int numAmbulancias;
	int numMotos;
	int ae; //1-EN OU 0-AE



public:
	bool precisadeamb() const;
	AcidenteViacao(string localAcidente, int ae, int data, double x, double y, int numFeridosGraves, int numVeiculosEnvolv);
	AcidenteViacao();
	void setNumCarros(int numero);
	void setNumAmbulancias(int numero);
	void setNumMotos(int numero);
	int numCarrosNecessarios();
	int numAmbulanciasNecessarias();
	int numMotosNecessarias();
	int getNumCarros() { return 0;}
	int getNumBombeiros() { return 0; }
};
