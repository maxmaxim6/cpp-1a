
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;
using namespace std;



TEST_CASE("Test replacement of v and w") 
{
    string text = "volkswagen is great car";
    CHECK(find(text, "volksvagen") == string("volkswagen"));
    CHECK(find(text, "wolkswagen") == string("volkswagen"));
    CHECK(find(text, "volkswagen") == string("volkswagen"));
    CHECK(find(text, "wolksvagen") == string("volkswagen"));

}
TEST_CASE("Test replacement of b and f") 
{
    string text = "buffalo is an animal";
    CHECK(find(text, "fuffalo") == string("buffalo"));
    CHECK(find(text, "bubfalo") == string("buffalo"));
    CHECK(find(text, "fufbalo") == string("buffalo"));
    CHECK(find(text, "fubbalo") == string("buffalo"));
    CHECK(find(text, "fufbalo") == string("buffalo"));
    CHECK(find(text, "fubfalo") == string("buffalo"));

}
TEST_CASE("Test replacement of b and p") 
{
    string text = "the pitch is blue";
    CHECK(find(text, "pitch") == string("pitch"));
    CHECK(find(text, "bitch") == string("pitch"));
    CHECK(find(text, "blue") == string("blue"));
    CHECK(find(text, "plue") == string("blue"));
}
TEST_CASE("Test replacement of p and b") 
{
    string text = "Danny happy right now";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
}
TEST_CASE("Test replacement of g and j") 
{
    string text = "sergio Ramos jajaja";
    CHECK(find(text, "sergio") == string("sergio"));
    CHECK(find(text, "serjio") == string("sergio"));
    CHECK(find(text, "jagaja") == string("jajaja"));
    CHECK(find(text, "gagaga") == string("jajaja"));
}
TEST_CASE("Test replacement of c and k") 
{
    string text = "i like kfc";
    CHECK(find(text, "kfc") == string("kfc"));
    CHECK(find(text, "cfk") == string("kfc"));
    CHECK(find(text, "kfk") == string("kfc"));
    CHECK(find(text, "cfc") == string("kfc"));
}
TEST_CASE("Test replacement of c and q") 
{
    string text = "the army conquers";
    CHECK(find(text, "concuers") == string("conquers"));
    CHECK(find(text, "conquers") == string("conquers"));
    CHECK(find(text, "qoncuers") == string("conquers"));
    CHECK(find(text, "qonquers") == string("conquers"));
}
TEST_CASE("Test replacement of k and q") 
{
    string text = "quit smoking";
    CHECK(find(text, "quit") == string("quit"));
    CHECK(find(text, "kuit") == string("quit"));
    CHECK(find(text, "smoking") == string("smoking"));
    CHECK(find(text, "smoqing") == string("smoking"));
}
TEST_CASE("Test replacement of s and z") 
{
    string text = "Dominik szoboszlai";
    CHECK(find(text, "ssoboszlai") == string("szoboszlai"));
    CHECK(find(text, "zzoboszlai") == string("szoboszlai"));
    CHECK(find(text, "szobozslai") == string("szoboszlai"));
    CHECK(find(text, "zsobozzlai") == string("szoboszlai"));
}
TEST_CASE("Test replacement of d and t") 
{
    string text = "god dammit";
    CHECK(find(text, "tammit") == string("dammit"));
    CHECK(find(text, "dammid") == string("dammit"));
    CHECK(find(text, "dammit") == string("dammit"));
    CHECK(find(text, "tammid") == string("dammit"));
    CHECK(find(text, "got") == string("god"));
}
TEST_CASE("Test replacement of o and u") 
{
    string text = "covid-19 situation is bad";
    CHECK(find(text, "situation") == string("situation"));
    CHECK(find(text, "sitoatiun") == string("situation"));
    CHECK(find(text, "sitoation") == string("situation"));
    CHECK(find(text, "situatiun") == string("situation"));
    CHECK(find(text, "cuvid-19") == string("covid-19"));
}
TEST_CASE("Test replacement of i and y") 
{
    string text = "you like c++";
    CHECK(find(text, "you") == string("you"));
    CHECK(find(text, "iou") == string("you"));
    CHECK(find(text, "like") == string("like"));
    CHECK(find(text, "lyke") == string("like"));
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "HappY xXx yyY HeLLO MY FRIEND";
    CHECK(find(text, "happy") == string("HappY"));
    CHECK(find(text, "XXX") == string("xXx"));
    CHECK(find(text, "XxX") == string("xXx"));
    CHECK(find(text, "YYy") == string("yyY"));
    CHECK(find(text, "yYy") == string("yyY"));
    CHECK(find(text, "hello") == string("HeLLO"));
    CHECK(find(text, "HeLlO") == string("HeLLO"));
    CHECK(find(text, "My") == string("MY"));
    CHECK(find(text, "friend") == string("FRIEND"));
    CHECK(find(text, "fRiEnD") == string("FRIEND"));
}
TEST_CASE("Test replacement of v and w with replacement of lower-case and upper-case") 
{
    string text = "VolKswAgEn is great car";
    CHECK(find(text, "volksvagen") == string("VolKswAgEn"));
    CHECK(find(text, "wolkswagen") == string("VolKswAgEn"));
    CHECK(find(text, "volkswageN") == string("VolKswAgEn"));
    CHECK(find(text, "wolksvagen") == string("VolKswAgEn"));

}
TEST_CASE("Test replacement of b and f with replacement of lower-case and upper-case") 
{
    string text = "buffalo is an animal";
    CHECK(find(text, "FufFaLo") == string("buffalo"));
    CHECK(find(text, "buBfalO") == string("buffalo"));
    CHECK(find(text, "FUfbAlO") == string("buffalo"));
    CHECK(find(text, "fuBBalo") == string("buffalo"));
    CHECK(find(text, "FUFBalO") == string("buffalo"));
    CHECK(find(text, "fUbFaLo") == string("buffalo"));

}
TEST_CASE("Test replacement of b and p with replacement of lower-case and upper-case") 
{
    string text = "the PitCh is Blue";
    CHECK(find(text, "pitch") == string("PitCh"));
    CHECK(find(text, "bitch") == string("PitCh"));
    CHECK(find(text, "blue") == string("Blue"));
    CHECK(find(text, "plue") == string("Blue"));
}
TEST_CASE("Test replacement of p and b with replacement of lower-case and upper-case") 
{
    string text = "Danny HAPPY right now";
    CHECK(find(text, "HapPy") == string("HAPPY"));
    CHECK(find(text, "haBby") == string("HAPPY"));
    CHECK(find(text, "haPBy") == string("HAPPY"));
    CHECK(find(text, "haBPY") == string("HAPPY"));
}
TEST_CASE("Test replacement of g and j with replacement of lower-case and upper-case") 
{
    string text = "SerGio Ramos JAJaja";
    CHECK(find(text, "sERgio") == string("SerGio"));
    CHECK(find(text, "seRJio") == string("SerGio"));
    CHECK(find(text, "JAGaja") == string("JAJaja"));
    CHECK(find(text, "gagAGA") == string("JAJaja"));
}
TEST_CASE("Test replacement of c and k with replacement of lower-case and upper-case") 
{
    string text = "i likE kFc";
    CHECK(find(text, "KFC") == string("kFc"));
    CHECK(find(text, "Cfk") == string("kFc"));
    CHECK(find(text, "kfK") == string("kFc"));
    CHECK(find(text, "CfC") == string("kFc"));
}
TEST_CASE("Test replacement of c and q with replacement of lower-case and upper-case") 
{
    string text = "the army conQUERS";
    CHECK(find(text, "CONCuers") == string("conQUERS"));
    CHECK(find(text, "coNquErs") == string("conQUERS"));
    CHECK(find(text, "qonCuErS") == string("conQUERS"));
    CHECK(find(text, "QONQuers") == string("conQUERS"));
}
TEST_CASE("Test replacement of k and q with replacement of lower-case and upper-case") 
{
    string text = "KUIT SMOQING";
    CHECK(find(text, "quit") == string("KUIT"));
    CHECK(find(text, "kuit") == string("KUIT"));
    CHECK(find(text, "smoKing") == string("SMOQING"));
    CHECK(find(text, "SMoqing") == string("SMOQING"));
}
TEST_CASE("Test replacement of s and z with replacement of lower-case and upper-case") 
{
    string text = "Dominik SZoboszlai";
    CHECK(find(text, "ssoboszlai") == string("SZoboszlai"));
    CHECK(find(text, "zzoboszLAI") == string("SZoboszlai"));
    CHECK(find(text, "szoboZSlai") == string("SZoboszlai"));
    CHECK(find(text, "ZSoboZZlai") == string("SZoboszlai"));
}
TEST_CASE("Test replacement of d and t with replacement of lower-case and upper-case") 
{
    string text = "goD TammiD";
    CHECK(find(text, "tammit") == string("TammiD"));
    CHECK(find(text, "dammid") == string("TammiD"));
    CHECK(find(text, "dammit") == string("TammiD"));
    CHECK(find(text, "tammid") == string("TammiD"));
    CHECK(find(text, "goT") == string("goD"));
}
