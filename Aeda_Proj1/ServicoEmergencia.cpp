#include "ServicoEmergencia.h"

ServicoEmergencia::ServicoEmergencia(){}

void ServicoEmergencia::addAcidente(Acidente * a) {
	acidentes.push_back(a);
}
void ServicoEmergencia::addPostoSocorro(PostoDeSocorro *p) {
	postosSocorro.push_back(p); 
}

void ServicoEmergencia::printAcidentes() {
	for (unsigned int i = 0; i < acidentes.size(); i++) {
		acidentes[i]->printAcid(); 
	}
}

void ServicoEmergencia::printPostos() {
	/*	for (int i = 0; i < postosSocorro.size(); i++){
	postosSocorro[i]->printPostos();		}		//dynamic_cast<PostosDeSocorro *> */
}


void tratamentoDeAcidentes(Acidente a) {
	Incendio * pba = new Incendio;

	if (!(dynamic_cast<Incendio*> (pba)))			// ve se a e incendio
	{

	}
	Assalto * pba = new Assalto;

	if (!(dynamic_cast<Incendio*> (pba)))			// ve se a e incendio
	{

	}
	AcidenteViacao * pba = new AcidenteViacao;

	if (!(dynamic_cast<Incendio*> (pba)))			// ve se a e incendio
	{

	}
}