#ifndef OUTER_PANNEL_H
#define OUTER_PANNEL_H

#include <vector>

#include "./pannel.h"
#include "../button/outerCallButton.h"
#include "../enum.h"


class OuterPannel: public Pannel {
    public:
        OuterPannel();
        void pressOuterCallButton(Direction direction);
    private:
        std::vector<OuterCallButton> outerCallButtons;
};

#endif
