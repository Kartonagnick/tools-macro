
#include <mygtest/modern.hpp>

#ifdef TEST_TOOLS_MACRO_COMB_TUPLES_5

#define dTEST_COMPONENT tools, macro
#define dTEST_METHOD comb_tuples_5
#define dTEST_TAG tdd

#include <tools/macro/comb-tuples-5.hpp>
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

// --- (1), (2,3,4,5,6)
TEST_COMPONENT(000)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1), (1) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:1)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(001)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1), (2,3) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(002)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1), (2,3,4) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3), (3, 1:4)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(003)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1), (2,3,4,5) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3), (3, 1:4), (4, 1:5)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(004)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1), (2,3,4,5,6) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:2), (2, 1:3), (3, 1:4), (4, 1:5), (5, 1:6)";
    ASSERT_EQ(result, etalon);
}

// --- (1,2), (3,4,5,6,7)
TEST_COMPONENT(005)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2), (3) );
    const auto result = ss.str();
    const auto etalon = "(1, 1:3), (1, 2:3)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(006)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2), (3,4) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), "
        "(1, 2:3), (2, 2:4)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(007)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2), (3,4,5) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), (3, 1:5), "
        "(1, 2:3), (2, 2:4), (3, 2:5)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(008)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2), (3,4,5,6) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), (3, 1:5), (4, 1:6), "
        "(1, 2:3), (2, 2:4), (3, 2:5), (4, 2:6)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(009)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2), (3,4,5,6,7) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:3), (2, 1:4), (3, 1:5), (4, 1:6), (5, 1:7), "
        "(1, 2:3), (2, 2:4), (3, 2:5), (4, 2:6), (5, 2:7)";
    ASSERT_EQ(result, etalon);
}

// --- (1,2,3), (4,5,6,7,8)
TEST_COMPONENT(010)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3), (4) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), "
        "(1, 2:4), "
        "(1, 3:4)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(011)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3), (4,5) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), "
        "(1, 2:4), (2, 2:5), "
        "(1, 3:4), (2, 3:5)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(012)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3), (4,5,6) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), (3, 1:6), "
        "(1, 2:4), (2, 2:5), (3, 2:6), "
        "(1, 3:4), (2, 3:5), (3, 3:6)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(013)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3), (4,5,6,7) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), (3, 1:6), (4, 1:7), "
        "(1, 2:4), (2, 2:5), (3, 2:6), (4, 2:7), "
        "(1, 3:4), (2, 3:5), (3, 3:6), (4, 3:7)";
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(014)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3), (4,5,6,7,8) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:4), (2, 1:5), (3, 1:6), (4, 1:7), (5, 1:8), "
        "(1, 2:4), (2, 2:5), (3, 2:6), (4, 2:7), (5, 2:8), "
        "(1, 3:4), (2, 3:5), (3, 3:6), (4, 3:7), (5, 3:8)";
    ASSERT_EQ(result, etalon);
}

// --- (1,2,3,4), (5,6,7,8,9)
TEST_COMPONENT(015)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4), (5) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), "
        "(1, 2:5), "
        "(1, 3:5), "
        "(1, 4:5)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(016)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4), (5,6) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), "
        "(1, 2:5), (2, 2:6), "
        "(1, 3:5), (2, 3:6), "
        "(1, 4:5), (2, 4:6)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(017)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4), (5,6,7) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), (3, 1:7), "
        "(1, 2:5), (2, 2:6), (3, 2:7), "
        "(1, 3:5), (2, 3:6), (3, 3:7), "
        "(1, 4:5), (2, 4:6), (3, 4:7)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(018)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4), (5,6,7,8) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), (3, 1:7), (4, 1:8), "
        "(1, 2:5), (2, 2:6), (3, 2:7), (4, 2:8), "
        "(1, 3:5), (2, 3:6), (3, 3:7), (4, 3:8), "
        "(1, 4:5), (2, 4:6), (3, 4:7), (4, 4:8)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(019)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4), (5,6,7,8,9) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:5), (2, 1:6), (3, 1:7), (4, 1:8), (5, 1:9), "
        "(1, 2:5), (2, 2:6), (3, 2:7), (4, 2:8), (5, 2:9), "
        "(1, 3:5), (2, 3:6), (3, 3:7), (4, 3:8), (5, 3:9), "
        "(1, 4:5), (2, 4:6), (3, 4:7), (4, 4:8), (5, 4:9)" ;
    ASSERT_EQ(result, etalon);
}

// --- (1,2,3,4,5), (6,7,8,9,10)
TEST_COMPONENT(020)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4,5), (6) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), "
        "(1, 2:6), "
        "(1, 3:6), "
        "(1, 4:6), "
        "(1, 5:6)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(021)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4,5), (6,7) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), "
        "(1, 2:6), (2, 2:7), "
        "(1, 3:6), (2, 3:7), "
        "(1, 4:6), (2, 4:7), "
        "(1, 5:6), (2, 5:7)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(022)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4,5), (6,7,8) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), (3, 1:8), "
        "(1, 2:6), (2, 2:7), (3, 2:8), "
        "(1, 3:6), (2, 3:7), (3, 3:8), "
        "(1, 4:6), (2, 4:7), (3, 4:8), "
        "(1, 5:6), (2, 5:7), (3, 5:8)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(023)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4,5), (6,7,8,9) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), (3, 1:8), (4, 1:9), "
        "(1, 2:6), (2, 2:7), (3, 2:8), (4, 2:9), "
        "(1, 3:6), (2, 3:7), (3, 3:8), (4, 3:9), "
        "(1, 4:6), (2, 4:7), (3, 4:8), (4, 4:9), "
        "(1, 5:6), (2, 5:7), (3, 5:8), (4, 5:9)" ;
    ASSERT_EQ(result, etalon);
}
TEST_COMPONENT(024)
{
    ::std::stringstream ss;
    dCOMB_TUPLES_MAX_5(pp_macro, pp_delim, (1,2,3,4,5), (6,7,8,9,10) );
    const auto result = ss.str();
    const auto etalon = 
        "(1, 1:6), (2, 1:7), (3, 1:8), (4, 1:9), (5, 1:10), "
        "(1, 2:6), (2, 2:7), (3, 2:8), (4, 2:9), (5, 2:10), "
        "(1, 3:6), (2, 3:7), (3, 3:8), (4, 3:9), (5, 3:10), "
        "(1, 4:6), (2, 4:7), (3, 4:8), (4, 4:9), (5, 4:10), "
        "(1, 5:6), (2, 5:7), (3, 5:8), (4, 5:9), (5, 5:10)" ;
    ASSERT_EQ(result, etalon);
}

//==============================================================================
//==============================================================================

#endif // !TEST_TOOLS_MACRO_COMB_TUPLES_5

