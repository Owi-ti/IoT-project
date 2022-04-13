// C++ code
//
int red= 10;
int yellow=9;
int green=6;
int red2=4;
int yellow2=11;
int green2=12;
void setup()
{
  
  pinMode(red, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(yellow2, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);
  delay(1000);
  digitalWrite(red2, HIGH);
  delay(1000);
  digitalWrite(red2, LOW);
  delay(1000);
  
  digitalWrite(yellow, HIGH);
  delay(5000);
  digitalWrite(yellow, LOW);
  delay(5000);
  digitalWrite(yellow2, HIGH);
  delay(5000);
  digitalWrite(yellow2, LOW);
  delay(5000);

  digitalWrite(green, HIGH);
  delay(9000);
  digitalWrite(green, LOW);
  delay(9000);
  
  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
  delay(1000);
  
  digitalWrite(yellow, HIGH);
  delay(5000);
  digitalWrite(yellow, LOW);
  delay(5000);
  digitalWrite(yellow2, HIGH);
  delay(1000);
  digitalWrite(yellow2, LOW);
  delay(1000);

}