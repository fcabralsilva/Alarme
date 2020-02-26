/**************************************************************

**************************************************************/
#include <Arduino.h>
#include "Alarme.h"

// DEFINIR A FUNÇÃO DENTRO DO SETUP DO PROGRAMA
int Alarme::sensores( int pin1)
{
	pinMode(pin1, INPUT_PULLUP);
	return pin1;
}

// DEFINIR A FUNÇÃO DENTRO DO SETUP DO PROGRAMA
int Alarme::sirene(int pin2)
{
	pinMode(pin2, OUTPUT);
	return pin2;
}

//FUNÇÃO QUE MONITORA OS SENSORES DO ALARME
// pin3 = SENSOR
// PIN4 = SIRENE
// status = TRUE : ALARME ATIVADO
//					FALSE: ALARME DESATIVADO
boolean Alarme::monitoramento(int pin3,int pin4, boolean status)
{
	// SE ESTIVER 'TRUE' O ALARME ESTARA ATIVADO, 'FALSE' ALARME DESATIVADO
	if (status == true)
	{
		estado = false;
		
		// REALIZA LEITURA DO PINO ONDE ESTA O SENSOR DO ALARME(SENSOER DE PRESENÇA OU MAGNETICO)
		if(digitalRead(pin3) == HIGH)
		{
			
			//FUNÇÃO QUE ATIVA A SIRENE CASO O ALARME DETECTE PRESENÇA
			ligado(pin4);
			estado = true;
		}			
	}
	return estado;
}

//FUNÇÃO QUE ATIVA A SIRENE E OUTRAS OPÇÕES CASO ALARME DETECTE PRESENÇA
void Alarme::ligado(int pin4)
{
	digitalWrite(pin4,HIGH);
	Serial.println("####### ALARME LIGADO #####");
	delay(250);
}

//FUNÇÃO QUE DESATIVA O ALARME
void Alarme::desligado(int pin4)
{
	digitalWrite(pin4,LOW);
	Serial.println("####### DESLIGANDO ALARME #####");
}