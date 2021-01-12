/*
Idea from Youtube (Paul McWhorter)
Code written by Mahmoud Embaby.
*/

int bit1 = 3; // 1 off - 1 on
int bit2 = 4; // 2 off - 2 on
int bit3 = 5; // 4 off - 4 on
int bit4 = 6; // 8 off - 8 on
int bit5 = 7; // 16 off - 16 on

int bit1ON[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}; // 16
int bit2ON[] = {2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31}; // 16
int bit3ON[] = {4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31}; // 16
int bit4ON[] = {8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31}; // 16
int bit5ON[] = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}; // 16

int speed = 1000;

void setup() {
  pinMode(bit1, OUTPUT);
  pinMode(bit2, OUTPUT);
  pinMode(bit3, OUTPUT);
  pinMode(bit4, OUTPUT);
  pinMode(bit5, OUTPUT);
}

void loop() {
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, LOW);
  digitalWrite(bit4, LOW);
  digitalWrite(bit5, LOW);

  for (int i = 0; i <= 31; i++) {
    for (int n=0; n < 16; n++){
      if (bit1ON[n] == i){
        digitalWrite(bit1, HIGH);
      }
    }
    for (int n=0; n<16; n++){
      if (bit2ON[n] == i){
        digitalWrite(bit2, HIGH);
      }
    }
    for (int n=0; n<16; n++){
      if (bit3ON[n] == i){
        digitalWrite(bit3, HIGH);
      }
    }
    for (int n=0; n<16; n++){
      if (bit4ON[n] == i){
        digitalWrite(bit4, HIGH);
      }
    }
    for (int n=0; n<16; n++){
      if (bit5ON[n] == i){
        digitalWrite(bit5, HIGH);
      }
    }
  delay(speed);
  digitalWrite(bit1, LOW);
  digitalWrite(bit2, LOW);
  digitalWrite(bit3, LOW);
  digitalWrite(bit4, LOW);
  digitalWrite(bit5, LOW);
  }
  delay(5000);
  
}
