//v2
#include <iostream>
#define ll long long int
using namespace std;

class fiveofive
{
public:
    ll count=0;
    int sum_even=0, sum_odd=0;
};
int main()
{
    fiveofive sunflower;
    cout << "enter any negative numbers to quit";
    for (;;) {
        if (sunflower.sum_even > 0 || sunflower.sum_odd > 0) {
            sunflower.sum_odd = 0;
            sunflower.sum_even = 0;
        }
        cout << "\nhow many number to calc?: ";
        cin >> sunflower.count;
        if (sunflower.count <= 0) {
            cout << "6e 61 7a 69 20 68 69 74 6c 65 72\n";
            break;
        }

        for (int i = 1; i <= sunflower.count; i++) {
            cout << " " << i;
        }
        cout << '\n';

        cout << "\nodd number: ";

        for (int i = 1; i <= sunflower.count; i++) {
            if (i % 2 != 0) {
                sunflower.sum_odd += i;
                cout << i << " ";
            }
        }
        cout << '\n';
        cout << "\neven number: ";
        for (int j = 1; j <= sunflower.count; j++) {
            if (j % 2 == 0) {
                sunflower.sum_even += j;
                cout << j << " ";
            }
        }
        cout << '\n';
        cout<< "\ntotal of odd numbers: "<< sunflower.sum_odd << '\n';
        cout << "total of even numbers: "<< sunflower.sum_even << '\n';
    }
    return 0;
}
