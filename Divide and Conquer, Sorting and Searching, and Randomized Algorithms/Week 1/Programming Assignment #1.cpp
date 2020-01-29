#include <iostream>
#include <cmath>
using namespace std;
int multiply(int x, int y, int n);

int main() {
    int ans_output = multiply(3141592653589793238462643383279502884197169399375105820974944592, 2718281828459045235360287471352662497757247093699959574966967627, 4);
    cout << ans_output;
    return 0;
}

int multiply(int x, int y, int n) {
    int half_n = n / 2;
    int hlf_pow_ten = pow(10, half_n);
    int a = x / hlf_pow_ten;
    int b = x % hlf_pow_ten;
    int c = y / hlf_pow_ten;
    int d = y % hlf_pow_ten;
    int ac;
    int bd;
    int a_add_b = a + b;
    int c_add_d = c + d;
    int ad_add_bc;
    int ans;

    if (n == 4) {
        ac = a * c;
        bd = b * d;
        ad_add_bc = a_add_b * c_add_d - ac - bd;
        ans = pow(10, n) * ac + hlf_pow_ten * (ad_add_bc) + bd;
        return ans;
    } else {
        ac = multiply(a, c, half_n);
        bd = multiply(b, d, half_n);
        ad_add_bc = a_add_b * c_add_d - ac - bd;
        ans =  pow(10, n) * ac + hlf_pow_ten * (ad_add_bc) + bd;
        return ans;
    }
}




