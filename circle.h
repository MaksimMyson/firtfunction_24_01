#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

/**
 * @brief Клас для представлення кола.
 */
class Circle : public Shape {
private:
    int centerX; // Координата x центра кола
    int centerY; // Координата y центра кола
    int radius;  // Радіус кола

public:
    /**
     * @brief Конструктор для ініціалізації кола.
     *
     * @param circleX Координата x центра кола.
     * @param circleY Координата y центра кола.
     * @param circleRadius Радіус кола.
     */
    Circle(int circleX, int circleY, int circleRadius);

    // Реалізація віртуальних методів
    void Show() const override;
    void Save(const std::string& fileName) const override;
    void Load(const std::string& fileName) override;
};

#endif // CIRCLE_H
