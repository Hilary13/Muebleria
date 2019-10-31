#include "Cliente.h"

// el numero se refiere al numero de telefono 
Cliente::Cliente() {
	nombre = "usuario";
	cedula = "111111111";
	muebles = new Lista<FabricaMueble>;
}

Cliente::Cliente(std::string n,std::string ce) {
	nombre = n;
	cedula = ce;
}

std::string Cliente::getNombre() {
	return nombre;
}

std::string Cliente::getCedula() {
	return cedula;
}

void Cliente::setNombre(std::string n) {
	nombre = n;
}

void Cliente::setNumero(std::string n) {
	cedula = n;
}

std::string Cliente::toString() {
	std::stringstream c;
	c << "----------------------------------------" << std::endl;
	c << "Informacion del cliente " << std::endl;
	c << "Nombre: " << nombre << std::endl;
	c << "Cedula: " << cedula << std::endl;
	c << "----------------------------------------" << std::endl;
	return c.str();
}



std::string Cliente::toStringMuebles() {
		std::stringstream m;
		int i=1;
		FabricaMueble* f;
		IteradorLista<FabricaMueble>* ite = muebles->obtenerIterador();
		m << "----------------------------------------------" << std::endl;
		m << "	Lista de muebles  " << std::endl;
		while(ite->masElementos()){
			f = ite->proximoElemento();
			m << i++ << std::endl;
			m <<"- " << f->toString() << std::endl;
		}
		m << "-----------------------------------------------" << std::endl;
		return m.str();
}



std::string Cliente::toStringCompleto() {
	std::stringstream co;
	co << toString();
	co << toStringMuebles();
	return co.str();

}


// agrega los muebles a la lista de los muebles abquiridos por el cliente 
bool Cliente::agregarMueble(FabricaMueble* obj) {
	muebles->agregar(obj);
	return true;
}




Cliente::~Cliente() {
	
}