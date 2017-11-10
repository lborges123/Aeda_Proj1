#include "ServicoEmergencia.h"

class Acidente {
	friend class PostoDeSocorro;
private:
	string localAcidente;
	int data;
	pair <int, int> coord;
public:
	Acidente(string localAcidente, int data, int x, int y);
};
class Incendio : public Acidente {
private:
	int numCarrosBombeiros;
	int numBombeiros;
public:
	Incendio(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros);
	void setNumCarros(int numCarros);
	void setNumBombeiros(int numBombeiros);
};

class IncendioFlorestal : public Incendio {
private:
	int areaChamas;
public:
	IncendioFlorestal(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros, int areaChamas);
	int numCarrosNecessarios(int areaArdida);
	int numBombeirosNecessarios(int areaArdida);
};
class IncendioDomestico : public Incendio {
private:
	bool moradia;          //o que por aqui?
public:
	IncendioDomestico(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros, bool moradia);
};

class Assalto : public Acidente {
private:
	int numFeridos;
public:
	virtual bool precisadeamb() const = 0;
	Assalto(string localAcidente, int data, int x, int y, int numFeridos);
};

class AcidenteViacao : public Acidente {
private:
	int numFeridosGraves;
	int numVeiculosEnvolv;
public:
	virtual bool precisadeamb() const = 0;
	AcidenteViacao(string localAcidente, int data, int x, int y, int numFeridosGraves, int numVeiculosEnvolv);
};


/* class Assaltoparticular : public Assalto {}

class Assaltocomercial : public Assalto {}

class AcidenteViacaoNacional : public AcidenteViacao {}

class AcidenteViacaoAutoEstrada : public Acidente-Viacao {} */

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

class INEM : public PostoDeSocorro {
private:
	int numAmbulancias;
	int numCarros;
	int numMotos;
public:
	INEM(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numCarros, int numMotos);
	//string tipo() = 0;
};
