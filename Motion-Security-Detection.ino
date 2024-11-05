#include <SoftwareSerial.h> //Allows another serial port with different pin to allow both computer and MP3 to communicate simultaneously

#include <DFRobotDFPlayerMini.h> //This allows any MP3 player to work and so you can manage them



int pirPin = 12; //This is the middle pin on the PIR to actually detect that motion and we must set it 
int txPin = 2; // pin used to sent data out to MP3 player from arduino 
int rxPin = 3; // pin recieves information from MP3 player with software serial

SoftwareSerial efxSerial (txPin, rxPin); //We need to make a name for the software serial in relation to project; in this case, efx = sound effects which we use rx and tx pins 
DFRobotDFPlayerMini efxPlayer; 

int motionStatus = 0; //This is to track the motion of the sensor
int pirState = LOW; //this tracks the state change so UNO wont print repeatedly 

void setup() {
 pinMode(pirPin, INPUT); //so this sets the PIR sensor into an input
 pinMode(rxPin, INPUT); //Since we are recieving data we are in a sense "inputting" data in our system
 pinMode(txPin, OUTPUT); //Since we are transmitting data, it is getting sent out
 Serial.begin(9600); //Establishes communication between arduino and device (PIR sensor) 9600 bits p/s (common baud rate for serial connection)
 efxSerial.begin(9600) //Establishes communication between arduino and MP3 player 
 efxPlayer.begin(efxSerial); //we tell the efxPlayer to use efxSerial 
 efxPlayer.volume(20) // We can set the volume of the MP3 player to whatever; this case it is 20 
 delay(3000);           //Allows the input to stabilize or calibrate (sensor)
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
