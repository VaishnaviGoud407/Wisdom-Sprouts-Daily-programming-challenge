vector<string> getPermutations(string s) {
    vector<string> result;
    sort(s.begin(), s.end()); // sort to handle duplicates
    
    do {
        result.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    
    return result;
}

int main() {
    string s = "abc";
    vector<string> perms = getPermutations(s);
    
    cout << "[ ";
    for (auto &p : perms) {
        cout << "\"" << p << "\" ";
    }
    cout << "]" << endl;
    
    return 0;
}
