/* ------ SISTEMA DE IRRIGAÇÃO MACEDO ------ 

Este programa foi adaptado a partir do código mostrado no vídeo apresentado por Iberê Thenório no canal Manual do Mundo.
O vídeo ensina a criar um sistema inteligente de irrigação.

Na versão do código "SISTEMA DE IRRIGAÇÃO MACEDO", o sistema conta com cinco sensores. A lógica do código foi reinterpretada com a ajuda do chat GPT 3.5.
Voltado para estufas e sistemas agrícolas com foco em pesquisa de variedade e cultivo multi climático. 
Por isso cada sensor está programado com uma porcentagem de umidade diferente que servirá como gatilho para a ativação do sistema.

Seguindo uma variação de média para umidade de solo dependendo do tipo de clima, o sistema identifica três níveis de umidade de solo:

    Seco: 40%
    Média baixa: 50%
    Média: 60%
    Média alta: 70%
    Úmido: 80%

------ MANUAL DO MUNDO ------

    Título do vídeo = Como fazer um robô de rega inteligente #ManualMaker Aula 6, Vídeo 2

    Link = https://www.youtube.com/watch?v=_xRyePvaMqU&list=PLScovg-nsTLpTf4zJ56XYBOvAAbLVE6Ua&index=5&ab_channel=ManualdoMundo

    Código original criado por: Anderson Harayashiki Moreira

    Rev.: 01
    
    Data: 13.03.2019

IMPORTANTE: O estudo de umidade que levou a essa codificação é baseado em estatísticas grosseiras. 
Centros de pesquisa de mais alto nível de precisão necessitam de uma leituras de umidade mais sofisticada.

*/

// LiquidCrystal - Version: 1.0.7
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);

const int pinoSensores[] = {A0, A1, A2, A3};  // Pinos dos sensores
const int pinoValvulas[] = {6, 7, 8, 9};      // Pinos das válvulas
const int numSensores = 4;  // Número total de sensores

const int limiaresSeco[] = {40, 50, 60, 80};  // Limiares de solo seco para cada sensor
const int tempoRega = 20;

int umidadeSolo[numSensores] = {0};

void setup() {
  for (int i = 0; i < numSensores; i++) {
    pinMode(pinoValvulas[i], OUTPUT);
    digitalWrite(pinoValvulas[i], HIGH);
  }
  
  lcd.begin(16, 2);
  lcd.print(" Rega do Manual ");
}

void loop() {
  for (int sensor = 0; sensor < numSensores; sensor++) {
    lcd.setCursor(0, 1);
    lcd.print("Umidade S");
    lcd.print(sensor + 1);
    lcd.print(": ");
    
    umidadeSolo[sensor] = analogRead(pinoSensores[sensor]);
    umidadeSolo[sensor] = map(umidadeSolo[sensor], 0, 1023, 0, 100);
    
    lcd.print(umidadeSolo[sensor]);
    lcd.print("%      ");
  }
  
  for (int sensor = 0; sensor < numSensores; sensor++) {
    if (umidadeSolo[sensor] < limiaresSeco[sensor]) {
      lcd.setCursor(0, 1);
      lcd.print(" Solo Seco ");
      
      digitalWrite(pinoValvulas[sensor], LOW);
      delay(tempoRega);
      digitalWrite(pinoValvulas[sensor], HIGH);
    } else {
      lcd.setCursor(0, 1);
      lcd.print(" Solo Umido ");
      
      delay(3000);
    }
  }
}
