int updateLED(String command);

void setup() {
    
    Serial1.begin(9600);
    
    pinMode(D0, OUTPUT);
    digitalWrite(D0, LOW);
    
    // register the Spark functions
    Spark.function("updateLED", updateLED);
}


void loop() {
                 // Nothing needs to be looped
    }
    
    
int updateLED(String command){

    String cmdF = command.substring(0);
    int rNum = cmdF.toInt();

    if (rNum == 1) {
        digitalWrite(D0,HIGH);
        return 1;
        }
    
    if (rNum == 0) {
        digitalWrite(D0,LOW);
        return 2;
        }
        
    return 0;
   
} 
    