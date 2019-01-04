
/*
 check pins before uploading code to arduino
 fr means front right
 br means back right
 fl means front left
 bl means back left

 connect the system to 24 volts
 */


int frSpeed = 4;//connect pwm
int frDirn1 = 26;
int frDirn2 = 27;
int brSpeed = 3;//connect pwm
int brDirn1 = 25;
int brDirn2 = 24;
int blSpeed = 4;//connect pwm
int blDirn1 = 26;
int blDirn2 = 27;
int flSpeed = 3;//connect pwm
int flDirn1 = 25;
int flDirn2 = 24;

/*
 these are the speeds(values from 0 to 255)
  1)check at which the rpm of maxon becomes same
  2)do the above by simply counting the no. of revolutions in around 20 secnonds
  3)write the corrected speeds in the varibales below
  4)RPM should be s.t. the voltages come around 220 for maximum performance
*/ 

/*
     RPM Voltage
fl         200
bl         200
fr         200
br         200      

*/

int fl=200;
int bl=200;
int fr=200;
int br=200;

void setup() {

    pinMode(flDirn1, OUTPUT);
    pinMode(flDirn2, OUTPUT);
    pinMode(flSpeed, OUTPUT);
    pinMode(frDirn1, OUTPUT);
    pinMode(frDirn2, OUTPUT);
    pinMode(frSpeed, OUTPUT);
    pinMode(blDirn1, OUTPUT);
    pinMode(blDirn2, OUTPUT);
    pinMode(blSpeed, OUTPUT);
    pinMode(brDirn1, OUTPUT);
    pinMode(brDirn2, OUTPUT);
    pinMode(brSpeed, OUTPUT);
    
}

void loop() {

/*
the bot remains still for 4 seconds
*/    
  
    digitalWrite(flDirn1, HIGH);
    digitalWrite(flDirn2, LOW);
    analogWrite(flSpeed, 0);
    
    digitalWrite(frDirn1, HIGH);
    digitalWrite(frDirn2, LOW);
    analogWrite(frSpeed, 0);
    
    digitalWrite(blDirn1, HIGH);
    digitalWrite(blDirn2, LOW);
    analogWrite(blSpeed, 0);
    
    digitalWrite(brDirn1, HIGH);
    digitalWrite(brDirn2, LOW);
    analogWrite(brSpeed, 0); 
    
    delay(4000);

/*
 wheels rotate at speed fl,bl,fr,br resp. for 20 seconds
*/
    digitalWrite(flDirn1, HIGH);
    digitalWrite(flDirn2, LOW);
    analogWrite(flSpeed, fl);
    
    digitalWrite(frDirn1, HIGH);
    digitalWrite(frDirn2, LOW);
    analogWrite(frSpeed, fr);
    
    digitalWrite(blDirn1, HIGH);
    digitalWrite(blDirn2, LOW);
    analogWrite(blSpeed, bl);
    
    digitalWrite(brDirn1, HIGH);
    digitalWrite(brDirn2, LOW);
    analogWrite(brSpeed, br); 
    
    delay(20000);  
  
 
}

