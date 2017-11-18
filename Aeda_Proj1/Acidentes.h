
#pragma once


#include <vector>
#include <string>
#include <utility>
#include <fstream>
#include <iostream>
using namespace std;


class Acidente {
	friend class PostoDeSocorro;
protected:
	string localAcidente;
	int data;
	pair <int, int> coord;
public:
	Acidente(string localAcidente, int data, int x, int y);
	Acidente();
	virtual void printAcid();
};




/*class AcidenteViacaoNacional : public AcidenteViacao {}

class AcidenteViacaoAutoEstrada : public Acidente-Viacao {} */
