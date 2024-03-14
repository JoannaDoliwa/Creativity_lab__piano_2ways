"""Based on the code and tutorial from the COMMON CODING YouTube channel
https://www.youtube.com/watch?v=BGoQZt4qBNc&list=PLvGXeIUBv6u5d1M6ja_MMRW8oSEPmixws&index=3
"""

#include <CapacitiveSensor.h>

CapacitiveSensor a = CapacitiveSensor(2,3);
CapacitiveSensor b = CapacitiveSensor(4,5);
CapacitiveSensor c = CapacitiveSensor(6,7);
CapacitiveSensor d = CapacitiveSensor(8,9);
CapacitiveSensor e = CapacitiveSensor(10,11);
CapacitiveSensor f = CapacitiveSensor(12,13);
CapacitiveSensor g = CapacitiveSensor(A3,A2);
CapacitiveSensor h = CapacitiveSensor(A1,A0);

void setup () {
  Serial.begin(9600);
}

void loop () {
  long SEN1 = a.capacitiveSensorRaw(30);
  long SEN2 = b.capacitiveSensorRaw(30);
  long SEN3 = c.capacitiveSensorRaw(30);
  long SEN4 = d.capacitiveSensorRaw(30);
  long SEN5 = e.capacitiveSensorRaw(30);
  long SEN6 = f.capacitiveSensorRaw(30);
  long SEN7 = g.capacitiveSensorRaw(30);
  long SEN8 = h.capacitiveSensorRaw(30);

  if(SEN1 > 1){
    tone(A4,262,100);
  }

  if(SEN2 > 1){
    tone(A4,294,100);
  }

  if(SEN3 > 1){
    tone(A4,330,100);
  }

  if(SEN4 > 1){
    tone(A4,349,100);
  }

  if(SEN5 > 1){
    tone(A4,392,100);
  }

  if(SEN6 > 1){
    tone(A4,440,100);
  }

  if(SEN7 > 1){
    tone(A4,494,100);
  }

  if(SEN8 > 1){
    tone(A4,523,100);
  }


}