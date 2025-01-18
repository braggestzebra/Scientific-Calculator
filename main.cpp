#include <iostream>
#include <cmath>
#include <string> // For using the string type
using namespace std;

int main() {
    char op; // Operator
    float a, b; // Variables for input

    cout << "**** Welcome to the Scientific Calculator ****" << endl;
    cout << "Available operations:\n";
    cout << " + : Addition\n";
    cout << " - : Subtraction\n";
    cout << " * : Multiplication\n";
    cout << " / : Division\n";
    cout << " ^ : Power\n";
    cout << " s : Square root (enter only one number)\n";
    cout << " t : Trigonometric functions (sin, cos, tan)\n";
    cout << " l : Logarithm (log base 10)\n";
    cout << " e : Natural Logarithm (ln)\n";
    cout << "Enter your operation: ";
    cin >> op;

    if (op == 's') {
        cout << "Enter a number: ";
        cin >> a;
        if (a < 0) {
            cout << "Error: Square root of a negative number is not allowed!" << endl;
        } else {
            cout << "Square root of " << a << " = " << sqrt(a) << endl;
        }
    } else if (op == 't') {
        string trig_op; // Changed from char to string
        cout << "Choose a trigonometric function (sin, cos, tan): ";
        cin >> trig_op;
        cout << "Enter the angle in degrees: ";
        cin >> a;
        a = a * M_PI / 180.0; // Convert degrees to radians

        if (trig_op == "sin") {
            cout << "sin(" << a << ") = " << sin(a) << endl;
        } else if (trig_op == "cos") {
            cout << "cos(" << a << ") = " << cos(a) << endl;
        } else if (trig_op == "tan") {
            cout << "tan(" << a << ") = " << tan(a) << endl;
        } else {
            cout << "Invalid trigonometric operation!" << endl;
        }
    } else if (op == 'l' || op == 'e') {
        cout << "Enter a positive number: ";
        cin >> a;
        if (a <= 0) {
            cout << "Error: Logarithm of non-positive numbers is undefined!" << endl;
        } else {
            if (op == 'l') {
                cout << "log10(" << a << ") = " << log10(a) << endl;
            } else {
                cout << "ln(" << a << ") = " << log(a) << endl;
            }
        }
    } else {
        // Binary operations (requires two inputs)
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;

        switch (op) {
            case '+':
                cout << a << " + " << b << " = " << a + b << endl;
                break;
            case '-':
                cout << a << " - " << b << " = " << a - b << endl;
                break;
            case '*':
                cout << a << " * " << b << " = " << a * b << endl;
                break;
            case '/':
                if (b != 0) {
                    cout << a << " / " << b << " = " << a / b << endl;
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl;
                }
                break;
            case '^':
                cout << a << " ^ " << b << " = " << pow(a, b) << endl;
                break;
            default:
                cout << "!!!!!! ERROR !!!!!!!!!!" << endl;
                cout << "Operator is not correct" << endl;
                break;
        }
    }

    return 0;
}
