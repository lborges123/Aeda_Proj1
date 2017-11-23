#pragma once
#include "Acidentes.h"


class AcidenteViacao : public Acidente {
private:
	int numFeridosGraves;
	int numVeiculosEnvolv;
<<<<<<< HEAD
	string localAcidente;
=======
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
	int numCarros;
	int numAmbulancias;
	int numMotos;
	int ae; //1-EN OU 0-AE
<<<<<<< HEAD

public:
	AcidenteViacao(string localAcidente, int ae, int data, int x, int y, int numFeridosGraves, int numVeiculosEnvolv);
=======



public:
	bool precisadeamb() const;
	AcidenteViacao(string localAcidente, int ae, int data, double x, double y, int numFeridosGraves, int numVeiculosEnvolv);
	AcidenteViacao();
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
	void setNumCarros(int numero);
	void setNumAmbulancias(int numero);
	void setNumMotos(int numero);
	int numCarrosNecessarios();
	int numAmbulanciasNecessarias();
	int numMotosNecessarias();
<<<<<<< HEAD
=======
	int getNumCarros() { return 0;}
	int getNumBombeiros() { return 0; }
>>>>>>> 439719ca816171d244ce83c6accb3c13c745512d
};
