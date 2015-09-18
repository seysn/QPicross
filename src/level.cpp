#include "level.h"

/*
 * Example tab :
 * {{ 0, 0, 0},
 *  { 0, 0, 0},
 *  { 0, 0, 0}}
 */

Level::Level(std::vector<std::vector<int> > const &tab, difficulty diff)
    : width(tab[0].size()), height(tab.size())
{
    this->tab  = &tab;
    this->diff = diff;
}

Level::Level(unsigned int width, unsigned int height)
    : diff(UNKNOWN), width(width), height(height)
{
    randomGeneration();
}

Level::Level()
    : diff(UNKNOWN), width(DEFAULT_WIDTH), height(DEFAULT_HEIGHT)
{
    randomGeneration();
}

void Level::randomGeneration()
{
    // TODO
}

bool Level::isOk(std::vector<std::vector<int> > tab) const
{
    // TODO
    return false;
}

bool Level::isDone(std::vector<std::vector<int> > userTab) const
{
    // TODO
    return false;
}

difficulty Level::getDifficulty() const
{
    return this->diff;
}

int Level::getHeight() const
{
    return this->height;
}

int Level::getWidth() const
{
    return this->width;
}

