/*
    Project name : ESP8266 Buzzer Active Passive module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-buzzer-active-passive-module
*/

#define BUZZER_PIN 2  // GPIO2

void setup() {
    pinMode(BUZZER_PIN, OUTPUT);
    Serial.begin(115200);
}

void loop() {
    // Simulate an alarm condition
    bool alarmTriggered = digitalRead(0); // Assume a button or sensor connected to GPIO0

    if (alarmTriggered) {
        digitalWrite(BUZZER_PIN, HIGH);  // Activate the buzzer
        Serial.println("Alarm triggered!");
    } else {
        digitalWrite(BUZZER_PIN, LOW);   // Deactivate the buzzer
    }

    delay(100);  // Debounce delay
}
