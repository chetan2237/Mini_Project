#include "unity.h"
#include <Mines_ops.h>

/* Modified */
#include <Mine_ops.h>
#define PROJECT_NAME    "Minesweeper"
void test_minefield_generator( void );
void test_print_minefield( void );
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_minefield_generator);
  RUN_TEST(test_print_minefield);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_minefield_generator( void ) {
  TEST_ASSERT_EQUAL('*', minefield_generator( void ));
  
}

void test_print_minefield( void ) {
  TEST_ASSERT_EQUAL('B', print_minefield( void ));
  
  
}

