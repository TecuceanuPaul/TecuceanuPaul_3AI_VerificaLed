int rosso=12,verde=10,bianco=8,giallo=6;
int durata1=0,durata2=0,numCicli=0;
String cicli="";
void setup() {
  pinMode(rosso,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(giallo,OUTPUT);  
  pinMode(bianco,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Quanti cicli desderi fare?");
  while(Serial.available()==0);
  if (Serial.available()>0){
  cicli=Serial.readString();
  numCicli=cicli.toInt();
  Serial.println(numCicli);
  }
  durata1=random(1000,5000);
  durata2=random(1000,5000);
  while(numCicli>0)
  {
  digitalWrite(rosso, HIGH); 
  digitalWrite(giallo, HIGH);   
  delay(durata1);   
  digitalWrite(rosso, LOW);
  digitalWrite(giallo, LOW);  
  digitalWrite(verde, HIGH); 
  digitalWrite(bianco, HIGH);   
  delay(durata2);   
  digitalWrite(verde, LOW);
  digitalWrite(bianco, LOW);  
  numCicli=numCicli-1;
  }
}
