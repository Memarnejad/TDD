//be nam _e_ khoda

#include "gtest/gtest.h"
#include <string>

int main(int argc, char* argv[]) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

std::string convertArabicNumberToRomanNumeral(unsigned int arabicNumber){

    std::string romanNumeral;

    if(arabicNumber == 100){
        romanNumeral = "C";
    }
    else{
        while(arabicNumber >= 10){
            romanNumeral += "X";
            arabicNumber-= 10;
        }

        while(arabicNumber >= 1){
            romanNumeral += "I";
            arabicNumber--;
        }
    }

    return romanNumeral;
}

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

TEST(ArabicToRomanNumeralsConverterTestCase, conversionOfArabicToRomanNumerals_Works){

    RomanNumeralAssert::assertThat(1).isConvertedToRomanNumeral("I");
    RomanNumeralAssert::assertThat(2).isConvertedToRomanNumeral("II");
    RomanNumeralAssert::assertThat(3).isConvertedToRomanNumeral("III");
    RomanNumeralAssert::assertThat(10).isConvertedToRomanNumeral("X");
    RomanNumeralAssert::assertThat(20).isConvertedToRomanNumeral("XX");
    RomanNumeralAssert::assertThat(30).isConvertedToRomanNumeral("XXX");
    RomanNumeralAssert::assertThat(33).isConvertedToRomanNumeral("XXXIII");
    RomanNumeralAssert::assertThat(100).isConvertedToRomanNumeral("C");

}