#include "FabricaLujo.h"


FabricaLujo::FabricaLujo() :FabricaMueble() {

}



std::string FabricaLujo::toString() {
	std::stringstream r;
	r << "-------------------------------------------------------" << std::endl;
	r << "-Informacion del mueble " << std::endl;
	r << "	  Tipo Lujoso " << std::endl;
	r << sillita->toString();
	r << sillita2->toString();
	r << sillon->toString();
	r << mesita->toString();
	r << toStringCosto();
	r << "-------------------------------------------------------" << std::endl;
	return r.str();
}



FabricaLujo::~FabricaLujo() {

}