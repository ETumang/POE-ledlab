int last_time = 0;
boolean is_celsius = true;

void button(){
  int now = millis();
  if (now - last_time < 25){
    return;
  }
  else{ 
    is_celsius != is_celsius;
    last_time = now;
  }
}
