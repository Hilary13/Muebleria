#include "SillonGrande.h"

SillonGrande::SillonGrande(std::string c, double p) {
	this->color = c;
	this->precio = p;
}

SillonGrande::SillonGrande() {
	color = "Por defecto ";
	precio = 0;
}

// metodos sets
void SillonGrande::setColor(std::string c) {
	color = c;
}

void SillonGrande::setPrecio(double p) {
	precio = p;
}

//metodos gets
std::string SillonGrande::getColor() {
	return color;
}

double SillonGrande::getPrecio() {
	return precio;
}

// metodo que calcula el area y recibe la materia prima disponible
//virtual float calcularArea(float,float);
//metodo toString()




std::string SillonGrande::toString() {
	std::stringstream s;
	s << "Informacion del sillon grande " << std::endl;
	s << "Color: " << color << std::endl;
	s << "Precio: $ " << precio << std::endl;
	return s.str();
}


// destructor de la clase silla 
SillonGrande::~SillonGrande() {

}