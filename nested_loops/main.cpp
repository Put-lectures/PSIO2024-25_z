#include <iostream>
#include <vector>
using namespace std;
void circle(int N)
{
    for (int i = -N; i <= N; i++) {
        for (int j = -N; j <= N; j++) {
            if (i * i + j * j <= N * N) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void sort(int *tab, int N)
{
    int size = N;
    bool is_swapped;
    do {
        int *arr = new int[N];
        size--;
        is_swapped = false;
        for (int i = 0; i < size; i++) {
            if (tab[i] > tab[i + 1]) {
                is_swapped = true;
                int tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
            }
        }

    } while (is_swapped);
}

vector<int> sort(vector<int> tab)
{
    int size = tab.size();
    bool is_swapped;
    do {
        size--;
        is_swapped = false;
        for (int i = 0; i < size; i++) {
            if (tab[i] > tab[i + 1]) {
                is_swapped = true;
                int tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
            }
        }

    } while (is_swapped);
    return tab;
}
void rectangle(int N)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if ((j > 0 && j < N - 1) && (i > 0 && i < N - 1)) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}
int main()
{
    //rectangle(10)
    // circle(5);
    vector<int> v = {0, 1, -6, 12, -99, 8, 5};
    for (int el : v) {
        cout << el << ",";
    }
    cout << endl;
    v = sort(v);
    for (int el : v) {
        cout << el << ",";
    }

    int array[] = {0, 1, -6, 12, -99, 8, 5};
    sort(array, 7);
    return 0;
}
