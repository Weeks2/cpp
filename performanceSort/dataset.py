import pandas as pd
import matplotlib.pyplot as plot

dataFrame = pd.DataFrame(pd.read_csv("dataset.csv", encoding='utf-8',names=["elapsed","size","sort"]));
dataFrame.pivot(index="size",columns="sort",values="elapsed").fillna(0).plot(); 
plot.show();
