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
																													   
//list<int>::iterator it;																								   
list<int>::iterator it1;																							   
vector<int>::iterator it2;																							   
vector<int>::iterator it3;																							   
set<int>::iterator it4;																								   
map<string, int>::iterator it5; 																					   
vector<ii>::iterator iter;																							   
																													   																				   
#define print_list(x) for(it = (x).begin(); it != (x).end(); it++) {cout << *it << " ";}							   
#define print_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++) {cout << *it2 << " ";}						   
#define search_list(x) for(it = (x).begin(); it != (x).end(); it++)													   
#define search_vector(x) for(it2 = (x).begin(); it2 != (x).end(); it2++);											   
#define pb(x) push_back(x) 																							   
#define pf(x) push_front(x)																							   
#define mp(x, y) make_pair(x, y)                                                                                       
///////////////////////////////////////////////GLOBAL DEFINITIONS////////////////////////////////////////////////////////

const int H = 20;
int tree[1 << H];
int leaf = 1 << (H - 1);

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

void update(int &ans, int v){
    ans += v;
}

void insert(int l, int r, int v){
    l += leaf; r += leaf;
    
    update(tree[l], v);
    if(l != r) update(tree[r], v);
    
    while(l / 2 != r / 2) {
        if(l % 2 == 0) update(tree[l + 1], v);
        if(r % 2 == 1) update(tree[r - 1], v);
        l /= 2;
        r /= 2;
    }
}

int query(int a){
    a += leaf;
    int ans = 0;
    while(a){
        update(ans, tree[a]);
        a /= 2;
    }
    return ans;
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);    

	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		if(x == 1){ //dodawanie na przedziale
			int a, b, c; cin >> a >> b >> c;
			insert(a, b, c);
		}
		else if(x == 2){ //suma w punkcie
			int a; cin >> a;
			cout << query(a) << '\n';
		}
	}
	
	return 0;
}     
