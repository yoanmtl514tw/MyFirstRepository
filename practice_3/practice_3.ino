// constants won't change. They're used here to set pin numbers:
const int pushButton = 2;  // the number of the pushbutton pin
const int RledPin = 3;    // the number of the LED pin
const int GledPin = 4;    // the number of the LED pin
const int BledPin = 5;    // the number of the LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status
int ledcolor =0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(pushButton, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(pushButton);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH)
  { 
    ledcolor += 1;
    delay(100);
  }

  if(ledcolor==0)
  {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if(ledcolor==1)
  {
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }

  else if(ledcolor==2)
  {
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }

  else if(ledcolor==3)
  {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }

  else if(ledcolor==4)
  {
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
  }

  else if(ledcolor==5)
  {
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }

  else if(ledcolor==6)
  {
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }

  else if(ledcolor==7)
  {
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }

  else if( ledcolor == 8)
  {
    ledcolor = 0;
  }

}
