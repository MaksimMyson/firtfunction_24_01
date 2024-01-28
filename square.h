#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

/**
 * @brief Клас для представлення квадрата.
 */
class Square : public Shape {
private:
    int x;      // Координата x лівого верхнього кута
    int y;      // Координата y лівого верхнього кута
    int side;   // Довжина сторони

public:
    /**
     * @brief Конструктор для ініціалізації квадрата.
     *
     * @param startX Координата x лівого верхнього кута.
     * @param startY Координата y лівого верхнього кута.
     * @param sideLength Довжина сторони.
     */
    Square(int startX, int startY, int sideLength);

    // Реалізація віртуальних методів
    void Show() const override;
    void Save(const std::string& fileName) const override;
    void Load(const std::string& fileName) override;
};

#endif // SQUARE_H
