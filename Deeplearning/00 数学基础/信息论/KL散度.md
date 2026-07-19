## 一句话理解

衡量两个概率分布之间差异。

---

## 为什么提出

MSE比较的是数值。

很多机器学习问题输出的是概率。

需要一种比较概率的方法。

---

## 数学定义

D_{KL}(P||Q)

---

## 图像理解

真实分布
↓

预测分布

KL越小
说明越接近。

---

## 为什么不是距离

- 不满足对称性
- 不满足三角不等式

---

## 深度学习中的作用

- Variational AutoEncoder
- 知识蒸馏
- RL
- Diffusion

---

## 与交叉熵关系

CrossEntropy = Entropy + KL

因此训练分类网络实际上就在最小化KL。

---

## PyTorch

```python
torch.nn.KLDivLoss(...)