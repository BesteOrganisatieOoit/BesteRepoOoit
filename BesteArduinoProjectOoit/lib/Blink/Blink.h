#ifndef Blink_h
#define Blink_h

class Blink {
  public:
    Blink(int pin);
    void now();
  private:
    int _pin;
    int _timeBetweenOnOffMillis = 1000;
};

#endif