// Função Jogar //
void jogar ()
{
  lcd.fillScreen(ST77XX_BLACK);
  int sorteio;

  //Funções do Game em looping //
  do {
    scores();
    movimentacao();
//    bate();
  //condicoes();
  } while (jogo.vida != 0);

  // fim_de_jogo();
  // novo_jogo();
}

// Função de Pontuação do jogador //


// Função de Score do game, onde mostra o score e a vida do Ben //
void scores()
{
  lcd.fillRect(0, 0, 240, 30, ORANGE);
  lcd.setCursor(120, 7);
  lcd.setTextSize(2); //Define o tamanho do texto
  lcd.setTextColor(WHITE); //Define a cor do texto
  lcd.print("Score:");
  lcd.print(jogo.score[0]);
  lcd.drawBitmap(10, 2, VIDA, 25, 25, WHITE);
  lcd.setCursor(40, 7);
  lcd.print(jogo.vida);
}

void movimentacao()

{
  int px, pxb;
  px = 70;
  pxb = 70;
  int vida = 3;
  //jogo.score[0]++;
  //delay(50);
  //ben( 5, 70, 1);
  int cor = 0;
  int v1, v2;

  while (vida != 0)
  {

    // cor = 0;
    v1 = digitalRead(pino_bot1);
    v2 = digitalRead(pino_bot2);
    //FUNÇÃO QUE DEFINE O INIMIGO EM 3 POSIÇÕES RANDOMICAS//
    biter(pxb--, 25, 1);
    lcd.fillRect(70, 55, 180, 50, BLACK);
  
    biter (70, 85, 1);

    biter(70, 145, 1);

  void bate()
  {
    colisao = abs(pxb - ben)
    if(colisao <30){
      vida = vida- 1;
    }
  }
  
    if (v1 == LOW)
    {
      delay(100);
      cor ++;
      if (cor >= 3) {
        cor = 3;
      }
      Serial.println(cor);
      if (cor == 1)
      {
        ben(5, 145 , 1);  //define a cruz na primeira posição//
        lcd.fillRect(25, 30, 50, 140, BLACK);// define o quadrado preto de cima e do meio//
      }
      if (cor == 2)
      {
        ben(5, 85, 1); //define a cruz na segunda posição//
        lcd.fillRect(25, 30, 50, 75, BLACK);//define o quadrado preto de cima //
        lcd.fillRect(25, 170, 50, 75, BLACK);//define o quadrado preto de baixo //
      }
      if (cor == 3)
      {
        ben(5, 25, 1); //define a cruz na terceira posição//
        lcd.fillRect(25, 115, 50, 140, BLACK);//define o quadrado preto do meio e de baixo//
      }
    }
    if (v2 == LOW)
    {
      delay(100);
      cor --;
      if (cor <= 1) {
        cor = 1;
      }
      Serial.println(cor);

      if (cor == 1)
      {
        ben(5, 145 , 1);  //define a cruz na primeira posição//
        lcd.fillRect(25, 30, 50, 140, BLACK);// define o quadrado preto de cima e do meio//
      }
      if (cor == 2)
      {
        ben(5, 85, 1); //define a cruz na segunda posição//
        lcd.fillRect(25, 30, 50, 75, BLACK);//define o quadrado preto de cima //
        lcd.fillRect(25, 170, 50, 75, BLACK);//define o quadrado preto de baixo //
      }
      if (cor == 3)
      {
        ben(5, 25, 1); //define a cruz na terceira posição//
        lcd.fillRect(25, 115, 50, 140, BLACK);//define o quadrado preto do meio e de baixo//
      }

    }
  }

  /*   if (digitalRead(pino_bot2)== LOW)
     {
       delay(1);
       cor --;
       if(cor == 1)
       {
       ben(5, 25, 1);  //define a cruz na primeira posição//
       //fazer os quadrados aqui!!!
         }
     if(cor == 2)
     {
       ben(5, 85, 2); //define a cruz na segunda posição//
       //fazer os quadrados aqui!!
       }
     if(cor == 3)
     {
      ben(5, 145, 3); //define a cruz na terceira posição//
      //fazer os quadrados aqui!!
       }
       }*/



  //ben( 5, 70, 1);
  //biter(50, 70, 1);

  //funçao provisoria pra movimentar o inimigo
  //  sorteio = random(1,3);
  // Condição de movimentação do Ben, apartir do botão pressionado //



  //biter(px- 50, 70, 1);
  //lcd.fillRect(0,100, 240,50, BLACK);


}
