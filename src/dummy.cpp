#include <mapbox/geojson.hpp>
#include <mapbox/geojson_impl.hpp>
#include <mapbox/geojsonvt.hpp>
#include <Rcpp.h>

// [[Rcpp::depends(mapboxGeometry)]]
// [[Rcpp::depends(mapboxGeojson)]]
// [[Rcpp::depends(mapboxVariant)]]
// [[Rcpp::depends(rapidjsonr)]]

// [[Rcpp::export]]
void test( Rcpp::String json ) {
  const auto features = mapbox::geojson::parse( json ).get< mapbox::geojson::feature_collection >();
  mapbox::geojsonvt::Options options;

  options.maxZoom = 20;
  options.tolerance = 0;

  //mapbox::geojsonvt::GeoJSONVT index{ features, options };

  //std::cout << features << std::endl;


}
