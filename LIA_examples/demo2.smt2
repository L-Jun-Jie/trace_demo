; SMT-LIB 2 script for a more complex LIA theory problem
(set-logic QF_LIA) ; 设置逻辑为 Quantifier-Free Linear Integer Arithmetic

; 声明变量
(declare-fun x () Int)
(declare-fun y () Int)
(declare-fun z () Int)
(declare-fun w () Int)
(declare-fun v () Int)

; 约束条件
(assert (= (+ x (* 2 y) (- (* 3 z))) 5))  ; x + 2y - 3z = 5
(assert (= (+ (* 2 x) (- y) w) 3))  ; 2x - y + w = 3
(assert (= (+ w (* 3 v)) z))  ; w + 3v = z
(assert (> x y))  ; x 大于 y
(assert (> y z))  ; y 大于 z
(assert (> z 0))  ; z 大于 0

; 求解问题
(check-sat)
(get-model) ; 如果可能，输出模型
