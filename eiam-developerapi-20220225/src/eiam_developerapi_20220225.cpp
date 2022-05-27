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

CreateOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::createOrganizationalUnit(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<CreateOrganizationalUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateOrganizationalUnitHeaders> headers = make_shared<CreateOrganizationalUnitHeaders>();
  return createOrganizationalUnitWithOptions(instanceId, applicationId, request, headers, runtime);
}

CreateOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::createOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                                                     shared_ptr<string> applicationId,
                                                                                                                     shared_ptr<CreateOrganizationalUnitRequest> request,
                                                                                                                     shared_ptr<CreateOrganizationalUnitHeaders> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/organizationalUnits"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrganizationalUnitResponse(callApi(params, req, runtime));
}

CreateUserResponse Alibabacloud_Eiam-developerapi20220225::Client::createUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateUserHeaders> headers = make_shared<CreateUserHeaders>();
  return createUserWithOptions(instanceId, applicationId, request, headers, runtime);
}

CreateUserResponse Alibabacloud_Eiam-developerapi20220225::Client::createUserWithOptions(shared_ptr<string> instanceId,
                                                                                         shared_ptr<string> applicationId,
                                                                                         shared_ptr<CreateUserRequest> request,
                                                                                         shared_ptr<CreateUserHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/users"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserResponse(callApi(params, req, runtime));
}

DeleteOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::deleteOrganizationalUnit(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> organizationalUnitId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteOrganizationalUnitHeaders> headers = make_shared<DeleteOrganizationalUnitHeaders>();
  return deleteOrganizationalUnitWithOptions(instanceId, applicationId, organizationalUnitId, headers, runtime);
}

DeleteOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::deleteOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                                                     shared_ptr<string> applicationId,
                                                                                                                     shared_ptr<string> organizationalUnitId,
                                                                                                                     shared_ptr<DeleteOrganizationalUnitHeaders> headers,
                                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
  organizationalUnitId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationalUnitId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/organizationalUnits/") + string(*organizationalUnitId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteOrganizationalUnitResponse(callApi(params, req, runtime));
}

DeleteUserResponse Alibabacloud_Eiam-developerapi20220225::Client::deleteUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteUserHeaders> headers = make_shared<DeleteUserHeaders>();
  return deleteUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

DeleteUserResponse Alibabacloud_Eiam-developerapi20220225::Client::deleteUserWithOptions(shared_ptr<string> instanceId,
                                                                                         shared_ptr<string> applicationId,
                                                                                         shared_ptr<string> userId,
                                                                                         shared_ptr<DeleteUserHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
  userId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/users/") + string(*userId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteUserResponse(callApi(params, req, runtime));
}

GenerateDeviceCodeResponse Alibabacloud_Eiam-developerapi20220225::Client::generateDeviceCode(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GenerateDeviceCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateDeviceCodeWithOptions(instanceId, applicationId, request, headers, runtime);
}

GenerateDeviceCodeResponse Alibabacloud_Eiam-developerapi20220225::Client::generateDeviceCodeWithOptions(shared_ptr<string> instanceId,
                                                                                                         shared_ptr<string> applicationId,
                                                                                                         shared_ptr<GenerateDeviceCodeRequest> request,
                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/oauth2/device/code"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateDeviceCodeResponse(callApi(params, req, runtime));
}

GenerateTokenResponse Alibabacloud_Eiam-developerapi20220225::Client::generateToken(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GenerateTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateTokenWithOptions(instanceId, applicationId, request, headers, runtime);
}

GenerateTokenResponse Alibabacloud_Eiam-developerapi20220225::Client::generateTokenWithOptions(shared_ptr<string> instanceId,
                                                                                               shared_ptr<string> applicationId,
                                                                                               shared_ptr<GenerateTokenRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/oauth2/token"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateTokenResponse(callApi(params, req, runtime));
}

GetApplicationProvisioningScopeResponse Alibabacloud_Eiam-developerapi20220225::Client::getApplicationProvisioningScope(shared_ptr<string> instanceId, shared_ptr<string> applicationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetApplicationProvisioningScopeHeaders> headers = make_shared<GetApplicationProvisioningScopeHeaders>();
  return getApplicationProvisioningScopeWithOptions(instanceId, applicationId, headers, runtime);
}

GetApplicationProvisioningScopeResponse Alibabacloud_Eiam-developerapi20220225::Client::getApplicationProvisioningScopeWithOptions(shared_ptr<string> instanceId,
                                                                                                                                   shared_ptr<string> applicationId,
                                                                                                                                   shared_ptr<GetApplicationProvisioningScopeHeaders> headers,
                                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/provisioningScope"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApplicationProvisioningScopeResponse(callApi(params, req, runtime));
}

GetOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::getOrganizationalUnit(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> organizationalUnitId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetOrganizationalUnitHeaders> headers = make_shared<GetOrganizationalUnitHeaders>();
  return getOrganizationalUnitWithOptions(instanceId, applicationId, organizationalUnitId, headers, runtime);
}

GetOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::getOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                                               shared_ptr<string> applicationId,
                                                                                                               shared_ptr<string> organizationalUnitId,
                                                                                                               shared_ptr<GetOrganizationalUnitHeaders> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
  organizationalUnitId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationalUnitId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/organizationalUnits/") + string(*organizationalUnitId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOrganizationalUnitResponse(callApi(params, req, runtime));
}

GetUserResponse Alibabacloud_Eiam-developerapi20220225::Client::getUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserHeaders> headers = make_shared<GetUserHeaders>();
  return getUserWithOptions(instanceId, applicationId, userId, headers, runtime);
}

GetUserResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserWithOptions(shared_ptr<string> instanceId,
                                                                                   shared_ptr<string> applicationId,
                                                                                   shared_ptr<string> userId,
                                                                                   shared_ptr<GetUserHeaders> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
  userId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/users/") + string(*userId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResponse(callApi(params, req, runtime));
}

GetUserInfoResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserInfo(shared_ptr<string> instanceId, shared_ptr<string> applicationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserInfoHeaders> headers = make_shared<GetUserInfoHeaders>();
  return getUserInfoWithOptions(instanceId, applicationId, headers, runtime);
}

GetUserInfoResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserInfoWithOptions(shared_ptr<string> instanceId,
                                                                                           shared_ptr<string> applicationId,
                                                                                           shared_ptr<GetUserInfoHeaders> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/oauth2/userinfo"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserInfoResponse(callApi(params, req, runtime));
}

GetUserPasswordPolicyResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserPasswordPolicy(shared_ptr<string> instanceId, shared_ptr<string> applicationId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserPasswordPolicyHeaders> headers = make_shared<GetUserPasswordPolicyHeaders>();
  return getUserPasswordPolicyWithOptions(instanceId, applicationId, headers, runtime);
}

GetUserPasswordPolicyResponse Alibabacloud_Eiam-developerapi20220225::Client::getUserPasswordPolicyWithOptions(shared_ptr<string> instanceId,
                                                                                                               shared_ptr<string> applicationId,
                                                                                                               shared_ptr<GetUserPasswordPolicyHeaders> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
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
    {"action", boost::any(string("GetUserPasswordPolicy"))},
    {"version", boost::any(string("2022-02-25"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/users/_/actions/getUserPasswordPolicy"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserPasswordPolicyResponse(callApi(params, req, runtime));
}

ListOrganizationalUnitParentIdsResponse Alibabacloud_Eiam-developerapi20220225::Client::listOrganizationalUnitParentIds(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> organizationalUnitId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListOrganizationalUnitParentIdsHeaders> headers = make_shared<ListOrganizationalUnitParentIdsHeaders>();
  return listOrganizationalUnitParentIdsWithOptions(instanceId, applicationId, organizationalUnitId, headers, runtime);
}

ListOrganizationalUnitParentIdsResponse Alibabacloud_Eiam-developerapi20220225::Client::listOrganizationalUnitParentIdsWithOptions(shared_ptr<string> instanceId,
                                                                                                                                   shared_ptr<string> applicationId,
                                                                                                                                   shared_ptr<string> organizationalUnitId,
                                                                                                                                   shared_ptr<ListOrganizationalUnitParentIdsHeaders> headers,
                                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
  organizationalUnitId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationalUnitId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/organizationalUnits/") + string(*organizationalUnitId) + string("/parentIds"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrganizationalUnitParentIdsResponse(callApi(params, req, runtime));
}

ListOrganizationalUnitsResponse Alibabacloud_Eiam-developerapi20220225::Client::listOrganizationalUnits(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<ListOrganizationalUnitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListOrganizationalUnitsHeaders> headers = make_shared<ListOrganizationalUnitsHeaders>();
  return listOrganizationalUnitsWithOptions(instanceId, applicationId, request, headers, runtime);
}

ListOrganizationalUnitsResponse Alibabacloud_Eiam-developerapi20220225::Client::listOrganizationalUnitsWithOptions(shared_ptr<string> instanceId,
                                                                                                                   shared_ptr<string> applicationId,
                                                                                                                   shared_ptr<ListOrganizationalUnitsRequest> request,
                                                                                                                   shared_ptr<ListOrganizationalUnitsHeaders> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/organizationalUnits"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrganizationalUnitsResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_Eiam-developerapi20220225::Client::listUsers(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListUsersHeaders> headers = make_shared<ListUsersHeaders>();
  return listUsersWithOptions(instanceId, applicationId, request, headers, runtime);
}

ListUsersResponse Alibabacloud_Eiam-developerapi20220225::Client::listUsersWithOptions(shared_ptr<string> instanceId,
                                                                                       shared_ptr<string> applicationId,
                                                                                       shared_ptr<ListUsersRequest> request,
                                                                                       shared_ptr<ListUsersHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/users"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

PatchOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::patchOrganizationalUnit(shared_ptr<string> instanceId,
                                                                                                        shared_ptr<string> applicationId,
                                                                                                        shared_ptr<string> organizationalUnitId,
                                                                                                        shared_ptr<PatchOrganizationalUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PatchOrganizationalUnitHeaders> headers = make_shared<PatchOrganizationalUnitHeaders>();
  return patchOrganizationalUnitWithOptions(instanceId, applicationId, organizationalUnitId, request, headers, runtime);
}

PatchOrganizationalUnitResponse Alibabacloud_Eiam-developerapi20220225::Client::patchOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                                                   shared_ptr<string> applicationId,
                                                                                                                   shared_ptr<string> organizationalUnitId,
                                                                                                                   shared_ptr<PatchOrganizationalUnitRequest> request,
                                                                                                                   shared_ptr<PatchOrganizationalUnitHeaders> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
  organizationalUnitId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(organizationalUnitId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/organizationalUnits/") + string(*organizationalUnitId))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PatchOrganizationalUnitResponse(callApi(params, req, runtime));
}

PatchUserResponse Alibabacloud_Eiam-developerapi20220225::Client::patchUser(shared_ptr<string> instanceId,
                                                                            shared_ptr<string> applicationId,
                                                                            shared_ptr<string> userId,
                                                                            shared_ptr<PatchUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PatchUserHeaders> headers = make_shared<PatchUserHeaders>();
  return patchUserWithOptions(instanceId, applicationId, userId, request, headers, runtime);
}

PatchUserResponse Alibabacloud_Eiam-developerapi20220225::Client::patchUserWithOptions(shared_ptr<string> instanceId,
                                                                                       shared_ptr<string> applicationId,
                                                                                       shared_ptr<string> userId,
                                                                                       shared_ptr<PatchUserRequest> request,
                                                                                       shared_ptr<PatchUserHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
  userId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/users/") + string(*userId))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PatchUserResponse(callApi(params, req, runtime));
}

RevokeTokenResponse Alibabacloud_Eiam-developerapi20220225::Client::revokeToken(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<RevokeTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return revokeTokenWithOptions(instanceId, applicationId, request, headers, runtime);
}

RevokeTokenResponse Alibabacloud_Eiam-developerapi20220225::Client::revokeTokenWithOptions(shared_ptr<string> instanceId,
                                                                                           shared_ptr<string> applicationId,
                                                                                           shared_ptr<RevokeTokenRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  instanceId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(instanceId));
  applicationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(applicationId));
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
    {"pathname", boost::any(string("/v2/") + string(*instanceId) + string("/") + string(*applicationId) + string("/oauth2/revoke"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeTokenResponse(callApi(params, req, runtime));
}

