//uint8_t i = 0;
String incomingString = 0; // for incoming serial data
String stringSplit [2];

void setup() {
      Serial.begin(115200); // opens serial port, sets data rate to 9600 bps
      Serial.println("Iniciando...");  
}


void loop() {
      // put your main code here, to run repeatedly: 
      if (Serial.available() > 0) {
          // read the incoming byte:
         incomingString = Serial.readString() ;
         //Serial.print("I received: ");
         //Serial.println(incomingString);
         
         stringSplit[0] = getValue(incomingString, ' ', 0);
         Serial.print("stringSplit[0]: ");Serial.print(stringSplit[0]); Serial.println(" ");

         stringSplit[1] = getValue(incomingString, ' ', 1);
         Serial.print("stringSplit[1]: "); Serial.print(stringSplit[1]); Serial.println(" ");
      }
}

String getValue(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length()-1;
  
  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }

  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}
