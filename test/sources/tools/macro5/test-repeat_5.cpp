
#include <mygtest/modern.hpp>

#ifdef TEST_TOOLS_MACRO_REPEAT_5

#define dTEST_COMPONENT tools, macro
#define dTEST_METHOD repeat_5
#define dTEST_TAG tdd

#include <tools/macro/repeat-5.hpp>
//=== example ==================================================================
namespace
{
    #define pp_macro(index) ss << index;

    #define pp_delim(index) ss << ",";
    
    #define pp_repeat(num) \
        dREPEAT(pp_macro, pp_delim, num);

} //namespace 
//==============================================================================

TEST_COMPONENT(000)
{
    ::std::stringstream ss;
    pp_repeat(1);
    const auto result = ss.str();
    const auto etalon = "1";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}
TEST_COMPONENT(001)
{
    ::std::stringstream ss;
    pp_repeat(2);
    const auto result = ss.str();
    const auto etalon = "1,2";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}
TEST_COMPONENT(002)
{
    ::std::stringstream ss;
    pp_repeat(3);
    const auto result = ss.str();
    const auto etalon = "1,2,3";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}
TEST_COMPONENT(003)
{
    ::std::stringstream ss;
    pp_repeat(4);
    const auto result = ss.str();
    const auto etalon = "1,2,3,4";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}
TEST_COMPONENT(004)
{
    ::std::stringstream ss;
    pp_repeat(5);
    const auto result = ss.str();
    const auto etalon = "1,2,3,4,5";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}



#endif // !TEST_TOOLS_MACRO_REPEAT_5

