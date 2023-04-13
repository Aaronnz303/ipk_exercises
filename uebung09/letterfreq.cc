#include <iostream>
#include <fstream>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cctype>
#include <iterator>
#include <utility>
#include "letterfreq.hh"
    std::string sanitize_word(const std::string& word)
    {
        std::string out;
        std::copy_if(begin(word), end(word), back_inserter(out),
               [](auto c) { return std::isalpha(c); });
        std::transform(begin(out), end(out), begin(out),
                 [](auto c) { return std::tolower(c); });
        return out;
    }

    std::unordered_map<std::string,int> get_frequencies(const std::string& datei)
    {
        std::unordered_map<std::string, int> frequencies;
        std::ifstream eingabe(datei);

        if (!eingabe.is_open())
        {
            std::cerr << datei << " konnte nicht geöffnet werden!" << std::endl;
            return frequencies; 
        }

        std::string word;

        while (eingabe >> word)
        {
            std::string sanitized_word = sanitize_word(word);

            if (sanitized_word.size() > 0)
            {
                if (frequencies.count(sanitized_word))
                {
                    frequencies[sanitized_word]++;
                }
                else
                {
                    frequencies[sanitized_word] = 1;
                }
            }
            else
            {
                return frequencies; 
            }
                    
        }

        eingabe.close();
        return frequencies;
    }

    void print_frequencies(const std::unordered_map<std::string,int>& frequencies)
    {
        double gesamt = 0;
        for (const std::pair<std::string,int>& p : frequencies)
        {
            gesamt += p.second;
        }
        std::cout << "Es gibt insgesamt " << gesamt << " Wörter:" << std::endl;

        for (const std::pair<std::string, int>& p : frequencies)
        {
            double Anteil = (p.second / gesamt) * 100;
            std::cout << "[ " << p.first << ": " << p.second << "x ; also " << Anteil << "% ]" << std::endl;
        }
    }

    void word_frequencies(const std::string& dateiname)
    {
        print_frequencies(get_frequencies(dateiname));
    }

    int main(int argc, char* argv[])
    {
        if (argc < 2)
        {
            std::cout << "Keine .txt-Datei zur Eingabe entdeckt!" << std::endl;
            return 1;
        }

        word_frequencies(argv[1]);
        return 0;
    }