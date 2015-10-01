#include "level.h"

/*
 * Example tab :
 * {{ 0, 0, 0},
 *  { 0, 0, 0},
 *  { 0, 0, 0}}
 */

Level::Level(std::vector<std::vector<int> > tab)
    : width(tab[0].size()), height(tab.size())
{
    this->tab  = tab;
}

Level::Level(unsigned int width, unsigned int height)
    : width(width), height(height)
{
    randomGeneration();
}

Level::Level()
    : width(DEFAULT_WIDTH), height(DEFAULT_HEIGHT)
{
    randomGeneration();
}

void Level::randomGeneration()
{
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            // TODO : Random
        }
    }
}

bool Level::isDone(std::vector<std::vector<int> > userTab) const
{
    // TODO
    return false;
}

void Level::generateCount(std::vector<std::vector<int> > &count_left,
                          std::vector<std::vector<int> > &count_up) const
{
    int count(0);
    std::vector<int> row;
    for (int i = 0; i < this->width; ++i) {
        for (int j = 0; j < this->height; ++j) {
            if (count > 0 && this->tab[i][j] == EMPTY)
                row.push_back(count);

            if (this->tab[i][j] == FILLED)
                count++;
            else
                count = 0;
        }
        count_up.push_back(row);
    }

    count = 0;
    row.clear();
    for (int j = 0; j < this->height; j++) {
        for (int i = 0; i < this->width; i++) {
            if (count > 0 && this->tab[i][j] == EMPTY)
                row.push_back(count);

            if (this->tab[i][j] == FILLED)
                count++;
            else
                count = 0;
        }
        count_left.push_back(row);
    }
}

int Level::getHeight() const
{
    return this->height;
}

int Level::getWidth() const
{
    return this->width;
}

