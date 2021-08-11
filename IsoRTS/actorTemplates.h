#pragma once
#include "globalfunctions.h"
#include <vector>
#include <SFML/Graphics.hpp>


enum class actorNames : uint32_t {
    villager,
    swordsman
};

class actorTemplates
{
public:
    actorTemplates(
        actorNames              actorId,
        bool                    doesRangedDamage,
        float                   timeBetweenShots,
        float                   timeToCrossOneTile,
        int                     hitPoints,
        int                     meleeDamage,
        int                     projectileType,
        int                     range,
        int                     rangedDamage,
        int                     rateOfFire,
        int                     splashDamage,
        cords                   textureRect,
        actorOrBuildingPrice    priceOfActor,
        std::string             actorTexture,
        std::string             realActorName,
        cords                   spriteOrigin,
        int                     bigSpriteYOffset
    );

    //getters
    actorNames              getActorId() const;
    int                     getBigSpriteYOffset() const;
    bool                    getDoesRangedDamage() const;
    float                   getTimeBetweenShots() const;
    float                   getTimeToCrossOneTile() const;
    int                     getHitPoints() const;
    int                     getMeleeDamage() const;
    int                     getProjectileType() const;
    int                     getRange() const;
    int                     getRangedDamage() const;
    int                     getRateOfFire() const;
    int                     getSplashDamage() const;
    cords                   getTextureRect() const;
    actorOrBuildingPrice    getPriceOfActor() const;
    sf::Sprite&             getActorSprite();
    sf::Texture             getActorTexture();
    std::string             getRealActorName() const;

    //setters
    void                    setActorTexture();
    void                    setSpritePosition(cords position);


private:
    actorNames              actorId;
    int                     bigSpriteYOffset;
    bool                    doesRangedDamage;
    float                   timeBetweenShots;
    float                   timeToCrossOneTile;
    int                     hitPoints;
    int                     meleeDamage;
    int                     projectileType;
    int                     range;
    int                     rangedDamage;
    int                     rateOfFire;
    int                     splashDamage;
    cords                   spriteOrigin;
    cords                   textureRect;
    actorOrBuildingPrice    priceOfActor;
    sf::Sprite              actorSprite;
    sf::Texture             actorTexture;
    std::string             realActorName;
};


extern std::vector<actorTemplates>            listOfActorTemplates;
extern void loadActors();