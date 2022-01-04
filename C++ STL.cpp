#include <bits/stdc++.h> 
using namespace std; 

struct node {
	string str; 
	int num;
	double doub; 
	char x; 

	node(str_, num_, doub_, x_) {
		str = str_; 
		num = num_; 
		doub = doub_; 
		x = x_; 
	}
};
array<int, 3> arr; // -> {0, 0, 0} 

// max size of 10^7 -> int, double, char 
int arr[10000000];

// max size of 10^8 -> bool
bool arr[100000000]; 

bool comp(int el1, int el2) {
	if(el1 <= el2) {
		return true; 
	}
	return false; 
}

bool comp(pair<int,int> el1, pair<int,int> el2) {
	if(el1.first < el2.first) {
		return true; 
	}
	if(el1.first == el2.first) {
		if(el1.second > el2.second) {
			return true; 
		}
	}
	return false; 
}
 
// arr 
// pair<int,int> arr[] = {{1, 4},{5, 2},{5, 9}};
// after sorting arr[] = {{1, 4}, {5, 9}, {5, 2}}
sort(arr, arr+3, comp); 

// sorts in ascending according to first 
// if first is equal then sorts according to second in ascending 
sort(arr, arr+3);
// i want you to sort this in such a way 
// that the element who have first element in pair smaller
// appears first, and if first is equal then sort according 
// to second and keep the larger second







int main() {

	// max size of 10^6 -> int, double, char 
	int arr[1000000]; 


	// max size of 10^7 -> bool
	bool arr[10000000]; 

	double val = 10.0;
	cout << val << endl; // prints 10.0 

	cout << raj::getVal() << endl; // prints 50 


	int 
	double 
	char
	

	// create a data type where you store 
	{string, int, double, char} 


    // wrong way of defining 
	node raj; 
	raj.str = "striver"; 
	raj.num = 79; 
	raj.doub = 91.0; 

	node *raj = new node("striver", 79, 91.0, ""); 
	node raj = node("striver", 79, 91.0, ""); 

	{arr[], int, double}; 



	// Arrays -> int arr[100]; 


	array<int, 3> arr;  // -> {?, ?, ?}


	array<int, 5> arr = {1}; // -> {1, 0, 0, 0, 0}


	int arr[10000] = {0}; 



	array<int, 5> arr; 
	arr.fill(10); -> /// {10, 10, 10, 10, 10} 


	arr.at(index); 

	for(int i = 0;i<5;i++) {
		cout << arr.at(i) << " "; 
	}


	// iterators 
	// begin(), end(), rbegin(), rend() 

	// 

	array<int, 5> arr = {1, 3, 4, 5, 6}; 
	for(auto it = arr.begin(); it!=arr.end();it++) {
		cout << *it << " "; 
	}



	for(auto it = arr.rbegin(); it>arr.rend();it++) {
		cout << *it << " "; 
	}

	for(auto it = arr.end() - 1; it>=arr.begin();it--) {
		cout << *it << " "; 
	}

	// for each loop 
	for(auto it: arr) {
		cout << it << " "; 
	}

	string s = "xhegcwe"; 
	// x h e g c w e 
	for(auto c:s) {
		cout << c << " "; 
	}


	// size 
	cout << arr.size(); 

	// front 
	cout << arr.front(); // arr.at(0); 

	// back
	cout << arr.back(); // arr.at(arr.size() - 1); 




	// VECTOR 

	int arr[50];

	// segmentation fault if you push_back 10^7 times

	vector<int> arr; // -> {}
	cout << arr.size() << endl; // -> print 0 
	arr.push_back(0); // {0}
	arr.push_back(2); // {0,2}
	cout << arr.size() << endl; // -> print 2
	arr.pop_back(); // {0}
	cout << arr.size() << endl; // print 1  

	arr.push_back(0); // {0,0}
	arr.push_back(2); // {0,0,2}


	vec.clear(); // --> erase all elements at once {}


	vector<int> vec1(4, 0); // -> {0,0,0,0}
	vector<int> vec2(4, 10); // -> {10,10,10,10}

	// copy the entire vec2 into vec3
	vector<int> vec3(vec2.begin(), vec2.end()); // -> [)
	vector<int> vec3(vec2); 



	vector<int> raj;
	raj.push_back(1); // raj.emplace_back(1); // emplace_back takes lesser time than push back 
	raj.push_back(3); 
	raj.push_back(2); 
	raj.push_back(5); // -> {1, 3, 2, 5} 

	vector<int> raj1(raj.begin(), raj.begin() + 2);  // -> {1, 3}  


	// lower bound , upper bound 

	// swap swap(v1, v2) 
	// begin(), end(), rbegin(), rend() 


	// to defining 2d vectors 

	vector<vector<int>> vec; 

	vector<int> raj1;
	raj1.push_back(1); 
	raj1.push_back(2); 

	vector<int> raj2;
	raj2.push_back(10); 
	raj2.push_back(20); 

	vector<int> raj3;
	raj3.push_back(19); 
	raj3.push_back(24); 
	raj3.push_back(27); 

	vec.push_back(raj1); 
	vec.push_back(raj2); 
	vec.push_back(raj3); 

	// it is vector itself 
	for(auto vctr: vec) {
		for(auto it: vctr) {
			cout << it << " "; 
		}
		cout << endl; 
	}


	for(int i = 0;i<vec.size();i++) {
		for(int j = 0;j<vec[i].size();j++) {
			cout <<  vec[i][j] << " "; 
		}
		cout << endl; 
	}


	// define 10 x 20 
	vector<vector<int>> vec(10, vector<int> (20, 0)); 
	vec.push_back(vector<int>(20, 0)); 
	cout << vec.size() << endl; // 11 prints

	vec[2].push_back(1); 


	vector<int> arr[4]; 
	arr[1].push_back(0); 


	// 10 x 20 x 30 // int arr[10][20][30] 
	vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(20, vector<int> (30, 0));)



	// 2nd day 

	// arrays vectors struct 

	// set map 

	// set 

	// given n elements, tell me the number of unique elements 
	arr[] = {2, 5, 2, 1, 5} // 3 unique elements -> {1. 2. 5}

	set<int> st; 
	int n;
	cin >> n;
	for(int i = 0;i<n;i++) {
		int x;
		cin >> x; 
		st.insert(x); // log N 
	}

	cout << st.size(); 

	// st -> {1, 2, 5}
	// erase functionality 
	// log n 
	st.erase(st.begin()); // st.erase(iterator) // st -> {2, 5}

	// log n 
	// 77777777777
	st.erase(st.begin(), st.begin() + 2); // -> [) st ->{5}
	// st.erase(startIterator, endIterator) 

	st.erase(5) // st.erase(key) // delete the 5 -> {1, 2}


	set<int> st = {1, 5, 7, 8}; 

	auto it = st.find(7); // log n // it will be iterator to 7

	auto it = st.find(9); // it = st.end(); 

	st.emplace(6); // st.insert(6) 

	cout << st.size() << endl; 


	set<int> st; 
	st.insert(5); // -> {5}
	st.insert(5); // -> {5}

	for(auto it=st.begin(); it!=st.end();it++) {
		cout << *it << " "; 
	}

	for(auto it : st) {
		cout << it << endl; 
	}

	// delete the entire set 
	st.erase(st.begin(), st.end()); // makes sure the entire set is deleted 



	unordered_set<int> st; 

	st.insert(2); 
	st.insert(3);
	st.insert(1); 

	// average time complexity is O(1) 
	// tle -> switch to set 
	// but the worst case is linear in nature, O(set size)

	multiset<int> ms; 

	ms.insert(1); 
	ms.insert(1); 
	ms.insert(2); 
	ms.insert(2); 
	ms.insert(3); // ms.emplace(3) 
	// st -> {1, 1, 2, 2, 3}

	ms.erase(2); // all the instances will be erased 

	auto it = ms.find(2); // returns an iterator pointing to the first element of 2 
	ms.clear(); // deleted the entire set 
	ms.erase(ms.begin(), ms.end()); // deletes the entire set 
	// log n in size  


	for(auto it=st.begin(); it!=st.end();it++) {
		cout << *it << " "; 
	}

	for(auto it : st) {
		cout << it << endl; 
	}
	// finds how many times 2 occurs 
	st.count(2); 


	ms.erase(ms.find(2)); 
	ms.erase(ms.find(2), ms.find(2) + 2); 




	// Key Value 
	// raj -> 27 
	// hima -> 31 
	// sandeep -> 67 
	// tank -> 89 
	// map only stores unique keys 
	// log n is the tc of map 
	map<string, int> mpp; 
	mpp["raj"] = 27; 
	mpp["hima"] = 31; 
	mpp["praveer"] = 31;
	mpp["sandeep"] = 67; 
	mpp["tank"] = 89; 
	mpp["raj"] = 29; 
	mpp.emplace("raj", 45); 
	mpp.erase("raj"); // mpp.erase(key) 
	mpp.erase(mpp.begin()); // mpp.erase(iterator)
	mpp.clear(); // entire map is cleaned up
	mpp.erase(mpp.begin(), mpp.begin()+2); // cleans up a given range
	auto it = mpp.find("raj"); // points to where raj lies 
	auto it = mpp.find("simran"); // points to end since she does not exists 

	if(mpp.empty()) {
		cout << "Yes it is empty"; 
	}
	mpp.count("raj"); // always returns 1 as it stores only 1 
	// instance of raj 

	pair<int,int> pr;
	pr.first = 1; 
	pr.second = 10; 

	// printing map 
	for(auto it: mpp) {
		cout << it.first << " " << it.second << endl; 
	}

	for(auto it = mpp.begin(); it!=mpp.end();it++) {
		cout << it->first << " " << it->second << endl; 
	}

	// does not stores in any order 
	unordered_map<int,int> mpp; 
	// unordered_map<pair<int,int>,int> mpp; xxxxxx
	// o(1) in almost all cases
	// o(n) in the worst case, where n is the container size 


	// Pair class 
	pair<int,int> pr = {1,2}; 
	pair< pair<int,int>, int> pr = {{1,2}, 2}; 
	cout << pr.first.second << endl;
	pair<pair<int,int>, pair<int,int>> pr = {{1,2},{2, 4}};
	cout << pr.first.first; -> 1 
	cout << pr.second.second; -> 4 

	vector<pair<int,int>> vec; 
	set<pair<int,int>> st; 
	map< pair<int,int>, int> mpp; 



	multimap<string, int> mpp;
	mpp.emplace("raj", 2); 
	mpp.emplace("raj", 5); 




	// Stack and Queue 
	stack<int> st; // lifo ds 
	// pop 
	// top 
	// size 
	// empty 
	// push and emplace 

	st.push(2); 
	st.push(4); 
	st.push(3); 
	st.push(1); 


	cout << st.top() // prints 2 
	st.pop(); // deletes the last entered element 
	cout << st.top(); // prints 3 
	st.pop(); 
	cout << st.top(); 

	bool flag = st.empty(); // returns true if stack is empty, or false

	// deleted the entire stack 
	while(!st.empty()) {
		st.pop(); 
	}

	cout << st.size() << endl; // number of elements in the stack 

	stack<int> st; 
	if(!st.empty()) {
		cout << st.top() << endl; // throw error 
	}


	// queue // fifo operation ds 
	// push 
	// front
	// pop 
	// size 
	// empty 

	queue<int> q; 
	q.push(1); 
	q.push(5);
	q.push(3); 
	q.push(6); 

	cout << q.front();; // prints 1 
	q.pop(); 
	cout << q.front(); // prints 5 

	// linear time 
	while(!q.empty()) {
		q.pop(); 
	}
	queue<int> q;
	for(int i = 0;i<10;i++) q.push(i); 



	// priority_queue 
	// push 
	// size 
	// top pop empty 
	priority_queue<int> pq;
	pq.push(1); 
	pq.push(5); 
	pq.push(2); 
	pq.push(6); 

	cout << pq.top(); // print 6 
	pq.pop(); 
	cout << pq.top(); // print 5 

	priority_queue<pair<int,int>> pq;
	pq.push(1, 5); 
	pq.push(1, 6); 
	pq.push(1, 7); 

	priority_queue<int> pq;
	pq.push(-1); // pq.push(-1 * el); 
	pq.push(-5); 
	pq.push(-2); 
	pq.push(-6); 

	cout << -1 * pq.top() << endl; // prints 1

	// min priority queue is 
	priority_queue<int, vector<int>, greater<int>> pq; 
	pq.push(1); 
	pq.push(5); 
	pq.push(2); 
	pq.push(6); 

	cout << pq.top() << endl; // prints 1 



	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq; 


	dequeue<int> dq; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 


	list<int> ls; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
	// remove -> O(1) 
	ls.push_front(1); 
	ls.push_front(2); 
	ls.push_front(3);
	ls.remove(2); -> // o(1) operation 



	// given N elements, print the elements that occurs maximum 
	// number of times 
	// input 
	// 5 
	// 1 3 3 3 2 

	// output 
	// 3


	int n;
	cin >> n; 
	map<int,int> mpp; 
	int maxi = 0; 
	for(int i = 0;i<n;i++) {
		int x;
		cin >> x;
		mpp[x]++; 
		if(mpp[x] > mpp[maxi]) {
			maxi = x; 
		}
	}
	cout << x << endl; 



	// given N elements, print all elements in sorted order 
	// input 
	// n = 6 
	/// 6 6 3 2 3 5 

	// output 
	// 2 3 3 5 6 6 

	int n;
	cin >> n;
	multiset<int> ms; 
	for(int i=0;i<n;i++) {
		int x;
		cin >> x; 
		ms.insert(x); 
	}

	for(auto it : ms) {
		cout << it << endl; 
	}




	// Day 3 
	// Bitset 
	// int -> 16 bits 
	// char -> 8 bits
	int a[100]; 
	char a[100]; 

	// bitset -> 1 bit

	bitset<5> bt; // stores 1 or 0 
	cin >> bt; // 10111

	// all 
	// true // false
	cout << bt.all(); // returns a true or a false

	// any 
	// true 
	cout << bt.any(); // bt -> 10011

	// false
	cout << bt.any(); // bt -> 00000

	// count 
	// for bt -> 10100
	// prints 2 
	cout << bt.count(); // print the number of set bits

	// flip 
	// bt -> 10100
	bt.flip(2); // bt will become 10000

	bt.flip(); 

	// none 
	// if none is set, then true, else false 
	// bt -> 10000
	cout << bt.none(); // false 

	// bt -> 00000
	cout << bt.none(); //true 

	// set 
	bt.set(); // 11111 

	bt.set(2); // sets the 2nd index

	bt.set(2, 0); 


	// reset 
	bt.reset() // turn all indexes to 0 

	bt.reset(2); // turn the 2nd index to 0 

	// size 
	cout << bt.size(); // prints 5 

	// test 

	cout << bt.test(1); // check if the bit is set or not at index  1


	// Algorithms 
	// sorting 
	// array, vector 
	int n;
	cin >> n; 
	int arr[n]; 
	for(int i = 0;i<n;i++) cin >> arr[i]; 
	// takes n log n 
	sort(arr, arr+n); // in increasing order  
	// sort from 1 to 3 
	sort(arr + 1, arr + 4); 
    
    vector<int> vec(5, 0);
    for(int i = 0;i<n;i++) {
    	cin >> vec[i]; 
    }

    sort(vec.begin(), vec.end()); // [)

    // vec -> {1, 6, 2, 7, 4} 
    //         0  1  2  3  4 
    // sort it so that only indexes from 1 to 3  
    // final vec -> {1, 2, 6, 7, 4}
    sort(vec.begin() + 1, vec.begin() + 4); // [1, 4)


    // If I wanna reverse
    // reverse(startIterator, endIterator) -> [)  
    reverse(arr, arr+n); 

    reverse(arr + 1, arr + 4); 

    reverse(vec.begin(), vec.end()); 

    reverse(vec.begin() + 1, vec.begin() + 4); 



    // If i want to fine the maximum elements in any index range 
    // i to j give me the maximum 

    // *max_element(firstIterator, lastIterator); 
    int maxi = INT_MIN; 
    for(int k = i;k<=j;k++) {
    	if(a[k] > maxi) {
    		maxi = a[k]; 
    	}
    }


    int el = *max_element(arr, arr+n); 
    int el = *min_element(arr, arr+n); 


    int el = *max_element(vec.begin(), vec.end()); 
    int el = *min_element(vec.begin(), vec.end()); 



    // I give you a range and I want you to find the sum in that range 
    // i - j, tell me the sum in that range i to j 
    int sum = 0;
    for(int k = i;k<=j;k++) {
    	sum += arr[k]; 
    }

    // accumulate(startIterator, endIterator, initialSum);
    int sum = accumulate(arr, arr+n, 0); 
    int sum = accumulate(vec.begin(), vec.end(), 0);


    // arr[] -> [1, 6, 7, 1, 2, 1, 3] 
    // x = 1 
    // tell me how many times the element 1 occurs in the array 
    int cnt = 0;
    // O(N)
    for(int i = 0;i<n;i++) {
    	if(arr[i] == x) {
    		cnt++; 
    	}
    } 
    cout << cnt; 

    /// count(firstIterator, lastIterator, x) 
    int cnt = count(arr, arr+n, 1);
    int cnt = count(vec.begin(), vec.end(), 1); 


    // arr[] -> {1, 2, 5, 1, 2, 4, 4} 
    // i want you to find the first occurrence of 2
    // it is in the index 1 

    int ind = -1; 
    for(int i = 0;i<n;i++) {
    	if(arr[i] == x) {
    		ind = i;
    		break;
    	}
    }
    cout << ind;


    // arr[] -> {1, 2, 5, 1, 2, 4, 4} 
    auto it = find(arr, arr+n, 2); // return an iterator 
    // pointing to the first instance of it, or else it 
    // returns pointing to the end() if it is not there 

    int ind = it - arr; 


    auto it = find(vec.begin(), vec.end(), 2); 
    int ind = it - vec.begin(); 


    // arr[] -> {1, 5, 6, 2, 3, 5, 6}
    // x = 4 
    auto it = find(vec.begin(), vec.end(), 4); 
    if(it == vec.end()) {
    	cout << "element is not present"; 
    }
    else {
    	cout << "Element is first present at: " << it - vec.begin(); 
    }


    // binary search 
    // this stl only works on SORTED arrrays
    // arr[] -> {1, 5, 7, 9, 10} 
    // x = 9
    // true -> 9 exists in my arr 
    // x = 8 
    // false -> 8 does not exist in my arr 


    // binary_search(firstIterator, lastIterator, x)
    // returns a true or returns a false 
    // works in log n complexity 
    bool res = binary_search(arr, arr+n, 8); 
    bool res = binary_search(vec.begin(), vec.end(), 8); 



    // lower_bound function 
    // returns an iterator pointing to the first
    // element which is not less than x 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 10 
    // x = 6 
    // x = 13 
    // this works in log N 

    auto it = lower_bound(arr, arr+n, x); 
    ind = it - arr; 

    auto it = lower_bound(vec.begin(), vec.end(), x); 
    int ind = it - vec.begin();

    int ind =  lower_bound(vec.begin(), vec.end(), x) - vec.begin(); 



    // upper bound 
    // returns an iterator which points to an element which is 
    // just greater than x
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // x = 7 
    // x = 6 
    // x = 12 -> end() iterator 
    // x = 15 -> end() iterator 

    auto it = upper_bound(arr, arr+n, x); 
    ind = it - arr; 

    auto it = upper_bound(vec.begin(), vec.end(), x); 
    int ind = it - vec.begin();

    int ind =  upper_bound(vec.begin(), vec.end(), x) - vec.begin();



    // Q1. find me the first index where the element X lies 
    // find function can be used but that takes O(N) times
    // the array is sorted.. 

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++) {
    	cin >> arr[i]; 
    }

    int x; 
    cin >> x; 

    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    // find x = 7
    int ind = lower_bound(arr, arr+n, x) - arr; 

    // find x = 6 
    int ind = lower_bound(arr, arr+n, x) - arr;



    // There are couple of ways to do it
    // 1st way 
    if(binary_search(arr, arr+n, x) == true) {
    	cout << lower_bound(arr, arr+n, x) - arr; 
    }
    else cout << "does not exists"; 


    // 2nd way 
    int ind = lower_bound(arr, arr+n, x) - arr; 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    /////////////0  1  2  3  4  5   6   7   8   9   10 
    // find x = 13 -> ind = 11, which is out of bound 
    // hence arr[11] will give you runtime error 
    if(ind != n && arr[ind] == x) {
    	cout << "Found at: " << ind;  
    }
    else {
    	cout << "Not found";
    }



    // Find me the last occurrence of x in an arr 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    ///index/////0  1  2  3  4  5   6   7   8   9   10 

    // last occurrence of x = 10, ans = 7th index
    // last occurrence of x = 6, ans = does not exists
    // last occurrence of x = 0, 
    // last occurence of x = 13 
    int ind = upper_bound(arr, arr+n, x) - arr; 
    ind -= 1; 
    if(ind>=0 && arr[ind] == x) {
    	cout << "last occurrence: " << ind; 
    }
    else {
    	cout << "Does not exists"; 
    }




    // Q3. tell me the number of times the x appears in arr 
    // arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12} 
    ///index/////0  1  2  3  4  5   6   7   8   9   10 

    // x = 10, ans = 3 
    // x = 7, ans = 2 


    // Next Permutation 
    // string s = "abc"
    // all permutations are as follows: 

    // abc
    // acb 
    // bac
    // bca
    // cab
    // cba



    // s = "bca" 
    bool res = next_permutation(s.begin(), s.end()); 

    // s = "cba"
    bool res = next_permutation(s.begin(), s.end()); 

    // if I give you any random string s = "bca"
    // i want you to print all the permutations 

    string s = "bca"; 
    sort(s.begin(), s.end()); // this makes the string as "abc"
    do {
    	cout << s << endl; 
    } while(next_permutation(s.begin(), s.end())); 


    int arr[] = {1, 6, 5}; 
    int n = 3; 
    sort(arr, arr + n); // this makes the array as {1, 5, 6}
    do {
    	for(int i = 0;i<n;i++) cout << arr[i] << " "; 
    	cout << endl; 
    } while(next_permutation(arr, arr+n)) ; 


    // prev permutation 
    bool res = prev_permutation(s.begin(), s.end()); 


    // COMPARATOR 
    sort(arr, arr+n); // sorts everything in ascending order
    sort(arr, arr+n, comp); 


    // descending 
    sort(arr, arr+n, comp); 
    // greater<int> is an inbuilt comparator
    // which works only if you wanna do this in descending 
    sort(arr, arr+n, greater<int>); 



    // question of pair 
    sort(arr, arr+n, greater<pair<int,int>>);


    vector<vector<int>> vec(n, vectorM<int>(n, 0)); 



}





/*---------------------------------------------------Vector STL/Function----------------------------------------------------------
 * vlli v2(v.begin(),v.begin()+size);
 * vlli v2(v)
 * sort(v.begin().v.end())
 * reverse(v.begin(),v.end())
 * (bool) binary_search(v.begin(),v.end(),key)
 * (iterator) lower_bound(v.begin(),v.end(),key);
 * (iterator) upper_bound(v.bein(),v.end(),key);
 * (iterator) v.lower_bound(key);
 * (iterator) v.upper_bound(key);
 * v.erase(v.begin()+i)
 * v.erase(unique(v.begin(),v.end()),v.end())
 * v.erase(v.begin()+i,v.end()-j)  ||    v.erase(v.begin(),v.begin()+j)
 * v.erase(remove(v.begin(),v.end(),data),v.end())  //erase  all the 'data' from the vector
 * (bool)next_premutation(v.begin(),v.end())
 * (bool)prev_premutation(v.begin(),v.end())
 * v.insert(it,data) || v.insert(i,data)
 * v.insert(it,no_of_times,data) || v.insert(i,no_of_times,data)
 *
 * v.push_back(data),v.pop_back(data),(data) v.front() ,(data) v.back() ,(data) v[index] ,(iterator) v.begin() ,(iterator) v.end()
 * (lli) max_e(v) ,(lli)min_e(v) ,lli fmax_i(v) ,lli lmax_i(v) ,lli fmin_i(v) ,lli lmin_i(v)
 */
 
/*--------------------------------------------------Vector of pairs----------------------------------------------------------------
 * vector<pair<key_type,data type>> vp
 * vp.push_back(make_pair(key,data))
 *
 * sort by key/first element (then data/second)
 * sort(vp.begin(),vp.end())
 *
 * sort by sec element(only by sec)
 * bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
 * {
 *       return (a.second < b.second);
 * }
 * sort(vp.begin(),vp.end(),sortbysec)
 *
 * (data) vp[i].first ,(data) vp[i].second ,
 */
 
/*----------------------------------------------String Manupulation -------------------------------------------------------------
 * string str2(str1)
 * string str2(str1.begin(),str1.begin()+length)
 * string s=str.substr(starting_index,length)
 * s.erase(s.begin()+index)
 * s.erase(s.begin()+index,s.end()-index)  ||  s.erase(s.begin()+index(),s.begin()+index)
 * s.erase(unique(s.begin(),s.end()),s.end())  ::adjecent will not be same
 * sort(s.begin(),s.end());
 * reverse(s.begin(),s.end())
 * str.erase(remove(str.begin(),str.end(),'ch'),str.end()); //erase all the 'ch' from string
 * str.insert(it,'ch')  ||  str.insert(i,'ch')
 * str.insert(it,no_of_times,'ch') ||  str.insert(i,no_of_times,'ch')
 *
 * getline(cin,string_name)
 * stringstream(string_name)>>type1_>>type2_>>type3_.........>>typeN_;
 * stringstream STREAM_name(string_name)
 * STREAM_name>>type1_>>type2_>>type3>>type4_>>type5_;
 * s=to_string(2018)
 */
 
/* -------------------------------------------------STACK------------------------------------------
 * stack<data_type>s
 * push()              :s.push(data)           :O(1)
 * pop()               :s.pop()                :O(1)
 * top()               :s.top()                :O(1)
 * empty()             :s.empty()              :O(1)
 * size()              :s.size()               :O(1)
 */
 
/* -------------------------------------------------QUEUE------------------------------------------
 * queue<data_type>q
 * push()               :q.push(data)          :O(1)
 * pop()                :q.pop()               :O(1)
 * front()              :q.front()             :O(1)
 * back()               :q.back()              :O(1)
 * empty()              :q.empty()             :O(1)
 * size()               :q.size()              :O(1)
 */
 
/*------------------------------------------ priority_queue(default MAX HEAP)-------------------------------
 * priority_queue(data_type>pq
 * push()               :pq.push(data)         :O(log(n))
 * pop()                :pq.pop()              :O(long(n))
 * top()                :pq.top()              :O(1)
 * size()               :pq.size()             :O(1)
 * empty()              :pq.empty()            :O(1)
 */
 
/*-------------------------------SET:Element in sorted order(increasing) and UNIQUE*****----------------------
 * declaration     :set<lli>s
 * insertion       :s.insert(data)  //insert if it is not present     :O(log(n))
 * size            :s.size()                                          :O(1)
 * find            :auto it=s.find(data) //if it!=s.end -> data found :O(log(n))
 * s.lower_bound() :it=s.lower_bound(data)
 * s.upper_bound() :it=s.upper_bound(data)
 * lower_bound()   :it=lower_bound(s.begin(),s.end(),data)
 * upper_bound()   :it=upper_bound(s.begin(),s.end(),data)
 * erase()         :erase(it)
 * erase()         :s.erase(it1,it2)
 * s.erase()       :s.erase(data)
 * loop            :for(auto it=s.begin();it!=s.end();it++)
 */
 
/*------------------------------------------MAP:Elemnet r SORTED,unlike set we insert (key and data)--------------------------
 * declaration   :map<key_type,data_type>m
 * insert        :m.insert(make_pair(key,data));                     :O(log(n))
 *               :m.insert(pair<type,type>(key,data))
 * find          :auto it=m.find(key) //if(it!=m.end)it->first=key   :O(log(n))
 * []            :m[key]++      //data=data+1 ,at that key           :O(log(n))
 * size          :m.size()                                           :O(1)
 * m.lower_bound :it=m.lower_bound(key)
 * m.upper_bound :it=m.lower_bound(key)
 * lower_bound   :it=lower_bound(m.begin(),m.end(),key)
 * upper_bound   :it=upper_bound(m.begin(),m.end(),key)
 * erase()       :s.erase(it)
 *               :s.erase(it1,it2)
 *               :s.erase(key)
 * loop          :for(auto it=m.begin();it!=s.end();it++)
 *
 * it->first ,it->second ,
 */
 
/*------------------------------------------Unorderd SET  :Elements in unsorted order(used hasing to store data)------------------------------------
 * declaration   :unordered_set<lli>s
 * insertion     :s.insert(data)                                     :O(1)
 * size          :s.size()                                           :O(1)
 * find          :auto it=s.find(data)//if it!=s.end ->data found    :O(1)     ||  worst case O(n)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */
 
/*Unordered MAP :Element r UNSORTED,unlike unordered set we insert (key and data)||
 * declaration   :unorderd_map<key_type,data_type> m
 * insert        :insert(make_pair(key,data))                        :O(1)
 * find          :auto it=m.find(key) //if (it!=m.end)it->first=key  :O(1)
 * []            :m[key]++      //data=data+1 ,at that key           :O(1)
 * size          :m.size()                                           :O(1)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */
 
/* muti_set             :similar to set but have duplicate element
 * multi_set<data_type>ms
 * insert()               :ms.insert(data)         :O(log(n))
 * find()                 :auto it=ms.find(data)   :O(long(n))
 * size()                 :ms.size()               :O(1)
 */
 
/* multimap              :similar to MAP but can have duplicate keys  :search O(logn):insert O(logn):delete O(logn)
 * mulimap<key_type,data_type>mm
 * mm.insert(pair<key_type,data_type>(key,data))        :O(long(n))
 * multimap<key_type,data_type> mm2(mm.begin(),mm.end())
 * find()                :it=mm.find(key)  //first it   :O(long(n))
 * mm.lower_bound(key)->second //data      mm.lower_bound(key)=it  1st elemet having the key  or mm.end()
 * mm.upper_bound(key)->second //data      mm.upper_bound(key)=it  1st element just after the key or mm.end()
 * mm.erase(key)         :erase all element of the key value
 * mm.erase(mm.begin(),mm.find(key))    :remove all having(key) less than the given key
 * mm.size()                                             :O(1)
 * for(auto it=mm.begin();it!=mm.end;it++)     :traversal
 */
/*__________________________________________________________________________________________________________________________________________________*/
 
// If you want to just put all the worlds of a paragraph in database use VECTOR
// If you want to make dictionary of the words in paragraph use SET
// If you want to calculate frequency of each words in paragraph use MAP
 
/*____________________________________________________________________________________________________________________________________________________*/
 
/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * boundary cases
 * do something instead of nothing and stay organized.
 * BELIEVE in yourself.
 */
/* some basic stuff that you should learn:
        * Sets : Unique element container.
            * set<int,greater<int> > s; // to order the set in descending order
            * To check if an element is in a set : s.count(x)  || s.find(x)!=s.end()
            * begin() - returns an iterator to first element of set. The value of the element can be accessed using *(s.begin())
            * end() - Returns an iterator to the theoretical element that follows last element in the set.
            * size() - Returns the number of elements in the set.
            * max_size() - Returns the maximum number of elements that the set can hold.
            * empty() - Returns whether the set is empty.
            * find(x) - Returns an iterator to the element ‘x’ in the set if found, else returns the iterator to end.
            * erase(x)– Removes the value ‘x’ from the set. It erases an element by value
            * count(x) - Returns 1 or 0 based on the element ‘x’ is present in the set or not. It's the best way to check for the presence of an element.
            * lower_bound(x) – Returns an iterator to the first element that is equivalent to ‘x’ or definitely will not go before the element ‘x’ in the set.
              lower_bound can also be thought as the smallest element greater than or equal to x
            * Return reverse iterator to reverse beginning: (s.rbegin())
            * Set to be sorted in decreasing order: set<int, greater<int> >
            * emplace() : If the function successfully inserts the element (because no
                    equivalent element existed already in the set), the function returns a
                    pair of an iterator to the newly inserted element and a value of true.
            * const bool is_in = s.find(x) != s.end(); check if an element is in the set.
            * myset.erase(x) #directly by value. logarithmic complexity
            * myset.erase(iteratortoanelement,s.end())
            * for_each(all(s),do_something);
            * set<int> :: iterator it = myset.find(60);
 
        * Vectors
            vector<int> v; v.resize(n,0); // resizes the vector and initializes it too.
            front(), back(), push_back(), pop_back()
            * begin() - Returns an iterator pointing to the first element in the vector
            * end() - Returns an iterator pointing to the theoretical element that follows the last element in the vector
            * rbegin() - Returns a reverse iterator pointing to the last element in the vector (reverse beginning).
            * rend() - Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector
            * cbegin(),cend(),crbegin(),crend()
            * size() - Returns the number of elements in the vector.
            * max_size() -  Returns the maximum number of elements that the vector can hold.
            * capacity() - Returns the size of the storage space currently allocated to the vector expressed as number of elements.
            * resize() - Resizes the container so that it contains ‘n’ elements.
            * empty() - Returns whether the container is empty.
            * shrink_to_fit() - Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
            * reserve() - Requests that the vector capacity be at least enough to contain n elements.
            * [i] - Returns a reference to the element at position ‘i’ in the vector
            * at(i) - Returns a reference to the element at position ‘i’ in the vector
            * front() - Returns a reference to the first element in the vector
            * back() - Returns a reference to the last element in the vector
            * data() - Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
            * assign() - It assigns new value to the vector elements by replacing old ones
            * push_back() - It push the elements into a vector from the back
            * pop_back() - It is used to pop or remove elements from a vector from the back.
            * insert() - It inserts new elements before the element at the specified position
            * erase() - It is used to remove elements from a container from the specified position or range
            * swap() - It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
            * clear() - It is used to remove all the elements of the vector container
            * emplace() - It extends the container by inserting new element at position
            * emplace_back() - It is used to insert a new element into the vector container, the new element is added to the end of the vector
            * for (auto it = myvector.begin(); it != myvector.end(); ++it)
 
        * Queue
            * empty() - Returns whether the queue is empty.
            * size() - Returns the size of the queue.
            * emplace() - Insert a new element into the queue container, the new element is added to the end of the queue.
            * front() - front() function returns a reference to the first element of the queue.
            * back() - returns a reference to the last element of the queue.
            * push(x) - adds the element ‘x’ at the end of the queue
            * pop() - deletes the first element of the queue
 
        * Priority_Queue
            priority_queue <int, vector<int>, greater<int>> pq; // to make a priority queue in descending order
            * empty() - returns whether the queue is empty.
            * size() -  returns the size of the queue.
            * top() -  Returns a reference to the top most element of the queue
            * push(x) - adds the element ‘x’ at the end of the queue.
            * pop() -  deletes the first element of the queue.
            * swap() -  swap the contents of one priority queue with another priority queue of same type and size.
            * emplace() - insert a new element into the priority queue container, the new element is added to the top of the priority queue.
 
        * Deque
            Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
            They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
            Unlike vectors, contiguous storage allocation may not be guaranteed.
            * insert()
            * rbegin()
            * rend()
            * assign()
            * resize()
            * push_front()
            * push_back()
            * pop_front()
            * pop_back()
            * front()
            * back()
*/
 
/* main remembering points
1) switch statements cannot be applied on strings and float in c++
2) set method is slower than map to count unique numbers
3) we should either use vector or initialize our array =0 or for every structure we should iniialize them to 0
4) we should always check the base conditions first at every point of code to make simpler might be in terms of space allocation only.
5) to completely read the input of the stdin or console use getline(cin,string s) to get whole thing of the line this helps in identifying that the end of line has came
6) The second way to initialize is to use fill other than memset.
7) Never use memset(,,n*sizeof(ll)) since ll is a macro and not a variable.
8) The main idea see the link : https://codeforces.com/contest/1475/problem/D This tolds how to divide array based on value and how to use it .'
9) Sometimes we need to use the element of the array as our indices for the array to store their count.
10) Sometimes it is necessary to precalculate some details like square to find roots, best example includes the below one:
    for(int i=1;i<MAX_INT;++i){dp[i]=dp[i-sum0fdigits(i)]+1;} Here dp represents the count of times require to make a number 0 by subtracting itself form its digitsum each time.
11) see imp question from codeforces to count pairs with some logic in question given was arr[i]-arr[j]==i-j see it in this way as arr[i]--==arr[j]-j and we should add 1+2+3..  to find the count of pair.
12) see this question a good use of https://codeforces.com/contest/1520/problem/F2 map and binary search and one critical idea,
13) somethimes the middle element is only an optimal solution to move.
14) The method to take the prime factors of any number if is like this
        for(int i=2;i*i<n;++i){if(n%i==0){while(n%i==0)n/=i;v.push_back(i)}}
    Then there might be a case at last that n>1 and is a prime too which we had not checked.
    So please don't forget about it.
15) We can do binary search or any operations easily as shown:
        while(l<r){//operations}
        if(l==r){//left case}
16) We can try to convert any number to other numbers base and solve the question see the sample::https://codeforces.com/contest/552/problem/C
17) see the Codechef's long challenges may 2021 for more interesting maths questions.
18) https://www.geeksforgeeks.org/sum-xor-possible-subsets/ This is a very good application of ideas and a basic question
19)https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-binary-string-alternating/discuss/1219312/c%2B%2B(0ms-100)-iterative-easy
Do check it out.
20) To find the gray code of a given number we can just do no^(no>>1) and to print its bits we can first find bitset of it and then convert that bitset to a string and find its substr(32-size of bits required);
21) consider a map as
map<int , int> m;
for(auto i = m.begin();i!=m.end()/* Don't write i<m.end();++i)
if((*i).second)//first way
if(i->second)//second way
see the difference between teh two;
22) we can copy all the elements of a map to a vector as shown
vector<pair<int,int>> ans(maps.begin(),maps.end());
23) To form gray codes we use val1 = i^(i>>1) bitset<32> val2(val) string ans = val2.to_string() for length n ans.substr(32-n);
24) for implementing half adder
add(int a.int b){
while(b!=0)
{
int carry = a&b;
a=a^b;
b=carry<<1;
}
return a;
}
25) front() in stl gives value of front element and begin() returns iterator
26) see the example of LRU implementation
27)https://codeforces.com/contest/1541/submission/120661353
important for if and out of bound and how to use and/or in if else block
28) I practiced one question which proves the property of Tournament graph on codeforces do check it.
link: https://codeforces.com/contest/1559/problem/C
29) cout << A[i] << " \n"[ i == n ]; trick for couting newline at end of loop;
30) in coin change if we use first approach we are using a same set of coin but with different permutation of coins in it.
for second we are using each set only once without its permutation.
f(i,1,sum+1){
    f(j,0,n){
        if(i>=a[j])
        dp1[i]+=dp1[i-a[j]];
    }
}
 
f(i,0,n){
    for(int j=a[i];j<=sum;++j){
        dp2[j]+=dp2[j-a[i]];
    }
}
31) Sum of digits (iteratively which will lead to only single digit) can be found without dp jus tin O(1)
as see this http://applet-magic.com/digitsummod9.htm
*/