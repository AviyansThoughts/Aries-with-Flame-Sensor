// Welcome to Aviyan's Thoughts

int led = 23; // define the blue LED pin
int digitalPin = 2; // KY-026 digital interface
int analogPin = A0; // KY-026 analog interface
int digitalVal; // digital readings
int analogVal; //analog readings

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(digitalPin, INPUT);
  //pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // if flame is detected
  {
    digitalWrite(led, HIGH); // turn ON Aries's LED
  }
  else
  {
    digitalWrite(led, LOW); // turn OFF Aries's LED
  }

  // Read the analog interface
  analogVal = analogRead(analogPin); 
  Serial.println(analogVal); // print analog value to serial

  delay(100);
}