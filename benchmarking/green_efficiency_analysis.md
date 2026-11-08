# Green Efficiency Analysis

## Measurement Methodology

This analysis uses the recorded outputs in baseline_loop-metrics.md, comparison_algorithms-metrics.md, and instrumentation_lab-metrics.md. The baseline program ran 100,000,000 iterations three times: 0.123545, 0.134093, and 0.098980 seconds. Their mean is 0.118873 seconds, with a recorded range of 0.098980-0.134093 seconds.

The comparison log contains six output blocks, although some headings repeat "Run 2" and "Run 3." To avoid discarding recorded data, I calculated means across all six blocks. The naive times are 0.833928, 0.705033, 0.845373, 0.720049, 0.703732, and 0.751191 seconds. The single-pass times are 0.000026, 0.000022, 0.000036, 0.000024, 0.000024, and 0.000036 seconds. Their six-run means are 0.759884 and 0.000028 seconds, respectively. The ratio of those means is approximately 27,139 to 1.

The instrumentation program was recorded once: TOTAL 0.000561 seconds, BUILD_DATA 0.000220, PROCESS 0.000253, and REDUCE 0.000086. The three phase times sum to 0.000559 seconds.

## Observed Performance Differences

In the baseline, the slowest recorded run took 0.134093 seconds and the fastest took 0.098980 seconds, a difference of 0.035113 seconds. This is variation across the three recorded executions; the log does not establish its cause.

For the comparison program, the naive implementation took between 0.703732 and 0.845373 seconds across the six logged blocks. The single-pass implementation took between 0.000022 and 0.000036 seconds. The reported results were also different: the naive implementation printed 625,025,000, while the single-pass implementation printed 25,000. Therefore, the large runtime gap is an observation about these two recorded implementations; it does not demonstrate a speedup for producing an identical result.

## Relation Between Runtime and Energy Consumption

None of the three measurement files records watts, joules, watt-hours, or another energy value. They record execution time only. The instrumentation output divides time among three phases, but it does not measure their power draw. Consequently, these results cannot establish which program consumed less energy or quantify an energy reduction. Runtime is useful evidence about duration, but the recorded outputs alone do not support an energy claim.

## Limitations of the Experiment

The baseline contains three runs, the instrumentation task contains one, and the comparison file contains six blocks with repeated run labels. The comparison summary already in that file reports means of 0.766765 seconds and 0.000032 seconds, which match its final three blocks rather than all six recorded blocks. This analysis states its six-block calculation explicitly to make the denominator clear.

The comparison results differ, so they are not evidence of equal work with equal output. All times are reported to six decimal places; the instrumentation phase times sum to 0.000559 seconds, while TOTAL is 0.000561 seconds. No recorded file includes an energy reading or enough repeated instrumentation runs to estimate its timing variability.

## Practical Engineering Takeaway

These outputs support a clear runtime observation: on the recorded runs, the naive implementation took far longer than the single-pass implementation. They do not support calling it more energy-efficient, because energy was not measured and the printed results differ. A stronger efficiency comparison should first verify that both implementations produce the same required result, then record repeated timings and energy readings for the same workload. Keep the raw outputs with the analysis so each average and conclusion can be checked.