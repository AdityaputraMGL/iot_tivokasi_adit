#include <Arduino.h>

// Deklarasi pin LED
int lampu = 26;
int lampu2 = 33;

void setup() {
    Serial.begin(115200);  
    Serial.println("ESP32 Alternating LED");

    pinMode(lampu, OUTPUT);
    pinMode(lampu2, OUTPUT);
}

void loop() {
    // Nyalakan LED pertama, matikan LED kedua
    digitalWrite(lampu, HIGH);
    digitalWrite(lampu2, LOW);
    Serial.println("LED 1 ON, LED 2 OFF");
    delay(1000); // Tunggu 1 detik

    // Matikan LED pertama, nyalakan LED kedua
    digitalWrite(lampu, LOW);
    digitalWrite(lampu2, HIGH);
    Serial.println("LED 1 OFF, LED 2 ON");
    delay(1000); // Tunggu 1 detik
}