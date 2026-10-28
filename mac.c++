#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  delay(2000);                 // give the Serial Monitor time to connect

  WiFi.mode(WIFI_STA);         // must be set before reading the MAC
  delay(100);

  Serial.println();
  Serial.print("MAC address: ");
  Serial.println(WiFi.macAddress());
}

void loop() {
  // Print again every 3 seconds in case the first line was missed
  delay(3000);
  Serial.print("MAC address: ");
  Serial.println(WiFi.macAddress());
}