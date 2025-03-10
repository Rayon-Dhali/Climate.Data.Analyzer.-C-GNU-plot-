set terminal svg enhanced size 600,480
set termoption enhanced
save_encoding = GPVAL_ENCODING
set encoding utf8
#sets the title of graph, and labels the axis
set title "(Q6) Yearly Average Temperature (1960-2015)"
set xlabel "Years (1750-2050)"
set ylabel "Average Temperature"
#change the appearance of the graph (Legend, grid, axis tics, samples)
set grid
set key Left top
set xrange [ 1750 : 2020]
set xtics 50
set yrange [ 6.5 : 10.5 ]
set ytics 0.5
set format y "%.1f"
set samples 10000
set style fill solid 0.4 noborder
#customizing the different colors for each line
#plots the data files
plot 'Q1Data.txt' with l title "Average Temperature"
set style line 1 lt rgb "purple" lw 2
