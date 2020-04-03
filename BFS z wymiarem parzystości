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

int n, m;
li tab[5005];
int distances[5005][2]; //[v][0] -> parzyste, [v][1] -> nieparzyste

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

void bfs(int v){
	
	for(int i = 1; i <= n; i++){
		distances[i][0] = distances[i][1] = INF;
	}	
	queue<ii> q;
	distances[v][0] = (tab[v].size() > 0 ? 0 : INF); // jeśli pierwszy wierzchołek ma sąsiadów, to distance[v][0] = 0;							
	q.push({v, 0});	//wrzucamy 1 wierzchołek do kolejki
	
	while(!q.empty()){
		auto u = q.front();
		q.pop();
		
		for(auto it : tab[u.first]){
			if(distances[it][(u.second + 1) % 2] == INF){ //jesli distances[sąsiad][odległość poprzednika + 1 mod 2] == INF
				q.push({it, u.second + 1}); //to wrzucamy przeglądany wierzchołek do kolejki
				distances[it][(u.second + 1) % 2] = u.second + 1; //aktualizujemy dystans
			} 
		}
	}
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /*
     * 	Algorytm BFS służy do wyznaczanie najkrótszych ścieżek w grafie.
     * 	Tutaj jest zaprezentowana jego inna wersja, a mianowicie taka, 
     * 	która pozwala znajdować najkrótsze ścieżki parzyste i nieparzyste
     * 	w danym grafie. Odległości będą trzymane w tablicy distances[a][b],
     *  gdzie 'a' to wierzchołek a 'b' to parzystość ścieżki.
     * 
     * 	Zadanie treningowe: OI XX "Morskie Opowieści"
     * */
     
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int v1, v2;
		cin >> v1 >> v2;
		tab[v1].pb(v2);
		tab[v2].pb(v1);
	}
    
    cout << "odległości o wierzchołka 1: " << '\n';
    bfs(1);
    for(int i = 1; i <= n; i++){
		cout << i << ": " << distances[i][0] << " / " << distances[i][1] << '\n';
	}

	return 0;
}
