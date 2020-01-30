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

set<string> palindromes; // palindromy
vector<int> promienie(1000005); // promienie palindromów

///////////////////////////////////////////////////FUNCTIONS/////////////////////////////////////////////////////////////

string process(string word){
	string s;
	for(int i = 0; i < word.size(); i++)
		if(word[i] != '#')
			s += word[i];
			
	return s;
}

void Manacher(string s, int n){
	int srodek = 0, prawy = -1, promien = 0;
	for(int i = 0; i < n; i++){
		//faza 1
		if(i <= prawy){
			promien = min(promienie[2 * srodek - i], prawy - i);
		}
		else promien = 0;
		
		//faza 2
		while(i - promien >= 0 && i + promien < n && s[i - promien] == s[i + promien]){
			string word = s.substr(i - promien, 2 * promien + 1);
			string p = process(word); //removing hashes from word
			if(p.size() != 1)
				palindromes.insert(p);
			promien++;
			
		}
		
		//faza 3
		promienie[i] = promien-1;
		if(i + promien >= prawy){
			srodek = i;
			prawy = i + promien - 1;
		}
	}
}

/////////////////////////////////////////////////////MAIN////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])																					 
{ios_base::sync_with_stdio(false); cin.tie(NULL);                  												       
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    string s;
    int n;
    cin >> s;
    
    int j = 0;
    string word = "";
    for(int i = 0; i < (s.size()*2)-1; i++){  //dodawanie hashy pomiędzy litery, np: A#B#B#A
		if(i % 2 == 1){
			word += "#";
		}
		else{
			 word += s[j];
			 j++;
		}
	}
    
    n = word.size();
	Manacher(word, n);

	//wypisanie palindromów:
	
	//cout << "palindromes: " << endl;
	//for(auto it : palindromes){
		//cout << it << endl;
	//}
 
 
 
	
	
	
	return 0;
}
