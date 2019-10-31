#pragma once

template <class T>
class Nodo {

private:
	T* dato;
	Nodo<T>* siguiente;
public:
	Nodo(T*, Nodo<T>*);
	virtual ~Nodo();
	virtual T* obtenerDato() const;
	virtual Nodo<T>* obtenerSiguiente() const;

};

//-------------------Nodo.cpp--------------------------
template <class T>
Nodo<T>::Nodo(T* l, Nodo<T>* s)
	: dato(l), siguiente(s) {

}

template <class T>
T* Nodo<T>::obtenerDato() const {
	return dato;
}

template <class T>
Nodo<T>* Nodo<T>::obtenerSiguiente() const {
	return siguiente;
}

template <class T>
Nodo<T>::~Nodo() {

}

