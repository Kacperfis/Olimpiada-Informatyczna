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

string s;
int p = 47;
int pw[1000005];
int hash_tab[1000005];
const int mod = 1e9 + 7;

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

void calculatePowers(){ //wyliacznie potęg p
	pw[0] = 1;
	for(int i = 1; i < s.size(); i++){
		pw[i] = (pw[i - 1] * 1LL * p) % mod;
	}
}

void calculateHash(){ //wyliczanie wartości haszy
	for(int i = 1; i < s.size(); i++){
		hash_tab[i] = (hash_tab[i - 1] * 1LL * p % mod + (s[i] - 'a' + 1)) % mod;
	}
}

int getHash(int l, int r){ //wyliacznie wartości hasza dla podsłowa [l, r]
	return (hash_tab[r] - hash_tab[l - 1] * 1LL * pw[r - l + 1]  % mod + mod) % mod; 
}

bool same(int l1, int r1, int l2, int r2){ //porównywanie haszy podsłów
	int hash1 = getHash(l1, r1);
	int hash2 = getHash(l2, r2);
	return hash1 == hash2;
}
/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);    
	
	s = "abbaabbaa";
	s = "#" + s;
	calculatePowers();
	calculateHash();
	
	cout << s.substr(1, 4) << " == " << s.substr(5, 4) << ": " << same(1, 4, 5 , 8) << endl; 
	
	return 0;
}              												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
