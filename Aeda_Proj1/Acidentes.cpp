#pragma once
#include "Acidentes.h"


Acidente::Acidente(string localAcidente, int data, int x, int y) {
	this->localAcidente = localAcidente;
	this->data = data;
	pair<int, int> coord (x,y);
	this->coord = coord;
}
