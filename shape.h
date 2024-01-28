#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <fstream>

/**
 * @brief ����������� ���� ��� ��������� ��������� �����.
 */
class Shape {
public:
    /**
     * @brief ³��������� ����� ��� ��������� ���������� ��� ������ �� �����.
     */
    virtual void Show() const = 0;

    /**
     * @brief ³��������� ����� ��� ���������� ������ � ����.
     *
     * @param fileName ��'� ����� ��� ����������.
     */
    virtual void Save(const std::string& fileName) const = 0;

    /**
     * @brief ³��������� ����� ��� ���������� ������ � �����.
     *
     * @param fileName ��'� ����� ��� ����������.
     */
    virtual void Load(const std::string& fileName) = 0;

    /**
     * @brief ³��������� ���������� ��� ���������� ���������� ���'��.
     */
    virtual ~Shape() {}
};

#endif // SHAPE_H
