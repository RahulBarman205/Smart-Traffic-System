const int pingPin1 = 2; 
const int echoPin1 = 3; 
const int pingPin2 = 4; 
const int echoPin2 = 5; 
const int pingPin3 = 6; 
const int echoPin3 = 7; 
const int wireVal_1 = 12;
const int wireVal_2 = 13;

void setup() {
   Serial.begin(9600);
   pinMode(pingPin1, OUTPUT); 
   pinMode(echoPin1, INPUT);
   pinMode(pingPin2, OUTPUT); 
   pinMode(echoPin2, INPUT);
   pinMode(pingPin3, OUTPUT); 
   pinMode(echoPin3, INPUT);
   pinMode(wireVal_1, OUTPUT);
   pinMode(wireVal_2, OUTPUT);
}

void loop() {
   long duration, cm;
   
   digitalWrite(pingPin1, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin1, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin1, LOW);
   duration = pulseIn(echoPin1, HIGH);
   cm = microsecondsToCentimeters(duration);
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
//   delay(100);

   if (cm <= 6) {
    digitalWrite(wireVal_1, HIGH);
    digitalWrite(wireVal_2, HIGH);
    delay(20000);
    }

   else {
    digitalWrite(wireVal_1, LOW);
    digitalWrite(wireVal_2, LOW);
    }

   digitalWrite(pingPin2, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin2, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin2, LOW);
   duration = pulseIn(echoPin2, HIGH);
   cm = microsecondsToCentimeters(duration);
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
//   delay(100);

   if (cm <= 6) {
    digitalWrite(wireVal_1, HIGH);
    digitalWrite(wireVal_2, LOW);
    delay(20000);
    }

   else {
    digitalWrite(wireVal_1, LOW);
    digitalWrite(wireVal_2, LOW);
    }
   
   digitalWrite(pingPin3, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin3, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin3, LOW);
   duration = pulseIn(echoPin3, HIGH);
   cm = microsecondsToCentimeters(duration);
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
//   delay(100);
   
   if (cm <= 6) {
    digitalWrite(wireVal_1, LOW);
    digitalWrite(wireVal_2, HIGH);
    delay(20000);
    }

   else {
    digitalWrite(wireVal_1, LOW);
    digitalWrite(wireVal_2, LOW);
    }
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}
