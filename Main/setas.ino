// Função da Movimentação das "Setas" do Game e a alteração dentro do Menu //
void setas()
{
  if (menus.tela == 0) 
  { 
    if(digitalRead(pino_bot1) == LOW)
    {
      delay(500);
      menus.seta++;

      if(menus.seta == 1)
      {
        
        lcd.fillScreen(ST77XX_BLACK);
        lcd.setTextSize(4); //Define o tamanho do texto
        lcd.setTextColor(RED); //Define a cor do texto
        lcd.setCursor(13, 20); //Seta a posição X e Y
        lcd.print("  Blood"); //Printa na tela a mensagem
      
        lcd.setTextSize(4); //Define o tamanho do texto
        lcd.setTextColor(RED); //Define a cor do texto
        lcd.setCursor(15, 50); //Seta a posição X e Y
        lcd.print(" Running"); //Printa na tela a mensagem 
  
        lcd.fillRect(70,95,108,35,0xe0e0);//TESTE
        lcd.setTextSize(3); //Define o tamanho do texto
        lcd.setTextColor(WHITE); //Define a cor do texto
        lcd.setCursor(80, 102); //Seta a posição X e Y
        lcd.print("JOGAR\n"); //Printa na tela a mensagem
        
        lcd.setCursor(89, 130); //Seta a posição X e Y
        lcd.setTextColor(BLACK);//TESTE //Define a cor do texto
        lcd.print("RANK\n"); //Printa na tela a mensagem

        lcd.setTextColor(BLACK); //Define a cor do texto
        lcd.setCursor(50, 160); //Seta a posição X e Y
        lcd.print("CREDITOS\n"); //Printa na tela a mensagem

        lcd.setTextColor(BLACK); //Define a cor do texto
        lcd.setCursor(89, 190); //Seta a posição X e Y
        lcd.print("SAIR"); //Printa na tela a mensagem
      }

      if(menus.seta == 2)
      {
        lcd.fillRect(0,92,240,33,0x0000);
        lcd.setTextSize(3); //Define o tamanho do texto
        lcd.setTextColor(BLACK); //Define a cor do texto
        lcd.setCursor(78, 100); //Seta a posição X e Y
        lcd.print("JOGAR\n"); //Printa na tela a mensagem

        lcd.fillRect(70,125,108,35,0xe0e0);
        lcd.setCursor(90, 132); //Seta a posição X e Y
        lcd.setTextColor(WHITE); //Define a cor do texto
        lcd.print("RANK\n"); //Printa na tela a mensagem
      }
        
      if(menus.seta == 3)
      {
        lcd.fillRect(0,125,240,33,0X0000);
        lcd.setCursor(89, 130); //Seta a posição X e Y
        lcd.setTextSize(3); //Define o tamanho do texto
        lcd.setTextColor(BLACK); //Define a cor do texto
        lcd.print("RANK\n"); //Printa na tela a mensagem

        lcd.fillRect(35,155,170,33,0xe0e0);
        lcd.setTextColor(WHITE); //Define a cor do texto
        lcd.setCursor(50, 161); //Seta a posição X e Y
        lcd.print("CREDITOS\n"); //Printa na tela a mensagem
        
      }

      if(menus.seta == 4)
      {
        lcd.fillRect(0,155,240,33,0x0000);
        lcd.setTextColor(BLACK); //Define a cor do texto
        lcd.setCursor(50, 160); //Seta a posição X e Y
        lcd.print("CREDITOS\n"); //Printa na tela a mensagem

        lcd.fillRect(70,185,100,33,0xe0e0);
        lcd.setTextColor(WHITE); //Define a cor do texto
        lcd.setCursor(85, 191); //Seta a posição X e Y
        lcd.print("SAIR"); //Printa na tela a mensagem
      }
        
      if(menus.seta == 5)
      {
        lcd.fillRect(0,185,240,33,0x0000);
        lcd.setTextColor(BLACK); //Define a cor do texto
        lcd.setCursor(90, 190); //Seta a posição X e Y
        lcd.print("SAIR"); //Printa na tela a mensagem
        menus.seta = 0;
      }
    }
    
    if(digitalRead(pino_bot2) == LOW)
    {
      switch (menus.seta)
      {            
        case 0:                    
          menu();
          break;                    
  
        case 1:                    
          jogar();     
          break;                     
      
        case 2:                    
          toprank();
          menus.seta = 0;     
          break;                     
      
        case 3:                    
          creditos(); 
          menus.seta = 0;     
          break;                     
      
        case 4:                    
          sair(); 
          menus.seta = 0;      
          break;
      } 
    }      
  }
}
