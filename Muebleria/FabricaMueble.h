#pragma once
#include"PequenaMadera.h"
#include"PequenaMimbre.h"
#include"pequenoCuero.h"
#include"GrandeMadera.h"
#include"GrandeMimbre.h"
#include"GrandeCuero.h"
#include"MesaMadera.h"
#include"MesaMimbre.h"
#include"MesaCuero.h"
#include"Interfaz.h"


class FabricaMueble{
protected:
	double costo;// nos retorna el costo de fabricacion del producto
	double precio;// nos da el precio final del mueble con todo e IVA 
	bool estado;// estado de la venta vendido o adelantado
	SillaPequena* sillita;
	SillaPequena* sillita2;
	SillonGrande* sillon;
	Mesa* mesita;
public:
	FabricaMueble();

	/*virtual void asignarComprador();*/
	virtual bool agregarSillaPequena();
	virtual bool agregarSillaPequena2();
	virtual bool agregarSillonGrande();
	virtual bool agregarMesa();
	virtual std::string toString() = 0;//MVP
	virtual std::string toStringCosto();
	virtual void creaJuegoMueble();
	
	double getCosto();
	double getPrecio();

	void setCosto(double);
	void setPrecio(double);

	bool getEstado();
	void setestado(bool);


	virtual ~FabricaMueble();
};

