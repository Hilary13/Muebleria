#include "Muebleria.h"

Muebleria::Muebleria() {
	clientes = new Lista<Cliente>;
	madera = new Materia("madera",0);
	mimbre = new Materia("mimbre", 0);
	cuero = new Materia("cuero", 0);
}


// retorna el juego de sala 
// ya completamente editado y con precio
FabricaMueble* Muebleria::crearJuegoSala() {
	short int opcion;
	bool ban = true;
	FabricaMueble* r;
	while (ban) {
		Interfaz::menuFabricas();
		opcion = Interfaz::ingresarEntero();
		switch (opcion) {
		case 1:
			r = new FabricaRustica();
			r->creaJuegoMueble();
			return r;
		case 2:
			r = new FabricaArtesanal();
			r->creaJuegoMueble();
			return r;
			break;
		case 3:
			r = new FabricaLujo();
			r->creaJuegoMueble();
			return r;
			break;
		case 4:
			ban = false;
			return nullptr;
			break;
		default:
			break;
		}
	}
}




std::string Muebleria::verMateriaPrima() {
	std::stringstream p;
	p << "-------------------------------------------- " << std::endl;
	p << " Materia prima disponible " << std::endl;
	p << madera->toString();
	p << mimbre->toString();
	p << cuero->toString();
	p << "-------------------------------------------- " << std::endl;
	return p.str();
}

void Muebleria::almacenarMateriaPrima() {
	bool flag = true;
	int opc;
	while (flag){
		Interfaz::menuMateriales();
		opc = Interfaz::ingresarEntero();
		switch (opc){
		case 1:
			madera->setCentimetros(Interfaz::ingresarCentimetros());
			Interfaz::exito();
			break;
		case 2:
			mimbre->setCentimetros(Interfaz::ingresarCentimetros());
			Interfaz::exito();
			break;
		case 3:
			cuero->setCentimetros(Interfaz::ingresarCentimetros());
			Interfaz::exito();
			break;
		case 4:
			flag = false;
		default:
			break;
		}

	}
}



bool Muebleria::buscarCliente(std::string id) {
	IteradorLista<Cliente>* i = clientes->obtenerIterador();
	Cliente* cx2 = new Cliente();
	if (!i->masElementos()) {
		return false;
	}
	else{
	while (i->masElementos()) {
		cx2 = i->proximoElemento();
		if (cx2->getCedula() == id) {
			return true;
		}
	}
}
	return false;
}



// Busca al cliente para agregar el mueble a la lista de los muebles 
//del cliente, sino lo encuentra no pasa nada solo devuelve un false 
bool Muebleria::venderMueble(std::string id){
	IteradorLista<Cliente>* ite = clientes->obtenerIterador();
	Cliente* cx = new Cliente();
	bool seleccion = true;
	while (ite->masElementos()) {
		cx = ite->proximoElemento();
		if (cx->getCedula() == id) {
			FabricaMueble* temp = crearJuegoSala();
			seleccion = Interfaz::seleccion();
			if (seleccion) {
			cx->agregarMueble(temp);
			Interfaz::exito();
			return true;
			}
			else
			{
				return false;
			}
		}
	}
			return false;
			Interfaz::error2();
}






// agrega el cliente a la lista en la base de datos 
bool Muebleria::agregarCliente(Cliente* c) {
	clientes->agregar(c);
	return true;
}

 //Muestra la lista de muebles que han sido vendidos
 //falta que muestre de los mas vendidos a los menos vendidos 
std::string Muebleria::toStringMuebles() {
	std::stringstream m;
	int i=1;
	Cliente* f;
	IteradorLista<Cliente>* ite = clientes->obtenerIterador();
	m << "----------------------------------------------" << std::endl;
	m << "	Lista de muebles vendidos " << std::endl;
	while(ite->masElementos()){
		f = ite->proximoElemento();
		m << i++ << std::endl;
		m <<"- " << f->toStringMuebles() << std::endl;
	}
	m << "-----------------------------------------------" << std::endl;
	return m.str();
}


std::string Muebleria::toString() {
	std::stringstream m;
	int i = 1;
	Cliente* f;
	IteradorLista<Cliente>* ite = clientes->obtenerIterador();
	m << "----------------------------------------------" << std::endl;
	m << "	Lista de Clientes " << std::endl;
	while (ite->masElementos()) {
		f = ite->proximoElemento();
		m << i++ << std::endl;
		m << "- " << f->toString() << std::endl;
	}
	m << "-----------------------------------------------" << std::endl;
	return m.str();
}



// destructor de la clase.
Muebleria::~Muebleria() {
	delete clientes;
	delete madera;
	delete mimbre;
	delete cuero;
	// MEJORA EL USO DE MEMORIA 
	clientes = nullptr;
	madera = nullptr;
	mimbre = nullptr;
	cuero = nullptr;
}