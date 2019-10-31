#pragma once
#include<string>
#include<sstream>

class Mesa {
protected:
	std::string color;
	double precio;
public:
	Mesa(std::string, double);
	Mesa();
	// metodos sets
	virtual void setColor(std::string);
	virtual void setPrecio(double);
	//metodos gets
	virtual std::string getColor();
	virtual double getPrecio();

	// metodo que calcula el area y recibe la materia prima disponible
	//virtual float calcularArea(float,float);

	virtual std::string toString();

	virtual ~Mesa();

};
