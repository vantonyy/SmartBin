#include "SmartBin.hpp"

/*
 * Name:	SmartBin.ino
 * Created:	11/11/2018 11:34:12 PM
 * Author:	Vladimir Antonyan
 */

SmartBin& smartbinRef = SmartBin::getInstance();

// the setup function runs once when you press reset or power the board
void setup() {
	smartbinRef.init();
}

// the loop function runs over and over again until power down or reset
void loop() {
	smartbinRef.run();
}
