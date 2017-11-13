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
