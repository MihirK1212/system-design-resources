#ifndef FLOOR_H
#define FLOOR_H

#include "./enum.h"
#include "./elevatorDoor.h"
#include "pannel/outerPannel.h"

class Floor {
    public:
        Floor();
    private:
        int floorNumber;
        OuterPannel outerPannel;      
};

#endif
