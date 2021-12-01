// BIBLIOTECAS //////////////////////////////////////////////////////////////////////////////////////////////////

#include <EEPROM.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

//DEFINES ///////////////////////////////////////////////////////////////////////////////////////////////////////

#define TFT_CS     10 //Define a porta de pinagem CS
#define TFT_RST    8  //Define a porta de pinagem do RES - RESET
#define TFT_DC     9  //Define a porta de pinagem DC

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

//Define a pinagem dos botões
#define pino_bot1  A2 
#define pino_bot2  A4 

//Define as cores do game
#define BLACK 0x0000
#define WHITE 0xffff
#define BLUE 0x1d1d
#define CYAN 0x1f1f
#define RED 0xe0e0
#define ORANGE 0xe1e1
#define GREEN_1 0x2525
#define GREEN 0x0707

//INICIA DISPLAY ////////////////////////////////////////////////////////////////////////////////////////////////

Adafruit_ST7789 lcd = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

//DRAWIMAGES ////////////////////////////////////////////////////////////////////////////////////////////////////
  void ben(int x, int y, int cor){
    if(cor == 1) {
      lcd.fillRect(x + 40,y + 30,10,50, RED);
      lcd.fillRect(x + 25, y + 40, 40, 10, RED);
    }else{
      lcd.fillRect(x + 40, y + 30, 10,50, 0x0000);
      lcd.fillRect(x + 25, y + 40,40,10, 0x0000);
      }
    }

   void biter(int x, int y, int cor){
    if(cor == 1) {
      lcd.fillRect(x + 140,y + 30,10,50, 0x1f1f);
      lcd.fillRect(x + 125, y + 40, 40, 10, 0x1f1f);
    }else{
      lcd.fillRect(x + 140, y + 30, 10,50, 0x0000);
      lcd.fillRect(x + 125, y + 40,40,10, 0x0000);
      }
    }


const unsigned char VIDA [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc1, 0xf8, 0x00, 0x1f, 0xe3, 0xfc, 0x00, 
  0x3f, 0xf7, 0xfe, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 0x00, 
  0x7f, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x7f, 0xff, 0xff, 0x00, 
  0x3f, 0xff, 0xfe, 0x00, 0x3f, 0xff, 0xfe, 0x00, 0x1f, 0xff, 0xfc, 0x00, 0x0f, 0xff, 0xf8, 0x00, 
  0x07, 0xff, 0xf0, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x01, 0xff, 0xc0, 0x00, 0x00, 0xff, 0x80, 0x00, 
  0x00, 0x3f, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00
};

//STRUCTS ////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct JOGO{
  int score[5]; 
  char nome[13];
  int vida = 3;
};

typedef struct POSICOES{
  int ben = 10;
  //int ben = 110;
 // int pxbiter = 230;
  //int pybiter = 100;
};

typedef struct MENUS{
  byte tela = 0;
  byte seta = 0;
};

//DEFINIÇÃO DE STRUCTS ///////////////////////////////////////////////////////////////////////////////////////////

struct JOGO jogo;

struct POSICOES posicoes;

struct MENUS menus;

//SETUP /////////////////////////////////////////////////////////////////////////////////////////////////////////
void setup(void) 
{
  lcd.init(240, 240, SPI_MODE2); // Inicia o Display
  
  pinMode(pino_bot1, INPUT_PULLUP); //Seta a pinagem dos botoes usando o resistor interno
  pinMode(pino_bot2, INPUT_PULLUP); //Seta a pinagem dos botoes usando o resistor interno
  
  //reset_eeprom(); //Reseta os valores armazenados no EEPROM, quando usado no código
  
  lcd.setRotation(2); //Faz a rotação da tela
  lcd.fillScreen(ST77XX_BLACK);

  //Tela de Carregamento ao iniciar o display
  lcd.setTextSize(3);
  

  /*lcd.setTextColor(RED);
  lcd.setCursor(5, 70);
  lcd.print("Carregando");
  lcd.print(".");
  delay(850);
  lcd.print(".");
  delay(850);
  lcd.print("."); 

  //
  lcd.setTextColor(CYAN); //Define a cor do texto
  lcd.setCursor(50, 200); //Seta a posição X e Y
  lcd.print("G");//Printa na tela a mensagem
  delay(500);
  lcd.print("R");
  delay(500);
  lcd.print("A");
  delay(500);
  lcd.print("C");
  delay(500);
  lcd.print(".");
  delay(850);
  lcd.print("I");
  delay(850);
  lcd.print("N");
  delay(850);
  lcd.print("C");
  
  //
  delay(2000);
  lcd.fillScreen(ST77XX_BLACK);*/
  menu();
}

//LOOP //////////////////////////////////////////////////////////////////////////////////////////////////////////
void loop()
{
  setas();
}
