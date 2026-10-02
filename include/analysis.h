```c
#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "cfg.h"
#include "reporting.h"

// Function prototypes for static analysis
void analyze_code(const char *source_code, struct ControlFlowGraph *cfg);
void identify_dead_code(struct ControlFlowGraph *cfg, struct AnalysisReport *report);
void detect_memory_leaks(struct ControlFlowGraph *cfg, struct AnalysisReport *report);

#endif // ANALYSIS_H
```