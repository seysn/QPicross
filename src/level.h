#ifndef LEVEL_H
#define LEVEL_H

#include <vector>

#define DEFAULT_WIDTH  10
#define DEFAULT_HEIGHT 10

enum { EMPTY, FILLED, CROSSED };
enum difficulty { UNKNOWN, EASY, MEDIUM, HARD };

class Level
{
public:
    // Picross generated with a tab
    Level(std::vector<std::vector<int> > tab, difficulty diff);
    // Randomized Picross
    Level(unsigned int width, unsigned int height, difficulty diff);
    Level(unsigned int width, unsigned int height);
    Level();

    bool isOk(std::vector<std::vector<int> > tab) const;
    bool isDone(std::vector<std::vector<int> > userTab) const;
    int getWidth() const;
    int getHeight() const;
    difficulty getDifficulty() const;

private:
    void generate();

    difficulty diff;
    std::vector<std::vector<int> > tab;
    int width, height;
};

#endif // LEVEL_H
