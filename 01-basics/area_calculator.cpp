#include <iostream>
using namespace std;

int main() {
    int length;
    int width;
    int result;

    cout << "Welcome to the Area Calc (slang for calculator stoopid) \n";
    cout<<"Enter the length: ";
    cin >> length;
    
    cout << "Enter the width: ";
    cin >> width;

	result = length * width;
    cout << "The Area of the rectangle with the given measurements is:" << result << endl;
    return 0;
}
