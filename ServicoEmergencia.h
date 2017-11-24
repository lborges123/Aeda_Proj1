#pragma once

<<<<<<< HEAD
#include "PostosDeSocorro.h"
=======
#include "AcidentesViacao.h"
#include "INEM.h"
#include "AcidentesViacao.h"
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d

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
	void printPostos();
	void removeAcidente(Acidente *a);
	void removePostoSocorro(PostoDeSocorro *p);
	void tratamentoDeAcidentes(Acidente *a);
	void tratamentoDeIncendios(Acidente *a);
	vector <PostoDeSocorro *> getBombeiros();
	vector <PostoDeSocorro *> getINEM();
	vector <PostoDeSocorro *> getPolicia();
	void adicionarAcidenteViacao();
};

