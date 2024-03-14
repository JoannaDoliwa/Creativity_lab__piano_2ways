"""Based on the code and tutorial from the Technoreview85 YouTube channel
https://www.youtube.com/watch?v=6cAqSN6fC8g&list=PLvGXeIUBv6u5d1M6ja_MMRW8oSEPmixws&index=2
"""

#define T_C 262
#define T_D 294
#define T_E 330
#define T_F 349
#define T_G 392


const int C = 2;
const int D = 3;
const int E = 4;
const int F = 5;
const int G = 6;


const int Buzz = A4;
const int LED = A0;

void
  setup()
{
  pinMode(LED, OUTPUT);
  pinMode(C, INPUT);
  digitalWrite(C,HIGH);

  
  pinMode(D, INPUT);
  digitalWrite(D,HIGH);
  
  pinMode(E, INPUT);

  digitalWrite(E,HIGH);
  
  pinMode(F, INPUT);
  digitalWrite(F,HIGH);

  
  pinMode(G, INPUT);
  digitalWrite(G,HIGH);

}

void loop()
{
  while(digitalRead(C)
  == LOW)
  {
    tone(Buzz,T_C);
    digitalWrite(LED,HIGH);
  }


  while(digitalRead(D) == LOW)
  {
    tone(Buzz,T_D);
    digitalWrite(LED,HIGH);

  }

  while(digitalRead(E) == LOW)
  {
    tone(Buzz,T_E);
    digitalWrite(LED,HIGH);

  }

  while(digitalRead(F) == LOW)
  {
    tone(Buzz,T_F);
    digitalWrite(LED,HIGH);

  }

  while(digitalRead(G) == LOW)
  {
    tone(Buzz,T_G);
    digitalWrite(LED,HIGH);

  }

  
  noTone(Buzz);
  digitalWrite(LED,LOW);

}


