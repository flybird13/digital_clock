// Arduino Clock
//

#include "SevSeg.h"

#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define dp 9
#define d4 10
#define d3 11
#define d2 12
#define d1 13

 


void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(f, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(dp, HIGH);
  digitalWrite(dp, LOW)
  digitalWrite(d4, LOW)
  digitalWrite(d3, LOW)
  digitalWrite(d2, LOW)
  digitalWrite(d1, LOW)
  digitalWrite(a, HIGH);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(f, LOW);
}
