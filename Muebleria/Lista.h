#pragma once
#include"Nodo.h"
#include"IteradorLista.h"

template <class T>
class Lista {
public:
	Lista();
	virtual ~Lista();
	virtual void agregar(T*);
	virtual  IteradorLista<T>* obtenerIterador()const;
	friend class IteradorLista<T>;

private:
	Nodo<T>* primero;

};

template <class T>
Lista<T>::Lista() : primero(nullptr) {

}

template <class T>
Lista<T>::~Lista() {

}


template <class T>
IteradorLista<T>* Lista<T>::obtenerIterador()const {
	return new IteradorLista<T>(primero);
}


template <class T>
void Lista<T>::agregar(T* l) {
	primero = new Nodo<T>(l, primero);
}
