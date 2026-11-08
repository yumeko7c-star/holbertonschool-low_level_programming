# Instrumentation Lab Measurements

Compile command: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 benchmarking/instrumentation_lab.c -o benchmarking/instrumentation_lab

Observed program output from one local run:

TOTAL seconds: 0.000561
BUILD_DATA seconds: 0.000220
PROCESS seconds: 0.000253
REDUCE seconds: 0.000086

Measurement boundaries:
- TOTAL starts immediately before the BUILD_DATA timer and ends after the REDUCE timer, so it includes all three phases plus clock calls and bookkeeping between them.
- Each phase timer starts immediately before its function call and stops immediately after it.
- In this run, TOTAL (0.000561 seconds) is greater than each phase measurement.
