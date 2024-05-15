#include <z3++.h>

#include <chrono>  // 包含计时相关的库
#include <csignal>
#include <fstream>
#include <future>
#include <iostream>
#include <thread>

using namespace std;

/* theory_lra.cpp */
void theory_lra_cpp() {
    Z3_enable_trace("arith");
    Z3_enable_trace("arith_verbose");
    Z3_enable_trace("arith_internalize");
    Z3_enable_trace("mk_bool_var");
    Z3_enable_trace("shared");
    Z3_enable_trace("pcs");
    Z3_enable_trace("arith_conflict");
    Z3_enable_trace("nl_value");
    Z3_enable_trace("opt");
}

void theory_arith_int_h() {
    Z3_enable_trace("find_infeasible_int_base_var");
    Z3_enable_trace("arith_int");
    Z3_enable_trace("arith_mk_polynomial");
    Z3_enable_trace("gomory_cut");
    Z3_enable_trace("gomory_cut_detail");
    Z3_enable_trace("empty_pol");
    Z3_enable_trace("gcd_test_bug");
    Z3_enable_trace("gcd_test");
    Z3_enable_trace("patch_int");
    Z3_enable_trace("arith_int_detail");
    Z3_enable_trace("arith_int_fracs_min_max");
    Z3_enable_trace("arith_int_freedom");
    Z3_enable_trace("arith_int_inf");
    Z3_enable_trace("arith_int_rows");
    Z3_enable_trace("arith_int_incomp");
    Z3_enable_trace("opt_verbose");
}

void simplex_def_h() {
    Z3_enable_trace("simplex");
    Z3_enable_trace("pb");
}

void gomory_cpp() {
    Z3_enable_trace("gomory_cut_detail");
    Z3_enable_trace("gomory_cut_detail_real");
    Z3_enable_trace("gomory_cut");
}

void smt_case_split_queue_cpp() {
    Z3_enable_trace("random_split");
    Z3_enable_trace("case_split");
    Z3_enable_trace("theory_aware_branching");
}

void theory_arith_core_h() {
    Z3_enable_trace("arith_make_feasible");
    Z3_enable_trace("sign_row_conflict");
    Z3_enable_trace("arith_init_search");
    Z3_enable_trace("arith_adaptive");
    Z3_enable_trace("mk_arith_var");
    Z3_enable_trace("add_bug");
    Z3_enable_trace("internalize_mul_core");
    Z3_enable_trace("arith_mod");
    Z3_enable_trace("div_axiom_bug");
    Z3_enable_trace("to_real_bug");
    Z3_enable_trace("arith_internalize_detail");
    Z3_enable_trace("init_row_bug");
    Z3_enable_trace("quasi_base_row2base_row");
    Z3_enable_trace("quasi_base_bug_detail");
    Z3_enable_trace("valid_row_assignment_bug");
    Z3_enable_trace("mk_bound_axioms");
    Z3_enable_trace("arith_relevant_eh");
    Z3_enable_trace("arith_new_eq_eh");
    Z3_enable_trace("arith_new_diseq_eh");
    Z3_enable_trace("save_value");
    Z3_enable_trace("arith_pivoting");
    Z3_enable_trace("arith_pivot");
    Z3_enable_trace("pivot_shape");
    Z3_enable_trace("pivot_stats");
    Z3_enable_trace("pivot_bignums");
    Z3_enable_trace("update_and_pivot_bug_detail");
    Z3_enable_trace("update_and_pivot_bug");
    Z3_enable_trace("select_pivot");
    Z3_enable_trace("make_var_feasible");
    Z3_enable_trace("pivot_bug");
    Z3_enable_trace("select_pivot");
    Z3_enable_trace("blands_rule");
    Z3_enable_trace("arith_make_feasible_detail");
    Z3_enable_trace("sign_row_conflict");
    Z3_enable_trace("unassigned_atoms");
    Z3_enable_trace("arith_bound");
    Z3_enable_trace("arith_conflict");
    Z3_enable_trace("is_row_useful");
    Z3_enable_trace("arith_imply_bound");
    Z3_enable_trace("arith_proof");
    Z3_enable_trace("propagate_bounds");
    Z3_enable_trace("propagate_bounds_bug");
    Z3_enable_trace("assert_bound");
    Z3_enable_trace("epsilon_bug");
    Z3_enable_trace("assert_bound");
    Z3_enable_trace("refine_epsilon");
    Z3_enable_trace("theory_arith");
    Z3_enable_trace("arith_pop_scope_bug");
    Z3_enable_trace("to_patch_bug");
}

void smt_context_cpp() {
    Z3_enable_trace("smt_context");
    Z3_enable_trace("assign_core");
    Z3_enable_trace("phase_selection");
    Z3_enable_trace("bcp_bug");
    Z3_enable_trace("add_diseq");
    Z3_enable_trace("add_eq");
    Z3_enable_trace("add_eq_detail");
    Z3_enable_trace("add_eq_bug");
    Z3_enable_trace("cg");
    Z3_enable_trace("merge_theory_vars");
    Z3_enable_trace("propagate");
    Z3_enable_trace("add_eq_parents");
    Z3_enable_trace("add_diseq_inconsistent");
    Z3_enable_trace("is_diseq");
    Z3_enable_trace("is_diseq_bug");
    Z3_enable_trace("is_ext_diseq");
    Z3_enable_trace("is_ext_diseq");
    Z3_enable_trace("propagate_atoms");
    Z3_enable_trace("assign_quantifier_bug");
    Z3_enable_trace("propagate_bool_var_enode_bug");
    Z3_enable_trace("mk_bool_var");
    Z3_enable_trace("push_new_th_diseqs");
    Z3_enable_trace("parent_bug");
    Z3_enable_trace("get_assignment_bug");
    Z3_enable_trace("missing_propagation");
    Z3_enable_trace("propagate_relevancy");
    Z3_enable_trace("propagate");
    Z3_enable_trace("set_conflict");
    Z3_enable_trace("assumption");
    Z3_enable_trace("case_split");
    Z3_enable_trace("phase_selection");
    Z3_enable_trace("activity_profile");
    Z3_enable_trace("decide");
    Z3_enable_trace("decide_detail");
    Z3_enable_trace("cached_generation");
    Z3_enable_trace("reinit_clauses");
    Z3_enable_trace("reinit_clauses_bug");
    Z3_enable_trace("reassert_units");
    Z3_enable_trace("pop_scope_detail");
    Z3_enable_trace("pop_scope");
    Z3_enable_trace("simplify_clauses_bug");
    Z3_enable_trace("simplify_clauses");
    Z3_enable_trace("simplify_clauses_detail");
    Z3_enable_trace("simp_counter");
    Z3_enable_trace("del_inactive_lemmas");
    Z3_enable_trace("internalize");
    Z3_enable_trace("flush");
    Z3_enable_trace("begin_assert_expr");
    Z3_enable_trace("begin_assert_expr_ll");
    Z3_enable_trace("end_assert_expr_ll");
    Z3_enable_trace("theory_case_split");
    Z3_enable_trace("internalize_assertions");
    Z3_enable_trace("after_internalize_assertions");
    Z3_enable_trace("assumptions");
    Z3_enable_trace("after_internalization");
    Z3_enable_trace("unsat_core_bug");
    Z3_enable_trace("after_search");
    Z3_enable_trace("search");
    Z3_enable_trace("before_search");
    Z3_enable_trace("literal_occ");
    Z3_enable_trace("search_detail");
    Z3_enable_trace("after_init_search");
    Z3_enable_trace("search_lite");
    Z3_enable_trace("search_bug");
    Z3_enable_trace("assigned_literals_per_lvl");
    Z3_enable_trace("guessed_literals");
    Z3_enable_trace("mbqi_bug_detail");
    Z3_enable_trace("after_first_propagate");
    Z3_enable_trace("bounded_search");
    Z3_enable_trace("final_check_result");
    Z3_enable_trace("final_check_stats");
    Z3_enable_trace("final_check_step");
    Z3_enable_trace("final_check");
    Z3_enable_trace("forget_phase");
    Z3_enable_trace("resolve_conflict_bug");
    Z3_enable_trace("context_proof");
    Z3_enable_trace("context_proof_hack");
    Z3_enable_trace("reassert_units");
    Z3_enable_trace("context_lemma");
    Z3_enable_trace("assume_eq");
    Z3_enable_trace("is_shared");
    Z3_enable_trace("opt");
    Z3_enable_trace("get_model");
    Z3_enable_trace("mbqi_bug");
}

void int_solver_cpp() {
    Z3_enable_trace("current_solution_is_inf_on_cut");
    Z3_enable_trace("random_update");
    Z3_enable_trace("freedom_interval");
    Z3_enable_trace("int_solver");
    Z3_enable_trace("current_solution_is_inf_on_cut");
}

void int_gcd_test() {
    Z3_enable_trace("gcd_test");
    Z3_enable_trace("gcd_test_bug");
    Z3_enable_trace("ext_gcd_test");
}

void lar_solver_cpp () {
    Z3_enable_trace("lar_solver");
    Z3_enable_trace("lar_solver_details");
    Z3_enable_trace("lar_solver_improve_bounds");
    Z3_enable_trace("lar_solver_feas");
    Z3_enable_trace("change_x_del");
    Z3_enable_trace("lar_solver_model");
    Z3_enable_trace("lar_solver_rand");
    Z3_enable_trace("add_var");
    Z3_enable_trace("lar_solver_terms");
    Z3_enable_trace("dump_terms");
    Z3_enable_trace("arith");
    Z3_enable_trace("lar_solver_validate");
    Z3_enable_trace("cube");
    Z3_enable_trace("nla_solver");
}

void arith_solver_cpp() {
    Z3_enable_trace("arith");
    Z3_enable_trace("arith_verbose");
    Z3_enable_trace("nl_value");
    Z3_enable_trace("pcs");
}

void tactic_cpp() {
    Z3_enable_trace("tactic");
}

void tatical_cpp() {
    Z3_enable_trace("nary_tactical_updt_params");
    Z3_enable_trace("using_params");
}

void smt_tactic_core_cpp() {
    Z3_enable_trace("smt_tactic");
    Z3_enable_trace("smt_tactic_params");
    Z3_enable_trace("smt_tactic_detail");
    Z3_enable_trace("mus");
    Z3_enable_trace("smt_tactic_memory");
}

int main(int argc, char* argv[]) {
    // Z3_global_param_set("trace", "true");
    // Z3_global_param_set("trace_file_name", "my_trace.trc");
    smt_context_cpp();
    arith_solver_cpp();
    int_solver_cpp();
    int_gcd_test();
    lar_solver_cpp();
    theory_arith_core_h();
    gomory_cpp();
    theory_arith_int_h();
    theory_lra_cpp();
    
    string input_file = argv[1];
    
    string output_file = "out.res";

    // z3::config cfg;
    // cfg.set("theory_propagation", false);

    z3::context c;
    z3::solver s(c);
    // s.set("timeout", 10000u);
    s.set("arith.solver", 2u);
    // s.set("propagate_values", false);
    s.set("theory_solver", false);
    z3::expr_vector formulas = c.parse_file(input_file.c_str());

    z3::expr formula = mk_and(formulas);

    ofstream file(output_file);

    if (!file.is_open()) {
        std::cerr << "fail to open file: " << output_file << std::endl;
        return 1;
    }

    s.add(formula);
    z3::check_result result = s.check();
    if (z3::sat == result) {
        z3::model m = s.get_model();
        for (unsigned i = 0; i < m.size(); ++i) {
            if (m[i].is_const()) {
                file << m[i].name() << "=" << m.get_const_interp(m[i]) << " ";
            }
        }
        cout << endl;
    } else {
        file << "unsat or unknown!" << endl;
    }

    file.close();
    return 0;
}