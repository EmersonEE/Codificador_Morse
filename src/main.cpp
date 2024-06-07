#include <Arduino.h>
#include "Letras.h"
#include "Conf_Oled.h"



#define caracteres 37

char datos[caracteres] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                          'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char cadena[100] = {};
int i, j = 0;
int ant, selant = -1;
String palabra;
void setup()
{
  Serial.begin(9600);
  ConfiOled();
  ConfLed();
  OletBien();
}

void loop()
{

  i = map(analogRead(A2), 0, 1023, 0, caracteres);
  LetraSel();

  if (i != ant)
  {
    Serial.println(datos[i]);
    lcd.clearDisplay();
    lcd.setTextSize(2);
    lcd.setCursor(85, 2);
    lcd.print(datos[i]);
    delay(50);
    ant = i;
  }
  if (digitalRead(select) == HIGH)
  {
    while (digitalRead(select) == HIGH)
    {
    }
    cadena[j] = datos[i];
    j++;
    cadena[j] = '\0'; // Añadir el carácter nulo al final
    if (j != selant)
    {
      Serial.println("Letra Seleccionada: " + String(datos[i]));
      selant = j;
      LetraSeleccionada();
      lcd.print(datos[i]);
      lcd.display();
    }
  }

  if (digitalRead(mostrar) == HIGH)
  {
    while (digitalRead(mostrar) == HIGH)
    {
    }
    Serial.println("Palabra Seleccionada: " + String(cadena));
    String palabra(cadena);
    PalabraSelecionada();
    lcd.print(palabra);
    lcd.display();

    for (int k = 0; k < palabra.length(); k++)
    {
      // Serial.println(cadena[k]);
      if (cadena[k] == 'A')
      {
        LetraA();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'B')
      {
        LetraB();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'C')
      {
        LetraC();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'D')
      {
        LetraD();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'E')
      {
        LetraE();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'F')
      {
        LetraF();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'G')
      {
        LetraG();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'H')
      {
        LetraH();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'I')
      {
        LetraI();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'J')
      {
        LetraJ();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'K')
      {
        LetraK();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'L')
      {
        LetraL();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'M')
      {
        LetraM();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'N')
      {
        LetraN();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'O')
      {
        LetraO();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'P')
      {
        LetraP();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'Q')
      {
        LetraQ();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'R')
      {
        LetraR();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'S')
      {
        LetraS();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'T')
      {
        LetraT();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'U')
      {
        LetraU();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'V')
      {
        LetraV();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'W')
      {
        LetraW();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'X')
      {
        LetraX();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'Y')
      {
        LetraY();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == 'Z')
      {
        LetraZ();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == ' ')
      {
        Espacio();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '0')
      {
        Num0();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '1')
      {
        Num1();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '2')
      {
        Num2();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '3')
      {
        Num3();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '4')
      {
        Num4();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '5')
      {
        Num5();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '6')
      {
        Num6();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '7')
      {
        Num7();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '8')
      {
        Num8();
        Serial.println(String(cadena[k]));
      }
      else if (cadena[k] == '9')
      {
        Num9();
        Serial.println(String(cadena[k]));
      }
    }
    j = 0;
    cadena[j] = '\0';
    lcd.clearDisplay();
  }
}
