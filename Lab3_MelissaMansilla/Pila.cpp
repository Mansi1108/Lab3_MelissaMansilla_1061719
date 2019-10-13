#include "Pila.h"



Pila::Pila()
{
	NElementos = 0;
}


Pila::~Pila()
{
}

void Pila::Apilar(Carta valor) {
	Nodo * NodoNuevo = new Nodo();
	NodoNuevo->valor = valor; //asignar la carta al nodo
	if (Head == nullptr) 
	{
		Head = NodoNuevo;
	}
	else
	{
		Nodo* Aux = new Nodo();
		Aux = Head;//Guardamos el que era la cima anterior, que sera
		Head = NodoNuevo; // la cima es el nuevo nodo
		Head->Siguiente = Aux; // Hacemos que el auxiliar sea el siguiente.
	}
	NElementos++; //Aumentamos manualmente la cantidad de elementos
}
Carta Pila::Desapilar()
{
	if (Head == nullptr)
	{
		return *new Carta();
	}
	else
	{
		Carta valor = Head->valor;
		NElementos--;
		return valor;
	}
}
Carta Pila::ObtenerCima() {
	if (Head == nullptr)
	{
		return *new Carta;
	}
	else
	{
		return Head->valor;
	}
}
