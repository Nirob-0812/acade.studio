#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c,d,p;
    scanf("%d%d%d%d",&a,&b,&c,&d);
	a-=c;b-=c;d-=c-1; p=0;
	if(d==2) a--,b--,p=3;
	if(d==1)
		if(a) a--,p=1;
		else b--,p=2;
	if(a<0 || b<0 || d>2 || d<0)
		return puts("-1");
	if(p&2) printf("7");
	for(int i=0;i<a;i++) printf("4");
	for(int i=0;i<c;i++) printf("47");
	for(int i=0;i<b;i++) printf("7");
	if(p&1) printf("4");
	printf("\n");
 
    return 0;
}