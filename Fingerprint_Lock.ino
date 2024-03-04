// #include <ESP8266WiFi.h>
// #include <UniversalTelegramBot.h>

// const char* ssid = "12345";
// const char* password = "987654321";
// const char* botToken = "6731230768:AAGSw6qQbex0ETbKGqU2yuAn69k98E_G5V4";

// WiFiClientSecure client;
// UniversalTelegramBot bot(botToken, client);

// const int ledPin = D1;  // Use D1 for NodeMCU

// void setup() {
//   Serial.begin(115200);

//   pinMode(ledPin, OUTPUT);
//   digitalWrite(ledPin, LOW);  // Initially turn off the LED

//   // Connect to Wi-Fi
//   WiFi.begin(ssid, password);
//   while (WiFi.status() != WL_CONNECTED) {
//     delay(1000);
//     Serial.println("Connecting to WiFi...");
//   }
//   Serial.println("Connected to WiFi");
// }

// void loop() {
//   int messageID = bot.getUpdates(bot.last_message_received + 1);

//   if (messageID > 0) {
//     String messageText = bot.messages[messageID - 1].text;

//     if (messageText == "/on") {
//       digitalWrite(ledPin, HIGH);  // Turn on the LED
//       Serial.println("LED turned ON");
//     } else if (messageText == "/off") {
//       digitalWrite(ledPin, LOW);  // Turn off the LED
//       Serial.println("LED turned OFF");
//     }
//   }

//   delay(1000);
// }


int LED = 5; // Assign LED pin i.e: D1 on NodeMCU

void setup() {

// initialize GPIO 5 as an output

pinMode(LED, OUTPUT);

}

// the loop function runs over and over again forever

void loop() {

digitalWrite(LED, HIGH); // turn the LED on
delay(1000); // wait for a second
digitalWrite(LED, LOW); // turn the LED off
delay(1000); // wait for a second

}