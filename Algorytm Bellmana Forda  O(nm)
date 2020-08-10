/*																													   //
 Templatka c++ Kacper Fis Š																							   //
 Zad: 																												   //
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
typedef vector<ii> vii; //vector par<int>, do tworzenia tablicy dla grafów wagowych #dijkstra						   //
typedef priority_queue< ii, vector<ii>, greater<ii> > pq; //kolejka priorytetowa vectorów par(top()=min) #dijkstra	   //
																													   //																					   //
#define size(x) ((int)(x).size())																					   //
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   //
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   //
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   //
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   //
#define pb(x) push_back(x) 																							   //
#define pf(x) push_front(x)																							   //
#define mp(x, y) make_pair(x, y)                                                                                       //
/////////////////////////////////////////////GLOBAL DEFINITIONS//////////////////////////////////////////////////////////

int d[100000];
int p[100000];
vii tab[100000];
int n;

/////////////////////////////////////////////////FUNCTIONS///////////////////////////////////////////////////////////////

bool Bellman_Ford(int root){
	bool test;
	int v, wt;
	d[root] = 0;
	
	for(int i = 1; i < n; i++){
		test = true;
		for(int j = 0; j < n; j++){
			for(auto it : tab[j]){
				v = it.first;
				wt = it.second;
				
				if(d[v] > d[j] + wt){
					test = false;
					d[v] = d[j] + wt;
					p[v] = j;
				}
			}
		}
		if(test) return true;
	}
	
	//sprawdzanie cyklu ujemnego
	for(int i = 0; i < n; i++){
		for(auto it : tab[i]){
			v = it.first;
			wt = it.second;
			
			if(d[v] > d[i] + wt) return false;
		}
	}
	return true;
}
////////////////////////MAIN/////////////////////////////////////////////////////////////////////////////////////////////
int main()																											   //
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    int m, v1, v2, v3, x;
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
		cin >> v1 >> v2 >> v3;
		tab[v1].pb(mp(v2, v3));
	}
	
	for(int i = 0; i < n; i++){
		d[i] = INF;
		p[i] = -1;
	}
	
	cin >> x;
	if(Bellman_Ford(x)){
		cout << "wynik(odleglosci do x): " << endl;
		for(int i = 0; i < n; i++){
			cout << i << ": " << d[i] << endl;
		}
	}
	else cout << "Negative cycle";
	
	return 0;
}
