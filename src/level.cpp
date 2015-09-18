#include "level.h"

Level::Level(std::vector<std::vector<int> > tab, difficulty diff)
{
    this->tab = tab;
    this->diff = diff;
}

Level::Level(unsigned int width, unsigned int height)
    : diff(UNKNOWN), width(width), height(height)
{
    generate();
}

Level::Level()
    : diff(UNKNOWN), width(DEFAULT_WIDTH), height(DEFAULT_HEIGHT)
{
    generate();
}

void Level::generate()
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

