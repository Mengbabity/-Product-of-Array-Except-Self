# -Product-of-Array-Except-Self

给定一个数组，输出的数组上每位的数值是除其本身以外其他所有数的乘积。

思路：定义两个指针，front和back。从头与从尾同时遍历数组。每一位的数值为与front的乘积且与back的乘积，这样就完美的错过了其本身。
     因为front为其之前所有数的乘积；back为其之后所有数的乘积。