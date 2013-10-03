
void setup(){
  Serial.begin(9600);
}

String getMessage(){
  String message = "";
  while(Serial.available()){
    char next = (char)Serial.read();
    message += next;
  }
  return message;
}
