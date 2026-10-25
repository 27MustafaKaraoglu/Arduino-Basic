int a=5;
void setup() {
 Serial.begin(9600);

}

void loop() {
 Serial.println("a");
 Serial.println(a);
 delay(1000);
}
