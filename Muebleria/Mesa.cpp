#include "Mesa.h"

Mesa::Mesa(std::string c, double p) {
	this->color = c;
	this->precio = p;
}

Mesa::Mesa() {
	color = "Por defecto ";
	precio = 0;
}

// metodos sets
void Mesa::setColor(std::string c) {
	color = c;
}

void Mesa::setPrecio(double p) {
	precio = p;
}

//metodos gets
std::string Mesa::getColor() {
	return color;
}

double Mesa::getPrecio() {
	return precio;
}

// metodo que calcula el area y recibe la materia prima disponible
//virtual float calcularArea(float,float);
//metodo toString()




std::string Mesa::toString() {
	std::stringstream s;
	s << "Informacion de la Mesa" << std::endl;
	s << "Color: " << color << std::endl;
	s << "Precio: $ " << precio << std::endl;
	return s.str();
}


// destructor de la clase silla 
Mesa::~Mesa() {

}