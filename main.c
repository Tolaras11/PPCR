#include <main.h>
#include <lcd20x4.h>

void main()
{
int8 i;
int8 b1, b2, b3, b4;

// The lcd_init() function should always be called once,
// near the start of your program.
output_high(PIN_C3);
delay_ms(1000);
output_low(PIN_C3);
delay_ms(1000);
output_high(PIN_D1);

lcd_init();

// Clear the LCD.
printf(lcd_putc, "\f");
delay_ms(300);

   lcd_gotoxy(1, 2);       
   printf(lcd_putc, "    Portable PCR    ");   
   lcd_gotoxy(1, 3);       
   printf(lcd_putc, "      Tolis11      ");   
   lcd_gotoxy(1, 4);       
   printf(lcd_putc, "                  . ");
   delay_ms(1000);
   lcd_gotoxy(1, 4);       
   printf(lcd_putc, "                 .. ");
   delay_ms(1000);
   lcd_gotoxy(1, 4);       
   printf(lcd_putc, "                ... ");   
   delay_ms(2000);

   output_high(PIN_D0);
   delay_ms(50);
   output_low(PIN_D0);
   delay_ms(50);


while(1)
  {
       output_high(PIN_D1);
 
   // Test the clear screen and newline commands.
   // Also test that we can write to all 4 lines.
   printf(lcd_putc, "\fIt works Ilia");
   printf(lcd_putc, "\nMarti ");
   printf(lcd_putc, "\nEli ");
   printf(lcd_putc, "\nTolis 8-bit");
   delay_ms(3000);

   // Test some additional characters.
//   printf(lcd_putc, "\fABCDEFGHIJKLMNOPQRST");
//   printf(lcd_putc, "\nabcdefghijklmnopqrst");
//   printf(lcd_putc, "\n12345678901234567890");
//   printf(lcd_putc, "\n!@#$^&*(){}[]:;<>?/=");
//   delay_ms(3000);

   // Clear the LCD.
   printf(lcd_putc, "\f");
   delay_ms(500);

   lcd_gotoxy(1, 1);       
   printf(lcd_putc, ">");  
   // Test that lcd_gotoxy() works.  Go to each of
   // the four corners and put a number in each one,
   // in a clockwise direction, starting with the upper
   // left corner.
   //lcd_gotoxy(1, 1);       
   //printf(lcd_putc, "Te amo");   
//   lcd_gotoxy(1, 2);       
//   printf(lcd_putc, "    Portable PCR    ");   
//   lcd_gotoxy(1, 3);       
//   printf(lcd_putc, "      Tolis MP1     ");   
//   lcd_gotoxy(1, 4);       
//   printf(lcd_putc, "                ... ");   
 //  lcd_gotoxy(20, 4);       
 //  printf(lcd_putc, "3");   
 //  lcd_gotoxy(1, 4);       
 //  printf(lcd_putc, "4");   
   delay_ms(3000);

// Read the character that was written in each corner
// of the LCD and display it.   This tests the lcd_getc()
// function.   
// The following test can only be done if we can read
// from the LCD.  If the RW pin is not used, then the
// LCD is in write-only mode, and we can't do this test.
// The #ifdef statement will prevent the code from
// being compiled, in that case.
/*
#ifdef USE_RW_PIN   
   // Test if lcd_getc() can read
   // a byte from each corner.
   b1 = lcd_getc(1,1);   
   b2 = lcd_getc(20,1);   
   b3 = lcd_getc(20,4);   
   b4 = lcd_getc(1,4);   
   lcd_gotoxy(1, 1);       
   printf(lcd_putc, "\fRead these bytes\n");
   printf(lcd_putc, "from the 4 corners:\n\n");
   printf(lcd_putc, "     %c %c %c %c", b1, b2, b3, b4);       
   delay_ms(3000);
#endif

   // Type some characters and backspace over them.
   printf(lcd_putc, "\fType characters and\n");
   printf(lcd_putc,   "backspace over them.");
   delay_ms(2000);

   // Go to end of 2nd line.
   lcd_gotoxy(20, 2);       

   // Backspace over 2nd line.
   for(i = 0; i < 20; i++)
      {
       printf(lcd_putc," \b\b");
       delay_ms(150);
      }

   // Go to end of first line.               
   lcd_gotoxy(20, 1);       

   // Backspace over first line.
   for(i = 0; i < 20; i++)
      {
       printf(lcd_putc," \b\b");
       delay_ms(150);
      }         
*/
  }   

}
