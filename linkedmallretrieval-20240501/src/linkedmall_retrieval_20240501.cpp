// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkedmall_retrieval_20240501.hpp>
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

using namespace Alibabacloud_LinkedmallRetrieval20240501;

Alibabacloud_LinkedmallRetrieval20240501::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("linkedmallretrieval"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_LinkedmallRetrieval20240501::Client::getEndpoint(shared_ptr<string> productId,
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

AISearchV2Response Alibabacloud_LinkedmallRetrieval20240501::Client::aISearchV2WithOptions(shared_ptr<AISearchV2Request> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("sessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRange)) {
    query->insert(pair<string, string>("timeRange", *request->timeRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AISearchV2"))},
    {"version", boost::any(string("2024-05-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/linked-retrieval/linked-retrieval-entry/v2/linkedRetrieval/commands/aiSearch"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AISearchV2Response(callApi(params, req, runtime));
}

AISearchV2Response Alibabacloud_LinkedmallRetrieval20240501::Client::aISearchV2(shared_ptr<AISearchV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return aISearchV2WithOptions(request, headers, runtime);
}

GenericSearchResponse Alibabacloud_LinkedmallRetrieval20240501::Client::genericSearchWithOptions(shared_ptr<GenericSearchRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeRange)) {
    query->insert(pair<string, string>("timeRange", *request->timeRange));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenericSearch"))},
    {"version", boost::any(string("2024-05-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/linked-retrieval/linked-retrieval-entry/v2/linkedRetrieval/commands/genericSearch"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenericSearchResponse(callApi(params, req, runtime));
}

GenericSearchResponse Alibabacloud_LinkedmallRetrieval20240501::Client::genericSearch(shared_ptr<GenericSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return genericSearchWithOptions(request, headers, runtime);
}

