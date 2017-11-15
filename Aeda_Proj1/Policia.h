#include "PostosDeSocorro.h"


class Policia : public PostoDeSocorro {
protected:
	int numCarros;
	int numMotos;



public:
	//(construtor vazio)
	Policia(int numSocorristas, int numVeiculos, string local, int x, int y, int numCarros, int numMotos);

	/* metodos get*/
	int getNumCarros();
	int getNumMotos();

};
