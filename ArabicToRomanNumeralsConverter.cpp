#include "ArabicToRomanNumeralsConverter.h"


std::string convertArabicNumberToRomanNumeral(unsigned int arabicNumber){

    std::string romanNumeral;

    for(const auto& mapping : arabicToRomanMappings){
        while(arabicNumber >= mapping.arabicNumber){
            romanNumeral += mapping.romanNumeral;
            arabicNumber -= mapping.arabicNumber;
        }
    }

    return romanNumeral;
}