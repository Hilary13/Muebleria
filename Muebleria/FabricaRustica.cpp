#include "FabricaRustica.h"

FabricaRustica::FabricaRustica():FabricaMueble() {

}



std::string FabricaRustica::toString() {
	std::stringstream r;
	r << "-------------------------------------------------------" << std::endl;
	r << "-Informacion del mueble " << std::endl;
	r << "	  Tipo Rustico " << std::endl;
	r << sillita->toString();
	r << sillita2->toString();
	r << sillon->toString();
	r << mesita->toString();
	r << toStringCosto();
	r << "-------------------------------------------------------" << std::endl;
	return r.str();
}



FabricaRustica::~FabricaRustica() {

}