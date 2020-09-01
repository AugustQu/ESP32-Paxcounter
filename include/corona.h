#ifndef _CORONA_h
#define _CORONA_H

// inspired by https://github.com/kmetz/BLEExposureNotificationBeeper
// (c) by Kaspar Metz
// modified for use in the Paxcounter by AQ

//#include <Arduino.h>
//#include <BLEDevice.h>
//#include <BLEScan.h>
//#include <BLEAdvertisedDevice.h>
#include "globals.h"
#include <map>

bool cwa_init(void);
bool cwa_mac_add(uint8_t *);
void cwa_clear(void);
uint16_t cwa_report(void);

#endif
