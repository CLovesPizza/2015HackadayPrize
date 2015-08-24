// This file does not incorporate accurate values, however
// it will be updated soon.

int goodValue = 1;
int badValue = 2;
int terribleValue = 3;
// these values are not accurate

int terribleLed = 2;
int goodLed = 1;
int badLed = 0;
// led pin values

int light = analogRead(A3);

void setup() {
    pinMode(A3, INPUT);
    pinMode(goodLed, OUTPUT);
    pinMode(badLed, OUTPUT);
    pinMode(terribleLed, OUTPUT);
}

void loop() {
    if (light < goodValue)
    {
        digitalWrite(goodLed, HIGH);
        digitalWrite(badLed, LOW);
        digitalWrite(terribleLed, LOW);
    }
    else if (light > terribleValue)
    {
        digitalWrite(terribleLed, HIGH);
        digitalWrite(goodLed, LOW);
        digitalWrite(badLed, LOW);
    }
    else
    {
        digitalWrite(badLed, HIGH);
        digitalWrite(terribleLed, LOW);
        digitalWrite(goodLed, LOW);
    }
}
