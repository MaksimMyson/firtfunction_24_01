#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

/**
 * @brief ���� ��� ������������� �����.
 */
class Ellipse : public Shape {
private:
    int x;      // ���������� x ��������� ����� ���� ��������� ������������
    int y;      // ���������� y ��������� ����� ���� ��������� ������������
    int width;  // ������ ��������� ������������
    int height; // ������ ��������� ������������

public:
    /**
     * @brief ����������� ��� ����������� �����.
     *
     * @param ellipseX ���������� x ��������� ����� ���� ��������� ������������.
     * @param ellipseY ���������� y ��������� ����� ���� ��������� ������������.
     * @param ellipseWidth ������ ��������� ������������.
     * @param ellipseHeight ������ ��������� ������������.
     */
    Ellipse(int ellipseX, int ellipseY, int ellipseWidth, int ellipseHeight);

    // ��������� ���������� ������
    void Show() const override;
    void Save(const std::string& fileName) const override;
    void Load(const std::string& fileName) override;
};

#endif // ELLIPSE_H
