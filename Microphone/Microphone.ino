#include <M5Stack.h>

//inisialisasi pin
const int Analog = 36;
const int Digtal = 2;
void setup() {


M5.begin(); //memulai library yang telah di tambahkan 
pinMode(Digtal, INPUT_PULLUP); //membaca nilai input
dacWrite(25, 0); //mengatur penulisan nilai input
M5.Lcd.setCursor(100, 0, 4);  //mengatur kursor di lcd m5stack
M5.Lcd.print("MICROPHONE");  //menampilkan kata"MICROPHONE" pada lcd
}
uint16_t a_data; //menyimpan data dengan lebar data 16 bit untuk analog
uint16_t d_data; //menyimpan data dengan lebar data 16 bit untuk digital
void loop() {


a_data = analogRead(Analog); //membaca nilai analog
d_data = digitalRead(Digtal);//membaca nilai digital 
Serial.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); //menampilkan nilai analog dan digital pada serial monitor
M5.Lcd.setCursor(30, 120, 4); //mengatur kursor di lcd m5steck
M5.Lcd.printf("Analog:%0d Digtal:%0d\n", a_data, d_data); //menampilkan nilai analog dan digital pada lcd m5stack
delay(200); //delay tampilan pada lcd selama 0.2s
}
