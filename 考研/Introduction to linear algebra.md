# Chapter 2 : Solving Linear Equations

## 2.1 vectors and equations

  ax must be understood as a combination of columns of a

## 2.2 the idea of elimination

  **Gaussian elimination** : make *ax=b* become upper triangular(*ux=c*) after elimination, then back substitution starting from the bottom.
  **breakdown** :

* permanent : no solution or infinitely many
* temporary : exchange the rows

## 2.3 elimination using matrices

1. ax=

## 2.4 rules for matrix operations

### laws:
 
1. $a + b = b +a$                         **(commutative law)**
2. $c( a + b ) = c a + c b$                 **(distributive law)**
3. $a + (b + c) = (a + b) + c$       **(associative law)**
4. $a\neq b$                                     **(commutative law is usually broken)**
5. $a\times (b\times c) = (a\times b)\times c$

* matrix a times columns of b.  **columns of ab**
* rows of a times the matrix b.  **rows of ab**
* rows of a times columns of b.  **inner products (numbers in ab)**
* columns of a times rows of b.  **outer products (matrices add to AB)**

### Key ideas

1. The ( i , j ) entry of *AB* *is* ( row of A ) \* ( column j of B )
2. An m by n matrix times an n by p matrix uses m\*n\*p separate multiplications
3. Block multiplication is allowed when the block shapes match correctly 
## 2.5 Inverse Matrices ==(for square matrices)==
### Definition
$$
The\;matrix\;A\;is\;invertible\;if\;there\;exist\;a\;matrix \; A^{-1} \;that \;inverts \;A: 
Two-side inverse \;A^{-1}A = I \; and\;AA^{-1}=I
$$
### Six notes about $A^{-1}$
1. $A^{-1}$ exist only if the elimination produces n pivots.
2. The square matrix A cannot have two different inverse.
3.  If *A* is invertible , the only solution to $Ax=b$ is $x =A^{-1}b$
4. ==(Important)==**Suppose there is a nonzero vector x such that $Ax=0$**. Then *A* cannot have an inverse. No matrix can bring 0 back to x.
5. A 2 by 2 matrix is invertible if and only if $ad-bc$ is not zero:
$$
	2\;by\;2\;Inverse:\;
	\begin{bmatrix} a & b \\ c & d\end{bmatrix} ^{-1} = \frac{1}{ad - bc}
	\begin{bmatrix} d & -b \\ -c & a \end{bmatrix}
$$
6. A diagonal matrix has an inverse provided no diagonal entries are zero.
### The inverse of a product AB
$$
(AB)^{-1}=B^{-1}A^{-1}
$$
the order is also inverted.
### Calculating $A^{-1}$ by Gauss-Jordan Elimination
$$
Gauss-Jordan\quad Multiply\;\begin{bmatrix} A & I\end{bmatrix}\quad by\quad A^{-1}\quad to\; get\;\begin{bmatrix}I & A^{-1}\end{bmatrix}
$$
### Diagonal dominant matrices are invertible.
$$
proof:
$$

## 2.6 Elimination=Factorization :*A=LU*

1. Gaussian elimination (with no row changes) factors A into L times U.
2. The lower triangular matrix L contains the number $l_{ij}$ that multiply pivot rows ,going from *A* to *U*. The product *LU* adds those rows back to recover *A*.
3. On the right side we solve $Lc=b$ (forward) and $Ux= c$ (backward).
4. **Factor**: There are $\frac{1}{3}(n^3-n)$multiplications and subtractions on the left side.
5. **Solve**: There are $n^3$  multiplications and subtractions on the right side.
6. For a band matrix , change $\frac{1}{3}n^3$ to $nw^2$ and change $n^2$ to $2wn$
## 2.7 Transposes and Permutations

1. $A^T_{ij}=A_{ji}$.
2. $(AB)^T=B^TA^T$
3. $x\cdot y=x^Ty$
4. If $S^T=S$,its *LDU* factorization is symmetric :$S=LDL^T$
5. Permutation matrix P : $P^T=P^-1$
# Chapter 3  Vector spaces and SubSpaces
## 3.1 spaces of vectors
### Subspace : 
a set of vectors and satisfies two requirements 
==must contains the origin point==
### Column space $C(A)$:
linear combinations of the columns
==The system $Ax=b$ is solvable if and only if b is in the column space of A==

## 3.2 The Null space of A : Solving $Ax=0$ and $Rx=0$

### Pivots columns and free columns

### The reduced row echelon form $R$ (rref)
1. produce zero above the pivots
2. produce one in the pivots
### The rank of a matrix
r : the number of pivots

## 3.3 The complete solution to $Ax=b$

## 3.4 Independence,Basis and Dimension
### Linear independence
* The columns of A are linearly independent when the only solution to $Ax=0$ is **$x=0$
* The sequence of vectors $v_1....v_n$ is linearly independent if the only combination that gives the zero vectors is $0v_1+0v_2+....0v_n$
### Vectors that span a space
A set of vectors spans a space if their linear combination fill the space.
### A Basis of a vector space
The basis vectors are linearly independent and they span the space.
### Dimension of a vector space
The dimension of a space is the number of vectors in its every basis.