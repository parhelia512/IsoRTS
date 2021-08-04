#ifndef HUMANREADABLENAMES_H
#define HUMANREADABLENAMES_H

enum resourceTypes
{
    resourceWood,
    resourceFood,
    resourceStone,
    resourceGold
};

enum objectTypes
{
    objectCactus,
    objectCypress,
    objectMaple,
    objectPine,
    objectStone,
    objectGold,
    objectBerry
};

enum spriteTypes
{
    spriteTownCenter,
    spriteHouse,
    spriteVillager,
    spriteCancel,
    spriteMill,
    spriteLumberCamp,
    spriteBarracks,
    spriteSwordsman,
    spriteMiningCamp
};

enum actionTypes
{
    actionBuildTownCenter,
    actionBuildHouse,
    actionUnitSelect,
    actionMakeVillager,
    actionCancelBuilding,
    actionCancelProduction,
    actionBuildMill,
    actionBuildLumberCamp,
    actionBuildBarracks,
    actionMakeSwordsman,
    actionBuildMiningCamp
};

enum stackOrderTypes
{
    stackActionMove,
    stackActionGather,
    stackActionBuild,
    stackActionAttack
};

#endif HUMANREADABLENAMES_H