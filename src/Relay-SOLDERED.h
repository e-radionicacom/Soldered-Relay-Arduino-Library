/**
 **************************************************
 *
 * @file        Relay.h
 * @brief       Header file for simple relay board with easyC comunication
 *
 *
 *
 * @authors     @ soldered.com @Robert Peric
 ***************************************************/

#ifndef __RELAY_SOLDERED__
#define __RELAY_SOLDERED__

#include "Arduino.h"
#include "libs/Generic-easyC/easyC.h"

/**
 * RElay chanels
 */
#define CHANNEL1_PIN 0
#define CHANNEL2_PIN 1

/* To be added later for 4 channel relay (Maybe)
#define CHANNEL3_PIN        0
#define CHANNEL4_PIN        0
*/

class CH_Relay : public RELAY_SOLDERED_LIBS::EasyC
{
  public:
    CH_Relay(int _pin);
    CH_Relay();


    void relayControl(int channel, int mode);
    void relayControlNative(int pin, int mode);

  protected:
    void initializeNative();

  private:
    int pin;
};

#endif
