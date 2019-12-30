#include <iostream>
#include <list>

using namespace std;

int color[1000];
list<int> tab[1000];
list<int> lista;
void DFS_VISIT(int v, int color[]);
int n;

void DFS(int color[])
{
    for(int i = 1; i < n; i++)
    {
        if(color[i] == 0)
        {
            DFS_VISIT(i, color);
        }
    }
}

void DFS_VISIT(int v, int color[])
{
    list<int>::iterator j;
    color[v] = 1;

    for(j = tab[v].begin(); j != tab[v].end(); j++)
    {
        if(color[*j] == 0)
        {
            DFS_VISIT(*j, color);
        }
    }
    color[v] = 2;
    lista.push_front(v);
}

int main()
{
   list<int>::iterator it;
   int m, v1, v2;
   cin >> n >> m;

   for(int i = 0; i < n; i++)
   {
       color[i] = 0;
   }
   for(int i = 0; i < m; i++)
   {
        cin >> v1 >> v2;
        tab[v1].push_back(v2);
   }

   DFS(color);

   cout << "Topological sorting: " << endl;
   for(it = lista.begin(); it != lista.end(); it++)
   {
       cout << *it << " ";
   }

    return 0;
}
