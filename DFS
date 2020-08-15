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
li tab[100005]; //graf
int color[100005]; //kolory
int d[100005]; //odległości
int p[100005]; //przodkowie
int f[100005]; //post order
int times; //czas przejscia DFS

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

void DFS_VISIT(int v);

void DFS(){
	for(int i = 0; i < n; i++){
		if(color[i] == 0){
			DFS_VISIT(i);
		}
	}
}

void DFS_VISIT(int v){
	color[v] = 1;
	times = times + 1;
	d[v] = times;
	
	for(auto it : tab[v]){
		if(color[it] == 0){
			p[it] = v;
			DFS_VISIT(it);
		}
	}
	
	color[v] = 2;
	times = times + 1;
	f[v] = times;
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
		tab[v2].pb(v1);
	}
    
	DFS();
 
	//wyswietlenie danych
	for(int i = 0; i < n; i++){
		cout << i << ": " << d[i] << "/" << f[i] << " , p[i]: " << p[i] << endl;
	}

	return 0;
}
