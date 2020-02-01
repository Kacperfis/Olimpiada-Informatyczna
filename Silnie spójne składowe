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
li tab[100005]; //graf podstawowy
li tab2[100005]; //graf transponowany
int color[100005]; //color[i] = 0 --> i-ty wierzchołek nieodwiedzony

vector<int> V; //vector przechowujący wierzchołki w kolejności postorder po pierwszym DFS

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

void DFS(int v){
	color[v] = 1;
	for(auto it : tab[v]){
		if(color[it] == 0){
			DFS(it);
		}
	}
	V.pb(v);
}

void DFS_SCC(int v){
	cout << v << " ";
	color[v] = 1;
	for(auto it : tab2[v]){
		if(color[it] == 0){
			DFS_SCC(it);
		}
	}
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    cin >> n >> m;
    for(int i = 0; i < m; i++){
		int v1, v2;
		cin >> v1 >> v2;
		tab[v1].pb(v2);
		tab2[v2].pb(v1); //odwrócona krawędź
	}
    
    for(int i = 1; i <= n; i++){
		if(color[i] == 0){
			DFS(i);
		}
	}
    
    fill(color, color+100003, 0);
    
    for(int i = n-1; i >= 0; i--){
		if(color[V[i]] == 0){
			cout << "SCC: ";
			DFS_SCC(V[i]);
			cout << endl;
		}
	}
    
    

	return 0;
}
