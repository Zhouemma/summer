int x=100;
int y=100;
void setup() {
  // put your setup code here, to run once:
   pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
   pinMode(5,OUTPUT); 
   pinMode(6,OUTPUT); 
   pinMode(7,OUTPUT); 
   pinMode(8,OUTPUT); 
   pinMode(9,OUTPUT); 
   
}

void loop() 
{
  x=analogRead(A0);
y=analogRead(A0)/2;
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
 digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  // put your main code here, to run repeatedly:

  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
 digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(analogRead(A0));              // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
  // put your main code here, to run repeatedly:

}
