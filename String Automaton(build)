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
																													   
list<int>::iterator it;																								   
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



///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

struct state
{
	int len, link;
	map<char,int> next;
};

state st[1000000];
int sz, last;

void sa_init() //funkcja inicjalizacyjna drzewa
{ //ustawiamy dla root: dlugosc = 0, link = -1, numer wierzcholka 1; ustawiamy tez last na 0 wierzcholek(root)
	sz = 0;
	st[0].len = 0;   
	st[0].link = -1;
	sz++;
	last = 0;
}

void sa_extend(char c){
	
	int cur = sz++; //tworzymy nowy state i dajemy mu numer sz(tree_size) + 1, czyli kolejny numer wierzcholka
	st[cur].len = st[last].len + 1;  //dlugosc aktualnego state = dlugosc poprzedniego + 1
	int p = last;  //zaczynamy przejscie od ostatnio dodanego wierzcholka w drzewie
	while(p != -1 && !st[p].next.count(c)){  //dopuki p != -1 i dopuki nie ma transition(polaczenia) rownemu dodawanej literze
		st[p].next[c] = cur; //dodajemy polaczenie transition do aktualnego wierzcholka(current)
		p = st[p].link; //i przechodzimy po linkach w tył po kolejnych wierzcholkach(od last do roota)
	}
	if(p == -1){
		st[cur].link = 0; //jesli dojdziemy do roota, to laczymy linkiem aktualny wierzcholek(current) z rootem
	}
	else{
		int q = st[p].next[c]; //q == następny wierzcholek ktory ma polaczenia od wierzcholka p
		if(st[p].len + 1 == st[q].len) //jezeli dlugosc q == dlugosc p + 1
			st[cur].link = q; //to laczymy linkiem aktualny wierzcholek(current) z q
		else{ 
			int clone = sz++; //w innym wypadku tworzymy clone wierzcholka q, i nadajemy mu kolejny nr wierzcholka
			st[clone].len = st[p].len + 1; //przypisujemy mu dlugosc p+1(bo q byl kolejnym woierzcholkiem po p, a to jest jego klon wiec tez ma taka sama dlugosc)
			st[clone].link = st[q].link; //kopiujemy link z wierzcholka q;
			st[clone].next = st[q].next; //i tak samo kopiujemy transition(next)
			while(p != -1 && st[p].next[c] == q) //dopuki wierzcholki od p do root maja polaczenia z q, to laczymy je rownierz z clone
			{ 
				st[p].next[c] = clone;
				p = st[p].link; //i cofamy sie po linkach w strone root
			}
			//laczymy linkami wierzcholki: q i current(aktualny) z clone
			st[q].link = clone; 
			st[cur].link = clone; 
		}
	}
	last = cur; //przypisujemy last ostatnio stworzonemu wierzcholkowi
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
 
	
	
	
	return 0;
}
