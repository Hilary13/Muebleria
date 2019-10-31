#pragma once
#include"FabricaMueble.h"



class FabricaArtesanal :public FabricaMueble {
public:
	FabricaArtesanal();
	virtual std::string toString();

	~FabricaArtesanal();
};