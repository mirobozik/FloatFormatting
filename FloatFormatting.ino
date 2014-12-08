float temperature = 85.4;
char temp[10];
String tempAsString;
String data = "Temp=";
void setup() 
{
	Serial.begin(9600);	
	while (!Serial) {
		; // wait for serial port to connect. Needed for Leonardo only
	}
	//dtostrf(value, width, precision, output);
	dtostrf(temperature,1,2,temp);
	tempAsString = String(temp);
	
	data += tempAsString;
	Serial.println(data);
}

void loop() 
{	
	
}
