/*																													   //
 Templatka c++ Kacper Fis																							   //																												   //
*/																													   //
																													   //																								   //
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
																													   //																				   //
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   //
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   //
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   //
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   //
#define pb(x) push_back(x) 																							   //
#define pf(x) push_front(x)																							   //
#define mp(x, y) make_pair(x, y)                                                                                       //
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////

list<int> tab[1000];
int n;

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

bool DFS(int u, int color[])
{
	color[u] = 1;
		
	list<int>::iterator ite;
	for(ite = tab[u].begin(); ite != tab[u].end(); ite++)
	{
		if(color[*ite] == 1)
			return true;
			
		if(color[*ite] == 0 && DFS(*ite, color))
			return true;
	}
	
	color[u] = 2;
	return false;
}

bool is_cyclic()
{
	int color[1000];
	for(int i = 1; i <= n; i++)
	{
		color[i] = 0;
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(color[i] == 0)
		{
			if(DFS(i, color) == true)
				return true;
		}
	}
	
	return false;
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					   //
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    int m, v1, v2;
    
	cin >> n >> m;
	
	for(int i = 1; i <= m; i++)
	{
		cin >> v1 >> v2;
		tab[v1].pb(v2);
	}

	if(is_cyclic())
	{
		cout << "CYCLE";
	}
	else if(!is_cyclic()) cout << "NO CYCLE";
	
	return 0;
}
