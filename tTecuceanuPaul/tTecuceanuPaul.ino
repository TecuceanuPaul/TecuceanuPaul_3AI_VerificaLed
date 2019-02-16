int rosso=12,verde=10,bianco=8,giallo=6;
int durata1=0,durata2=0;
String rossogiallo="",biancoverde="";
void setup() {
  pinMode(rosso,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(giallo,OUTPUT);  
  pinMode(bianco,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  Serial.println("per quanti millisecondi desideri far stare accesi il led rosso e il giallo?");
  while(Serial.available()==0);
  if (Serial.available()>0){
  rossogiallo=Serial.readString();
  durata1=rossogiallo.toInt();
  Serial.println(durata1);
  }
  Serial.println("per quanti millisecondi desideri far stare accesi il led verde e il bianco?");
  while(Serial.available()==0);
  if (Serial.available()>0){
  biancoverde=Serial.readString();
  durata2=biancoverde.toInt();
  Serial.println(durata2);
  }
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
  delay(1000);  
}
