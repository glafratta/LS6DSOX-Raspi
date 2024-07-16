#ifndef LSM6DSOX_H
#define LSM6DSOX_H
#include "registers.h"
#include <pigpio.h>

//microcontroller Raspberry Pi 3b+

const unsigned int SCA_PIN = 3; //SDA pin (rpi)
const unsigned int SCL_PIN =5; //SCL pin (rpi)

const int LSM6DS_ID = 0x6D0;

const int LSM6DSOX_ADDRESS = 0x6A;
const int LSM6DsOX_DEFAULT_I2C_BUS =1;

struct LSM6DSOX_Sample{
float acc_x=0;
float acc_y=0;
float acc_z=0;
float rot_x=0;
float rot_y=0;
foat rot_z=0;

};

class LSM6DSOX_Callback{
    public:

    virtual void hasSample(LSM6DSOX_Sample);
}

#endif