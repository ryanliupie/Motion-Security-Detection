int pirPin = 12; //This is the middle pin on the PIR to actually detect that motion and we must set it 

int motionStatus = 0; //This is to track the motion of the sensor
int pirState = LOW; //this tracks the state change so UNO wont print repeatedly 

void setup() {
 pinMode(pirPin, INPUT); //so this sets the PIR sensor into an input
 Serial.begin(9600); //Establishes communication between arduino and device (PIR sensor) 9600 bits p/s
 delay(1);           //Allows the input to stabilize
}

void loop() {
motionStatus = digitalRead(pirPin); 

if (motionStatus == HIGH){ // HIGH is used for motion detected and LOW is for none
                          //In this case, if the motion is detected then what? 

  if (pirState == LOW) {  //we set to low to say "no movement is detected" so it does not repeat if the motion was actually detected
  Serial.println("Motion Detected");    //If the motion is detected, we can see in the serial monitor the state the PIR is in
  pirState = HIGH; //Now if motion is detected, we can update the state to ON, as seen in the serial monitor but it only says it once because we use "pirState" to change the state of the PIR once on and off. 
    }
  }

else {
  

  if (pirState == HIGH){ //Now if the PIR state was high before, it sets the state to LOW or "Motion ended"
    Serial.println("Motion Ended");
    pirState = LOW; //updates motion to stop 
    }
   }
  } 


