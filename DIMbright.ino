//PWM = pules width modulation to adjust power output and it takes two arguments 
//pin number and value needed
//pins 3,5,6,10 and 11 can use PWM and value ranges from 0 to 255

int led = 9; //pin that the LED is attached to
int brightness = 0; //brightness of LED
int amountFade = 5; // how many points to fade the LED by

//the setup routine runs once when you press reset.
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness);

  //change the brightness for next time through the loop
  brightness = brightness + amountFade;

  //reverse the direction of the fading at the ends
  if (brightness == 255|| brightness == 0){
    amountFade = -amountFade;
  }
  //wait for 30 milliseconds to see the dimming effect
  delay (30);
}
