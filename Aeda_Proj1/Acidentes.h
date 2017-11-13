#include "ServicoEmergencia.h"

class Acidente {
	friend class PostoDeSocorro;
protected:
	string localAcidente;
	int data;
	pair <int, int> coord;
public:
	Acidente(string localAcidente, int data, int x, int y);
	virtual bool precisadeamb() const = 0;
};


class Incendio : public Acidente {
protected:
	int numCarrosBombeiros;
	int numBombeiros;
public:
	Incendio(string localAcidente, int data,int x , int y, int numCarrosBombeiros, int numBombeiros);
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
	void print();
};
class IncendioMoradia : public Incendio {
private:
	int nPessoas;          
public:
	IncendioMoradia(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros, int nPessoas);
	int numCarrosNecessarios(int nPessoas);
	int numBombeirosNecessarios(int nPessoas);
	void print();
};
class IncendioApartamento : public Incendio {
private:
	int andares;          
public:
	IncendioApartamento(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros, int andares);
	int numCarrosNecessarios(int andares);
	int numBombeirosNecessarios(int andares);
	void print();
};
class Assalto : public Acidente {
private:
	int numFeridos;
public:
	bool precisadeamb() const;
	Assalto(string localAcidente, int data, int x, int y, int numFeridos);
};




/* class Assaltoparticular : public Assalto {}

class Assaltocomercial : public Assalto {}

class AcidenteViacaoNacional : public AcidenteViacao {}

class AcidenteViacaoAutoEstrada : public Acidente-Viacao {} */



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

