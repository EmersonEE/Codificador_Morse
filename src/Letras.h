#include <Arduino.h>

int Led = 10;
int Laser = 9;
int Buzzer = A3;
int select = 8;
int mostrar = 7;

void Espacio()
{
    delay(1500);
}
void ConfLed()
{
    pinMode(Led, OUTPUT);
    pinMode(Laser, OUTPUT);
    pinMode(Buzzer, OUTPUT);
    pinMode(select, INPUT);
    pinMode(mostrar, INPUT);
}

void punto()
{
    digitalWrite(Led, 1);
    digitalWrite(Buzzer, 1);
    digitalWrite(Laser, 1);
    delay(250);
    digitalWrite(Buzzer, 0);
    digitalWrite(Laser, 0);
    digitalWrite(Led, 0);
    delay(250);
}

void barra()
{
    digitalWrite(Led, 1);
    digitalWrite(Buzzer, 1);
    digitalWrite(Laser, 1);
    delay(750);
    digitalWrite(Buzzer, 0);
    digitalWrite(Laser, 0);
    digitalWrite(Led, 0);
    delay(250);
}

void LetraA()
{
    punto();
    barra();
}

void LetraB()
{
    barra();
    punto();
    punto();
    punto();
}

void LetraC()
{
    barra();
    punto();
    barra();
    punto();
}

void LetraD()
{
    barra();
    punto();
    punto();
}

void LetraE()
{
    punto();
}

void LetraF()
{
    punto();
    punto();
    barra();
    punto();
}
void LetraG()
{
    barra();
    barra();
    punto();
}

void LetraH()
{
    punto();
    punto();
    punto();
    punto();
}

void LetraI()
{
    punto();
    punto();
}

void LetraJ()
{
    punto();
    barra();
    barra();
    barra();
}

void LetraK()
{
    barra();
    punto();
    barra();
}

void LetraL()
{
    punto();
    barra();
    punto();
    punto();
}

void LetraM()
{
    barra();
    barra();
}

void LetraN()
{
    barra();
    punto();
}

void LetraO()
{
    barra();
    barra();
    barra();
}

void LetraP()
{
    punto();
    barra();
    barra();
    punto();
}

void LetraQ()
{
    barra();
    barra();
    punto();
    barra();
}

void LetraR()
{
    punto();
    barra();
    punto();
}

void LetraS()
{
    punto();
    punto();
    punto();
}

void LetraT()
{
    barra();
}

void LetraU()
{
    punto();
    punto();
    barra();
}

void LetraV()
{
    punto();
    punto();
    punto();
    barra();
}

void LetraW()
{
    punto();
    barra();
    barra();
}

void LetraX()
{
    barra();
    punto();
    punto();
    barra();
}

void LetraY()
{
    barra();
    punto();
    barra();
    barra();
}

void LetraZ()
{
    barra();
    barra();
    punto();
    punto();
}
void Num0()
{
    barra();
    barra();
    barra();
    barra();
    barra();
}
void Num1()
{
    punto();
    barra();
    barra();
    barra();
    barra();
}
void Num2()
{
    punto();
    punto();
    barra();
    barra();
    barra();
}
void Num3()
{
    punto();
    punto();
    punto();
    barra();
    barra();
}
void Num4()
{
    punto();
    punto();
    punto();
    punto();
    barra();
}

void Num5()
{
    punto();
    punto();
    punto();
    punto();
    punto();
}

void Num6()
{
    barra();
    punto();
    punto();
    punto();
    punto();
}
void Num7()
{
    barra();
    barra();
    punto();
    punto();
    punto();
}
void Num8()
{
    barra();
    barra();
    barra();
    punto();
    punto();
}

void Num9()
{
    barra();
    barra();
    barra();
    barra();
    punto();
}
void Ayuda()
{
    LetraA();
    LetraY();
    LetraU();
    LetraD();
    LetraA();
}

void SOS()
{
    LetraS();
    LetraO();
    LetraS();
}
void HolaMundo(){
    LetraH();
    LetraO();
    LetraL();
    LetraA();
    Espacio();
    LetraM();
    LetraU();
    LetraN();
    LetraD();
    LetraO();
}