//B1T A B1T
//www.youtube.com.br/bitabit

#include "FastLED.h"
#include <stdio.h>

#if FASTLED_VERSION < 3001000
#error "Requires FastLED 3.1 or later; check github for latest code."
#endif

#define DATA_PIN    2
//#define CLK_PIN   4
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
#define NUM_LEDS    64
#define BRIGHTNESS  200

CRGB leds[NUM_LEDS];

int cor = 2;

int numAtualSorteado = 0;
int numSorteados[20];

int numAtualEscolhido = 0;
int numEscolhidos[20];

int nivel = 0;
int verifica = 0;
bool sortear = true;


//REINICIA O JOGO - SETA TODAS AS VARIÁVEIS PARA O ESTADO INICIAL E FAZ UM EFEITO COM OS LEDS
void reiniciar()
{
  
   fill_solid( leds, NUM_LEDS, CRGB::Aqua);
    FastLED.show();
    tone(10, 300);
    delay(500);


    noTone(10);
    fill_solid( leds, NUM_LEDS, CRGB::Purple);
    FastLED.show();
    tone(10, 400);
    delay(500);


    noTone(10);
    fill_solid( leds, NUM_LEDS, CRGB::DeepPink);
    FastLED.show();
    tone(10, 500);
    delay(500);


    noTone(10);
    fill_solid( leds, NUM_LEDS, CRGB::DarkOrange);
    FastLED.show();
    tone(10, 600);

   
  nivel = 0;
  sortear = true;
  verifica = 0;
  delay(500);

  noTone(10);
  FastLED.clear();  // clear all pixel data
  FastLED.show();
  delay(1500);
}

//ESCOLHA DA SEQUÊNCIA ERRADA - FAZ UM EFEITO NOS LEDS E EFEITOS SONOROS
void escolhaErrada()
{
  for(int i=0; i<=3; i++)
  {

    noTone(10);
    fill_solid( leds, NUM_LEDS, CRGB::Green);
    fill_solid( leds, (NUM_LEDS/2), CRGB::Yellow);
    FastLED.show();
    tone(10, 400);
    delay(100);


    noTone(10);
    fill_solid( leds, NUM_LEDS, CRGB::Red);
    fill_solid( leds, (NUM_LEDS/2), CRGB::Blue);
    FastLED.show();
    tone(10, 300);
    delay(100);

    noTone(10);
    fill_solid( leds, NUM_LEDS, CRGB::Pink);
    fill_solid( leds, (NUM_LEDS/2), CRGB::Aqua);
    FastLED.show();
    tone(10, 200);
    delay(100);

    noTone(10);
    fill_solid( leds, NUM_LEDS, CRGB::Purple);
    fill_solid( leds, (NUM_LEDS/2), CRGB::Orange);
    FastLED.show();
    tone(10, 100);
    delay(100);

  }

  noTone(10);

 for(int i=0; i<=10; i++)
 {
  numSorteados[i] = 0;
 }

 reiniciar();
}

//SEQUÊNCIA ATUAL - MOSTRA A SEQÊNCIA ATUAL COM UMA PAUSA ENTRE A SEQUÊNCIA E COM EFEITO SONORO PARA CADA LED
void mostrarSequencia()
{
  for(int i=0; i<=nivel; i++)
  {
    switch(numSorteados[i])
    {

      case 1: // verde
      tela(1);
      FastLED.show();
      tone(10, 100);
      delay(500);
      FastLED.clear();  // clear all pixel data
      FastLED.show();
      noTone(10);
      delay(500);
      break;

      case 2: // vermelho
      tela(2);
      FastLED.show();
      tone(10, 200);
      delay(500);
      FastLED.clear();  // clear all pixel data
      FastLED.show();
      noTone(10);
      delay(500);
      break;

      case 3: // amarelo
      tela(3);
      FastLED.show();
      tone(10, 300);
      delay(500);
      FastLED.clear();  // clear all pixel data
      FastLED.show();
      noTone(10);
      delay(500);
      break;
      
      case 4: // azul
      tela(4);
      FastLED.show();
      tone(10, 400);
      delay(500);
      FastLED.clear();  // clear all pixel data
      FastLED.show();
      noTone(10);
      delay(500);
      break;
    }
  }
}

//VERIFICA A ESCOLHA - COMPARA A ESCOLHA COM O NÚMERO SORTEADO NA SEQUÊNCIA
void verificar(int cor, int som)
{
  if(numAtualEscolhido == numSorteados[verifica])
  {
    switch(cor)
    {
      case 1: // verde
      tela(1);
      FastLED.show();
      tone(10, 100);
      delay(500);
      FastLED.clear();  // clear all pixel data
      FastLED.show();
      noTone(10);
      delay(500);
      break;

      case 2: // vermelho
      tela(2);
      FastLED.show();
      tone(10, 200);
      delay(500);
      FastLED.clear();  // clear all pixel data
      FastLED.show();
      noTone(10);
      delay(500);
      break;

      case 3: // amarelo
      tela(3);
      FastLED.show();
      tone(10, 300);
      delay(500);
      FastLED.clear();  // clear all pixel data
      FastLED.show();
      noTone(10);
      delay(500);
      break;
      
      case 4: // azul
      tela(4);
      FastLED.show();
      tone(10, 400);
      delay(500);
      FastLED.clear();  // clear all pixel data
      FastLED.show();
      noTone(10);
      delay(500);
      break;
    }

    if(verifica == nivel)
    {
      nivel++;
      verifica = 0;
      sortear = true;
    }
    else
    {
      verifica++;
    }
  }
  else
    escolhaErrada();
}

void setup() 
{
  Serial.begin(9600);
  pinMode(A2, INPUT_PULLUP); //BOTAO VERDE
  pinMode(A3, INPUT_PULLUP); //BOTAO VERMELHO
  pinMode(A4, INPUT_PULLUP); //BOTAO AMARELO
  pinMode(A5, INPUT_PULLUP); //BOTAO AZUL

  pinMode(9, INPUT_PULLUP); //BOTAO RESET

  pinMode(10, OUTPUT); //BUZZER
  
  randomSeed(analogRead(0));

  delay(3000);

  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS)
  .setCorrection(TypicalLEDStrip)
  .setDither(BRIGHTNESS < 255);

  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() 
{
  if(nivel != 21)
  {
     if(sortear)
     {
       numAtualSorteado = random(1, 5);
       numSorteados[nivel] = numAtualSorteado;
       mostrarSequencia();
     }
     
     sortear = false;

     if(digitalRead(A2) == 0) // VERDE
     {
       numAtualEscolhido = 1;
       verificar(1, 100);
     }
      else if(digitalRead(A3) == 0) // VERMELHO
     {
       numAtualEscolhido = 2;
       verificar(2, 200);
     }
      else if(digitalRead(A4) == 0) // AMARELO
     {
       numAtualEscolhido = 3;
       verificar(3, 300);
     }
      else if(digitalRead(A5) == 0) // AZUL
     {
       numAtualEscolhido = 4;
       verificar(4, 400);
     }
     else if(digitalRead(9) == 0)
     {
       reiniciar();
     } 
  }
  else
  {
    reiniciar();
  }
}

void tela(int cor){


    if(cor==1){

      int vd = 0;
      int formaVerde[28] = {2,3,13,11,12,18,19,20,21,25,26,27,28,29,34,35,36,37,38,42,43,44,45,50,51,52,60,61}; // verde
      for(vd; vd<28; vd++){

        leds[formaVerde[vd]] = CRGB::Green;

      }
    } else 
    if(cor==2){

      int vm = 0;
      int formaVermelha[52] = {2,3,4,5,9,10,11,12,13,14,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,49,50,51,52,53,54,58,59,60,61}; // vermelho
      for(vm; vm<52; vm++){

        leds[formaVermelha[vm]] = CRGB::Red;

      }
    } else 
    if(cor==3){

      int am = 0;
      int formaAmarela[36] = {4,10,11,12,13,17,18,19,20,21,22,24,25,26,27,28,29,30,33,34,35,36,37,38,39,41,42,43,44,45,46,50,51,52,53,59}; //amarelo
      
      for(am; am<36; am++){

        leds[formaAmarela[am]] = CRGB::Chartreuse;

      }
    } else 
    if(cor==4){

      int az = 0;
      int formaAzul[36] = {9,10,11,12,13,14,17,18,19,20,21,22,25,26,27,28,29,30,33,34,35,36,37,38,41,42,43,44,45,46,49,50,51,52,53,54}; //azul

      for(az; az<36; az++){

        leds[formaAzul[az]] = CRGB::Blue;

      }
    }
  
}
