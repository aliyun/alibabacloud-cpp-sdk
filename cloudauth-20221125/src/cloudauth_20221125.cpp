// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloudauth_20221125.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Cloudauth20221125;

Alibabacloud_Cloudauth20221125::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudauth"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cloudauth20221125::Client::getEndpoint(shared_ptr<string> productId,
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

EntElementVerifyResponse Alibabacloud_Cloudauth20221125::Client::entElementVerifyWithOptions(shared_ptr<EntElementVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entName)) {
    query->insert(pair<string, string>("EntName", *request->entName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->infoVerifyType)) {
    query->insert(pair<string, string>("InfoVerifyType", *request->infoVerifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonCertNo)) {
    query->insert(pair<string, string>("LegalPersonCertNo", *request->legalPersonCertNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonName)) {
    query->insert(pair<string, string>("LegalPersonName", *request->legalPersonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseNo)) {
    query->insert(pair<string, string>("LicenseNo", *request->licenseNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantUserId)) {
    query->insert(pair<string, string>("MerchantUserId", *request->merchantUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    query->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAuthorization)) {
    query->insert(pair<string, string>("UserAuthorization", *request->userAuthorization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EntElementVerify"))},
    {"version", boost::any(string("2022-11-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EntElementVerifyResponse(callApi(params, req, runtime));
}

EntElementVerifyResponse Alibabacloud_Cloudauth20221125::Client::entElementVerify(shared_ptr<EntElementVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return entElementVerifyWithOptions(request, runtime);
}

EntRiskQueryResponse Alibabacloud_Cloudauth20221125::Client::entRiskQueryWithOptions(shared_ptr<EntRiskQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantUserId)) {
    query->insert(pair<string, string>("MerchantUserId", *request->merchantUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramValue)) {
    query->insert(pair<string, string>("ParamValue", *request->paramValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    query->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAuthorization)) {
    query->insert(pair<string, string>("UserAuthorization", *request->userAuthorization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EntRiskQuery"))},
    {"version", boost::any(string("2022-11-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EntRiskQueryResponse(callApi(params, req, runtime));
}

EntRiskQueryResponse Alibabacloud_Cloudauth20221125::Client::entRiskQuery(shared_ptr<EntRiskQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return entRiskQueryWithOptions(request, runtime);
}

EntVerifyResponse Alibabacloud_Cloudauth20221125::Client::entVerifyWithOptions(shared_ptr<EntVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNo)) {
    query->insert(pair<string, string>("AccountNo", *request->accountNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entName)) {
    query->insert(pair<string, string>("EntName", *request->entName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->infoVerifyType)) {
    query->insert(pair<string, string>("InfoVerifyType", *request->infoVerifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonCertNo)) {
    query->insert(pair<string, string>("LegalPersonCertNo", *request->legalPersonCertNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonMobile)) {
    query->insert(pair<string, string>("LegalPersonMobile", *request->legalPersonMobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalPersonName)) {
    query->insert(pair<string, string>("LegalPersonName", *request->legalPersonName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseNo)) {
    query->insert(pair<string, string>("LicenseNo", *request->licenseNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantBizId)) {
    query->insert(pair<string, string>("MerchantBizId", *request->merchantBizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantUserId)) {
    query->insert(pair<string, string>("MerchantUserId", *request->merchantUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskModelVersion)) {
    query->insert(pair<string, string>("RiskModelVersion", *request->riskModelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskVerifyType)) {
    query->insert(pair<string, string>("RiskVerifyType", *request->riskVerifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneCode)) {
    query->insert(pair<string, string>("SceneCode", *request->sceneCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAuthorization)) {
    query->insert(pair<string, string>("UserAuthorization", *request->userAuthorization));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EntVerify"))},
    {"version", boost::any(string("2022-11-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EntVerifyResponse(callApi(params, req, runtime));
}

EntVerifyResponse Alibabacloud_Cloudauth20221125::Client::entVerify(shared_ptr<EntVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return entVerifyWithOptions(request, runtime);
}

