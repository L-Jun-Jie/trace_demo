; SMT-LIB 2 script for a simple LIA theory problem
(set-logic QF_LIA) ; 设置逻辑为 Quantifier-Free Linear Integer Arithmetic

; 声明变量
(declare-fun x () Int)
(declare-fun y () Int)
(declare-fun z () Int)

; 约束条件
(assert (= (+ x y) 10))  ; x 加 y 等于 10
(assert (= (- y (* 2 z)) 0))  ; y 减去 2 倍的 z 等于 0
(assert (> x 0))  ; x 必须大于 0

; 求解问题
(check-sat)
(get-model) ; 如果可能，输出模型
