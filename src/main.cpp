#include <Arduino.h>   // Incluyo la Libreria Arduino
#include "Letras.h"    // Mando a llamar el Archivo Letras.h
#include "Conf_Oled.h" // Mando a llamar el Archibo Conf_Oled.h

#define caracteres 40 // Numero de caracteres usado

// Vector que almacena los caracteres
char datos[caracteres] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                          'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '!','?','+'};

char cadena[100] = {};    // Vector donde se almacenara las letras o palabras seleccionadas
int i, j = 0;             // Variables de conteo
int ant, selant, k2 = -1; // Variables para leer 1 sola vez
String palabra;           // Variable tipo String donde se alamcenara la palabra
char c;
void setup()
{
  Serial.begin(9600);
  ConfiOled(); // Llamo a la funcion
  ConfLed();   // Llamo a la funcion
  OletBien();  // Llamo a la funcion
}

void loop()
{
  // Mapeo de la variable analogica, que va de 0 a 1023 y lo pongo en el rango de 0 a el numero de cacteres
  // i = map(analogRead(A2), 0, 1023, 0, caracteres);

  while (Serial.available() > 0)
  {
    c = Serial.read(); // Leer un caracter del monitor serial
    Serial.print("Ingrese Su Texto: ");
    Serial.println(c);
    if (c != '\n' && c != '\r')
    {                // Ignorar los caracteres de retorno de carro y nueva línea
      cadena[j] = c; // Almacenar el caracter en el vector cadena[]
      j++;           // Incrementar el índice del vector
    }
  }

  if (c == '\n') // Si presiono el boton guardo las letras seleccionadas y las guardo como palabra
  {
    c = '\0';
    Serial.println("Palabra Seleccionada: " + String(cadena));
    String palabra(cadena); // convierto las letras almacenadas en cadena en un string
    PalabraSelecionada();
    lcd.print(palabra);
    lcd.display();

    for (int k = 0; k < palabra.length(); k++) // Ciclo que compara los caracteres, si son verdaderos manda a llamar a su funcion
    {

      Serial.println(cadena[k]);
      lcd.setTextColor(WHITE);
      lcd.setTextSize(1);
      lcd.setCursor(0, 50);
      lcd.print("Letra Morse: ");
      lcd.setCursor((75 + k * 6), 50);
      lcd.print(cadena[k]);
      lcd.display();

      if (cadena[k] == 'A')
      {
        LetraA();
        delay(5);
      }
      else if (cadena[k] == 'B')
      {
        LetraB();
        delay(5);
      }
      else if (cadena[k] == 'C')
      {
        LetraC();
        delay(5);
      }
      else if (cadena[k] == 'D')
      {
        LetraD();
        delay(5);
      }
      else if (cadena[k] == 'E')
      {
        LetraE();
        delay(5);
      }
      else if (cadena[k] == 'F')
      {
        LetraF();
        delay(5);
      }
      else if (cadena[k] == 'G')
      {
        LetraG();
      }
      else if (cadena[k] == 'H')
      {
        LetraH();
        delay(5);
      }
      else if (cadena[k] == 'I')
      {
        LetraI();
        delay(5);
      }
      else if (cadena[k] == 'J')
      {
        LetraJ();
        delay(5);
      }
      else if (cadena[k] == 'K')
      {
        LetraK();
        delay(5);
      }
      else if (cadena[k] == 'L')
      {
        LetraL();
        delay(5);
      }
      else if (cadena[k] == 'M')
      {
        LetraM();
        delay(5);
      }
      else if (cadena[k] == 'N')
      {
        LetraN();
        delay(5);
      }
      else if (cadena[k] == 'O')
      {
        LetraO();
        delay(5);
      }
      else if (cadena[k] == 'P')
      {
        LetraP();
        delay(5);
      }
      else if (cadena[k] == 'Q')
      {
        LetraQ();
        delay(5);
      }
      else if (cadena[k] == 'R')
      {
        LetraR();
        delay(5);
      }
      else if (cadena[k] == 'S')
      {
        LetraS();
        delay(5);
      }
      else if (cadena[k] == 'T')
      {
        LetraT();
        delay(5);
      }
      else if (cadena[k] == 'U')
      {
        LetraU();
        delay(5);
      }
      else if (cadena[k] == 'V')
      {
        LetraV();
        delay(5);
      }
      else if (cadena[k] == 'W')
      {
        LetraW();
        delay(5);
      }
      else if (cadena[k] == 'X')
      {
        LetraX();
        delay(5);
      }
      else if (cadena[k] == 'Y')
      {
        LetraY();
        delay(5);
      }
      else if (cadena[k] == 'Z')
      {
        LetraZ();
        delay(5);
      }
      else if (cadena[k] == ' ')
      {
        Espacio();
        delay(5);
      }
      else if (cadena[k] == '0')
      {
        Num0();
        delay(5);
      }
      else if (cadena[k] == '1')
      {
        Num1();
        delay(5);
      }
      else if (cadena[k] == '2')
      {
        Num2();
        delay(5);
      }
      else if (cadena[k] == '3')
      {
        Num3();
        delay(5);
      }
      else if (cadena[k] == '4')
      {
        Num4();
        delay(5);
      }
      else if (cadena[k] == '5')
      {
        Num5();
        delay(5);
      }
      else if (cadena[k] == '6')
      {
        Num6();
        delay(5);
      }
      else if (cadena[k] == '7')
      {
        Num7();
        delay(5);
      }
      else if (cadena[k] == '8')
      {
        Num8();
        delay(5);
      }
      else if (cadena[k] == '9')
      {
        Num9();
        delay(5);
      }
      else if (cadena[k] == '!')
      {
        Ayuda();
      }
      else if (cadena[k] == '?')
      {
        SOS();
      }
      else if (cadena[k] == '+')
      {
        HolaMundo();
      }
    }
    // Reseteo pantalla y la letras
    j = 0;
    memset(cadena, 0, sizeof(cadena)); // Limpia el contenido del array cadena
    lcd.clearDisplay();
  }
}
