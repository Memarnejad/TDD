//be nam _e_ khoda

#include "gtest/gtest.h"
#include <string>

int main(int argc, char* argv[]) {

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

std::string convertArabicNumberToRomanNumeral(const unsigned int arabicNumber){
    return "I";
}

TEST(ArabicToRomanNumeralsConverterTestCase, PreparationsCompleted){
    GTEST_SUCCEED();
}

TEST(ArabicToRomanNumeralsConverterTestCase, 1_isConvertedTo_I){
    ASSERT_EQ("I", convertArabicNumberToRomanNumeral(1));
}