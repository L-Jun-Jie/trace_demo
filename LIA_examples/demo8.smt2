(set-logic QF_LIA)
(declare-const x Int)
(declare-const y Int)
(declare-const z Int)

(assert (or (> (* 5 y) 13.5) (< (* 3.2 x) 19.5)))
(assert (or (<= (+ (* 7.5 x) (* 2 y)) 17.5) (>= 23.4 (+ x z))))
(assert (or (> (- y z) 0) (> (+ x y) 11.5)))
(assert (>= z (+ (* 3 x) y)))

(check-sat)
(exit)
