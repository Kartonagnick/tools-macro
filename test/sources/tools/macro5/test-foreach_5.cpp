
#include <mygtest/modern.hpp>

#ifdef TEST_TOOLS_MACRO_FOREACH_5

#define dTEST_COMPONENT tools, macro
#define dTEST_METHOD foreach_5
#define dTEST_TAG tdd

#include <tools/macro/foreach-5.hpp>
//=== example ==================================================================
namespace
{
    #define pp_beg(count) \
        ss << "beg{" << count << "}";

    #define pp_macro(index, arg, element) \
        ss << "[" << index << ", " << #arg << " VS " << #element "]";

    #define pp_delim(index) \
        ss << ",";

    #define pp_end(count) \
        ss << '{' << count << "}end";

    #define pp_enum(arg, ...)                                \
        pp_beg(dGET_ARGS_COUNT_MAX_5(__VA_ARGS__))           \
        dFOREACH_MAX_5(pp_macro, pp_delim, arg, __VA_ARGS__) \
        pp_end(dGET_ARGS_COUNT_MAX_5(__VA_ARGS__))

} //namespace 
//==============================================================================

TEST_COMPONENT(000)
{
    ::std::stringstream ss;
    pp_enum(Arg, A);

    const auto result = ss.str();
    const auto etalon = "beg{1}[1, Arg VS A]{1}end";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}
TEST_COMPONENT(001)
{
    ::std::stringstream ss;
    pp_enum(Arg, A,B);

    const auto result = ss.str();
    const auto etalon = "beg{2}[1, Arg VS A],[2, Arg VS B]{2}end";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}
TEST_COMPONENT(002)
{
    ::std::stringstream ss;
    pp_enum(Arg, A,B,C);

    const auto result = ss.str();
    const auto etalon = "beg{3}[1, Arg VS A],[2, Arg VS B],[3, Arg VS C]{3}end";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}
TEST_COMPONENT(004)
{
    ::std::stringstream ss;
    pp_enum(Arg, A,B,C,D);

    const auto result = ss.str();
    const auto etalon = "beg{4}[1, Arg VS A],[2, Arg VS B],[3, Arg VS C],[4, Arg VS D]{4}end";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}
TEST_COMPONENT(005)
{
    ::std::stringstream ss;
    pp_enum(Arg, A,B,C,D,F);

    const auto result = ss.str();
    const auto etalon = "beg{5}[1, Arg VS A],[2, Arg VS B],[3, Arg VS C],[4, Arg VS D],[5, Arg VS F]{5}end";
    ASSERT_EQ(result, etalon)
        << "etalon: " << etalon << '\n'
        << "result: " << result << '\n'
    ;
}


#endif // !TEST_TOOLS_MACRO_FOREACH_5

