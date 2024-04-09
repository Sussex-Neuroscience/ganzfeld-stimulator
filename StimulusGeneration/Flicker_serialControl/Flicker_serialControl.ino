// constants won't change:
const int ledPin =  3;// the number of the LED pin

// serial
const byte numChars = 15;
char receivedChars[numChars];   // an array to store the received data
boolean newData = false;

float FlickerFreq;
float FlickerDur;


void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
 // FlickerLED(1, 10000);

  Serial.begin (9600);
  Serial.setTimeout(5);

  delay(500);

}

void loop() {
  GetSerialInput();
}

void GetSerialInput() { // part of code taken from http://forum.arduino.cc/index.php?topic=396450.0
  static byte ndx = 0;
  char endMarker = '\r';
  char rc;

  char delimiters[] = ",";
  char *token;

  if (Serial.available() > 0) {
    rc = Serial.read();

    if (rc != endMarker) {
      receivedChars[ndx] = rc;
      ndx++;
      if (ndx >= numChars) {
        ndx = numChars - 1;
      }
    }
    else {
      receivedChars[ndx] = '\0'; // terminate the string
      ndx = 0;
      newData = true;

        char * strtokIndx; // this is used by strtok() as an index
        strtokIndx = strtok(receivedChars,delimiters);      // get the first part - the string
        Serial.println(strtokIndx);
 
        strtokIndx = strtok(NULL, delimiters); // this continues where the previous call left off
        //Serial.println(atof(strtokIndx));
        FlickerFreq = atof(strtokIndx);

        strtokIndx = strtok(NULL, delimiters);
        //Serial.println(atof(strtokIndx));
        FlickerDur = atof(strtokIndx);

        Serial.println(FlickerFreq);
        Serial.println(FlickerDur);

        FlickerLED(FlickerFreq, FlickerDur);
      }
  }      

  }






// Stimuli
void FlickerLED(float FlickerFreq, float Duration)
{
  const long interval = 1000/(FlickerFreq*2);           // interval at which to blink (milliseconds)
  unsigned long previousMillis = 0;        // will store last time LED was updated
  unsigned long TimerStart = millis();        // will store last time LED was updated
  volatile byte ledState = LOW;

  bool runFunction = HIGH;
  while (runFunction)
  {
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= interval) {
      // save the last time you blinked the LED
      previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    ledState = !ledState;

    digitalWrite(ledPin, ledState);

    unsigned long TimerMillis = millis();
    if (TimerMillis-TimerStart >= Duration)
    {
      runFunction = LOW;
      digitalWrite(ledPin, LOW); // turn led off once done
      Serial.println("Stim done");
    }
  }
}

}
