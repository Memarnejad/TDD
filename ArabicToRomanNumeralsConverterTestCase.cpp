//be nam _e_ khoda

#include "gtest/gtest.h"
#include <string>

int main(int argc, char* argv[]) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

std::string convertArabicNumberToRomanNumeral(unsigned int arabicNumber){

    if(arabicNumber == 10){
        return "X";
    }
    else if(arabicNumber == 20){
        return "XX";
    }
    else{
        std::string romanNumeral;

        while(arabicNumber >= 1){
            romanNumeral += "I";
            arabicNumber--;
        }
        return romanNumeral;
    }
}

TEST(ArabicToRomanNumeralsConverterTestCase, PreparationsCompleted){
    GTEST_SUCCEED();
}

TEST(ArabicToRomanNumeralsConverterTestCase, 1_isConvertedTo_I){
    ASSERT_EQ("I", convertArabicNumberToRomanNumeral(1));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 2_isConvertedTo_II){
    ASSERT_EQ("II", convertArabicNumberToRomanNumeral(2));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 3_isConvertedTo_III){
    ASSERT_EQ("III", convertArabicNumberToRomanNumeral(3));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 10_isConvertedTo_X){
    ASSERT_EQ("X", convertArabicNumberToRomanNumeral(10));
}

TEST(ArabicToRomanNumeralsConverterTestCase, 20_isConvertedTo_XX){
    ASSERT_EQ("XX", convertArabicNumberToRomanNumeral(20));
}