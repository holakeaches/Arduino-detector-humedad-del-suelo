// C++ code
//

int sensor=A0;
int l;
int humedad;

void setup()
{
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop()
{
  l=analogRead(sensor);
  humedad=map(l,0,1024,100,0);
  Serial.print("Humedad ");
  Serial.print(humedad);
  Serial.println("%");
  delay(100);
}