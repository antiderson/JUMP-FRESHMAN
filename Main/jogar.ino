// Função Jogar //
void jogar ()
{
  lcd.fillScreen(ST77XX_BLACK);
int sorteio;
  //Funções do Game em looping //
  do {
       scores();
    movimentacao();
    scores();
     //   colisao();
    //condicoes();
  } while (jogo.vida != 0);

  // fim_de_jogo();
  /// novo_jogo();
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
  int px;
  px = 70;
  int vida = 3;
     //jogo.score[0]++;
     //delay(50);
    //ben( 5, 70, 1);
    while (vida != 0)
  {



    //ben( 5, 70, 1);
    //biter(50, 70, 1);

    //funçao provisoria pra movimentar o inimigo
    
  //  sorteio = random(1,3);

    
    // Condição de movimentação do Ben, apartir do botão pressionado //
    if (digitalRead(pino_bot1) == LOW)
    {
      delay(1);
      ben(5, px, 0);
      lcd.fillRect(20,30,50,240, BLACK);
      ben(5 , px++ , 1);
    }
    if (digitalRead(pino_bot2) == LOW)
    {
      delay(1);
      ben(5, px, 0);
      lcd.fillRect(20,30, 50,240, BLACK);
      ben(5, px- 50, 1);

       
    }
    biter(px- 50, 70, 1);
    lcd.fillRect(0,100, 240,50, BLACK);
    
    
  }
}
