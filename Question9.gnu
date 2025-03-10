#to make it possible to have 3 narrow plots in 1 row
set multiplot layout 1, 3
set termoption enhanced
save_encoding = GPVAL_ENCODING
set encoding utf8
#sets the title
set title "(Q9) Average Temperature"
#sets the y labels
set ylabel "Average Temperature (0-20)"
#sets the x label name
set xlabel "Century"
#style of the gnuplot graphs
set style data histogram
set style histogram cluster gap 1
set style fill solid
set grid
#sets the legend to the top
set key top
set xtics format ""
#y axis range (Different for each subplot)
set yrange [ 0 : 20 ]
set ytics 3
set style histogram 
plot "Q9Data19AVG.txt" using 2:xtic(1) title "19 Avg" linecolor "steelblue", \
	 "Q9Data20AVG.txt" using 2:xtic(1) title "20 Avg" linecolor "skyblue", \
     "Q9Data21AVG.txt" using 2:xtic(1) title "21 Avg" linecolor "purple"

set title "(Q9) Minimum Temperature"
set ylabel "Temperature (0-7)"
set style data histogram
set style histogram cluster gap 1
set style fill solid
set grid
unset key
set xtics format ""
set yrange [ 0 : 7 ]
set ytics 1
set style histogram 

plot "Q9Data19MIN.txt" using 2:xtic(1) title "19 Min" linecolor "steelblue", \
	 "Q9Data20MIN.txt" using 2:xtic(1) title "20 Min" linecolor "skyblue", \
     "Q9Data21MIN.txt" using 2:xtic(1) title "21 Min" linecolor "purple"

set title "(Q9) Maximum Temperature"
set ylabel "Temperature (0-20)"
set style data histogram
set style histogram cluster gap 1
set style fill solid
set grid
unset key
set xtics format ""
set yrange [ 0 : 20 ]
set ytics 4
set style histogram 

plot "Q9Data19MAX.txt" using 2:xtic(1) title "19 Max" linecolor "steelblue", \
	 "Q9Data20MAX.txt" using 2:xtic(1) title "20 Max" linecolor "skyblue", \
     "Q9Data21MAX.txt" using 2:xtic(1) title "21 Max" linecolor "purple"
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     