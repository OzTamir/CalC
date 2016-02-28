#include <iostream>
#include <string>
#include <vector>

using namespace std;

int evaluateTokenStream(vector<string> stream) {
    int result = 0;
    int a = 0;
    int b = 0;
    string op = "";
    for (vector<string>::iterator it = stream.begin(); it < stream.end(); ++it) {
        if (it == stream.begin()) {
            a = stoi(*it);
            it++;
        }
        else {
            a = result;
        }
        op = *it;
        it++;
        b = stoi(*it);
        if (op == "+")
            result = a + b;
        else if (op == "-")
            result = a - b;
        else if (op == "*")
            result = a * b;
        else if (op == "/")
            // TODO: What if b = 0?
            result = a / b;
    }

    return result;
}

vector<string> parseTokenStream(string *stream) {
    // Initialize the results vector
    vector<string> res;
    string temp = "";
    for (string::iterator it = stream->begin(); it < stream->end(); ++it) {
        if (*it == ' ') {
            // TODO: What if the stream starts with a space?
            res.push_back(temp);
            temp = "";
        }
        else {
            temp += *it;
        }
    }
    res.push_back(temp);
    return res;
}

int main() {
    string input;
    getline(cin, input);
    vector<string> parsed = parseTokenStream(&input);
    vector<string>::iterator it;
    cout << evaluateTokenStream(parsed) << endl;
    return 0;
}