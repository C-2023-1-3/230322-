#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
    {
        double side1, side2, side3;
        cout << "请输入三条边 : " << endl;
        cin >> side1 >> side2 >> side3;
        if (is_valid(side1, side2, side3))
            cout << "面积是 " << double_area(side1, side2, side3) << endl;
        else
            cout << "这三条边非法" << endl;
        return 0;
    }
