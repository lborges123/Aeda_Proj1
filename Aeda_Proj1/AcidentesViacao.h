

class AcidenteViacao : public Acidente {
private:
	int numFeridosGraves;
	int numVeiculosEnvolv;
	string localAcidente;  //EN OU AE


public:
	bool precisadeamb() const;
	AcidenteViacao(string localAcidente, int data, int x, int y, int numFeridosGraves, int numVeiculosEnvolv);
};
