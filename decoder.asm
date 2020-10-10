; Change the filepath as per your system location

.include "C:\users\sudha\Desktop\m328Pdef.inc"

;Configure pins 2,3,4 and 5 on Arduino as Output
ldi r16, 0b00111100
out DDRD, r16

;Writing number 5 on Seven Segment Display
ldi r16, 0b00010100
out PORTD, r16

Start:
Rjmp Start
