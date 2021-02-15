
#include <mygtest/modern.hpp>

#ifdef TEST_TOOLS_MACRO_COMB_TUPLES_7

#define dTEST_COMPONENT tools, macro
#define dTEST_METHOD comb_tuples_7
#define dTEST_TAG tdd

#include <tools/macro/comb-tuples-7.hpp>
//==============================================================================
//=== example ==================================================================
namespace
{
    #define pp_macro(index, a, b) \
        ss << "(" << index << ", " << #a << ":" << #b << ")";

    #define pp_delim(index) \
        ss << ", ";

} // namespace
//==============================================================================
//==============================================================================

// --- (1), (2,3,4,5,6,7,8)
TEST_COMPONENT(000)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1), (1) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:1)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(001)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1), (2,3) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(002)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1), (2,3,4) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3), (3, 1:4)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(003)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1), (2,3,4,5) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3), (3, 1:4), (4, 1:5)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(004)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1), (2,3,4,5,6) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3), (3, 1:4), (4, 1:5), (5, 1:6)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(005)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1), (2,3,4,5,6,7) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3), (3, 1:4), (4, 1:5), (5, 1:6), (6, 1:7)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(006)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1), (2,3,4,5,6,7,8) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3), (3, 1:4), (4, 1:5), (5, 1:6), (6, 1:7), (7, 1:8)";
    ASSERT_EQ(result, etalon);
}

// --- (1,2), (3,4,5,6,7,8,9)
TEST_COMPONENT(007)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2), (3) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:3), (1, 2:3)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(008)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2), (3,4) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), "
        "(1, 2:3), (2, 2:4)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(009)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2), (3,4,5) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), (3, 1:5), "
        "(1, 2:3), (2, 2:4), (3, 2:5)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(010)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2), (3,4,5,6) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), (3, 1:5), (4, 1:6), "
        "(1, 2:3), (2, 2:4), (3, 2:5), (4, 2:6)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(011)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2), (3,4,5,6,7) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), (3, 1:5), (4, 1:6), (5, 1:7), "
        "(1, 2:3), (2, 2:4), (3, 2:5), (4, 2:6), (5, 2:7)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(012)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2), (3,4,5,6,7,8) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), (3, 1:5), (4, 1:6), (5, 1:7), (6, 1:8), "
        "(1, 2:3), (2, 2:4), (3, 2:5), (4, 2:6), (5, 2:7), (6, 2:8)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(013)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2), (3,4,5,6,7,8,9) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), (3, 1:5), (4, 1:6), (5, 1:7), (6, 1:8), (7, 1:9), "
        "(1, 2:3), (2, 2:4), (3, 2:5), (4, 2:6), (5, 2:7), (6, 2:8), (7, 2:9)";
    ASSERT_EQ(result, etalon);
}

// --- (1,2,3), (4,5,6,7,8,9,10)
TEST_COMPONENT(014)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3), (4) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), "
        "(1, 2:4), "
        "(1, 3:4)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(015)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3), (4,5) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), "
        "(1, 2:4), (2, 2:5), "
        "(1, 3:4), (2, 3:5)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(016)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3), (4,5,6) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), (3, 1:6), "
        "(1, 2:4), (2, 2:5), (3, 2:6), "
        "(1, 3:4), (2, 3:5), (3, 3:6)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(017)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3), (4,5,6,7) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), (3, 1:6), (4, 1:7), "
        "(1, 2:4), (2, 2:5), (3, 2:6), (4, 2:7), "
        "(1, 3:4), (2, 3:5), (3, 3:6), (4, 3:7)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(018)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3), (4,5,6,7,8) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), (3, 1:6), (4, 1:7), (5, 1:8), "
        "(1, 2:4), (2, 2:5), (3, 2:6), (4, 2:7), (5, 2:8), "
        "(1, 3:4), (2, 3:5), (3, 3:6), (4, 3:7), (5, 3:8)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(019)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3), (4,5,6,7,8,9) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), (3, 1:6), (4, 1:7), (5, 1:8), (6, 1:9), "
        "(1, 2:4), (2, 2:5), (3, 2:6), (4, 2:7), (5, 2:8), (6, 2:9), "
        "(1, 3:4), (2, 3:5), (3, 3:6), (4, 3:7), (5, 3:8), (6, 3:9)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(020)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3), (4,5,6,7,8,9,10) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), (3, 1:6), (4, 1:7), (5, 1:8), (6, 1:9), (7, 1:10), "
        "(1, 2:4), (2, 2:5), (3, 2:6), (4, 2:7), (5, 2:8), (6, 2:9), (7, 2:10), "
        "(1, 3:4), (2, 3:5), (3, 3:6), (4, 3:7), (5, 3:8), (6, 3:9), (7, 3:10)";
    ASSERT_EQ(result, etalon);
}

// --- (1,2,3,4), (5,6,7,8,9,10,11)
TEST_COMPONENT(021)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4), (5) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), "
        "(1, 2:5), "
        "(1, 3:5), "
        "(1, 4:5)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(022)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4), (5,6) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), "
        "(1, 2:5), (2, 2:6), "
        "(1, 3:5), (2, 3:6), "
        "(1, 4:5), (2, 4:6)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(023)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4), (5,6,7) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), (3, 1:7), "
        "(1, 2:5), (2, 2:6), (3, 2:7), "
        "(1, 3:5), (2, 3:6), (3, 3:7), "
        "(1, 4:5), (2, 4:6), (3, 4:7)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(024)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4), (5,6,7,8) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), (3, 1:7), (4, 1:8), "
        "(1, 2:5), (2, 2:6), (3, 2:7), (4, 2:8), "
        "(1, 3:5), (2, 3:6), (3, 3:7), (4, 3:8), "
        "(1, 4:5), (2, 4:6), (3, 4:7), (4, 4:8)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(025)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4), (5,6,7,8,9) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), (3, 1:7), (4, 1:8), (5, 1:9), "
        "(1, 2:5), (2, 2:6), (3, 2:7), (4, 2:8), (5, 2:9), "
        "(1, 3:5), (2, 3:6), (3, 3:7), (4, 3:8), (5, 3:9), "
        "(1, 4:5), (2, 4:6), (3, 4:7), (4, 4:8), (5, 4:9)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(026)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4), (5,6,7,8,9,10) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), (3, 1:7), (4, 1:8), (5, 1:9), (6, 1:10), "
        "(1, 2:5), (2, 2:6), (3, 2:7), (4, 2:8), (5, 2:9), (6, 2:10), "
        "(1, 3:5), (2, 3:6), (3, 3:7), (4, 3:8), (5, 3:9), (6, 3:10), "
        "(1, 4:5), (2, 4:6), (3, 4:7), (4, 4:8), (5, 4:9), (6, 4:10)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(027)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4), (5,6,7,8,9,10,11) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), (3, 1:7), (4, 1:8), (5, 1:9), (6, 1:10), (7, 1:11), "
        "(1, 2:5), (2, 2:6), (3, 2:7), (4, 2:8), (5, 2:9), (6, 2:10), (7, 2:11), "
        "(1, 3:5), (2, 3:6), (3, 3:7), (4, 3:8), (5, 3:9), (6, 3:10), (7, 3:11), "
        "(1, 4:5), (2, 4:6), (3, 4:7), (4, 4:8), (5, 4:9), (6, 4:10), (7, 4:11)" ;
    ASSERT_EQ(result, etalon);
}

// --- (1,2,3,4,5), (6,7,8,9,10,11,12)
TEST_COMPONENT(028)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5), (6) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), "
        "(1, 2:6), "
        "(1, 3:6), "
        "(1, 4:6), "
        "(1, 5:6)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(029)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5), (6,7) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), "
        "(1, 2:6), (2, 2:7), "
        "(1, 3:6), (2, 3:7), "
        "(1, 4:6), (2, 4:7), "
        "(1, 5:6), (2, 5:7)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(030)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5), (6,7,8) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), (3, 1:8), "
        "(1, 2:6), (2, 2:7), (3, 2:8), "
        "(1, 3:6), (2, 3:7), (3, 3:8), "
        "(1, 4:6), (2, 4:7), (3, 4:8), "
        "(1, 5:6), (2, 5:7), (3, 5:8)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(031)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5), (6,7,8,9) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), (3, 1:8), (4, 1:9), "
        "(1, 2:6), (2, 2:7), (3, 2:8), (4, 2:9), "
        "(1, 3:6), (2, 3:7), (3, 3:8), (4, 3:9), "
        "(1, 4:6), (2, 4:7), (3, 4:8), (4, 4:9), "
        "(1, 5:6), (2, 5:7), (3, 5:8), (4, 5:9)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(032)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5), (6,7,8,9,10) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), (3, 1:8), (4, 1:9), (5, 1:10), "
        "(1, 2:6), (2, 2:7), (3, 2:8), (4, 2:9), (5, 2:10), "
        "(1, 3:6), (2, 3:7), (3, 3:8), (4, 3:9), (5, 3:10), "
        "(1, 4:6), (2, 4:7), (3, 4:8), (4, 4:9), (5, 4:10), "
        "(1, 5:6), (2, 5:7), (3, 5:8), (4, 5:9), (5, 5:10)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(033)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5), (6,7,8,9,10,11) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), (3, 1:8), (4, 1:9), (5, 1:10), (6, 1:11), "
        "(1, 2:6), (2, 2:7), (3, 2:8), (4, 2:9), (5, 2:10), (6, 2:11), "
        "(1, 3:6), (2, 3:7), (3, 3:8), (4, 3:9), (5, 3:10), (6, 3:11), "
        "(1, 4:6), (2, 4:7), (3, 4:8), (4, 4:9), (5, 4:10), (6, 4:11), "
        "(1, 5:6), (2, 5:7), (3, 5:8), (4, 5:9), (5, 5:10), (6, 5:11)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(034)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5), (6,7,8,9,10,11,12) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), (3, 1:8), (4, 1:9), (5, 1:10), (6, 1:11), (7, 1:12), "
        "(1, 2:6), (2, 2:7), (3, 2:8), (4, 2:9), (5, 2:10), (6, 2:11), (7, 2:12), "
        "(1, 3:6), (2, 3:7), (3, 3:8), (4, 3:9), (5, 3:10), (6, 3:11), (7, 3:12), "
        "(1, 4:6), (2, 4:7), (3, 4:8), (4, 4:9), (5, 4:10), (6, 4:11), (7, 4:12), "
        "(1, 5:6), (2, 5:7), (3, 5:8), (4, 5:9), (5, 5:10), (6, 5:11), (7, 5:12)" ;
    ASSERT_EQ(result, etalon);
}

// --- (1,2,3,4,5,6), (7,8,9,10,11,12,13)
TEST_COMPONENT(035)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6), (7) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:7), "
        "(1, 2:7), "
        "(1, 3:7), "
        "(1, 4:7), "
        "(1, 5:7), "
        "(1, 6:7)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(036)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6), (7,8) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:7), (2, 1:8), "
        "(1, 2:7), (2, 2:8), "
        "(1, 3:7), (2, 3:8), "
        "(1, 4:7), (2, 4:8), "
        "(1, 5:7), (2, 5:8), "
        "(1, 6:7), (2, 6:8)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(037)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6), (7,8,9) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:7), (2, 1:8), (3, 1:9), "
        "(1, 2:7), (2, 2:8), (3, 2:9), "
        "(1, 3:7), (2, 3:8), (3, 3:9), "
        "(1, 4:7), (2, 4:8), (3, 4:9), "
        "(1, 5:7), (2, 5:8), (3, 5:9), "
        "(1, 6:7), (2, 6:8), (3, 6:9)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(038)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6), (7,8,9,10) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:7), (2, 1:8), (3, 1:9), (4, 1:10), "
        "(1, 2:7), (2, 2:8), (3, 2:9), (4, 2:10), "
        "(1, 3:7), (2, 3:8), (3, 3:9), (4, 3:10), "
        "(1, 4:7), (2, 4:8), (3, 4:9), (4, 4:10), "
        "(1, 5:7), (2, 5:8), (3, 5:9), (4, 5:10), "
        "(1, 6:7), (2, 6:8), (3, 6:9), (4, 6:10)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(039)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6), (7,8,9,10,11) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:7), (2, 1:8), (3, 1:9), (4, 1:10), (5, 1:11), "
        "(1, 2:7), (2, 2:8), (3, 2:9), (4, 2:10), (5, 2:11), "
        "(1, 3:7), (2, 3:8), (3, 3:9), (4, 3:10), (5, 3:11), "
        "(1, 4:7), (2, 4:8), (3, 4:9), (4, 4:10), (5, 4:11), "
        "(1, 5:7), (2, 5:8), (3, 5:9), (4, 5:10), (5, 5:11), "
        "(1, 6:7), (2, 6:8), (3, 6:9), (4, 6:10), (5, 6:11)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(040)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6), (7,8,9,10,11,12) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:7), (2, 1:8), (3, 1:9), (4, 1:10), (5, 1:11), (6, 1:12), "
        "(1, 2:7), (2, 2:8), (3, 2:9), (4, 2:10), (5, 2:11), (6, 2:12), "
        "(1, 3:7), (2, 3:8), (3, 3:9), (4, 3:10), (5, 3:11), (6, 3:12), "
        "(1, 4:7), (2, 4:8), (3, 4:9), (4, 4:10), (5, 4:11), (6, 4:12), "
        "(1, 5:7), (2, 5:8), (3, 5:9), (4, 5:10), (5, 5:11), (6, 5:12), "
        "(1, 6:7), (2, 6:8), (3, 6:9), (4, 6:10), (5, 6:11), (6, 6:12)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(041)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6), (7,8,9,10,11,12,13) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:7), (2, 1:8), (3, 1:9), (4, 1:10), (5, 1:11), (6, 1:12), (7, 1:13), "
        "(1, 2:7), (2, 2:8), (3, 2:9), (4, 2:10), (5, 2:11), (6, 2:12), (7, 2:13), "
        "(1, 3:7), (2, 3:8), (3, 3:9), (4, 3:10), (5, 3:11), (6, 3:12), (7, 3:13), "
        "(1, 4:7), (2, 4:8), (3, 4:9), (4, 4:10), (5, 4:11), (6, 4:12), (7, 4:13), "
        "(1, 5:7), (2, 5:8), (3, 5:9), (4, 5:10), (5, 5:11), (6, 5:12), (7, 5:13), "
        "(1, 6:7), (2, 6:8), (3, 6:9), (4, 6:10), (5, 6:11), (6, 6:12), (7, 6:13)" ;
    ASSERT_EQ(result, etalon);
}

// --- (1,2,3,4,5,6,7), (8,9,10,11,12,13,14)
TEST_COMPONENT(042)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6,7), (8) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:8), "
        "(1, 2:8), "
        "(1, 3:8), "
        "(1, 4:8), "
        "(1, 5:8), "
        "(1, 6:8), "
        "(1, 7:8)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(043)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6,7), (8,9) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:8), (2, 1:9), "
        "(1, 2:8), (2, 2:9), "
        "(1, 3:8), (2, 3:9), "
        "(1, 4:8), (2, 4:9), "
        "(1, 5:8), (2, 5:9), "
        "(1, 6:8), (2, 6:9), "
        "(1, 7:8), (2, 7:9)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(044)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6,7), (8,9,10) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:8), (2, 1:9), (3, 1:10), "
        "(1, 2:8), (2, 2:9), (3, 2:10), "
        "(1, 3:8), (2, 3:9), (3, 3:10), "
        "(1, 4:8), (2, 4:9), (3, 4:10), "
        "(1, 5:8), (2, 5:9), (3, 5:10), "
        "(1, 6:8), (2, 6:9), (3, 6:10), "
        "(1, 7:8), (2, 7:9), (3, 7:10)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(045)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6,7), (8,9,10,11) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:8), (2, 1:9), (3, 1:10), (4, 1:11), "
        "(1, 2:8), (2, 2:9), (3, 2:10), (4, 2:11), "
        "(1, 3:8), (2, 3:9), (3, 3:10), (4, 3:11), "
        "(1, 4:8), (2, 4:9), (3, 4:10), (4, 4:11), "
        "(1, 5:8), (2, 5:9), (3, 5:10), (4, 5:11), "
        "(1, 6:8), (2, 6:9), (3, 6:10), (4, 6:11), "
        "(1, 7:8), (2, 7:9), (3, 7:10), (4, 7:11)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(046)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6,7), (8,9,10,11,12) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:8), (2, 1:9), (3, 1:10), (4, 1:11), (5, 1:12), "
        "(1, 2:8), (2, 2:9), (3, 2:10), (4, 2:11), (5, 2:12), "
        "(1, 3:8), (2, 3:9), (3, 3:10), (4, 3:11), (5, 3:12), "
        "(1, 4:8), (2, 4:9), (3, 4:10), (4, 4:11), (5, 4:12), "
        "(1, 5:8), (2, 5:9), (3, 5:10), (4, 5:11), (5, 5:12), "
        "(1, 6:8), (2, 6:9), (3, 6:10), (4, 6:11), (5, 6:12), "
        "(1, 7:8), (2, 7:9), (3, 7:10), (4, 7:11), (5, 7:12)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(047)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6,7), (8,9,10,11,12,13) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:8), (2, 1:9), (3, 1:10), (4, 1:11), (5, 1:12), (6, 1:13), "
        "(1, 2:8), (2, 2:9), (3, 2:10), (4, 2:11), (5, 2:12), (6, 2:13), "
        "(1, 3:8), (2, 3:9), (3, 3:10), (4, 3:11), (5, 3:12), (6, 3:13), "
        "(1, 4:8), (2, 4:9), (3, 4:10), (4, 4:11), (5, 4:12), (6, 4:13), "
        "(1, 5:8), (2, 5:9), (3, 5:10), (4, 5:11), (5, 5:12), (6, 5:13), "
        "(1, 6:8), (2, 6:9), (3, 6:10), (4, 6:11), (5, 6:12), (6, 6:13), "
        "(1, 7:8), (2, 7:9), (3, 7:10), (4, 7:11), (5, 7:12), (6, 7:13)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(048)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_7(pp_macro, pp_delim, (1,2,3,4,5,6,7), (8,9,10,11,12,13,14) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:8), (2, 1:9), (3, 1:10), (4, 1:11), (5, 1:12), (6, 1:13), (7, 1:14), "
        "(1, 2:8), (2, 2:9), (3, 2:10), (4, 2:11), (5, 2:12), (6, 2:13), (7, 2:14), "
        "(1, 3:8), (2, 3:9), (3, 3:10), (4, 3:11), (5, 3:12), (6, 3:13), (7, 3:14), "
        "(1, 4:8), (2, 4:9), (3, 4:10), (4, 4:11), (5, 4:12), (6, 4:13), (7, 4:14), "
        "(1, 5:8), (2, 5:9), (3, 5:10), (4, 5:11), (5, 5:12), (6, 5:13), (7, 5:14), "
        "(1, 6:8), (2, 6:9), (3, 6:10), (4, 6:11), (5, 6:12), (6, 6:13), (7, 6:14), "
        "(1, 7:8), (2, 7:9), (3, 7:10), (4, 7:11), (5, 7:12), (6, 7:13), (7, 7:14)" ;
    ASSERT_EQ(result, etalon);
}

//==============================================================================
//==============================================================================

#endif // !TEST_TOOLS_MACRO_COMB_TUPLES_7

