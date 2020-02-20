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


///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

LL FastPow(LL a, LL b){
	LL result = 1;
	while(b){
		if(b % 2) result *= a;
		a *= a;
		b /= 2;
	}
	return result;
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{                 												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	LL a, b; //a -> liczba , b -> wykładnik;
	cin >> a >> b;
	
	cout << FastPow(a, b) << endl;
	
	return 0;
}
