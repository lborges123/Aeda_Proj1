
#pragma once
#include "ServicoEmergencia.h"


class Acidente {
	friend class PostoDeSocorro;
protected:
	string localAcidente;
	int data;
	pair <int, int> coord;
public:
	Acidente(string localAcidente, int data, int x, int y);
	Acidente();
	virtual void printAcid();
};
class Incendio : public Acidente {
protected:
	int numCarrosBombeiros;
	int numBombeiros;
public:
	Incendio(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros);
	Incendio();
	void setNumCarros(int numCarros);
	void setNumBombeiros(int numBombeiros);
};

class IncendioFlorestal : public Incendio {
private:
	int areaChamas;
public:
	IncendioFlorestal(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros, int areaChamas);
	IncendioFlorestal();
	int numCarrosNecessarios(int areaArdida);
	int numBombeirosNecessarios(int areaArdida);
	void printAcid();
};
class IncendioMoradia : public Incendio {
private:
	int nPessoas;
public:
	IncendioMoradia(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros, int nPessoas);
	int numCarrosNecessarios(int nPessoas);
	int numBombeirosNecessarios(int nPessoas);
	void printAcid();
};
class IncendioApartamento : public Incendio {
private:
	int andares;
public:
	IncendioApartamento(string localAcidente, int data, int x, int y, int numCarrosBombeiros, int numBombeiros, int andares);
	int numCarrosNecessarios(int andares);
	int numBombeirosNecessarios(int andares);
	void printAcid();
};
class Assalto : public Acidente {
private:
	int numFeridos;
	bool precisadeamb;
public:
	
	Assalto(string localAcidente, int data, int x, int y, int numFeridos);
};


class Assaltoparticular : public Assalto {
private:
	int numFeridos;
	bool precisadeamb;
public:
	Assaltoparticular(string localAcidente, int data, int x, int y, int numFeridos);
};

class Assaltocomercial : public Assalto {
private:
	int numFeridos;
	bool precisadeamb;
public:
	Assaltocomercial(string localAcidente, int data, int x, int y, int numFeridos);

};

/*class AcidenteViacaoNacional : public AcidenteViacao {}

class AcidenteViacaoAutoEstrada : public Acidente-Viacao {} */
