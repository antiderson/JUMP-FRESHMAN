//Função de Ordenação do Rank //
void toprank()
{
  // Lê EEPROM //
  for(int j = 1; j < 4; j++)
  {
    jogo.score[j] = EEPROM.read(j);
  }

  for(int h = 4; h < 13; h++){
    jogo.nome[h] = EEPROM.read(h);
  }
  
  lcd.fillScreen(ST77XX_BLACK);
  lcd.fillRect(0,0,240,240,WHITE);
  lcd.fillRect(10,10,220,220,BLACK);
  lcd.setCursor(0,20);
  lcd.setTextSize(4);
  lcd.setTextColor(RED);  
  lcd.print(" TOP RANK ");

  lcd.setTextSize(2); 
  lcd.setTextColor(CYAN);  
  lcd.setCursor(25, 75);  
  lcd.print("TOP 1 ");
  lcd.setTextColor(WHITE);  
  lcd.print(jogo.nome[4]);
  lcd.print(jogo.nome[5]);
  lcd.print(jogo.nome[6]);
  lcd.print(" ");
  lcd.print(jogo.score[1]);

  delay(500);

  lcd.setTextSize(2); 
  lcd.setTextColor(CYAN);  
  lcd.setCursor(25, 140);  
  lcd.print("TOP 2 ");
  lcd.setTextColor(WHITE);  
  lcd.print(jogo.nome[7]);
  lcd.print(jogo.nome[8]);
  lcd.print(jogo.nome[9]);
  lcd.print(" ");
  lcd.print(jogo.score[2]);

  delay(1000);
  
  lcd.setTextSize(2);
  lcd.setTextColor(CYAN);  
  lcd.setCursor(25, 200);  
  lcd.print("TOP 3 ");
  lcd.setTextColor(WHITE);  
  lcd.print(jogo.nome[10]);
  lcd.print(jogo.nome[11]);
  lcd.print(jogo.nome[12]);
  lcd.print(" ");
  lcd.print(jogo.score[3]);
}
