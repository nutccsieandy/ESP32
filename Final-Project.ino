#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>
#include <LiquidCrystal_I2C.h> 
LiquidCrystal_I2C lcd(0x27,16,2);
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64 
#define DHT11_PIN 2 
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1); 
DHT dht11(DHT11_PIN, DHT11);
String displayString;
void setup() 
{
  Serial.begin(9600);
  if (!oled.begin(SSD1306_SWITCHCAPVCC, 0x3C)) 
  {
    Serial.println(F("SSD1306 allocation failed"));
    while (true);
  }
  delay(2000);        
  oled.clearDisplay(); 
  oled.setTextSize(3);    
  oled.setTextColor(WHITE);
  oled.setCursor(0, 0); 
  dht11.begin();           
  displayString.reserve(10); 
  lcd.init(); 
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("2024 IOT");
  lcd.setCursor(3,1);
  lcd.print("Andy & Neo");
}
void loop() 
{
  float humi  = dht11.readHumidity();    
  float tempC = dht11.readTemperature(); 
  if (isnan(humi) || isnan(tempC)) 
  {
    displayString = "Failed";
  } 
  else 
  {
    displayString  = String(tempC, 1);
    displayString += "(C)";
    displayString += String(humi, 1); 
    displayString += "(%)";
  }
  Serial.println(displayString);    
  oledDisplayCenter(displayString); 
}
void oledDisplayCenter(String text)
{
  int16_t x1;
  int16_t y1;
  uint16_t width;
  uint16_t height;
  oled.getTextBounds(text, 0, 0, &x1, &y1, &width, &height);
  oled.clearDisplay(); 
  oled.setCursor((SCREEN_WIDTH - width) / 2, (SCREEN_HEIGHT - height) / 2);
  oled.println(text);
  oled.display();
}
