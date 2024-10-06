#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
bool binary_search(vector<int> tab, int el)
{
    int idx_start = 0;
    int idx_end = tab.size() - 1;

    while (idx_start <= idx_end) {
        int mid = (idx_end + idx_start) / 2;
        if (tab[mid] == el) {
            return true;
        }
        if (tab[mid] > el) {
            idx_end = mid - 1;
        } else {
            idx_start = mid + 1;
        }
    }
    return false;
}
int nwd(int m, int n)
{
    while (m != n) {
        if (m > n) {
            m = m - n;
        } else {
            n = n - m;
        }
    }
    return m;
}
bool is_prime(int n)
{
    for (int k = 2; k < n; k++) {
        if (n % k == 0)
            return false;
    }
    return true;
}
int silnia(int n)
{
    if (n == 0)
        return 1;
    return n * silnia(n - 1);
}
int silnia_itr(int n)
{
    int acc = 1;
    for (int k = 1; k <= n; k++) {
        acc = acc * k;
    }
    return acc;
}
float mean(vector<int> tab)
{
    float sum = 0;
    for (int i = 0; i < tab.size(); i++) {
        sum += tab[i];
    }
    return sum / tab.size();
}
char toUpper(char c)
{
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}
bool question(const char *q)
{
    char answer;
    do {
        cout << q << endl;

        cin >> answer;
    } while (!(answer == 't' || answer == 'T' || answer == 'n' || answer == 'N'));
    switch (answer) {
    case 't':
    case 'T':
        return true;
    case 'n':
    case 'N':
        return false;
    }

    //((answer != 't' && answer != 'T'&&answer != 'n' && answer != 'N'))
}
int main()
{
    // int N = 0, M = 100;
    // int x;
    // cin >> x;

    // if ((x>=N)&&(x<=M)   )

    // char odp;
    // cout << "czy chcesz kontynuowac (t/n)" << endl;
    // cin >> odp;
    // cout << toUpper(odp) << endl;

    // if (odp == 't' || odp == 'T') {
    //     cout << "Kontynuacja";
    // } else {
    //     cout << "koniec";
    // }

    // char wybor;

    // cin >> wybor;

    // switch (wybor) {
    // case '1': {
    //     cout << "Case 1" << endl;
    //     break;
    // }
    // case '2':
    //     cout << "Case 2" << endl;
    //     break;

    // case 'x':
    // case 'X':
    //     cout << "Wyjscie" << endl;
    //     break;
    // }
    vector<string> wyrazy;
    fstream plik("/home/piotr/Downloads/gpl-3.0.txt", ios::in);

    string wyraz;
    while (!plik.eof()) {
        plik >> wyraz;
        wyrazy.emplace_back(wyraz);
    }

    // for (int i = 0; i < wyrazy.size(); i++) {
    //     cout << wyrazy[i] << endl;
    // }
    // for (string &el : wyrazy)
    //     cout << el;

    // cout << wyraz;

    // question("czy chcesza kontynuowac? (t/n");
    int licznik = 0;

    for (int i = 0; i < wyrazy.size(); i++) {
        if (wyrazy[i] == "the") {
            licznik++;
        }
    }

    // cout << "znaleziono wyrazow: " << licznik << endl;

    // cout << nwd(81, 9) << endl;
    vector<int> tab = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    if (binary_search(tab, 39)) {
        cout << "Znaleziono" << endl;
    } else
        cout << "Brak elementu";
    return 0;
}
