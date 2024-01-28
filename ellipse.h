#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

/**
 * @brief Клас для представлення еліпса.
 */
class Ellipse : public Shape {
private:
    int x;      // Координата x верхнього лівого кута описаного прямокутника
    int y;      // Координата y верхнього лівого кута описаного прямокутника
    int width;  // Ширина описаного прямокутника
    int height; // Висота описаного прямокутника

public:
    /**
     * @brief Конструктор для ініціалізації еліпса.
     *
     * @param ellipseX Координата x верхнього лівого кута описаного прямокутника.
     * @param ellipseY Координата y верхнього лівого кута описаного прямокутника.
     * @param ellipseWidth Ширина описаного прямокутника.
     * @param ellipseHeight Висота описаного прямокутника.
     */
    Ellipse(int ellipseX, int ellipseY, int ellipseWidth, int ellipseHeight);

    // Реалізація віртуальних методів
    void Show() const override;
    void Save(const std::string& fileName) const override;
    void Load(const std::string& fileName) override;
};

#endif // ELLIPSE_H
