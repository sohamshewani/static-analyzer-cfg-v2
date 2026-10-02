```c
#include <stdio.h>
#include <stdlib.h>
#include "reporting.h"

// Generate dead code report
void generate_dead_code_report(struct AnalysisReport *report) {
    if (report->dead_code_count > 0) {
        printf("Detected %d dead code statements.", report->dead_code_count);
    } else {
        printf("No dead code detected.");
    }
}

// Generate memory leak report
void generate_memory_leak_report(struct AnalysisReport *report) {
    if (report->memory_leaks_count > 0) {
        printf("Detected %d memory leaks.", report->memory_leaks_count);
    } else {
        printf("No memory leaks detected.");
    }
}

// Cleanup
void cleanup_reporting() {
    // Cleanup any resources if necessary
}
```