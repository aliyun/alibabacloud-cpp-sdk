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
 * @summary Adds a client ID to an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @param request AddClientIdToOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddClientIdToOIDCProviderResponse
 */
AddClientIdToOIDCProviderResponse Client::addClientIdToOIDCProviderWithOptions(const AddClientIdToOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.OIDCProviderName();
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
 * @summary Adds a client ID to an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @param request AddClientIdToOIDCProviderRequest
 * @return AddClientIdToOIDCProviderResponse
 */
AddClientIdToOIDCProviderResponse Client::addClientIdToOIDCProvider(const AddClientIdToOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addClientIdToOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary Adds a fingerprint to an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to add the fingerprint `902ef2deeb3c5b13ea4c3d5193629309e231****` to the OIDC IdP named `TestOIDCProvider`.
 *
 * @param request AddFingerprintToOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFingerprintToOIDCProviderResponse
 */
AddFingerprintToOIDCProviderResponse Client::addFingerprintToOIDCProviderWithOptions(const AddFingerprintToOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFingerprint()) {
    query["Fingerprint"] = request.fingerprint();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.OIDCProviderName();
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
 * @summary Adds a fingerprint to an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to add the fingerprint `902ef2deeb3c5b13ea4c3d5193629309e231****` to the OIDC IdP named `TestOIDCProvider`.
 *
 * @param request AddFingerprintToOIDCProviderRequest
 * @return AddFingerprintToOIDCProviderResponse
 */
AddFingerprintToOIDCProviderResponse Client::addFingerprintToOIDCProvider(const AddFingerprintToOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFingerprintToOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary Adds a Resource Access Management (RAM) user to a RAM user group.
 *
 * @param request AddUserToGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserToGroupResponse
 */
AddUserToGroupResponse Client::addUserToGroupWithOptions(const AddUserToGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Adds a Resource Access Management (RAM) user to a RAM user group.
 *
 * @param request AddUserToGroupRequest
 * @return AddUserToGroupResponse
 */
AddUserToGroupResponse Client::addUserToGroup(const AddUserToGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserToGroupWithOptions(request, runtime);
}

/**
 * @summary Binds a multi-factor authentication (MFA) device to a Resource Access Management (RAM) user.
 *
 * @param request BindMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindMFADeviceResponse
 */
BindMFADeviceResponse Client::bindMFADeviceWithOptions(const BindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationCode1()) {
    query["AuthenticationCode1"] = request.authenticationCode1();
  }

  if (!!request.hasAuthenticationCode2()) {
    query["AuthenticationCode2"] = request.authenticationCode2();
  }

  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.serialNumber();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Binds a multi-factor authentication (MFA) device to a Resource Access Management (RAM) user.
 *
 * @param request BindMFADeviceRequest
 * @return BindMFADeviceResponse
 */
BindMFADeviceResponse Client::bindMFADevice(const BindMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Changes the password that is used to log on to the console for a Resource Access Management (RAM) user.
 *
 * @description >  This operation is available only for RAM users. Before you call this operation, make sure that `AllowUserToChangePassword` in [SetSecurityPreference](https://help.aliyun.com/document_detail/43765.html) is set to `True`. The value True indicates that RAM users can manage their passwords.
 *
 * @param request ChangePasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangePasswordResponse
 */
ChangePasswordResponse Client::changePasswordWithOptions(const ChangePasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.newPassword();
  }

  if (!!request.hasOldPassword()) {
    query["OldPassword"] = request.oldPassword();
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
 * @summary Changes the password that is used to log on to the console for a Resource Access Management (RAM) user.
 *
 * @description >  This operation is available only for RAM users. Before you call this operation, make sure that `AllowUserToChangePassword` in [SetSecurityPreference](https://help.aliyun.com/document_detail/43765.html) is set to `True`. The value True indicates that RAM users can manage their passwords.
 *
 * @param request ChangePasswordRequest
 * @return ChangePasswordResponse
 */
ChangePasswordResponse Client::changePassword(const ChangePasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changePasswordWithOptions(request, runtime);
}

/**
 * @summary Creates an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
 *
 * @param request CreateAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccessKeyResponse
 */
CreateAccessKeyResponse Client::createAccessKeyWithOptions(const CreateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Creates an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
 *
 * @param request CreateAccessKeyRequest
 * @return CreateAccessKeyResponse
 */
CreateAccessKeyResponse Client::createAccessKey(const CreateAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccessKeyWithOptions(request, runtime);
}

/**
 * @summary Creates an application secret for an application.
 *
 * @param request CreateAppSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppSecretResponse
 */
CreateAppSecretResponse Client::createAppSecretWithOptions(const CreateAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
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
 * @summary Creates an application secret for an application.
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
    query["AccessTokenValidity"] = request.accessTokenValidity();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasIsMultiTenant()) {
    query["IsMultiTenant"] = request.isMultiTenant();
  }

  if (!!request.hasPredefinedScopes()) {
    query["PredefinedScopes"] = request.predefinedScopes();
  }

  if (!!request.hasProtocolVersion()) {
    query["ProtocolVersion"] = request.protocolVersion();
  }

  if (!!request.hasRedirectUris()) {
    query["RedirectUris"] = request.redirectUris();
  }

  if (!!request.hasRefreshTokenValidity()) {
    query["RefreshTokenValidity"] = request.refreshTokenValidity();
  }

  if (!!request.hasRequiredScopes()) {
    query["RequiredScopes"] = request.requiredScopes();
  }

  if (!!request.hasSecretRequired()) {
    query["SecretRequired"] = request.secretRequired();
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
 * @summary Creates a Resource Access Management (RAM) user group.
 *
 * @param request CreateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroupWithOptions(const CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComments()) {
    query["Comments"] = request.comments();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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
 * @summary Creates a Resource Access Management (RAM) user group.
 *
 * @param request CreateGroupRequest
 * @return CreateGroupResponse
 */
CreateGroupResponse Client::createGroup(const CreateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGroupWithOptions(request, runtime);
}

/**
 * @summary Enables logon to the console for a Resource Access Management (RAM) user.
 *
 * @param request CreateLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoginProfileResponse
 */
CreateLoginProfileResponse Client::createLoginProfileWithOptions(const CreateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMFABindRequired()) {
    query["MFABindRequired"] = request.MFABindRequired();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPasswordResetRequired()) {
    query["PasswordResetRequired"] = request.passwordResetRequired();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Enables logon to the console for a Resource Access Management (RAM) user.
 *
 * @param request CreateLoginProfileRequest
 * @return CreateLoginProfileResponse
 */
CreateLoginProfileResponse Client::createLoginProfile(const CreateLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoginProfileWithOptions(request, runtime);
}

/**
 * @summary Creates an OpenID Connect (OIDC) identity provider (IdP) to configure a trust relationship between Alibaba Cloud and an external IdP. This topic provides an example on how to create an IdP named TestOIDCProvider to configure a trust relationship between the external IdP Okta and Alibaba Cloud.
 *
 * @description ### [](#)Prerequisites
 * Before you call this operation, make sure that the information such as the URL of the issuer, the fingerprints of HTTPS certificate authority (CA) certificates, and the client IDs are obtained from an external IdP, such as Google Workspace or Okta.
 * ### [](#)Limits
 * *   You can create a maximum of 100 OIDC IdPs in an Alibaba Cloud account.
 * *   You can add a maximum of 50 client IDs to an OIDC IdP.
 * *   You can add a maximum of five fingerprints to an OIDC IdP.
 * ### [](#)Operation description
 * This topic provides an example on how to create an IdP named `TestOIDCProvider` to configure a trust relationship between the external IdP and Alibaba Cloud.
 *
 * @param request CreateOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOIDCProviderResponse
 */
CreateOIDCProviderResponse Client::createOIDCProviderWithOptions(const CreateOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIds()) {
    query["ClientIds"] = request.clientIds();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFingerprints()) {
    query["Fingerprints"] = request.fingerprints();
  }

  if (!!request.hasIssuanceLimitTime()) {
    query["IssuanceLimitTime"] = request.issuanceLimitTime();
  }

  if (!!request.hasIssuerUrl()) {
    query["IssuerUrl"] = request.issuerUrl();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.OIDCProviderName();
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
 * @summary Creates an OpenID Connect (OIDC) identity provider (IdP) to configure a trust relationship between Alibaba Cloud and an external IdP. This topic provides an example on how to create an IdP named TestOIDCProvider to configure a trust relationship between the external IdP Okta and Alibaba Cloud.
 *
 * @description ### [](#)Prerequisites
 * Before you call this operation, make sure that the information such as the URL of the issuer, the fingerprints of HTTPS certificate authority (CA) certificates, and the client IDs are obtained from an external IdP, such as Google Workspace or Okta.
 * ### [](#)Limits
 * *   You can create a maximum of 100 OIDC IdPs in an Alibaba Cloud account.
 * *   You can add a maximum of 50 client IDs to an OIDC IdP.
 * *   You can add a maximum of five fingerprints to an OIDC IdP.
 * ### [](#)Operation description
 * This topic provides an example on how to create an IdP named `TestOIDCProvider` to configure a trust relationship between the external IdP and Alibaba Cloud.
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
    query["AuthnSignAlgo"] = request.authnSignAlgo();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEncodedSAMLMetadataDocument()) {
    query["EncodedSAMLMetadataDocument"] = request.encodedSAMLMetadataDocument();
  }

  if (!!request.hasSAMLProviderName()) {
    query["SAMLProviderName"] = request.SAMLProviderName();
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
 * @summary Creates a RAM user.
 *
 * @description This topic provides an example on how to create a RAM user named `test`.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComments()) {
    query["Comments"] = request.comments();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasMobilePhone()) {
    query["MobilePhone"] = request.mobilePhone();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Creates a RAM user.
 *
 * @description This topic provides an example on how to create a RAM user named `test`.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Creates a virtual multi-factor authentication (MFA) device.
 *
 * @param request CreateVirtualMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVirtualMFADeviceResponse
 */
CreateVirtualMFADeviceResponse Client::createVirtualMFADeviceWithOptions(const CreateVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVirtualMFADeviceName()) {
    query["VirtualMFADeviceName"] = request.virtualMFADeviceName();
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
 * @summary Creates a virtual multi-factor authentication (MFA) device.
 *
 * @param request CreateVirtualMFADeviceRequest
 * @return CreateVirtualMFADeviceResponse
 */
CreateVirtualMFADeviceResponse Client::createVirtualMFADevice(const CreateVirtualMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVirtualMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Deletes an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
 *
 * @param request DeleteAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessKeyResponse
 */
DeleteAccessKeyResponse Client::deleteAccessKeyWithOptions(const DeleteAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Deletes an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
 *
 * @param request DeleteAccessKeyRequest
 * @return DeleteAccessKeyResponse
 */
DeleteAccessKeyResponse Client::deleteAccessKey(const DeleteAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes a specific AccessKey pair that belongs to a Resource Access Management (RAM) user from the recycle bin.
 *
 * @param request DeleteAccessKeyInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccessKeyInRecycleBinResponse
 */
DeleteAccessKeyInRecycleBinResponse Client::deleteAccessKeyInRecycleBinWithOptions(const DeleteAccessKeyInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Deletes a specific AccessKey pair that belongs to a Resource Access Management (RAM) user from the recycle bin.
 *
 * @param request DeleteAccessKeyInRecycleBinRequest
 * @return DeleteAccessKeyInRecycleBinResponse
 */
DeleteAccessKeyInRecycleBinResponse Client::deleteAccessKeyInRecycleBin(const DeleteAccessKeyInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccessKeyInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Deletes the application secret of an application.
 *
 * @param request DeleteAppSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppSecretResponse
 */
DeleteAppSecretResponse Client::deleteAppSecretWithOptions(const DeleteAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppSecretId()) {
    query["AppSecretId"] = request.appSecretId();
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
 * @summary Deletes the application secret of an application.
 *
 * @param request DeleteAppSecretRequest
 * @return DeleteAppSecretResponse
 */
DeleteAppSecretResponse Client::deleteAppSecret(const DeleteAppSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppSecretWithOptions(request, runtime);
}

/**
 * @summary Deletes an application.
 *
 * @param request DeleteApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplicationWithOptions(const DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
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
 * @summary Deletes an application.
 *
 * @param request DeleteApplicationRequest
 * @return DeleteApplicationResponse
 */
DeleteApplicationResponse Client::deleteApplication(const DeleteApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApplicationWithOptions(request, runtime);
}

/**
 * @summary Deletes a Resource Access Management (RAM) user group.
 *
 * @description Before you delete a RAM user group, make sure that no policies are attached to the group and no RAM users are included in the group.
 *
 * @param request DeleteGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroupWithOptions(const DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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
 * @summary Deletes a Resource Access Management (RAM) user group.
 *
 * @description Before you delete a RAM user group, make sure that no policies are attached to the group and no RAM users are included in the group.
 *
 * @param request DeleteGroupRequest
 * @return DeleteGroupResponse
 */
DeleteGroupResponse Client::deleteGroup(const DeleteGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGroupWithOptions(request, runtime);
}

/**
 * @summary Disables logon to the console for a Resource Access Management (RAM) user.
 *
 * @param request DeleteLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoginProfileResponse
 */
DeleteLoginProfileResponse Client::deleteLoginProfileWithOptions(const DeleteLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Disables logon to the console for a Resource Access Management (RAM) user.
 *
 * @param request DeleteLoginProfileRequest
 * @return DeleteLoginProfileResponse
 */
DeleteLoginProfileResponse Client::deleteLoginProfile(const DeleteLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoginProfileWithOptions(request, runtime);
}

/**
 * @summary Deletes an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to remove the OIDC IdP named `TestOIDCProvider`.
 *
 * @param request DeleteOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOIDCProviderResponse
 */
DeleteOIDCProviderResponse Client::deleteOIDCProviderWithOptions(const DeleteOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.OIDCProviderName();
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
 * @summary Deletes an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to remove the OIDC IdP named `TestOIDCProvider`.
 *
 * @param request DeleteOIDCProviderRequest
 * @return DeleteOIDCProviderResponse
 */
DeleteOIDCProviderResponse Client::deleteOIDCProvider(const DeleteOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes a passkey for a Resource Access Management (RAM) user.
 *
 * @param request DeletePasskeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePasskeyResponse
 */
DeletePasskeyResponse Client::deletePasskeyWithOptions(const DeletePasskeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPasskeyId()) {
    query["PasskeyId"] = request.passkeyId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Deletes a passkey for a Resource Access Management (RAM) user.
 *
 * @param request DeletePasskeyRequest
 * @return DeletePasskeyResponse
 */
DeletePasskeyResponse Client::deletePasskey(const DeletePasskeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePasskeyWithOptions(request, runtime);
}

/**
 * @summary Deletes an identity provider (IdP) for role-based single sign-on (SSO).
 *
 * @param request DeleteSAMLProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSAMLProviderResponse
 */
DeleteSAMLProviderResponse Client::deleteSAMLProviderWithOptions(const DeleteSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSAMLProviderName()) {
    query["SAMLProviderName"] = request.SAMLProviderName();
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
 * @summary Deletes an identity provider (IdP) for role-based single sign-on (SSO).
 *
 * @param request DeleteSAMLProviderRequest
 * @return DeleteSAMLProviderResponse
 */
DeleteSAMLProviderResponse Client::deleteSAMLProvider(const DeleteSAMLProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSAMLProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes a Resource Access Management (RAM) user.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Deletes a Resource Access Management (RAM) user.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a specific Resource Access Management (RAM) user from the recycle bin.
 *
 * @param request DeleteUserInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserInRecycleBinResponse
 */
DeleteUserInRecycleBinResponse Client::deleteUserInRecycleBinWithOptions(const DeleteUserInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Deletes a specific Resource Access Management (RAM) user from the recycle bin.
 *
 * @param request DeleteUserInRecycleBinRequest
 * @return DeleteUserInRecycleBinResponse
 */
DeleteUserInRecycleBinResponse Client::deleteUserInRecycleBin(const DeleteUserInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Deletes a multi-factor authentication (MFA) device.
 *
 * @param request DeleteVirtualMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVirtualMFADeviceResponse
 */
DeleteVirtualMFADeviceResponse Client::deleteVirtualMFADeviceWithOptions(const DeleteVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.serialNumber();
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
 * @summary Deletes a multi-factor authentication (MFA) device.
 *
 * @param request DeleteVirtualMFADeviceRequest
 * @return DeleteVirtualMFADeviceResponse
 */
DeleteVirtualMFADeviceResponse Client::deleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVirtualMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Uninstalls an external application or an internal application of the ServerApp type.
 *
 * @description If you want to call this operation to uninstall an internal application, the type of the internal application must be **ServerApp**. Otherwise, an error occurs when you call this operation.
 * >  For **internal applications**, only internal applications of the ServerApp type need to be **installed or provisioned**. Therefore, only internal applications of the ServerApp type **can be uninstalled**. Internal applications of the WebApp and NativeApp types **do not need to and cannot be uninstalled**.
 *
 * @param request DeprovisionApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeprovisionApplicationResponse
 */
DeprovisionApplicationResponse Client::deprovisionApplicationWithOptions(const DeprovisionApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
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
 * @summary Uninstalls an external application or an internal application of the ServerApp type.
 *
 * @description If you want to call this operation to uninstall an internal application, the type of the internal application must be **ServerApp**. Otherwise, an error occurs when you call this operation.
 * >  For **internal applications**, only internal applications of the ServerApp type need to be **installed or provisioned**. Therefore, only internal applications of the ServerApp type **can be uninstalled**. Internal applications of the WebApp and NativeApp types **do not need to and cannot be uninstalled**.
 *
 * @param request DeprovisionApplicationRequest
 * @return DeprovisionApplicationResponse
 */
DeprovisionApplicationResponse Client::deprovisionApplication(const DeprovisionApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deprovisionApplicationWithOptions(request, runtime);
}

/**
 * @summary Deletes an installed external application.
 *
 * @param request DeprovisionExternalApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeprovisionExternalApplicationResponse
 */
DeprovisionExternalApplicationResponse Client::deprovisionExternalApplicationWithOptions(const DeprovisionExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
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
 * @summary Deletes an installed external application.
 *
 * @param request DeprovisionExternalApplicationRequest
 * @return DeprovisionExternalApplicationResponse
 */
DeprovisionExternalApplicationResponse Client::deprovisionExternalApplication(const DeprovisionExternalApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deprovisionExternalApplicationWithOptions(request, runtime);
}

/**
 * @summary Unbinds and deletes a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
 *
 * @param request DisableVirtualMFARequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableVirtualMFAResponse
 */
DisableVirtualMFAResponse Client::disableVirtualMFAWithOptions(const DisableVirtualMFARequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Unbinds and deletes a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
 *
 * @param request DisableVirtualMFARequest
 * @return DisableVirtualMFAResponse
 */
DisableVirtualMFAResponse Client::disableVirtualMFA(const DisableVirtualMFARequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableVirtualMFAWithOptions(request, runtime);
}

/**
 * @summary Generates the user credential report of an Alibaba Cloud account.
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
 * @summary Generates the user credential report of an Alibaba Cloud account.
 *
 * @return GenerateCredentialReportResponse
 */
GenerateCredentialReportResponse Client::generateCredentialReport() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateCredentialReportWithOptions(runtime);
}

/**
 * @summary Generates a check report for Cloud Governance.
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
 * @summary Generates a check report for Cloud Governance.
 *
 * @return GenerateGovernanceReportResponse
 */
GenerateGovernanceReportResponse Client::generateGovernanceReport() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateGovernanceReportWithOptions(runtime);
}

/**
 * @summary Queries information about a specific AccessKey pair of a Resource Access Management (RAM) user in the recycle bin.
 *
 * @param request GetAccessKeyInfoInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyInfoInRecycleBinResponse
 */
GetAccessKeyInfoInRecycleBinResponse Client::getAccessKeyInfoInRecycleBinWithOptions(const GetAccessKeyInfoInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
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
 * @summary Queries information about a specific AccessKey pair of a Resource Access Management (RAM) user in the recycle bin.
 *
 * @param request GetAccessKeyInfoInRecycleBinRequest
 * @return GetAccessKeyInfoInRecycleBinResponse
 */
GetAccessKeyInfoInRecycleBinResponse Client::getAccessKeyInfoInRecycleBin(const GetAccessKeyInfoInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyInfoInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Queries the time when an AccessKey pair was used for the last time.
 *
 * @param request GetAccessKeyLastUsedRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessKeyLastUsedResponse
 */
GetAccessKeyLastUsedResponse Client::getAccessKeyLastUsedWithOptions(const GetAccessKeyLastUsedRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Queries the time when an AccessKey pair was used for the last time.
 *
 * @param request GetAccessKeyLastUsedRequest
 * @return GetAccessKeyLastUsedResponse
 */
GetAccessKeyLastUsedResponse Client::getAccessKeyLastUsed(const GetAccessKeyLastUsedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessKeyLastUsedWithOptions(request, runtime);
}

/**
 * @summary Queries information about the multi-factor authentication (MFA) devices of an Alibaba Cloud account.
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
 * @summary Queries information about the multi-factor authentication (MFA) devices of an Alibaba Cloud account.
 *
 * @return GetAccountMFAInfoResponse
 */
GetAccountMFAInfoResponse Client::getAccountMFAInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountMFAInfoWithOptions(runtime);
}

/**
 * @summary Queries the security report of an Alibaba Cloud account.
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
 * @summary Queries the security report of an Alibaba Cloud account.
 *
 * @return GetAccountSecurityPracticeReportResponse
 */
GetAccountSecurityPracticeReportResponse Client::getAccountSecurityPracticeReport() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountSecurityPracticeReportWithOptions(runtime);
}

/**
 * @summary Queries the overview information about an Alibaba Cloud account.
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
 * @summary Queries the overview information about an Alibaba Cloud account.
 *
 * @return GetAccountSummaryResponse
 */
GetAccountSummaryResponse Client::getAccountSummary() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountSummaryWithOptions(runtime);
}

/**
 * @summary Queries the details of an application secret.
 *
 * @param request GetAppSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppSecretResponse
 */
GetAppSecretResponse Client::getAppSecretWithOptions(const GetAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppSecretId()) {
    query["AppSecretId"] = request.appSecretId();
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
 * @summary Queries the details of an application secret.
 *
 * @param request GetAppSecretRequest
 * @return GetAppSecretResponse
 */
GetAppSecretResponse Client::getAppSecret(const GetAppSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppSecretWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration information about an application.
 *
 * @description This topic provides an example on how to query the configurations of an application named `472457090344041****`.
 *
 * @param request GetApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
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
 * @summary Queries the configuration information about an application.
 *
 * @description This topic provides an example on how to query the configurations of an application named `472457090344041****`.
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries installation information about a specified installed application.
 *
 * @param request GetApplicationProvisionInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationProvisionInfoResponse
 */
GetApplicationProvisionInfoResponse Client::getApplicationProvisionInfoWithOptions(const GetApplicationProvisionInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
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
 * @summary Queries installation information about a specified installed application.
 *
 * @param request GetApplicationProvisionInfoRequest
 * @return GetApplicationProvisionInfoResponse
 */
GetApplicationProvisionInfoResponse Client::getApplicationProvisionInfo(const GetApplicationProvisionInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationProvisionInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the user credential reports of an Alibaba Cloud account.
 *
 * @param request GetCredentialReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCredentialReportResponse
 */
GetCredentialReportResponse Client::getCredentialReportWithOptions(const GetCredentialReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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
 * @summary Queries the user credential reports of an Alibaba Cloud account.
 *
 * @param request GetCredentialReportRequest
 * @return GetCredentialReportResponse
 */
GetCredentialReportResponse Client::getCredentialReport(const GetCredentialReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCredentialReportWithOptions(request, runtime);
}

/**
 * @summary Queries the default domain name of an Alibaba Cloud account.
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
 * @summary Queries the default domain name of an Alibaba Cloud account.
 *
 * @return GetDefaultDomainResponse
 */
GetDefaultDomainResponse Client::getDefaultDomain() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDefaultDomainWithOptions(runtime);
}

/**
 * @summary Queries information about an installed external application.
 *
 * @param request GetExternalApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExternalApplicationResponse
 */
GetExternalApplicationResponse Client::getExternalApplicationWithOptions(const GetExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
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
 * @summary Queries information about an installed external application.
 *
 * @param request GetExternalApplicationRequest
 * @return GetExternalApplicationResponse
 */
GetExternalApplicationResponse Client::getExternalApplication(const GetExternalApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExternalApplicationWithOptions(request, runtime);
}

/**
 * @summary 查询用户的单项ram治理报告
 *
 * @param request GetGovernanceItemReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGovernanceItemReportResponse
 */
GetGovernanceItemReportResponse Client::getGovernanceItemReportWithOptions(const GetGovernanceItemReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGovernanceItemType()) {
    query["GovernanceItemType"] = request.governanceItemType();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
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
 * @summary 查询用户的单项ram治理报告
 *
 * @param request GetGovernanceItemReportRequest
 * @return GetGovernanceItemReportResponse
 */
GetGovernanceItemReportResponse Client::getGovernanceItemReport(const GetGovernanceItemReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGovernanceItemReportWithOptions(request, runtime);
}

/**
 * @summary 查询成熟度报告状态
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
 * @summary 查询成熟度报告状态
 *
 * @return GetGovernanceReportStatusResponse
 */
GetGovernanceReportStatusResponse Client::getGovernanceReportStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGovernanceReportStatusWithOptions(runtime);
}

/**
 * @summary Queries the information about a Resource Access Management (RAM) user group.
 *
 * @param request GetGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroupWithOptions(const GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
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
 * @summary Queries the information about a Resource Access Management (RAM) user group.
 *
 * @param request GetGroupRequest
 * @return GetGroupResponse
 */
GetGroupResponse Client::getGroup(const GetGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the logon configurations of a Resource Access Management (RAM) user.
 *
 * @param request GetLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginProfileResponse
 */
GetLoginProfileResponse Client::getLoginProfileWithOptions(const GetLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Queries the logon configurations of a Resource Access Management (RAM) user.
 *
 * @param request GetLoginProfileRequest
 * @return GetLoginProfileResponse
 */
GetLoginProfileResponse Client::getLoginProfile(const GetLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginProfileWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an OIDC IdP.
 *
 * @description ###
 * This topic provides an example on how to query the information about an OpenID Connect (OIDC) identity provider (IdP) named `TestOIDCProvider`.
 *
 * @param request GetOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOIDCProviderResponse
 */
GetOIDCProviderResponse Client::getOIDCProviderWithOptions(const GetOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.OIDCProviderName();
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
 * @summary Queries the information about an OIDC IdP.
 *
 * @description ###
 * This topic provides an example on how to query the information about an OpenID Connect (OIDC) identity provider (IdP) named `TestOIDCProvider`.
 *
 * @param request GetOIDCProviderRequest
 * @return GetOIDCProviderResponse
 */
GetOIDCProviderResponse Client::getOIDCProvider(const GetOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the password policy for RAM users.
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
 * @summary Queries the details of the password policy for RAM users.
 *
 * @return GetPasswordPolicyResponse
 */
GetPasswordPolicyResponse Client::getPasswordPolicy() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPasswordPolicyWithOptions(runtime);
}

/**
 * @summary Queries the information about an identity provider (IdP) for role-based single sign-on (SSO).
 *
 * @param request GetSAMLProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSAMLProviderResponse
 */
GetSAMLProviderResponse Client::getSAMLProviderWithOptions(const GetSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSAMLProviderName()) {
    query["SAMLProviderName"] = request.SAMLProviderName();
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
 * @summary Queries the information about an identity provider (IdP) for role-based single sign-on (SSO).
 *
 * @param request GetSAMLProviderRequest
 * @return GetSAMLProviderResponse
 */
GetSAMLProviderResponse Client::getSAMLProvider(const GetSAMLProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSAMLProviderWithOptions(request, runtime);
}

/**
 * @summary Queries the security preferences for RAM users.
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
 * @summary Queries the security preferences for RAM users.
 *
 * @return GetSecurityPreferenceResponse
 */
GetSecurityPreferenceResponse Client::getSecurityPreference() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityPreferenceWithOptions(runtime);
}

/**
 * @summary Queries the information about a RAM user.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Queries the information about a RAM user.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary Queries information about a specific Resource Access Management (RAM) user in the recycle bin.
 *
 * @param request GetUserInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserInRecycleBinResponse
 */
GetUserInRecycleBinResponse Client::getUserInRecycleBinWithOptions(const GetUserInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Queries information about a specific Resource Access Management (RAM) user in the recycle bin.
 *
 * @param request GetUserInRecycleBinRequest
 * @return GetUserInRecycleBinResponse
 */
GetUserInRecycleBinResponse Client::getUserInRecycleBin(const GetUserInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Queries information about the multi-factor authentication (MFA) device that is bound to a Resource Access Management (RAM) user.
 *
 * @param request GetUserMFAInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserMFAInfoResponse
 */
GetUserMFAInfoResponse Client::getUserMFAInfoWithOptions(const GetUserMFAInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Queries information about the multi-factor authentication (MFA) device that is bound to a Resource Access Management (RAM) user.
 *
 * @param request GetUserMFAInfoRequest
 * @return GetUserMFAInfoResponse
 */
GetUserMFAInfoResponse Client::getUserMFAInfo(const GetUserMFAInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserMFAInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of user-based single sign-on (SSO).
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
 * @summary Queries the configurations of user-based single sign-on (SSO).
 *
 * @return GetUserSsoSettingsResponse
 */
GetUserSsoSettingsResponse Client::getUserSsoSettings() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserSsoSettingsWithOptions(runtime);
}

/**
 * @summary Queries the status of the mobile phone or email that is bound to a Resource Access Management (RAM) user.
 *
 * @param request GetVerificationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVerificationInfoResponse
 */
GetVerificationInfoResponse Client::getVerificationInfoWithOptions(const GetVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Queries the status of the mobile phone or email that is bound to a Resource Access Management (RAM) user.
 *
 * @param request GetVerificationInfoRequest
 * @return GetVerificationInfoResponse
 */
GetVerificationInfoResponse Client::getVerificationInfo(const GetVerificationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVerificationInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the AccessKey pairs of an Alibaba Cloud account or a Resource Access Management (RAM) user.
 *
 * @param request ListAccessKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessKeysResponse
 */
ListAccessKeysResponse Client::listAccessKeysWithOptions(const ListAccessKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Queries the AccessKey pairs of an Alibaba Cloud account or a Resource Access Management (RAM) user.
 *
 * @param request ListAccessKeysRequest
 * @return ListAccessKeysResponse
 */
ListAccessKeysResponse Client::listAccessKeys(const ListAccessKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the AccessKey pairs of a specific Resource Access Management (RAM) user in the recycle bin.
 *
 * @param request ListAccessKeysInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAccessKeysInRecycleBinResponse
 */
ListAccessKeysInRecycleBinResponse Client::listAccessKeysInRecycleBinWithOptions(const ListAccessKeysInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Queries the AccessKey pairs of a specific Resource Access Management (RAM) user in the recycle bin.
 *
 * @param request ListAccessKeysInRecycleBinRequest
 * @return ListAccessKeysInRecycleBinResponse
 */
ListAccessKeysInRecycleBinResponse Client::listAccessKeysInRecycleBin(const ListAccessKeysInRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAccessKeysInRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Queries the secret IDs of an application.
 *
 * @param request ListAppSecretIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppSecretIdsResponse
 */
ListAppSecretIdsResponse Client::listAppSecretIdsWithOptions(const ListAppSecretIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
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
 * @summary Queries the secret IDs of an application.
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
    query["SourceType"] = request.sourceType();
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
 * @summary Lists the created applications.
 *
 * @description This topic provides an example on how to query the applications within the current account. The returned result shows that only one application named `myapp` belongs to the current account.
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
 * @summary Lists the created applications.
 *
 * @description This topic provides an example on how to query the applications within the current account. The returned result shows that only one application named `myapp` belongs to the current account.
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
    query["Marker"] = request.marker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
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
 * @summary Queries the Resource Access Management (RAM) user groups to which a RAM user belongs.
 *
 * @param request ListGroupsForUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUserWithOptions(const ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Queries the Resource Access Management (RAM) user groups to which a RAM user belongs.
 *
 * @param request ListGroupsForUserRequest
 * @return ListGroupsForUserResponse
 */
ListGroupsForUserResponse Client::listGroupsForUser(const ListGroupsForUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupsForUserWithOptions(request, runtime);
}

/**
 * @summary Queries OIDC IdPs.
 *
 * @description ###
 * This topic provides an example on how to query all OpenID Connect (OIDC) identity providers (IdPs) within your Alibaba Cloud account. The response shows that your Alibaba Cloud account has only one OIDC IdP named `TestOIDCProvider`.
 *
 * @param request ListOIDCProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOIDCProvidersResponse
 */
ListOIDCProvidersResponse Client::listOIDCProvidersWithOptions(const ListOIDCProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
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
 * @summary Queries OIDC IdPs.
 *
 * @description ###
 * This topic provides an example on how to query all OpenID Connect (OIDC) identity providers (IdPs) within your Alibaba Cloud account. The response shows that your Alibaba Cloud account has only one OIDC IdP named `TestOIDCProvider`.
 *
 * @param request ListOIDCProvidersRequest
 * @return ListOIDCProvidersResponse
 */
ListOIDCProvidersResponse Client::listOIDCProviders(const ListOIDCProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOIDCProvidersWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the passkeys that are bound to a Resource Access Management (RAM) user.
 *
 * @param request ListPasskeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPasskeysResponse
 */
ListPasskeysResponse Client::listPasskeysWithOptions(const ListPasskeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Queries the information about the passkeys that are bound to a Resource Access Management (RAM) user.
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
    query["AppType"] = request.appType();
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
 * @summary Queries information about identity providers (IdPs) for role-based single sign-on (SSO).
 *
 * @param request ListSAMLProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSAMLProvidersResponse
 */
ListSAMLProvidersResponse Client::listSAMLProvidersWithOptions(const ListSAMLProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
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
 * @summary Queries information about identity providers (IdPs) for role-based single sign-on (SSO).
 *
 * @param request ListSAMLProvidersRequest
 * @return ListSAMLProvidersResponse
 */
ListSAMLProvidersResponse Client::listSAMLProviders(const ListSAMLProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSAMLProvidersWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added resources.
 *
 * @description ###
 * You must specify at least one of the following parameters or parameter pairs in a request to determine a query object:
 * *   `ResourceId.N`
 * *   `Tag.N.Key`
 * *   `Tag.N.Key` and `Tag.N.Value`
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourcePrincipalName()) {
    query["ResourcePrincipalName"] = request.resourcePrincipalName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Queries the tags that are added resources.
 *
 * @description ###
 * You must specify at least one of the following parameters or parameter pairs in a request to determine a query object:
 * *   `ResourceId.N`
 * *   `Tag.N.Key`
 * *   `Tag.N.Key` and `Tag.N.Value`
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
 * *   ListUsers: queries the details of all RAM users.
 * *   ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
 *
 * @param request ListUserBasicInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserBasicInfosResponse
 */
ListUserBasicInfosResponse Client::listUserBasicInfosWithOptions(const ListUserBasicInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * *   ListUsers: queries the details of all RAM users.
 * *   ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
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
 * *   ListUsers: queries the details of all RAM users.
 * *   ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * *   ListUsers: queries the details of all RAM users.
 * *   ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Queries Resource Access Management (RAM) users in a RAM user group.
 *
 * @param request ListUsersForGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroupWithOptions(const ListUsersForGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
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
 * @summary Queries Resource Access Management (RAM) users in a RAM user group.
 *
 * @param request ListUsersForGroupRequest
 * @return ListUsersForGroupResponse
 */
ListUsersForGroupResponse Client::listUsersForGroup(const ListUsersForGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersForGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about all Resource Access Management (RAM) users in the recycle bin.
 *
 * @param request ListUsersInRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersInRecycleBinResponse
 */
ListUsersInRecycleBinResponse Client::listUsersInRecycleBinWithOptions(const ListUsersInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilter()) {
    query["Filter"] = request.filter();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
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
 * @summary Queries the basic information about all Resource Access Management (RAM) users in the recycle bin.
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
    query["Marker"] = request.marker();
  }

  if (!!request.hasMaxItems()) {
    query["MaxItems"] = request.maxItems();
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
 * @summary Installs an application.
 *
 * @param request ProvisionApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProvisionApplicationResponse
 */
ProvisionApplicationResponse Client::provisionApplicationWithOptions(const ProvisionApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasScopes()) {
    query["Scopes"] = request.scopes();
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
 * @summary Installs an application.
 *
 * @param request ProvisionApplicationRequest
 * @return ProvisionApplicationResponse
 */
ProvisionApplicationResponse Client::provisionApplication(const ProvisionApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return provisionApplicationWithOptions(request, runtime);
}

/**
 * @summary Installs an external application.
 *
 * @param request ProvisionExternalApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProvisionExternalApplicationResponse
 */
ProvisionExternalApplicationResponse Client::provisionExternalApplicationWithOptions(const ProvisionExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasScopes()) {
    query["Scopes"] = request.scopes();
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
 * @summary Installs an external application.
 *
 * @param request ProvisionExternalApplicationRequest
 * @return ProvisionExternalApplicationResponse
 */
ProvisionExternalApplicationResponse Client::provisionExternalApplication(const ProvisionExternalApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return provisionExternalApplicationWithOptions(request, runtime);
}

/**
 * @summary Removes a client ID from an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to remove the client ID `498469743454717****` from the OIDC IdP named `TestOIDCProvider`.
 *
 * @param request RemoveClientIdFromOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveClientIdFromOIDCProviderResponse
 */
RemoveClientIdFromOIDCProviderResponse Client::removeClientIdFromOIDCProviderWithOptions(const RemoveClientIdFromOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientId()) {
    query["ClientId"] = request.clientId();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.OIDCProviderName();
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
 * @summary Removes a client ID from an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to remove the client ID `498469743454717****` from the OIDC IdP named `TestOIDCProvider`.
 *
 * @param request RemoveClientIdFromOIDCProviderRequest
 * @return RemoveClientIdFromOIDCProviderResponse
 */
RemoveClientIdFromOIDCProviderResponse Client::removeClientIdFromOIDCProvider(const RemoveClientIdFromOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeClientIdFromOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary Removes a fingerprint from an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to remove the fingerprint `6938fd4d98bab03faadb97b34396831e3780****` from the OIDC IdP named `TestOIDCProvider`.
 *
 * @param request RemoveFingerprintFromOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveFingerprintFromOIDCProviderResponse
 */
RemoveFingerprintFromOIDCProviderResponse Client::removeFingerprintFromOIDCProviderWithOptions(const RemoveFingerprintFromOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFingerprint()) {
    query["Fingerprint"] = request.fingerprint();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.OIDCProviderName();
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
 * @summary Removes a fingerprint from an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to remove the fingerprint `6938fd4d98bab03faadb97b34396831e3780****` from the OIDC IdP named `TestOIDCProvider`.
 *
 * @param request RemoveFingerprintFromOIDCProviderRequest
 * @return RemoveFingerprintFromOIDCProviderResponse
 */
RemoveFingerprintFromOIDCProviderResponse Client::removeFingerprintFromOIDCProvider(const RemoveFingerprintFromOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeFingerprintFromOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary Removes a Resource Access Management (RAM) user from a RAM user group.
 *
 * @param request RemoveUserFromGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserFromGroupResponse
 */
RemoveUserFromGroupResponse Client::removeUserFromGroupWithOptions(const RemoveUserFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Removes a Resource Access Management (RAM) user from a RAM user group.
 *
 * @param request RemoveUserFromGroupRequest
 * @return RemoveUserFromGroupResponse
 */
RemoveUserFromGroupResponse Client::removeUserFromGroup(const RemoveUserFromGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserFromGroupWithOptions(request, runtime);
}

/**
 * @summary Restores a specific AccessKey pair that belongs to a Resource Access Management (RAM) user from the recycle bin.
 *
 * @param request RestoreAccessKeyFromRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreAccessKeyFromRecycleBinResponse
 */
RestoreAccessKeyFromRecycleBinResponse Client::restoreAccessKeyFromRecycleBinWithOptions(const RestoreAccessKeyFromRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Restores a specific AccessKey pair that belongs to a Resource Access Management (RAM) user from the recycle bin.
 *
 * @param request RestoreAccessKeyFromRecycleBinRequest
 * @return RestoreAccessKeyFromRecycleBinResponse
 */
RestoreAccessKeyFromRecycleBinResponse Client::restoreAccessKeyFromRecycleBin(const RestoreAccessKeyFromRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreAccessKeyFromRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Restores a specific Resource Access Management (RAM) user from the recycle bin.
 *
 * @param request RestoreUserFromRecycleBinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreUserFromRecycleBinResponse
 */
RestoreUserFromRecycleBinResponse Client::restoreUserFromRecycleBinWithOptions(const RestoreUserFromRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
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
 * @summary Restores a specific Resource Access Management (RAM) user from the recycle bin.
 *
 * @param request RestoreUserFromRecycleBinRequest
 * @return RestoreUserFromRecycleBinResponse
 */
RestoreUserFromRecycleBinResponse Client::restoreUserFromRecycleBin(const RestoreUserFromRecycleBinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreUserFromRecycleBinWithOptions(request, runtime);
}

/**
 * @summary Configures the default domain name for an Alibaba Cloud account.
 *
 * @param request SetDefaultDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultDomainResponse
 */
SetDefaultDomainResponse Client::setDefaultDomainWithOptions(const SetDefaultDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultDomainName()) {
    query["DefaultDomainName"] = request.defaultDomainName();
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
 * @summary Configures the default domain name for an Alibaba Cloud account.
 *
 * @param request SetDefaultDomainRequest
 * @return SetDefaultDomainResponse
 */
SetDefaultDomainResponse Client::setDefaultDomain(const SetDefaultDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultDomainWithOptions(request, runtime);
}

/**
 * @summary Configures the password policy for Resource Access Management (RAM) users.
 *
 * @param request SetPasswordPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetPasswordPolicyResponse
 */
SetPasswordPolicyResponse Client::setPasswordPolicyWithOptions(const SetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHardExpire()) {
    query["HardExpire"] = request.hardExpire();
  }

  if (!!request.hasMaxLoginAttemps()) {
    query["MaxLoginAttemps"] = request.maxLoginAttemps();
  }

  if (!!request.hasMaxPasswordAge()) {
    query["MaxPasswordAge"] = request.maxPasswordAge();
  }

  if (!!request.hasMinimumPasswordDifferentCharacter()) {
    query["MinimumPasswordDifferentCharacter"] = request.minimumPasswordDifferentCharacter();
  }

  if (!!request.hasMinimumPasswordLength()) {
    query["MinimumPasswordLength"] = request.minimumPasswordLength();
  }

  if (!!request.hasPasswordNotContainUserName()) {
    query["PasswordNotContainUserName"] = request.passwordNotContainUserName();
  }

  if (!!request.hasPasswordReusePrevention()) {
    query["PasswordReusePrevention"] = request.passwordReusePrevention();
  }

  if (!!request.hasRequireLowercaseCharacters()) {
    query["RequireLowercaseCharacters"] = request.requireLowercaseCharacters();
  }

  if (!!request.hasRequireNumbers()) {
    query["RequireNumbers"] = request.requireNumbers();
  }

  if (!!request.hasRequireSymbols()) {
    query["RequireSymbols"] = request.requireSymbols();
  }

  if (!!request.hasRequireUppercaseCharacters()) {
    query["RequireUppercaseCharacters"] = request.requireUppercaseCharacters();
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
 * @summary Configures the password policy for Resource Access Management (RAM) users.
 *
 * @param request SetPasswordPolicyRequest
 * @return SetPasswordPolicyResponse
 */
SetPasswordPolicyResponse Client::setPasswordPolicy(const SetPasswordPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setPasswordPolicyWithOptions(request, runtime);
}

/**
 * @summary Configures security preferences for a RAM user.
 *
 * @description ###
 * This topic provides an example on how to enable multi-factor authentication (MFA) only for RAM users who initiated unusual logons.
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
    request.setVerificationTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.verificationTypes(), "VerificationTypes", "json"));
  }

  json query = {};
  if (!!request.hasAllowUserToChangePassword()) {
    query["AllowUserToChangePassword"] = request.allowUserToChangePassword();
  }

  if (!!request.hasAllowUserToLoginWithPasskey()) {
    query["AllowUserToLoginWithPasskey"] = request.allowUserToLoginWithPasskey();
  }

  if (!!request.hasAllowUserToManageAccessKeys()) {
    query["AllowUserToManageAccessKeys"] = request.allowUserToManageAccessKeys();
  }

  if (!!request.hasAllowUserToManageMFADevices()) {
    query["AllowUserToManageMFADevices"] = request.allowUserToManageMFADevices();
  }

  if (!!request.hasAllowUserToManagePersonalDingTalk()) {
    query["AllowUserToManagePersonalDingTalk"] = request.allowUserToManagePersonalDingTalk();
  }

  if (!!request.hasEnableSaveMFATicket()) {
    query["EnableSaveMFATicket"] = request.enableSaveMFATicket();
  }

  if (!!request.hasLoginNetworkMasks()) {
    query["LoginNetworkMasks"] = request.loginNetworkMasks();
  }

  if (!!request.hasLoginSessionDuration()) {
    query["LoginSessionDuration"] = request.loginSessionDuration();
  }

  if (!!request.hasMFAOperationForLogin()) {
    query["MFAOperationForLogin"] = request.MFAOperationForLogin();
  }

  if (!!request.hasOperationForRiskLogin()) {
    query["OperationForRiskLogin"] = request.operationForRiskLogin();
  }

  if (!!request.hasVerificationTypesShrink()) {
    query["VerificationTypes"] = request.verificationTypesShrink();
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
 * @summary Configures security preferences for a RAM user.
 *
 * @description ###
 * This topic provides an example on how to enable multi-factor authentication (MFA) only for RAM users who initiated unusual logons.
 *
 * @param request SetSecurityPreferenceRequest
 * @return SetSecurityPreferenceResponse
 */
SetSecurityPreferenceResponse Client::setSecurityPreference(const SetSecurityPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSecurityPreferenceWithOptions(request, runtime);
}

/**
 * @summary Configures information about user-based single sign-on (SSO).
 *
 * @param request SetUserSsoSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetUserSsoSettingsResponse
 */
SetUserSsoSettingsResponse Client::setUserSsoSettingsWithOptions(const SetUserSsoSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthnSignAlgo()) {
    query["AuthnSignAlgo"] = request.authnSignAlgo();
  }

  if (!!request.hasAuxiliaryDomain()) {
    query["AuxiliaryDomain"] = request.auxiliaryDomain();
  }

  if (!!request.hasMetadataDocument()) {
    query["MetadataDocument"] = request.metadataDocument();
  }

  if (!!request.hasSsoEnabled()) {
    query["SsoEnabled"] = request.ssoEnabled();
  }

  if (!!request.hasSsoLoginWithDomain()) {
    query["SsoLoginWithDomain"] = request.ssoLoginWithDomain();
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
 * @summary Configures information about user-based single sign-on (SSO).
 *
 * @param request SetUserSsoSettingsRequest
 * @return SetUserSsoSettingsResponse
 */
SetUserSsoSettingsResponse Client::setUserSsoSettings(const SetUserSsoSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setUserSsoSettingsWithOptions(request, runtime);
}

/**
 * @summary Binds a mobile phone or email to a Resource Access Management (RAM) user.
 *
 * @param request SetVerificationInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVerificationInfoResponse
 */
SetVerificationInfoResponse Client::setVerificationInfoWithOptions(const SetVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasMobilePhone()) {
    query["MobilePhone"] = request.mobilePhone();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.verifyType();
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
 * @summary Binds a mobile phone or email to a Resource Access Management (RAM) user.
 *
 * @param request SetVerificationInfoRequest
 * @return SetVerificationInfoResponse
 */
SetVerificationInfoResponse Client::setVerificationInfo(const SetVerificationInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVerificationInfoWithOptions(request, runtime);
}

/**
 * @summary Adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourcePrincipalName()) {
    query["ResourcePrincipalName"] = request.resourcePrincipalName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @summary Adds tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbinds a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
 *
 * @param request UnbindMFADeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindMFADeviceResponse
 */
UnbindMFADeviceResponse Client::unbindMFADeviceWithOptions(const UnbindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Unbinds a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
 *
 * @param request UnbindMFADeviceRequest
 * @return UnbindMFADeviceResponse
 */
UnbindMFADeviceResponse Client::unbindMFADevice(const UnbindMFADeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindMFADeviceWithOptions(request, runtime);
}

/**
 * @summary Unbinds a mobile phone or email from a Resource Access Management (RAM) user.
 *
 * @param request UnbindVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindVerificationResponse
 */
UnbindVerificationResponse Client::unbindVerificationWithOptions(const UnbindVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasMobilePhone()) {
    query["MobilePhone"] = request.mobilePhone();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.verifyType();
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
 * @summary Unbinds a mobile phone or email from a Resource Access Management (RAM) user.
 *
 * @param request UnbindVerificationRequest
 * @return UnbindVerificationResponse
 */
UnbindVerificationResponse Client::unbindVerification(const UnbindVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindVerificationWithOptions(request, runtime);
}

/**
 * @summary Removes tags from a resource.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourcePrincipalName()) {
    query["ResourcePrincipalName"] = request.resourcePrincipalName();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
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
 * @summary Removes tags from a resource.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
 *
 * @param request UpdateAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccessKeyResponse
 */
UpdateAccessKeyResponse Client::updateAccessKeyWithOptions(const UpdateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserAccessKeyId()) {
    query["UserAccessKeyId"] = request.userAccessKeyId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Modifies the status of an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
 *
 * @param request UpdateAccessKeyRequest
 * @return UpdateAccessKeyResponse
 */
UpdateAccessKeyResponse Client::updateAccessKey(const UpdateAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccessKeyWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a specified application.
 *
 * @param request UpdateApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplicationWithOptions(const UpdateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasNewAccessTokenValidity()) {
    query["NewAccessTokenValidity"] = request.newAccessTokenValidity();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.newDisplayName();
  }

  if (!!request.hasNewIsMultiTenant()) {
    query["NewIsMultiTenant"] = request.newIsMultiTenant();
  }

  if (!!request.hasNewPredefinedScopes()) {
    query["NewPredefinedScopes"] = request.newPredefinedScopes();
  }

  if (!!request.hasNewRedirectUris()) {
    query["NewRedirectUris"] = request.newRedirectUris();
  }

  if (!!request.hasNewRefreshTokenValidity()) {
    query["NewRefreshTokenValidity"] = request.newRefreshTokenValidity();
  }

  if (!!request.hasNewRequiredScopes()) {
    query["NewRequiredScopes"] = request.newRequiredScopes();
  }

  if (!!request.hasNewSecretRequired()) {
    query["NewSecretRequired"] = request.newSecretRequired();
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
 * @summary Modifies the information about a specified application.
 *
 * @param request UpdateApplicationRequest
 * @return UpdateApplicationResponse
 */
UpdateApplicationResponse Client::updateApplication(const UpdateApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationWithOptions(request, runtime);
}

/**
 * @summary Modifies information about a Resource Access Management (RAM) user group.
 *
 * @param request UpdateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroupWithOptions(const UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasNewComments()) {
    query["NewComments"] = request.newComments();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.newDisplayName();
  }

  if (!!request.hasNewGroupName()) {
    query["NewGroupName"] = request.newGroupName();
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
 * @summary Modifies information about a Resource Access Management (RAM) user group.
 *
 * @param request UpdateGroupRequest
 * @return UpdateGroupResponse
 */
UpdateGroupResponse Client::updateGroup(const UpdateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the console logon configurations of a Resource Access Management (RAM) user.
 *
 * @param request UpdateLoginProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoginProfileResponse
 */
UpdateLoginProfileResponse Client::updateLoginProfileWithOptions(const UpdateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMFABindRequired()) {
    query["MFABindRequired"] = request.MFABindRequired();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasPasswordResetRequired()) {
    query["PasswordResetRequired"] = request.passwordResetRequired();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Modifies the console logon configurations of a Resource Access Management (RAM) user.
 *
 * @param request UpdateLoginProfileRequest
 * @return UpdateLoginProfileResponse
 */
UpdateLoginProfileResponse Client::updateLoginProfile(const UpdateLoginProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoginProfileWithOptions(request, runtime);
}

/**
 * @summary Modifies the description and client IDs of an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to change the description of the OIDC IdP named `TestOIDCProvider` to `This is a new OIDC Provider.`
 *
 * @param request UpdateOIDCProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOIDCProviderResponse
 */
UpdateOIDCProviderResponse Client::updateOIDCProviderWithOptions(const UpdateOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIds()) {
    query["ClientIds"] = request.clientIds();
  }

  if (!!request.hasIssuanceLimitTime()) {
    query["IssuanceLimitTime"] = request.issuanceLimitTime();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.newDescription();
  }

  if (!!request.hasOIDCProviderName()) {
    query["OIDCProviderName"] = request.OIDCProviderName();
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
 * @summary Modifies the description and client IDs of an OpenID Connect (OIDC) identity provider (IdP).
 *
 * @description ###
 * This topic provides an example on how to change the description of the OIDC IdP named `TestOIDCProvider` to `This is a new OIDC Provider.`
 *
 * @param request UpdateOIDCProviderRequest
 * @return UpdateOIDCProviderResponse
 */
UpdateOIDCProviderResponse Client::updateOIDCProvider(const UpdateOIDCProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOIDCProviderWithOptions(request, runtime);
}

/**
 * @summary Updates the name of a passkey.
 *
 * @param request UpdatePasskeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePasskeyResponse
 */
UpdatePasskeyResponse Client::updatePasskeyWithOptions(const UpdatePasskeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPasskeyId()) {
    query["PasskeyId"] = request.passkeyId();
  }

  if (!!request.hasPasskeyName()) {
    query["PasskeyName"] = request.passkeyName();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Updates the name of a passkey.
 *
 * @param request UpdatePasskeyRequest
 * @return UpdatePasskeyResponse
 */
UpdatePasskeyResponse Client::updatePasskey(const UpdatePasskeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePasskeyWithOptions(request, runtime);
}

/**
 * @summary Modifies information about an identity provider (IdP) for role-based single sign-on (SSO).
 *
 * @description This topic provides an example on how to change the description of an IdP named `test-provider` to `This is a new provider.`
 *
 * @param request UpdateSAMLProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSAMLProviderResponse
 */
UpdateSAMLProviderResponse Client::updateSAMLProviderWithOptions(const UpdateSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthnSignAlgo()) {
    query["AuthnSignAlgo"] = request.authnSignAlgo();
  }

  if (!!request.hasNewDescription()) {
    query["NewDescription"] = request.newDescription();
  }

  if (!!request.hasNewEncodedSAMLMetadataDocument()) {
    query["NewEncodedSAMLMetadataDocument"] = request.newEncodedSAMLMetadataDocument();
  }

  if (!!request.hasSAMLProviderName()) {
    query["SAMLProviderName"] = request.SAMLProviderName();
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
 * @summary Modifies information about an identity provider (IdP) for role-based single sign-on (SSO).
 *
 * @description This topic provides an example on how to change the description of an IdP named `test-provider` to `This is a new provider.`
 *
 * @param request UpdateSAMLProviderRequest
 * @return UpdateSAMLProviderResponse
 */
UpdateSAMLProviderResponse Client::updateSAMLProvider(const UpdateSAMLProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSAMLProviderWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a RAM user.
 *
 * @description This topic provides an example to show how to modify the name of a RAM user from `test@example.onaliyun.com` to `new@example.onaliyun.com`.
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewComments()) {
    query["NewComments"] = request.newComments();
  }

  if (!!request.hasNewDisplayName()) {
    query["NewDisplayName"] = request.newDisplayName();
  }

  if (!!request.hasNewEmail()) {
    query["NewEmail"] = request.newEmail();
  }

  if (!!request.hasNewMobilePhone()) {
    query["NewMobilePhone"] = request.newMobilePhone();
  }

  if (!!request.hasNewUserPrincipalName()) {
    query["NewUserPrincipalName"] = request.newUserPrincipalName();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserPrincipalName()) {
    query["UserPrincipalName"] = request.userPrincipalName();
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
 * @summary Modifies the information about a RAM user.
 *
 * @description This topic provides an example to show how to modify the name of a RAM user from `test@example.onaliyun.com` to `new@example.onaliyun.com`.
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