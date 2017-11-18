#pragma once

#include "PostosDeSocorro.h"

#include <vector>
using namespace std;

class ServicoEmergencia {
private:
	vector <Acidente *> acidentes;
	vector <PostoDeSocorro *> postosSocorro;
public:
	ServicoEmergencia();
	void addAcidente(Acidente * a);
	void addPostoSocorro(PostoDeSocorro * p);
	void printAcidentes();
	void printPostos() {
	/*	for (int i = 0; i < postosSocorro.size(); i++){ 
			postosSocorro[i]->printPostos();		}		//dynamic_cast<PostosDeSocorro *> */
	}
	void removeAcidente(Acidente a);
	void removePostoSocorro(PostoDeSocorro p);
	void tratamentoDeAcidentes(Acidente a);
};

