#pragma once
#include<sstream>
#include<string>
#include"Lista.h"
#include"IteradorLista.h"
#include"FabricaMueble.h"
#include"FabricaRustica.h"
#include"FabricaArtesanal.h"
#include"FabricaLujo.h"


class Cliente {
private:
	std::string nombre;
	std::string cedula;
	Lista<FabricaMueble>* muebles; // el cliente puede tener varios muebles 
public:
	Cliente();
	Cliente(std::string,std::string);

	std::string getNombre();
	std::string getCedula();

	void setNombre(std::string);
	void setNumero(std::string);

	bool agregarMueble(FabricaMueble*);

	std::string toString();// muestra solamente la informacion del cliente 
	std::string toStringMuebles();// muestra los muebles del cliente 
	std::string toStringCompleto();// muestra los clientes y los muebles solicitados por el mismo 


	~Cliente();
};

