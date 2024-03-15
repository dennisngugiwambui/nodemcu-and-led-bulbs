#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// Comment out or remove the following lines if you're not using a template project
// #define BLYNK_TEMPLATE_ID "TMPL2xsAOcjWb"
// #define BLYNK_TEMPLATE_NAME "smart health"

char auth[] = "m43LgpgorJJyiy6mg05WPWo9dnv04e--";
char ssid[] = "Delly IT";
char pass[] = "0758024400";

#define LED1 D1
#define LED2 D2
#define LED3 D3

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE(V0) {
  int ledValue = param.asInt();
  digitalWrite(LED1, ledValue);
}

BLYNK_WRITE(V1) {
  int ledValue = param.asInt();
  digitalWrite(LED2, ledValue);
}

BLYNK_WRITE(V2) {
  int ledValue = param.asInt();
  digitalWrite(LED3, ledValue);
}
