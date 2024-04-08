uint32_t period = 500L;   // the L forces Long ints 32 bit
uint32_t lastPrint = 0;

void setup() 
{
  pinMode(3, OUTPUT);
}

void loop()
{
  int time = millis() % period;              // returns a value between 0 and 4999;
  float angle = (PI * time) / period;        // mapping to degrees
  int y = 100 * sin(angle);

  analogWrite(3, y);           // PWM outout

 
  // other code here
}