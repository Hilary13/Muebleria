#include "SillaPequena.h"

SillaPequena::SillaPequena(std::string c, double p) {
	this->color=c;
	this->precio = p;
}

SillaPequena::SillaPequena() {
	color = "Por defecto ";
	precio = 0;
}

// metodos sets
void SillaPequena::setColor(std::string c) {
	color = c;
}

void SillaPequena::setPrecio(double p) {
	precio = p;
}

//metodos gets
std::string SillaPequena::getColor() {
	return color;
}

double SillaPequena::getPrecio() {
	return precio;
}

// metodo que calcula el area y recibe la materia prima disponible
//virtual float calcularArea(float,float);
//metodo toString()




std::string SillaPequena::toString() {
	std::stringstream s;
	s << "Informacion del mueble peque" << char(164)<<"o" << std::endl;
	s << "Color: " << color << std::endl;
	s << "Precio: $ " << precio << std::endl;
	return s.str();
}


// destructor de la clase silla 
SillaPequena::~SillaPequena() {

}
