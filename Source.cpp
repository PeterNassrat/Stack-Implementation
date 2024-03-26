#include "stack.h";
#include <string>
#include <vector>
void main() {

	stack<int>st1;
	cout << st1.empty() << '\n';
	st1.push(109);
	cout << st1.top() << '\n';
	st1.pop();
	st1.pop();
	st1.pop();
	cout << st1.top() << '\n';
	cout << st1.size() << '\n';
	st1.push(10);
	st1.push(20);
	cout << st1.empty() << '\n';
	cout << st1.size() << '\n';
	st1.push(123);
	cout << st1.size() << '\n';
	cout << st1.empty() << '\n';
	st1.pop();
	st1.pop();
	cout << st1.size() << '\n';
	while (!st1.empty()) {
		cout << st1.top() << '\n';
		st1.pop();
	}

	cout << "\n\n";

	stack<vector<string>>st2;
	st2.push({ "dksf", "sdfksdf", "sdjkfh", "sdfh" });
	st2.push({ "sdfjfh", "dfjh", "dsjfh" });
	st2.push({ "dsfsdf", "fdf" });
	st2.push({ "dfdfd" });
	while (!st2.empty()) {
		cout << st2.size() << '\n';
		for (int i = 0; i < st2.top().size(); i++) {
			cout << st2.top()[i] << " ";
		}
		cout << '\n';
		st2.pop();
	}

}