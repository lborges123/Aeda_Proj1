#pragma once
#include "PostosDeSocorro.h"

class AcidenteViacao : public Acidente {
private:
	int numFeridosGraves;
	int numVeiculosEnvolv;
	string localAcidente;  //EN OU AE


public:
	bool precisadeamb() const;
	AcidenteViacao(string localAcidente, int data, double x, double y, int numFeridosGraves, int numVeiculosEnvolv);
	AcidenteViacao();
	int getNumCarros() { return 0;}
	int getNumBombeiros() { return 0; }
};
