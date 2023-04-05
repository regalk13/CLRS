## Problems

- 1-1 Comparison of running times

> For each function f .n/ and time t in the following table, determine the largest size n of a problem that can be solved in time t, assuming that the algorithm to solve the problem takes f .n/ microseconds.

|         | 1 second | 1 minute | 1 hour | 1 day | 1 month | 1 year | 1 century |
|---------|----------|----------|--------|-------|---------|--------|-----------|
| lg(n)   | 2^(1E6)  | 2^(1E7*6)| 2^(1E9*3.6) |2^(1E10*8.64)|2^(1E12 * 2.59) |2^(1E13 * 3.15)        |  2^(1E15 * 3.15)          |
| sqrt(n) | 10^12     | 3.6 * 10^15         |  1.29* 10^19      |  7.46* 10^21     | 6.72* 10^24        |   9.95 * 10^26      |   9.96* 10^30         |
| n       | 1E6         | 1E7*6          |  1E9*3.6     |   1E10*8.64    | 1E12 * 2.59         |  1E13*3.15       |  1E15*3.15          |
| n lg n  | 6.24 * 10^4         |  2.8 * 10^6        |    1.33 * 10^8     | 2.76 * 10^9      | 7.16 * 10^10         |  7.98 * 10^11       | 6.86 * 10^13            |
| n^2     |   1000       |  7745        |  60000      |  293938     | 1609968         |  5615692      | 56156922          |
| n^3     |          |          |        |       |         |        |           |
| 2^n     |          |          |        |       |         |        |           |
| n!      |          |          |        |       |         |        |           |
