// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ims_20190815.hpp>
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

using namespace Alibabacloud_Ims20190815;

Alibabacloud_Ims20190815::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ims"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ims20190815::Client::getEndpoint(shared_ptr<string> productId,
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

AddClientIdToOIDCProviderResponse Alibabacloud_Ims20190815::Client::addClientIdToOIDCProviderWithOptions(shared_ptr<AddClientIdToOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCProviderName)) {
    query->insert(pair<string, string>("OIDCProviderName", *request->OIDCProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddClientIdToOIDCProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddClientIdToOIDCProviderResponse(callApi(params, req, runtime));
}

AddClientIdToOIDCProviderResponse Alibabacloud_Ims20190815::Client::addClientIdToOIDCProvider(shared_ptr<AddClientIdToOIDCProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addClientIdToOIDCProviderWithOptions(request, runtime);
}

AddFingerprintToOIDCProviderResponse Alibabacloud_Ims20190815::Client::addFingerprintToOIDCProviderWithOptions(shared_ptr<AddFingerprintToOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fingerprint)) {
    query->insert(pair<string, string>("Fingerprint", *request->fingerprint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCProviderName)) {
    query->insert(pair<string, string>("OIDCProviderName", *request->OIDCProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFingerprintToOIDCProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFingerprintToOIDCProviderResponse(callApi(params, req, runtime));
}

AddFingerprintToOIDCProviderResponse Alibabacloud_Ims20190815::Client::addFingerprintToOIDCProvider(shared_ptr<AddFingerprintToOIDCProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFingerprintToOIDCProviderWithOptions(request, runtime);
}

AddUserToGroupResponse Alibabacloud_Ims20190815::Client::addUserToGroupWithOptions(shared_ptr<AddUserToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddUserToGroup"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddUserToGroupResponse(callApi(params, req, runtime));
}

AddUserToGroupResponse Alibabacloud_Ims20190815::Client::addUserToGroup(shared_ptr<AddUserToGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUserToGroupWithOptions(request, runtime);
}

BindMFADeviceResponse Alibabacloud_Ims20190815::Client::bindMFADeviceWithOptions(shared_ptr<BindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticationCode1)) {
    query->insert(pair<string, string>("AuthenticationCode1", *request->authenticationCode1));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authenticationCode2)) {
    query->insert(pair<string, string>("AuthenticationCode2", *request->authenticationCode2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindMFADevice"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindMFADeviceResponse(callApi(params, req, runtime));
}

BindMFADeviceResponse Alibabacloud_Ims20190815::Client::bindMFADevice(shared_ptr<BindMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindMFADeviceWithOptions(request, runtime);
}

ChangePasswordResponse Alibabacloud_Ims20190815::Client::changePasswordWithOptions(shared_ptr<ChangePasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newPassword)) {
    query->insert(pair<string, string>("NewPassword", *request->newPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oldPassword)) {
    query->insert(pair<string, string>("OldPassword", *request->oldPassword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangePassword"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangePasswordResponse(callApi(params, req, runtime));
}

ChangePasswordResponse Alibabacloud_Ims20190815::Client::changePassword(shared_ptr<ChangePasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changePasswordWithOptions(request, runtime);
}

CreateAccessKeyResponse Alibabacloud_Ims20190815::Client::createAccessKeyWithOptions(shared_ptr<CreateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccessKey"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAccessKeyResponse(callApi(params, req, runtime));
}

CreateAccessKeyResponse Alibabacloud_Ims20190815::Client::createAccessKey(shared_ptr<CreateAccessKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessKeyWithOptions(request, runtime);
}

CreateAppSecretResponse Alibabacloud_Ims20190815::Client::createAppSecretWithOptions(shared_ptr<CreateAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppSecret"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppSecretResponse(callApi(params, req, runtime));
}

CreateAppSecretResponse Alibabacloud_Ims20190815::Client::createAppSecret(shared_ptr<CreateAppSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppSecretWithOptions(request, runtime);
}

CreateApplicationResponse Alibabacloud_Ims20190815::Client::createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->accessTokenValidity)) {
    query->insert(pair<string, long>("AccessTokenValidity", *request->accessTokenValidity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isMultiTenant)) {
    query->insert(pair<string, bool>("IsMultiTenant", *request->isMultiTenant));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->predefinedScopes)) {
    query->insert(pair<string, string>("PredefinedScopes", *request->predefinedScopes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->redirectUris)) {
    query->insert(pair<string, string>("RedirectUris", *request->redirectUris));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refreshTokenValidity)) {
    query->insert(pair<string, long>("RefreshTokenValidity", *request->refreshTokenValidity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->secretRequired)) {
    query->insert(pair<string, bool>("SecretRequired", *request->secretRequired));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApplication"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApplicationResponse(callApi(params, req, runtime));
}

CreateApplicationResponse Alibabacloud_Ims20190815::Client::createApplication(shared_ptr<CreateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApplicationWithOptions(request, runtime);
}

CreateGroupResponse Alibabacloud_Ims20190815::Client::createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    query->insert(pair<string, string>("Comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGroup"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGroupResponse(callApi(params, req, runtime));
}

CreateGroupResponse Alibabacloud_Ims20190815::Client::createGroup(shared_ptr<CreateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupWithOptions(request, runtime);
}

CreateLoginProfileResponse Alibabacloud_Ims20190815::Client::createLoginProfileWithOptions(shared_ptr<CreateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->MFABindRequired)) {
    query->insert(pair<string, bool>("MFABindRequired", *request->MFABindRequired));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->passwordResetRequired)) {
    query->insert(pair<string, bool>("PasswordResetRequired", *request->passwordResetRequired));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoginProfile"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLoginProfileResponse(callApi(params, req, runtime));
}

CreateLoginProfileResponse Alibabacloud_Ims20190815::Client::createLoginProfile(shared_ptr<CreateLoginProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoginProfileWithOptions(request, runtime);
}

CreateOIDCProviderResponse Alibabacloud_Ims20190815::Client::createOIDCProviderWithOptions(shared_ptr<CreateOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIds)) {
    query->insert(pair<string, string>("ClientIds", *request->clientIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fingerprints)) {
    query->insert(pair<string, string>("Fingerprints", *request->fingerprints));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->issuerUrl)) {
    query->insert(pair<string, string>("IssuerUrl", *request->issuerUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCProviderName)) {
    query->insert(pair<string, string>("OIDCProviderName", *request->OIDCProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOIDCProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOIDCProviderResponse(callApi(params, req, runtime));
}

CreateOIDCProviderResponse Alibabacloud_Ims20190815::Client::createOIDCProvider(shared_ptr<CreateOIDCProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOIDCProviderWithOptions(request, runtime);
}

CreateSAMLProviderResponse Alibabacloud_Ims20190815::Client::createSAMLProviderWithOptions(shared_ptr<CreateSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encodedSAMLMetadataDocument)) {
    query->insert(pair<string, string>("EncodedSAMLMetadataDocument", *request->encodedSAMLMetadataDocument));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SAMLProviderName)) {
    query->insert(pair<string, string>("SAMLProviderName", *request->SAMLProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSAMLProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSAMLProviderResponse(callApi(params, req, runtime));
}

CreateSAMLProviderResponse Alibabacloud_Ims20190815::Client::createSAMLProvider(shared_ptr<CreateSAMLProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSAMLProviderWithOptions(request, runtime);
}

CreateUserResponse Alibabacloud_Ims20190815::Client::createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->comments)) {
    query->insert(pair<string, string>("Comments", *request->comments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    query->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    query->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobilePhone)) {
    query->insert(pair<string, string>("MobilePhone", *request->mobilePhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUser"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserResponse(callApi(params, req, runtime));
}

CreateUserResponse Alibabacloud_Ims20190815::Client::createUser(shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserWithOptions(request, runtime);
}

CreateVirtualMFADeviceResponse Alibabacloud_Ims20190815::Client::createVirtualMFADeviceWithOptions(shared_ptr<CreateVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->virtualMFADeviceName)) {
    query->insert(pair<string, string>("VirtualMFADeviceName", *request->virtualMFADeviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVirtualMFADevice"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVirtualMFADeviceResponse(callApi(params, req, runtime));
}

CreateVirtualMFADeviceResponse Alibabacloud_Ims20190815::Client::createVirtualMFADevice(shared_ptr<CreateVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVirtualMFADeviceWithOptions(request, runtime);
}

DeleteAccessKeyResponse Alibabacloud_Ims20190815::Client::deleteAccessKeyWithOptions(shared_ptr<DeleteAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccessKey"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAccessKeyResponse(callApi(params, req, runtime));
}

DeleteAccessKeyResponse Alibabacloud_Ims20190815::Client::deleteAccessKey(shared_ptr<DeleteAccessKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessKeyWithOptions(request, runtime);
}

DeleteAppSecretResponse Alibabacloud_Ims20190815::Client::deleteAppSecretWithOptions(shared_ptr<DeleteAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecretId)) {
    query->insert(pair<string, string>("AppSecretId", *request->appSecretId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppSecret"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppSecretResponse(callApi(params, req, runtime));
}

DeleteAppSecretResponse Alibabacloud_Ims20190815::Client::deleteAppSecret(shared_ptr<DeleteAppSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppSecretWithOptions(request, runtime);
}

DeleteApplicationResponse Alibabacloud_Ims20190815::Client::deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApplication"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApplicationResponse(callApi(params, req, runtime));
}

DeleteApplicationResponse Alibabacloud_Ims20190815::Client::deleteApplication(shared_ptr<DeleteApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApplicationWithOptions(request, runtime);
}

DeleteGroupResponse Alibabacloud_Ims20190815::Client::deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroup"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGroupResponse(callApi(params, req, runtime));
}

DeleteGroupResponse Alibabacloud_Ims20190815::Client::deleteGroup(shared_ptr<DeleteGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGroupWithOptions(request, runtime);
}

DeleteLoginProfileResponse Alibabacloud_Ims20190815::Client::deleteLoginProfileWithOptions(shared_ptr<DeleteLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLoginProfile"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLoginProfileResponse(callApi(params, req, runtime));
}

DeleteLoginProfileResponse Alibabacloud_Ims20190815::Client::deleteLoginProfile(shared_ptr<DeleteLoginProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoginProfileWithOptions(request, runtime);
}

DeleteOIDCProviderResponse Alibabacloud_Ims20190815::Client::deleteOIDCProviderWithOptions(shared_ptr<DeleteOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCProviderName)) {
    query->insert(pair<string, string>("OIDCProviderName", *request->OIDCProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOIDCProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOIDCProviderResponse(callApi(params, req, runtime));
}

DeleteOIDCProviderResponse Alibabacloud_Ims20190815::Client::deleteOIDCProvider(shared_ptr<DeleteOIDCProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOIDCProviderWithOptions(request, runtime);
}

DeleteSAMLProviderResponse Alibabacloud_Ims20190815::Client::deleteSAMLProviderWithOptions(shared_ptr<DeleteSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->SAMLProviderName)) {
    query->insert(pair<string, string>("SAMLProviderName", *request->SAMLProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSAMLProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSAMLProviderResponse(callApi(params, req, runtime));
}

DeleteSAMLProviderResponse Alibabacloud_Ims20190815::Client::deleteSAMLProvider(shared_ptr<DeleteSAMLProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSAMLProviderWithOptions(request, runtime);
}

DeleteUserResponse Alibabacloud_Ims20190815::Client::deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUser"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserResponse(callApi(params, req, runtime));
}

DeleteUserResponse Alibabacloud_Ims20190815::Client::deleteUser(shared_ptr<DeleteUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWithOptions(request, runtime);
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ims20190815::Client::deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("SerialNumber", *request->serialNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVirtualMFADevice"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteVirtualMFADeviceResponse(callApi(params, req, runtime));
}

DeleteVirtualMFADeviceResponse Alibabacloud_Ims20190815::Client::deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVirtualMFADeviceWithOptions(request, runtime);
}

DisableVirtualMFAResponse Alibabacloud_Ims20190815::Client::disableVirtualMFAWithOptions(shared_ptr<DisableVirtualMFARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableVirtualMFA"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableVirtualMFAResponse(callApi(params, req, runtime));
}

DisableVirtualMFAResponse Alibabacloud_Ims20190815::Client::disableVirtualMFA(shared_ptr<DisableVirtualMFARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableVirtualMFAWithOptions(request, runtime);
}

GenerateCredentialReportResponse Alibabacloud_Ims20190815::Client::generateCredentialReportWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateCredentialReport"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateCredentialReportResponse(callApi(params, req, runtime));
}

GenerateCredentialReportResponse Alibabacloud_Ims20190815::Client::generateCredentialReport() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateCredentialReportWithOptions(runtime);
}

GetAccessKeyLastUsedResponse Alibabacloud_Ims20190815::Client::getAccessKeyLastUsedWithOptions(shared_ptr<GetAccessKeyLastUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccessKeyLastUsed"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccessKeyLastUsedResponse(callApi(params, req, runtime));
}

GetAccessKeyLastUsedResponse Alibabacloud_Ims20190815::Client::getAccessKeyLastUsed(shared_ptr<GetAccessKeyLastUsedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessKeyLastUsedWithOptions(request, runtime);
}

GetAccountMFAInfoResponse Alibabacloud_Ims20190815::Client::getAccountMFAInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountMFAInfo"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountMFAInfoResponse(callApi(params, req, runtime));
}

GetAccountMFAInfoResponse Alibabacloud_Ims20190815::Client::getAccountMFAInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountMFAInfoWithOptions(runtime);
}

GetAccountSecurityPracticeReportResponse Alibabacloud_Ims20190815::Client::getAccountSecurityPracticeReportWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountSecurityPracticeReport"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountSecurityPracticeReportResponse(callApi(params, req, runtime));
}

GetAccountSecurityPracticeReportResponse Alibabacloud_Ims20190815::Client::getAccountSecurityPracticeReport() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountSecurityPracticeReportWithOptions(runtime);
}

GetAccountSummaryResponse Alibabacloud_Ims20190815::Client::getAccountSummaryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountSummary"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountSummaryResponse(callApi(params, req, runtime));
}

GetAccountSummaryResponse Alibabacloud_Ims20190815::Client::getAccountSummary() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountSummaryWithOptions(runtime);
}

GetAppSecretResponse Alibabacloud_Ims20190815::Client::getAppSecretWithOptions(shared_ptr<GetAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecretId)) {
    query->insert(pair<string, string>("AppSecretId", *request->appSecretId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppSecret"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAppSecretResponse(callApi(params, req, runtime));
}

GetAppSecretResponse Alibabacloud_Ims20190815::Client::getAppSecret(shared_ptr<GetAppSecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppSecretWithOptions(request, runtime);
}

GetApplicationResponse Alibabacloud_Ims20190815::Client::getApplicationWithOptions(shared_ptr<GetApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApplication"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApplicationResponse(callApi(params, req, runtime));
}

GetApplicationResponse Alibabacloud_Ims20190815::Client::getApplication(shared_ptr<GetApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApplicationWithOptions(request, runtime);
}

GetCredentialReportResponse Alibabacloud_Ims20190815::Client::getCredentialReportWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCredentialReport"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCredentialReportResponse(callApi(params, req, runtime));
}

GetCredentialReportResponse Alibabacloud_Ims20190815::Client::getCredentialReport() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCredentialReportWithOptions(runtime);
}

GetDefaultDomainResponse Alibabacloud_Ims20190815::Client::getDefaultDomainWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDefaultDomain"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDefaultDomainResponse(callApi(params, req, runtime));
}

GetDefaultDomainResponse Alibabacloud_Ims20190815::Client::getDefaultDomain() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultDomainWithOptions(runtime);
}

GetGroupResponse Alibabacloud_Ims20190815::Client::getGroupWithOptions(shared_ptr<GetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroup"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGroupResponse(callApi(params, req, runtime));
}

GetGroupResponse Alibabacloud_Ims20190815::Client::getGroup(shared_ptr<GetGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGroupWithOptions(request, runtime);
}

GetLoginProfileResponse Alibabacloud_Ims20190815::Client::getLoginProfileWithOptions(shared_ptr<GetLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLoginProfile"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLoginProfileResponse(callApi(params, req, runtime));
}

GetLoginProfileResponse Alibabacloud_Ims20190815::Client::getLoginProfile(shared_ptr<GetLoginProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoginProfileWithOptions(request, runtime);
}

GetOIDCProviderResponse Alibabacloud_Ims20190815::Client::getOIDCProviderWithOptions(shared_ptr<GetOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCProviderName)) {
    query->insert(pair<string, string>("OIDCProviderName", *request->OIDCProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOIDCProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOIDCProviderResponse(callApi(params, req, runtime));
}

GetOIDCProviderResponse Alibabacloud_Ims20190815::Client::getOIDCProvider(shared_ptr<GetOIDCProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOIDCProviderWithOptions(request, runtime);
}

GetPasswordPolicyResponse Alibabacloud_Ims20190815::Client::getPasswordPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPasswordPolicy"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPasswordPolicyResponse(callApi(params, req, runtime));
}

GetPasswordPolicyResponse Alibabacloud_Ims20190815::Client::getPasswordPolicy() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPasswordPolicyWithOptions(runtime);
}

GetSAMLProviderResponse Alibabacloud_Ims20190815::Client::getSAMLProviderWithOptions(shared_ptr<GetSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->SAMLProviderName)) {
    query->insert(pair<string, string>("SAMLProviderName", *request->SAMLProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSAMLProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSAMLProviderResponse(callApi(params, req, runtime));
}

GetSAMLProviderResponse Alibabacloud_Ims20190815::Client::getSAMLProvider(shared_ptr<GetSAMLProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSAMLProviderWithOptions(request, runtime);
}

GetSecurityPreferenceResponse Alibabacloud_Ims20190815::Client::getSecurityPreferenceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSecurityPreference"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSecurityPreferenceResponse(callApi(params, req, runtime));
}

GetSecurityPreferenceResponse Alibabacloud_Ims20190815::Client::getSecurityPreference() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSecurityPreferenceWithOptions(runtime);
}

GetUserResponse Alibabacloud_Ims20190815::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUser"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResponse(callApi(params, req, runtime));
}

GetUserResponse Alibabacloud_Ims20190815::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserWithOptions(request, runtime);
}

GetUserMFAInfoResponse Alibabacloud_Ims20190815::Client::getUserMFAInfoWithOptions(shared_ptr<GetUserMFAInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserMFAInfo"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserMFAInfoResponse(callApi(params, req, runtime));
}

GetUserMFAInfoResponse Alibabacloud_Ims20190815::Client::getUserMFAInfo(shared_ptr<GetUserMFAInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserMFAInfoWithOptions(request, runtime);
}

GetUserSsoSettingsResponse Alibabacloud_Ims20190815::Client::getUserSsoSettingsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserSsoSettings"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserSsoSettingsResponse(callApi(params, req, runtime));
}

GetUserSsoSettingsResponse Alibabacloud_Ims20190815::Client::getUserSsoSettings() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserSsoSettingsWithOptions(runtime);
}

ListAccessKeysResponse Alibabacloud_Ims20190815::Client::listAccessKeysWithOptions(shared_ptr<ListAccessKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccessKeys"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAccessKeysResponse(callApi(params, req, runtime));
}

ListAccessKeysResponse Alibabacloud_Ims20190815::Client::listAccessKeys(shared_ptr<ListAccessKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccessKeysWithOptions(request, runtime);
}

ListAppSecretIdsResponse Alibabacloud_Ims20190815::Client::listAppSecretIdsWithOptions(shared_ptr<ListAppSecretIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppSecretIds"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAppSecretIdsResponse(callApi(params, req, runtime));
}

ListAppSecretIdsResponse Alibabacloud_Ims20190815::Client::listAppSecretIds(shared_ptr<ListAppSecretIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppSecretIdsWithOptions(request, runtime);
}

ListApplicationsResponse Alibabacloud_Ims20190815::Client::listApplicationsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplications"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationsResponse(callApi(params, req, runtime));
}

ListApplicationsResponse Alibabacloud_Ims20190815::Client::listApplications() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplicationsWithOptions(runtime);
}

ListGroupsResponse Alibabacloud_Ims20190815::Client::listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItems)) {
    query->insert(pair<string, long>("MaxItems", *request->maxItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroups"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupsResponse(callApi(params, req, runtime));
}

ListGroupsResponse Alibabacloud_Ims20190815::Client::listGroups(shared_ptr<ListGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupsWithOptions(request, runtime);
}

ListGroupsForUserResponse Alibabacloud_Ims20190815::Client::listGroupsForUserWithOptions(shared_ptr<ListGroupsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGroupsForUser"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListGroupsForUserResponse(callApi(params, req, runtime));
}

ListGroupsForUserResponse Alibabacloud_Ims20190815::Client::listGroupsForUser(shared_ptr<ListGroupsForUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupsForUserWithOptions(request, runtime);
}

ListOIDCProvidersResponse Alibabacloud_Ims20190815::Client::listOIDCProvidersWithOptions(shared_ptr<ListOIDCProvidersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItems)) {
    query->insert(pair<string, long>("MaxItems", *request->maxItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOIDCProviders"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOIDCProvidersResponse(callApi(params, req, runtime));
}

ListOIDCProvidersResponse Alibabacloud_Ims20190815::Client::listOIDCProviders(shared_ptr<ListOIDCProvidersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOIDCProvidersWithOptions(request, runtime);
}

ListPredefinedScopesResponse Alibabacloud_Ims20190815::Client::listPredefinedScopesWithOptions(shared_ptr<ListPredefinedScopesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    query->insert(pair<string, string>("AppType", *request->appType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPredefinedScopes"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPredefinedScopesResponse(callApi(params, req, runtime));
}

ListPredefinedScopesResponse Alibabacloud_Ims20190815::Client::listPredefinedScopes(shared_ptr<ListPredefinedScopesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPredefinedScopesWithOptions(request, runtime);
}

ListSAMLProvidersResponse Alibabacloud_Ims20190815::Client::listSAMLProvidersWithOptions(shared_ptr<ListSAMLProvidersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItems)) {
    query->insert(pair<string, long>("MaxItems", *request->maxItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSAMLProviders"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSAMLProvidersResponse(callApi(params, req, runtime));
}

ListSAMLProvidersResponse Alibabacloud_Ims20190815::Client::listSAMLProviders(shared_ptr<ListSAMLProvidersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSAMLProvidersWithOptions(request, runtime);
}

ListUserBasicInfosResponse Alibabacloud_Ims20190815::Client::listUserBasicInfosWithOptions(shared_ptr<ListUserBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItems)) {
    query->insert(pair<string, long>("MaxItems", *request->maxItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserBasicInfos"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserBasicInfosResponse(callApi(params, req, runtime));
}

ListUserBasicInfosResponse Alibabacloud_Ims20190815::Client::listUserBasicInfos(shared_ptr<ListUserBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserBasicInfosWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_Ims20190815::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItems)) {
    query->insert(pair<string, long>("MaxItems", *request->maxItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsers"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersResponse(callApi(params, req, runtime));
}

ListUsersResponse Alibabacloud_Ims20190815::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

ListUsersForGroupResponse Alibabacloud_Ims20190815::Client::listUsersForGroupWithOptions(shared_ptr<ListUsersForGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItems)) {
    query->insert(pair<string, long>("MaxItems", *request->maxItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUsersForGroup"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUsersForGroupResponse(callApi(params, req, runtime));
}

ListUsersForGroupResponse Alibabacloud_Ims20190815::Client::listUsersForGroup(shared_ptr<ListUsersForGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersForGroupWithOptions(request, runtime);
}

ListVirtualMFADevicesResponse Alibabacloud_Ims20190815::Client::listVirtualMFADevicesWithOptions(shared_ptr<ListVirtualMFADevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->marker)) {
    query->insert(pair<string, string>("Marker", *request->marker));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItems)) {
    query->insert(pair<string, long>("MaxItems", *request->maxItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVirtualMFADevices"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVirtualMFADevicesResponse(callApi(params, req, runtime));
}

ListVirtualMFADevicesResponse Alibabacloud_Ims20190815::Client::listVirtualMFADevices(shared_ptr<ListVirtualMFADevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVirtualMFADevicesWithOptions(request, runtime);
}

RemoveClientIdFromOIDCProviderResponse Alibabacloud_Ims20190815::Client::removeClientIdFromOIDCProviderWithOptions(shared_ptr<RemoveClientIdFromOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCProviderName)) {
    query->insert(pair<string, string>("OIDCProviderName", *request->OIDCProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveClientIdFromOIDCProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveClientIdFromOIDCProviderResponse(callApi(params, req, runtime));
}

RemoveClientIdFromOIDCProviderResponse Alibabacloud_Ims20190815::Client::removeClientIdFromOIDCProvider(shared_ptr<RemoveClientIdFromOIDCProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeClientIdFromOIDCProviderWithOptions(request, runtime);
}

RemoveFingerprintFromOIDCProviderResponse Alibabacloud_Ims20190815::Client::removeFingerprintFromOIDCProviderWithOptions(shared_ptr<RemoveFingerprintFromOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fingerprint)) {
    query->insert(pair<string, string>("Fingerprint", *request->fingerprint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCProviderName)) {
    query->insert(pair<string, string>("OIDCProviderName", *request->OIDCProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveFingerprintFromOIDCProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveFingerprintFromOIDCProviderResponse(callApi(params, req, runtime));
}

RemoveFingerprintFromOIDCProviderResponse Alibabacloud_Ims20190815::Client::removeFingerprintFromOIDCProvider(shared_ptr<RemoveFingerprintFromOIDCProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeFingerprintFromOIDCProviderWithOptions(request, runtime);
}

RemoveUserFromGroupResponse Alibabacloud_Ims20190815::Client::removeUserFromGroupWithOptions(shared_ptr<RemoveUserFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveUserFromGroup"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveUserFromGroupResponse(callApi(params, req, runtime));
}

RemoveUserFromGroupResponse Alibabacloud_Ims20190815::Client::removeUserFromGroup(shared_ptr<RemoveUserFromGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUserFromGroupWithOptions(request, runtime);
}

SetDefaultDomainResponse Alibabacloud_Ims20190815::Client::setDefaultDomainWithOptions(shared_ptr<SetDefaultDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultDomainName)) {
    query->insert(pair<string, string>("DefaultDomainName", *request->defaultDomainName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultDomain"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDefaultDomainResponse(callApi(params, req, runtime));
}

SetDefaultDomainResponse Alibabacloud_Ims20190815::Client::setDefaultDomain(shared_ptr<SetDefaultDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultDomainWithOptions(request, runtime);
}

SetPasswordPolicyResponse Alibabacloud_Ims20190815::Client::setPasswordPolicyWithOptions(shared_ptr<SetPasswordPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->hardExpire)) {
    query->insert(pair<string, bool>("HardExpire", *request->hardExpire));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxLoginAttemps)) {
    query->insert(pair<string, long>("MaxLoginAttemps", *request->maxLoginAttemps));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxPasswordAge)) {
    query->insert(pair<string, long>("MaxPasswordAge", *request->maxPasswordAge));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minimumPasswordDifferentCharacter)) {
    query->insert(pair<string, long>("MinimumPasswordDifferentCharacter", *request->minimumPasswordDifferentCharacter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minimumPasswordLength)) {
    query->insert(pair<string, long>("MinimumPasswordLength", *request->minimumPasswordLength));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->passwordNotContainUserName)) {
    query->insert(pair<string, bool>("PasswordNotContainUserName", *request->passwordNotContainUserName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->passwordReusePrevention)) {
    query->insert(pair<string, long>("PasswordReusePrevention", *request->passwordReusePrevention));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->requireLowercaseCharacters)) {
    query->insert(pair<string, bool>("RequireLowercaseCharacters", *request->requireLowercaseCharacters));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->requireNumbers)) {
    query->insert(pair<string, bool>("RequireNumbers", *request->requireNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->requireSymbols)) {
    query->insert(pair<string, bool>("RequireSymbols", *request->requireSymbols));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->requireUppercaseCharacters)) {
    query->insert(pair<string, bool>("RequireUppercaseCharacters", *request->requireUppercaseCharacters));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetPasswordPolicy"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetPasswordPolicyResponse(callApi(params, req, runtime));
}

SetPasswordPolicyResponse Alibabacloud_Ims20190815::Client::setPasswordPolicy(shared_ptr<SetPasswordPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setPasswordPolicyWithOptions(request, runtime);
}

SetSecurityPreferenceResponse Alibabacloud_Ims20190815::Client::setSecurityPreferenceWithOptions(shared_ptr<SetSecurityPreferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowUserToChangePassword)) {
    query->insert(pair<string, bool>("AllowUserToChangePassword", *request->allowUserToChangePassword));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowUserToManageAccessKeys)) {
    query->insert(pair<string, bool>("AllowUserToManageAccessKeys", *request->allowUserToManageAccessKeys));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowUserToManageMFADevices)) {
    query->insert(pair<string, bool>("AllowUserToManageMFADevices", *request->allowUserToManageMFADevices));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowUserToManagePersonalDingTalk)) {
    query->insert(pair<string, bool>("AllowUserToManagePersonalDingTalk", *request->allowUserToManagePersonalDingTalk));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSaveMFATicket)) {
    query->insert(pair<string, bool>("EnableSaveMFATicket", *request->enableSaveMFATicket));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enforceMFAForLogin)) {
    query->insert(pair<string, bool>("EnforceMFAForLogin", *request->enforceMFAForLogin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loginNetworkMasks)) {
    query->insert(pair<string, string>("LoginNetworkMasks", *request->loginNetworkMasks));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->loginSessionDuration)) {
    query->insert(pair<string, long>("LoginSessionDuration", *request->loginSessionDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSecurityPreference"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSecurityPreferenceResponse(callApi(params, req, runtime));
}

SetSecurityPreferenceResponse Alibabacloud_Ims20190815::Client::setSecurityPreference(shared_ptr<SetSecurityPreferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSecurityPreferenceWithOptions(request, runtime);
}

SetUserSsoSettingsResponse Alibabacloud_Ims20190815::Client::setUserSsoSettingsWithOptions(shared_ptr<SetUserSsoSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auxiliaryDomain)) {
    query->insert(pair<string, string>("AuxiliaryDomain", *request->auxiliaryDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metadataDocument)) {
    query->insert(pair<string, string>("MetadataDocument", *request->metadataDocument));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ssoEnabled)) {
    query->insert(pair<string, bool>("SsoEnabled", *request->ssoEnabled));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetUserSsoSettings"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetUserSsoSettingsResponse(callApi(params, req, runtime));
}

SetUserSsoSettingsResponse Alibabacloud_Ims20190815::Client::setUserSsoSettings(shared_ptr<SetUserSsoSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setUserSsoSettingsWithOptions(request, runtime);
}

UnbindMFADeviceResponse Alibabacloud_Ims20190815::Client::unbindMFADeviceWithOptions(shared_ptr<UnbindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindMFADevice"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindMFADeviceResponse(callApi(params, req, runtime));
}

UnbindMFADeviceResponse Alibabacloud_Ims20190815::Client::unbindMFADevice(shared_ptr<UnbindMFADeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindMFADeviceWithOptions(request, runtime);
}

UpdateAccessKeyResponse Alibabacloud_Ims20190815::Client::updateAccessKeyWithOptions(shared_ptr<UpdateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userAccessKeyId)) {
    query->insert(pair<string, string>("UserAccessKeyId", *request->userAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAccessKey"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAccessKeyResponse(callApi(params, req, runtime));
}

UpdateAccessKeyResponse Alibabacloud_Ims20190815::Client::updateAccessKey(shared_ptr<UpdateAccessKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAccessKeyWithOptions(request, runtime);
}

UpdateApplicationResponse Alibabacloud_Ims20190815::Client::updateApplicationWithOptions(shared_ptr<UpdateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newAccessTokenValidity)) {
    query->insert(pair<string, long>("NewAccessTokenValidity", *request->newAccessTokenValidity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newDisplayName)) {
    query->insert(pair<string, string>("NewDisplayName", *request->newDisplayName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->newIsMultiTenant)) {
    query->insert(pair<string, bool>("NewIsMultiTenant", *request->newIsMultiTenant));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newPredefinedScopes)) {
    query->insert(pair<string, string>("NewPredefinedScopes", *request->newPredefinedScopes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newRedirectUris)) {
    query->insert(pair<string, string>("NewRedirectUris", *request->newRedirectUris));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->newRefreshTokenValidity)) {
    query->insert(pair<string, long>("NewRefreshTokenValidity", *request->newRefreshTokenValidity));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->newSecretRequired)) {
    query->insert(pair<string, bool>("NewSecretRequired", *request->newSecretRequired));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApplication"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApplicationResponse(callApi(params, req, runtime));
}

UpdateApplicationResponse Alibabacloud_Ims20190815::Client::updateApplication(shared_ptr<UpdateApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateApplicationWithOptions(request, runtime);
}

UpdateGroupResponse Alibabacloud_Ims20190815::Client::updateGroupWithOptions(shared_ptr<UpdateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newComments)) {
    query->insert(pair<string, string>("NewComments", *request->newComments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newDisplayName)) {
    query->insert(pair<string, string>("NewDisplayName", *request->newDisplayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newGroupName)) {
    query->insert(pair<string, string>("NewGroupName", *request->newGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateGroup"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateGroupResponse(callApi(params, req, runtime));
}

UpdateGroupResponse Alibabacloud_Ims20190815::Client::updateGroup(shared_ptr<UpdateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGroupWithOptions(request, runtime);
}

UpdateLoginProfileResponse Alibabacloud_Ims20190815::Client::updateLoginProfileWithOptions(shared_ptr<UpdateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->MFABindRequired)) {
    query->insert(pair<string, bool>("MFABindRequired", *request->MFABindRequired));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->passwordResetRequired)) {
    query->insert(pair<string, bool>("PasswordResetRequired", *request->passwordResetRequired));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLoginProfile"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLoginProfileResponse(callApi(params, req, runtime));
}

UpdateLoginProfileResponse Alibabacloud_Ims20190815::Client::updateLoginProfile(shared_ptr<UpdateLoginProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLoginProfileWithOptions(request, runtime);
}

UpdateOIDCProviderResponse Alibabacloud_Ims20190815::Client::updateOIDCProviderWithOptions(shared_ptr<UpdateOIDCProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientIds)) {
    query->insert(pair<string, string>("ClientIds", *request->clientIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newDescription)) {
    query->insert(pair<string, string>("NewDescription", *request->newDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->OIDCProviderName)) {
    query->insert(pair<string, string>("OIDCProviderName", *request->OIDCProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOIDCProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateOIDCProviderResponse(callApi(params, req, runtime));
}

UpdateOIDCProviderResponse Alibabacloud_Ims20190815::Client::updateOIDCProvider(shared_ptr<UpdateOIDCProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOIDCProviderWithOptions(request, runtime);
}

UpdateSAMLProviderResponse Alibabacloud_Ims20190815::Client::updateSAMLProviderWithOptions(shared_ptr<UpdateSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newDescription)) {
    query->insert(pair<string, string>("NewDescription", *request->newDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newEncodedSAMLMetadataDocument)) {
    query->insert(pair<string, string>("NewEncodedSAMLMetadataDocument", *request->newEncodedSAMLMetadataDocument));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SAMLProviderName)) {
    query->insert(pair<string, string>("SAMLProviderName", *request->SAMLProviderName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSAMLProvider"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSAMLProviderResponse(callApi(params, req, runtime));
}

UpdateSAMLProviderResponse Alibabacloud_Ims20190815::Client::updateSAMLProvider(shared_ptr<UpdateSAMLProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSAMLProviderWithOptions(request, runtime);
}

UpdateUserResponse Alibabacloud_Ims20190815::Client::updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newComments)) {
    query->insert(pair<string, string>("NewComments", *request->newComments));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newDisplayName)) {
    query->insert(pair<string, string>("NewDisplayName", *request->newDisplayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newEmail)) {
    query->insert(pair<string, string>("NewEmail", *request->newEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newMobilePhone)) {
    query->insert(pair<string, string>("NewMobilePhone", *request->newMobilePhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newUserPrincipalName)) {
    query->insert(pair<string, string>("NewUserPrincipalName", *request->newUserPrincipalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPrincipalName)) {
    query->insert(pair<string, string>("UserPrincipalName", *request->userPrincipalName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUser"))},
    {"version", boost::any(string("2019-08-15"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserResponse(callApi(params, req, runtime));
}

UpdateUserResponse Alibabacloud_Ims20190815::Client::updateUser(shared_ptr<UpdateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserWithOptions(request, runtime);
}

