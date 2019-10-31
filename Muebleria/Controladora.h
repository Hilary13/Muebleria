#pragma once
#include"Muebleria.h"
#include"Interfaz.h"

class Controladora{
private:
	Muebleria* muebleria;
public:
	Controladora();
	void menuPrincipal();
	bool crearNuevoUsuario();
	void agregarMateriaPrima();
	void consultarMateriaPrima();


	void mostrarListaClientes();
	void listaMueblesVendidos();
	void comprarMueble();
	
	
	~Controladora();
};

