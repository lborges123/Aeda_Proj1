#include "Acidentes.h"


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
