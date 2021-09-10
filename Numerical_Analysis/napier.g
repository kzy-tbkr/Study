# napier.g
# ネイピア数との二乗誤差をプロットする
# napier.c用

set logscale x
set xlabel "num"
set ylabel "error RMS"
plot "napier.dat" with linespoints
