#include "test.h"

void OutputTestResult(int failedTests, char * testName){
	if(failedTests > 0){
		printf("\n%d tests failed.", failedTests);
	}
	printf("\nTesting %s completed.", testName);
}

int main(){
	OutputTestResult(TestCreateEmptyNode(), "TestCreateEmptyNode");
	printf("\n\n*** Testing completed.***\n\n");
	return 0;
}