#include "FabricaArtesanal.h"


FabricaArtesanal::FabricaArtesanal() :FabricaMueble() {

}



std::string FabricaArtesanal::toString() {
	std::stringstream r;
	r << "-------------------------------------------------------" << std::endl;
	r << "-Informacion del mueble " << std::endl;
	r << "	  Tipo Artesanal " << std::endl;
	r << sillita->toString();
	r << sillita2->toString();
	r << sillon->toString();
	r << mesita->toString();
	r << toStringCosto();
	r << "-------------------------------------------------------" << std::endl;
	return r.str();
}



FabricaArtesanal::~FabricaArtesanal() {

}