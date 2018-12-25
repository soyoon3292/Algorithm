#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// bool hasDuplicate(const vector<int>& array) {
//    for(int i = 0; i < array.size(); ++i)   
//        for(int j = 0; j < i; ++j)
//            if(array[i] == array[j])
//                return true;
//    return false;
// }

// #define FOR(i, n) for(int i = 0; i < (n); i++)
// bool hasDuplicate(const vector<int>& array) {
//    FOR(i, array.size())
//        FOR(j, i)
//            if(array[i] == array[j])
//                return true;
//    return false;
// }

// bool isProperSubset(const IntegerSet& a, const IntegerSet& b);

// //bool operator < (const IntegerSet& a, const IntegerSet& b) {
// //    if(isProperSubset(a, b)) return true;
// //    if(isProperSubset(b, a)) return false;
// //    return false;
// //}

// bool operator < (const IntegerSet& a, const IntegerSet& b) {
//    if(isProperSubset(a, b)) return true;
//    if(isProperSubset(b, a)) return false;
//    if(a.size() != b.size()) return a.size() < b.size();
//    return lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
// }

// void mySort(vector<int>& array);
// string toString(const vector<int>& array);
// int main() {
//     while(true) {
//         int n = rand() % 100 + 1;
//         vector<int> input(n);
//         for(int i = 0; i < n; ++i)
//             input[i] = rand();
//         vector<int> mySorted = input;
//         mySort(mySorted);
//         vector<int> reference = input;
//         sort(reference.begin(), reference.end());
//         if(mySorted != reference) {
//             cout << "Mismatch!" << endl;
//             cout << "Input: " << toString(input) << endl;
//             cout << "Expected: " << toString(reference) << endl;
//             cout << "Got: " << toString(mySorted) << endl;
//             break;
//         }
//     }
// }

// bool isPrime(int n) {
//     if(n == 1) return true;
//     if(n == 2) return true;
//     if(n % 2 == 0) return false;
//     for(int i = 2; i < n; ++i)
//         if(n % i == 0)
//             return false;
//     return true;
// }


// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }


// bool doubleEqual(double a, double b) {
//     double diff = fabs(a - b);
//     if(diff < 1e-10) return true;
//     return diff <= 1e-8 * max(fabs(a), fabs(b));
// }


// double minRadiusCover() {
//     double minRadius = 0, maxRadius = 10;
//     while(maxRadius - minRadius > 1e-10) {
//         double mid = (minRadius + maxRadius) / 2;
//         if(canCover(mid))
//             maxRadius = mid;
//         else
//             minRadius = mid;
//     }
//     return maxRadius;
// }

int main() {
    int a, b;
    cin >> a >> b;
    
    return 0;
}