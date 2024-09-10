#include <iostream>
#include <assert.h>
#include "TestColor.h"
#include "ColorPair.h"

int main() {

    TestColor object = new TestColor();
    object.testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    object.testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    object.testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    object.testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
