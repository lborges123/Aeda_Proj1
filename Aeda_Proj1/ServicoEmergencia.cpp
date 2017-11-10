#include "ServicoEmergencia.h"


template <class A, class P>
ServicoEmergencia<A, P>::ServicoEmergencia() {
}


template <class A, class P>
void ServicoEmergencia<A, P>::addAcidente(A) {
	acidentes.push_back(*A);
}

template <class A, class P>
void ServicoEmergencia<A, P>::addPostoSocorro(P) {
	postosSocorro.push_back(*P);

}
