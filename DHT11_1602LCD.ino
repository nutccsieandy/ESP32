#include <LiquidCrystal_I2C.h> 
#include "DHT.h"
LiquidCrystal_I2C lcd(0x27,16,2); 
DHT dht(9,DHT11);
void setup()
{
  Serial.begin(9600);
  Serial.println("DHT_Final");
  dht.begin();
  lcd.init();                      
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Final_DHT11");
  lcd.setCursor(0,1);
  lcd.print("MiroTek");
}
void loop()
{
  float a,b;
  a=dht.readHumidity();//濕度
  b=dht.readTemperature(); //溫度((攝氏C)
  lcd.print("Humidity: ");
  lcd.println(a);
  lcd.print("Temperature:");
  lcd.print(b);
  lcd.println("*C");
  Serial.print("Humidity: ");
  Serial.print(a);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(b);
  Serial.println(" *C ");
}