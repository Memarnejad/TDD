//
// Created by mehran on 12/13/18.
//

#ifndef TDD_TESTS_H
#define TDD_TESTS_H

#include "gtest/gtest.h"
#include "ArabicToRomanNumeralsConverter.h"

class RomanNumeralAssert{

public:
    RomanNumeralAssert() = delete;
    explicit RomanNumeralAssert(const unsigned int arabicNumber) : arabicNumberToConvert(arabicNumber) {}

    void isConvertedToRomanNumeral(const std::string& expectedRomanNumeral) const {
        ASSERT_EQ(expectedRomanNumeral, convertArabicNumberToRomanNumeral(arabicNumberToConvert));
    }

    static RomanNumeralAssert assertThat(const unsigned int arabicNumber){
        RomanNumeralAssert assert {arabicNumber};
        return assert;
    }

private:
    const unsigned int arabicNumberToConvert;
};

#endif //TDD_TESTS_H
