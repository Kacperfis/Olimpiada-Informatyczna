//UWAGA ALGORYTM NA MACIERZY SĽSIEDZTWA - KACPER FIS
#include <iostream>
#include <list>

using namespace std;

list<int> Vertices;
list<int>::iterator it;

void DFS_EULER(int v, int *tab[], int n)
{
    for(int i = 1; i < n; i++)
    {
        while(tab[v][i])
        {
            tab[v][i]--;
            tab[i][v]--;
            DFS_EULER(i, tab, n);
        }
    }

    Vertices.push_back(v);
}

int main()
{
    int n, m, v1, v2;
    cin >> n >> m;
    n+=1;
    m+=1;

    int **tab = new int *[n];

    for(int i = 1; i < n; i++)
    {
        tab[i] = new int[n];
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            tab[i][j] = 0;
        }
    }

    for(int i = 1; i < m; i++)
    {
        cin >> v1 >> v2;
        tab[v1][v2]++;
        tab[v2][v1]++;
    }

    DFS_EULER(1, tab, n);

    cout << "Eulers circle: " << endl;
    for(it = Vertices.begin(); it != Vertices.end(); it++)
    {
        cout << *it << " ";
    }

    for(int i = 1; i < n ; i++)
    {
        delete [] tab[i];
    }
    delete [] tab;

    return 0;
}
