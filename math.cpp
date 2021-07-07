#include <iostream>
#include <string>
#include <cmath>
#include <array>

using namespace std;

int clear() {

    cin.clear();
    cin.ignore(10000, '\n');
    return 0;

}

int main () {

    double number_one, number_two;
    double result;
    string operation;

    cout << "Enter a valid number: ";
    cin >> number_one; clear();

    cout << "Enter one of the operations from the list below - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << 

    R"(
1. Add 
2. Subtract
3. Multiply
4. Divide
5. Power
6. Root
7. Trigonometry
    )";

    cout << "\nSelect >> ";
    cin >> operation;

    // If Statements for Mathematical Functions

    if (operation == "1") {
        cout << "Enter another valid number: "; 
        cin >> number_two; clear();
        result = number_one + number_two;
        cout <<
        R"(
Operation: Addition - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
    }
    else if (operation == "2") {
        cout << "Enter another valid number: "; 
        cin >> number_two; clear();
        result = number_one - number_two;
        cout <<
        R"(
Operation: Subtraction - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
    }
    else if (operation == "3") {
        cout << "Enter another valid number: "; 
        cin >> number_two; clear();
        result = number_one * number_two;
        cout <<
        R"(
Operation: Multiplication - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
    }
    else if (operation == "4") {
        cout << "Enter another valid number: "; 
        cin >> number_two; clear();
        result = number_one / number_two;
        cout <<
        R"(
Operation: Division - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
    }
    else if (operation == "5") {
        cout << "Raise to the power by: "; 
        cin >> number_two; clear();
        result = pow(number_one, number_two);
        cout <<
        R"(
Operation: Power - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
    }
    else if (operation == "6") {
        cout << "Root over by ( write in decimals ): "; 
        cin >> number_two; clear();
        result = pow(number_one, number_two);
        cout <<
        R"(
Operation: Root - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
    }
    else if (operation == "7") {
        string tri_options;
        cout << "Available options for Trigonometric calculations - - - - - " <<
R"(
1. Sin 
2. Cos
3. Tan
4. Cot
5. Sec
6. Cosec
)";     
        cout << "Select >> ";
        cin >> tri_options; clear();
        if (tri_options == "1") {
            result = sin(number_one);
            cout <<
            R"(
Operation: Trigonometry (Sine) - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;   
        }
        else if (tri_options == "2") {
            result = cos(number_one);
            cout <<
            R"(
Operation: Trigonometry (Cosine) - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
        }
        else if (tri_options == "3") {
            result = tan(number_one);
            cout <<
            R"(
Operation: Trigonometry (Tangent) - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
        }
        else if (tri_options == "4") {
            result = 1.0 / tan(number_one);
            cout <<
            R"(
Operation: Trigonometry (Cotangent) - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
        }
        else if (tri_options == "5") {
            result = 1.0 / cos(number_one);
            cout <<
            R"(
Operation: Trigonometry (Secant) - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
        }
        else if (tri_options == "6") {
            result = 1.0 / sin(number_one);
            cout <<
            R"(
Operation: Trigonometry (Cosecant) - - - - - - - - - - - - - - - - - - - - -

    Result --> )" << result;
        }
        else {
            cout << "\nInvalid Selection!";
        }
    }
    else {
    cout << "\nInvalid Selection!";
    }


    cout << "\n\n";
    system("Pause");


    return 0;
}