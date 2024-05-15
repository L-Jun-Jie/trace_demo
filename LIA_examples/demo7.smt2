(set-logic QF_LIA)
(declare-const x Int)
(declare-const y Int)
(declare-const z Int)

(assert (> (* 5 y) 13.5))
(assert (<= (+ (* 7 x) (* 2 y)) 17.5))
(assert (> (+ x y) 11.5))
(assert (= z (+ (* 3 x) y)))

(check-sat)
(exit)
