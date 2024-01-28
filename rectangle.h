#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

/**
 * @brief Клас для представлення прямокутника.
 */
class Rectangle : public Shape {
private:
    int x;      // Координата x верхнього лівого кута
    int y;      // Координата y верхнього лівого кута
    int width;  // Ширина прямокутника
    int height; // Висота прямокутника

public:
    /**
     * @brief Конструктор для ініціалізації прямокутника.
     *
     * @param startX Координата x верхнього лівого кута.
     * @param startY Координата y верхнього лівого кута.
     * @param rectWidth Ширина прямокутника.
     * @param rectHeight Висота прямокутника.
     */
    Rectangle(int startX, int startY, int rectWidth, int rectHeight);

    // Реалізація віртуальних методів
    void Show() const override;
    void Save(const std::string& fileName) const override;
    void Load(const std::string& fileName) override;
};

#endif // RECTANGLE_H
