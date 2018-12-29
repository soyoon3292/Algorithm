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


// // 주어진 배열 A에서 가장 많이 등장하는 숫자를 반환한다.
// // 만약 두 가지 이상 있을 경우 아무것이나 반환한다.
// int majority1(const vector<int>& A) {
//     int N = A.size();
//     int majority = -1, majorityCount = 0;
//     for(int i = 0; i < N; ++i) {
//         // A에 등장하는 A[i]의 수를 센다.
//         int V = A[i], count = 0;
//         for(int j = 0; j < N; ++j) {
//             if(A[j] == V) {
//                 ++count;
//             }
//         }
//         // 지금까지 본 최대 빈도보다 많이 출현했다면 답을 갱신한다.
//         if(count > majorityCount) {
//         majorityCount = count;
//         majority = V;
//         }
//     }
//     return majority;
// }

// // A의 각 원소가 0부터 100 사이의 값일 경우 가장 많이 등장하는 숫자를 반환한다.
// int majority2(const vector<int>& A) {
//     int N = A.size();
//     vector<int> count(101, 0);
//     for(int i = 0; i < N; ++i) {
//         count[A[i]]++;
//     }
//     // 지금까지 확인한 숫자 중 빈도수가 제일 큰 것을 majority에 저장한다.
//     int majority = 0;
//     for(int i = 1; i <= 100; ++i) {
//         if(count[i] > count[majority]) {
//             majority = i;
//         }
//     }
//     return majority;
// }


// // 실수 배열 A가 주어질 때, 각 위치에서의 M-이동 평균 값을 구한다.
// vector<double> movingAverage1(const vector<double>& A, int M) {
//     vector<double> ret;
//     int N = A.size();
//     for(int i = M-1; i < N; ++i) {
//         // A[i]까지의 이동 평균 값을 구하자.
//         double partialSum = 0;
//         for(int j = 0; j < M; ++j)
//             partialSum += A[i-j];
//         ret.push_back(partialSum / M);
//     }
//     return ret;
// }

// // 길이가 N인 실수 배열 A가 주어질 때, 각 위치에서의 M-이동 평균 값을 구한다.
// vector<double> movingAverage2(const vector<double>& A, int M) {
//     vector<double> ret;
//     int N = A.size();
//     double partialSum = 0;
//     for(int i = 0; i < M-1; ++i)
//         partialSum += A[i];
//     for(int i = M-1; i < N; ++i) {
//         partialSum += A[i];
//         ret.push_back(partialSum / M);
//         partialSum -= A[i-M+1];
//     }
//     return ret;
// }


const int INF = 987654321;
// 이 메뉴로 모두가 식사할 수 있는지 여부를 반환한다.
bool canEverybodyEat(const vector<int>& menu);
// 요리할 수 있는 음식의 종류 수
int M;
// food번째 음식을 만들지 여부를 결정한다.
int selectMenu(vector<int>& menu, int food) {
    // 기저 사례: 모든 음식에 대해 만들지 여부를 결정했을 때
    if(food == M) {
        if(canEverybodyEat(menu)) return menu.size();
        // 아무것도 못 먹는 사람이 있으면 아주 큰 값을 반환한다.
        return INF;
    }
    // 이 음식을 만들지 않는 경우의 답을 계산한다.
    int ret = selectMenu(menu, food+1);
    // 이 음식을 만드는 경우의 답을 계산해서 더 작은 것을 취한다.
    menu.push_back(food);
    ret = min(ret, selectMenu(menu, food+1));
    menu.pop_back();
    return ret;
}

int main() {
    // vector<double> a, b;
    // a.push_back(25);
    // a.push_back(30);
    // a.push_back(20);
    // a.push_back(31);
    // a.push_back(11);
    // a.push_back(23);
    // a.push_back(32);
    
    // b = movingAverage1(a, 3);
    // for(int i = 0; i < b.size(); i++)
    //     cout << b[i] << endl; 
    
    return 0;
}