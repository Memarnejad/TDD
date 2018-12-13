//
// Created by mehran on 12/13/18.
//

#ifndef TDD_ARABICTOROMANNUMERALSCONVERTER_H
#define TDD_ARABICTOROMANNUMERALSCONVERTER_H

#include <string>
#include <array>


struct ArabicToRomanMapping{
    unsigned int arabicNumber;
    std::string romanNumeral;
};

const std::size_t numberOfMappings = 13;
using ArabicToRomanMappings = std::array<ArabicToRomanMapping, numberOfMappings>;

const ArabicToRomanMappings arabicToRomanMappings{{
    {1000, "M"},
    {900, "CM"},
    {500, "D"},
    {400, "CD"},
    {100, "C"},
    {90, "XC"},
    {50, "L"},
    {40, "XL"},
    {10, "X"},
    {9, "IX"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
}};

//Function Signature
std::string convertArabicNumberToRomanNumeral(unsigned int arabicNumber);

#endif //TDD_ARABICTOROMANNUMERALSCONVERTER_H
