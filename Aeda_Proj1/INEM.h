#include "PostoDeSocorro.h"
#include "Acidentes.h"


class INEM : public PostoDeSocorro {
protected:
	int numAmbulancias;
	int numCarros;
	int numMotos;



public:
	//(construtor vazio)
	INEM(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numCarros, int numMotos);

	/* metodos get*/
	int getNumAmbulacias();
	int getNumCarros();
	int getNumMotos();

};
