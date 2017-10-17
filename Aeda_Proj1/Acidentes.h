#pragma once
#include <iostream>
#include <string>
using namespace std;

class Acidente {
	friend class Posto_De_Socorro;
private:
	string local_Acidente;
	int data;
public:
	Acidente(string local_Acidente, int data);
};


class Incendio : public Acidente {
private:
	int num_Carros_Bombeiros;
	int num_Bombeiros;
public:
	Incendio(string local_Acidente, int data, int num_Carros_Bombeiros, int num_Bombeiros);
};

class Assalto : public Acidente {
private:
	int num_Feridos;
public:
	virtual bool precisa_de_amb() const = 0;
	Assalto(string local_Acidente, int data, int num_Feridos);
};

class Acidente_Viacao : public Acidente {
private:
	int num_Feridos_Graves;
	int num_Veiculos_Envolv;
public:
	virtual bool precisa_de_amb() const = 0;
	Acidente_Viacao(string local_Acidente, int data, int num_Feridos_Graves, int num_Veiculos_Envolv);
};

class Incendio_Florestal : public Incendio {
private:
	int area_Chamas;
public:
	Incendio_Florestal(string local_Acidente, int data, int num_Carros_Bombeiros, int num_Bombeiros, int area_Chamas);
};
class Incendio_Domestico : public Incendio {
private:
	bool moradia;          //o que por aqui?
public:
	Incendio_Domestico(string local_Acidente, int data, int num_Carros_Bombeiros, int num_Bombeiros, bool moradia);
};


class Posto_De_Socorro {
	friend class Acidente;
private:
	int num_Socorristas;
	int num_Veiculos;
	string local;
public:
	Posto_De_Socorro(int num_Socorristas, int num_Veiculos, string local);
};

class Bombeiros : public Posto_De_Socorro {
private:
	int num_Ambulancias;
	int num_Autotanques;
public:
	Bombeiros(int num_Socorristas, int num_Veiculos, string local, int num_Ambulancias, int num_Autotanques);
};

class Policia : public Posto_De_Socorro {
private:
	int num_Carros;
	int num_Motos;
public:
	Policia(int num_Socorristas, int num_Veiculos, string local, int num_Carros, int num_Motos);
};

class INEM : public Posto_De_Socorro {
private:
	int num_Ambulancias;
	int num_Carros;
	int num_Motos;
public:
	INEM(int num_Socorristas, int num_Veiculos, string local, int num_Ambulancias, int num_Carros, int num_Motos);
};