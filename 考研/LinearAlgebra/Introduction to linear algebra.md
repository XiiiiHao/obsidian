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

## 3.5 Dimensions of the Four Subspaces
1. The **row space** is $C(A^T)$,a subspace of $R^n$, dim = r, basis : pivot rows.
2. The **column space** is $C(A)$,a subspace of $R^m$, dim = r , basis : pivot columns.
3. The **nullspace** is $N(A)$,a subspace of $R^n$, dim = n-r , basis : free columns.
4. The **left nullspace** is $N(A^T)$, a subspace of $R^m$,dim = m-r , free rows
### Rank one matrix
$A=uv^T$

## Graphs,Networks,Incidence Matrices
A graph include nodes  and edges.Its matrix form is m by n ,with m = \#edges, n = \#nodes.


$Indicence\; Matrix\;A=\begin{bmatrix} -1& 1& 0& 0 \\ 0& -1& 1& 0 \\ -1& 0& 1& 0 \\-1& 0& 0& 1 \\0& 0& -1& 1  \end{bmatrix} \quad dim \;C(A)=3$
$N(A)=\begin{bmatrix}1\\1\\1\\1\end{bmatrix}\quad dim\;N(A)=1$
$A^Ty=0 \quad  basis\;for \;N(A^T)\quad\begin{bmatrix}1\\1\\-1\\0\\0\end{bmatrix} \quad\begin{bmatrix}0\\0\\1\\-1\\1\end{bmatrix}\quad (ps:two\;loop)$
 The solution y satisfy the Kirchhoff's current law.
 $dim\;N(A^T)=5-3=2\quad\#loops=\#edges-(\#nodes-1)$
 The Euler's Formula.
 $A^TcAx=0$

# Chapter 4 Orthogonality
## 4.1 Orthogonality of Four Subspaces
### Definition of Orthogonality
Subspace V and W are orthogonal if every $v$ in $V$ is orthogonal to every $w$ in $W$
* $Ax=0$, nullspace is orthogonal to rowspace
* $A^Ty=0$,left-nullspace is orthogonal to column-space
* ==don't intersect in any non zero vectors==
### Orthogonal Complements
If $W$ contains all vectors perpendicular to $V$ (and vice versa).

### $A^TA$
 * ==$N(^TA)=N(A)$==, rank of $A^TA$ = rank of $A$
* $A^TA$ is invertible exactly if  A has independent columns.

## 4.2 Projections

### Why projections?
Because $Ax=b$ may have no solutions. We can solve the equation $A\hat{x}=p$ to get a approximate solution. The essence of projection is to get a closet vector $p$ to $b$ in the column space of $A$.

### The Projection Matrix $P$
$$
p=A\hat x .
$$
$e=b-p$ is perpendicular to $A$ , so $$A^T(b-A\hat x)=0 \quad or\quad A^TA\hat x=A^Tb$$
To get $\hat x$ , $A^TA$ must be invertible (only if A has linearly independent columns).Then $A^TA$ is square,symmetric and invertible. 
Then
$$\begin{aligned}
\hat x&=(A^TA)^{-1}A^Tb \\
p&=A(A^TA)^{-1}A^Tb \\
P &= A(A^TA)^{-1}A^T
\end{aligned}$$
### Properties of Projection
$$\begin{aligned}
p^T&=p\text{ (get from its expression)}\\
p^2 &=p \text{ (Projecting a second time doesn't change anything) }
\end{aligned}$$
### PS
* $P_CAP_R=A$, $P_C$ onto the column space, $P_B$ onto the row space.

### 4.3 Least Squares Approximations

### 4.4 Orthonormal Bases and Gram-Schmidt

# Chapter 5 Determinants
## 5.1 The properties of determinant
1. ==The determinant of a n by n matrix is 1.==
2. ==The determinant changes sign when two row are exchanged.==
3. ==The determinant is a linear function of each row separately.==
$$
\begin{bmatrix} ta &tb\\ c & d 
 \end{bmatrix}=t
 \begin{bmatrix} a &b\\ c & d 
 \end{bmatrix}
$$
$$
\begin{bmatrix} a + a^{'} &b\\ c & d 
 \end{bmatrix}=
 \begin{bmatrix} a &b\\ c & d 
 \end{bmatrix}
$$
4. If two rows of $A$ are equal ,then $det(A)=0$.
5. Subtracting a multiple of one row from another ow leaves $det(A)$ unchanged.
$$
\begin{bmatrix} a &b\\ c-la & d-lb 
 \end{bmatrix}=
 \begin{bmatrix} a &b\\ c & d 
 \end{bmatrix}
$$
6. A matrix with a row of zeros has $det(A)$.
7. If A is triangular then $det(A)=a_{11}a_{22}...a_{nn}=$product of diagonal entries.
8. If A is singular then $det(A)=0$.If A is invertible then $det(A) \neq0$
9. The determinant of $AB$ is $det(A)$ times $det(B)$: $|AB|=|A||B|$。
10. $det(A^T)=det(A)$,so ==column operations doesn't change the det.==
## 5.2 permutations and cofactors
n by n : det(a) has n! terms.
### pivots formula
$pa=lu\quad det(p)det(a)=det(l)det(u)$
### big formula

### cofactor formula
