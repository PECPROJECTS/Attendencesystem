#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

void setupWiFi()
{
   Serial.print("Connecting to WiFi ");
   WiFi.begin("D-Link", "12345678");
   while(WiFi.status() != WL_CONNECTED)
   {
     delay(500);
     Serial.print(".");
   }

   Serial.println("Connected");
}


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  setupWiFi();
  HTTPClient http;
http.begin("http://192.168.1.3:5000/mark/karun");
 int httpCode = http.GET();
  if(httpCode == HTTP_CODE_OK)
  {
      Serial.print("HTTP response code ");
      Serial.println(httpCode);
      String response = http.getString();
      Serial.println(response);
    
  }
  else
  {
    Serial.println("Error in HTTP request");
  }

  http.end();
}

void loop() {
  // put your main code here, to run repeatedly:
//HTTPClient http;
//http.begin("http://192.168.1.3:5000/time");
// int httpCode = http.GET();
 // if(httpCode == HTTP_CODE_OK)
 // {
   //   Serial.print("HTTP response code ");
    //  Serial.println(httpCode);
    //  String response = http.getString();
    //  Serial.println(response);
    
 // }
 // else
 // {
   // Serial.println("Error in HTTP request");
 // }

  //http.end();

}
