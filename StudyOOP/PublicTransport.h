#pragma once
#include "Engine.h"

class PublicTransport : public virtual Engine {
private:
	float ticket;
public:
	PublicTransport();
	PublicTransport(int, float);
	PublicTransport(float);

	~PublicTransport();

	void show();
	float getTicket();

protected:

};

