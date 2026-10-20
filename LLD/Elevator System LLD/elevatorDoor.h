#ifndef ELEVATOR_DOOR_H
#define ELEVATOR_DOOR_H

#include "./enum.h"

class ElevatorDoor {
    public:
        ElevatorDoor();
        DoorAction open();
        DoorAction close();
    private:
        DoorAction status;
};

#endif
