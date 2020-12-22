#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void print_vector(vector<int>& A){
    for (int x:A){
        cout << x << " ";
    }
    cout << endl;
}
int main(){
    vector<int> A;
    A.resize(0);
    A.push_back(9100);
    A.push_back(3);
    A.push_back(337);
    A.push_back(350);
    A.push_back(-65);

    auto B(A);
    print_vector(A);
    for (int i = 0; i< A.size() - 1; i++)
        for (int j = i+1; j < A.size(); j++)
            if (A[i] > A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
    cout << "Vector A after sort: " << endl;
    print_vector(A);
    cout << "Vector B after sort A: " << endl;
    print_vector(B);

    sort(B.begin(), B.end());
    cout << "Vector B after sort ascending: " << endl;
    print_vector(B);

    sort(B.begin(), B.end(), greater<int>());
    cout << "Vector B after sort descending: " << endl;
    print_vector(B);

    sort(B.begin(), B.end(), 
        [](int a, int b) {
            return (abs(a) < abs(b));
        }
    );
    cout << "Vector B after sort ascending absolute " << endl;
    print_vector(B);
    
    return 0;
}