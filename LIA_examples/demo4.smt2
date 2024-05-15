(set-logic QF_LIA)

(declare-fun A () Int)
(declare-fun B () Int)
(declare-fun C () Int)

; Define constraints for each project
(assert (and (>= A 10) (<= A 40)))
(assert (and (>= B 20) (<= B 50)))
(assert (and (>= C 30) (<= C 60)))

; Total resource constraint
(assert (= (+ A B C) 100))

; Relative allocation constraints
(assert (>= A (* 2 C)))
(assert (<= B (+ (+ A C) 10)))

; Check for satisfiability
(check-sat)

; Retrieve model if satisfiable
(get-model)
