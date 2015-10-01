#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include <QFile>

#define DEFAULT_WIDTH  10
#define DEFAULT_HEIGHT 10

enum { EMPTY, FILLED };

class Level
{
public:
    // Picross generated with a tab or a file
    Level(std::vector<std::vector<int> > tab);
    // Randomized Picross
    Level(unsigned int width, unsigned int height);
    Level();

    bool isDone(std::vector<std::vector<int> > userTab) const;
    void generateCount(std::vector<std::vector<int> > &count_left,
                       std::vector<std::vector<int> > &count_up) const;
    int getWidth() const;
    int getHeight() const;

private:
    void randomGeneration();

    std::vector<std::vector<int> > tab;
    int width, height;
};

#endif // LEVEL_H
