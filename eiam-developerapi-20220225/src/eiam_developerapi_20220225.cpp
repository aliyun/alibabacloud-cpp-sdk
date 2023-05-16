// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eiam_developerapi_20220225.hpp>
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

using namespace Alibabacloud_Eiam-developerapi20220225;

Alibabacloud_Eiam-developerapi20220225::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eiam-developerapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eiam-developerapi20220225::Client::getEndpoint(shared_ptr<string> productId,
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

AddUserToOrganizationalUnitsResponse Alibabacloud_Eiam-developerapi20220225::Client::addUserToOrganizationalUnitsWithOptions(shared_ptr<string> instanceId,
                                                                                                                             shared_ptr<string> applicationId,
                                                                                                                             shared_ptr<string> userId,
                                                                                                                             shared_ptr<AddUserToOrganizationalUnitsRequest> request,
                                                                                                                             shared_ptr<AddUserToOrganizationalUnitsHeaders> headers,
                                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->organizationalUnitIds)) {
    body->insert(pair<string, vector<string>>("organizationalUnitIds", *request->organizationalUnitIds));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserToOrganizationalUnits"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)) + string("/actions/addUserToOrganizationalUnits"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return AddUserToOrganizationalUnitsResponse(callApi(params, req, runtime));
}

AddUserToOrganizationalUnitsResponse Alibabacloud_Eiam-developerapi20220225::Client::addUserToOrganizationalUnits(shared_ptr<string> instanceId,
                                                                                                                  shared_ptr<string> applicationId,
                                                                                                                  shared_ptr<string> userId,
                                                                                                                  shared_ptr<AddUserToOrganizationalUnitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddUserToOrganizationalUnitsHeaders> headers = make_shared<AddUserToOrganizationalUnitsHeaders>();
  return addUserToOrganizationalUnitsWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

CreateOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::createOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                                                     shared_ptr<string> applicationId,
                                                                                                                     shared_ptr<CreateOrganizationalUnitRequest> request,
                                                                                                                     shared_ptr<CreateOrganizationalUnitHeaders> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationalUnitExternalId)) {
    body->insert(pair<string, string>("organizationalUnitExternalId", *request->organizationalUnitExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationalUnitName)) {
    body->insert(pair<string, string>("organizationalUnitName", *request->organizationalUnitName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    body->insert(pair<string, string>("parentId", *request->parentId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrganizationalUnit"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/organizationalUnits"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrganizationalUnitResponse(callApi(params, req, runtime));
}

CreateOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::createOrganizationalUnit(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<CreateOrganizationalUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateOrganizationalUnitHeaders> headers = make_shared<CreateOrganizationalUnitHeaders>();
  return createOrganizationalUnitWithOptions(instanceId, applicationId, request, headers, runtime);
}

CreateUserResponse Alibabacloud_Eiam-developerapi20220225::Client::createUserWithOptions(shared_ptr<string> instanceId,
                                                                                         shared_ptr<string> applicationId,
                                                                                         shared_ptr<CreateUserRequest> request,
                                                                                         shared_ptr<CreateUserHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateUserRequestCustomFields>>(request->customFields)) {
    body->insert(pair<string, vector<CreateUserRequestCustomFields>>("customFields", *request->customFields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->emailVerified)) {
    body->insert(pair<string, bool>("emailVerified", *request->emailVerified));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<CreateUserRequestPasswordInitializationConfig>(request->passwordInitializationConfig)) {
    body->insert(pair<string, CreateUserRequestPasswordInitializationConfig>("passwordInitializationConfig", *request->passwordInitializationConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("phoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->phoneNumberVerified)) {
    body->insert(pair<string, bool>("phoneNumberVerified", *request->phoneNumberVerified));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneRegion)) {
    body->insert(pair<string, string>("phoneRegion", *request->phoneRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryOrganizationalUnitId)) {
    body->insert(pair<string, string>("primaryOrganizationalUnitId", *request->primaryOrganizationalUnitId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userExternalId)) {
    body->insert(pair<string, string>("userExternalId", *request->userExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("username", *request->username));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUser"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserResponse(callApi(params, req, runtime));
}

CreateUserResponse Alibabacloud_Eiam-developerapi20220225::Client::createUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateUserHeaders> headers = make_shared<CreateUserHeaders>();
  return createUserWithOptions(instanceId, applicationId, request, headers, runtime);
}

DeleteOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::deleteOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                                                     shared_ptr<string> applicationId,
                                                                                                                     shared_ptr<string> organizationalUnitId,
                                                                                                                     shared_ptr<DeleteOrganizationalUnitHeaders> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOrganizationalUnit"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/organizationalUnits/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationalUnitId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteOrganizationalUnitResponse(callApi(params, req, runtime));
}

DeleteOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::deleteOrganizationalUnit(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> organizationalUnitId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteOrganizationalUnitHeaders> headers = make_shared<DeleteOrganizationalUnitHeaders>();
  return deleteOrganizationalUnitWithOptions(instanceId, applicationId, organizationalUnitId, headers, runtime);
}

DeleteUserResponse Alibabacloud_Eiam-developerapi20220225::Client::deleteUserWithOptions(shared_ptr<string> instanceId,
                                                                                         shared_ptr<string> applicationId,
                                                                                         shared_ptr<string> userId,
                                                                                         shared_ptr<DeleteUserHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUser"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteUserResponse(callApi(params, req, runtime));
}

DeleteUserResponse Alibabacloud_Eiam-developerapi20220225::Client::deleteUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteUserHeaders> headers = make_shared<DeleteUserHeaders>();
  return deleteUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

DisableUserResponse Alibabacloud_Eiam-developerapi20220225::Client::disableUserWithOptions(shared_ptr<string> instanceId,
                                                                                           shared_ptr<string> applicationId,
                                                                                           shared_ptr<string> userId,
                                                                                           shared_ptr<DisableUserHeaders> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableUser"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)) + string("/actions/disable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DisableUserResponse(callApi(params, req, runtime));
}

DisableUserResponse Alibabacloud_Eiam-developerapi20220225::Client::disableUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DisableUserHeaders> headers = make_shared<DisableUserHeaders>();
  return disableUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

EnableUserResponse Alibabacloud_Eiam-developerapi20220225::Client::enableUserWithOptions(shared_ptr<string> instanceId,
                                                                                         shared_ptr<string> applicationId,
                                                                                         shared_ptr<string> userId,
                                                                                         shared_ptr<EnableUserHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableUser"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)) + string("/actions/enable"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return EnableUserResponse(callApi(params, req, runtime));
}

EnableUserResponse Alibabacloud_Eiam-developerapi20220225::Client::enableUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EnableUserHeaders> headers = make_shared<EnableUserHeaders>();
  return enableUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

GenerateDeviceCodeResponse Alibabacloud_Eiam-developerapi20220225::Client::generateDeviceCodeWithOptions(shared_ptr<string> instanceId,
                                                                                                         shared_ptr<string> applicationId,
                                                                                                         shared_ptr<GenerateDeviceCodeRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateDeviceCode"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/oauth2/device/code"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateDeviceCodeResponse(callApi(params, req, runtime));
}

GenerateDeviceCodeResponse Alibabacloud_Eiam-developerapi20220225::Client::generateDeviceCode(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GenerateDeviceCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateDeviceCodeWithOptions(instanceId, applicationId, request, headers, runtime);
}

GenerateTokenResponse Alibabacloud_Eiam-developerapi20220225::Client::generateTokenWithOptions(shared_ptr<string> instanceId,
                                                                                               shared_ptr<string> applicationId,
                                                                                               shared_ptr<GenerateTokenRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("client_id", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSecret)) {
    query->insert(pair<string, string>("client_secret", *request->clientSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeVerifier)) {
    query->insert(pair<string, string>("code_verifier", *request->codeVerifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceCode)) {
    query->insert(pair<string, string>("device_code", *request->deviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exclusiveTag)) {
    query->insert(pair<string, string>("exclusive_tag", *request->exclusiveTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantType)) {
    query->insert(pair<string, string>("grant_type", *request->grantType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->redirectUri)) {
    query->insert(pair<string, string>("redirect_uri", *request->redirectUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refreshToken)) {
    query->insert(pair<string, string>("refresh_token", *request->refreshToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("username", *request->username));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateToken"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/oauth2/token"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateTokenResponse(callApi(params, req, runtime));
}

GenerateTokenResponse Alibabacloud_Eiam-developerapi20220225::Client::generateToken(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GenerateTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateTokenWithOptions(instanceId, applicationId, request, headers, runtime);
}

GetApplicationProvisioningScopeResponse Alibabacloud_Eiam-developerapi20220225::Client::getApplicationProvisioningScopeWithOptions(shared_ptr<string> instanceId,
                                                                                                                                   shared_ptr<string> applicationId,
                                                                                                                                   shared_ptr<GetApplicationProvisioningScopeHeaders> headers,
                                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApplicationProvisioningScope"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/provisioningScope"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApplicationProvisioningScopeResponse(callApi(params, req, runtime));
}

GetApplicationProvisioningScopeResponse Alibabacloud_Eiam-developerapi20220225::Client::getApplicationProvisioningScope(shared_ptr<string> instanceId, shared_ptr<string> applicationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetApplicationProvisioningScopeHeaders> headers = make_shared<GetApplicationProvisioningScopeHeaders>();
  return getApplicationProvisioningScopeWithOptions(instanceId, applicationId, headers, runtime);
}

GetOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::getOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                                               shared_ptr<string> applicationId,
                                                                                                               shared_ptr<string> organizationalUnitId,
                                                                                                               shared_ptr<GetOrganizationalUnitHeaders> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrganizationalUnit"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/organizationalUnits/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationalUnitId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrganizationalUnitResponse(callApi(params, req, runtime));
}

GetOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::getOrganizationalUnit(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> organizationalUnitId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetOrganizationalUnitHeaders> headers = make_shared<GetOrganizationalUnitHeaders>();
  return getOrganizationalUnitWithOptions(instanceId, applicationId, organizationalUnitId, headers, runtime);
}

GetOrganizationalUnitIdByExternalIdResponse Alibabacloud_Eiam-developerapi20220225::Client::getOrganizationalUnitIdByExternalIdWithOptions(shared_ptr<string> instanceId,
                                                                                                                                           shared_ptr<string> applicationId,
                                                                                                                                           shared_ptr<GetOrganizationalUnitIdByExternalIdRequest> request,
                                                                                                                                           shared_ptr<GetOrganizationalUnitIdByExternalIdHeaders> headers,
                                                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationalUnitExternalId)) {
    body->insert(pair<string, string>("organizationalUnitExternalId", *request->organizationalUnitExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationalUnitSourceId)) {
    body->insert(pair<string, string>("organizationalUnitSourceId", *request->organizationalUnitSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationalUnitSourceType)) {
    body->insert(pair<string, string>("organizationalUnitSourceType", *request->organizationalUnitSourceType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOrganizationalUnitIdByExternalId"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/organizationalUnits/_/actions/getOrganizationalUnitIdByExternalId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrganizationalUnitIdByExternalIdResponse(callApi(params, req, runtime));
}

GetOrganizationalUnitIdByExternalIdResponse Alibabacloud_Eiam-developerapi20220225::Client::getOrganizationalUnitIdByExternalId(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetOrganizationalUnitIdByExternalIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetOrganizationalUnitIdByExternalIdHeaders> headers = make_shared<GetOrganizationalUnitIdByExternalIdHeaders>();
  return getOrganizationalUnitIdByExternalIdWithOptions(instanceId, applicationId, request, headers, runtime);
}

GetUserResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserWithOptions(shared_ptr<string> instanceId,
                                                                                   shared_ptr<string> applicationId,
                                                                                   shared_ptr<string> userId,
                                                                                   shared_ptr<GetUserHeaders> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUser"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResponse(callApi(params, req, runtime));
}

GetUserResponse Alibabacloud_Eiam-developerapi20220225::Client::getUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserHeaders> headers = make_shared<GetUserHeaders>();
  return getUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

GetUserIdByEmailResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserIdByEmailWithOptions(shared_ptr<string> instanceId,
                                                                                                     shared_ptr<string> applicationId,
                                                                                                     shared_ptr<GetUserIdByEmailRequest> request,
                                                                                                     shared_ptr<GetUserIdByEmailHeaders> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserIdByEmail"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/_/actions/getUserIdByEmail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserIdByEmailResponse(callApi(params, req, runtime));
}

GetUserIdByEmailResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserIdByEmail(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetUserIdByEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserIdByEmailHeaders> headers = make_shared<GetUserIdByEmailHeaders>();
  return getUserIdByEmailWithOptions(instanceId, applicationId, request, headers, runtime);
}

GetUserIdByPhoneNumberResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserIdByPhoneNumberWithOptions(shared_ptr<string> instanceId,
                                                                                                                 shared_ptr<string> applicationId,
                                                                                                                 shared_ptr<GetUserIdByPhoneNumberRequest> request,
                                                                                                                 shared_ptr<GetUserIdByPhoneNumberHeaders> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("phoneNumber", *request->phoneNumber));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserIdByPhoneNumber"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/_/actions/getUserIdByPhoneNumber"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserIdByPhoneNumberResponse(callApi(params, req, runtime));
}

GetUserIdByPhoneNumberResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserIdByPhoneNumber(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetUserIdByPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserIdByPhoneNumberHeaders> headers = make_shared<GetUserIdByPhoneNumberHeaders>();
  return getUserIdByPhoneNumberWithOptions(instanceId, applicationId, request, headers, runtime);
}

GetUserIdByUserExternalIdResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserIdByUserExternalIdWithOptions(shared_ptr<string> instanceId,
                                                                                                                       shared_ptr<string> applicationId,
                                                                                                                       shared_ptr<GetUserIdByUserExternalIdRequest> request,
                                                                                                                       shared_ptr<GetUserIdByUserExternalIdHeaders> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userExternalId)) {
    body->insert(pair<string, string>("userExternalId", *request->userExternalId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSourceId)) {
    body->insert(pair<string, string>("userSourceId", *request->userSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userSourceType)) {
    body->insert(pair<string, string>("userSourceType", *request->userSourceType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserIdByUserExternalId"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/_/actions/getUserIdByExternalId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserIdByUserExternalIdResponse(callApi(params, req, runtime));
}

GetUserIdByUserExternalIdResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserIdByUserExternalId(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetUserIdByUserExternalIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserIdByUserExternalIdHeaders> headers = make_shared<GetUserIdByUserExternalIdHeaders>();
  return getUserIdByUserExternalIdWithOptions(instanceId, applicationId, request, headers, runtime);
}

GetUserIdByUsernameResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserIdByUsernameWithOptions(shared_ptr<string> instanceId,
                                                                                                           shared_ptr<string> applicationId,
                                                                                                           shared_ptr<GetUserIdByUsernameRequest> request,
                                                                                                           shared_ptr<GetUserIdByUsernameHeaders> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("username", *request->username));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserIdByUsername"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/_/actions/getUserIdByUsername"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserIdByUsernameResponse(callApi(params, req, runtime));
}

GetUserIdByUsernameResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserIdByUsername(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetUserIdByUsernameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserIdByUsernameHeaders> headers = make_shared<GetUserIdByUsernameHeaders>();
  return getUserIdByUsernameWithOptions(instanceId, applicationId, request, headers, runtime);
}

GetUserInfoResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserInfoWithOptions(shared_ptr<string> instanceId,
                                                                                           shared_ptr<string> applicationId,
                                                                                           shared_ptr<GetUserInfoHeaders> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserInfo"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/oauth2/userinfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserInfoResponse(callApi(params, req, runtime));
}

GetUserInfoResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserInfo(shared_ptr<string> instanceId, shared_ptr<string> applicationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserInfoHeaders> headers = make_shared<GetUserInfoHeaders>();
  return getUserInfoWithOptions(instanceId, applicationId, headers, runtime);
}

ListOrganizationalUnitParentIdsResponse Alibabacloud_Eiam-developerapi20220225::Client::listOrganizationalUnitParentIdsWithOptions(shared_ptr<string> instanceId,
                                                                                                                                   shared_ptr<string> applicationId,
                                                                                                                                   shared_ptr<string> organizationalUnitId,
                                                                                                                                   shared_ptr<ListOrganizationalUnitParentIdsHeaders> headers,
                                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrganizationalUnitParentIds"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/organizationalUnits/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationalUnitId)) + string("/parentIds"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrganizationalUnitParentIdsResponse(callApi(params, req, runtime));
}

ListOrganizationalUnitParentIdsResponse Alibabacloud_Eiam-developerapi20220225::Client::listOrganizationalUnitParentIds(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> organizationalUnitId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListOrganizationalUnitParentIdsHeaders> headers = make_shared<ListOrganizationalUnitParentIdsHeaders>();
  return listOrganizationalUnitParentIdsWithOptions(instanceId, applicationId, organizationalUnitId, headers, runtime);
}

ListOrganizationalUnitsResponse Alibabacloud_Eiam-developerapi20220225::Client::listOrganizationalUnitsWithOptions(shared_ptr<string> instanceId,
                                                                                                                   shared_ptr<string> applicationId,
                                                                                                                   shared_ptr<ListOrganizationalUnitsRequest> request,
                                                                                                                   shared_ptr<ListOrganizationalUnitsHeaders> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    query->insert(pair<string, string>("parentId", *request->parentId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrganizationalUnits"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/organizationalUnits"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrganizationalUnitsResponse(callApi(params, req, runtime));
}

ListOrganizationalUnitsResponse Alibabacloud_Eiam-developerapi20220225::Client::listOrganizationalUnits(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<ListOrganizationalUnitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListOrganizationalUnitsHeaders> headers = make_shared<ListOrganizationalUnitsHeaders>();
  return listOrganizationalUnitsWithOptions(instanceId, applicationId, request, headers, runtime);
}

ListUsersResponse Alibabacloud_Eiam-developerapi20220225::Client::listUsersWithOptions(shared_ptr<string> instanceId,
                                                                                       shared_ptr<string> applicationId,
                                                                                       shared_ptr<ListUsersRequest> request,
                                                                                       shared_ptr<ListUsersHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationalUnitId)) {
    query->insert(pair<string, string>("organizationalUnitId", *request->organizationalUnitId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("pageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("pageSize", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_Eiam-developerapi20220225::Client::listUsers(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListUsersHeaders> headers = make_shared<ListUsersHeaders>();
  return listUsersWithOptions(instanceId, applicationId, request, headers, runtime);
}

PatchOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::patchOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                                                   shared_ptr<string> applicationId,
                                                                                                                   shared_ptr<string> organizationalUnitId,
                                                                                                                   shared_ptr<PatchOrganizationalUnitRequest> request,
                                                                                                                   shared_ptr<PatchOrganizationalUnitHeaders> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationalUnitName)) {
    body->insert(pair<string, string>("organizationalUnitName", *request->organizationalUnitName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PatchOrganizationalUnit"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/organizationalUnits/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationalUnitId)))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PatchOrganizationalUnitResponse(callApi(params, req, runtime));
}

PatchOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::patchOrganizationalUnit(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<string> applicationId,
                                                                                                        shared_ptr<string> organizationalUnitId,
                                                                                                        shared_ptr<PatchOrganizationalUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PatchOrganizationalUnitHeaders> headers = make_shared<PatchOrganizationalUnitHeaders>();
  return patchOrganizationalUnitWithOptions(instanceId, applicationId, organizationalUnitId, request, headers, runtime);
}

PatchUserResponse Alibabacloud_Eiam-developerapi20220225::Client::patchUserWithOptions(shared_ptr<string> instanceId,
                                                                                       shared_ptr<string> applicationId,
                                                                                       shared_ptr<string> userId,
                                                                                       shared_ptr<PatchUserRequest> request,
                                                                                       shared_ptr<PatchUserHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<PatchUserRequestCustomFields>>(request->customFields)) {
    body->insert(pair<string, vector<PatchUserRequestCustomFields>>("customFields", *request->customFields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("displayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->emailVerified)) {
    body->insert(pair<string, bool>("emailVerified", *request->emailVerified));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    body->insert(pair<string, string>("phoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->phoneNumberVerified)) {
    body->insert(pair<string, bool>("phoneNumberVerified", *request->phoneNumberVerified));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneRegion)) {
    body->insert(pair<string, string>("phoneRegion", *request->phoneRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    body->insert(pair<string, string>("username", *request->username));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PatchUser"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PatchUserResponse(callApi(params, req, runtime));
}

PatchUserResponse Alibabacloud_Eiam-developerapi20220225::Client::patchUser(shared_ptr<string> instanceId,
                                                                            shared_ptr<string> applicationId,
                                                                            shared_ptr<string> userId,
                                                                            shared_ptr<PatchUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PatchUserHeaders> headers = make_shared<PatchUserHeaders>();
  return patchUserWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

RemoveUserFromOrganizationalUnitsResponse Alibabacloud_Eiam-developerapi20220225::Client::removeUserFromOrganizationalUnitsWithOptions(shared_ptr<string> instanceId,
                                                                                                                                       shared_ptr<string> applicationId,
                                                                                                                                       shared_ptr<string> userId,
                                                                                                                                       shared_ptr<RemoveUserFromOrganizationalUnitsRequest> request,
                                                                                                                                       shared_ptr<RemoveUserFromOrganizationalUnitsHeaders> headers,
                                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->organizationalUnitIds)) {
    body->insert(pair<string, vector<string>>("organizationalUnitIds", *request->organizationalUnitIds));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveUserFromOrganizationalUnits"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)) + string("/actions/removeUserFromOrganizationalUnits"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return RemoveUserFromOrganizationalUnitsResponse(callApi(params, req, runtime));
}

RemoveUserFromOrganizationalUnitsResponse Alibabacloud_Eiam-developerapi20220225::Client::removeUserFromOrganizationalUnits(shared_ptr<string> instanceId,
                                                                                                                            shared_ptr<string> applicationId,
                                                                                                                            shared_ptr<string> userId,
                                                                                                                            shared_ptr<RemoveUserFromOrganizationalUnitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RemoveUserFromOrganizationalUnitsHeaders> headers = make_shared<RemoveUserFromOrganizationalUnitsHeaders>();
  return removeUserFromOrganizationalUnitsWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

RevokeTokenResponse Alibabacloud_Eiam-developerapi20220225::Client::revokeTokenWithOptions(shared_ptr<string> instanceId,
                                                                                           shared_ptr<string> applicationId,
                                                                                           shared_ptr<RevokeTokenRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("client_id", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSecret)) {
    query->insert(pair<string, string>("client_secret", *request->clientSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tokenTypeHint)) {
    query->insert(pair<string, string>("token_type_hint", *request->tokenTypeHint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeToken"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/oauth2/revoke"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeTokenResponse(callApi(params, req, runtime));
}

RevokeTokenResponse Alibabacloud_Eiam-developerapi20220225::Client::revokeToken(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<RevokeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return revokeTokenWithOptions(instanceId, applicationId, request, headers, runtime);
}

SetUserPrimaryOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::setUserPrimaryOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                                                                     shared_ptr<string> applicationId,
                                                                                                                                     shared_ptr<string> userId,
                                                                                                                                     shared_ptr<SetUserPrimaryOrganizationalUnitRequest> request,
                                                                                                                                     shared_ptr<SetUserPrimaryOrganizationalUnitHeaders> headers,
                                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->organizationalUnitId)) {
    body->insert(pair<string, string>("organizationalUnitId", *request->organizationalUnitId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetUserPrimaryOrganizationalUnit"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)) + string("/actions/setUserPrimaryOrganizationalUnit"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return SetUserPrimaryOrganizationalUnitResponse(callApi(params, req, runtime));
}

SetUserPrimaryOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::setUserPrimaryOrganizationalUnit(shared_ptr<string> instanceId,
                                                                                                                          shared_ptr<string> applicationId,
                                                                                                                          shared_ptr<string> userId,
                                                                                                                          shared_ptr<SetUserPrimaryOrganizationalUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SetUserPrimaryOrganizationalUnitHeaders> headers = make_shared<SetUserPrimaryOrganizationalUnitHeaders>();
  return setUserPrimaryOrganizationalUnitWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

UpdateUserPasswordResponse Alibabacloud_Eiam-developerapi20220225::Client::updateUserPasswordWithOptions(shared_ptr<string> instanceId,
                                                                                                         shared_ptr<string> applicationId,
                                                                                                         shared_ptr<string> userId,
                                                                                                         shared_ptr<UpdateUserPasswordRequest> request,
                                                                                                         shared_ptr<UpdateUserPasswordHeaders> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    body->insert(pair<string, string>("password", *request->password));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->authorization)) {
    realHeaders->insert(pair<string, string>("Authorization", Darabonba_Util::Client::toJSONString(headers->authorization)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserPassword"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId)) + string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId)) + string("/users/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)) + string("/actions/updateUserPassword"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UpdateUserPasswordResponse(callApi(params, req, runtime));
}

UpdateUserPasswordResponse Alibabacloud_Eiam-developerapi20220225::Client::updateUserPassword(shared_ptr<string> instanceId,
                                                                                              shared_ptr<string> applicationId,
                                                                                              shared_ptr<string> userId,
                                                                                              shared_ptr<UpdateUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateUserPasswordHeaders> headers = make_shared<UpdateUserPasswordHeaders>();
  return updateUserPasswordWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

