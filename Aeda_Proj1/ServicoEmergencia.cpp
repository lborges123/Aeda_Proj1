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


void ServicoEmergencia::tratamentoDeAcidentes(Acidente * a) {

	if (!(dynamic_cast<Incendio*> (a)))			// ve se a e incendio
	{
		
	}

	if (!(dynamic_cast<Incendio*> (a)))			// ve se a e incendio
	{

	}

	if (!(dynamic_cast<Incendio*> (a)))			// ve se a e incendio
	{

	}
}