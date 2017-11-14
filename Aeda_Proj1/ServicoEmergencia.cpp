#include "ServicoEmergencia.h"


template <class A, class P>
ServicoEmergencia<A, P>::ServicoEmergencia() {
}


template <class A, class P>
void ServicoEmergencia<A,P>::addAcidente(A) {
	acidentes.push_back(*A);
}

template <class A, class P>
void ServicoEmergencia<A, P>::addPostoSocorro(P) {
	postosSocorro.push_back(*P);

}

template<class A, class P>
void ServicoEmergencia<A, P>::printAcidentes() {
	for (int i = 0; i < acientes.size(); i++)
	{
		acidentes[i].print();
	}

}
template<class A, class P>
void ServicoEmergencia<A, P>::printPostos() {
	for (int i = 0; i < postosSocorro.size(); i++)
	{
		postosSocorro[i].print();
	}

}