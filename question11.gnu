set terminal svg enhanced size 600,480
set termoption enhanced
save_encoding = GPVAL_ENCODING
set encoding utf8
#sets the titles
set title "(Q11) Land Average Temperature, and Land Ocean Average Temperature (1850-2015)"
#sets the xlabels
set xlabel "Years (1850-2015)"
#sets the ylabels
set ylabel "Average Temperature"
#appearance of graphs, grid, legend, axis tics
set grid
set key Left top
set xrange [ 1850 : 2020]
set xtics 20
set yrange [ 5 : 20 ]
set ytics 1
set format y "%.1f"
set samples 10000
#style of the lines
set style fill solid 0.4 noborder
plot "Q11DataLAT.txt" with l title "Land Average Temperature", "Q11DataLOAT.txt" with l title 'Land and Ocean Average Temperature'
set style line 1 lt rgb "purple" lw 3
set style line 2 lt rgb "red" lw 3
