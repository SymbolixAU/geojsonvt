#' @useDynLib geojsonvt, .registration = TRUE
#' @importFrom Rcpp sourceCpp
NULL

#' Provides access to Mapbox Geojson-vt-cpp library
#'
#' @examples
#' \dontrun{
#'
#' # Include a dependency to geojsonvt inside a cpp file
#' // [[Rcpp::depends(geojsonvt)]]
#' include <Rcpp.h>
#' }
"_PACKAGE"
