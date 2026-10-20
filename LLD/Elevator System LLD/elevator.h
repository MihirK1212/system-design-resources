#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "./enum.h"
#include "./elevatorDoor.h"
#include "pannel/innerPannel.h"

class Elevator {
    public:
        Elevator();
    private:
        int elevatorId;
        int floorNumber;
        Direction direction;
        InnerPannel innerPannel;
        ElevatorDoor door;        
};

#endif
