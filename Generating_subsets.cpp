#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> subset;
void print_vector(vector<int> array){
	for(int i = 0; i < array.size();i++){
		cout << array[i] << " ";
	}
	cout << "\n";
}

void search(int k) {
	if (k == n+1){
		print_vector(subset);
	} else{
		subset.push_back(k);
		search(k+1);
		subset.pop_back();
		search(k+1);
	}
}
int main() {
	cout << "Enter the value of n : ";
	cin >> n;
	search(1);
}
