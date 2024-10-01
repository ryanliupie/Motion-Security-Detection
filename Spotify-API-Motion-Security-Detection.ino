int pirPin = 12; //This is the middle pin on the PIR to actually detect that motion and we must set it 

int motionStatus = 0; //This is to track the motion of the sensor
int pirState = LOW; //this tracks the state change 

void setup() {
 pinMode(pirPin, INPUT); //so this sets the PIR sensor into an input
 Serial.begin(9600); //Establishes communication between arduino and device (PIR sensor) 9600 bits p/s
 delay(1);
}

void loop() {
motionStatus = digitalRead(pirPin); //This reads if the sensor is detecting motion

 if (motionStatus == HIGH) {          //This detects if placements are correct
  Serial.println("Motion Detected");
 }

 else {                             //This detects if there is no motion
  Serial.println("Motion Ended"); 
 }
} 

//testing 123
