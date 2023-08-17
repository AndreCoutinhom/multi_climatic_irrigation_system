<h1 align="center">
    <img align="center" alt="lab" height="100" width="100" src="https://cdn.icon-icons.com/icons2/2699/PNG/512/arduino_logo_icon_170518.png">

  Multi-Climatic Irrigation System
  
</h1>

<div style="display: inline_block"><br>
  <img align="center" alt="irrigation" src="https://lh3.googleusercontent.com/S5i60Z84tnWu_Uh9fqVoJhKMOr2SARIfibZtI-MFC-xCLfKERe2my82x1zW_oEsIuS4UuP3v8mridQ=w2880-h1200-p-l90-rj">
  </div> 

###

Este projeto foi inspirado no laboratório Shiomi, um centro de pesquisa fictício que estuda métodos de cultivo de especiarias tropicais em ambientes de clima temperado. No anime, a professora Jun Shiomi e o chefe de cozinha Akira Hayama, estudam e aplicam o uso de especiarias tropicais em pratos super temperados. 

O código, no entanto, foi baseado em um vídeo de tutorial para desenvolvimento de sistemas com Arduino no canal Manual do Mundo, apresentado por Iberê Thenório. No vídeo, Iberê ensina como desenvolver um sistema de irrigação inteligente controlado por um processador Arduino e um sensor de umidade.



## Manual do Mundo 🌎

<div style="display: inline_block"><br>
  <a href="https://www.youtube.com/@manualdomundo/" target="_blank"><img align="center" alt="Manual_do_Mundo" height="180" width="180" src="https://yt3.googleusercontent.com/vZfyNo43-7nlIj_O78tjntiJZK7IQhLX9MqA_unyi-9tlHJGjU8d8E5FZUmvrW01lEh6V5uvPw=s176-c-k-c0x00ffffff-no-rj"></a>
  
  <a href="https://youtu.be/_xRyePvaMqU" target="_blank"><img align="center" height="50" width="180" src="https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=black" target="_blank"></a>
</div> 

#### Descrição do canal:
Olá! Somos o Manual do Mundo e viemos mostrar que há sempre um caminho mais interessante e divertido para aprender sobre as coisas ao nosso redor. Oferecemos produtos e conteúdos criativos que promovem experiências únicas de entretenimento e aprendizagem, no físico e no digital, sozinhos ou acompanhados.

Acreditamos que o conhecimento é capaz de eliminar qualquer obstáculo do caminho e é construído de um jeito colaborativo. É por isso que a melhor jornada é a que se anda junto, trocando descobertas, agregando mais gente.

Nosso ponto de partida é a curiosidade, e o de chegada também, porque quando a gente descobre uma resposta, nosso horizonte se expande, e a gente faz ainda mais perguntas. É assim que conquistamos o mundo!

Manual do Mundo. Desbravadores do conhecimento.

- DÚVIDAS: contato@manualdomundo.com.br
- PATROCÍNIOS e PARCERIAS: comercial@manualdomundo.com.br
- ASSESSORIA de IMPRENSA: comunicacao@manualdomundo.com.br



## Anderson Harayashiki Moreira 🔭

<div style="display: inline_block"><br>
  <img align="center" alt="Anderson" height="180" width="180" src="https://media.licdn.com/dms/image/C4E03AQEk26OdFMo4YQ/profile-displayphoto-shrink_800_800/0/1516944854263?e=1697673600&v=beta&t=de3U7JwxAO-cw9-nZKx5qeXMYVjvai2uFOEpMJ01Pms">
  
<a href="https://www.linkedin.com/in/andersonhm/" target="_blank"><img align="center" height="48" width="180" src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=black" target="_blank"></a>

</div>

###

Doutor e Mestre na área de Sistemas Aeroespaciais e Mecatrônica pelo Instituto Tecnológico de Aeronáutica - ITA. Engenheiro de Controle e Automação, graduado pela Escola de Engenharia Mauá. Atua como professor da Escola de Engenharia Mauá ministrando aulas de Algoritmos e Programação, Projetos e Elementos de Máquina, Robótica e Aprendizagem de Máquina. Na Universidade Paulista - UNIP (Campus Dutra – São José dos Campos) leciona as disciplinas de Robótica e Sistemas de Controle. Com mais de 15 anos de experiência na área de construção de robôs, desenvolve projetos na área de sistemas microcontrolados e compõe a organização das competições nacionais de robótica Winter Challenge e Summer Challenge da RoboCore.

###

O código utilizado como base para este projeto foi desenvolvido por Anderson. Segue o código escrito originalmente:

#### Código original
  ``` c++

#include <LiquidCrystal.h>

// define os pinos de conexão entre o Arduino e o Display LCD 
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);

// variáveis do programa 
const int pinoSensor = AO 
const int pinoValvula = 10:

const int limiarSeco = 70;
const int tempoRega = 20;

int umidadeSolo = 0;

void setup() { 
  
  // Desliga a válvula
  digitalWrite(pinoValvula, LOW); 

  // define o tamanho do Display LCD 
  lcd.begin(16, 2);

  // Exibe a mensagem no Display LCD.
  lcd.print(" Rega do Manual ");
  
}

void loop() {
  
 // Mede a umidade a cada segundo. Faz isso durante uma hora (3600 segundos).
for (int i=0; i < 3600; i++) {

// Posiciona o cursor do LCD na coluna 0 linha 1
// (Obs: linha 1 é a segunda linha, a contagem começa em 0
lcd.setCursor(0, 1);

// Exibe a mensagem no Display LCD:
lcd.print ("Umidade: ");

// Faz a leitura dos sensores de umidade do solo
umidadeSolo = analogRead(pinoSensor); 

// Converte a variação do sensor de 0 a 1023 para 0 a 100
umidadeSolo = map(umidadeSolo, 1023, 0, 0, 100);

// Exibe a mensagem no Display LCD:
lcd.print(umidadeSolo):
lcd.print(" %      ");

// Espera um segundo
delay(1000); 
}

```

## Diferenças entre os códigos 👨‍💻

No vídeo do Manual do Mundo, o sistema irriga um pequeno arranjo de terra e plantas. Este projeto possui a intenção de utilizar um sistema de sensores múltiplos, para que se aproxime da ideia do laboratório Shiomi sugerida anteriormente. 

###

As principais e mais importantes mudanças entre o código presente neste repositório e o código desenvolvido por Anderson estão ligadas ao fato de que os dois sistemas se diferem pelo número de sensores presentes em cada um. A primeira mudança a ser notada está na seção de variáveis do programa. Enquanto às constantes de Anderson se baseiam em um único sensor, uma única válvula e em um único padrão de porcentagem de umidade, o código aqui presente, alterado pelo chat GPT, cria três arrays para incluir a possibilidade de se usar múltiplos sensores, múltiplas válvulas e múltiplas considerações de secura limiar:

``` c++

const int pinoSensores[] = {A0, A1, A2, A3};  // Pinos dos sensores
const int pinoValvulas[] = {6, 7, 8, 9};      // Pinos das válvulas
const int numSensores = 4;  // Número total de sensores

const int limiaresSeco[] = {40, 50, 60, 80};  // Limiares de solo seco para cada sensor
const int tempoRega = 20;

int umidadeSolo[numSensores] = {0};

```
##

Nesse sentido, a função que entra em loop recebe alterações para que faça a leitura de cada sensor antes de iniciar a irrigação. Portanto, na segunda variável for, os valores das arrays são combinados para que o sistema leve seus diferentes dados em consideração:

``` c++

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

```
##

## Potenciais de Inovação 🧠

Apesar de inspirado em um laboratório fictício, esse sistema pode ser bastante útil em sistemas de irrigação em centros de pesquisa internacionais. O sistema de irrigação é uma demonstração simples de como métodos de cultivo de plantas diversas podem assumir diferentes rumos. 

###

Outros componentes Arduino como sensores térmicos, leitores de PH, e muito mais; poderiam permitir que o sistema gerasse um diagnóstico completo das plantações em um laboratório que tivesse a capacidade de imitar os respectivos ambientes nativos de cada planta. Assim, um único laboratório seria capaz de armazenar plantas de qualquer região independente de suas condições ambientais, o que pode contribuir para descobertas nas áreas de genética, botânica, meio-ambiente, fitoterapia, gastronomia, etc.
