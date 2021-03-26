#define BLYNK_PRINT Serial
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>
#include <SoftwareSerial.h>
#include <Servo.h>

char network_name[] = "YOUR NETWORK NAME";
char network_password[] = "YOUR PASSWORD";
char auth[] = "YOUR AUTH TOKEN";
int SERVO_PIN = 4; 
int led = 5; 
int lock_degree = 120; 
int unlock_degree = 0; 
Servo  servo;
SoftwareSerial EspSerial(2, 3); //Rx, Tx
#define ESP8266_BAUD 9600

ESP8266 wifi(&EspSerial);

void Lock();
void Unlock();

BLYNK_WRITE(V1)
{
  int pinValue = param.asInt();
  
  if(pinValue == 1)
    Lock();
  else
    Unlock();
    
}

void setup() 
{
  Serial.begin(9600);
  EspSerial.begin(ESP8266_BAUD);
  delay(10);
  Blynk.begin(auth, wifi, network_name, network_password);
  
  servo.attach(SERVO_PIN);
  pinMode(led, OUTPUT);
  servo.write(unlock_degree);
}

void loop() 
{
  Blynk.run();
}


void Lock()
{
  servo.write(lock_degree);
  digitalWrite(led, HIGH);
}

void Unlock()
{
  servo.write(unlock_degree);
  digitalWrite(led, LOW);
}
