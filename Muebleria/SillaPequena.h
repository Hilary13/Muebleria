#pragma once
#include<string>
#include<sstream>

class SillaPequena {
protected:
	std::string color;
	double precio;//este es el costo individual de su fabricacion individual
public:
	SillaPequena(std::string, double);
	SillaPequena();
	// metodos sets
	virtual void setColor(std::string);
	virtual void setPrecio(double);
	//metodos gets
	virtual std::string getColor();
	virtual double getPrecio();

	// metodo que calcula el area y recibe la materia prima disponible
	//virtual float calcularArea(float,float);
	
	virtual std::string toString();
	
	virtual ~SillaPequena();

};

