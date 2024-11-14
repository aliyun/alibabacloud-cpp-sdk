// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/iqs20240712.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_IQS20240712;

Alibabacloud_IQS20240712::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("iqs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_IQS20240712::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

BicyclingDirectionResponse Alibabacloud_IQS20240712::Client::bicyclingDirectionWithOptions(shared_ptr<BicyclingDirectionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BicyclingDirection"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/direction/bicycling"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BicyclingDirectionResponse(callApi(params, req, runtime));
}

BicyclingDirectionResponse Alibabacloud_IQS20240712::Client::bicyclingDirection(shared_ptr<BicyclingDirectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bicyclingDirectionWithOptions(request, headers, runtime);
}

BicyclingDirectionNovaResponse Alibabacloud_IQS20240712::Client::bicyclingDirectionNovaWithOptions(shared_ptr<BicyclingDirectionNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BicyclingDirectionNova"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v2/direction/bicycling"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BicyclingDirectionNovaResponse(callApi(params, req, runtime));
}

BicyclingDirectionNovaResponse Alibabacloud_IQS20240712::Client::bicyclingDirectionNova(shared_ptr<BicyclingDirectionNovaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return bicyclingDirectionNovaWithOptions(request, headers, runtime);
}

CircleTrafficStatusResponse Alibabacloud_IQS20240712::Client::circleTrafficStatusWithOptions(shared_ptr<CircleTrafficStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->latitude)) {
    query->insert(pair<string, string>("latitude", *request->latitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->longitude)) {
    query->insert(pair<string, string>("longitude", *request->longitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->radius)) {
    query->insert(pair<string, string>("radius", *request->radius));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roadLevel)) {
    query->insert(pair<string, string>("roadLevel", *request->roadLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CircleTrafficStatus"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/traffic/status/circle"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CircleTrafficStatusResponse(callApi(params, req, runtime));
}

CircleTrafficStatusResponse Alibabacloud_IQS20240712::Client::circleTrafficStatus(shared_ptr<CircleTrafficStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return circleTrafficStatusWithOptions(request, headers, runtime);
}

CommonQueryBySceneResponse Alibabacloud_IQS20240712::Client::commonQueryBySceneWithOptions(shared_ptr<CommonQueryBySceneRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommonQueryByScene"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/amap-function-call-agent/iqs-agent-service/v2/nl/common"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommonQueryBySceneResponse(callApi(params, req, runtime));
}

CommonQueryBySceneResponse Alibabacloud_IQS20240712::Client::commonQueryByScene(shared_ptr<CommonQueryBySceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return commonQueryBySceneWithOptions(request, headers, runtime);
}

DrivingDirectionResponse Alibabacloud_IQS20240712::Client::drivingDirectionWithOptions(shared_ptr<DrivingDirectionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DrivingDirection"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/direction/driving"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DrivingDirectionResponse(callApi(params, req, runtime));
}

DrivingDirectionResponse Alibabacloud_IQS20240712::Client::drivingDirection(shared_ptr<DrivingDirectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return drivingDirectionWithOptions(request, headers, runtime);
}

DrivingDirectionNovaResponse Alibabacloud_IQS20240712::Client::drivingDirectionNovaWithOptions(shared_ptr<DrivingDirectionNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->carType)) {
    query->insert(pair<string, string>("carType", *request->carType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->plate)) {
    query->insert(pair<string, string>("plate", *request->plate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DrivingDirectionNova"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v2/direction/driving"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DrivingDirectionNovaResponse(callApi(params, req, runtime));
}

DrivingDirectionNovaResponse Alibabacloud_IQS20240712::Client::drivingDirectionNova(shared_ptr<DrivingDirectionNovaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return drivingDirectionNovaWithOptions(request, headers, runtime);
}

ElectrobikeDirectionResponse Alibabacloud_IQS20240712::Client::electrobikeDirectionWithOptions(shared_ptr<ElectrobikeDirectionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ElectrobikeDirection"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/direction/electrobike"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ElectrobikeDirectionResponse(callApi(params, req, runtime));
}

ElectrobikeDirectionResponse Alibabacloud_IQS20240712::Client::electrobikeDirection(shared_ptr<ElectrobikeDirectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return electrobikeDirectionWithOptions(request, headers, runtime);
}

ElectrobikeDirectionNovaResponse Alibabacloud_IQS20240712::Client::electrobikeDirectionNovaWithOptions(shared_ptr<ElectrobikeDirectionNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ElectrobikeDirectionNova"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v2/direction/electrobike"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ElectrobikeDirectionNovaResponse(callApi(params, req, runtime));
}

ElectrobikeDirectionNovaResponse Alibabacloud_IQS20240712::Client::electrobikeDirectionNova(shared_ptr<ElectrobikeDirectionNovaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return electrobikeDirectionNovaWithOptions(request, headers, runtime);
}

GeoCodeResponse Alibabacloud_IQS20240712::Client::geoCodeWithOptions(shared_ptr<GeoCodeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    query->insert(pair<string, string>("address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("city", *request->city));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GeoCode"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/geocode/geo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GeoCodeResponse(callApi(params, req, runtime));
}

GeoCodeResponse Alibabacloud_IQS20240712::Client::geoCode(shared_ptr<GeoCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return geoCodeWithOptions(request, headers, runtime);
}

NearbySearchResponse Alibabacloud_IQS20240712::Client::nearbySearchWithOptions(shared_ptr<NearbySearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    query->insert(pair<string, string>("keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->latitude)) {
    query->insert(pair<string, string>("latitude", *request->latitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->longitude)) {
    query->insert(pair<string, string>("longitude", *request->longitude));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->radius)) {
    query->insert(pair<string, long>("radius", *request->radius));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NearbySearch"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/pois/nearby"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return NearbySearchResponse(callApi(params, req, runtime));
}

NearbySearchResponse Alibabacloud_IQS20240712::Client::nearbySearch(shared_ptr<NearbySearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return nearbySearchWithOptions(request, headers, runtime);
}

NearbySearchNovaResponse Alibabacloud_IQS20240712::Client::nearbySearchNovaWithOptions(shared_ptr<NearbySearchNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    query->insert(pair<string, string>("keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->latitude)) {
    query->insert(pair<string, string>("latitude", *request->latitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->longitude)) {
    query->insert(pair<string, string>("longitude", *request->longitude));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->radius)) {
    query->insert(pair<string, long>("radius", *request->radius));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NearbySearchNova"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v2/pois/nearby"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return NearbySearchNovaResponse(callApi(params, req, runtime));
}

NearbySearchNovaResponse Alibabacloud_IQS20240712::Client::nearbySearchNova(shared_ptr<NearbySearchNovaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return nearbySearchNovaWithOptions(request, headers, runtime);
}

PlaceSearchResponse Alibabacloud_IQS20240712::Client::placeSearchWithOptions(shared_ptr<PlaceSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    query->insert(pair<string, string>("keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PlaceSearch"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/pois/place"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PlaceSearchResponse(callApi(params, req, runtime));
}

PlaceSearchResponse Alibabacloud_IQS20240712::Client::placeSearch(shared_ptr<PlaceSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return placeSearchWithOptions(request, headers, runtime);
}

PlaceSearchNovaResponse Alibabacloud_IQS20240712::Client::placeSearchNovaWithOptions(shared_ptr<PlaceSearchNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    query->insert(pair<string, string>("keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    query->insert(pair<string, long>("size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PlaceSearchNova"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v2/pois/place"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PlaceSearchNovaResponse(callApi(params, req, runtime));
}

PlaceSearchNovaResponse Alibabacloud_IQS20240712::Client::placeSearchNova(shared_ptr<PlaceSearchNovaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return placeSearchNovaWithOptions(request, headers, runtime);
}

QueryAttractionsResponse Alibabacloud_IQS20240712::Client::queryAttractionsWithOptions(shared_ptr<QueryAttractionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryAttractions"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/amap-function-call-agent/iqs-agent-service/v1/nl/attractions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryAttractionsResponse(callApi(params, req, runtime));
}

QueryAttractionsResponse Alibabacloud_IQS20240712::Client::queryAttractions(shared_ptr<QueryAttractionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryAttractionsWithOptions(request, headers, runtime);
}

QueryHotelsResponse Alibabacloud_IQS20240712::Client::queryHotelsWithOptions(shared_ptr<QueryHotelsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryHotels"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/amap-function-call-agent/iqs-agent-service/v1/nl/hotels"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryHotelsResponse(callApi(params, req, runtime));
}

QueryHotelsResponse Alibabacloud_IQS20240712::Client::queryHotels(shared_ptr<QueryHotelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryHotelsWithOptions(request, headers, runtime);
}

QueryRestaurantsResponse Alibabacloud_IQS20240712::Client::queryRestaurantsWithOptions(shared_ptr<QueryRestaurantsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(request->body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRestaurants"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/amap-function-call-agent/iqs-agent-service/v1/nl/restaurants"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRestaurantsResponse(callApi(params, req, runtime));
}

QueryRestaurantsResponse Alibabacloud_IQS20240712::Client::queryRestaurants(shared_ptr<QueryRestaurantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return queryRestaurantsWithOptions(request, headers, runtime);
}

RectangleTrafficStatusResponse Alibabacloud_IQS20240712::Client::rectangleTrafficStatusWithOptions(shared_ptr<RectangleTrafficStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->lowerLeftLatitude)) {
    query->insert(pair<string, string>("lowerLeftLatitude", *request->lowerLeftLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lowerLeftLongitude)) {
    query->insert(pair<string, string>("lowerLeftLongitude", *request->lowerLeftLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roadLevel)) {
    query->insert(pair<string, string>("roadLevel", *request->roadLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upperRightLatitude)) {
    query->insert(pair<string, string>("upperRightLatitude", *request->upperRightLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->upperRightLongitude)) {
    query->insert(pair<string, string>("upperRightLongitude", *request->upperRightLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RectangleTrafficStatus"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/traffic/status/rectangle"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RectangleTrafficStatusResponse(callApi(params, req, runtime));
}

RectangleTrafficStatusResponse Alibabacloud_IQS20240712::Client::rectangleTrafficStatus(shared_ptr<RectangleTrafficStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rectangleTrafficStatusWithOptions(request, headers, runtime);
}

RgeoCodeResponse Alibabacloud_IQS20240712::Client::rgeoCodeWithOptions(shared_ptr<RgeoCodeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->latitude)) {
    query->insert(pair<string, string>("latitude", *request->latitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->longitude)) {
    query->insert(pair<string, string>("longitude", *request->longitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RgeoCode"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/geocode/regeo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RgeoCodeResponse(callApi(params, req, runtime));
}

RgeoCodeResponse Alibabacloud_IQS20240712::Client::rgeoCode(shared_ptr<RgeoCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return rgeoCodeWithOptions(request, headers, runtime);
}

RoadTrafficStatusResponse Alibabacloud_IQS20240712::Client::roadTrafficStatusWithOptions(shared_ptr<RoadTrafficStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    query->insert(pair<string, string>("city", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roadLevel)) {
    query->insert(pair<string, string>("roadLevel", *request->roadLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roadName)) {
    query->insert(pair<string, string>("roadName", *request->roadName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RoadTrafficStatus"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/traffic/status/road"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RoadTrafficStatusResponse(callApi(params, req, runtime));
}

RoadTrafficStatusResponse Alibabacloud_IQS20240712::Client::roadTrafficStatus(shared_ptr<RoadTrafficStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return roadTrafficStatusWithOptions(request, headers, runtime);
}

TransitIntegratedDirectionResponse Alibabacloud_IQS20240712::Client::transitIntegratedDirectionWithOptions(shared_ptr<TransitIntegratedDirectionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCity)) {
    query->insert(pair<string, string>("destinationCity", *request->destinationCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originCity)) {
    query->insert(pair<string, string>("originCity", *request->originCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransitIntegratedDirection"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v2/direction/transit/integrated"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransitIntegratedDirectionResponse(callApi(params, req, runtime));
}

TransitIntegratedDirectionResponse Alibabacloud_IQS20240712::Client::transitIntegratedDirection(shared_ptr<TransitIntegratedDirectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return transitIntegratedDirectionWithOptions(request, headers, runtime);
}

TransitIntegratedDirectionOldResponse Alibabacloud_IQS20240712::Client::transitIntegratedDirectionOldWithOptions(shared_ptr<TransitIntegratedDirectionOldRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationCity)) {
    query->insert(pair<string, string>("destinationCity", *request->destinationCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originCity)) {
    query->insert(pair<string, string>("originCity", *request->originCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransitIntegratedDirectionOld"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/direction/transit/integrated"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransitIntegratedDirectionOldResponse(callApi(params, req, runtime));
}

TransitIntegratedDirectionOldResponse Alibabacloud_IQS20240712::Client::transitIntegratedDirectionOld(shared_ptr<TransitIntegratedDirectionOldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return transitIntegratedDirectionOldWithOptions(request, headers, runtime);
}

WalkingDirectionResponse Alibabacloud_IQS20240712::Client::walkingDirectionWithOptions(shared_ptr<WalkingDirectionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WalkingDirection"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v1/direction/walking"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WalkingDirectionResponse(callApi(params, req, runtime));
}

WalkingDirectionResponse Alibabacloud_IQS20240712::Client::walkingDirection(shared_ptr<WalkingDirectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return walkingDirectionWithOptions(request, headers, runtime);
}

WalkingDirectionNovaResponse Alibabacloud_IQS20240712::Client::walkingDirectionNovaWithOptions(shared_ptr<WalkingDirectionNovaRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLatitude)) {
    query->insert(pair<string, string>("destinationLatitude", *request->destinationLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationLongitude)) {
    query->insert(pair<string, string>("destinationLongitude", *request->destinationLongitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLatitude)) {
    query->insert(pair<string, string>("originLatitude", *request->originLatitude));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originLongitude)) {
    query->insert(pair<string, string>("originLongitude", *request->originLongitude));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WalkingDirectionNova"))},
    {"version", boost::any(string("2024-07-12"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ipaas/v2/direction/walking"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WalkingDirectionNovaResponse(callApi(params, req, runtime));
}

WalkingDirectionNovaResponse Alibabacloud_IQS20240712::Client::walkingDirectionNova(shared_ptr<WalkingDirectionNovaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return walkingDirectionNovaWithOptions(request, headers, runtime);
}

