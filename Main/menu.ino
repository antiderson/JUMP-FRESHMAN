// Função Menu que chama apenas a escrita do Menu //
void menu ()
{
 // lcd.fillScreen(ST77XX_BLACK); // Escolhe a cor de fundo da tela, com um código da cor.
 // tft.setTextColor(ST77XX_WHITE);  // Escolhe a cor do texto que vai ser inserida.


// lcd.fillRoundRect(0, 0, 239, 239, 8, ST77XX_WHITE);//x,y
// lcd.fillRoundRect(10, 10, 220, 220, 8, ST77XX_BLACK); 


 // lcd.fillRect(0,0,240,30,BLACK);
 
  lcd.setTextSize(4); //Define o tamanho do texto
  lcd.setTextColor(RED); //Define a cor do texto
  lcd.setCursor(13, 20); //Seta a posição X e Y
  lcd.print("  Blood"); //Printa na tela a mensagem

  lcd.setTextSize(4); //Define o tamanho do texto
  lcd.setTextColor(RED); //Define a cor do texto
  lcd.setCursor(15, 50); //Seta a posição X e Y
  lcd.print(" Running"); //Printa na tela a mensagem 

  lcd.setTextSize(3); //Define o tamanho do texto
  lcd.setTextColor(BLACK); //Define a cor do texto
  lcd.setCursor(78, 100); //Seta a posição X e Y
  lcd.print("Jogar\n"); //Printa na tela a mensagem
  
  lcd.setCursor(89, 130); //Seta a posição X e Y
  lcd.setTextColor(BLACK); //Define a cor do texto
  lcd.print("Rank\n"); //Printa na tela a mensagem

  lcd.setTextColor(BLACK); //Define a cor do texto
  lcd.setCursor(50, 160); //Seta a posição X e Y
  lcd.print("Creditos\n"); //Printa na tela a mensagem

  lcd.setTextColor(BLACK); //Define a cor do texto
  lcd.setCursor(89, 190); //Seta a posição X e Y
  lcd.print("Sair"); //Printa na tela a mensagem
}
