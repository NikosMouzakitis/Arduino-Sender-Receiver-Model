// RECEIVER unit
int downPin = 8,received_value,redPin = 4;

void setup() {
	Serial.begin(9600);
  	pinMode(downPin,INPUT);
  	pinMode( redPin,OUTPUT);
}

void loop() {
	received_value = digitalRead(downPin);
  	if(received_value == 0)
    {
     	digitalWrite(redPin,LOW);
    }
  	else 
    {
      	Serial.print("Receiving : Button Pressed ");
      	Serial.println(received_value);
        digitalWrite(redPin,HIGH);
    }
}