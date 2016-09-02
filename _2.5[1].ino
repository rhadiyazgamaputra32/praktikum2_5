void setup() {
  // put your setup code here, to run once:
DDRC = 0x00;
PORTC = 0x01;
DDRB = 0x10;
}

void loop() {
  // put your main code here, to run repeatedly:
if (bit_is_clear(PINC,0)){
  PORTB = 0x10;
}
else {
  PORTB = 0x00;
}
}
