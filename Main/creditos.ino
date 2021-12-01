// Função Creditos //
void creditos()
{
  lcd.fillRoundRect(0, 0, 239, 239, 8, ST77XX_WHITE);
  lcd.fillScreen(ST77XX_BLACK); //Deixa o fundo da tela da cor desejada, no caso BLACK
  lcd.setTextSize(2); //Define o tamanho do texto
  lcd.setTextColor(RED); ////Define a cor do texto
  
  lcd.setCursor(18, 0); //Seta a posição X e Y
  lcd.print("-=-=-=-=-=-=-=-=-"); //Printa na tela a mensagem
  
  lcd.setCursor(30, 30); //Seta a posição X e Y
  lcd.print("Anderson Daniel"); //Printa na tela a mensagem
  
  lcd.setCursor(12, 70); //Seta a posição X e Y
  lcd.print(" Cassiano Eduardo"); //Printa na tela a mensagem
  
  lcd.setCursor(0, 110); //Seta a posição X e Y
  lcd.print("   Gabriel Ruiz"); //Printa na tela a mensagem
 
  lcd.setCursor(30, 150); //Seta a posição X e Y
  lcd.print(" Rafael Borges"); //Printa na tela a mensagem
  
  lcd.setCursor(32, 190); //Seta a posição X e Y
  lcd.print(" *Renan Gois*"); //Printa na tela a mensagem
  
  lcd.setCursor(18, 220); //Seta a posição X e Y
  lcd.print("-=-=-=-=-=-=-=-=-"); //Printa na tela a mensagem
}
