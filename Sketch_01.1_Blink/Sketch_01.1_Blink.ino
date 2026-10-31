/**********************************************************************
* Filename    : Blink
* Description : Make an led blinking.
* Auther      : www.freenove.com
* Modification: 2024/06/18
**********************************************************************/
#define LED_BUILTIN  2
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
/*
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // HIGH: turn off
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // LOW: turn on
  delay(3000);                       // wait for a second
}
*/

void loop() {
  for (int i=0; i<3; i++) {
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
  }

  delay(600);

  for (int i=0; i<3; i++) {
    digitalWrite(LED_BUILTIN, LOW);
    delay(600);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
  }

  delay(600);

}

/*
void signal(int onTime, int offTime) {
  digitalWrite(LED_BUILTIN, LOW);
  delay(onTime);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(offTime);
}

void loop() {
  for (int i=0; i<3; i++) {
    signal(200, 200);
  }

  delay(600);

  for (int i=0; i<3; i++) {
    signal(600, 200);
  }

  delay(600);

}
  */