#pragma once
#include"FabricaMueble.h"



class FabricaLujo :public FabricaMueble {
public:
	FabricaLujo();
	virtual std::string toString();

	~FabricaLujo();
};