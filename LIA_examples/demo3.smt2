; More complex logical formula under QF_LIA theory
(set-logic QF_LIA)

; Declare integer variables
(declare-fun x () Int)
(declare-fun y () Int)

; Assert complex logical conditions involving disjunctions and negations
(assert (and
    (or (> (+ x 1) 0) (> (+ x y) 0))
    (or (< x 0) (> (+ x y) 4))
    (not (> (+ x y) 0))
    (or (not (> (+ x 1) 0)) (not (< x 0)))
    (or (> (+ x y) 0) (not (> (+ x y) 4)))
))

; Check for satisfiability
(check-sat)

; Get the values if satisfiable
(get-model)
