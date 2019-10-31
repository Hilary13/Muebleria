#pragma once
#include"Lista.h"

template <class T>
class IteradorLista {
public:
	IteradorLista(Nodo<T>*);
	virtual ~IteradorLista();
	virtual bool masElementos() const;
	virtual T* proximoElemento();
private:
	Nodo<T>* cursor;

};


template <class T>
IteradorLista<T>::IteradorLista(Nodo<T>* primero)
	: cursor(primero) {

}

template <class T>
bool IteradorLista<T>::masElementos() const {
	return cursor != nullptr;
}


template <class T>
T* IteradorLista<T>::proximoElemento() {
	T* tmp;
	tmp = cursor->obtenerDato();
	cursor = cursor->obtenerSiguiente();
	return tmp;
}

template <class T>
IteradorLista<T>::~IteradorLista() {

}
