#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdio.h>
#include "../src/chess.h"
#include "tests.h"

int main(int argc, char ** argv)
{
	printf("Running Unit tests\n");
	const struct CMUnitTest tests[] = {
		cmocka_unit_test(test_resetBoard),
		cmocka_unit_test(test_parseChessNotation),
		cmocka_unit_test(test__move),
		cmocka_unit_test(test_isValidMove),
		cmocka_unit_test(test__getPieceAt),
		cmocka_unit_test(test__setPieceAt),
		cmocka_unit_test(test__checks),
		cmocka_unit_test(test_getCheckStatus),
		cmocka_unit_test(test__inCheckMate),
	};

	return cmocka_run_group_tests(tests, NULL, NULL);
}
