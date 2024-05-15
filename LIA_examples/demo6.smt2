(set-logic QF_LIA)
(declare-const x Int)
(declare-const y Int)

(assert (>= (+ x y) 2))
(assert (>= (- (* 2 x) y) 0))
(assert (>= (+ (- x) 2y) 1))
(check-sat)
(exit)
