/**************************************************************

**************************************************************/
#include <Arduino.h>
#include "Alarme.h"

int Alarme::sensores( int pin1)
{
	pinMode(pin1, INPUT_PULLUP);
	return pin1;
}

int Alarme::sirene(int pin2)
{
	pinMode(pin2, OUTPUT);
	return pin2;
}

void Alarme::monitoramento(int pin3,int pin4, boolean status)
{
	delay(1);
	if (status == true)
	{
		if(digitalRead(pin3) == HIGH)
		{
			ligado(pin4);
		}			
	}
}

void Alarme::ligado(int pin4)
{
	digitalWrite(pin4,HIGH);
	Serial.println("####### Sensor do alarme ativado #####");
	delay(250);
}

void Alarme::desligado(int pin4)
{
	digitalWrite(pin4,LOW);
}