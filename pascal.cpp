#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // TODO: написать вывод треугольника Паскаля с использованием vector.
    //
    // Вид треугольника:
    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1
    // ...
    int n;
    cin >> n;
    vector <vector <int> > a(n, vector <int>());
    for (int i = 0; i < n; i++)
    {
	a[i].push_back(1);
	for (int j = 1; j < i; j++)
	    a[i].push_back(a[i - 1][j] + a[i - 1][j - 1]);
	a[i].push_back(1);
    }
    for (int i = 0; i < n; i++)
    {
	for (int j = 0; j <= i; j++)
	    cout << a[i][j] << " ";
	cout << endl;
    }
    return 0;
}

