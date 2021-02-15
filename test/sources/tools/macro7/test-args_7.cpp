
#include <mygtest/modern.hpp>

#ifdef TEST_TOOLS_MACRO_ARGS_7

#define dTEST_COMPONENT tools, macro
#define dTEST_METHOD args_7
#define dTEST_TAG tdd

#include <tools/macro/args-7.hpp>
#include <string>
//=== example ==================================================================
namespace
{
    using str_t = ::std::string;

    template<class arr>
    void compareArrays(const arr& a, const arr& b) noexcept
    {
        constexpr size_t size_a = sizeof(a)/sizeof(a[0]);
        constexpr size_t size_b = sizeof(b)/sizeof(b[0]);
        static_assert(size_a == size_b, "");

        for(size_t i = 0; i != size_a; ++i)
        {
            ASSERT_EQ(a[i], b[i]);
        }
    }

    #define dargs_count(...) dGET_ARGS_COUNT_MAX_7(__VA_ARGS__)
    #define dif_arg_count_0(...) "zero"
    #define dif_arg_count_N(...) "many"

    #define dzero_or_more_arguments(...) \
        dNULL_OR_MORE_7(dif_arg_count, __VA_ARGS__)(__VA_ARGS__)

} //namespace 
//==============================================================================

// --- dFIRST_ARG
TEST_COMPONENT(000)
{
    constexpr size_t count = dFIRST_ARG(11,22,33,44,55,66,77,88,99,10);
    static_assert(count == 11, "error");
}
TEST_COMPONENT(001)
{
    constexpr size_t count = dFIRST_ARG(55,66,77,88,99,10);
    static_assert(count == 55, "error");
}
TEST_COMPONENT(002)
{
    const str_t result = dzero_or_more_arguments(dFIRST_ARG(,66,77,88,99,10));
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(003)
{
    const str_t result = dzero_or_more_arguments(dFIRST_ARG());
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(004)
{
    const str_t result = dzero_or_more_arguments(dFIRST_ARG(55,66,77,88,99,10));
    ASSERT_EQ(result, "many");
}

// --- dLAST_ARG_MAX_7
TEST_COMPONENT(005x1)
{
    constexpr size_t count = dLAST_ARG_MAX_7(11,22,33,44,55,66,77);
    static_assert(count == 77, "error");
}
TEST_COMPONENT(005x2)
{
    constexpr size_t count = dLAST_ARG_MAX_7(11,22,33,44,55,66);
    static_assert(count == 66, "error");
}
TEST_COMPONENT(005)
{
    constexpr size_t count = dLAST_ARG_MAX_7(11,22,33,44,55);
    static_assert(count == 55, "error");
}
TEST_COMPONENT(006)
{
    constexpr size_t count = dLAST_ARG_MAX_7(11,22,33,44);
    static_assert(count == 44, "error");
}
TEST_COMPONENT(007)
{
    constexpr size_t count = dLAST_ARG_MAX_7(11,22,33);
    static_assert(count == 33, "error");
}
TEST_COMPONENT(008)
{
    constexpr size_t count = dLAST_ARG_MAX_7(11,22);
    static_assert(count == 22, "error");
}
TEST_COMPONENT(009)
{
    constexpr size_t count = dLAST_ARG_MAX_7(11);
    static_assert(count == 11, "error");
}
TEST_COMPONENT(010)
{
    const str_t result = dzero_or_more_arguments(dLAST_ARG_MAX_7());
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(011)
{
    const str_t result = dzero_or_more_arguments(dLAST_ARG_MAX_7(1));
    ASSERT_EQ(result, "many");
}

// --- dGET_ARG(num, ...)
TEST_COMPONENT(012)
{
    const str_t result = dzero_or_more_arguments(dGET_ARG(0, 11,22,33,44,55,66,77));
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(013)
{
    const str_t result = dzero_or_more_arguments(dGET_ARG(1, 11,22,33,44,55,66,77));
    ASSERT_EQ(result, "many");
}
TEST_COMPONENT(014)
{
    constexpr size_t count = dGET_ARG(1, 11,22,33,44,55,66,77);
    static_assert(count == 11, "error");
}
TEST_COMPONENT(015)
{
    constexpr size_t count = dGET_ARG(1, 11,22,33,44,55,66,77);
    static_assert(count == 11, "error");
}

TEST_COMPONENT(016)
{
    constexpr size_t count = dGET_ARG(1, 11,22,33,44,55,66,77);
    static_assert(count == 11, "error");
}
TEST_COMPONENT(017)
{
    constexpr size_t count = dGET_ARG(2, 11,22,33,44,55,66);
    static_assert(count == 22, "error");
}
TEST_COMPONENT(018)
{
    constexpr size_t count = dGET_ARG(3, 11,22,33,44,55);
    static_assert(count == 33, "error");
}
TEST_COMPONENT(019)
{
    constexpr size_t count = dGET_ARG(4, 11,22,33,44);
    static_assert(count == 44, "error");
}
TEST_COMPONENT(020)
{
    constexpr size_t count = dGET_ARG(4, 11,22,33,44,55);
    static_assert(count == 44, "error");
}
TEST_COMPONENT(021)
{
    constexpr size_t count = dGET_ARG(5, 11,22,33,44,55);
    static_assert(count == 55, "error");
}
TEST_COMPONENT(022)
{
    constexpr size_t count = dGET_ARG(6, 11,22,33,44,55,66);
    static_assert(count == 66, "error");
}
TEST_COMPONENT(023)
{
    constexpr size_t count = dGET_ARG(7, 11,22,33,44,55,66,77);
    static_assert(count == 77, "error");
}
TEST_COMPONENT(024)
{
    constexpr size_t count = dGET_ARG(1, 11);
    static_assert(count == 11, "error");
}
TEST_COMPONENT(025)
{
    const str_t result = dzero_or_more_arguments(dGET_ARG(0, 11));
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(026)
{
    const str_t result = dzero_or_more_arguments(dGET_ARG(1, 11));
    ASSERT_EQ(result, "many");
}
TEST_COMPONENT(027)
{
    const str_t result = dzero_or_more_arguments(dGET_ARG(0, ));
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(028)
{
    // not worked
    //const str_t result = dzero_or_more_arguments(dGET_ARG(1, ));
    //ASSERT_EQ(result, "zero");
}

// --- dFIRST_ARGS(num, ...)
TEST_COMPONENT(029)
{
    const str_t result = dzero_or_more_arguments(dFIRST_ARGS(0, 1,2,3,4,5,6,7));
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(030)
{
    const str_t result = dzero_or_more_arguments(dFIRST_ARGS(1, 1,2,3,4,5,6,7));
    ASSERT_EQ(result, "many");
}
TEST_COMPONENT(031)
{
    constexpr int etalon[1] = { 1 };
    constexpr int arr[1] = { dFIRST_ARGS(1, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(032)
{
    constexpr int etalon[2] = { 1,2 };
    constexpr int arr[2] = { dFIRST_ARGS(2, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(033)
{
    constexpr int etalon[3] = { 1,2,3 };
    constexpr int arr[3] = { dFIRST_ARGS(3, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(034)
{
    constexpr int etalon[4] = { 1,2,3,4 };
    constexpr int arr[4] = { dFIRST_ARGS(4, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(035)
{
    constexpr int etalon[5] = { 1,2,3,4,5 };
    constexpr int arr[5] = { dFIRST_ARGS(5, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(036)
{
    constexpr int etalon[6] = { 1,2,3,4,5,6 };
    constexpr int arr[6] = { dFIRST_ARGS(6, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(037)
{
    constexpr int etalon[7] = { 1,2,3,4,5,6,7 };
    constexpr int arr[7] = { dFIRST_ARGS(7, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}

TEST_COMPONENT(038)
{
    const str_t result = dzero_or_more_arguments(dFIRST_ARGS(0, ));
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(039)
{
    // not worked
    //const str_t result = dzero_or_more_arguments(dFIRST_ARGS(1, ));
    //ASSERT_EQ(result, "zero");
}

// --- dREVERT_ARGS_MAX_7(...)
TEST_COMPONENT(040)
{
    const str_t result = dzero_or_more_arguments(dREVERT_ARGS_MAX_7());
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(041)
{
    const str_t result = dzero_or_more_arguments(dREVERT_ARGS_MAX_7(1));
    ASSERT_EQ(result, "many");
}
TEST_COMPONENT(042)
{
    constexpr int value = dREVERT_ARGS_MAX_7(1);
    static_assert(value == 1, "error");
}
TEST_COMPONENT(043)
{
    constexpr int etalon[2] = { 2,1 };
    constexpr int arr[2] = { dREVERT_ARGS_MAX_7(1,2) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(044)
{
    constexpr int etalon[3] = { 3,2,1 };
    constexpr int arr[3] = { dREVERT_ARGS_MAX_7(1,2,3) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(045)
{
    constexpr int etalon[4] = { 4,3,2,1 };
    constexpr int arr[4] = { dREVERT_ARGS_MAX_7(1,2,3,4) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(046)
{
    constexpr int etalon[5] = { 5,4,3,2,1 };
    constexpr int arr[5] = { dREVERT_ARGS_MAX_7(1,2,3,4,5) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(047)
{
    constexpr int etalon[6] = { 6,5,4,3,2,1 };
    constexpr int arr[6] = { dREVERT_ARGS_MAX_7(1,2,3,4,5,6) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(048)
{
    constexpr int etalon[7] = { 7,6,5,4,3,2,1 };
    constexpr int arr[7] = { dREVERT_ARGS_MAX_7(1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}

//--- dLAST_ARGS_MAX_7(num, ...)
TEST_COMPONENT(049)
{
    const str_t result = dzero_or_more_arguments(dLAST_ARGS_MAX_7(0, 1,2,3,4,5,6,7));
    ASSERT_EQ(result, "zero");
}
TEST_COMPONENT(050)
{
    const str_t result = dzero_or_more_arguments(dLAST_ARGS_MAX_7(1, 1,2,3,4,5,6,7));
    ASSERT_EQ(result, "many");
}
TEST_COMPONENT(051)
{
    constexpr int etalon[1] = { 7 };
    constexpr int arr[1] = { dLAST_ARGS_MAX_7(1, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(052)
{
    constexpr int etalon[2] = { 6,7 };
    constexpr int arr[2] = { dLAST_ARGS_MAX_7(2, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(053)
{
    constexpr int etalon[3] = { 5,6,7 };
    constexpr int arr[3] = { dLAST_ARGS_MAX_7(3, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(054)
{
    constexpr int etalon[4] = { 4,5,6,7 };
    constexpr int arr[4] = { dLAST_ARGS_MAX_7(4, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(055)
{
    constexpr int etalon[5] = { 3,4,5,6,7 };
    constexpr int arr[5] = { dLAST_ARGS_MAX_7(5, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(056)
{
    constexpr int etalon[6] = { 2,3,4,5,6,7 };
    constexpr int arr[6] = { dLAST_ARGS_MAX_7(6, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}
TEST_COMPONENT(057)
{
    constexpr int etalon[7] = { 1,2,3,4,5,6,7 };
    constexpr int arr[7] = { dLAST_ARGS_MAX_7(7, 1,2,3,4,5,6,7) };
    compareArrays(arr, etalon);
}

TEST_COMPONENT(058)
{
    const str_t result = dzero_or_more_arguments(dLAST_ARGS_MAX_7(0, ));
    ASSERT_EQ(result, "zero");
}

#endif // !TEST_TOOLS_MACRO_ARGS_7

