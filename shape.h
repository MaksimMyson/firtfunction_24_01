#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>

/**
 * @brief Абстрактний клас для малювання площинних фігур.
 */
class Shape {
public:
    /**
     * @brief Віртуальний метод для виведення інформації про фігуру на екран.
     */
    virtual void Show() const = 0;

    /**
     * @brief Віртуальний метод для збереження фігури в файл.
     *
     * @param fileName Ім'я файлу для збереження.
     */
    virtual void Save(const std::string& fileName) const = 0;

    /**
     * @brief Віртуальний метод для зчитування фігури з файлу.
     *
     * @param fileName Ім'я файлу для зчитування.
     */
    virtual void Load(const std::string& fileName) = 0;

    /**
     * @brief Віртуальний деструктор для коректного вивільнення пам'яті.
     */
    virtual ~Shape() {}
};

#endif // SHAPE_H
