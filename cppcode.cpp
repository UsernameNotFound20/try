#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};
    for (int n : numbers) {
        cout << n << "\n";
    }
    cout << "Hate this thing";
    
    return 0;
}
