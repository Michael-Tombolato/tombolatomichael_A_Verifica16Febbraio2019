int ledRosso = 13;
int ledGiallo = 11;
int ledBianco = 7;
int ledVerde = 5;
int tempoRosso;
int tempoGiallo;
int tempoBianco;
int tempoVerde;
int contatore;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledRosso, OUTPUT);
  pinMode(ledGiallo, OUTPUT);
  pinMode(ledBianco, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Delay del rosso");
  tempoRosso = random(1000, 1500);
  Serial.println(tempoRosso);
  Serial.println("Delay del giallo");
  tempoGiallo = random(1000, 1500);
  Serial.println(tempoGiallo);
  Serial.println("Delay del biano");
  tempoBianco = random(1000, 1500);
  Serial.println(tempoBianco);
  Serial.println("Delay del verde");
  tempoVerde = random(1000, 1500);
  Serial.println(tempoVerde);
  Serial.println("Inserire il numero di cicli prima di rigenerare i tempi");
  while (Serial.available() == 0) {}
  contatore = Serial.readString().toInt();
  Serial.println(contatore);
  for (int i = 0; i < contatore; i++)
  {
    LedRosso();
    LedGiallo();
    LedBianco();
    LedVerde();
  }
  Serial.println("-------------------------");
}

void LedRosso()
{
  digitalWrite(ledRosso, HIGH);
  delay(tempoRosso);
  digitalWrite(ledRosso, LOW);
}

void LedGiallo()
{
  digitalWrite(ledGiallo, HIGH);
  delay(tempoGiallo);
  digitalWrite(ledGiallo, LOW);
}

void LedBianco()
{
  digitalWrite(ledBianco, HIGH);
  delay(tempoBianco);
  digitalWrite(ledBianco, LOW);
}

void LedVerde()
{
  digitalWrite(ledVerde, HIGH);
  delay(tempoVerde);
  digitalWrite(ledVerde, LOW);
}
