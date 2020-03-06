/*																													   
 Templatka c++ Kacper Fis																							   																											   //
*/																													  
																								   
#include <bits/stdc++.h>																							   
																													   
using namespace std; 																								   
		
const double eps = 1e-9;																							   
const int INF = 1000000001;																						   
const float PI = 3.14;																								   
typedef long long LL;																								   
																													   
typedef vector<int> vi;																								   
typedef list<int> li;																								   
typedef queue<int> qi; 																								   
typedef pair<int,int> ii; 																							   
typedef map<string,int> msi; //np msi['nazwa'] = 'liczba'															   
typedef vector<ii> vii; //vector par<int>, do tworzenia tablicy dla grafów wagowych #dijkstra #Bellman_Ford			   
typedef priority_queue< ii, vector<ii>, greater<ii> > pq; //kolejka priorytetowa vectorów par(top()=min) #dijkstra	   
																													   																				   
vector<ii>::iterator iter;																							   
																													   																				   
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   
#define pb(x) push_back(x) 																							   
#define pf(x) push_front(x)																							   
#define mp(x, y) make_pair(x, y)                                                                                       
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////

int n, m;
li tab[100005];
int color[100005];

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

void BFS(int &licznik){
    int u;
    qi q;

    color[1] = 1;
    q.push(1);

    while(!q.empty())
    {
        u = q.front();
        licznik++;
        q.pop();

        for(auto it : tab[u]){
			if(color[it] == 0){
				color[it] = 1;
				q.push(it);
			}
		}
		color[u] = 2;
    }
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int v1, v2;
		cin >> v1 >> v2;
		tab[v1].pb(v2);
		tab[v2].pb(v1);
	}
	
	int licznik = 0;
	BFS(licznik);
	
	if(licznik == n){
		cout << "Graf jest spójny" << endl;
	}
	else cout << "Graf jest niespójny" << endl;
	
	
	return 0;
}
