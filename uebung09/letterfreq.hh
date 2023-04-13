#include <iostream>
#include <fstream>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cctype>
#include <iterator>
#include <utility>

#pragma once

template<typename Map>
class LetterFrequencies
{
    private:
    Map& _map;

    public:
    // Processes all letters obtained from source
    template<typename Source>
    void readData(Source& source);

    // does the statistics and prints to stdout
    void printStatistics();

};