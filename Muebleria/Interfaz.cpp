#include "Interfaz.h"

std::string Interfaz::busquedaId() {
	std::string id;
	bool band = true;
	while (band) {
		std::cout << "Ingrese el numero de cedula de la persona que esta registrada en la pagina " << std::endl;
		std::getline(std::cin, id);
		std::cout << "Digite 1 para confirmar su cedula  " << std::endl;
		std::cout << "Digite 0 para volver a ingresar su cedula " << std::endl;
		int i = ingresarEntero();
		if (i == 1) {
			band = false;
			limpiar();
		}
	}
	return id;
}


bool Interfaz::seleccion() {
	bool s;
	while (true) {
		std::cout << " Confirmacion de compra " << std::endl;
		std::cout << " Seleccione ..." << std::endl;
		std::cout << " [1] Realizar Comprar - [0] Cancelar compra " << std::endl;
		if (std::cin >> s) {
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			return s;
		}
		else {
			std::cerr << " Opcion invalida " << std::endl;
			std::cout << "Intentalo de nuevo " << std::endl;
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			pausaLimpiar();
		}
	}
}


void Interfaz::menuFabricas() {
	std::cout << " Seleccione el estilo de mueble que desea adquirir " << std::endl;
	std::cout << " 1-Rustico " << std::endl;
	std::cout << " 2-Artesanal " << std::endl;
	std::cout << " 3-Lujoso " << std::endl;
	std::cout << " 4-Volver " << std::endl;
	
}


void Interfaz::error2() {
	std::cout << "Error, no se encontro el numero de cedula ingresado " << std::endl;
	pausaLimpiar();
}


double Interfaz::ingresarCentimetros() {
double cen;
bool con = true;
while (true) {
	std::cout << "Ingrese la cantidad de centimetros de materia prima que desea agregar " << std::endl;
	if (std::cin >> cen) {
		std::cin.clear();
		std::cin.ignore(1024, '\n');
		return cen;
	}
	else {
		std::cerr << "solo puedes ingresar numeros " << std::endl;
		std::cout << "Intentalo de nuevo " << std::endl;
		std::cin.clear();
		std::cin.ignore(1024, '\n');
		pausaLimpiar();
		}
	}
}

void Interfaz::menuMateriales() {
	std::cout << " Seleccione la materia prima " << std::endl;
	std::cout << " 1- Agregar madera " << std::endl;
	std::cout << " 2- Agregar mimbre " << std::endl;
	std::cout << " 3- Agregar cuero " << std::endl;
	std::cout << " 4- Volver " << std::endl;
}

void Interfaz::exito() {
	std::cout << "El proceso se ha completado de manera existosa !! " << std::endl;
	pausaLimpiar();
}

void Interfaz::error1() {
std::cout << "No se ha podido agregar al usuario, por que ese numero de cedula ya esta registrado.  " << std::endl;
pausaLimpiar();
}




// muestra el menu principal desde el inicio 
void Interfaz::menuPrincipal() {
	std::cout << " ------------------------------------------------------" << std::endl;
	std::cout << " ----------------Muebleria MaderArte-------------------" << std::endl;
	std::cout << " 1- Registrarse (Nuevo Cliente) " << std::endl;
	std::cout << " 2- Comprar un nuevo mueble(Requiere estar registrado) " << std::endl;
	std::cout << " 3- Agregar Materia prima (Madera, Mimbre y cuero) " << std::endl;
	std::cout << " 4- Consultar materia prima disponible " << std::endl;
	std::cout << " 5- Historial de compras por cliente " << std::endl;
	std::cout << " 6- Balance historico de ganancias obtenedidas " << std::endl;
	std::cout << " 7- Lista de muebles vendidos (Mayor a menor ) " << std::endl;
	std::cout << " 8- Lista completa de clientes " << std::endl;
	std::cout << " 9- Salir " << std::endl;
	std::cout << " -------------------------------------------------------" << std::endl;
}



std::string Interfaz::agregarCedula() {
	std::string ced;
	bool ban = true;
	while (ban) {
		std::cout << "Ingrese el numero de cedula por favor " << std::endl;
		std::getline(std::cin, ced);
		std::cout << "Digite 1 para confirmar su cedula  " << std::endl;
		std::cout << "Digite 0 para volver a ingresar su cedula " << std::endl;
		int i = ingresarEntero();
		if (i == 1) {
			ban = false;
			limpiar();
		}
	}
	limpiar();
	std::cout << "El dato a sido agregado correctamente  " << std::endl;
	pausaLimpiar();
	return ced;
}



// valida que ingrese el solo el número de telefono
int Interfaz::agregarNumero() {
	int e;
	bool continuar = true;
	while (true) {
		std::cout << "Por favor ingresa tu numero de telefono " << std::endl;
		if (std::cin >> e) {
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			return e;
		}
		else {
			std::cerr << "solo puedes ingresar numeros " << std::endl;
			std::cout << "intentalo de nuevo " << std::endl;
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			pausaLimpiar();
		}
	}
}


// valida que ingrese el nombre de manera correcta 
std::string Interfaz::agregarNombre() {
	std::string name;
	bool ban = true;
	while (ban) {
		std::cout << "Ingrese su nombre completo por favor " << std::endl;
		std::getline(std::cin, name);
		std::cout << "Digite 1 para confirmar su nombre " << std::endl;
		std::cout << "Digite 0 para volver a ingresar su nombre " << std::endl;
		int i = ingresarEntero();
		if (i == 1) {
			ban = false;
			limpiar();
		}
	}
	limpiar();
	std::cout << "El dato a sido agregado correctamente  " << std::endl;
	pausaLimpiar();
	return name;
}


int Interfaz::ingresarEntero() {
	int n;
	bool continuar = true;
	while (true) {
		if (std::cin >> n) {
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			return n;
		}
		else {
			std::cerr << "solo puedes ingresar 1 o 0 " << std::endl;
			std::cout << "intentalo de nuevo " << std::endl;
			std::cin.clear();
			std::cin.ignore(1024, '\n');
		}
	}
}


int Interfaz::seleccionNumero() {
	int i = 0;
	bool continuar = true;
	while (true) {
		std::cout << "Selecciona la opcion segun el numero...." << std::endl;
		if (std::cin >> i ){
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			return i;
		}
		else {
			std::cout << "Opcion invalida vuelve a intentarlo " << std::endl;
			std::cin.clear();
			std::cin.ignore(1024, '\n');
			pausaLimpiar();
		}
	}
}


// selecciona el color del material del mueble
std::string Interfaz::seleccionColor() {
	std::cout << " Seleccione el color del material a utilizar en la silla peque" << char(164) << "a" << std::endl;
	std::cout << "------------"<<std::endl;
	std::cout << "1-Rojo " << std::endl;
	std::cout << "2-Negro " << std::endl;
	std::cout << "3-Cafe " << std::endl;
	std::cout << "4-Azul" << std::endl;
	std::cout << "------------" << std::endl;
	short int opc = 0;
	bool ban=true;
	while (ban) {
		std::cin >> opc; //validar
		switch (opc) {
		case 1:
			return "Rojo ";
			ban = false;
			break;
		case 2:
			return "Negro ";
			ban = false;
			break;
		case 3:
			return "Cafe";
			ban = false;
		case 4:
			return "Azul ";
			ban = false;
		default:
			break;
		}
	}
	pausaLimpiar();
}





std::string Interfaz::seleccionColorSillon() {
	std::cout << " Seleccione el color del material a utilizar en el Sillon" << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "1-Rojo " << std::endl;
	std::cout << "2-Negro " << std::endl;
	std::cout << "3-Cafe " << std::endl;
	std::cout << "4-Azul" << std::endl;
	std::cout << "------------" << std::endl;
	short int opc = 0;
	bool ban = true;
	while (ban) {
		std::cin >> opc; //validar
		switch (opc) {
		case 1:
			return "Rojo ";
			ban = false;
			break;
		case 2:
			return "Negro ";
			ban = false;
			break;
		case 3:
			return "Cafe";
			ban = false;
		case 4:
			return "Azul ";
			ban = false;
		default:
			break;
		}
	}
	pausaLimpiar();
}





std::string Interfaz::seleccionColorMesa() {
	std::cout << " Seleccione el color del material a utilizar en la mesa " << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "1-Rojo " << std::endl;
	std::cout << "2-Negro " << std::endl;
	std::cout << "3-Cafe " << std::endl;
	std::cout << "4-Azul" << std::endl;
	std::cout << "------------" << std::endl;
	short int opc = 0;
	bool ban = true;
	while (ban) {
		std::cin >> opc; //validar
		switch (opc) {
		case 1:
			return "Rojo ";
			ban = false;
			break;
		case 2:
			return "Negro ";
			ban = false;
			break;
		case 3:
			return "Cafe";
			ban = false;
		case 4:
			return "Azul ";
			ban = false;
		default:
			break;
		}
	}
	pausaLimpiar();
}









void Interfaz::opcionesSillas() {
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "Seleccione la forma para la silla peque"<<char(164)<<"a"<< std::endl;
	std::cout << " 1-Cuadrada " << std::endl;
	std::cout << " 2-Rectangular " << std::endl;
	std::cout << " 3-Circular " << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}


void Interfaz::opcionesSillon() {
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "Seleccione la forma para el sillon "<<std::endl;
	std::cout << " 1-Cuadrado " << std::endl;
	std::cout << " 2-Rectangular " << std::endl;
	std::cout << " 3-Circular " << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;
}

void Interfaz::opcionesMesa() {
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "Seleccione la forma de la mesa " << std::endl;
	std::cout << " 1-Cuadrada " << std::endl;
	std::cout << " 2-Rectangular " << std::endl;
	std::cout << " 3-Circular " << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;

}




void Interfaz::pausaLimpiar() {
	pausar();
	limpiar();
}




void Interfaz::limpiar() {
	system("cls");
}

void Interfaz::pausar() {
	system("pause");
}