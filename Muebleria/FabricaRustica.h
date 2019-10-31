#pragma once
#include"FabricaMueble.h"



class FabricaRustica:public FabricaMueble{
public:
	FabricaRustica();
	virtual std::string toString();
	
	~FabricaRustica();
};

