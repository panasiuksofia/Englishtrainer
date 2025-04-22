#include "Lesson.h"
#include <iostream>

Lesson::Lesson(const std::string& topicName, const std::string& theoryText)
    : topicName(topicName), theoryText(theoryText) {}

void Lesson::display() const {
    std::cout << "=== " << topicName << " ===\n";
    std::cout << theoryText << "\n";
}

std::string Lesson::getTopicName() const {
    return topicName;
}