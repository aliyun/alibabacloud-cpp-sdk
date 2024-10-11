// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/superapp_nlp_20240930.hpp>
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

using namespace Alibabacloud_SuperappNlp20240930;

Alibabacloud_SuperappNlp20240930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("superappnlp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_SuperappNlp20240930::Client::getEndpoint(shared_ptr<string> productId,
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

NlpAddressNormalizationResponse Alibabacloud_SuperappNlp20240930::Client::nlpAddressNormalizationWithOptions(shared_ptr<NlpAddressNormalizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cityStdManual)) {
    query->insert(pair<string, string>("CityStdManual", *request->cityStdManual));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityStr)) {
    query->insert(pair<string, string>("CityStr", *request->cityStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtStdManual)) {
    query->insert(pair<string, string>("DistrictStdManual", *request->districtStdManual));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provinceStdManual)) {
    query->insert(pair<string, string>("ProvinceStdManual", *request->provinceStdManual));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->provinceStr)) {
    query->insert(pair<string, string>("ProvinceStr", *request->provinceStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryStr)) {
    query->insert(pair<string, string>("QueryStr", *request->queryStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NlpAddressNormalization"))},
    {"version", boost::any(string("2024-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return NlpAddressNormalizationResponse(callApi(params, req, runtime));
}

NlpAddressNormalizationResponse Alibabacloud_SuperappNlp20240930::Client::nlpAddressNormalization(shared_ptr<NlpAddressNormalizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return nlpAddressNormalizationWithOptions(request, runtime);
}

