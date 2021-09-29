////////////////////////////////////////////////////////////////////////////////
// Test-runner containing imported source files and main() function.
// 
// Test suite: scrabble
// 
// 
////////////////////////////////////////////////////////////////////////////////
#include "embunit.h"
#include "scrabble_ts.h"


int main()
{
    embunit_Begin("scrabble_ts");

    scrabble_ts ts;

    ts.scrabblescore_tc();

    embunit_End();
    return embunit_Failures();
}
