import pandas as pd
import matplotlib.pyplot as plot

dataFrame = pd.DataFrame(pd.read_csv("dataset.csv", encoding='utf-8',names=["elapsed","size","sort"]));
dataFrame = dataFrame.pivot(index="size",columns="sort",values="elapsed")
dataFrame = dataFrame[["bubblesort","quicksort","insertionsort"]];
dataFrame = dataFrame.fillna(0);
print(dataFrame)

dataFrame.plot(); 
plot.xlabel("Sorted numbers");
plot.ylabel("Elapsed time miliseconds");
plot.show();
