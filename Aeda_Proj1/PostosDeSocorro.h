#include "Acidentes.h"



class PostoDeSocorro {
	friend class Acidente;
private:
	int numSocorristas;
	int numVeiculos;
	string local;
	pair<int, int> coord;
public:
	PostoDeSocorro(int numSocorristas, int numVeiculos, string local, int x, int y);
	void setNumVeiculos(int numVeiculos);
	//virtual string tipo() = 0;
};


class Bombeiros : public PostoDeSocorro {
private:
	int numAmbulancias;
	int numAutotanques;
public:
	Bombeiros(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numAutotanques);
	//string tipo() = 0;
};

class Policia : public PostoDeSocorro {
private:
	int numCarros;
	int numMotos;
public:
	Policia(int numSocorristas, int numVeiculos, string local, int x, int y, int numCarros, int numMotos);
	//string tipo() = 0;
};
