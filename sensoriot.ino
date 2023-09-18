// ARCHIVO SENSOR IOT

// Declaración de Variables
float t;
float h;
// Internet

// DHT
#include <DHT.h>
#define DHTPIN 18

// Otras


// Configuration
void setup() {
	// Serial configuration (JUAN CAMILO)


	// DHT configuration (JOSH)
	DHT dht(DHTPIN, DHT11);
	dht.begin();

	// WiFi configuration (Cesar)
Int status =0;

	

}




// Loop de polling
void loop() {
	// Código de lectura de los sensores (JOSH)
	leerDatosDHT();
	delay(1000); 
	// Encienda y apague un LED (Daniel)


	// Mostrar datos por serial (Cesar) - t,h
  
}


// Funcion Leer datos del DHT 11 (JOSH)
void leerDatos(){
	t = dht.readTemperature();
	h = dht.readHumidity();
}
// Funcion Encender y apagar el LED (Daniel)
Void led-on-off(){
If(digitalRead(2)==1&&status=0){
Status=1;
digitalWrite(3,HIGH);
}
If(digitalRead(2)==1&&status=1){
Status=0;
digitalWrite(3,Low);
}


