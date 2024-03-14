byte dizi[5] = {2,3,4,5,6};
int i;

void setup() {
  for(i=0;i<5;i++){
    pinMode(dizi[i],OUTPUT);
  }
}

void loop() {
  for(i=0; i<5;i++){
    digitalWrite(dizi[i],HIGH);
    delay(50);
    
  }
  for(i=0; i<5;i++){
    digitalWrite(dizi[i],LOW);
    delay(50);
  }
}
