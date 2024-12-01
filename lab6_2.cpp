#include <iostream>
#include <cmath> // ใช้สำหรับฟังก์ชันทางคณิตศาสตร์
using namespace std;

// ฟังก์ชันแปลงองศาเป็นเรเดียน
double deg2rad(double degree) {
    return degree * (M_PI / 180.0);
}

// ฟังก์ชันแปลงเรเดียนเป็นองศา
double rad2deg(double radian) {
    return radian * (180.0 / M_PI);
}

// ฟังก์ชันหาองค์ประกอบตามแกน X
double findXComponent(double l1, double l2, double a1, double a2) {
    return (l1 * cos(a1)) + (l2 * cos(a2));
}

// ฟังก์ชันหาองค์ประกอบตามแกน Y
double findYComponent(double l1, double l2, double a1, double a2) {
    return (l1 * sin(a1)) + (l2 * sin(a2));
}

// ฟังก์ชันคำนวณความยาวเวกเตอร์ลัพธ์
double pythagoras(double x, double y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

// ฟังก์ชันแสดงผลลัพธ์
void showResult(double length, double direction) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << length << endl;
    cout << "Direction of the resultant vector (deg) = " << direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
}

int main() {
    double l1, l2, a1, a2, xcomp, ycomp, result_vec_length, result_vec_direction;

    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1, l2, a1, a2);
    ycomp = findYComponent(l1, l2, a1, a2);
    result_vec_length = pythagoras(xcomp, ycomp);
    result_vec_direction = rad2deg(atan2(ycomp, xcomp));

    showResult(result_vec_length, result_vec_direction);

    return 0;
}
