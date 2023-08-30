#pragma once
#include "stateBase.h"

class SubStateMeleeAttacking : public StateBase {
public:
    using StateBase::StateBase;
    bool doAction(Actor* actor) override;

private: 
    bool _isDoneWalking = false;
};