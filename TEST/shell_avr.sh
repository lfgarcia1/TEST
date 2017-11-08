echo "hola"
avr-gcc -Wall -Wextra -Wpedantic --std=gnu99 -mmcu=atmega328p -Os -o displaytest.elf /sepinvaders/displaytest.c /sepinvaders/SIP/SPI_implement_me.c sepinvaders/USART/USART_implement_me.c sepinvaders/display/ST7735_commands.c sepinvaders/display/graphic_shapes.c sepinvaders/display/testroutines.c
