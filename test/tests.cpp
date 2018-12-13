//
// Created by mehran on 12/13/18.
//

#include "tests.h"


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