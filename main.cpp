#include "square.h"
#include "rectangle.h"
#include "circle.h"
#include "ellipse.h"

int main() {
    const int arraySize = 4;
    Shape* shapes[arraySize];

    // Створення об'єктів різних фігур
    shapes[0] = new Square(0, 0, 5);
    shapes[1] = new Rectangle(2, 2, 6, 4);
    shapes[2] = new Circle(0, 0, 3);
    shapes[3] = new Ellipse(3, 3, 8, 5);

    // Показ інформації про кожну фігуру
    for (int i = 0; i < arraySize; ++i) {
        shapes[i]->Show();
        std::cout << std::endl;
    }

    // Збереження фігур у файли
    for (int i = 0; i < arraySize; ++i) {
        shapes[i]->Save("shape" + std::to_string(i) + ".txt");
    }

    // Звільнення пам'яті
    for (int i = 0; i < arraySize; ++i) {
        delete shapes[i];
    }

    return 0;
}
