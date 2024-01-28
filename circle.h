#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

/**
 * @brief ���� ��� ������������� ����.
 */
class Circle : public Shape {
private:
    int centerX; // ���������� x ������ ����
    int centerY; // ���������� y ������ ����
    int radius;  // ����� ����

public:
    /**
     * @brief ����������� ��� ����������� ����.
     *
     * @param circleX ���������� x ������ ����.
     * @param circleY ���������� y ������ ����.
     * @param circleRadius ����� ����.
     */
    Circle(int circleX, int circleY, int circleRadius);

    // ��������� ���������� ������
    void Show() const override;
    void Save(const std::string& fileName) const override;
    void Load(const std::string& fileName) override;
};

#endif // CIRCLE_H
