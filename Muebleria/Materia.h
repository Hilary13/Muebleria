#pragma once
#include<string>
#include<sstream>
#include<iostream>

class Materia{
private:
	std::string tipo;
	double centimetros;
public:
	Materia(std::string,double);
	Materia();

	std::string getTipo();
	double getCentimetros();

	void setTipo(std::string);
	void setCentimetros(double);



	std::string toString();


	~Materia();



};

