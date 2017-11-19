#pragma once

#include "AcidentesViacao.h"
#include "INEM.h"



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
	void removeAcidente(Acidente *a);
	void removePostoSocorro(PostoDeSocorro *p);
	void tratamentoDeAcidentes(Acidente *a);
	void tratamentoDeIncendios(Acidente *a);
	vector <PostoDeSocorro *> getBombeiros();
	vector <PostoDeSocorro *> getINEM();
	vector <PostoDeSocorro *> getPolicia();
};

