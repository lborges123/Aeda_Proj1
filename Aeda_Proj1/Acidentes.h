#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <fstream>

using namespace std;

/*
* Representa um acidente
*/
class Acidente {
	friend class PostoDeSocorro;
protected:
	/*
	* Local do acidente
	*/
	string localAcidente;
	/*
	* Data do acidente
	*/
	int data;
	/*
	* Par da longitude e da latitude do acidente
	*/
	pair<double, double> coord;
public:
	/**
	* @brief Construtor da classe Acidente
	*
	* Construtor da classe Acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	*
	*/
	Acidente(string localAcidente, int data, double x, double y);
	/**
	* @brief Construtor padrao da classe Acidente
	* Construtor da classe Acidente.
	*
	*/
	Acidente();
	/**
	* @brief Puramente virtual.
	*/
	virtual void printAcid();
	/**
	* @brief Funcao que retorna a longitude da localizacao do acidente.
	* Funcao que retorna a longitude da localizacao do acidente.
	*
	* @return coord.first Longitude da localizacao do acidente.
	*/
	double getx();
	/**
	* @brief Funcao que retorna a latitude da localizacao do acidente.
	*
	* Funcao que retorna a latitude da localizacao do acidente.
	*
	* @return coord.second latitude da localizacao do acidente.
	*/
	double gety();
	/**
	* @brief Puramente virtual.
	*/
	virtual int getNumCarros() {
		return 0;
	}
	/**
	* @brief Puramente virtual.
	*/
	virtual int getNumBombeiros() {
		return 0;
	}

};

class Incendio : public Acidente {
protected:
	/**
	* Numero de carros de bombeiros necessarios para o incendio
	*/
	int numCarrosBombeiros;
	/**
	* Numero de bombeiros necessarios para o incendio
	*/
	int numBombeiros;
public:
	/**
	* @brief Construtor da classe Incendio
	*
	* Construtor da classe Incendio, subclasse de Acidentes
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarrosBombeiros Numero de carros necessarios para combater o incendio.
	* @param numBombeiros Numero de bombeiros necessarios para combater o incendio.
	*
	*/
	Incendio(string localAcidente, int data, double x, double y,
		int numCarrosBombeiros, int numBombeiros);

	/**
	* @brief Construtor padrao da classe Incendio
	*
	* Construtor padrao da classe Incendio, subclasse de Acidentes
	*
	*/
	Incendio();
	/**
	* @brief Altera na classe incendio o numero de carros de bombeiros necessarios para combater o Incendio.
	*
	* Esta funcao altera o parametro numCarrosBombeiros da classe Incendio, dependendo do numero necessario.
	*
	* @param numCarros Numero de carros necessarios para combater o incendio.
	*
	*/
	void setNumCarros(int numCarros);
	/**
	* @brief Altera na classe incendio o numero de bombeiros necessarios para combater o Incendio.
	*
	* Esta funcao altera o parametro numBombeiros da classe Incendio, dependendo do numero necessario.
	*
	* @param numCarros Numero de bombeiros necessarios para combater o incendio.
	*
	*/
	void setNumBombeiros(int numBombeiros);
	/**
	* @brief Retorna quantos carros de bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao retorna o numero de carros de bombeiros necessarios para combater o incendio.
	* @return numCarrosBombeiros Carros de bombeiros necessarios para combater o fogo.
	*/
	int getNumCarros();
	/**
	* @brief Retorna quantos bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao retorna o numero de bombeiros necessarios para combater o incendio.
	* @return numBombeiros Bombeiros necessarios para combater o fogo.
	*/
	int getNumBombeiros();
};

class IncendioFlorestal : public Incendio {
private:
	/**
	*Hectares de chamas.
	*/
	int areaChamas;
public:
	/**
	* @brief Construtor da classe IncendioFlorestal
	*
	* Construtor da classe IncendioFlorestal, subclasse de Incendio, subclasse de Acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarrosBombeiros Numero de carros necessarios para combater o incendio.
	* @param numBombeiros Numero de bombeiros necessarios para combater o incendio.
	* @param areaChamas Hectares de chamas.
	*
	*/
	IncendioFlorestal(string localAcidente, int data, double x, double y,
		int numCarrosBombeiros, int numBombeiros, int areaChamas);
	/**
	* @brief Determina quantos carros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 3 carros sao sempre necessarios, e que envia mais 1 a cada 5 hectares.
	*
	* @param areaArdida Hectares de chamas.
	* @return carros Carros necessarios para combater o fogo.
	*/
	int numCarrosNecessarios(int areaArdida);
	/**
	* @brief Determina quantos bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 6 bombeiros sao sempre necessarios, e que envia mais 2 a cada 5 hectares.
	* @param areaArdida Hectares de chamas.
	* @return bombeiros Bombeiros necessarios para combater o fogo.
	*/
	int numBombeirosNecessarios(int areaArdida);
	/**
	* @brief Faz um print das especificacoes do incendio.
	*
	* Faz um print das especificacoes do incendio.
	*
	*/
	void printAcid();
};
class IncendioMoradia : public Incendio {
private:/**
		*Numero de pessoas afetadas
		*/
	int nPessoas;
public:
	/**
	* @brief Construtor da classe IncendioMoradia
	*
	* Construtor da classe IncendioMoradia, subclasse de Incendio, subclasse de acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarrosBombeiros Numero de carros necessarios para combater o incendio.
	* @param numBombeiros Numero de bombeiros necessarios para combater o incendio.
	* @param nPessoas Numero de pessoas afetadas pelo incendio.
	*
	*/
	IncendioMoradia(string localAcidente, int data, double x, double y,
		int numCarrosBombeiros, int numBombeiros, int nPessoas);
	/**
	* @brief Determina quantos carros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 1 carro e sempre necessario, e que envia mais 1 a cada 2 pessoas envolvidas.
	*
	* @param nPessoas Numero de pessoas afetadas pelo incendio.
	* @return carros Carros necessarios para combater o fogo.
	*/
	int numCarrosNecessarios(int nPessoas);
	/**
	* @brief Determina quantos Bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 2 carro e sempre necessario, e que envia mais 2 a cada 2 pessoas envolvidas.
	*
	* @param nPessoas Numero de pessoas afetadas pelo incendio.
	* @return bombeiros Bombeiros necessarios para combater o fogo.
	*/
	int numBombeirosNecessarios(int nPessoas);
	/**
	* @brief Faz um print das especificacoes do incendio.
	*
	* Faz um print das especificacoes do incendio.
	*
	*/
	void printAcid();
};
class IncendioApartamento : public Incendio {
private:
	/**
	* Numero de andares do predio
	*/
	int andares;
public:
	/**
	* @brief Construtor da classe IncendioApartamento
	*
	* Construtor da classe IncendioApartamento, subclasse de Incendio, subclasse de Acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarrosBombeiros Numero de carros necessarios para combater o incendio.
	* @param numBombeiros Numero de bombeiros necessarios para combater o incendio.
	* @param andares Numero de andares do predio.
	*
	*/
	IncendioApartamento(string localAcidente, int data, double x, double y,
		int numCarrosBombeiros, int numBombeiros, int andares);
	/**
	* @brief Determina quantos carros de bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 2 carros e sempre necessario, e que envia mais 2 a cada andar.
	*
	* @param andares Numero de andares afetadas pelo incendio.
	* @return carros Carros necessarios para combater o fogo.
	*/
	int numCarrosNecessarios(int andares);
	/**
	* @brief Determina quantos bombeiros sao necessarios para combater o Incendio.
	*
	* Esta funcao determina que pelo menos 4 bombeiros e sempre necessario, e que envia mais 4 por andar.
	*
	* @param andares Numero de andares afetadas pelo incendio.
	* @return bombeiros Bombeiros necessarios para combater o fogo.
	*/
	int numBombeirosNecessarios(int andares);
	/**
	* @brief Faz um print das especificacoes do incendio.
	*
	* Faz um print das especificacoes do incendio.
	*
	*/
	void printAcid();
};

class Assalto : public Acidente {
protected:
	/**
	* Numero de carros necessarios para combater o Assalto.
	*/
	int numCarros;
	/**
	* Numero de socorristas necessarios para combater o Assalto.
	*/
	int numSocorristas;
public:
	/**
	* @brief Construtor da classe Assalto
	*
	* Construtor da classe Assalto, subclasse de Acidente.
	*
	* @param localAcidente local do acidente.
	* @param data Dia do Incendio.
	* @param x Longitude do local do acidente.
	* @param y Latitude do local do acidente.
	* @param numCarros Numero de carros necessarios para combater o assalto.
	* @param NumSocorristas Numero de socorristas necessarios para combater o assalto.
	*/
	Assalto(string localAcidente, int data, double x, double y, int numCarros, int NumSocorristas);
	/**
	* @brief Construtor padrao da classe Assalto
	*
	* Construtor padrao da classe Assalto, subclasse de Acidentes
	*
	*/
	Assalto::Assalto();
	/**
	* @brief Funcao que retorna o numero de carros necessarios.
	* Funcao que retorna o numero de carros da classe assalto.
	*
	* @return numCarros O numero de carros necessarios para combater o assalto.
	*/
	int getNumCarros();
	/**
	* @brief Funcao que retorna o numero de carros necessarios.
	* Funcao que retorna o numero de carros da classe assalto.
	*
	* @return numCarros O numero de carros necessarios para combater o assalto.
	*/
	int getNumSocorristas();
};

class Assaltoparticular : public Assalto {
private:
	/**
	* Numero de feridos
	*/
	int numFeridos;
public:
	Assaltoparticular(string localAcidente, int data, double x, double y, int numCarros , int numSocorristas,
		int numFeridos);
	void printAcid();
	bool precisadeamb() const;
};

class Assaltocomercial : public Assalto {
private:
	/**
	* Numero de feridos
	*/
	int numFeridos;
public:
	Assaltocomercial(string localAcidente, int data, double x, double y, int numCarros, int numSocorristas,
		int numFeridos);
	void printAcid();
	bool precisadeamb() const;
};

/*class AcidenteViacaoNacional : public AcidenteViacao {}

class AcidenteViacaoAutoEstrada : public Acidente-Viacao {} */
