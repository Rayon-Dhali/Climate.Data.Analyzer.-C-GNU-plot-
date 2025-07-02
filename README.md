# 🌍 Climate Data Analyzer (C + Gnuplot)

**Visualizing Climate Change Through C Programming and Gnuplot**

---

## 📘 Introduction

The purpose of this project is to analyze, calculate, and draw conclusions from global weather data collected from various monitoring systems between 1750 and 2015.

The C program performs all data processing:
- Reads and parses CSV data
- Calculates trends
- Generates graphs using **Gnuplot**

This project is ideal for:
- Students studying climate change
- Researchers exploring long-term temperature shifts
- Developers working with data visualization in C

---

## 🧠 Project Objectives

- Calculate **yearly average land temperatures** (1760–2015)
- Find **average temperature per century**
- Compute **monthly averages** (1900–2015)
- Identify **hottest/coldest month and year**
- Compare **Land vs. Land+Ocean temps**
- Generate visualizations (line graphs, bar plots, error bars)

---

## 🧪 Methodology (Summarized)

### 📌 Yearly Averages (1760–2015)

Read each year’s 12 months and calculate the average. Ignore 1750–1759.

### 📌 Century Averages

Group data by:
- 18th century (1760–1799)
- 19th century (1800–1899)
- 20th century (1900–1999)
- 21st century (2000–2015)

Calculate one average per group.

### 📌 Monthly Averages (1900–2015)

Average each calendar month (January to December) across all years.

---

📄 [**View full PDF report with charts and detailed explanations →**](./Climate_Data_Analyzer_Report.pdf)
