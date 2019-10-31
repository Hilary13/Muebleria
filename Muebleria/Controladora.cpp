#include "Controladora.h"

Controladora::Controladora() {
	muebleria = new Muebleria();
}


void Controladora::menuPrincipal() {
	int opc;
	bool ban=true;
	while (ban) {
	Interfaz::menuPrincipal();
	opc = Interfaz::ingresarEntero();
		switch (opc) {
		case 1:
			Interfaz::limpiar();
			crearNuevoUsuario();
			break;
		case 2:
			Interfaz::limpiar();
			comprarMueble();
			break;
		case 3:
			Interfaz::limpiar();
			agregarMateriaPrima();
			Interfaz::limpiar();
			break;
		case 4:
			Interfaz::limpiar();
			consultarMateriaPrima();
			Interfaz::pausaLimpiar();
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			Interfaz::limpiar();
			listaMueblesVendidos();
			Interfaz::pausaLimpiar();
			break;
		case 8:
		Interfaz::limpiar();
		mostrarListaClientes();
		Interfaz::pausaLimpiar();
			break;
		case 9:
			ban = false;
		default:
			break;
		}
	}
}



// realiza la compra y valida que halla sido realiza exitosamente
void Controladora::comprarMueble() {
	std::string id = Interfaz::busquedaId();
	bool resul = muebleria->venderMueble(id);
	if (resul) {
		Interfaz::exito();
	}
	else {
		std::cout << "Error al realizar la compra   " << std::endl;
		std::cout << "Intentalo de nuevo " << std::endl;
		Interfaz::pausaLimpiar();
	}
}


void Controladora::consultarMateriaPrima() {
	std::cout<<muebleria->verMateriaPrima();
}


void Controladora::agregarMateriaPrima() {
	muebleria->almacenarMateriaPrima();
}


// crea un nuevo usiario si, se repite el numero de cedula 
// no se agregara si el mismo ya esta registrado 
bool Controladora::crearNuevoUsuario() {
	Cliente* cx = new Cliente();
	cx->setNombre(Interfaz::agregarNombre());
	cx->setNumero(Interfaz::agregarCedula());
	if (!muebleria->buscarCliente(cx->getCedula())) {
		muebleria->agregarCliente(cx);
		Interfaz::exito();
		return true;
	}
	else{
		Interfaz::error1();
		return false;
	}
	
}


void Controladora::mostrarListaClientes() {
	std::cout << muebleria->toString();
}

void Controladora::listaMueblesVendidos() {
	std::cout << muebleria->toStringMuebles();
}

Controladora::~Controladora() {
	delete muebleria;


	muebleria = nullptr;
}