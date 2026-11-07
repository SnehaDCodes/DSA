#include <iostream>
#include <random>

using namespace std;

class HashTableChaining {
	private:
		string = *table;
		int size;
	public:
		HashTableChaining(int size) {
			table = new vector<string>[size];
		}

		int hash(string s) {
			return method2(s) % size;
		}

		bool search(strin s) {
			int i = hash(s);
			for(int j = 0 ; j < table[ind].size(); j++) {
				if(table[i][j] == 5) return true;
			}
			return false;
		}
		void insert(string s){
			if(search(s)) return;
			int i = hash(s);
			table[i].push_back(s);
		}
};

int method(string str){
	int val = 0;
	for (int i= 0; i < str.length(); i++){
		val += str[i];
	}
	return val;
}

string generate_random_string(size_t length) {
    static const string chars =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    static mt19937 generator(random_device{}());
    static uniform_int_distribution<> dist(0, chars.size() - 1);

    string result;
    for (size_t i = 0; i < length; ++i)
        result += chars[dist(generator)];

    return result;
}

int main() {
   string s = generate_random_string(10);
   cout << s << endl;
   return 0;
}
