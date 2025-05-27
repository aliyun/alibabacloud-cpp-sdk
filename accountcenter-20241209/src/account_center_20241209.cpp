// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/account_center_20241209.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_AccountCenter20241209;

Alibabacloud_AccountCenter20241209::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("accountcenter"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_AccountCenter20241209::Client::getEndpoint(shared_ptr<string> productId,
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

EnterpriseOrgQueryLoadTreeResponse Alibabacloud_AccountCenter20241209::Client::enterpriseOrgQueryLoadTreeWithOptions(shared_ptr<EnterpriseOrgQueryLoadTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->loadOrgOnly)) {
    query->insert(pair<string, bool>("LoadOrgOnly", *request->loadOrgOnly));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    body->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseOrgQueryLoadTree"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseOrgQueryLoadTreeResponse(callApi(params, req, runtime));
}

EnterpriseOrgQueryLoadTreeResponse Alibabacloud_AccountCenter20241209::Client::enterpriseOrgQueryLoadTree(shared_ptr<EnterpriseOrgQueryLoadTreeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseOrgQueryLoadTreeWithOptions(request, runtime);
}

EnterpriseRegisterAccountResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRegisterAccountWithOptions(shared_ptr<EnterpriseRegisterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    query->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptPassword)) {
    query->insert(pair<string, string>("EncryptPassword", *request->encryptPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginEmail)) {
    query->insert(pair<string, string>("LoginEmail", *request->loginEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationId)) {
    query->insert(pair<string, string>("OrganizationId", *request->organizationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showCompleteInfo)) {
    query->insert(pair<string, bool>("ShowCompleteInfo", *request->showCompleteInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->siteNick)) {
    query->insert(pair<string, string>("SiteNick", *request->siteNick));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    body->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseRegisterAccount"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseRegisterAccountResponse(callApi(params, req, runtime));
}

EnterpriseRegisterAccountResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRegisterAccount(shared_ptr<EnterpriseRegisterAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseRegisterAccountWithOptions(request, runtime);
}

