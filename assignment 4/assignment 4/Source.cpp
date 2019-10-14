#include <iostream>
#include <cstring>
#include <cctype>
using namespace std; 

/*int mystery(int n) {
	if (n == 0) {
		return 0;
	}
	else
		return n * n + mystery(n - 1); 
}

int main() {

	cout<< mystery(4); 
	
	return 0; 
}
*/
/*
int to_number(string x,int i) {
	
		if (x == "" || x.size() == 0) {
			return 0; 
		}
		int sum = 0;
		if (isdigit(x[i]))
		{
			sum += x.at(i) - 48;
			return to_number(x, i++);
		}
		else
			return to_number(x, i++); 
	
}

int main()
{
	string a= "2a7d4";
	int sum=to_number(a,0);
	cout << "This is the sum" <<sum; 

	return 0; 

}
*/
/*#include<bits/stdc++.h>

using namespace std;

// Recursive function to

// search x in arr[l..r]

int recSearch(vector<int> arr, int l,

      int r, int x)

{

  if (r < l)

    return -1;

if (arr[r] == x)

    return r;

  if (arr[l] == x)

    return l;

  return recSearch(arr, l + 1, r - 1, x);

}

// Driver Code

int main()

{

  vector<int> arr{12, 34, 54, 2, 3, 2, 1, 3}, i;

  int n = 8;

  int x = 3;

  int index = recSearch(arr, 0, n - 1, x);

  if (index != -1)

  cout << "Element " << x

    << " is present at index "

    << index;

  else

    cout << "Element" << x

      << " is not present" ;

  return 0;

}
*/
/*
#include <iostream>

using namespace std;

int to_number(string s)
{
	//int isdigit();
	if (s == " " || s.length() == 0) {
		return 0;
	}
	char next = s.string::at(0);
	if (std::isdigit(next) == true) {
		return next - '0' + to_number(s.string::substr(1));
	}
	else {
		return to_number(s.string::substr(1));
	}
}
int main()
{
	string s;
	cout << "Enter string.\n";
	cin >> s;
	cout << to_number(s) << endl;
	system("pause");
}
*/
