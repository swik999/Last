#include<iostream>
#include<set>

using namespace std;

int count(int a[], int b){
	set<int> mySet;
	for(int i = 0;i < b;i++){
		mySet.insert(a[i]);
	}
	return mySet.size();
}

