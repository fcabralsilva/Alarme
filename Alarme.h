/**************************************************************

**************************************************************/
#ifndef Alarme_h
#define Alarme_h

#include <Arduino.h>

class Alarme
{
	public:
	  // DEFINIÇÃO DOS PINOS DE ENTRADA E SAIDA
		int sensores(int pin1);
		int sirene(int pin2);
		
		//FUNÇÃO QUE ATIVA A SIRENE CASO O ALARME DETECTE PRESENÇA
		void ligado(int pin4);
		
		//FUNÇÃO QUE DESATIVA O ALARME
		void desligado(int pin4);
		
		//FUNÇÃO QUE MONITORA OS SENSORES DO ALARME
		boolean monitoramento(int pin3, int pin5, boolean status);
		
	private:
		// RETORNAR SE O ALARME FUI ACIONADO OU NÃO , TRUE - FALSE
		boolean estado = falso;
};

#endif