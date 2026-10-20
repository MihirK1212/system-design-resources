#ifndef OUTER_CALL_BUTTON_H
#define OUTER_CALL_BUTTON_H

#include "./button.h"
#include "../enum.h"

class OuterCallButton: public Button {
    public:
        OuterCallButton();
    private:
        Direction direction;
};

#endif
