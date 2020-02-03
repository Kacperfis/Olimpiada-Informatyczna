//UWAGA ALGORYTM NA MACIERZY SĽSIEDZTWA - KACPER FIS
#include <iostream>
#include <list>

using namespace std;

list<int> Vertices;

void DFS_EULER(int v, int *tab[], int n)
{
    for(int i = 1; i < n; i++)
        while(tab[v][i])
        {
            tab[v][i]--;
            tab[i][v]--;
            DFS_EULER(i, tab, n);
        }
    Vertices.push_front(v);
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

    //liczenie stopnia wchodzacego:
    int *licznik = new int[n];

    for(int i = 1; i <  n; i++)
    {
        licznik[i] = 0;
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(tab[i][j] == 1)
            {
                licznik[i]++;
            }
        }
    }

    int start;
    cout << "licznik stopni: " << endl;
    for(int i = 1; i < n; i++)
    {
        if(licznik[i] % 2 == 1)
        {
            start = i;
            break;
        }
    }

    DFS_EULER(start, tab, n);

    cout << "Euler's path: " << endl;
    list<int>::iterator it;
    for(it = Vertices.begin(); it != Vertices.end(); it++)
    {
        cout << *it << " ";
    }

    for(int i = 1; i < n; i++)
    {
        delete [] tab[i];
    }
    delete [] tab;

    return 0;
}
