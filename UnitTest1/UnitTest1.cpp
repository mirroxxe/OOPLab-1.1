#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab#1.1/IntRange.h" // Припустимо, що ваш проект має таку структуру

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(IntRangeTests)
    {
    public:

        TEST_METHOD(RangeCheckTest)
        {
            IntRange range;
            range.Init(5, 10);

            Assert::IsTrue(range.rangeCheck(7));
            Assert::IsFalse(range.rangeCheck(12));
        }
    };
}