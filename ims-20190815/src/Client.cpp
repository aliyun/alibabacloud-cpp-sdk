#include <darabonba/Core.hpp>
#include <alibabacloud/Ims20190815.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Ims20190815::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Ims20190815
{

AlibabaCloud::Ims20190815::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("ims", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 为OIDC身份提供商添加指定客户端ID
 *
 * @param request AddClientIdToOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddClientIdToOIDCProviderResponse
 */
AddClientIdToOIDCProviderResponse Client::addClientIdToOIDCProviderWithOptions(const AddClientIdToOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.getOIDCProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddClientIdToOIDCProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddClientIdToOIDCProviderResponse>();
}

/**
 * @summary 为OIDC身份提供商添加指定客户端ID
 *
 * @param request AddClientIdToOIDCProviderRequest
 * @return AddClientIdToOIDCProviderResponse
 */
AddClientIdToOIDCProviderResponse Client::addClientIdToOIDCProvider(const AddClientIdToOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addClientIdToOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary 为OIDC身份提供商添加验证指纹
 *
 * @param request AddFingerprintToOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFingerprintToOIDCProviderResponse
 */
AddFingerprintToOIDCProviderResponse Client::addFingerprintToOIDCProviderWithOptions(const AddFingerprintToOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFingerprint()) {
    query["Fingerprint"] = request.getFingerprint();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.getOIDCProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFingerprintToOIDCProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFingerprintToOIDCProviderResponse>();
}

/**
 * @summary 为OIDC身份提供商添加验证指纹
 *
 * @param request AddFingerprintToOIDCProviderRequest
 * @return AddFingerprintToOIDCProviderResponse
 */
AddFingerprintToOIDCProviderResponse Client::addFingerprintToOIDCProvider(const AddFingerprintToOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFingerprintToOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary 将RAM用户添加到指定的用户组
 *
 * @param request AddUserToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToGroupResponse
 */
AddUserToGroupResponse Client::addUserToGroupWithOptions(const AddUserToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUserToGroup"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserToGroupResponse>();
}

/**
 * @summary 将RAM用户添加到指定的用户组
 *
 * @param request AddUserToGroupRequest
 * @return AddUserToGroupResponse
 */
AddUserToGroupResponse Client::addUserToGroup(const AddUserToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToGroupWithOptions(request, runtime);
}

/**
 * @summary 为RAM用户绑定多因素认证设备
 *
 * @param request BindMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindMFADeviceResponse
 */
BindMFADeviceResponse Client::bindMFADeviceWithOptions(const BindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationCode1()) {
    query["AuthenticationCode1"] = request.getAuthenticationCode1();
  }

  if (!!request.hasAuthenticationCode2()) {
    query["AuthenticationCode2"] = request.getAuthenticationCode2();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindMFADevice"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindMFADeviceResponse>();
}

/**
 * @summary 为RAM用户绑定多因素认证设备
 *
 * @param request BindMFADeviceRequest
 * @return BindMFADeviceResponse
 */
BindMFADeviceResponse Client::bindMFADevice(const BindMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindMFADeviceWithOptions(request, runtime);
}

/**
 * @summary 修改RAM用户的登录密码
 *
 * @param request ChangePasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangePasswordResponse
 */
ChangePasswordResponse Client::changePasswordWithOptions(const ChangePasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.getNewPassword();
  }

  if (!!request.hasOldPassword()) {
    query["OldPassword"] = request.getOldPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangePassword"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangePasswordResponse>();
}

/**
 * @summary 修改RAM用户的登录密码
 *
 * @param request ChangePasswordRequest
 * @return ChangePasswordResponse
 */
ChangePasswordResponse Client::changePassword(const ChangePasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changePasswordWithOptions(request, runtime);
}

/**
 * @summary 创建主账号或RAM用户访问密钥
 *
 * @param request CreateAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessKeyResponse
 */
CreateAccessKeyResponse Client::createAccessKeyWithOptions(const CreateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccessKey"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccessKeyResponse>();
}

/**
 * @summary 创建主账号或RAM用户访问密钥
 *
 * @param request CreateAccessKeyRequest
 * @return CreateAccessKeyResponse
 */
CreateAccessKeyResponse Client::createAccessKey(const CreateAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessKeyWithOptions(request, runtime);
}

/**
 * @summary 为指定的应用创建应用密钥
 *
 * @param request CreateAppSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppSecretResponse
 */
CreateAppSecretResponse Client::createAppSecretWithOptions(const CreateAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppSecret"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppSecretResponse>();
}

/**
 * @summary 为指定的应用创建应用密钥
 *
 * @param request CreateAppSecretRequest
 * @return CreateAppSecretResponse
 */
CreateAppSecretResponse Client::createAppSecret(const CreateAppSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppSecretWithOptions(request, runtime);
}

/**
 * @summary Creates an application.
 *
 * @param request CreateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplicationWithOptions(const CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessTokenValidity()) {
    query["AccessTokenValidity"] = request.getAccessTokenValidity();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasIsMultiTenant()) {
    query["IsMultiTenant"] = request.getIsMultiTenant();
  }

  if (!!request.hasPredefinedScopes()) {
    query["PredefinedScopes"] = request.getPredefinedScopes();
  }

  if (!!request.hasProtocolVersion()) {
    query["ProtocolVersion"] = request.getProtocolVersion();
  }

  if (!!request.hasRedirectUris()) {
    query["RedirectUris"] = request.getRedirectUris();
  }

  if (!!request.hasRefreshTokenValidity()) {
    query["RefreshTokenValidity"] = request.getRefreshTokenValidity();
  }

  if (!!request.hasRequiredScopes()) {
    query["RequiredScopes"] = request.getRequiredScopes();
  }

  if (!!request.hasSecretRequired()) {
    query["SecretRequired"] = request.getSecretRequired();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApplication"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApplicationResponse>();
}

/**
 * @summary Creates an application.
 *
 * @param request CreateApplicationRequest
 * @return CreateApplicationResponse
 */
CreateApplicationResponse Client::createApplication(const CreateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApplicationWithOptions(request, runtime);
}

/**
 * @summary 创建用户组
 *
 * @param request CreateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComments()) {
    query["Comments"] = request.getComments();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGroup"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGroupResponse>();
}

/**
 * @summary 创建用户组
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a logon configuration for a Resource Access Management (RAM) user.
 *
 * @param request CreateLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoginProfileResponse
 */
CreateLoginProfileResponse Client::createLoginProfileWithOptions(const CreateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMFABindRequired()) {
    query["MFABindRequired"] = request.getMFABindRequired();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordResetRequired()) {
    query["PasswordResetRequired"] = request.getPasswordResetRequired();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoginProfile"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoginProfileResponse>();
}

/**
 * @summary Creates a logon configuration for a Resource Access Management (RAM) user.
 *
 * @param request CreateLoginProfileRequest
 * @return CreateLoginProfileResponse
 */
CreateLoginProfileResponse Client::createLoginProfile(const CreateLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoginProfileWithOptions(request, runtime);
}

/**
 * @summary 创建OIDC身份供应商
 *
 * @param request CreateOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOIDCProviderResponse
 */
CreateOIDCProviderResponse Client::createOIDCProviderWithOptions(const CreateOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIds()) {
    query["ClientIds"] = request.getClientIds();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFingerprints()) {
    query["Fingerprints"] = request.getFingerprints();
  }

  if (!!request.hasIssuanceLimitTime()) {
    query["IssuanceLimitTime"] = request.getIssuanceLimitTime();
  }

  if (!!request.hasIssuerUrl()) {
    query["IssuerUrl"] = request.getIssuerUrl();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.getOIDCProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOIDCProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOIDCProviderResponse>();
}

/**
 * @summary 创建OIDC身份供应商
 *
 * @param request CreateOIDCProviderRequest
 * @return CreateOIDCProviderResponse
 */
CreateOIDCProviderResponse Client::createOIDCProvider(const CreateOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary Creates an identity provider (IdP) for role-based single sign-on (SSO).
 *
 * @param request CreateSAMLProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSAMLProviderResponse
 */
CreateSAMLProviderResponse Client::createSAMLProviderWithOptions(const CreateSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthnSignAlgo()) {
    query["AuthnSignAlgo"] = request.getAuthnSignAlgo();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEncodedSAMLMetadataDocument()) {
    query["EncodedSAMLMetadataDocument"] = request.getEncodedSAMLMetadataDocument();
  }

  if (!!request.hasSAMLProviderName()) {
    query["SAMLProviderName"] = request.getSAMLProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSAMLProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSAMLProviderResponse>();
}

/**
 * @summary Creates an identity provider (IdP) for role-based single sign-on (SSO).
 *
 * @param request CreateSAMLProviderRequest
 * @return CreateSAMLProviderResponse
 */
CreateSAMLProviderResponse Client::createSAMLProvider(const CreateSAMLProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSAMLProviderWithOptions(request, runtime);
}

/**
 * @summary 创建RAM用户
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComments()) {
    query["Comments"] = request.getComments();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasMobilePhone()) {
    query["MobilePhone"] = request.getMobilePhone();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @summary 创建RAM用户
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary 创建多因素认证设备
 *
 * @param request CreateVirtualMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVirtualMFADeviceResponse
 */
CreateVirtualMFADeviceResponse Client::createVirtualMFADeviceWithOptions(const CreateVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVirtualMFADeviceName()) {
    query["VirtualMFADeviceName"] = request.getVirtualMFADeviceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVirtualMFADevice"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVirtualMFADeviceResponse>();
}

/**
 * @summary 创建多因素认证设备
 *
 * @param request CreateVirtualMFADeviceRequest
 * @return CreateVirtualMFADeviceResponse
 */
CreateVirtualMFADeviceResponse Client::createVirtualMFADevice(const CreateVirtualMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVirtualMFADeviceWithOptions(request, runtime);
}

/**
 * @summary 删除用户的访问密钥
 *
 * @param request DeleteAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessKeyResponse
 */
DeleteAccessKeyResponse Client::deleteAccessKeyWithOptions(const DeleteAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessKey"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessKeyResponse>();
}

/**
 * @summary 删除用户的访问密钥
 *
 * @param request DeleteAccessKeyRequest
 * @return DeleteAccessKeyResponse
 */
DeleteAccessKeyResponse Client::deleteAccessKey(const DeleteAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessKeyWithOptions(request, runtime);
}

/**
 * @summary 删除回收站中的访问密钥
 *
 * @param request DeleteAccessKeyInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessKeyInRecycleBinResponse
 */
DeleteAccessKeyInRecycleBinResponse Client::deleteAccessKeyInRecycleBinWithOptions(const DeleteAccessKeyInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccessKeyInRecycleBin"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccessKeyInRecycleBinResponse>();
}

/**
 * @summary 删除回收站中的访问密钥
 *
 * @param request DeleteAccessKeyInRecycleBinRequest
 * @return DeleteAccessKeyInRecycleBinResponse
 */
DeleteAccessKeyInRecycleBinResponse Client::deleteAccessKeyInRecycleBin(const DeleteAccessKeyInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessKeyInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary 删除指定应用的应用密钥
 *
 * @param request DeleteAppSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppSecretResponse
 */
DeleteAppSecretResponse Client::deleteAppSecretWithOptions(const DeleteAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppSecretId()) {
    query["AppSecretId"] = request.getAppSecretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppSecret"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppSecretResponse>();
}

/**
 * @summary 删除指定应用的应用密钥
 *
 * @param request DeleteAppSecretRequest
 * @return DeleteAppSecretResponse
 */
DeleteAppSecretResponse Client::deleteAppSecret(const DeleteAppSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppSecretWithOptions(request, runtime);
}

/**
 * @summary 删除指定的应用
 *
 * @param request DeleteApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApplication"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApplicationResponse>();
}

/**
 * @summary 删除指定的应用
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary 删除指定的用户组
 *
 * @param request DeleteGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGroup"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGroupResponse>();
}

/**
 * @summary 删除指定的用户组
 *
 * @param request DeleteGroupRequest
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const DeleteGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupWithOptions(request, runtime);
}

/**
 * @summary 关闭指定RAM用户的控制台登录
 *
 * @param request DeleteLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoginProfileResponse
 */
DeleteLoginProfileResponse Client::deleteLoginProfileWithOptions(const DeleteLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLoginProfile"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLoginProfileResponse>();
}

/**
 * @summary 关闭指定RAM用户的控制台登录
 *
 * @param request DeleteLoginProfileRequest
 * @return DeleteLoginProfileResponse
 */
DeleteLoginProfileResponse Client::deleteLoginProfile(const DeleteLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoginProfileWithOptions(request, runtime);
}

/**
 * @summary 删除指定的角色SSO身份提供商
 *
 * @param request DeleteOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOIDCProviderResponse
 */
DeleteOIDCProviderResponse Client::deleteOIDCProviderWithOptions(const DeleteOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.getOIDCProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOIDCProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOIDCProviderResponse>();
}

/**
 * @summary 删除指定的角色SSO身份提供商
 *
 * @param request DeleteOIDCProviderRequest
 * @return DeleteOIDCProviderResponse
 */
DeleteOIDCProviderResponse Client::deleteOIDCProvider(const DeleteOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary 删除Passkey
 *
 * @param request DeletePasskeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePasskeyResponse
 */
DeletePasskeyResponse Client::deletePasskeyWithOptions(const DeletePasskeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPasskeyId()) {
    query["PasskeyId"] = request.getPasskeyId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePasskey"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePasskeyResponse>();
}

/**
 * @summary 删除Passkey
 *
 * @param request DeletePasskeyRequest
 * @return DeletePasskeyResponse
 */
DeletePasskeyResponse Client::deletePasskey(const DeletePasskeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePasskeyWithOptions(request, runtime);
}

/**
 * @summary 删除指定的角色SSO身份提供商
 *
 * @param request DeleteSAMLProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSAMLProviderResponse
 */
DeleteSAMLProviderResponse Client::deleteSAMLProviderWithOptions(const DeleteSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSAMLProviderName()) {
    query["SAMLProviderName"] = request.getSAMLProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSAMLProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSAMLProviderResponse>();
}

/**
 * @summary 删除指定的角色SSO身份提供商
 *
 * @param request DeleteSAMLProviderRequest
 * @return DeleteSAMLProviderResponse
 */
DeleteSAMLProviderResponse Client::deleteSAMLProvider(const DeleteSAMLProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSAMLProviderWithOptions(request, runtime);
}

/**
 * @summary 删除RAM用户
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserResponse>();
}

/**
 * @summary 删除RAM用户
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary 删除回收站中的用户
 *
 * @param request DeleteUserInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserInRecycleBinResponse
 */
DeleteUserInRecycleBinResponse Client::deleteUserInRecycleBinWithOptions(const DeleteUserInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserInRecycleBin"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserInRecycleBinResponse>();
}

/**
 * @summary 删除回收站中的用户
 *
 * @param request DeleteUserInRecycleBinRequest
 * @return DeleteUserInRecycleBinResponse
 */
DeleteUserInRecycleBinResponse Client::deleteUserInRecycleBin(const DeleteUserInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary 删除多因素认证设备
 *
 * @param request DeleteVirtualMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVirtualMFADeviceResponse
 */
DeleteVirtualMFADeviceResponse Client::deleteVirtualMFADeviceWithOptions(const DeleteVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVirtualMFADevice"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVirtualMFADeviceResponse>();
}

/**
 * @summary 删除多因素认证设备
 *
 * @param request DeleteVirtualMFADeviceRequest
 * @return DeleteVirtualMFADeviceResponse
 */
DeleteVirtualMFADeviceResponse Client::deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVirtualMFADeviceWithOptions(request, runtime);
}

/**
 * @summary 解除安装应用
 *
 * @param request DeprovisionApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeprovisionApplicationResponse
 */
DeprovisionApplicationResponse Client::deprovisionApplicationWithOptions(const DeprovisionApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeprovisionApplication"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeprovisionApplicationResponse>();
}

/**
 * @summary 解除安装应用
 *
 * @param request DeprovisionApplicationRequest
 * @return DeprovisionApplicationResponse
 */
DeprovisionApplicationResponse Client::deprovisionApplication(const DeprovisionApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deprovisionApplicationWithOptions(request, runtime);
}

/**
 * @summary 解除安装外部应用
 *
 * @param request DeprovisionExternalApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeprovisionExternalApplicationResponse
 */
DeprovisionExternalApplicationResponse Client::deprovisionExternalApplicationWithOptions(const DeprovisionExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeprovisionExternalApplication"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeprovisionExternalApplicationResponse>();
}

/**
 * @summary 解除安装外部应用
 *
 * @param request DeprovisionExternalApplicationRequest
 * @return DeprovisionExternalApplicationResponse
 */
DeprovisionExternalApplicationResponse Client::deprovisionExternalApplication(const DeprovisionExternalApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deprovisionExternalApplicationWithOptions(request, runtime);
}

/**
 * @summary 解绑并删除多因素认证设备
 *
 * @param request DisableVirtualMFARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableVirtualMFAResponse
 */
DisableVirtualMFAResponse Client::disableVirtualMFAWithOptions(const DisableVirtualMFARequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableVirtualMFA"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableVirtualMFAResponse>();
}

/**
 * @summary 解绑并删除多因素认证设备
 *
 * @param request DisableVirtualMFARequest
 * @return DisableVirtualMFAResponse
 */
DisableVirtualMFAResponse Client::disableVirtualMFA(const DisableVirtualMFARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableVirtualMFAWithOptions(request, runtime);
}

/**
 * @summary 生成用户凭证报告
 *
 * @param request GenerateCredentialReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateCredentialReportResponse
 */
GenerateCredentialReportResponse Client::generateCredentialReportWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GenerateCredentialReport"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateCredentialReportResponse>();
}

/**
 * @summary 生成用户凭证报告
 *
 * @return GenerateCredentialReportResponse
 */
GenerateCredentialReportResponse Client::generateCredentialReport() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateCredentialReportWithOptions(runtime);
}

/**
 * @summary 生成身份权限治理报告
 *
 * @param request GenerateGovernanceReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateGovernanceReportResponse
 */
GenerateGovernanceReportResponse Client::generateGovernanceReportWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GenerateGovernanceReport"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateGovernanceReportResponse>();
}

/**
 * @summary 生成身份权限治理报告
 *
 * @return GenerateGovernanceReportResponse
 */
GenerateGovernanceReportResponse Client::generateGovernanceReport() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateGovernanceReportWithOptions(runtime);
}

/**
 * @summary 查询回收站中的访问密钥信息
 *
 * @param request GetAccessKeyInfoInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyInfoInRecycleBinResponse
 */
GetAccessKeyInfoInRecycleBinResponse Client::getAccessKeyInfoInRecycleBinWithOptions(const GetAccessKeyInfoInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessKeyInfoInRecycleBin"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessKeyInfoInRecycleBinResponse>();
}

/**
 * @summary 查询回收站中的访问密钥信息
 *
 * @param request GetAccessKeyInfoInRecycleBinRequest
 * @return GetAccessKeyInfoInRecycleBinResponse
 */
GetAccessKeyInfoInRecycleBinResponse Client::getAccessKeyInfoInRecycleBin(const GetAccessKeyInfoInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyInfoInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary 查询指定访问密钥的最后使用时间
 *
 * @param request GetAccessKeyLastUsedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyLastUsedResponse
 */
GetAccessKeyLastUsedResponse Client::getAccessKeyLastUsedWithOptions(const GetAccessKeyLastUsedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessKeyLastUsed"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessKeyLastUsedResponse>();
}

/**
 * @summary 查询指定访问密钥的最后使用时间
 *
 * @param request GetAccessKeyLastUsedRequest
 * @return GetAccessKeyLastUsedResponse
 */
GetAccessKeyLastUsedResponse Client::getAccessKeyLastUsed(const GetAccessKeyLastUsedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyLastUsedWithOptions(request, runtime);
}

/**
 * @summary 查询主账号多因素认证设备信息
 *
 * @param request GetAccountMFAInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountMFAInfoResponse
 */
GetAccountMFAInfoResponse Client::getAccountMFAInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetAccountMFAInfo"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountMFAInfoResponse>();
}

/**
 * @summary 查询主账号多因素认证设备信息
 *
 * @return GetAccountMFAInfoResponse
 */
GetAccountMFAInfoResponse Client::getAccountMFAInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountMFAInfoWithOptions(runtime);
}

/**
 * @summary 查询阿里云账号的安全报告
 *
 * @param request GetAccountSecurityPracticeReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountSecurityPracticeReportResponse
 */
GetAccountSecurityPracticeReportResponse Client::getAccountSecurityPracticeReportWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetAccountSecurityPracticeReport"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountSecurityPracticeReportResponse>();
}

/**
 * @summary 查询阿里云账号的安全报告
 *
 * @return GetAccountSecurityPracticeReportResponse
 */
GetAccountSecurityPracticeReportResponse Client::getAccountSecurityPracticeReport() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountSecurityPracticeReportWithOptions(runtime);
}

/**
 * @summary Retrieves a summary of an Alibaba Cloud account.
 *
 * @param request GetAccountSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountSummaryResponse
 */
GetAccountSummaryResponse Client::getAccountSummaryWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetAccountSummary"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountSummaryResponse>();
}

/**
 * @summary Retrieves a summary of an Alibaba Cloud account.
 *
 * @return GetAccountSummaryResponse
 */
GetAccountSummaryResponse Client::getAccountSummary() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountSummaryWithOptions(runtime);
}

/**
 * @summary 查询指定应用密钥信息
 *
 * @param request GetAppSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppSecretResponse
 */
GetAppSecretResponse Client::getAppSecretWithOptions(const GetAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppSecretId()) {
    query["AppSecretId"] = request.getAppSecretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppSecret"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppSecretResponse>();
}

/**
 * @summary 查询指定应用密钥信息
 *
 * @param request GetAppSecretRequest
 * @return GetAppSecretResponse
 */
GetAppSecretResponse Client::getAppSecret(const GetAppSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppSecretWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration information of a specified application.
 *
 * @description This topic provides an example of how to query the configuration information of the application `472457090344041****`.
 *
 * @param request GetApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplication"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationResponse>();
}

/**
 * @summary Queries the configuration information of a specified application.
 *
 * @description This topic provides an example of how to query the configuration information of the application `472457090344041****`.
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationWithOptions(request, runtime);
}

/**
 * @summary 查询应用安装信息
 *
 * @param request GetApplicationProvisionInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationProvisionInfoResponse
 */
GetApplicationProvisionInfoResponse Client::getApplicationProvisionInfoWithOptions(const GetApplicationProvisionInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationProvisionInfo"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationProvisionInfoResponse>();
}

/**
 * @summary 查询应用安装信息
 *
 * @param request GetApplicationProvisionInfoRequest
 * @return GetApplicationProvisionInfoResponse
 */
GetApplicationProvisionInfoResponse Client::getApplicationProvisionInfo(const GetApplicationProvisionInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationProvisionInfoWithOptions(request, runtime);
}

/**
 * @summary 查询用户凭证报告内容
 *
 * @param request GetCredentialReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCredentialReportResponse
 */
GetCredentialReportResponse Client::getCredentialReportWithOptions(const GetCredentialReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCredentialReport"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCredentialReportResponse>();
}

/**
 * @summary 查询用户凭证报告内容
 *
 * @param request GetCredentialReportRequest
 * @return GetCredentialReportResponse
 */
GetCredentialReportResponse Client::getCredentialReport(const GetCredentialReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCredentialReportWithOptions(request, runtime);
}

/**
 * @summary 查询默认域名
 *
 * @param request GetDefaultDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDefaultDomainResponse
 */
GetDefaultDomainResponse Client::getDefaultDomainWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetDefaultDomain"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDefaultDomainResponse>();
}

/**
 * @summary 查询默认域名
 *
 * @return GetDefaultDomainResponse
 */
GetDefaultDomainResponse Client::getDefaultDomain() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDefaultDomainWithOptions(runtime);
}

/**
 * @summary 查询外部应用
 *
 * @param request GetExternalApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExternalApplicationResponse
 */
GetExternalApplicationResponse Client::getExternalApplicationWithOptions(const GetExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExternalApplication"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExternalApplicationResponse>();
}

/**
 * @summary 查询外部应用
 *
 * @param request GetExternalApplicationRequest
 * @return GetExternalApplicationResponse
 */
GetExternalApplicationResponse Client::getExternalApplication(const GetExternalApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExternalApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specific check item in an identity and access governance report.
 *
 * @param request GetGovernanceItemReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGovernanceItemReportResponse
 */
GetGovernanceItemReportResponse Client::getGovernanceItemReportWithOptions(const GetGovernanceItemReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGovernanceItemType()) {
    query["GovernanceItemType"] = request.getGovernanceItemType();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGovernanceItemReport"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGovernanceItemReportResponse>();
}

/**
 * @summary Queries the details of a specific check item in an identity and access governance report.
 *
 * @param request GetGovernanceItemReportRequest
 * @return GetGovernanceItemReportResponse
 */
GetGovernanceItemReportResponse Client::getGovernanceItemReport(const GetGovernanceItemReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGovernanceItemReportWithOptions(request, runtime);
}

/**
 * @summary Queries the status of an identity and access governance report.
 *
 * @param request GetGovernanceReportStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGovernanceReportStatusResponse
 */
GetGovernanceReportStatusResponse Client::getGovernanceReportStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetGovernanceReportStatus"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGovernanceReportStatusResponse>();
}

/**
 * @summary Queries the status of an identity and access governance report.
 *
 * @return GetGovernanceReportStatusResponse
 */
GetGovernanceReportStatusResponse Client::getGovernanceReportStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGovernanceReportStatusWithOptions(runtime);
}

/**
 * @summary 查询指定用户组信息
 *
 * @param request GetGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGroup"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupResponse>();
}

/**
 * @summary 查询指定用户组信息
 *
 * @param request GetGroupRequest
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const GetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves the logon information for a specified Resource Access Management (RAM) user.
 *
 * @param request GetLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginProfileResponse
 */
GetLoginProfileResponse Client::getLoginProfileWithOptions(const GetLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoginProfile"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoginProfileResponse>();
}

/**
 * @summary Retrieves the logon information for a specified Resource Access Management (RAM) user.
 *
 * @param request GetLoginProfileRequest
 * @return GetLoginProfileResponse
 */
GetLoginProfileResponse Client::getLoginProfile(const GetLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginProfileWithOptions(request, runtime);
}

/**
 * @summary 查询OIDC身份提供商信息
 *
 * @param request GetOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOIDCProviderResponse
 */
GetOIDCProviderResponse Client::getOIDCProviderWithOptions(const GetOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.getOIDCProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOIDCProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOIDCProviderResponse>();
}

/**
 * @summary 查询OIDC身份提供商信息
 *
 * @param request GetOIDCProviderRequest
 * @return GetOIDCProviderResponse
 */
GetOIDCProviderResponse Client::getOIDCProvider(const GetOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary Retrieves the password strength policy for Resource Access Management (RAM) users.
 *
 * @param request GetPasswordPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPasswordPolicyResponse
 */
GetPasswordPolicyResponse Client::getPasswordPolicyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetPasswordPolicy"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPasswordPolicyResponse>();
}

/**
 * @summary Retrieves the password strength policy for Resource Access Management (RAM) users.
 *
 * @return GetPasswordPolicyResponse
 */
GetPasswordPolicyResponse Client::getPasswordPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordPolicyWithOptions(runtime);
}

/**
 * @summary Retrieves information about a specified SAML provider for role-based SSO.
 *
 * @param request GetSAMLProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSAMLProviderResponse
 */
GetSAMLProviderResponse Client::getSAMLProviderWithOptions(const GetSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSAMLProviderName()) {
    query["SAMLProviderName"] = request.getSAMLProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSAMLProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSAMLProviderResponse>();
}

/**
 * @summary Retrieves information about a specified SAML provider for role-based SSO.
 *
 * @param request GetSAMLProviderRequest
 * @return GetSAMLProviderResponse
 */
GetSAMLProviderResponse Client::getSAMLProvider(const GetSAMLProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSAMLProviderWithOptions(request, runtime);
}

/**
 * @summary Queries the global security preferences for Resource Access Management (RAM) users.
 *
 * @param request GetSecurityPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecurityPreferenceResponse
 */
GetSecurityPreferenceResponse Client::getSecurityPreferenceWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetSecurityPreference"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecurityPreferenceResponse>();
}

/**
 * @summary Queries the global security preferences for Resource Access Management (RAM) users.
 *
 * @return GetSecurityPreferenceResponse
 */
GetSecurityPreferenceResponse Client::getSecurityPreference() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityPreferenceWithOptions(runtime);
}

/**
 * @summary 查询RAM用户的详细信息
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary 查询RAM用户的详细信息
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary 获取回收站中的用户
 *
 * @param request GetUserInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserInRecycleBinResponse
 */
GetUserInRecycleBinResponse Client::getUserInRecycleBinWithOptions(const GetUserInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserInRecycleBin"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserInRecycleBinResponse>();
}

/**
 * @summary 获取回收站中的用户
 *
 * @param request GetUserInRecycleBinRequest
 * @return GetUserInRecycleBinResponse
 */
GetUserInRecycleBinResponse Client::getUserInRecycleBin(const GetUserInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary 查询RAM用户多因素认证设备信息
 *
 * @param request GetUserMFAInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserMFAInfoResponse
 */
GetUserMFAInfoResponse Client::getUserMFAInfoWithOptions(const GetUserMFAInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserMFAInfo"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserMFAInfoResponse>();
}

/**
 * @summary 查询RAM用户多因素认证设备信息
 *
 * @param request GetUserMFAInfoRequest
 * @return GetUserMFAInfoResponse
 */
GetUserMFAInfoResponse Client::getUserMFAInfo(const GetUserMFAInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserMFAInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the identity provider settings for user-based SSO.
 *
 * @param request GetUserSsoSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserSsoSettingsResponse
 */
GetUserSsoSettingsResponse Client::getUserSsoSettingsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetUserSsoSettings"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserSsoSettingsResponse>();
}

/**
 * @summary Queries the identity provider settings for user-based SSO.
 *
 * @return GetUserSsoSettingsResponse
 */
GetUserSsoSettingsResponse Client::getUserSsoSettings() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserSsoSettingsWithOptions(runtime);
}

/**
 * @summary 获取用户安全认证的信息
 *
 * @param request GetVerificationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVerificationInfoResponse
 */
GetVerificationInfoResponse Client::getVerificationInfoWithOptions(const GetVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVerificationInfo"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVerificationInfoResponse>();
}

/**
 * @summary 获取用户安全认证的信息
 *
 * @param request GetVerificationInfoRequest
 * @return GetVerificationInfoResponse
 */
GetVerificationInfoResponse Client::getVerificationInfo(const GetVerificationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVerificationInfoWithOptions(request, runtime);
}

/**
 * @summary 查询主账号或RAM用户访问密钥列表
 *
 * @param request ListAccessKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessKeysResponse
 */
ListAccessKeysResponse Client::listAccessKeysWithOptions(const ListAccessKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessKeys"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessKeysResponse>();
}

/**
 * @summary 查询主账号或RAM用户访问密钥列表
 *
 * @param request ListAccessKeysRequest
 * @return ListAccessKeysResponse
 */
ListAccessKeysResponse Client::listAccessKeys(const ListAccessKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessKeysWithOptions(request, runtime);
}

/**
 * @summary 列出回收站中访问密钥列表
 *
 * @param request ListAccessKeysInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessKeysInRecycleBinResponse
 */
ListAccessKeysInRecycleBinResponse Client::listAccessKeysInRecycleBinWithOptions(const ListAccessKeysInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAccessKeysInRecycleBin"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAccessKeysInRecycleBinResponse>();
}

/**
 * @summary 列出回收站中访问密钥列表
 *
 * @param request ListAccessKeysInRecycleBinRequest
 * @return ListAccessKeysInRecycleBinResponse
 */
ListAccessKeysInRecycleBinResponse Client::listAccessKeysInRecycleBin(const ListAccessKeysInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessKeysInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary 查询指定应用的应用密钥ID列表
 *
 * @param request ListAppSecretIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppSecretIdsResponse
 */
ListAppSecretIdsResponse Client::listAppSecretIdsWithOptions(const ListAppSecretIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppSecretIds"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppSecretIdsResponse>();
}

/**
 * @summary 查询指定应用的应用密钥ID列表
 *
 * @param request ListAppSecretIdsRequest
 * @return ListAppSecretIdsResponse
 */
ListAppSecretIdsResponse Client::listAppSecretIds(const ListAppSecretIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppSecretIdsWithOptions(request, runtime);
}

/**
 * @summary Queries installation information about all installed applications.
 *
 * @param request ListApplicationProvisionInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationProvisionInfosResponse
 */
ListApplicationProvisionInfosResponse Client::listApplicationProvisionInfosWithOptions(const ListApplicationProvisionInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationProvisionInfos"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationProvisionInfosResponse>();
}

/**
 * @summary Queries installation information about all installed applications.
 *
 * @param request ListApplicationProvisionInfosRequest
 * @return ListApplicationProvisionInfosResponse
 */
ListApplicationProvisionInfosResponse Client::listApplicationProvisionInfos(const ListApplicationProvisionInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationProvisionInfosWithOptions(request, runtime);
}

/**
 * @summary Lists the applications that you have created.
 *
 * @description This topic provides an example of how to query the applications in your Alibaba Cloud account. The response shows that only one application, named `myapp`, exists in the account.
 *
 * @param request ListApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListApplications"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsResponse>();
}

/**
 * @summary Lists the applications that you have created.
 *
 * @description This topic provides an example of how to query the applications in your Alibaba Cloud account. The response shows that only one application, named `myapp`, exists in the account.
 *
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsWithOptions(runtime);
}

/**
 * @summary Queries information about all installed external applications.
 *
 * @param request ListExternalApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExternalApplicationsResponse
 */
ListExternalApplicationsResponse Client::listExternalApplicationsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListExternalApplications"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExternalApplicationsResponse>();
}

/**
 * @summary Queries information about all installed external applications.
 *
 * @return ListExternalApplicationsResponse
 */
ListExternalApplicationsResponse Client::listExternalApplications() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExternalApplicationsWithOptions(runtime);
}

/**
 * @summary Queries Resource Access Management (RAM) user groups.
 *
 * @param request ListGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroupsWithOptions(const ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroups"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsResponse>();
}

/**
 * @summary Queries Resource Access Management (RAM) user groups.
 *
 * @param request ListGroupsRequest
 * @return ListGroupsResponse
 */
ListGroupsResponse Client::listGroups(const ListGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsWithOptions(request, runtime);
}

/**
 * @summary 查询RAM用户加入的用户组列表
 *
 * @param request ListGroupsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUserWithOptions(const ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupsForUser"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupsForUserResponse>();
}

/**
 * @summary 查询RAM用户加入的用户组列表
 *
 * @param request ListGroupsForUserRequest
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUser(const ListGroupsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsForUserWithOptions(request, runtime);
}

/**
 * @summary 查询OIDC身份提供商列表
 *
 * @param request ListOIDCProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOIDCProvidersResponse
 */
ListOIDCProvidersResponse Client::listOIDCProvidersWithOptions(const ListOIDCProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOIDCProviders"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOIDCProvidersResponse>();
}

/**
 * @summary 查询OIDC身份提供商列表
 *
 * @param request ListOIDCProvidersRequest
 * @return ListOIDCProvidersResponse
 */
ListOIDCProvidersResponse Client::listOIDCProviders(const ListOIDCProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOIDCProvidersWithOptions(request, runtime);
}

/**
 * @summary 查询Passkey
 *
 * @param request ListPasskeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPasskeysResponse
 */
ListPasskeysResponse Client::listPasskeysWithOptions(const ListPasskeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPasskeys"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPasskeysResponse>();
}

/**
 * @summary 查询Passkey
 *
 * @param request ListPasskeysRequest
 * @return ListPasskeysResponse
 */
ListPasskeysResponse Client::listPasskeys(const ListPasskeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPasskeysWithOptions(request, runtime);
}

/**
 * @summary Queries predefined application permissions.
 *
 * @param request ListPredefinedScopesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPredefinedScopesResponse
 */
ListPredefinedScopesResponse Client::listPredefinedScopesWithOptions(const ListPredefinedScopesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPredefinedScopes"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPredefinedScopesResponse>();
}

/**
 * @summary Queries predefined application permissions.
 *
 * @param request ListPredefinedScopesRequest
 * @return ListPredefinedScopesResponse
 */
ListPredefinedScopesResponse Client::listPredefinedScopes(const ListPredefinedScopesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPredefinedScopesWithOptions(request, runtime);
}

/**
 * @summary Queries all metric values in the most recent governance check.
 *
 * @param request ListRecentGovernanceMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecentGovernanceMetricsResponse
 */
ListRecentGovernanceMetricsResponse Client::listRecentGovernanceMetricsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListRecentGovernanceMetrics"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecentGovernanceMetricsResponse>();
}

/**
 * @summary Queries all metric values in the most recent governance check.
 *
 * @return ListRecentGovernanceMetricsResponse
 */
ListRecentGovernanceMetricsResponse Client::listRecentGovernanceMetrics() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecentGovernanceMetricsWithOptions(runtime);
}

/**
 * @summary 查询角色SSO身份提供商列表
 *
 * @param request ListSAMLProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSAMLProvidersResponse
 */
ListSAMLProvidersResponse Client::listSAMLProvidersWithOptions(const ListSAMLProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSAMLProviders"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSAMLProvidersResponse>();
}

/**
 * @summary 查询角色SSO身份提供商列表
 *
 * @param request ListSAMLProvidersRequest
 * @return ListSAMLProvidersResponse
 */
ListSAMLProvidersResponse Client::listSAMLProviders(const ListSAMLProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSAMLProvidersWithOptions(request, runtime);
}

/**
 * @summary 查询资源与标签的关系
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourcePrincipalName()) {
    query["ResourcePrincipalName"] = request.getResourcePrincipalName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary 查询资源与标签的关系
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about all Resource Access Management (RAM) users.
 *
 * @description You can call the following API operations to query information about all RAM users:
 * - ListUsers: queries the details of all RAM users.
 * - ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
 *
 * @param request ListUserBasicInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserBasicInfosResponse
 */
ListUserBasicInfosResponse Client::listUserBasicInfosWithOptions(const ListUserBasicInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserBasicInfos"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserBasicInfosResponse>();
}

/**
 * @summary Queries the basic information about all Resource Access Management (RAM) users.
 *
 * @description You can call the following API operations to query information about all RAM users:
 * - ListUsers: queries the details of all RAM users.
 * - ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
 *
 * @param request ListUserBasicInfosRequest
 * @return ListUserBasicInfosResponse
 */
ListUserBasicInfosResponse Client::listUserBasicInfos(const ListUserBasicInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserBasicInfosWithOptions(request, runtime);
}

/**
 * @summary Queries information about all Resource Access Management (RAM) users.
 *
 * @description ### [](#)
 * You can call the following API operations to query the details of all RAM users:
 * - ListUsers: queries the details of all RAM users.
 * - ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Queries information about all Resource Access Management (RAM) users.
 *
 * @description ### [](#)
 * You can call the following API operations to query the details of all RAM users:
 * - ListUsers: queries the details of all RAM users.
 * - ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary 查询用户组中用户列表
 *
 * @param request ListUsersForGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroupWithOptions(const ListUsersForGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsersForGroup"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersForGroupResponse>();
}

/**
 * @summary 查询用户组中用户列表
 *
 * @param request ListUsersForGroupRequest
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroup(const ListUsersForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersForGroupWithOptions(request, runtime);
}

/**
 * @summary 查询回收站中用户列表
 *
 * @param request ListUsersInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersInRecycleBinResponse
 */
ListUsersInRecycleBinResponse Client::listUsersInRecycleBinWithOptions(const ListUsersInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsersInRecycleBin"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersInRecycleBinResponse>();
}

/**
 * @summary 查询回收站中用户列表
 *
 * @param request ListUsersInRecycleBinRequest
 * @return ListUsersInRecycleBinResponse
 */
ListUsersInRecycleBinResponse Client::listUsersInRecycleBin(const ListUsersInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Queries multi-factor authentication (MFA) devices.
 *
 * @param request ListVirtualMFADevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVirtualMFADevicesResponse
 */
ListVirtualMFADevicesResponse Client::listVirtualMFADevicesWithOptions(const ListVirtualMFADevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.getMarker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.getMaxItems();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVirtualMFADevices"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVirtualMFADevicesResponse>();
}

/**
 * @summary Queries multi-factor authentication (MFA) devices.
 *
 * @param request ListVirtualMFADevicesRequest
 * @return ListVirtualMFADevicesResponse
 */
ListVirtualMFADevicesResponse Client::listVirtualMFADevices(const ListVirtualMFADevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVirtualMFADevicesWithOptions(request, runtime);
}

/**
 * @summary 安装应用
 *
 * @param request ProvisionApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProvisionApplicationResponse
 */
ProvisionApplicationResponse Client::provisionApplicationWithOptions(const ProvisionApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasScopes()) {
    query["Scopes"] = request.getScopes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ProvisionApplication"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProvisionApplicationResponse>();
}

/**
 * @summary 安装应用
 *
 * @param request ProvisionApplicationRequest
 * @return ProvisionApplicationResponse
 */
ProvisionApplicationResponse Client::provisionApplication(const ProvisionApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return provisionApplicationWithOptions(request, runtime);
}

/**
 * @summary 安装外部应用
 *
 * @param request ProvisionExternalApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProvisionExternalApplicationResponse
 */
ProvisionExternalApplicationResponse Client::provisionExternalApplicationWithOptions(const ProvisionExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasScopes()) {
    query["Scopes"] = request.getScopes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ProvisionExternalApplication"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProvisionExternalApplicationResponse>();
}

/**
 * @summary 安装外部应用
 *
 * @param request ProvisionExternalApplicationRequest
 * @return ProvisionExternalApplicationResponse
 */
ProvisionExternalApplicationResponse Client::provisionExternalApplication(const ProvisionExternalApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return provisionExternalApplicationWithOptions(request, runtime);
}

/**
 * @summary 移除OIDC身份提供商中的指定客户端ID
 *
 * @param request RemoveClientIdFromOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveClientIdFromOIDCProviderResponse
 */
RemoveClientIdFromOIDCProviderResponse Client::removeClientIdFromOIDCProviderWithOptions(const RemoveClientIdFromOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.getClientId();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.getOIDCProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveClientIdFromOIDCProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveClientIdFromOIDCProviderResponse>();
}

/**
 * @summary 移除OIDC身份提供商中的指定客户端ID
 *
 * @param request RemoveClientIdFromOIDCProviderRequest
 * @return RemoveClientIdFromOIDCProviderResponse
 */
RemoveClientIdFromOIDCProviderResponse Client::removeClientIdFromOIDCProvider(const RemoveClientIdFromOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeClientIdFromOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary 移除OIDC身份提供商中指定的验证指纹
 *
 * @param request RemoveFingerprintFromOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveFingerprintFromOIDCProviderResponse
 */
RemoveFingerprintFromOIDCProviderResponse Client::removeFingerprintFromOIDCProviderWithOptions(const RemoveFingerprintFromOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFingerprint()) {
    query["Fingerprint"] = request.getFingerprint();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.getOIDCProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveFingerprintFromOIDCProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveFingerprintFromOIDCProviderResponse>();
}

/**
 * @summary 移除OIDC身份提供商中指定的验证指纹
 *
 * @param request RemoveFingerprintFromOIDCProviderRequest
 * @return RemoveFingerprintFromOIDCProviderResponse
 */
RemoveFingerprintFromOIDCProviderResponse Client::removeFingerprintFromOIDCProvider(const RemoveFingerprintFromOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeFingerprintFromOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary 将RAM用户从用户组中移除
 *
 * @param request RemoveUserFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromGroupResponse
 */
RemoveUserFromGroupResponse Client::removeUserFromGroupWithOptions(const RemoveUserFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUserFromGroup"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserFromGroupResponse>();
}

/**
 * @summary 将RAM用户从用户组中移除
 *
 * @param request RemoveUserFromGroupRequest
 * @return RemoveUserFromGroupResponse
 */
RemoveUserFromGroupResponse Client::removeUserFromGroup(const RemoveUserFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserFromGroupWithOptions(request, runtime);
}

/**
 * @summary 清空回收站中的访问密钥
 *
 * @param request RestoreAccessKeyFromRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreAccessKeyFromRecycleBinResponse
 */
RestoreAccessKeyFromRecycleBinResponse Client::restoreAccessKeyFromRecycleBinWithOptions(const RestoreAccessKeyFromRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestoreAccessKeyFromRecycleBin"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreAccessKeyFromRecycleBinResponse>();
}

/**
 * @summary 清空回收站中的访问密钥
 *
 * @param request RestoreAccessKeyFromRecycleBinRequest
 * @return RestoreAccessKeyFromRecycleBinResponse
 */
RestoreAccessKeyFromRecycleBinResponse Client::restoreAccessKeyFromRecycleBin(const RestoreAccessKeyFromRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreAccessKeyFromRecycleBinWithOptions(request, runtime);
}

/**
 * @summary 清空回收站中的用户
 *
 * @param request RestoreUserFromRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreUserFromRecycleBinResponse
 */
RestoreUserFromRecycleBinResponse Client::restoreUserFromRecycleBinWithOptions(const RestoreUserFromRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestoreUserFromRecycleBin"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreUserFromRecycleBinResponse>();
}

/**
 * @summary 清空回收站中的用户
 *
 * @param request RestoreUserFromRecycleBinRequest
 * @return RestoreUserFromRecycleBinResponse
 */
RestoreUserFromRecycleBinResponse Client::restoreUserFromRecycleBin(const RestoreUserFromRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreUserFromRecycleBinWithOptions(request, runtime);
}

/**
 * @summary 设置默认域名
 *
 * @param request SetDefaultDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultDomainResponse
 */
SetDefaultDomainResponse Client::setDefaultDomainWithOptions(const SetDefaultDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultDomainName()) {
    query["DefaultDomainName"] = request.getDefaultDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultDomain"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultDomainResponse>();
}

/**
 * @summary 设置默认域名
 *
 * @param request SetDefaultDomainRequest
 * @return SetDefaultDomainResponse
 */
SetDefaultDomainResponse Client::setDefaultDomain(const SetDefaultDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultDomainWithOptions(request, runtime);
}

/**
 * @summary Sets the password strength policy for RAM users.
 *
 * @param request SetPasswordPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordPolicyResponse
 */
SetPasswordPolicyResponse Client::setPasswordPolicyWithOptions(const SetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHardExpire()) {
    query["HardExpire"] = request.getHardExpire();
  }

  if (!!request.hasInitialPasswordAge()) {
    query["InitialPasswordAge"] = request.getInitialPasswordAge();
  }

  if (!!request.hasInterceptRiskPasswordOnApi()) {
    query["InterceptRiskPasswordOnApi"] = request.getInterceptRiskPasswordOnApi();
  }

  if (!!request.hasMaxLoginAttemps()) {
    query["MaxLoginAttemps"] = request.getMaxLoginAttemps();
  }

  if (!!request.hasMaxPasswordAge()) {
    query["MaxPasswordAge"] = request.getMaxPasswordAge();
  }

  if (!!request.hasMinimumPasswordDifferentCharacter()) {
    query["MinimumPasswordDifferentCharacter"] = request.getMinimumPasswordDifferentCharacter();
  }

  if (!!request.hasMinimumPasswordLength()) {
    query["MinimumPasswordLength"] = request.getMinimumPasswordLength();
  }

  if (!!request.hasPasswordNotContainUserName()) {
    query["PasswordNotContainUserName"] = request.getPasswordNotContainUserName();
  }

  if (!!request.hasPasswordReusePrevention()) {
    query["PasswordReusePrevention"] = request.getPasswordReusePrevention();
  }

  if (!!request.hasRequireLowercaseCharacters()) {
    query["RequireLowercaseCharacters"] = request.getRequireLowercaseCharacters();
  }

  if (!!request.hasRequireNumbers()) {
    query["RequireNumbers"] = request.getRequireNumbers();
  }

  if (!!request.hasRequireSymbols()) {
    query["RequireSymbols"] = request.getRequireSymbols();
  }

  if (!!request.hasRequireUppercaseCharacters()) {
    query["RequireUppercaseCharacters"] = request.getRequireUppercaseCharacters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetPasswordPolicy"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetPasswordPolicyResponse>();
}

/**
 * @summary Sets the password strength policy for RAM users.
 *
 * @param request SetPasswordPolicyRequest
 * @return SetPasswordPolicyResponse
 */
SetPasswordPolicyResponse Client::setPasswordPolicy(const SetPasswordPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordPolicyWithOptions(request, runtime);
}

/**
 * @summary Configures the global security preferences for a Resource Access Management (RAM) user.
 *
 * @param tmpReq SetSecurityPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSecurityPreferenceResponse
 */
SetSecurityPreferenceResponse Client::setSecurityPreferenceWithOptions(const SetSecurityPreferenceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetSecurityPreferenceShrinkRequest request = SetSecurityPreferenceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVerificationTypes()) {
    request.setVerificationTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVerificationTypes(), "VerificationTypes", "json"));
  }

  json query = {};
  if (!!request.hasAllowUserToChangePassword()) {
    query["AllowUserToChangePassword"] = request.getAllowUserToChangePassword();
  }

  if (!!request.hasAllowUserToLoginWithPasskey()) {
    query["AllowUserToLoginWithPasskey"] = request.getAllowUserToLoginWithPasskey();
  }

  if (!!request.hasAllowUserToManageAccessKeys()) {
    query["AllowUserToManageAccessKeys"] = request.getAllowUserToManageAccessKeys();
  }

  if (!!request.hasAllowUserToManageMFADevices()) {
    query["AllowUserToManageMFADevices"] = request.getAllowUserToManageMFADevices();
  }

  if (!!request.hasAllowUserToManagePersonalDingTalk()) {
    query["AllowUserToManagePersonalDingTalk"] = request.getAllowUserToManagePersonalDingTalk();
  }

  if (!!request.hasEnableSaveMFATicket()) {
    query["EnableSaveMFATicket"] = request.getEnableSaveMFATicket();
  }

  if (!!request.hasLoginNetworkMasks()) {
    query["LoginNetworkMasks"] = request.getLoginNetworkMasks();
  }

  if (!!request.hasLoginSessionDuration()) {
    query["LoginSessionDuration"] = request.getLoginSessionDuration();
  }

  if (!!request.hasMFAOperationForLogin()) {
    query["MFAOperationForLogin"] = request.getMFAOperationForLogin();
  }

  if (!!request.hasMaxIdleDaysForAccessKeys()) {
    query["MaxIdleDaysForAccessKeys"] = request.getMaxIdleDaysForAccessKeys();
  }

  if (!!request.hasMaxIdleDaysForUsers()) {
    query["MaxIdleDaysForUsers"] = request.getMaxIdleDaysForUsers();
  }

  if (!!request.hasOperationForRiskLogin()) {
    query["OperationForRiskLogin"] = request.getOperationForRiskLogin();
  }

  if (!!request.hasVerificationTypesShrink()) {
    query["VerificationTypes"] = request.getVerificationTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetSecurityPreference"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSecurityPreferenceResponse>();
}

/**
 * @summary Configures the global security preferences for a Resource Access Management (RAM) user.
 *
 * @param request SetSecurityPreferenceRequest
 * @return SetSecurityPreferenceResponse
 */
SetSecurityPreferenceResponse Client::setSecurityPreference(const SetSecurityPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSecurityPreferenceWithOptions(request, runtime);
}

/**
 * @summary Sets the identity provider (IdP) settings for user-based single sign-on (SSO).
 *
 * @param request SetUserSsoSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetUserSsoSettingsResponse
 */
SetUserSsoSettingsResponse Client::setUserSsoSettingsWithOptions(const SetUserSsoSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthnSignAlgo()) {
    query["AuthnSignAlgo"] = request.getAuthnSignAlgo();
  }

  if (!!request.hasAuxiliaryDomain()) {
    query["AuxiliaryDomain"] = request.getAuxiliaryDomain();
  }

  if (!!request.hasMetadataDocument()) {
    query["MetadataDocument"] = request.getMetadataDocument();
  }

  if (!!request.hasSsoEnabled()) {
    query["SsoEnabled"] = request.getSsoEnabled();
  }

  if (!!request.hasSsoLoginWithDomain()) {
    query["SsoLoginWithDomain"] = request.getSsoLoginWithDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetUserSsoSettings"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetUserSsoSettingsResponse>();
}

/**
 * @summary Sets the identity provider (IdP) settings for user-based single sign-on (SSO).
 *
 * @param request SetUserSsoSettingsRequest
 * @return SetUserSsoSettingsResponse
 */
SetUserSsoSettingsResponse Client::setUserSsoSettings(const SetUserSsoSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setUserSsoSettingsWithOptions(request, runtime);
}

/**
 * @summary 新增录入/修改安全手机号码、安全邮箱的API
 *
 * @param request SetVerificationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVerificationInfoResponse
 */
SetVerificationInfoResponse Client::setVerificationInfoWithOptions(const SetVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasMobilePhone()) {
    query["MobilePhone"] = request.getMobilePhone();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.getVerifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetVerificationInfo"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetVerificationInfoResponse>();
}

/**
 * @summary 新增录入/修改安全手机号码、安全邮箱的API
 *
 * @param request SetVerificationInfoRequest
 * @return SetVerificationInfoResponse
 */
SetVerificationInfoResponse Client::setVerificationInfo(const SetVerificationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVerificationInfoWithOptions(request, runtime);
}

/**
 * @summary 资源打上标签
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourcePrincipalName()) {
    query["ResourcePrincipalName"] = request.getResourcePrincipalName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary 资源打上标签
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary 为RAM用户解绑多因素认证设备
 *
 * @param request UnbindMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindMFADeviceResponse
 */
UnbindMFADeviceResponse Client::unbindMFADeviceWithOptions(const UnbindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindMFADevice"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindMFADeviceResponse>();
}

/**
 * @summary 为RAM用户解绑多因素认证设备
 *
 * @param request UnbindMFADeviceRequest
 * @return UnbindMFADeviceResponse
 */
UnbindMFADeviceResponse Client::unbindMFADevice(const UnbindMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindMFADeviceWithOptions(request, runtime);
}

/**
 * @summary 删除用户的安全认证
 *
 * @param request UnbindVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindVerificationResponse
 */
UnbindVerificationResponse Client::unbindVerificationWithOptions(const UnbindVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasMobilePhone()) {
    query["MobilePhone"] = request.getMobilePhone();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.getVerifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindVerification"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindVerificationResponse>();
}

/**
 * @summary 删除用户的安全认证
 *
 * @param request UnbindVerificationRequest
 * @return UnbindVerificationResponse
 */
UnbindVerificationResponse Client::unbindVerification(const UnbindVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindVerificationWithOptions(request, runtime);
}

/**
 * @summary 解绑资源的标签
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourcePrincipalName()) {
    query["ResourcePrincipalName"] = request.getResourcePrincipalName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary 解绑资源的标签
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary 修改访问密钥状态
 *
 * @param request UpdateAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccessKeyResponse
 */
UpdateAccessKeyResponse Client::updateAccessKeyWithOptions(const UpdateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.getUserAccessKeyId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccessKey"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccessKeyResponse>();
}

/**
 * @summary 修改访问密钥状态
 *
 * @param request UpdateAccessKeyRequest
 * @return UpdateAccessKeyResponse
 */
UpdateAccessKeyResponse Client::updateAccessKey(const UpdateAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccessKeyWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a specified application.
 *
 * @param request UpdateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplicationWithOptions(const UpdateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasNewAccessTokenValidity()) {
    query["NewAccessTokenValidity"] = request.getNewAccessTokenValidity();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.getNewDisplayName();
  }

  if (!!request.hasNewIsMultiTenant()) {
    query["NewIsMultiTenant"] = request.getNewIsMultiTenant();
  }

  if (!!request.hasNewPredefinedScopes()) {
    query["NewPredefinedScopes"] = request.getNewPredefinedScopes();
  }

  if (!!request.hasNewRedirectUris()) {
    query["NewRedirectUris"] = request.getNewRedirectUris();
  }

  if (!!request.hasNewRefreshTokenValidity()) {
    query["NewRefreshTokenValidity"] = request.getNewRefreshTokenValidity();
  }

  if (!!request.hasNewRequiredScopes()) {
    query["NewRequiredScopes"] = request.getNewRequiredScopes();
  }

  if (!!request.hasNewSecretRequired()) {
    query["NewSecretRequired"] = request.getNewSecretRequired();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApplication"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationResponse>();
}

/**
 * @summary Updates the configuration of a specified application.
 *
 * @param request UpdateApplicationRequest
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplication(const UpdateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationWithOptions(request, runtime);
}

/**
 * @summary 修改指定用户组的信息
 *
 * @param request UpdateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroupWithOptions(const UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasNewComments()) {
    query["NewComments"] = request.getNewComments();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.getNewDisplayName();
  }

  if (!!request.hasNewGroupName()) {
    query["NewGroupName"] = request.getNewGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGroup"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGroupResponse>();
}

/**
 * @summary 修改指定用户组的信息
 *
 * @param request UpdateGroupRequest
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroup(const UpdateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the console logon information for a specified Resource Access Management (RAM) user.
 *
 * @param request UpdateLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoginProfileResponse
 */
UpdateLoginProfileResponse Client::updateLoginProfileWithOptions(const UpdateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMFABindRequired()) {
    query["MFABindRequired"] = request.getMFABindRequired();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasPasswordResetRequired()) {
    query["PasswordResetRequired"] = request.getPasswordResetRequired();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLoginProfile"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoginProfileResponse>();
}

/**
 * @summary Modifies the console logon information for a specified Resource Access Management (RAM) user.
 *
 * @param request UpdateLoginProfileRequest
 * @return UpdateLoginProfileResponse
 */
UpdateLoginProfileResponse Client::updateLoginProfile(const UpdateLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoginProfileWithOptions(request, runtime);
}

/**
 * @summary 修改OIDC身份提供商的描述和客户端ID
 *
 * @param request UpdateOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOIDCProviderResponse
 */
UpdateOIDCProviderResponse Client::updateOIDCProviderWithOptions(const UpdateOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIds()) {
    query["ClientIds"] = request.getClientIds();
  }

  if (!!request.hasIssuanceLimitTime()) {
    query["IssuanceLimitTime"] = request.getIssuanceLimitTime();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.getOIDCProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOIDCProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOIDCProviderResponse>();
}

/**
 * @summary 修改OIDC身份提供商的描述和客户端ID
 *
 * @param request UpdateOIDCProviderRequest
 * @return UpdateOIDCProviderResponse
 */
UpdateOIDCProviderResponse Client::updateOIDCProvider(const UpdateOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary 更新Passkey
 *
 * @param request UpdatePasskeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePasskeyResponse
 */
UpdatePasskeyResponse Client::updatePasskeyWithOptions(const UpdatePasskeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPasskeyId()) {
    query["PasskeyId"] = request.getPasskeyId();
  }

  if (!!request.hasPasskeyName()) {
    query["PasskeyName"] = request.getPasskeyName();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePasskey"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePasskeyResponse>();
}

/**
 * @summary 更新Passkey
 *
 * @param request UpdatePasskeyRequest
 * @return UpdatePasskeyResponse
 */
UpdatePasskeyResponse Client::updatePasskey(const UpdatePasskeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePasskeyWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a specified identity provider for role-based single sign-on (SSO).
 *
 * @description This example shows how to change the description of the identity provider `test-provider` to `This is a new provider.`.
 *
 * @param request UpdateSAMLProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSAMLProviderResponse
 */
UpdateSAMLProviderResponse Client::updateSAMLProviderWithOptions(const UpdateSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthnSignAlgo()) {
    query["AuthnSignAlgo"] = request.getAuthnSignAlgo();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.getNewDescription();
  }

  if (!!request.hasNewEncodedSAMLMetadataDocument()) {
    query["NewEncodedSAMLMetadataDocument"] = request.getNewEncodedSAMLMetadataDocument();
  }

  if (!!request.hasSAMLProviderName()) {
    query["SAMLProviderName"] = request.getSAMLProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSAMLProvider"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSAMLProviderResponse>();
}

/**
 * @summary Updates the information about a specified identity provider for role-based single sign-on (SSO).
 *
 * @description This example shows how to change the description of the identity provider `test-provider` to `This is a new provider.`.
 *
 * @param request UpdateSAMLProviderRequest
 * @return UpdateSAMLProviderResponse
 */
UpdateSAMLProviderResponse Client::updateSAMLProvider(const UpdateSAMLProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSAMLProviderWithOptions(request, runtime);
}

/**
 * @summary 修改RAM用户信息
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewComments()) {
    query["NewComments"] = request.getNewComments();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.getNewDisplayName();
  }

  if (!!request.hasNewEmail()) {
    query["NewEmail"] = request.getNewEmail();
  }

  if (!!request.hasNewMobilePhone()) {
    query["NewMobilePhone"] = request.getNewMobilePhone();
  }

  if (!!request.hasNewUserPrincipalName()) {
    query["NewUserPrincipalName"] = request.getNewUserPrincipalName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.getUserPrincipalName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2019-08-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserResponse>();
}

/**
 * @summary 修改RAM用户信息
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Ims20190815