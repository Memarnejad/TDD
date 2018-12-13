//be nam _e_ khoda

#include "gtest/gtest.h"
#include <string>

struct ArabicToRomanMapping{
    unsigned int arabicNumber;
    std::string romanNumeral;
};

const std::size_t numberOfMappings = 6;
using ArabicToRomanMappings = std::array<ArabicToRomanMapping, numberOfMappings>;

const ArabicToRomanMappings arabicToRomanMappings{{
    {1000, "M"},
    {100, "C"},
    {10, "X"},
    {5, "V"},
    {4, "IV"},
    {1, "I"}
}};

int main(int argc, char* argv[]) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

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
    RomanNumeralAssert::assertThat(200).isConvertedToRomanNumeral("CC");
    RomanNumeralAssert::assertThat(300).isConvertedToRomanNumeral("CCC");
    RomanNumeralAssert::assertThat(1000).isConvertedToRomanNumeral("M");
    RomanNumeralAssert::assertThat(2000).isConvertedToRomanNumeral("MM");
    RomanNumeralAssert::assertThat(3000).isConvertedToRomanNumeral("MMM");
    RomanNumeralAssert::assertThat(3333).isConvertedToRomanNumeral("MMMCCCXXXIII");
    RomanNumeralAssert::assertThat(5).isConvertedToRomanNumeral("V");
    RomanNumeralAssert::assertThat(6).isConvertedToRomanNumeral("VI");
    RomanNumeralAssert::assertThat(37).isConvertedToRomanNumeral("XXXVII");
    RomanNumeralAssert::assertThat(4).isConvertedToRomanNumeral("IV");

}