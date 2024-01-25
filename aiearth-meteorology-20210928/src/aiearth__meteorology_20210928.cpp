// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aiearth__meteorology_20210928.hpp>
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

using namespace Alibabacloud_AIEarth-Meteorology20210928;

Alibabacloud_AIEarth-Meteorology20210928::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aiearth-meteorology"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AIEarth-Meteorology20210928::Client::getEndpoint(shared_ptr<string> productId,
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

GridQueryResponse Alibabacloud_AIEarth-Meteorology20210928::Client::gridQueryWithOptions(shared_ptr<string> dataType,
                                                                                         shared_ptr<GridQueryRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->element)) {
    query->insert(pair<string, string>("element", *request->element));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forecastTimestamp)) {
    query->insert(pair<string, string>("forecastTimestamp", *request->forecastTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->latitude)) {
    query->insert(pair<string, double>("latitude", *request->latitude));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->longitude)) {
    query->insert(pair<string, double>("longitude", *request->longitude));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("pageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportTimestamp)) {
    query->insert(pair<string, string>("reportTimestamp", *request->reportTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GridQuery"))},
    {"version", boost::any(string("2021-09-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/grid/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(dataType)) + string("/v1"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GridQueryResponse(callApi(params, req, runtime));
}

GridQueryResponse Alibabacloud_AIEarth-Meteorology20210928::Client::gridQuery(shared_ptr<string> dataType, shared_ptr<GridQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return gridQueryWithOptions(dataType, request, headers, runtime);
}

