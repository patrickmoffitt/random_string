//
// Created by Patrick Moffitt on 12/16/17.
//

#ifndef COMPARE_MAPS_RANDOM_KEY_HPP
#define COMPARE_MAPS_RANDOM_KEY_HPP

#include <string>
#include <vector>
#include <random>
using namespace std;

/*
 * Generates arbitrary length random (printable) strings and unique vectors of the same.
 */

struct Random_string {
    static constexpr char printable_chars[] =
            "!#$%&()[]^*+,_-./:;<=>?@|~"
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
    static constexpr int printable_chars_size = sizeof(printable_chars) - 1;
    string random_string(int length);
    static random_device rd;
    static mt19937 mt_engine;
    static uniform_int_distribution<int> rand_char;
    /*
     * Beware: No range checking provided. Do not requested more unique strings than are possible
     * for the given key_width.
     */
    vector<string> random_strings(int key_width = 0, const int list_length = 0);
};

#endif //COMPARE_MAPS_RANDOM_KEY_HPP
