long M=0;
void setup()
{
pinMode(9,OUTPUT);
pinMode(A0,INPUT);
}

void loop()
{
 M=analogRead(A0);
analogWrite(9,M);
}