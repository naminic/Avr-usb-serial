/*****************************************************
Chip type               : ATmega32
AVR Core Clock frequency: 8.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*****************************************************/

#include <mega32.h>
 
// Standard Input/Output functions
#include <stdio.h>

void main(void)
{
unsigned char a=0, *b, c[11]="0123456789";
// USART initialization
// Communication Parameters: 8 Data, 1 Stop, No Parity
// USART Receiver: On
// USART Transmitter: On
// USART Mode: Asynchronous
// USART Baud Rate: 9600
UCSRA=0x00;
UCSRB=0x18;
UCSRC=0x86;
UBRRH=0x00;
UBRRL=0x33;

while (1)
      {
          printf("WWW.NAMINIC.COM\n\r");
          while(a!='e')
          {
              printf("\n\rpress any number or 'e' for exit:");
              gets(&a,1);
              if(a>='0' && a<= '9')
              {
                  b=&c[(a-48)];
                  printf("\n\ryour serial is:%s",b);
              } 
              printf("\n\r");
              
          }//end of while(a!='e').
          
          printf("\n\rthe program is ended.");
          while(1);
      }
}
