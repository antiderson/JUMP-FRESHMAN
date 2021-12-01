// Função Sair, onde finaliza o Game //
void sair ()
{
  char text_sair[6] = {'X', 'a', 'u', 'u', 'u', '!'};
  
  lcd.fillScreen(ST77XX_BLACK);
  lcd.setTextSize(4);
  lcd.setTextColor(WHITE);
  lcd.setCursor(50, 110);
  for(int i = 0; i < 6; i++)
  { 
    lcd.print(text_sair[i]);
    delay(500);
  }
  
  for(int z = 1, y = 0; z < 14; z++)
  { 
    lcd.fillRect(0,y,240,20,CYAN);
    delay(200);
    lcd.fillRect(0,y,240,20,BLUE);
    delay(200);
    y += 20;
  }
  
  delay(1000);
  lcd.fillScreen(ST77XX_BLACK);
  exit(0);
}
