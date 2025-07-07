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
#include <vector>

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

EnterpriseAccountChangeLoginPasswordResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountChangeLoginPasswordWithOptions(shared_ptr<EnterpriseAccountChangeLoginPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptPassword)) {
    query->insert(pair<string, string>("EncryptPassword", *request->encryptPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountChangeLoginPassword"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountChangeLoginPasswordResponse(callApi(params, req, runtime));
}

EnterpriseAccountChangeLoginPasswordResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountChangeLoginPassword(shared_ptr<EnterpriseAccountChangeLoginPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountChangeLoginPasswordWithOptions(request, runtime);
}

EnterpriseAccountChangeSecurityEmailResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountChangeSecurityEmailWithOptions(shared_ptr<EnterpriseAccountChangeSecurityEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityEmail)) {
    query->insert(pair<string, string>("SecurityEmail", *request->securityEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyCode)) {
    query->insert(pair<string, string>("VerifyCode", *request->verifyCode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountChangeSecurityEmail"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountChangeSecurityEmailResponse(callApi(params, req, runtime));
}

EnterpriseAccountChangeSecurityEmailResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountChangeSecurityEmail(shared_ptr<EnterpriseAccountChangeSecurityEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountChangeSecurityEmailWithOptions(request, runtime);
}

EnterpriseAccountChangeSecurityMobileResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountChangeSecurityMobileWithOptions(shared_ptr<EnterpriseAccountChangeSecurityMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newMobile)) {
    query->insert(pair<string, string>("NewMobile", *request->newMobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verificationCode)) {
    query->insert(pair<string, string>("VerificationCode", *request->verificationCode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountChangeSecurityMobile"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountChangeSecurityMobileResponse(callApi(params, req, runtime));
}

EnterpriseAccountChangeSecurityMobileResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountChangeSecurityMobile(shared_ptr<EnterpriseAccountChangeSecurityMobileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountChangeSecurityMobileWithOptions(request, runtime);
}

EnterpriseAccountQueryAccountGrantedRolesResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountQueryAccountGrantedRolesWithOptions(shared_ptr<EnterpriseAccountQueryAccountGrantedRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOpenApi)) {
    body->insert(pair<string, bool>("IsOpenApi", *request->isOpenApi));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    body->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    body->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showCompleteInfo)) {
    body->insert(pair<string, bool>("ShowCompleteInfo", *request->showCompleteInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountQueryAccountGrantedRoles"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountQueryAccountGrantedRolesResponse(callApi(params, req, runtime));
}

EnterpriseAccountQueryAccountGrantedRolesResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountQueryAccountGrantedRoles(shared_ptr<EnterpriseAccountQueryAccountGrantedRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountQueryAccountGrantedRolesWithOptions(request, runtime);
}

EnterpriseAccountQueryAccountsInfoResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountQueryAccountsInfoWithOptions(shared_ptr<EnterpriseAccountQueryAccountsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pksJson)) {
    query->insert(pair<string, string>("PksJson", *request->pksJson));
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
  if (!Darabonba_Util::Client::isUnset<bool>(request->showCompleteInfo)) {
    body->insert(pair<string, bool>("ShowCompleteInfo", *request->showCompleteInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountQueryAccountsInfo"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountQueryAccountsInfoResponse(callApi(params, req, runtime));
}

EnterpriseAccountQueryAccountsInfoResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountQueryAccountsInfo(shared_ptr<EnterpriseAccountQueryAccountsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountQueryAccountsInfoWithOptions(request, runtime);
}

EnterpriseAccountQueryLoginSettingsResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountQueryLoginSettingsWithOptions(shared_ptr<EnterpriseAccountQueryLoginSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOpenApi)) {
    body->insert(pair<string, bool>("IsOpenApi", *request->isOpenApi));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    body->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    body->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showCompleteInfo)) {
    body->insert(pair<string, bool>("ShowCompleteInfo", *request->showCompleteInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountQueryLoginSettings"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountQueryLoginSettingsResponse(callApi(params, req, runtime));
}

EnterpriseAccountQueryLoginSettingsResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountQueryLoginSettings(shared_ptr<EnterpriseAccountQueryLoginSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountQueryLoginSettingsWithOptions(request, runtime);
}

EnterpriseAccountRemoveMfaResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountRemoveMfaWithOptions(shared_ptr<EnterpriseAccountRemoveMfaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountRemoveMfa"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountRemoveMfaResponse(callApi(params, req, runtime));
}

EnterpriseAccountRemoveMfaResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountRemoveMfa(shared_ptr<EnterpriseAccountRemoveMfaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountRemoveMfaWithOptions(request, runtime);
}

EnterpriseAccountSeparateEaResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountSeparateEaWithOptions(shared_ptr<EnterpriseAccountSeparateEaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
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
    {"action", boost::any(string("EnterpriseAccountSeparateEa"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountSeparateEaResponse(callApi(params, req, runtime));
}

EnterpriseAccountSeparateEaResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountSeparateEa(shared_ptr<EnterpriseAccountSeparateEaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountSeparateEaWithOptions(request, runtime);
}

EnterpriseAccountUpdateAccountAliasResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateAccountAliasWithOptions(shared_ptr<EnterpriseAccountUpdateAccountAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alias)) {
    query->insert(pair<string, string>("Alias", *request->alias));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountUpdateAccountAlias"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountUpdateAccountAliasResponse(callApi(params, req, runtime));
}

EnterpriseAccountUpdateAccountAliasResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateAccountAlias(shared_ptr<EnterpriseAccountUpdateAccountAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountUpdateAccountAliasWithOptions(request, runtime);
}

EnterpriseAccountUpdateAccountBizRoleGrantResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateAccountBizRoleGrantWithOptions(shared_ptr<EnterpriseAccountUpdateAccountBizRoleGrantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRoleCodeListJson)) {
    query->insert(pair<string, string>("BizRoleCodeListJson", *request->bizRoleCodeListJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
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
    {"action", boost::any(string("EnterpriseAccountUpdateAccountBizRoleGrant"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountUpdateAccountBizRoleGrantResponse(callApi(params, req, runtime));
}

EnterpriseAccountUpdateAccountBizRoleGrantResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateAccountBizRoleGrant(shared_ptr<EnterpriseAccountUpdateAccountBizRoleGrantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountUpdateAccountBizRoleGrantWithOptions(request, runtime);
}

EnterpriseAccountUpdateIpMaskResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateIpMaskWithOptions(shared_ptr<EnterpriseAccountUpdateIpMaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ipMasksJson)) {
    query->insert(pair<string, string>("IpMasksJson", *request->ipMasksJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountUpdateIpMask"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountUpdateIpMaskResponse(callApi(params, req, runtime));
}

EnterpriseAccountUpdateIpMaskResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateIpMask(shared_ptr<EnterpriseAccountUpdateIpMaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountUpdateIpMaskWithOptions(request, runtime);
}

EnterpriseAccountUpdateOperateRiskControlResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateOperateRiskControlWithOptions(shared_ptr<EnterpriseAccountUpdateOperateRiskControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productLevel)) {
    query->insert(pair<string, string>("ProductLevel", *request->productLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validateType)) {
    query->insert(pair<string, string>("ValidateType", *request->validateType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountUpdateOperateRiskControl"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountUpdateOperateRiskControlResponse(callApi(params, req, runtime));
}

EnterpriseAccountUpdateOperateRiskControlResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateOperateRiskControl(shared_ptr<EnterpriseAccountUpdateOperateRiskControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountUpdateOperateRiskControlWithOptions(request, runtime);
}

EnterpriseAccountUpdateSecurityMobileLoginStatusResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateSecurityMobileLoginStatusWithOptions(shared_ptr<EnterpriseAccountUpdateSecurityMobileLoginStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountUpdateSecurityMobileLoginStatus"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountUpdateSecurityMobileLoginStatusResponse(callApi(params, req, runtime));
}

EnterpriseAccountUpdateSecurityMobileLoginStatusResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateSecurityMobileLoginStatus(shared_ptr<EnterpriseAccountUpdateSecurityMobileLoginStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountUpdateSecurityMobileLoginStatusWithOptions(request, runtime);
}

EnterpriseAccountUpdateSessionExpireTimeResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateSessionExpireTimeWithOptions(shared_ptr<EnterpriseAccountUpdateSessionExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pk)) {
    query->insert(pair<string, string>("Pk", *request->pk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestId)) {
    query->insert(pair<string, string>("RequestId", *request->requestId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sessionExpireTime)) {
    query->insert(pair<string, long>("SessionExpireTime", *request->sessionExpireTime));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseAccountUpdateSessionExpireTime"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseAccountUpdateSessionExpireTimeResponse(callApi(params, req, runtime));
}

EnterpriseAccountUpdateSessionExpireTimeResponse Alibabacloud_AccountCenter20241209::Client::enterpriseAccountUpdateSessionExpireTime(shared_ptr<EnterpriseAccountUpdateSessionExpireTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseAccountUpdateSessionExpireTimeWithOptions(request, runtime);
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

EnterpriseRoleCreateBizRoleResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleCreateBizRoleWithOptions(shared_ptr<EnterpriseRoleCreateBizRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizPermissionCodeListJson)) {
    query->insert(pair<string, string>("BizPermissionCodeListJson", *request->bizPermissionCodeListJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRoleDesc)) {
    query->insert(pair<string, string>("BizRoleDesc", *request->bizRoleDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRoleName)) {
    query->insert(pair<string, string>("BizRoleName", *request->bizRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
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
    {"action", boost::any(string("EnterpriseRoleCreateBizRole"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseRoleCreateBizRoleResponse(callApi(params, req, runtime));
}

EnterpriseRoleCreateBizRoleResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleCreateBizRole(shared_ptr<EnterpriseRoleCreateBizRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseRoleCreateBizRoleWithOptions(request, runtime);
}

EnterpriseRoleDeleteBizRoleResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleDeleteBizRoleWithOptions(shared_ptr<EnterpriseRoleDeleteBizRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRoleCode)) {
    query->insert(pair<string, string>("BizRoleCode", *request->bizRoleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
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
    {"action", boost::any(string("EnterpriseRoleDeleteBizRole"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseRoleDeleteBizRoleResponse(callApi(params, req, runtime));
}

EnterpriseRoleDeleteBizRoleResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleDeleteBizRole(shared_ptr<EnterpriseRoleDeleteBizRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseRoleDeleteBizRoleWithOptions(request, runtime);
}

EnterpriseRoleQueryAccountForRoleGrantByPageResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleQueryAccountForRoleGrantByPageWithOptions(shared_ptr<EnterpriseRoleQueryAccountForRoleGrantByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRoleCode)) {
    query->insert(pair<string, string>("BizRoleCode", *request->bizRoleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    query->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showCompleteInfo)) {
    query->insert(pair<string, bool>("ShowCompleteInfo", *request->showCompleteInfo));
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
    {"action", boost::any(string("EnterpriseRoleQueryAccountForRoleGrantByPage"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseRoleQueryAccountForRoleGrantByPageResponse(callApi(params, req, runtime));
}

EnterpriseRoleQueryAccountForRoleGrantByPageResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleQueryAccountForRoleGrantByPage(shared_ptr<EnterpriseRoleQueryAccountForRoleGrantByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseRoleQueryAccountForRoleGrantByPageWithOptions(request, runtime);
}

EnterpriseRoleQueryBizRoleByPageResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleQueryBizRoleByPageWithOptions(shared_ptr<EnterpriseRoleQueryBizRoleByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    query->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->query)) {
    query->insert(pair<string, string>("Query", *request->query));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcType)) {
    query->insert(pair<string, string>("SrcType", *request->srcType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseRoleQueryBizRoleByPage"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseRoleQueryBizRoleByPageResponse(callApi(params, req, runtime));
}

EnterpriseRoleQueryBizRoleByPageResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleQueryBizRoleByPage(shared_ptr<EnterpriseRoleQueryBizRoleByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseRoleQueryBizRoleByPageWithOptions(request, runtime);
}

EnterpriseRoleQueryBizRoleDetailResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleQueryBizRoleDetailWithOptions(shared_ptr<EnterpriseRoleQueryBizRoleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRoleCode)) {
    query->insert(pair<string, string>("BizRoleCode", *request->bizRoleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
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
    {"action", boost::any(string("EnterpriseRoleQueryBizRoleDetail"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseRoleQueryBizRoleDetailResponse(callApi(params, req, runtime));
}

EnterpriseRoleQueryBizRoleDetailResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleQueryBizRoleDetail(shared_ptr<EnterpriseRoleQueryBizRoleDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseRoleQueryBizRoleDetailWithOptions(request, runtime);
}

EnterpriseRoleUpdateBizRoleResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleUpdateBizRoleWithOptions(shared_ptr<EnterpriseRoleUpdateBizRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizPermissionCodeListJson)) {
    query->insert(pair<string, string>("BizPermissionCodeListJson", *request->bizPermissionCodeListJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRoleCode)) {
    query->insert(pair<string, string>("BizRoleCode", *request->bizRoleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRoleDesc)) {
    query->insert(pair<string, string>("BizRoleDesc", *request->bizRoleDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRoleName)) {
    query->insert(pair<string, string>("BizRoleName", *request->bizRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
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
    {"action", boost::any(string("EnterpriseRoleUpdateBizRole"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseRoleUpdateBizRoleResponse(callApi(params, req, runtime));
}

EnterpriseRoleUpdateBizRoleResponse Alibabacloud_AccountCenter20241209::Client::enterpriseRoleUpdateBizRole(shared_ptr<EnterpriseRoleUpdateBizRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseRoleUpdateBizRoleWithOptions(request, runtime);
}

EnterpriseTodoDealAccountTodoResponse Alibabacloud_AccountCenter20241209::Client::enterpriseTodoDealAccountTodoWithOptions(shared_ptr<EnterpriseTodoDealAccountTodoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    body->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->todoId)) {
    body->insert(pair<string, string>("TodoId", *request->todoId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseTodoDealAccountTodo"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseTodoDealAccountTodoResponse(callApi(params, req, runtime));
}

EnterpriseTodoDealAccountTodoResponse Alibabacloud_AccountCenter20241209::Client::enterpriseTodoDealAccountTodo(shared_ptr<EnterpriseTodoDealAccountTodoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseTodoDealAccountTodoWithOptions(request, runtime);
}

EnterpriseTodoQueryAccountTodoListResponse Alibabacloud_AccountCenter20241209::Client::enterpriseTodoQueryAccountTodoListWithOptions(shared_ptr<EnterpriseTodoQueryAccountTodoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatePk)) {
    body->insert(pair<string, string>("OperatePk", *request->operatePk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    body->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showCompleteInfo)) {
    body->insert(pair<string, bool>("ShowCompleteInfo", *request->showCompleteInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->todoType)) {
    body->insert(pair<string, string>("TodoType", *request->todoType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseTodoQueryAccountTodoList"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseTodoQueryAccountTodoListResponse(callApi(params, req, runtime));
}

EnterpriseTodoQueryAccountTodoListResponse Alibabacloud_AccountCenter20241209::Client::enterpriseTodoQueryAccountTodoList(shared_ptr<EnterpriseTodoQueryAccountTodoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseTodoQueryAccountTodoListWithOptions(request, runtime);
}

EnterpriseTodoQueryAccountTodoListByApplicantResponse Alibabacloud_AccountCenter20241209::Client::enterpriseTodoQueryAccountTodoListByApplicantWithOptions(shared_ptr<EnterpriseTodoQueryAccountTodoListByApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatePk)) {
    body->insert(pair<string, string>("OperatePk", *request->operatePk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedEcId)) {
    body->insert(pair<string, string>("OrientedEcId", *request->orientedEcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedLeId)) {
    body->insert(pair<string, string>("OrientedLeId", *request->orientedLeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orientedNbId)) {
    body->insert(pair<string, string>("OrientedNbId", *request->orientedNbId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showCompleteInfo)) {
    body->insert(pair<string, bool>("ShowCompleteInfo", *request->showCompleteInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->todoType)) {
    body->insert(pair<string, string>("TodoType", *request->todoType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseTodoQueryAccountTodoListByApplicant"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseTodoQueryAccountTodoListByApplicantResponse(callApi(params, req, runtime));
}

EnterpriseTodoQueryAccountTodoListByApplicantResponse Alibabacloud_AccountCenter20241209::Client::enterpriseTodoQueryAccountTodoListByApplicant(shared_ptr<EnterpriseTodoQueryAccountTodoListByApplicantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseTodoQueryAccountTodoListByApplicantWithOptions(request, runtime);
}

EnterpriseUninvitedAdminInviteJoinEnterpriseResponse Alibabacloud_AccountCenter20241209::Client::enterpriseUninvitedAdminInviteJoinEnterpriseWithOptions(shared_ptr<EnterpriseUninvitedAdminInviteJoinEnterpriseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecId)) {
    query->insert(pair<string, string>("EcId", *request->ecId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptTicket)) {
    query->insert(pair<string, string>("EncryptTicket", *request->encryptTicket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inviteePk)) {
    query->insert(pair<string, string>("InviteePk", *request->inviteePk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->leId)) {
    query->insert(pair<string, string>("LeId", *request->leId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbId)) {
    query->insert(pair<string, string>("NbId", *request->nbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnterpriseUninvitedAdminInviteJoinEnterprise"))},
    {"version", boost::any(string("2024-12-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnterpriseUninvitedAdminInviteJoinEnterpriseResponse(callApi(params, req, runtime));
}

EnterpriseUninvitedAdminInviteJoinEnterpriseResponse Alibabacloud_AccountCenter20241209::Client::enterpriseUninvitedAdminInviteJoinEnterprise(shared_ptr<EnterpriseUninvitedAdminInviteJoinEnterpriseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enterpriseUninvitedAdminInviteJoinEnterpriseWithOptions(request, runtime);
}

