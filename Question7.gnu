set terminal svg enhanced size 600,480
set termoption enhanced
save_encoding = GPVAL_ENCODING
set encoding utf8
#sets the titles, axis titles
set title "(Q7) Yearly Average Temperature (0-100 19th, 20th Centuries)"
set xlabel "Years (0-100)"
set ylabel "Average Temperature"
#change the appearance of the graph (Legend, grid, axis tics, samples)
set grid
set key Left top
set xrange [ 0 : 100]
set xtics 10
set yrange [ 6.5 : 10 ]
set ytics 0.5
set format y "%.1f"
set samples 10000
#customizing the different colors for each line, and plotting the data files
plot 'Q7Data19th.txt' with l title "19th Century", 'Q7Data20th.txt' with l title "20th Century"
set style line 1 lt rgb "purple" lw 2
set style line 2 lt rgb "green" lw 2
