# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

mainBayesPCA <- function(X, D, I, J, nstart, maxIter, tolerance, svdStart, verbose, updatetau, priorvar, alphatau, betatau, JD, Tau, qz, globalvar, hpdi) {
    .Call(`_bayespca_mainBayesPCA`, X, D, I, J, nstart, maxIter, tolerance, svdStart, verbose, updatetau, priorvar, alphatau, betatau, JD, Tau, qz, globalvar, hpdi)
}

