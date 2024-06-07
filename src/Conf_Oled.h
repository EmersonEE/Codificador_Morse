#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define ANCHO 128
#define ALTO 64
#define DISPLAY_RESET 4

Adafruit_SSD1306 lcd(ANCHO, ALTO, &Wire, DISPLAY_RESET);

void ConfiOled()
{
    Wire.begin();
    lcd.begin(SSD1306_SWITCHCAPVCC, 0x3C);
}

void OletBien()
{
    lcd.clearDisplay();
    lcd.drawRect(10, 20, 110, 40, WHITE); // dibuja rectangulo
    lcd.setCursor(15, 34);                // ubica cursor en coordenadas 28,34
    lcd.setTextSize(1);                   // establece tamano de texto en 2
    lcd.setTextColor(WHITE);              // establece color al unico disponible (pantalla monocromo)
    lcd.print("CODIFICADOR MORSE");       // escribe texto
    lcd.display();                        // Mostrar el Texto
    delay(1000);
    lcd.clearDisplay();
}

void LetraSel()
{
    lcd.setTextColor(WHITE);
    lcd.setTextSize(2);
    lcd.setCursor(10, 2);
    lcd.print("Letra: ");
    lcd.setTextSize(1);
    lcd.setCursor(10, 32);
    lcd.print("Letra Seleccionada: ");
    lcd.display();
}

void PalabraSelecionada()
{
    lcd.clearDisplay();
    lcd.setCursor(10, 2);
    lcd.setTextColor(WHITE);
    lcd.setTextSize(2);
    lcd.print("PALABRA");
    lcd.setTextSize(1);
    lcd.setCursor(10, 32);
}

void LetraSeleccionada()
{
    lcd.clearDisplay();
    lcd.setTextColor(WHITE);
    lcd.setTextSize(2);
    lcd.setCursor(64, 45);
}