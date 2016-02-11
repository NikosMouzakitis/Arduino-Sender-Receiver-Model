//SENDER unit
int buttonPin = 7,state = 0, ledPin = 8,senderPin = 2,transmited_value;

void setup() {
  	Serial.begin(9600);
	pinMode(buttonPin,INPUT);
  	pinMode(ledPin,OUTPUT);
  	pinMode(senderPin,OUTPUT);
  	
}

void loop() {
	state = digitalRead(buttonPin);
  	if(state)
    {
      transmited_value = 5;
      digitalWrite(ledPin,HIGH);
  	  digitalWrite(senderPin,transmited_value); 
      Serial.print("Transmited value : ");
      Serial.println(transmited_value);
    }
	else
    {
    	transmited_value = 0;
        digitalWrite(ledPin,LOW);
        digitalWrite(senderPin,transmited_value);
    }
}