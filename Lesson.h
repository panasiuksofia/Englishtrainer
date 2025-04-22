#ifndef LESSON_H
#define LESSON_H

#include <string>

class Lesson {
private:
    std::string topicName;
    std::string theoryText;

public:
    Lesson(const std::string& topicName, const std::string& theoryText);
    void display() const;

    std::string getTopicName() const;
};

#endif

