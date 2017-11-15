#pragma once


#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <fstream>

using namespace std;

template <class A, class P>
class ServicoEmergencia {
private:
	vector <A *> acidentes;
	vector <P *> postosSocorro;
public:
	ServicoEmergencia() { }
	void addAcidente(A a) { 
		acidentes.push_back(*a);
	}
	void addPostoSocorro(P p){ postosSocorro.push_back(*p); }
	void printAcidentes() {
		for (int i = 0; i < acidentes.size(); i++){	acidentes[i]->printAcid();}
	}
	void printPostos() {
	/*	for (int i = 0; i < postosSocorro.size(); i++){ 
			postosSocorro[i]->printPostos();		}		//dynamic_cast<PostosDeSocorro *> */
	}
	void removeAcidente(A a);
	void removePostoSocorro(P p);
	void tratamentoDeAcidentes(A a);
};

