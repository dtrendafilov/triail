/*
** License and Copyright 2015 and beyond
*/
#include <cstdio>

/**
 * get the answer
 * @return the answer
 */
int the_answer() {
    return 42;
}

/**
 * Entry point
 */
int main()
{
    std::printf("The answer is %d\n", the_answer());
    return 0;
}
