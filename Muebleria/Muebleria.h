#pragma once

#include"Materia.h"
#include"Cliente.h"

class Muebleria {
private:
	Lista<Cliente>* clientes;
	Materia* madera;
	Materia* mimbre;
	Materia* cuero;
public:
	Muebleria();
	FabricaMueble* crearJuegoSala();
	std::string verMateriaPrima();
	void almacenarMateriaPrima();
	bool venderMueble(std::string);
	bool agregarCliente(Cliente*);
	bool buscarCliente(std::string);
	std::string toString();
	std::string toStringMuebles();



	~Muebleria();
};

