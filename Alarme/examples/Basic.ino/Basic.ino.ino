#include <Alarme.h>
Alarme Alarme;
int sen = 18;
int sir = 2;
void setup() {
  Serial.begin(115200);
  Alarme.sensores(sen);
  Alarme.sirene(sir);

}

void loop() {
  Alarme.monitoramento(sen,sir);

}
