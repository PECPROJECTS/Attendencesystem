/*
14CORE NodeMCU i2C 16x2 LCD SCREEN
Test COde.........................
*/
 
#include <Wire.h>  // This library is already built in to the Arduino IDE
#include <LiquidCrystal_I2C.h> //This library you can add via Include Library > Manage Library > 
LiquidCrystal_I2C lcd(0x3F, 16, 2);
 
void setup()
{
  char arr[17]="Connecting WiFi";
  int line;
  lcd.init();   // initializing the LCD
  lcd.backlight(); // Enable or Turn On the backlight 
  lcd.setCursor(0, 0);
  lcd.print("1.Enroll3.Record"); // Start Print text to Line 1
  lcd.setCursor(0, 1);    
  lcd.printf("2.Enter 4.Delete"); // Start Print text to Line 2  
  delay(2000);
  Clear_LCD();
  delay(2000);
  Print_me(0,arr);
  
  
  //lcd.print("-----------------------"); // Start Print Test to Line 2
}
 
void loop()
{
  // Nothing Absolutely Nothing!
}
void Clear_LCD()
{
  lcd.setCursor(0,0);
  for(int i=0;i<16;i++)
  {

    lcd.print(" ");
  }
  lcd.setCursor(0,1);
  for(int i=0;i<16;i++)
  {

    lcd.print(" ");
  }
}
void Print_me(int line, char* str)
{
  lcd.setCursor(0,line);
  lcd.printf("%s",str);
}

void Print_hash_table(int hash)
{
  switch(hash)
  {
  case1:
  {
  Clear_LCD();
  lcd.printf("Checking Wifi Connection");
  break;
  }
  case2:
  {
  Clear_LCD();
  lcd.printf("Connected to WiFi");
  break;
  }
  case 3:
  {lcd.printf("Can't connect to WiFi");
  break;
  }
  case 4:
  {lcd.printf("Date and Time received");
  break;
  }
  case 5:
  {lcd.printf("No Date and Time received");
  break;
  }
  case 6:
  {lcd.printf("Enter Date");
  break;
  }
  case 7:
  {lcd.printf("Enter Time");
  break;
  }
  case 8:
  {lcd.printf("A)Enroll B)Mark");
  lcd.printf("C)Store D)Update");
  break;
  }
  case 9:
  {lcd.printf("Enter Code");
  break;
  }
  case 10:
  {lcd.printf("Teacher Authenticate");
  break;
  }
  case 11:
  {lcd.printf("Error in Authentication");
  break;
  }
  case 12:
  {lcd.printf("Identity Authenticated");
  break;
  }
  case 13:
  {lcd.printf("Student Autheticate");
  break;
  }
  case 14:
  {lcd.printf("Attendance Marked");
  break;
  }
  case 15:
  {
  lcd.printf("Error in Attendance");
  break;
  }
  case 16:
  {lcd.printf("Press A to stop or B to continue");
  break;
  }
  case 17:
  {lcd.printf("Enter SID/CODE to Enroll");
  break;
  }
  case 18:
  {lcd.printf("Place Finger");
  break;
  }
  case 19:
  {lcd.printf("Place Finger again");
  break;
  }
  case 20:
  {lcd.printf("Transmitted");
  break;
  }
  case 21:
  {lcd.printf("Press A for teacher");
  lcd.printf("Press B for Student");
  break;
  }
  }
}

