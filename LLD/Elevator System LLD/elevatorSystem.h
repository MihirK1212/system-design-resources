#ifndef ELEVATOR_SYSTEM_H
#define ELEVATOR_SYSTEM_H

#include <vector>

#include "./enum.h"
#include "./elevator.h"
#include "./floor.h"

class ElevatorSystem {
    public:
        ElevatorSystem();
        void requestElevator(Direction direction, Floor floor);
        void floorRequest(Elevator elevator, Floor floor);
        void openDoor(Elevator elevator, Floor floor);
        void closeDoor(Elevator elevator);
    private:
        std::vector<Elevator> elevators;
        std::vector<Floor> floors; 
};

#endif
