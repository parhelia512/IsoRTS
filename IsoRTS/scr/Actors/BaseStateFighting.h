#pragma once
#include "stateBase.h"

class BaseStateFighting : public StateBase {
public:
    using StateBase::StateBase;
    bool doAction(Actor* actor) override;
};