#include <iostream>
#include "User.h"
#include "Lesson.h"
#include "FileManager.h"

int main() {
    // Створюємо користувача
    User user("Sofiya");

    // Додаємо бали
    user.addScore(15);

    // Оновлюємо прогрес
    user.updateProgress("Grammar", 70);
    user.updateProgress("Vocabulary", 85);

    // Виводимо прогрес
    user.displayProgress();

    // Створюємо урок і показуємо його
    Lesson lesson("Past Simple", "The Past Simple tense is used for actions completed in the past.");
    lesson.display();

    // Зберігаємо користувача в файл
    user.saveToFile("user_data.txt");

    // Меню з вибором перегляду граматики
    int choice;
    do {
        std::cout << "\n=== Меню ===\n";
        std::cout << "1. Переглянути граматику\n";
        std::cout << "0. Вихід\n";
        std::cout << "Ваш вибір: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                showGrammarTheory();  // ← ця функція показує вміст grammar.txt
                break;
            case 0:
                std::cout << "До побачення!" << std::endl;
                break;
            default:
                std::cout << "Невірний вибір!" << std::endl;
        }
    } while (choice != 0);

    return 0;
}

