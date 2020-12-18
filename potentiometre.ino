

int pinleds[9]={1, 2, 3, 4, 5, 6, 7, 8, 9};

void setup()
{
    Serial.begin(9600); //ouverture du port serie

}

void ledsOn(int value)
{
    for(int i=0;i<value;i++)
    {
        digitalWrite(pinleds[i],1);
    }
    for(int i=(value+1);i<9;i++)
    {
        digitalWrite(pinleds[i],0);
    }

}


void loop()
{
    int value=analogRead(A0)/100;
    Serial.println(value);
    ledsOn(value);
}
