int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++)
              {
     // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6, INPUT);
}
  }
  
void loop() {
  {
  // put your main code here, to run repeatedly:
  if (digitalRead(6) == HIGH) {
    Serial.println("Active");
  }
  {
  int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
}
  {
  else {
    Serial.println("Inactive");
  }
  delay(1000);
}

