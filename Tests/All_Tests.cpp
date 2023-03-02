
#include"Polynomial_Tests.cpp"

int main(int argc, char const *argv[])
{
    testing::InitGoogleTest();

    if(RUN_ALL_TESTS())
        printf("FAILURE\n");
    else
        printf("SUCCESS\n");
        

    return 0;
}
