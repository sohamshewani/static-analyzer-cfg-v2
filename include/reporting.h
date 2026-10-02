```c
#ifndef REPORTING_H
#define REPORTING_H

#include <stdio.h>
#include <stdlib.h>
#include "analysis.h"

// Function prototypes for generating reports
void generate_dead_code_report(struct AnalysisReport *report);
void generate_memory_leak_report(struct AnalysisReport *report);

#endif // REPORTING_H
```