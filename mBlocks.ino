#include "LineArray.h"


double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;

#include "MeOrion.h"

//MeLineFollower lineFinder(PORT_3); /* Line Finder module can only be connected to PORT_3, PORT_4, PORT_5, PORT_6 of base shield. */

LineArray lineArray; //Den med tallet 5 er faktisk port 17

void setup() {
  Serial.begin(9600);
  lineArray.setPort(17);
}

void loop() {
  Serial.println(lineArray.getBINValue());
  delay(200);
}

