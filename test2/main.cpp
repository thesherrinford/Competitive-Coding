/************************************
 *	AUTHOR: 		Divyansh Gaba	*
 *	INSTITUTION: 	ASET, BIJWASAN	*
 ************************************/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)


using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;


int main()
{
	fast;
	srand(time(NULL));
	ofstream fout("input.txt");
	fout<<10<<endl;
	int t = 10;
	while(t--){
	int n = rand()%25 + 2;
	int m = rand()%25 + 1;
	fout<<n<<" "<<m<<endl;
    bool vis[n][n] ={0};
    while(m)
    {
        int a = rand()%n;
        int b = rand()%n;
        int c = rand()%2;
        if(a==b)
            continue;
        if(vis[a][b])
            continue;
        vis[a][b] = true;
        fout<<a<<" "<<b<<" "<<c<<endl;
        m--;
    }
	}

	return 0;

}
