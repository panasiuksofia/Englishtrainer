#ifndef USER_H
#define USER_H

#include <string>
#include <map>

class User {
private:
    std::string name;
    int score;
    std::map<std::string, int> progress;

public:
    User(const std::string& name);
    void addScore(int points);
    void updateProgress(const std::string& topic, int percent);
    void displayProgress() const;

    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);

    std::string getName() const;
    int getScore() const;
};

#endif