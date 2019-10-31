#pragma once
#include<string>
#include<iostream>

// clase sin atributos 
//metodos estaticos 
class Interfaz {
public:
	static std::string busquedaId();

	static bool seleccion();
	static void menuFabricas();
	static void error2();
	static double ingresarCentimetros();
	static void menuMateriales();
	static void exito();
	static void error1();
	static void menuPrincipal();
	static int agregarNumero();
	static int ingresarEntero();
	static std::string agregarNombre();
	static std::string agregarCedula();
	static int seleccionNumero();
	static std::string seleccionColor();
	static std::string seleccionColorSillon();
	static std::string seleccionColorMesa();
	static void opcionesSillas();
	static void opcionesSillon();
	static void opcionesMesa();
	static void limpiar();
	static void pausar();
	static void pausaLimpiar();
};