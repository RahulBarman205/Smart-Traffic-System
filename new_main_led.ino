int T1LR = 0;
int T1LY = 1;
int T1LG = 2;
int T2LR = 3;
int T2LY = 4;
int T2LG = 5;
int T3LR = 6;
int T3LY = 7;
int T3LG = 8;
int T4LR = 9;
int T4LY = 10;
int T4LG = 11;
int wireVal_1 = 12;
int wireVal_2 = 13;
int val_1;
int val_2;
int analog_val;

int analogPin = 3;


void setup() {
  pinMode(T1LR, OUTPUT);
  pinMode(T1LY, OUTPUT);
  pinMode(T1LG, OUTPUT);
  pinMode(T2LR, OUTPUT);
  pinMode(T2LY, OUTPUT);
  pinMode(T2LG, OUTPUT);
  pinMode(T3LR, OUTPUT);
  pinMode(T3LY, OUTPUT);
  pinMode(T3LG, OUTPUT);
  pinMode(T4LR, OUTPUT);
  pinMode(T4LY, OUTPUT);
  pinMode(T4LG, OUTPUT);
  pinMode(wireVal_1, INPUT);
  pinMode(wireVal_2, INPUT);

}

void loop() {
  digitalWrite(T1LR, LOW);
  digitalWrite(T1LG, HIGH);
  delay(10000);
  digitalWrite(T1LG, LOW);
  digitalWrite(T1LY, HIGH);
  delay(3000);
  digitalWrite(T1LY, LOW);
  digitalWrite(T1LR, HIGH);

  val_1 = digitalRead(wireVal_1);
  val_2 = digitalRead(wireVal_2);
  
  if (val_1 == HIGH && val_2 == HIGH) {
    digitalWrite(T1LR, LOW);
    digitalWrite(T1LG, HIGH);
    delay(15000);
    digitalWrite(T1LR, HIGH);
    digitalWrite(T1LG, LOW);
    }
  else if (val_1 == HIGH && val_2 == LOW) {
    digitalWrite(T2LR, LOW);
    digitalWrite(T2LG, HIGH);
    delay(15000);
    digitalWrite(T2LR, HIGH);
    digitalWrite(T2LG, LOW);
    }
  else if (val_1 == LOW && val_2 == HIGH) {
    digitalWrite(T3LR, LOW);
    digitalWrite(T3LG, HIGH);
    delay(15000);
    digitalWrite(T3LR, HIGH);
    digitalWrite(T3LG, LOW);
    }
    
  digitalWrite(T2LR, LOW);
  digitalWrite(T2LG, HIGH);
  delay(10000);
  digitalWrite(T2LG, LOW);
  digitalWrite(T2LY, HIGH);
  delay(3000);
  digitalWrite(T2LY, LOW);
  digitalWrite(T2LR, HIGH);

  val_1 = digitalRead(wireVal_1);
  val_2 = digitalRead(wireVal_2);
  
  if (val_1 == HIGH && val_2 == HIGH) {
    digitalWrite(T1LR, LOW);
    digitalWrite(T1LG, HIGH);
    delay(15000);
    digitalWrite(T1LR, HIGH);
    digitalWrite(T1LG, LOW);
    }
  else if (val_1 == HIGH && val_2 == LOW) {
    digitalWrite(T2LR, LOW);
    digitalWrite(T2LG, HIGH);
    delay(15000);
    digitalWrite(T2LR, HIGH);
    digitalWrite(T2LG, LOW);
    }
  else if (val_1 == LOW && val_2 == HIGH) {
    digitalWrite(T3LR, LOW);
    digitalWrite(T3LG, HIGH);
    delay(15000);
    digitalWrite(T3LR, HIGH);
    digitalWrite(T3LG, LOW);
    }

  digitalWrite(T3LR, LOW);
  digitalWrite(T3LG, HIGH);
  delay(10000);
  digitalWrite(T3LG, LOW);
  digitalWrite(T3LY, HIGH);
  delay(3000);
  digitalWrite(T3LY, LOW);
  digitalWrite(T3LR, HIGH);

  val_1 = digitalRead(wireVal_1);
  val_2 = digitalRead(wireVal_2);
  
  if (val_1 == HIGH && val_2 == HIGH) {
    digitalWrite(T1LR, LOW);
    digitalWrite(T1LG, HIGH);
    delay(15000);
    digitalWrite(T1LR, HIGH);
    digitalWrite(T1LG, LOW);
    }
  else if (val_1 == HIGH && val_2 == LOW) {
    digitalWrite(T2LR, LOW);
    digitalWrite(T2LG, HIGH);
    delay(15000);
    digitalWrite(T2LR, HIGH);
    digitalWrite(T2LG, LOW);
    }
  else if (val_1 == LOW && val_2 == HIGH) {
    digitalWrite(T3LR, LOW);
    digitalWrite(T3LG, HIGH);
    delay(15000);
    digitalWrite(T3LR, HIGH);
    digitalWrite(T3LG, LOW);
    }

  digitalWrite(T4LR, LOW);
  digitalWrite(T4LG, HIGH);
  analog_val = analogRead(analogPin);

  if (analog_val > 500) {
    delay(2000);
    } 

  else {
    delay(10000);
    }
  
  digitalWrite(T4LG, LOW);
  digitalWrite(T4LY, HIGH);
  delay(3000);
  digitalWrite(T4LY, LOW);
  digitalWrite(T4LR, HIGH);

  val_1 = digitalRead(wireVal_1);
  val_2 = digitalRead(wireVal_2);
  
  if (val_1 == HIGH && val_2 == HIGH) {
    digitalWrite(T1LR, LOW);
    digitalWrite(T1LG, HIGH);
    delay(15000);
    digitalWrite(T1LR, HIGH);
    digitalWrite(T1LG, LOW);
    }
  else if (val_1 == HIGH && val_2 == LOW) {
    digitalWrite(T2LR, LOW);
    digitalWrite(T2LG, HIGH);
    delay(15000);
    digitalWrite(T2LR, HIGH);
    digitalWrite(T2LG, LOW);
    }
  else if (val_1 == LOW && val_2 == HIGH) {
    digitalWrite(T3LR, LOW);
    digitalWrite(T3LG, HIGH);
    delay(15000);
    digitalWrite(T3LR, HIGH);
    digitalWrite(T3LG, LOW);
    }
  
}
