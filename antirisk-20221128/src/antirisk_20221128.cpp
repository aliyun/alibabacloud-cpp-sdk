// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/antirisk_20221128.hpp>
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

using namespace Alibabacloud_Antirisk20221128;

Alibabacloud_Antirisk20221128::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("antirisk"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Antirisk20221128::Client::getEndpoint(shared_ptr<string> productId,
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

GetRealTimeRiskInfoResponse Alibabacloud_Antirisk20221128::Client::getRealTimeRiskInfoWithOptions(shared_ptr<GetRealTimeRiskInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->atoken)) {
    query->insert(pair<string, string>("atoken", *request->atoken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    query->insert(pair<string, string>("dataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extra)) {
    query->insert(pair<string, string>("extra", *request->extra));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRealTimeRiskInfo"))},
    {"version", boost::any(string("2022-11-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/anti/getRealTimeRiskInfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRealTimeRiskInfoResponse(callApi(params, req, runtime));
}

GetRealTimeRiskInfoResponse Alibabacloud_Antirisk20221128::Client::getRealTimeRiskInfo(shared_ptr<GetRealTimeRiskInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getRealTimeRiskInfoWithOptions(request, headers, runtime);
}

GetZidTagByAtokenResponse Alibabacloud_Antirisk20221128::Client::getZidTagByAtokenWithOptions(shared_ptr<GetZidTagByAtokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->atoken)) {
    query->insert(pair<string, string>("atoken", *request->atoken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    query->insert(pair<string, string>("dataSourceId", *request->dataSourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetZidTagByAtoken"))},
    {"version", boost::any(string("2022-11-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/anti/getZidTagByAtoken"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetZidTagByAtokenResponse(callApi(params, req, runtime));
}

GetZidTagByAtokenResponse Alibabacloud_Antirisk20221128::Client::getZidTagByAtoken(shared_ptr<GetZidTagByAtokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getZidTagByAtokenWithOptions(request, headers, runtime);
}

GetZidTagScoreByAtokenResponse Alibabacloud_Antirisk20221128::Client::getZidTagScoreByAtokenWithOptions(shared_ptr<GetZidTagScoreByAtokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->atoken)) {
    query->insert(pair<string, string>("atoken", *request->atoken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    query->insert(pair<string, string>("dataSourceId", *request->dataSourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetZidTagScoreByAtoken"))},
    {"version", boost::any(string("2022-11-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/anti/getZidTagScoreByAtoken"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetZidTagScoreByAtokenResponse(callApi(params, req, runtime));
}

GetZidTagScoreByAtokenResponse Alibabacloud_Antirisk20221128::Client::getZidTagScoreByAtoken(shared_ptr<GetZidTagScoreByAtokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getZidTagScoreByAtokenWithOptions(request, headers, runtime);
}

ListChannelRiskDetailsResponse Alibabacloud_Antirisk20221128::Client::listChannelRiskDetailsWithOptions(shared_ptr<ListChannelRiskDetailsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    query->insert(pair<string, string>("dataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->end)) {
    query->insert(pair<string, string>("end", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isAllChannel)) {
    query->insert(pair<string, string>("isAllChannel", *request->isAllChannel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->start)) {
    query->insert(pair<string, string>("start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChannelRiskDetails"))},
    {"version", boost::any(string("2022-11-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/anti/listChannelRiskDetails"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListChannelRiskDetailsResponse(callApi(params, req, runtime));
}

ListChannelRiskDetailsResponse Alibabacloud_Antirisk20221128::Client::listChannelRiskDetails(shared_ptr<ListChannelRiskDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listChannelRiskDetailsWithOptions(request, headers, runtime);
}

ListUninstallDetailResponse Alibabacloud_Antirisk20221128::Client::listUninstallDetailWithOptions(shared_ptr<ListUninstallDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceId)) {
    query->insert(pair<string, string>("dataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDs)) {
    query->insert(pair<string, string>("endDs", *request->endDs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDs)) {
    query->insert(pair<string, string>("startDs", *request->startDs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUninstallDetail"))},
    {"version", boost::any(string("2022-11-28"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/uninstall/listUninstallDetail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUninstallDetailResponse(callApi(params, req, runtime));
}

ListUninstallDetailResponse Alibabacloud_Antirisk20221128::Client::listUninstallDetail(shared_ptr<ListUninstallDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listUninstallDetailWithOptions(request, headers, runtime);
}

