#include <analysis.h>
#include <cfg.h>
#include <reporting.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s [test|integration-test]", argv[0]);
		return 1;
	}

	if (strcmp(argv[1], "test") == 0) {
		test();
	} else if (strcmp(argv[1], "integration-test") == 0) {
		integrationTest();
	} else {
		printf("Unknown test type.");
		return 1;
	}

	return 0;
}