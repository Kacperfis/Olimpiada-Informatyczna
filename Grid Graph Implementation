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

int n;
li tab[1000005];
li tab2[1000005];




///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    int m, k;
    cin >> n >> m;
    int maxi = n * m;
    
    //horizontally
    int counter = 1;
    int licznik = 1;
    while(licznik <= m){
		int j = 1;
		while(j < n){
			tab[counter].pb(counter+1);
			tab[counter+1].pb(counter);
			counter++;
			j++;
		}
		licznik++;
		counter++;
	}
	
	//vertically
		licznik = 1;
		counter = licznik;
		while(licznik <= n){
			int j = 1;
			while(j < m){
				tab[counter].pb(counter+n);
				tab[counter+n].pb(counter);
				tab2[counter].pb(counter+n);
				tab2[counter+n].pb(counter);
				counter += n;
				j++;
			}
			licznik++;
			counter = licznik;
		}
	
	//cout << "wyswietlenie grafu: " << endl;
	//for(int i = 1; i <= maxi; i++){
		//cout << i << ": ";
		//for(it = tab[i].begin(); it != tab[i].end(); it++){
			//cout << *it << " ";
		//}
		//cout << endl;
	//}
 
 
	
	
	
	return 0;
}
