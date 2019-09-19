
/*																													   
 Templatka c++ Kacper Fis																							   																											   //
*/																													  
			
#include <cctype>																													   
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

int n, m; //rows and columns

//definiowanie rozmiaru tablicy 2D (a*b)
#define a 100
#define b 100

int x[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////
bool search2D(char grid[a][b], int row, int col, string word)
{
	if(grid[row][col] != word[0])
		return false;
	
	for(int i = 0; i < 8; i++)
	{
		int k, rd = row + x[i], cd = col + y[i];
		
		for(k = 1; k < word.length(); k++)
		{
			if(rd >= n || rd < 0 || cd >= m || cd < 0)
				break;
			
			if(grid[rd][cd] != word[k])
				break;
			
			rd += x[i];
			cd += y[i];
		}
		if(k == word.length())
			return true;
	}
	return false;
}

void PatternSearch(char grid[a][b], string word)
{
	for(int row = 0; row < n; row++)
	{
		for(int col = 0; col < m; col++)
		{
			if(search2D(grid, row, col, word))
			{
				cout << row << " " << col << endl;
			}
		}
	}
}
/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   
   int t;
   cin >> t;
   for(int i = 0; i < t; i++) //liczba testow
   {
	    cout << endl;
		cin >> n >> m;   //wczytujemy rozmiary tablicy 2D
		
		char grid[a][b];
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < (m-1); j++)
			{
				char znak;
				cin >> znak;
				znak = tolower(znak);  //algorytm obsluguje male i duze litery alfabetu
				grid[i][j] = znak; //wczytujemy tablice 2D
			}
		}
		
		int p;
		cin >> p; //wczytujemy ilosc wzorcow
		for(int i = 0; i < p; i++)
		{
			string text; 
			cin >> text;
			transform(text.begin(), text.end(), text.begin(), ::tolower);
			PatternSearch(grid, text); //wczytujemy wzorzec i dostajemy wspolrzedne wystąpien wzorca w tablicy 2D
		}
		cout << endl;
	}
	
	return 0;
}
