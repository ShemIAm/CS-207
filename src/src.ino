
// initialize everything to there pins, and intitialize a number as 'num'.
int button = 1;
int sensor = 2;
int aux = 3;
int led = 4;
int num;


void setup()
{
  // the aux and led should both give outputs, and the button should give an input.
  pinMode(aux, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}


int playFunction()
{
  // code from arduino's website to trigger sensor.
  pinMode(sensor, OUTPUT);
  digitalWrite(sensor, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor, LOW);
  // get the input of the senor and then return it.
  pinMode(sensor, INPUT);
  return pulseIn(sensor, HIGH);
}


void loop()
{
  // if funtion to only play sound when button is pushed in.
  if (digitalRead(button) == HIGH)
  {
    val = playFunction() / 5; // i just picked 5, it could really be divided by anything to make it sound a little different.
    digitalWrite(led, HIGH);
    
    // more code taken from arduino's website on ultrasonic sensors, i just made it output to aux.
    digitalWrite(aux, HIGH);
    delayMicroseconds(num);
    digitalWrite(aux, LOW);
    delayMicroseconds(num);
  }
}
