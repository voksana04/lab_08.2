#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_8.2\Project_8.2\lab_8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(NoSpaces)
        {
            string s = "HelloWorld";
            Assert::AreEqual(size_t(0), MaxConsecutiveSpaces(s));
        }

        TEST_METHOD(SingleSpace)
        {
            string s = "Hello World";
            Assert::AreEqual(size_t(1), MaxConsecutiveSpaces(s));
        }

        TEST_METHOD(MultipleConsecutiveSpaces)
        {
            string s = "Hello   World";
            Assert::AreEqual(size_t(3), MaxConsecutiveSpaces(s));
        }

        TEST_METHOD(LeadingSpaces)
        {
            string s = "   Hello";
            Assert::AreEqual(size_t(3), MaxConsecutiveSpaces(s));
        }

        TEST_METHOD(TrailingSpaces)
        {
            string s = "Hello   ";
            Assert::AreEqual(size_t(3), MaxConsecutiveSpaces(s));
        }

        TEST_METHOD(MultipleSpaceGroups)
        {
            string s = "Hello   World  !";
            Assert::AreEqual(size_t(3), MaxConsecutiveSpaces(s));
        }

        TEST_METHOD(AllSpaces)
        {
            string s = "       ";
            Assert::AreEqual(size_t(7), MaxConsecutiveSpaces(s));
        }
    };
}
