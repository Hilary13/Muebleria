#include "FabricaMueble.h"

// cobstructor sin paremetros 
FabricaMueble::FabricaMueble() {
	// se crean todos los muebles del juego de sala 
	costo = 0;
	precio = 0;
	estado = false;
	this->sillita = new SillaPequena();
	this->sillita2 = new SillaPequena();
	this->sillon = new SillonGrande();
	this->mesita = new Mesa();
}

std::string FabricaMueble::toStringCosto() {
	std::stringstream f;
	if(!estado){
		f << " Estado de compra: [Pendiente]" << std::endl;
		f << " Saldo pendiente: " << (precio - costo) << std::endl;
	}
	else {
		f << " Estado de compra: [Vendido] " << std::endl;
	}
	f << " Costo de fabricacion: " << costo << std::endl;
	f << " Precion final " << precio<< std::endl;
	return f.str();
}


double FabricaMueble::getCosto() {
	return costo;
}

double FabricaMueble::getPrecio() {
	return precio;
}

void FabricaMueble::setCosto(double c) {
	costo = c;
}

void FabricaMueble::setPrecio(double p) {
	precio = p;
}


bool FabricaMueble::getEstado() {
	return estado;
}

void FabricaMueble::setestado(bool e) {
	estado = e;
}



// solo hay que modicicar los atributos 
bool FabricaMueble::agregarSillaPequena() {
	int a = 0;
	bool ban = true;
	std::string c = Interfaz::seleccionColor();
	while (ban){
	Interfaz::opcionesSillas();
	a = Interfaz::seleccionNumero();
	switch (a){
	case 1:
		sillita->setColor(c);
		return true;
		break;
	case 2:
		sillita->setColor(c);
	return true;
	break;
	case 3:
	sillita->setColor(c);
		return true;
		break;
	default:
		Interfaz::pausaLimpiar();
		break;
	}

	}

}

// solo hay que modicicar los atributos 
bool FabricaMueble::agregarSillaPequena2() {
	int b = 0;
	bool ban2 = true;
	std::string co = Interfaz::seleccionColor();
	while (ban2) {
		Interfaz::opcionesSillas();
		b = Interfaz::seleccionNumero();
		switch (b) {
		case 1:
			sillita2->setColor(co);
			return true;
			break;
		case 2:
			sillita2->setColor(co);
			return true;
			break;
		case 3:	
			sillita2->setColor(co);
			return true;
			break;
		default:
			Interfaz::pausaLimpiar();
			break;
		}
	}
}




// solo hay que modicicar los atributos 
bool FabricaMueble::agregarSillonGrande() {
	int d = 0;
	bool ban3 = true;
	std::string col = Interfaz::seleccionColorSillon();
	while (ban3) {
		Interfaz::opcionesSillon();
		d = Interfaz::seleccionNumero();
		switch (d) {
		case 1:
			sillon->setColor(col);
			return true;
			break;
		case 2:
			sillon->setColor(col);
			return true;
			break;
		case 3:
			sillon->setColor(col);
			return true;
			break;
		default:
			Interfaz::pausaLimpiar();
			break;
		}
	}
}

// solo hay que modicicar los atributos 
bool FabricaMueble::agregarMesa() {
	int f = 0;
	bool ban4 = true;
	std::string colo = Interfaz::seleccionColorMesa();
	while (ban4) {
		Interfaz::opcionesMesa();
		f = Interfaz::seleccionNumero();
		switch (f) {
		case 1:
			mesita->setColor(colo);
			return true;
			break;
		case 2:
			mesita->setColor(colo);
			return true;
			break;
		case 3:
			mesita->setColor(colo);
			return true;
			break;
		default:
			Interfaz::pausaLimpiar();
			break;
		}
	}
}





// metodo que modifica los atributos 
//equivalentes a cada mueble
 void FabricaMueble::creaJuegoMueble() {
	 agregarSillaPequena();
	 Interfaz::pausaLimpiar();
	 agregarSillaPequena2();
	 Interfaz::pausaLimpiar();
	 agregarSillonGrande();
	 Interfaz::pausaLimpiar();
	 agregarMesa();
	 Interfaz::pausaLimpiar();
}





//destructor de la clase 
FabricaMueble::~FabricaMueble() {
	delete sillita;
	delete sillon;
	delete mesita;
	//BPP
	sillita=nullptr;
	sillon = nullptr;;
	mesita = nullptr;
}