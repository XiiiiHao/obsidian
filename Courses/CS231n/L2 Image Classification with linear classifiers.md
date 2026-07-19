
# Data Driven Apporach
1. Collect a dataset of images and labels
2. Use Machine learning algoithms to train a classifier
3. Evaluate the classifier on new images

## First classifier: Nearest Neighbor
```c++
def train(images, labls):
	# Machine learing
	return model
```

```c++
def predict(model, test_images):
	# Use model to predict labels
	return test_labels
```
### Distance 
L1(Manhattan) distance: $d_{1}(I_{1},I_{2}) = \sum |I_{1}^{p}-I_{2}^{p}|$
L2(Euclidean) distance: $d_{2}(I_{1}, I_{2}) = \sqrt{ \sum (I_{1}^{p} - I_{2}^{p})^{2} }$
L2具有特征空间旋转不变性
$$
\begin{align} \\
R^{T}R &= I \\ \\
||Rx||_{2}^{2} &= (Rx)^{T}(Rx) = x^{T}R^{T}Rx = x^{T}x = ||x||_{2}^{2}
\end{align}
$$
旋转：同一个样本用不同的特征表达，例如PCA,神经网络隐藏层，不同坐标系

### Hyperparameters
idea #1:
* train:
* validation: choose hyperparameters
* test: evaluate
idea #2:
cross-validation:  
	1.split data into folds
	try each fold as validation and average the results

## Linear classifier

$$
f(x,W)_{10 \times 1} = W_{10 \times 3072}x_{3072 \times 1} + b_{10 \times 1}
$$

### choose a good w
1. define a loss function
2. come up with a way of efficiently finding the parameters that minimize the loss function.(optimization)

# Softmax Classifier(Multinomial Logistic Regression)

$$
\begin{align}
s = f(x_{i},W) \\
P(Y = k|X = x_{i}) = \frac{e^{s}k}{\sum_{j}e^{s}j} \\ 
L_{i} = - \log P(Y = y_{i}|X = x_{i})
\end{align}
$$
