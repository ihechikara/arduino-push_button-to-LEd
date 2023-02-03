int blueLED = 8;
int pushBUTTON = 2;
int btnValue;
bool isON = false;



void setup() {
  Serial.begin(9600);
  pinMode(pushBUTTON, INPUT);
  pinMode(blueLED, OUTPUT);

  digitalWrite(pushBUTTON, HIGH);
}

void loop() {



  btnValue = digitalRead(pushBUTTON);
  delay(400);

  Serial.println(btnValue);


  // turns on LED when isON is true
  if(isON == true){
    digitalWrite(blueLED, HIGH);
  } else{
    digitalWrite(blueLED, LOW);
  }
  
  // toggles the value of isON variable every time push button reads a value of 1
  if(btnValue == 0){
    isON = !isON;
  }


}
