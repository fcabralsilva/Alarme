/**************************************************************

**************************************************************/
#ifndef Alarme_h
#define Alarme_h

#include <Arduino.h>

class Alarme
{
	public:
		int sen;
		int sensores(int pin1);
		int sirene(int pin2);
		void ligado(int pin4);
		void desligado(int pin4);
		void monitoramento(int pin3, int pin5, boolean status);
		
	private:
		int pino_sensor;
		int pino_sirene;
		char senha_digitada;
};

#endif