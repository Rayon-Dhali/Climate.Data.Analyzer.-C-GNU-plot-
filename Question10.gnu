set terminal svg enhanced size 600,480
set termoption enhanced
save_encoding = GPVAL_ENCODING
set encoding utf8
#sets the title of the graph
set title "(Q10) Yearly Average Temperature with Uncertainties (2000-2015)"
#sets the labels for each axis
set xlabel "Years (2000 - 2015)"
set ylabel "Average Temperature"
#sets the appearance of the graph (Legends, axis tics, format, line type)
set grid
set key Left top
set xrange [ 2000 : 2015]
set xtics 2
set yrange [ 2 : 18 ]
set ytics 2
set format y "%.1f"
set samples 10000
set style fill solid 0.4 noborder
#plots with yerror uncertainties and solid line with different colors
plot 'Q10DataLAT.txt' with yerr title "Uncertainty", 'Q10DataLAT.txt' with line title 'Temperature'
