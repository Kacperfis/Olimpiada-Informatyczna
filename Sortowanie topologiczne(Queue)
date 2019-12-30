/*																													   
 Templatka c++ Kacper Fis																							   																											   //
*/																													  
#include <functional>																							   
#include <bits/stdc++.h>																							   
																													   
using namespace std; 																								   
																													   
const int INF = 1000000001;																						   
const float PI = 3.14;																								   
typedef long long LL;																								   
																													   
typedef vector<int> vi;																								   
typedef list<int> li;																								   
typedef queue<int> qi; 																								   
typedef pair<int,int> ii; 																							   
typedef map<string,int> msi; //np msi['nazwa'] = 'liczba'															   
typedef vector<ii> vii; //vector par<int>, do tworzenia tablicy dla grafów wagowych #dijkstra #Bellman_Ford			   
typedef priority_queue< ii, vector<ii>, greater<ii> > pq; //kolejka priorytetowa vectorów par(top()=min) #dijkstra																													   																				   list<int>::iterator it;																								   
																				   
vector<ii>::iterator iter;																							   
																													   																				   
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   
#define pb(x) push_back(x) 																							   
#define pf(x) push_front(x)																							   
#define mp(x, y) make_pair(x, y)                                                                                       
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////

list<int>::iterator it;
li tab[1000005];
int in_degree[1000005];

///////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
	LL n, m;
	cin >> n >> m;
	for(int i = 1; i <= m; i++){
		int v1, v2;
		cin >> v1 >> v2;
		tab[v1].pb(v2);
		in_degree[v2]++;
	}

	qi q;
	for(int i = 1; i <= n; i++){
		if(in_degree[i] == 0){
			q.push(i);
		}
	}
	
	vector<int> ans;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		cout << u << " ";
		for(it = tab[u].begin(); it != tab[u].end(); it++){
			in_degree[*it]--;
			if(in_degree[*it] == 0) q.push(*it);
		}
	}
	
	
    
	return 0;
}
