
#include "User.h"
#include <iostream>
#include <fstream>

User::User(const std::string& name) : name(name), score(0) {}

void User::addScore(int points) {
    score += points;
}

void User::updateProgress(const std::string& topic, int percent) {
    progress[topic] = percent;
}

void User::displayProgress() const {
    std::cout << "Progress for " << name << ":\n";
    for (const auto& p : progress) {
        std::cout << "- " << p.first << ": " << p.second << "%\n";
    }
}

void User::saveToFile(const std::string& filename) const {
    std::ofstream out(filename);
    if (out.is_open()) {
        out << name << "\n";
        out << score << "\n";
        for (const auto& p : progress) {
            out << p.first << " " << p.second << "\n";
        }
        out.close();
    }
}

void User::loadFromFile(const std::string& filename) {
    std::ifstream in(filename);
    if (in.is_open()) {
        std::getline(in, name);
        in >> score;
        progress.clear();
        std::string topic;
        int percent;
        while (in >> topic >> percent) {
            progress[topic] = percent;
        }
        in.close();
    }
}

std::string User::getName() const {
    return name;
}

int User::getScore() const {
    return score;
}

