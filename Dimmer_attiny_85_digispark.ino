const int switchPin = 8; 
const int lightPin = 10; 
int lightMode = 1; 
void setup() 
{
    pinMode(lightPin, OUTPUT);
    pinMode(switchPin, INPUT);
    digitalWrite(switchPin, HIGH); // internal Pull-up enabled
}
void loop()
{ 
    if (digitalRead(switchPin) ==LOW) 
    { 
        lightMode = lightMode + 1;
        if (lightMode == 5)
        {
            lightMode = 1;
        }
    }
    if (lightMode == 1)
    {
        digitalWrite(lightPin, LOW);
    }
    else if (lightMode == 2)
    {
        analogWrite(lightPin, 64);
    }
    else if (lightMode == 3)
    {
        analogWrite(lightPin, 128);
    }
    else
    {
        digitalWrite(lightPin, HIGH);
    }
    delay(250); // see text
}
