




SOME OF THE CODES






```
#define LED1 D1
#define LED2 D2
#define LED3 D3

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  digitalWrite(LED1, HIGH);  // Turn on LED1
  delay(5000);               // Wait 5 seconds
  digitalWrite(LED1, LOW);   // Turn off LED1

  digitalWrite(LED2, HIGH);  // Turn on LED2
  delay(5000);               // Wait 5 seconds
  digitalWrite(LED2, LOW);   // Turn off LED2

  digitalWrite(LED3, HIGH);  // Turn on LED3
  delay(5000);               // Wait 5 seconds
  digitalWrite(LED3, LOW);   // Turn off LED3
}
```


