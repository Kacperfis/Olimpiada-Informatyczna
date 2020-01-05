/*																													   //
 Templatka c++ Kacper Fis Š																							   //
 Zad: 																												   //
*/																													   //
																									   //
#include <bits/stdc++.h>																							   //
																													   //
using namespace std; 																								   //
																													   //
const int INF =  1000000001;																						   //
const float PI = 3.14;																								   //
typedef long long LL;																								   //
																													   //
typedef vector<int> vi;																								   //
typedef list<int> li;																								   //
typedef queue<int> qi; 																								   //
typedef pair<int,int> ii; 																							   //
typedef map<string,int> msi; //np msi['nazwa'] = 'liczba'															   //
typedef vector<ii> vii; //vector par<int>, do tworzenia tablicy dla grafów wagowych #dijkstra #Bellman_Ford			   //
typedef priority_queue< ii, vector<ii>, greater<ii> > pq; //kolejka priorytetowa vectorów par(top()=min) #dijkstra	   //
																													   //
list<int>::iterator it;																								   //
list<int>::iterator it1;																							   //
vector<int>::iterator it2;																							   //
vector<int>::iterator it3;																							   //
set<int>::iterator it4;																								   //
map<string, int>::iterator it5; 																					   //
vector<ii>::iterator iter;																							   //
																													   //
#define size(x) ((int)(x).size())																					   //
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   //
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   //
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   //
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   //
#define pb(x) push_back(x) 																							   //
#define pf(x) push_front(x)																							   //
#define mp(x, y) make_pair(x, y)                                                                                       //
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////
int n, m;
int p[1000][1000];
int d[1000][1000];
///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////
bool Floyd_Warshall()
{
    for(int k = 0; k < n; k++)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                if((d[i][k] == INF) || (d[k][j] == INF)) continue;
                if(d[i][j] > d[i][k] + d[k][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                    p[i][j] = p[k][j];
                }
            }

    for(int i = 0; i < n; i++)
    {
        if(d[i][i] < 0) return false;
    }

    return true;
}

void Floyd_Warshall_Path(int i, int j)
{
    if(i == j) cout << i << " ";
    else
    {
        Floyd_Warshall_Path(i, p[i][j]);
        cout << j << " ";
    }
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main()																											   //
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int v1, v2, v3;
	cin >> n >> m;

	for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                d[i][j] = 0;
                p[i][j] = -1;
            }
            else
            {
                d[i][j] = INF;
                p[i][j] = -1;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        cin >> v1 >> v2 >> v3;
        d[v1][v2] = v3;
        p[v1][v2] = v1;
    }

    if(Floyd_Warshall())
    {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
            {
                cout << i << "->" << j << ": ";
                if(d[i][j] < INF)
                {
                    Floyd_Warshall_Path(i, j);
                    cout << " $" << d[i][j] << endl;
                }
                else cout << "No path" << endl;
            }

    }else cout << "Negative cycle" << endl;

	return 0;
}
