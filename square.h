#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

/**
 * @brief ���� ��� ������������� ��������.
 */
class Square : public Shape {
private:
    int x;      // ���������� x ����� ��������� ����
    int y;      // ���������� y ����� ��������� ����
    int side;   // ������� �������

public:
    /**
     * @brief ����������� ��� ����������� ��������.
     *
     * @param startX ���������� x ����� ��������� ����.
     * @param startY ���������� y ����� ��������� ����.
     * @param sideLength ������� �������.
     */
    Square(int startX, int startY, int sideLength);

    // ��������� ���������� ������
    void Show() const override;
    void Save(const std::string& fileName) const override;
    void Load(const std::string& fileName) override;
};

#endif // SQUARE_H
