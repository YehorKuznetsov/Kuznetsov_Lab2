#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for(int num = 100; num <=999; num++) {
        int hundreds = num / 100;
        int tens = (num /10)%10;
        int ones = num%10;
        int arm = pow(hundreds,3) + pow(tens,3)+ pow(ones,3);
        if (arm == num) {
            cout << num << endl;
        }
    }
}
