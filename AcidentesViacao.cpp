#pragma once
#include "AcidentesViacao.h"


<<<<<<< HEAD
AcidenteViacao::AcidenteViacao(string localAcidente, int ae, int data, int x, int y, int numFeridosGraves, int numVeiculosEnvolv) : Acidente(localAcidente, data, x, y) {
=======
AcidenteViacao::AcidenteViacao(string localAcidente, int ae, int data, double x, double y, int numFeridosGraves, int numVeiculosEnvolv) : Acidente(localAcidente, data, x, y) {
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
	this->numFeridosGraves = numFeridosGraves;
	this->numVeiculosEnvolv = numVeiculosEnvolv;
	this->ae = ae;
	setNumCarros(numCarrosNecessarios());
	setNumMotos(numMotosNecessarias());
	setNumAmbulancias(numAmbulanciasNecessarias());
<<<<<<< HEAD
}

void AcidenteViacao::setNumCarros(int numero){
	this->numCarros = numero;
	return;
}

void AcidenteViacao::setNumMotos(int numero){
	this->numMotos = numero;
	return;
}

void AcidenteViacao::setNumAmbulancias(int numero){
	this->numAmbulancias = numero;
	return;
}

int AcidenteViacao::numCarrosNecessarios(){
	int nCarro = 0;
	/*se for em estrada nacional*/
	if (this->ae == 0){
			nCarro = this->numVeiculosEnvolv % 2; /* envia um carro por cada 2 veiculos envolvidos */
		}
	/* se for em autoestrada */
	nCarro = this->numVeiculosEnvolv; /* envia carro por cada veiculo envolvido */
	return nCarro;
}

int AcidenteViacao::numMotosNecessarias(){
	int nMoto = 0;
	/* se for em estrada nacional, ha preferencia por meios mais rapidos */
	if (this->ae == 0){
		nMoto = this->numVeiculosEnvolv; /* envia uma moto por cada veiculo envolvido */
	}
	/* se for em autoestrada */
	nMoto = this->numVeiculosEnvolv % 2 ; /* envia uma moto por cada 2 veiculos envolvidos */
	return nMoto;
=======
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
}

void AcidenteViacao::setNumCarros(int numero) {
	this->numCarros = numero;
	return;
}

void AcidenteViacao::setNumMotos(int numero) {
	this->numMotos = numero;
	return;
}

void AcidenteViacao::setNumAmbulancias(int numero) {
	this->numAmbulancias = numero;
	return;
}

int AcidenteViacao::numCarrosNecessarios() {
	int nCarro = 0;
	/*se for em estrada nacional*/
	if (this->ae == 0) {
		nCarro = this->numVeiculosEnvolv % 2; /* envia um carro por cada 2 veiculos envolvidos */
	}
	/* se for em autoestrada */
	nCarro = this->numVeiculosEnvolv; /* envia carro por cada veiculo envolvido */
	return nCarro;
}

int AcidenteViacao::numMotosNecessarias() {
	int nMoto = 0;
	/* se for em estrada nacional, ha preferencia por meios mais rapidos */
	if (this->ae == 0) {
		nMoto = this->numVeiculosEnvolv; /* envia uma moto por cada veiculo envolvido */
	}
	/* se for em autoestrada */
	nMoto = this->numVeiculosEnvolv % 2; /* envia uma moto por cada 2 veiculos envolvidos */
	return nMoto;
}


int AcidenteViacao::numAmbulanciasNecessarias() {
	int nAmb = 0;
	if (this->numFeridosGraves > 0) {
		nAmb = this->numFeridosGraves;  /* envia uma ambulancia para cada ferido grave */
	}
	return nAmb;
}

int AcidenteViacao::numAmbulanciasNecessarias(){
	int nAmb = 0;
	if (this->numFeridosGraves > 0){
		nAmb = this->numFeridosGraves;  /* envia uma ambulancia para cada ferido grave */
	}
	return nAmb;
}
