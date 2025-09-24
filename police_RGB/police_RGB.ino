// the setup function runs once when you press reset or power the board
//Constant definition

const int rLEDPin = 3;
const int gLEDPin = 4;
const int bLEDPin = 5;

void setup() {
  // initialize digital pin 6 as an output.
  pinMode(rLEDPin, OUTPUT);
  pinMode(gLEDPin, OUTPUT);
  pinMode(bLEDPin, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(rLEDPin, LOW); //RED LED ON
  digitalWrite(gLEDPin, HIGH);
  digitalWrite(bLEDPin, HIGH);
  delay(200); 

  digitalWrite(rLEDPin, HIGH);
  digitalWrite(gLEDPin, HIGH);
  digitalWrite(bLEDPin, LOW);  //BLUE LED ON
  delay(200);

