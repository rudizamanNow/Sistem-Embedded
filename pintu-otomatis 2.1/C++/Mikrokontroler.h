#ifndef MIKROKONTROLER_H
#define MIKROKONTROLER_H

class Mikrokontroler {

private:
	int pinSensorProximity;
	int pinAktuator;

public:
	void inisialisasi();

	void bacaSensor();

	void activateAktuator();

	void deactivateAktuator();
};

#endif
