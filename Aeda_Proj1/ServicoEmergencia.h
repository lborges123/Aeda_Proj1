#pragma once

#include "AcidentesViacao.h"



class ServicoEmergencia {
private:
	vector <Acidente *> acidentes;
	vector <PostoDeSocorro *> postosSocorro;
public:
	ServicoEmergencia();
	void addAcidente(Acidente * a);
	void addPostoSocorro(PostoDeSocorro *p);
	void printAcidentes();
	void printPostos();
	void removeAcidente(Acidente a);
	void removePostoSocorro(PostoDeSocorro p);
	void tratamentoDeAcidentes(Acidente *a);
};

