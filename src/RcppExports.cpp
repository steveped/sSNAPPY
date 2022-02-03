// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ssPertScore_RCPP
List ssPertScore_RCPP(List BminsI, NumericMatrix weightedFC);
RcppExport SEXP _SSPT_ssPertScore_RCPP(SEXP BminsISEXP, SEXP weightedFCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type BminsI(BminsISEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type weightedFC(weightedFCSEXP);
    rcpp_result_gen = Rcpp::wrap(ssPertScore_RCPP(BminsI, weightedFC));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SSPT_ssPertScore_RCPP", (DL_FUNC) &_SSPT_ssPertScore_RCPP, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_SSPT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}