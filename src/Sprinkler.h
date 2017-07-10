
#ifndef SPRINKLER_H_
#define SPRINKLER_H_

class Sprinkler {
 public:
  int version();

 private:
  unsigned long last_sprinkle_time; // time stamp in us of when the last sprinkled
};

#endif // SPRINKLER_H_
