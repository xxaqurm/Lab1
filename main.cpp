#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;


int main(void) {
        vector<vector <double>> points(3, vector<double> (2));
        for (int i = 0; i < 3; i++) { // считаем пользовательский ввод
		cout << "Введите координаты точки " << i + 1 << " (x, y): ";
		cin >> points[i][0] >> points[i][1]; 
        }

	// найдем длины сторон треугольника
        double side1 = sqrt(pow(points[0][0] - points[1][0], 2) + pow(points[0][1] - points[1][1], 2));
        double side2 = sqrt(pow(points[0][0] - points[2][0], 2) + pow(points[0][1] - points[2][1], 2));
        double side3 = sqrt(pow(points[1][0] - points[2][0], 2) + pow(points[1][1] - points[2][1], 2));

	// найдем периметр, площадь, а также определим равнобедренность
        double perimeter = side1 + side2 + side3;
        double semiPerim = perimeter / 2;
        double area = sqrt(semiPerim * (semiPerim - side1) * (semiPerim - side2) * (semiPerim - side3));

	bool isIsosceles = (side1 == side2 || side1 == side3 || side2 == side3);

        cout << "\nПериметр равен: " << fixed << setprecision(2) << perimeter << endl;
	cout << "Площадь равна: " << fixed << setprecision(2) << area << endl;
        if (isIsosceles) cout << "Также, треугольник является равнобедренным." << endl;
        else cout << "Также, треугольник не является равнобедренным." << endl;

        return 0;
}
