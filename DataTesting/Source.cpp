# include <iostream>
# include <vector>
# include <list>
# include <forward_list>
# include <stack>
# include <queue>
# include <unordered_map> // hash table associated container, no duplicates
# include <map> // binary search tree

int main() {
	/*
		------------Array-------------
		Default Construction:	O(n)
		.empty()				O(1)
		.size() 				O(1)
		==						O(n)
		.clear()				Not Available
		at,operator[]			O(1)
		.front()				O(1)
		.back()					O(1)
		.resize()				Not Available
		.insert()				Not Available
		.erase()				Not Available
		.push_back()			Not Available
		.pop_back()				Not Available
		.push_front()			Not Available
		.pop_front()			Not Available
		.find()					O(n)
		.splice()				Not Available

	*/
	std::cout << " ------------Array-------------\n";
	int bob[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		std::cout << bob[i] << " ,";
	}
	std::cout << "\n";
	int jeff[10];
	for (int i = 0; i < 10; i++) {
		std::cout << jeff[i] << " ,";
	}
	std::cout << "\n";

	int* doggy = new int[11];
	doggy[1] = 7;
	std::cout << doggy[1];
	std::cout << "\n";
	
	for (int i = 0; i < 11; i++) {
		std::cout << doggy[i] << " ,";
	}
	std::cout << "\n";
	delete [] doggy ;

	int* bill = new int;
	int num = 7;
	bill = &num;

	int* jim[10];
	for (int i = 0; i < 10; i++) {
		jim[i] = new int(11);
		std::cout << *jim[i] << " ,";
	}
	std::cout << "\n";
	for (int i = 0; i < 10; i++) {
		delete jim[i];
	}
	std::cout << "\n";
	
	
	/*
		------------Vector-------------
		Default Construction:	O(1)
		.empty()				O(1)
		.size() 				O(1)
		==						O(n)
		.clear()				O(n)
		at,operator[]			O(1)
		.front()				O(1)
		.back()					O(1)
		.resize()				O(n)
		.insert()				O(n)
		.erase()				O(n)
		.push_back()			O(1) Amortized
		.pop_back()				O(1)
		.push_front()			Not Available
		.pop_front()			Not Available
		.find()					O(n)
		.splice()				Not Available

	*/
	std::cout << " ------------Vector-------------\n";
	std::vector<int> myVect{ 1, 2, 3, 4 };
	myVect.push_back(7); 
	myVect.push_back(8);
	myVect.pop_back();
	myVect.insert(myVect.begin() + 3, 11);
	for (auto it = myVect.begin(); it != myVect.end(); it++) {
		std::cout << *it << " ,";
	}
	std::cout << "\n";
	int size = myVect.size();


	/*
		------------DLinked List-------------
		Default Construction:	O(1)
		.empty()				O(1)
		.size() 				O(1)
		==						O(n)
		.clear()				O(n)
		at,operator[]			Not Available
		.front()				O(1)
		.back()					O(1)
		.resize()				O(n)
		.insert()				O(1)
		.erase()				O(1)
		.push_back()			O(1)
		.pop_back()				O(1)
		.push_front()			O(1)
		.pop_front()			O(1)
		.find()					O(n)
		.splice()				O(1)

	*/
	std::cout << " ------------Doubly Linked List-------------\n";
	std::list<int> myList;
	myList.push_back(2);
	myList.push_front(3);
	myList.push_back(4);
	myList.push_front(1);
	for (auto it = myList.begin(); it != myList.end(); it++) {
		std::cout << *it << " ,";
	}
	std::cout << "\n";
	auto it = myList.begin();
	std::advance(it, 2);
	myList.erase(it);
	for (auto it = myList.begin(); it != myList.end(); it++) {
		std::cout << *it << " ,";
	}
	std::cout << "\n";


	/*
		------------SLinked List-------------
		Default Construction:	O(1)
		.empty()				O(1)
		.size() 				Not Available
		==						O(n)
		.clear()				O(n)
		at,operator[]			Not Available
		.front()				O(1)
		.back()					Not Available
		.resize()				O(n)
		.insert()				O(1)
		.erase()				O(1)
		.push_back()			Not Available
		.pop_back()				Not Available
		.push_front()			O(1)
		.pop_front()			O(1)
		.find()					O(n)
		.splice()				O(n)

	*/
	std::cout << " ------------Singly Linked List-------------\n";
	std::forward_list<int> mySList;
	mySList.push_front(2);
	mySList.push_front(3);
	mySList.push_front(4);
	mySList.push_front(1);
	for (auto it = mySList.begin(); it != mySList.end(); it++) {
		std::cout << *it << " ,";
	}
	std::cout << "\n";
	auto itr = mySList.begin();
	std::advance(itr, 2);
	mySList.erase_after(itr);
	for (auto itr = mySList.begin(); itr != mySList.end(); itr++) {
		std::cout << *itr << " ,";
	}
	std::cout << "\n";

	/*
		------------Stack-------------
		all operations O(1)

	*/
	std::cout << " ------------Stack-------------\n";
	std::stack<int> myStack;
	myStack.push(5);
	myStack.push(11);
	myStack.push(20);
	myStack.pop();
	myStack.push(13);
	myStack.top();
	myStack.push(123);
	myStack.push(11);
	myStack.pop();
	myStack.push(12);

	while (!myStack.empty()) {
		std::cout << myStack.top() << " ";
		myStack.pop();
	}
	std::cout << "\n";
	/*
		------------Queue-------------
		all operations O(1)
	*/
	std::cout << " ------------Queue-------------\n";
	std::queue<int> myQueue;
	myQueue.push(5);
	myQueue.push(11);
	myQueue.push(20);
	myQueue.pop();
	myQueue.push(13);
	myQueue.front();
	myQueue.push(123);
	myQueue.push(11);
	myQueue.pop();
	myQueue.push(12);

	while (!myQueue.empty()) {
		std::cout << myQueue.front() << " ";
		myQueue.pop();
	}
	std::cout << "\n";

	/*
		------------Binary Search Tree and Hash Map-------------
		BST
			if balanced then search, insert, delete will be O(log n)
			if not then O(n)
		HASH MAP
			theoretically it would be O(1) in time complexity but the risk 
			comes from a large space complexity
	*/
	std::cout << " ------------Binary Search Tree and Hash Map-------------\n";
	std::map<int, std::string> myBST;
	std::unordered_map<int, std::string> myHash;
	myBST[1] = "bob";
	myHash[1] = 'bob';
	myBST[2] = "bill";
	myHash[2] = 'bill';
	myBST[3] = "ben";
	myHash[3] = 'ben';

	myBST.erase(1);
	myHash.erase(2);

	myBST.find(3);
	myHash.find(3);



	return 0;
}