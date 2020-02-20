/*																													   
 Templatka c++ Kacper Fis																							   																											   //
*/																													  
																													   
#include <iostream>       	
#include <cstdio>         
#include <limits>		  
#include <cstdlib>       
#include <utility>        
#include <iterator>       
#include <bitset>         
#include <list>           
#include <vector>         
#include <map>
#include <unordered_map>            
#include <set>            														   
#include <queue>          																							   
#include <deque>          																							   
#include <stack>																									   
#include <algorithm>
#include <cstdint>																								   
#include <cmath>																									   
#include <string>      																								   
#include <time.h>																									   
#include <iomanip> 																									   
#include <sstream>	
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

li tab[100005];
int color[100005];
int d[100005];
int p[100005];

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

void BFS(int v){
	qi q;
	int u;
	color[v] = 1;
	d[v] = 0;
	p[v] = 0;
	q.push(v);
	
	while(!q.empty()){
		u = q.front();
		q.pop();
		for(auto it : tab[u]){
			if(color[it] == 0){
				color[it] = 1;
				d[it] = d[u] + 1;
				p[it] = u;
				q.push(it);
			}
		}
		color[u] = 2;
	}
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{                 												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int v1, v2;
		cin >> v1 >> v2;
		tab[v1].pb(v2);
		tab[v2].pb(v1);
	}
	
	BFS(0);
	
	for(int i = 0; i < n; i++){
		cout << i << ": " << color[i] << " " << d[i] << " " << p[i] << endl;
	}
	
	return 0;
}
