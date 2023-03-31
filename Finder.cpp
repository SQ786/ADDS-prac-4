#include "Finder.h"
using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;

    for(size_t i = 1; i <= s2.size(); i++) {
        int check = 0;
    size_t found = s1.find(s2.substr(check, i));
    if (found != string::npos) {
        result.push_back(found);
        check = found;
    } else {
    result.push_back(-1);
    }
    }
    return result;
}
