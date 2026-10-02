```c
#ifndef CFG_H
#define CFG_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Control Flow Graph structure
struct ControlFlowGraph {
    int num_nodes;
    int num_edges;
    bool *nodes;
    int *edges;
};

// Function prototypes for building the CFG
struct ControlFlowGraph build_control_flow_graph(const char *source_code);

#endif // CFG_H
```