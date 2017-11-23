#pragma once

#include "Acidentes.h"



class PostoDeSocorro {
	friend class Acidente;
protected:
	int numSocorristas;
	int numVeiculos;
	string local;
	pair<int, int> coord;
public:
<<<<<<< HEAD
	PostoDeSocorro(int numSocorristas, int numVeiculos, string local, int x, int y);
=======
	PostoDeSocorro(int numSocorristas, int numVeiculos, string local, double x, double y);
	PostoDeSocorro();
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
	void setNumVeiculos(int numVeiculos);
	//virtual string tipo() = 0;
	virtual void printPostos() {};
	virtual double getProximidade(double x, double y) { return 0; };
	virtual int tratamentoDeIncendios(Acidente * a) { return 1; };
};


class Bombeiros : public PostoDeSocorro {
private:
	int numAmbulancias;
	int numAutotanques;
public:
	Bombeiros(int numSocorristas, int numVeiculos, string local, double x, double y, int numAmbulancias, int numAutotanques);
	//string tipo() = 0;
	void printPostos();
	int tratamentoDeIncendios(Acidente * a);
	double getProximidade(double x, double y);
};

class Policia : public PostoDeSocorro {
private:
	int numCarros;
	int numMotos;
public:
	Policia(int numSocorristas, int numVeiculos, string local, double x, double y, int numCarros, int numMotos);
	//string tipo() = 0;
	void printPostos(){}
	double getProximidade(double x, double y);
	int tratamentoDeIncendios(Acidente * a) { return 0; }
};

class Inem : public PostoDeSocorro {
private:
	int numAmbulancias;
	int numCarro;
	int numMoto;
public:
	Inem(int numSocorristas, int numVeiculos, string local, int x, int y, int numAmbulancias, int numCarro, int numMoto);
	void PrintPostos();
};
