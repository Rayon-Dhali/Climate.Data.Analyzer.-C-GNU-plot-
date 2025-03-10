set terminal svg enhanced size 600,480
set termoption enhanced
save_encoding = GPVAL_ENCODING
set encoding utf8
#sets the title of graph, and labels the axis
set title "(Q8) Yearly Max, Min, and Average Temperature(1850-2015)"
set xlabel "Years (1850-2015)"
set ylabel "Average Temperature"
#change the appearance of the graph (Legend, grid, axis tics, samples)
set grid
set key Left top
set xrange [ 1850 : 2020]
set xtics 20
set yrange [ 1 : 18 ]
set ytics 1
set format y "%.1f"
set samples 10000
set style fill solid 0.4 noborder
#plots the three data files, line width for LAT thicker than others
#customizing the different colors for each line
plot 'Q8DataLAMax.txt' with l title "Land Average T-Max", 'Q8DataLAMin.txt' with l title "Land Average T-Min", 'Q8DataLAT.txt' with l lw 4 title "Land Average Temperature"


