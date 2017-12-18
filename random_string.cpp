//
// Created by Patrick Moffitt on 12/16/17.
//

#include "random_string.hpp"

using namespace std;

constexpr char Random_string::printable_chars[];

constexpr int Random_string::printable_chars_size;

auto Random_string::rand_char = uniform_int_distribution<int>(0, printable_chars_size - 1);

random_device Random_string::rd;

mt19937 Random_string::mt_engine(rd());

string Random_string::random_string(const int length) {
    string random_string;
    if (length > 0) {
        for (int i = 0; i < length; ++i) {
            random_string.push_back(printable_chars[rand_char(mt_engine)]);
        }
    }
    return random_string;
};

vector<string> Random_string::random_strings(int key_width, const int list_length) {
    vector<string> list;
    string key_str;
    for (int i = 0; i < list_length; i++) {
        key_str = random_string(key_width);
        while (list.end() != find(list.begin(), list.end(), key_str)) {
            key_str = random_string(key_width);
        };
        list.push_back(key_str);
    }
    shuffle(list.begin(), list.end(), mt_engine);
    return list;
};