void setup() {
  // put your setup code here, to run once:
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  Serial.begin(115200);
  
}

void loop() {
  // put your main code here, to run repeatedly:
 int A = random(999);
 int B = random(999);
 int C = random(999);
 int D = random(999);

 if (A > B && A > C){
  Serial.println("if 1");
  digitalWrite(D3, HIGH);

  delay(1000);

  digitalWrite(D3, LOW);
 } if (C > A && A < B){
   Serial.println("if 2");
  digitalWrite(D5, HIGH);

  delay(1000);

  digitalWrite(D5, LOW);
 } if  (B > C && B > A&& C < A)
  Serial.println("if 3");{
   digitalWrite(D6, HIGH);

  delay(1000);

  digitalWrite(D6, LOW);
 }
 if ( D > A&&B&&C){
  Serial.println("if 4");
   digitalWrite(D3, HIGH);
   digitalWrite(D5, HIGH);
   digitalWrite(D6, HIGH);

  
 }
 delay(10000);

 Serial.println(A);
 Serial.println(B);
 Serial.println(C);
 Serial.println(D);
 
 
}
