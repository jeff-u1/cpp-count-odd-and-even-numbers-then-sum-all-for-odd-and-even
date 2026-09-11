//v4
#include <iostream>
#include<climits>
#define ll long long int
using namespace std;

class fiveofive
{
public:
    ll count = LLONG_MAX;
    ll sum_even=0, sum_odd=0;
};
int main()
{
    fiveofive sunflower;
    cout << "enter any negative numbers to quit\n" <<
    "\nmore than 500mill will take time";
    for (;;) {
        sunflower.sum_odd = 0, sunflower.sum_even = 0;
        cout << "\nhow many number to calc?: ";
        cin >> sunflower.count;
        if (sunflower.count >= LLONG_MAX) {
        cout << "\n\t!quitting max number reached!\n";
        break;
        }
        if (sunflower.count <= 0) {
            cout << "6e 61 7a 69 20 68 69 74 6c 65 72\n";
            break;
        }

        for (ll i = 1; i <= sunflower.count; i++) {
            if (sunflower.count <= 50) {
                cout << " " << i;
            } else {
                cout << "\n!to many number skiping";
                break;
            }
        }
        cout << '\n';
        cout << "\nodd number: ";

        for (ll i = 1; i <= sunflower.count; i++) {
            if (i % 2 != 0) {
                sunflower.sum_odd += i;
                if (sunflower.count <= 50) {
                    cout << i << " ";
                } else {
                }
            }
        }
        cout << '\n';
        cout << "\neven number: ";
        for (ll j = 1; j <= sunflower.count; j++) {
            if (j % 2 == 0) {
                sunflower.sum_even += j;
                if (sunflower.count <= 50) {
                    cout << j << " ";
                } else {
                }
            }
        }
        cout << '\n';
        cout<< "\ntotal of odd numbers: "<< sunflower.sum_odd << '\n';
        cout << "total of even numbers: "<< sunflower.sum_even << '\n';
    }
    return 0;
}
    