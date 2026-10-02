```c
#include <stdio.h>
#include <stdlib.h>
#include "cfg.h"

// Function to build the control flow graph
struct ControlFlowGraph build_control_flow_graph(const char *source_code) {
    struct ControlFlowGraph cfg;
    cfg.num_nodes = 10; // Assume a simple structure for demonstration
    cfg.num_edges = 15; // Assume a simple structure for demonstration
    cfg.nodes = malloc(cfg.num_nodes * sizeof(bool));
    cfg.edges = malloc(cfg.num_edges * sizeof(int));

    // Initialize nodes and edges
    for (int i = 0; i < cfg.num_nodes; ++i) {
        cfg.nodes[i] = true; // Assume all nodes are live
    }
    for (int i = 0; i < cfg.num_edges; ++i) {
        cfg.edges[i] = i; // Simple edge mapping
    }

    return cfg;
}

// Cleanup
void cleanup_cfg(struct ControlFlowGraph *cfg) {
    free(cfg->nodes);
    free(cfg->edges);
}
```