#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

/**
 * @brief ���� ��� ������������� ������������.
 */
class Rectangle : public Shape {
private:
    int x;      // ���������� x ��������� ����� ����
    int y;      // ���������� y ��������� ����� ����
    int width;  // ������ ������������
    int height; // ������ ������������

public:
    /**
     * @brief ����������� ��� ����������� ������������.
     *
     * @param startX ���������� x ��������� ����� ����.
     * @param startY ���������� y ��������� ����� ����.
     * @param rectWidth ������ ������������.
     * @param rectHeight ������ ������������.
     */
    Rectangle(int startX, int startY, int rectWidth, int rectHeight);

    // ��������� ���������� ������
    void Show() const override;
    void Save(const std::string& fileName) const override;
    void Load(const std::string& fileName) override;
};

#endif // RECTANGLE_H
