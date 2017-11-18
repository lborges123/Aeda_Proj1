#pragma once
#include "PostosDeSocorro.h"


class INEM : public PostoDeSocorro {
protected:
	int numAmbulancias;
	int numCarros;
	int numMotos;



public:

	INEM(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numCarros, int numMotos);
	INEM();
	/* metodos get*/
	int getNumAmbulacias();
	int getNumCarros();
	int getNumMotos();

};
