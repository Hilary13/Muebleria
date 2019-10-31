#include "Materia.h"


Materia::Materia(std::string t, double c) {
	tipo = t;
	centimetros = c;
}

Materia::Materia() {
	tipo = "Por defecto";
	centimetros = 1114545;
}


std::string Materia::getTipo() {
	return tipo;
}


double Materia::getCentimetros() {
	return centimetros;
}

void Materia::setTipo(std::string t) {
	tipo = t;
}


//si le agregan mas material se lo suma al que ya esta dispoble. 
void Materia::setCentimetros(double c) {
	centimetros += c;
}


//nos muestra la materia prima que hay dipoble en la fabrica 
std::string Materia::toString() {
	std::stringstream m;
	m << "---------------------------------------------" << std::endl;
	m << "Tipo: " << tipo << std::endl;
	m << "Cantidad disponible " << centimetros << "cm" << std::endl;
				return m.str();
}


// destructor de la clase 
Materia::~Materia() {

}