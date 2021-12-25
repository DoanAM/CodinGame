#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;



int main() {
    cin >> n;
    int a[n]; 
    for (int j = 0; j < n; j++) {
        cin >> a[j];
    }
    //cout << "\n The array before sorting is : ";
    
    sort(a, a+n);
    int value = a[n-1];
    //cout << "\n\n The array after sorting is : ";
    
    for (int k = 0; k < n; k++) {
        if ((a[k+1] - a[k]) < value) {
            value = a[k+1] - a[k];
        }
        
    } 
    cout << value << endl;
    return 0;
}
