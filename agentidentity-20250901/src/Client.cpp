#include <darabonba/Core.hpp>
#include <alibabacloud/AgentIdentity20250901.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AgentIdentity20250901::Models;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{

AlibabaCloud::AgentIdentity20250901::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("agentidentity", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建应用
 *
 * @param request AddSAMLIdentityProviderCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSAMLIdentityProviderCertificateResponse
 */
AddSAMLIdentityProviderCertificateResponse Client::addSAMLIdentityProviderCertificateWithOptions(const AddSAMLIdentityProviderCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  if (!!request.hasX509Certificate()) {
    body["X509Certificate"] = request.getX509Certificate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddSAMLIdentityProviderCertificate"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSAMLIdentityProviderCertificateResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request AddSAMLIdentityProviderCertificateRequest
 * @return AddSAMLIdentityProviderCertificateResponse
 */
AddSAMLIdentityProviderCertificateResponse Client::addSAMLIdentityProviderCertificate(const AddSAMLIdentityProviderCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSAMLIdentityProviderCertificateWithOptions(request, runtime);
}

/**
 * @summary 策略集关联网关
 *
 * @param request AttachPolicySetToGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachPolicySetToGatewayResponse
 */
AttachPolicySetToGatewayResponse Client::attachPolicySetToGatewayWithOptions(const AttachPolicySetToGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnforcementMode()) {
    body["EnforcementMode"] = request.getEnforcementMode();
  }

  if (!!request.hasGatewayArn()) {
    body["GatewayArn"] = request.getGatewayArn();
  }

  if (!!request.hasGatewayType()) {
    body["GatewayType"] = request.getGatewayType();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AttachPolicySetToGateway"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachPolicySetToGatewayResponse>();
}

/**
 * @summary 策略集关联网关
 *
 * @param request AttachPolicySetToGatewayRequest
 * @return AttachPolicySetToGatewayResponse
 */
AttachPolicySetToGatewayResponse Client::attachPolicySetToGateway(const AttachPolicySetToGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicySetToGatewayWithOptions(request, runtime);
}

/**
 * @summary 创建一个 API 密钥凭证提供商
 *
 * @param request CreateAPIKeyCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAPIKeyCredentialProviderResponse
 */
CreateAPIKeyCredentialProviderResponse Client::createAPIKeyCredentialProviderWithOptions(const CreateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAPIKey()) {
    body["APIKey"] = request.getAPIKey();
  }

  if (!!request.hasAPIKeyCredentialProviderName()) {
    body["APIKeyCredentialProviderName"] = request.getAPIKeyCredentialProviderName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAPIKeyCredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAPIKeyCredentialProviderResponse>();
}

/**
 * @summary 创建一个 API 密钥凭证提供商
 *
 * @param request CreateAPIKeyCredentialProviderRequest
 * @return CreateAPIKeyCredentialProviderResponse
 */
CreateAPIKeyCredentialProviderResponse Client::createAPIKeyCredentialProvider(const CreateAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param request CreateClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientSecretResponse
 */
CreateClientSecretResponse Client::createClientSecretWithOptions(const CreateClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientName()) {
    body["ClientName"] = request.getClientName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateClientSecret"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClientSecretResponse>();
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param request CreateClientSecretRequest
 * @return CreateClientSecretResponse
 */
CreateClientSecretResponse Client::createClientSecret(const CreateClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientSecretWithOptions(request, runtime);
}

/**
 * @summary 创建IdentityProvider
 *
 * @param tmpReq CreateIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProviderWithOptions(const CreateIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateIdentityProviderShrinkRequest request = CreateIdentityProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedAudience()) {
    request.setAllowedAudienceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedAudience(), "AllowedAudience", "json"));
  }

  json body = {};
  if (!!request.hasAllowedAudienceShrink()) {
    body["AllowedAudience"] = request.getAllowedAudienceShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDiscoveryURL()) {
    body["DiscoveryURL"] = request.getDiscoveryURL();
  }

  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.getIdentityProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateIdentityProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIdentityProviderResponse>();
}

/**
 * @summary 创建IdentityProvider
 *
 * @param request CreateIdentityProviderRequest
 * @return CreateIdentityProviderResponse
 */
CreateIdentityProviderResponse Client::createIdentityProvider(const CreateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 创建 OAuth2 凭证提供商
 *
 * @param tmpReq CreateOAuth2CredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOAuth2CredentialProviderResponse
 */
CreateOAuth2CredentialProviderResponse Client::createOAuth2CredentialProviderWithOptions(const CreateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOAuth2CredentialProviderShrinkRequest request = CreateOAuth2CredentialProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOAuth2ProviderConfig()) {
    request.setOAuth2ProviderConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOAuth2ProviderConfig(), "OAuth2ProviderConfig", "json"));
  }

  json body = {};
  if (!!request.hasCallbackURL()) {
    body["CallbackURL"] = request.getCallbackURL();
  }

  if (!!request.hasCredentialProviderVendor()) {
    body["CredentialProviderVendor"] = request.getCredentialProviderVendor();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasOAuth2CredentialProviderName()) {
    body["OAuth2CredentialProviderName"] = request.getOAuth2CredentialProviderName();
  }

  if (!!request.hasOAuth2ProviderConfigShrink()) {
    body["OAuth2ProviderConfig"] = request.getOAuth2ProviderConfigShrink();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOAuth2CredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOAuth2CredentialProviderResponse>();
}

/**
 * @summary 创建 OAuth2 凭证提供商
 *
 * @param request CreateOAuth2CredentialProviderRequest
 * @return CreateOAuth2CredentialProviderResponse
 */
CreateOAuth2CredentialProviderResponse Client::createOAuth2CredentialProvider(const CreateOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 创建一个权限策略
 *
 * @param tmpReq CreatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicyWithOptions(const CreatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePolicyShrinkRequest request = CreatePolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDefinition()) {
    request.setDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDefinition(), "Definition", "json"));
  }

  json body = {};
  if (!!request.hasDefinitionShrink()) {
    body["Definition"] = request.getDefinitionShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePolicy"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicyResponse>();
}

/**
 * @summary 创建一个权限策略
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary 创建一个权限策略集合
 *
 * @param request CreatePolicySetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePolicySetResponse
 */
CreatePolicySetResponse Client::createPolicySetWithOptions(const CreatePolicySetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePolicySet"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePolicySetResponse>();
}

/**
 * @summary 创建一个权限策略集合
 *
 * @param request CreatePolicySetRequest
 * @return CreatePolicySetResponse
 */
CreatePolicySetResponse Client::createPolicySet(const CreatePolicySetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicySetWithOptions(request, runtime);
}

/**
 * @summary 创建Role
 *
 * @param request CreateRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRoleWithOptions(const CreateRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasRoleName()) {
    body["RoleName"] = request.getRoleName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRole"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoleResponse>();
}

/**
 * @summary 创建Role
 *
 * @param request CreateRoleRequest
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRole(const CreateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoleWithOptions(request, runtime);
}

/**
 * @summary 策略集关联网关
 *
 * @param request CreateRoleAssignmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoleAssignmentResponse
 */
CreateRoleAssignmentResponse Client::createRoleAssignmentWithOptions(const CreateRoleAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrincipalName()) {
    body["PrincipalName"] = request.getPrincipalName();
  }

  if (!!request.hasPrincipalType()) {
    body["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasRoleName()) {
    body["RoleName"] = request.getRoleName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRoleAssignment"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoleAssignmentResponse>();
}

/**
 * @summary 策略集关联网关
 *
 * @param request CreateRoleAssignmentRequest
 * @return CreateRoleAssignmentResponse
 */
CreateRoleAssignmentResponse Client::createRoleAssignment(const CreateRoleAssignmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoleAssignmentWithOptions(request, runtime);
}

/**
 * @summary 创建一个凭证库
 *
 * @param tmpReq CreateTokenVaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTokenVaultResponse
 */
CreateTokenVaultResponse Client::createTokenVaultWithOptions(const CreateTokenVaultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTokenVaultShrinkRequest request = CreateTokenVaultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEncryptionConfig()) {
    request.setEncryptionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEncryptionConfig(), "EncryptionConfig", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEncryptionConfigShrink()) {
    body["EncryptionConfig"] = request.getEncryptionConfigShrink();
  }

  if (!!request.hasRoleArn()) {
    body["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateTokenVault"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTokenVaultResponse>();
}

/**
 * @summary 创建一个凭证库
 *
 * @param request CreateTokenVaultRequest
 * @return CreateTokenVaultResponse
 */
CreateTokenVaultResponse Client::createTokenVault(const CreateTokenVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTokenVaultWithOptions(request, runtime);
}

/**
 * @summary 创建用户池用户
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    body["Email"] = request.getEmail();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2025-09-01"},
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
 * @summary 创建用户池用户
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary 创建UserPool
 *
 * @param request CreateUserPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserPoolResponse
 */
CreateUserPoolResponse Client::createUserPoolWithOptions(const CreateUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateUserPool"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserPoolResponse>();
}

/**
 * @summary 创建UserPool
 *
 * @param request CreateUserPoolRequest
 * @return CreateUserPoolResponse
 */
CreateUserPoolResponse Client::createUserPool(const CreateUserPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserPoolWithOptions(request, runtime);
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param tmpReq CreateUserPoolClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserPoolClientResponse
 */
CreateUserPoolClientResponse Client::createUserPoolClientWithOptions(const CreateUserPoolClientRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserPoolClientShrinkRequest request = CreateUserPoolClientShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRedirectURIs()) {
    request.setRedirectURIsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRedirectURIs(), "RedirectURIs", "json"));
  }

  json body = {};
  if (!!request.hasAccessTokenValidity()) {
    body["AccessTokenValidity"] = request.getAccessTokenValidity();
  }

  if (!!request.hasClientName()) {
    body["ClientName"] = request.getClientName();
  }

  if (!!request.hasEnforcePKCE()) {
    body["EnforcePKCE"] = request.getEnforcePKCE();
  }

  if (!!request.hasRedirectURIsShrink()) {
    body["RedirectURIs"] = request.getRedirectURIsShrink();
  }

  if (!!request.hasRefreshTokenValidity()) {
    body["RefreshTokenValidity"] = request.getRefreshTokenValidity();
  }

  if (!!request.hasSecretRequired()) {
    body["SecretRequired"] = request.getSecretRequired();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateUserPoolClient"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserPoolClientResponse>();
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param request CreateUserPoolClientRequest
 * @return CreateUserPoolClientResponse
 */
CreateUserPoolClientResponse Client::createUserPoolClient(const CreateUserPoolClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserPoolClientWithOptions(request, runtime);
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param tmpReq CreateWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkloadIdentityResponse
 */
CreateWorkloadIdentityResponse Client::createWorkloadIdentityWithOptions(const CreateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkloadIdentityShrinkRequest request = CreateWorkloadIdentityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedResourceOAuth2ReturnURLs()) {
    request.setAllowedResourceOAuth2ReturnURLsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedResourceOAuth2ReturnURLs(), "AllowedResourceOAuth2ReturnURLs", "json"));
  }

  json body = {};
  if (!!request.hasAllowedResourceOAuth2ReturnURLsShrink()) {
    body["AllowedResourceOAuth2ReturnURLs"] = request.getAllowedResourceOAuth2ReturnURLsShrink();
  }

  if (!!request.hasCreateRAMRole()) {
    body["CreateRAMRole"] = request.getCreateRAMRole();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.getIdentityProviderName();
  }

  if (!!request.hasRoleArn()) {
    body["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasSessionBindingEnabled()) {
    body["SessionBindingEnabled"] = request.getSessionBindingEnabled();
  }

  if (!!request.hasSourceAgentArn()) {
    body["SourceAgentArn"] = request.getSourceAgentArn();
  }

  if (!!request.hasSourcePlatform()) {
    body["SourcePlatform"] = request.getSourcePlatform();
  }

  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.getWorkloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWorkloadIdentity"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkloadIdentityResponse>();
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param request CreateWorkloadIdentityRequest
 * @return CreateWorkloadIdentityResponse
 */
CreateWorkloadIdentityResponse Client::createWorkloadIdentity(const CreateWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary 删除一个 API 密钥凭证提供商
 *
 * @param request DeleteAPIKeyCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAPIKeyCredentialProviderResponse
 */
DeleteAPIKeyCredentialProviderResponse Client::deleteAPIKeyCredentialProviderWithOptions(const DeleteAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAPIKeyCredentialProviderName()) {
    body["APIKeyCredentialProviderName"] = request.getAPIKeyCredentialProviderName();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAPIKeyCredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAPIKeyCredentialProviderResponse>();
}

/**
 * @summary 删除一个 API 密钥凭证提供商
 *
 * @param request DeleteAPIKeyCredentialProviderRequest
 * @return DeleteAPIKeyCredentialProviderResponse
 */
DeleteAPIKeyCredentialProviderResponse Client::deleteAPIKeyCredentialProvider(const DeleteAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 删除IdentityProvider
 *
 * @param request DeleteClientSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientSecretResponse
 */
DeleteClientSecretResponse Client::deleteClientSecretWithOptions(const DeleteClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientId()) {
    body["ClientId"] = request.getClientId();
  }

  if (!!request.hasClientName()) {
    body["ClientName"] = request.getClientName();
  }

  if (!!request.hasClientSecretId()) {
    body["ClientSecretId"] = request.getClientSecretId();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteClientSecret"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClientSecretResponse>();
}

/**
 * @summary 删除IdentityProvider
 *
 * @param request DeleteClientSecretRequest
 * @return DeleteClientSecretResponse
 */
DeleteClientSecretResponse Client::deleteClientSecret(const DeleteClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientSecretWithOptions(request, runtime);
}

/**
 * @summary 删除IdentityProvider
 *
 * @param request DeleteIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProviderWithOptions(const DeleteIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.getIdentityProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteIdentityProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIdentityProviderResponse>();
}

/**
 * @summary 删除IdentityProvider
 *
 * @param request DeleteIdentityProviderRequest
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProvider(const DeleteIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 删除 OAuth2 凭证提供商
 *
 * @param request DeleteOAuth2CredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOAuth2CredentialProviderResponse
 */
DeleteOAuth2CredentialProviderResponse Client::deleteOAuth2CredentialProviderWithOptions(const DeleteOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOAuth2CredentialProviderName()) {
    body["OAuth2CredentialProviderName"] = request.getOAuth2CredentialProviderName();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteOAuth2CredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOAuth2CredentialProviderResponse>();
}

/**
 * @summary 删除 OAuth2 凭证提供商
 *
 * @param request DeleteOAuth2CredentialProviderRequest
 * @return DeleteOAuth2CredentialProviderResponse
 */
DeleteOAuth2CredentialProviderResponse Client::deleteOAuth2CredentialProvider(const DeleteOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 删除一个权限策略
 *
 * @param request DeletePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicyWithOptions(const DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePolicy"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicyResponse>();
}

/**
 * @summary 删除一个权限策略
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary 删除一个权限策略集合
 *
 * @param request DeletePolicySetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePolicySetResponse
 */
DeletePolicySetResponse Client::deletePolicySetWithOptions(const DeletePolicySetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePolicySet"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePolicySetResponse>();
}

/**
 * @summary 删除一个权限策略集合
 *
 * @param request DeletePolicySetRequest
 * @return DeletePolicySetResponse
 */
DeletePolicySetResponse Client::deletePolicySet(const DeletePolicySetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicySetWithOptions(request, runtime);
}

/**
 * @summary 删除Role
 *
 * @param request DeleteRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRoleWithOptions(const DeleteRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleName()) {
    body["RoleName"] = request.getRoleName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRole"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoleResponse>();
}

/**
 * @summary 删除Role
 *
 * @param request DeleteRoleRequest
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRole(const DeleteRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoleWithOptions(request, runtime);
}

/**
 * @summary 网关取消关联策略集
 *
 * @param request DeleteRoleAssignmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoleAssignmentResponse
 */
DeleteRoleAssignmentResponse Client::deleteRoleAssignmentWithOptions(const DeleteRoleAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrincipalName()) {
    body["PrincipalName"] = request.getPrincipalName();
  }

  if (!!request.hasPrincipalType()) {
    body["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasRoleName()) {
    body["RoleName"] = request.getRoleName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRoleAssignment"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoleAssignmentResponse>();
}

/**
 * @summary 网关取消关联策略集
 *
 * @param request DeleteRoleAssignmentRequest
 * @return DeleteRoleAssignmentResponse
 */
DeleteRoleAssignmentResponse Client::deleteRoleAssignment(const DeleteRoleAssignmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoleAssignmentWithOptions(request, runtime);
}

/**
 * @summary 删除WorkloadIdentity
 *
 * @param request DeleteSAMLIdentityProviderCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSAMLIdentityProviderCertificateResponse
 */
DeleteSAMLIdentityProviderCertificateResponse Client::deleteSAMLIdentityProviderCertificateWithOptions(const DeleteSAMLIdentityProviderCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertificateId()) {
    body["CertificateId"] = request.getCertificateId();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSAMLIdentityProviderCertificate"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSAMLIdentityProviderCertificateResponse>();
}

/**
 * @summary 删除WorkloadIdentity
 *
 * @param request DeleteSAMLIdentityProviderCertificateRequest
 * @return DeleteSAMLIdentityProviderCertificateResponse
 */
DeleteSAMLIdentityProviderCertificateResponse Client::deleteSAMLIdentityProviderCertificate(const DeleteSAMLIdentityProviderCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSAMLIdentityProviderCertificateWithOptions(request, runtime);
}

/**
 * @summary 删除一个指定的凭证库。
 *
 * @param request DeleteTokenVaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTokenVaultResponse
 */
DeleteTokenVaultResponse Client::deleteTokenVaultWithOptions(const DeleteTokenVaultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteTokenVault"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTokenVaultResponse>();
}

/**
 * @summary 删除一个指定的凭证库。
 *
 * @param request DeleteTokenVaultRequest
 * @return DeleteTokenVaultResponse
 */
DeleteTokenVaultResponse Client::deleteTokenVault(const DeleteTokenVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTokenVaultWithOptions(request, runtime);
}

/**
 * @summary 删除User
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2025-09-01"},
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
 * @summary 删除User
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary 删除UserPool
 *
 * @param request DeleteUserPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserPoolResponse
 */
DeleteUserPoolResponse Client::deleteUserPoolWithOptions(const DeleteUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteUserPool"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserPoolResponse>();
}

/**
 * @summary 删除UserPool
 *
 * @param request DeleteUserPoolRequest
 * @return DeleteUserPoolResponse
 */
DeleteUserPoolResponse Client::deleteUserPool(const DeleteUserPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserPoolWithOptions(request, runtime);
}

/**
 * @summary 删除WorkloadIdentity
 *
 * @param request DeleteUserPoolClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserPoolClientResponse
 */
DeleteUserPoolClientResponse Client::deleteUserPoolClientWithOptions(const DeleteUserPoolClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientName()) {
    body["ClientName"] = request.getClientName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteUserPoolClient"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserPoolClientResponse>();
}

/**
 * @summary 删除WorkloadIdentity
 *
 * @param request DeleteUserPoolClientRequest
 * @return DeleteUserPoolClientResponse
 */
DeleteUserPoolClientResponse Client::deleteUserPoolClient(const DeleteUserPoolClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserPoolClientWithOptions(request, runtime);
}

/**
 * @summary 删除WorkloadIdentity
 *
 * @param request DeleteWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkloadIdentityResponse
 */
DeleteWorkloadIdentityResponse Client::deleteWorkloadIdentityWithOptions(const DeleteWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.getWorkloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWorkloadIdentity"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkloadIdentityResponse>();
}

/**
 * @summary 删除WorkloadIdentity
 *
 * @param request DeleteWorkloadIdentityRequest
 * @return DeleteWorkloadIdentityResponse
 */
DeleteWorkloadIdentityResponse Client::deleteWorkloadIdentity(const DeleteWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary 网关取消关联策略集
 *
 * @param request DetachPolicySetFromGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachPolicySetFromGatewayResponse
 */
DetachPolicySetFromGatewayResponse Client::detachPolicySetFromGatewayWithOptions(const DetachPolicySetFromGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGatewayArn()) {
    body["GatewayArn"] = request.getGatewayArn();
  }

  if (!!request.hasGatewayType()) {
    body["GatewayType"] = request.getGatewayType();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DetachPolicySetFromGateway"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachPolicySetFromGatewayResponse>();
}

/**
 * @summary 网关取消关联策略集
 *
 * @param request DetachPolicySetFromGatewayRequest
 * @return DetachPolicySetFromGatewayResponse
 */
DetachPolicySetFromGatewayResponse Client::detachPolicySetFromGateway(const DetachPolicySetFromGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicySetFromGatewayWithOptions(request, runtime);
}

/**
 * @summary 查询一个 API 密钥凭证提供商
 *
 * @param request GetAPIKeyCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAPIKeyCredentialProviderResponse
 */
GetAPIKeyCredentialProviderResponse Client::getAPIKeyCredentialProviderWithOptions(const GetAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAPIKeyCredentialProviderName()) {
    body["APIKeyCredentialProviderName"] = request.getAPIKeyCredentialProviderName();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAPIKeyCredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAPIKeyCredentialProviderResponse>();
}

/**
 * @summary 查询一个 API 密钥凭证提供商
 *
 * @param request GetAPIKeyCredentialProviderRequest
 * @return GetAPIKeyCredentialProviderResponse
 */
GetAPIKeyCredentialProviderResponse Client::getAPIKeyCredentialProvider(const GetAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 查询网关策略配置
 *
 * @param request GetGatewayPolicyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGatewayPolicyConfigResponse
 */
GetGatewayPolicyConfigResponse Client::getGatewayPolicyConfigWithOptions(const GetGatewayPolicyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGatewayArn()) {
    body["GatewayArn"] = request.getGatewayArn();
  }

  if (!!request.hasGatewayType()) {
    body["GatewayType"] = request.getGatewayType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetGatewayPolicyConfig"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGatewayPolicyConfigResponse>();
}

/**
 * @summary 查询网关策略配置
 *
 * @param request GetGatewayPolicyConfigRequest
 * @return GetGatewayPolicyConfigResponse
 */
GetGatewayPolicyConfigResponse Client::getGatewayPolicyConfig(const GetGatewayPolicyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGatewayPolicyConfigWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param request GetIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProviderWithOptions(const GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.getIdentityProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetIdentityProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request GetIdentityProviderRequest
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProvider(const GetIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 获取用户池登录相关配置
 *
 * @param request GetLoginPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginPreferenceResponse
 */
GetLoginPreferenceResponse Client::getLoginPreferenceWithOptions(const GetLoginPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetLoginPreference"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoginPreferenceResponse>();
}

/**
 * @summary 获取用户池登录相关配置
 *
 * @param request GetLoginPreferenceRequest
 * @return GetLoginPreferenceResponse
 */
GetLoginPreferenceResponse Client::getLoginPreference(const GetLoginPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginPreferenceWithOptions(request, runtime);
}

/**
 * @summary 查询 OAuth2 凭证提供商
 *
 * @param request GetOAuth2CredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOAuth2CredentialProviderResponse
 */
GetOAuth2CredentialProviderResponse Client::getOAuth2CredentialProviderWithOptions(const GetOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOAuth2CredentialProviderName()) {
    body["OAuth2CredentialProviderName"] = request.getOAuth2CredentialProviderName();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetOAuth2CredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOAuth2CredentialProviderResponse>();
}

/**
 * @summary 查询 OAuth2 凭证提供商
 *
 * @param request GetOAuth2CredentialProviderRequest
 * @return GetOAuth2CredentialProviderResponse
 */
GetOAuth2CredentialProviderResponse Client::getOAuth2CredentialProvider(const GetOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 查询一个 权限策略
 *
 * @param request GetPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicyWithOptions(const GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPolicy"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicyResponse>();
}

/**
 * @summary 查询一个 权限策略
 *
 * @param request GetPolicyRequest
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const GetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询一个 权限策略集合
 *
 * @param request GetPolicySetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPolicySetResponse
 */
GetPolicySetResponse Client::getPolicySetWithOptions(const GetPolicySetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetPolicySet"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPolicySetResponse>();
}

/**
 * @summary 查询一个 权限策略集合
 *
 * @param request GetPolicySetRequest
 * @return GetPolicySetResponse
 */
GetPolicySetResponse Client::getPolicySet(const GetPolicySetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicySetWithOptions(request, runtime);
}

/**
 * @summary 获取Role
 *
 * @param request GetRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRoleWithOptions(const GetRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleName()) {
    body["RoleName"] = request.getRoleName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRole"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoleResponse>();
}

/**
 * @summary 获取Role
 *
 * @param request GetRoleRequest
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRole(const GetRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoleWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param request GetSAMLIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSAMLIdentityProviderResponse
 */
GetSAMLIdentityProviderResponse Client::getSAMLIdentityProviderWithOptions(const GetSAMLIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSAMLIdentityProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSAMLIdentityProviderResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request GetSAMLIdentityProviderRequest
 * @return GetSAMLIdentityProviderResponse
 */
GetSAMLIdentityProviderResponse Client::getSAMLIdentityProvider(const GetSAMLIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSAMLIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param request GetSAMLServiceProviderInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSAMLServiceProviderInfoResponse
 */
GetSAMLServiceProviderInfoResponse Client::getSAMLServiceProviderInfoWithOptions(const GetSAMLServiceProviderInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSAMLServiceProviderInfo"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSAMLServiceProviderInfoResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request GetSAMLServiceProviderInfoRequest
 * @return GetSAMLServiceProviderInfoResponse
 */
GetSAMLServiceProviderInfoResponse Client::getSAMLServiceProviderInfo(const GetSAMLServiceProviderInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSAMLServiceProviderInfoWithOptions(request, runtime);
}

/**
 * @summary 获取指定的身份提供商
 *
 * @param request GetSpecificIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSpecificIdentityProviderResponse
 */
GetSpecificIdentityProviderResponse Client::getSpecificIdentityProviderWithOptions(const GetSpecificIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentityProviderType()) {
    body["IdentityProviderType"] = request.getIdentityProviderType();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSpecificIdentityProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSpecificIdentityProviderResponse>();
}

/**
 * @summary 获取指定的身份提供商
 *
 * @param request GetSpecificIdentityProviderRequest
 * @return GetSpecificIdentityProviderResponse
 */
GetSpecificIdentityProviderResponse Client::getSpecificIdentityProvider(const GetSpecificIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSpecificIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 获取指定凭证库的详细配置。
 *
 * @param request GetTokenVaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenVaultResponse
 */
GetTokenVaultResponse Client::getTokenVaultWithOptions(const GetTokenVaultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTokenVault"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenVaultResponse>();
}

/**
 * @summary 获取指定凭证库的详细配置。
 *
 * @param request GetTokenVaultRequest
 * @return GetTokenVaultResponse
 */
GetTokenVaultResponse Client::getTokenVault(const GetTokenVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTokenVaultWithOptions(request, runtime);
}

/**
 * @summary 获取用户
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2025-09-01"},
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
 * @summary 获取用户
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary 获取UserPool
 *
 * @param request GetUserPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserPoolResponse
 */
GetUserPoolResponse Client::getUserPoolWithOptions(const GetUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetUserPool"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserPoolResponse>();
}

/**
 * @summary 获取UserPool
 *
 * @param request GetUserPoolRequest
 * @return GetUserPoolResponse
 */
GetUserPoolResponse Client::getUserPool(const GetUserPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserPoolWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param request GetUserPoolClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserPoolClientResponse
 */
GetUserPoolClientResponse Client::getUserPoolClientWithOptions(const GetUserPoolClientRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientName()) {
    body["ClientName"] = request.getClientName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetUserPoolClient"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserPoolClientResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request GetUserPoolClientRequest
 * @return GetUserPoolClientResponse
 */
GetUserPoolClientResponse Client::getUserPoolClient(const GetUserPoolClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserPoolClientWithOptions(request, runtime);
}

/**
 * @summary 获取UserPool
 *
 * @param request GetUserPoolSyncJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserPoolSyncJobResponse
 */
GetUserPoolSyncJobResponse Client::getUserPoolSyncJobWithOptions(const GetUserPoolSyncJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSynchronizationJobId()) {
    body["SynchronizationJobId"] = request.getSynchronizationJobId();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetUserPoolSyncJob"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserPoolSyncJobResponse>();
}

/**
 * @summary 获取UserPool
 *
 * @param request GetUserPoolSyncJobRequest
 * @return GetUserPoolSyncJobResponse
 */
GetUserPoolSyncJobResponse Client::getUserPoolSyncJob(const GetUserPoolSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserPoolSyncJobWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param request GetWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkloadIdentityResponse
 */
GetWorkloadIdentityResponse Client::getWorkloadIdentityWithOptions(const GetWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.getWorkloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetWorkloadIdentity"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkloadIdentityResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request GetWorkloadIdentityRequest
 * @return GetWorkloadIdentityResponse
 */
GetWorkloadIdentityResponse Client::getWorkloadIdentity(const GetWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary 列出 API 密钥凭证提供商
 *
 * @param request ListAPIKeyCredentialProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAPIKeyCredentialProvidersResponse
 */
ListAPIKeyCredentialProvidersResponse Client::listAPIKeyCredentialProvidersWithOptions(const ListAPIKeyCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAPIKeyCredentialProviders"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAPIKeyCredentialProvidersResponse>();
}

/**
 * @summary 列出 API 密钥凭证提供商
 *
 * @param request ListAPIKeyCredentialProvidersRequest
 * @return ListAPIKeyCredentialProvidersResponse
 */
ListAPIKeyCredentialProvidersResponse Client::listAPIKeyCredentialProviders(const ListAPIKeyCredentialProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAPIKeyCredentialProvidersWithOptions(request, runtime);
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListClientSecretsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClientSecretsResponse
 */
ListClientSecretsResponse Client::listClientSecretsWithOptions(const ListClientSecretsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientName()) {
    body["ClientName"] = request.getClientName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListClientSecrets"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClientSecretsResponse>();
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListClientSecretsRequest
 * @return ListClientSecretsResponse
 */
ListClientSecretsResponse Client::listClientSecrets(const ListClientSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientSecretsWithOptions(request, runtime);
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListIdentityProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProvidersWithOptions(const ListIdentityProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListIdentityProviders"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdentityProvidersResponse>();
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListIdentityProvidersRequest
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProviders(const ListIdentityProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentityProvidersWithOptions(request, runtime);
}

/**
 * @summary 列出 OAuth2 凭证提供商
 *
 * @param request ListOAuth2CredentialProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOAuth2CredentialProvidersResponse
 */
ListOAuth2CredentialProvidersResponse Client::listOAuth2CredentialProvidersWithOptions(const ListOAuth2CredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListOAuth2CredentialProviders"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOAuth2CredentialProvidersResponse>();
}

/**
 * @summary 列出 OAuth2 凭证提供商
 *
 * @param request ListOAuth2CredentialProvidersRequest
 * @return ListOAuth2CredentialProvidersResponse
 */
ListOAuth2CredentialProvidersResponse Client::listOAuth2CredentialProviders(const ListOAuth2CredentialProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOAuth2CredentialProvidersWithOptions(request, runtime);
}

/**
 * @summary 列出权限策略
 *
 * @param request ListPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPoliciesWithOptions(const ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListPolicies"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPoliciesResponse>();
}

/**
 * @summary 列出权限策略
 *
 * @param request ListPoliciesRequest
 * @return ListPoliciesResponse
 */
ListPoliciesResponse Client::listPolicies(const ListPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPoliciesWithOptions(request, runtime);
}

/**
 * @summary 列出网关策略配置
 *
 * @param request ListPolicySetAttachedGatewaysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicySetAttachedGatewaysResponse
 */
ListPolicySetAttachedGatewaysResponse Client::listPolicySetAttachedGatewaysWithOptions(const ListPolicySetAttachedGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGatewayType()) {
    body["GatewayType"] = request.getGatewayType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListPolicySetAttachedGateways"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicySetAttachedGatewaysResponse>();
}

/**
 * @summary 列出网关策略配置
 *
 * @param request ListPolicySetAttachedGatewaysRequest
 * @return ListPolicySetAttachedGatewaysResponse
 */
ListPolicySetAttachedGatewaysResponse Client::listPolicySetAttachedGateways(const ListPolicySetAttachedGatewaysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicySetAttachedGatewaysWithOptions(request, runtime);
}

/**
 * @summary 列出权限策略集合
 *
 * @param request ListPolicySetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPolicySetsResponse
 */
ListPolicySetsResponse Client::listPolicySetsWithOptions(const ListPolicySetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListPolicySets"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPolicySetsResponse>();
}

/**
 * @summary 列出权限策略集合
 *
 * @param request ListPolicySetsRequest
 * @return ListPolicySetsResponse
 */
ListPolicySetsResponse Client::listPolicySets(const ListPolicySetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPolicySetsWithOptions(request, runtime);
}

/**
 * @summary 列出网关策略配置
 *
 * @param request ListRoleAssignmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoleAssignmentsResponse
 */
ListRoleAssignmentsResponse Client::listRoleAssignmentsWithOptions(const ListRoleAssignmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPrincipalName()) {
    body["PrincipalName"] = request.getPrincipalName();
  }

  if (!!request.hasPrincipalType()) {
    body["PrincipalType"] = request.getPrincipalType();
  }

  if (!!request.hasRoleName()) {
    body["RoleName"] = request.getRoleName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListRoleAssignments"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRoleAssignmentsResponse>();
}

/**
 * @summary 列出网关策略配置
 *
 * @param request ListRoleAssignmentsRequest
 * @return ListRoleAssignmentsResponse
 */
ListRoleAssignmentsResponse Client::listRoleAssignments(const ListRoleAssignmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoleAssignmentsWithOptions(request, runtime);
}

/**
 * @summary 列出Roles
 *
 * @param request ListRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @summary 列出Roles
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRolesWithOptions(request, runtime);
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListSAMLIdentityProviderCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSAMLIdentityProviderCertificatesResponse
 */
ListSAMLIdentityProviderCertificatesResponse Client::listSAMLIdentityProviderCertificatesWithOptions(const ListSAMLIdentityProviderCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSAMLIdentityProviderCertificates"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSAMLIdentityProviderCertificatesResponse>();
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListSAMLIdentityProviderCertificatesRequest
 * @return ListSAMLIdentityProviderCertificatesResponse
 */
ListSAMLIdentityProviderCertificatesResponse Client::listSAMLIdentityProviderCertificates(const ListSAMLIdentityProviderCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSAMLIdentityProviderCertificatesWithOptions(request, runtime);
}

/**
 * @summary 分页列出账户下所有的 API 密钥凭证
 *
 * @param request ListTokenVaultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTokenVaultsResponse
 */
ListTokenVaultsResponse Client::listTokenVaultsWithOptions(const ListTokenVaultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTokenVaults"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTokenVaultsResponse>();
}

/**
 * @summary 分页列出账户下所有的 API 密钥凭证
 *
 * @param request ListTokenVaultsRequest
 * @return ListTokenVaultsResponse
 */
ListTokenVaultsResponse Client::listTokenVaults(const ListTokenVaultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTokenVaultsWithOptions(request, runtime);
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListUserPoolClientsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserPoolClientsResponse
 */
ListUserPoolClientsResponse Client::listUserPoolClientsWithOptions(const ListUserPoolClientsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListUserPoolClients"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserPoolClientsResponse>();
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListUserPoolClientsRequest
 * @return ListUserPoolClientsResponse
 */
ListUserPoolClientsResponse Client::listUserPoolClients(const ListUserPoolClientsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserPoolClientsWithOptions(request, runtime);
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListUserPoolSyncJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserPoolSyncJobsResponse
 */
ListUserPoolSyncJobsResponse Client::listUserPoolSyncJobsWithOptions(const ListUserPoolSyncJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListUserPoolSyncJobs"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserPoolSyncJobsResponse>();
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListUserPoolSyncJobsRequest
 * @return ListUserPoolSyncJobsResponse
 */
ListUserPoolSyncJobsResponse Client::listUserPoolSyncJobs(const ListUserPoolSyncJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserPoolSyncJobsWithOptions(request, runtime);
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListUserPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserPoolsResponse
 */
ListUserPoolsResponse Client::listUserPoolsWithOptions(const ListUserPoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListUserPools"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserPoolsResponse>();
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListUserPoolsRequest
 * @return ListUserPoolsResponse
 */
ListUserPoolsResponse Client::listUserPools(const ListUserPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserPoolsWithOptions(request, runtime);
}

/**
 * @summary 列出用户
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2025-09-01"},
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
 * @summary 列出用户
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListWorkloadIdentitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkloadIdentitiesResponse
 */
ListWorkloadIdentitiesResponse Client::listWorkloadIdentitiesWithOptions(const ListWorkloadIdentitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListWorkloadIdentities"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkloadIdentitiesResponse>();
}

/**
 * @summary 列出IdentityProvider
 *
 * @param request ListWorkloadIdentitiesRequest
 * @return ListWorkloadIdentitiesResponse
 */
ListWorkloadIdentitiesResponse Client::listWorkloadIdentities(const ListWorkloadIdentitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkloadIdentitiesWithOptions(request, runtime);
}

/**
 * @summary 创建UserPool
 *
 * @param request RunUserPoolSyncJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunUserPoolSyncJobResponse
 */
RunUserPoolSyncJobResponse Client::runUserPoolSyncJobWithOptions(const RunUserPoolSyncJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentityProviderType()) {
    body["IdentityProviderType"] = request.getIdentityProviderType();
  }

  if (!!request.hasMaxSyncUsers()) {
    body["MaxSyncUsers"] = request.getMaxSyncUsers();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunUserPoolSyncJob"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunUserPoolSyncJobResponse>();
}

/**
 * @summary 创建UserPool
 *
 * @param request RunUserPoolSyncJobRequest
 * @return RunUserPoolSyncJobResponse
 */
RunUserPoolSyncJobResponse Client::runUserPoolSyncJob(const RunUserPoolSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runUserPoolSyncJobWithOptions(request, runtime);
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param tmpReq SetSAMLIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSAMLIdentityProviderResponse
 */
SetSAMLIdentityProviderResponse Client::setSAMLIdentityProviderWithOptions(const SetSAMLIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetSAMLIdentityProviderShrinkRequest request = SetSAMLIdentityProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasX509Certificates()) {
    request.setX509CertificatesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getX509Certificates(), "X509Certificates", "json"));
  }

  json body = {};
  if (!!request.hasEntityId()) {
    body["EntityId"] = request.getEntityId();
  }

  if (!!request.hasJITProvisionStatus()) {
    body["JITProvisionStatus"] = request.getJITProvisionStatus();
  }

  if (!!request.hasJITUpdateStatus()) {
    body["JITUpdateStatus"] = request.getJITUpdateStatus();
  }

  if (!!request.hasLoginURL()) {
    body["LoginURL"] = request.getLoginURL();
  }

  if (!!request.hasSAMLBindingType()) {
    body["SAMLBindingType"] = request.getSAMLBindingType();
  }

  if (!!request.hasSSOStatus()) {
    body["SSOStatus"] = request.getSSOStatus();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  if (!!request.hasX509CertificatesShrink()) {
    body["X509Certificates"] = request.getX509CertificatesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetSAMLIdentityProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSAMLIdentityProviderResponse>();
}

/**
 * @summary 创建WorkloadIdentity
 *
 * @param request SetSAMLIdentityProviderRequest
 * @return SetSAMLIdentityProviderResponse
 */
SetSAMLIdentityProviderResponse Client::setSAMLIdentityProvider(const SetSAMLIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSAMLIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 通用IdP配置
 *
 * @param request SetSpecificIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSpecificIdentityProviderResponse
 */
SetSpecificIdentityProviderResponse Client::setSpecificIdentityProviderWithOptions(const SetSpecificIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIDPMetadata()) {
    body["IDPMetadata"] = request.getIDPMetadata();
  }

  if (!!request.hasIdentityProviderType()) {
    body["IdentityProviderType"] = request.getIdentityProviderType();
  }

  if (!!request.hasSSOStatus()) {
    body["SSOStatus"] = request.getSSOStatus();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetSpecificIdentityProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSpecificIdentityProviderResponse>();
}

/**
 * @summary 通用IdP配置
 *
 * @param request SetSpecificIdentityProviderRequest
 * @return SetSpecificIdentityProviderResponse
 */
SetSpecificIdentityProviderResponse Client::setSpecificIdentityProvider(const SetSpecificIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSpecificIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 修改用户登录密码
 *
 * @param request SetUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetUserPasswordResponse
 */
SetUserPasswordResponse Client::setUserPasswordWithOptions(const SetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGenerateRandomPassword()) {
    body["GenerateRandomPassword"] = request.getGenerateRandomPassword();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetUserPassword"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetUserPasswordResponse>();
}

/**
 * @summary 修改用户登录密码
 *
 * @param request SetUserPasswordRequest
 * @return SetUserPasswordResponse
 */
SetUserPasswordResponse Client::setUserPassword(const SetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setUserPasswordWithOptions(request, runtime);
}

/**
 * @summary 更新一个 API 密钥凭证提供商
 *
 * @param request UpdateAPIKeyCredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAPIKeyCredentialProviderResponse
 */
UpdateAPIKeyCredentialProviderResponse Client::updateAPIKeyCredentialProviderWithOptions(const UpdateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAPIKey()) {
    body["APIKey"] = request.getAPIKey();
  }

  if (!!request.hasAPIKeyCredentialProviderName()) {
    body["APIKeyCredentialProviderName"] = request.getAPIKeyCredentialProviderName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAPIKeyCredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAPIKeyCredentialProviderResponse>();
}

/**
 * @summary 更新一个 API 密钥凭证提供商
 *
 * @param request UpdateAPIKeyCredentialProviderRequest
 * @return UpdateAPIKeyCredentialProviderResponse
 */
UpdateAPIKeyCredentialProviderResponse Client::updateAPIKeyCredentialProvider(const UpdateAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 查询网关策略配置
 *
 * @param request UpdateGatewayPolicyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGatewayPolicyConfigResponse
 */
UpdateGatewayPolicyConfigResponse Client::updateGatewayPolicyConfigWithOptions(const UpdateGatewayPolicyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnforcementMode()) {
    body["EnforcementMode"] = request.getEnforcementMode();
  }

  if (!!request.hasGatewayArn()) {
    body["GatewayArn"] = request.getGatewayArn();
  }

  if (!!request.hasGatewayType()) {
    body["GatewayType"] = request.getGatewayType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateGatewayPolicyConfig"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGatewayPolicyConfigResponse>();
}

/**
 * @summary 查询网关策略配置
 *
 * @param request UpdateGatewayPolicyConfigRequest
 * @return UpdateGatewayPolicyConfigResponse
 */
UpdateGatewayPolicyConfigResponse Client::updateGatewayPolicyConfig(const UpdateGatewayPolicyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayPolicyConfigWithOptions(request, runtime);
}

/**
 * @summary 更新IdentityProvider
 *
 * @param tmpReq UpdateIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProviderWithOptions(const UpdateIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateIdentityProviderShrinkRequest request = UpdateIdentityProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedAudience()) {
    request.setAllowedAudienceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedAudience(), "AllowedAudience", "json"));
  }

  json body = {};
  if (!!request.hasAllowedAudienceShrink()) {
    body["AllowedAudience"] = request.getAllowedAudienceShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDiscoveryURL()) {
    body["DiscoveryURL"] = request.getDiscoveryURL();
  }

  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.getIdentityProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateIdentityProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIdentityProviderResponse>();
}

/**
 * @summary 更新IdentityProvider
 *
 * @param request UpdateIdentityProviderRequest
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProvider(const UpdateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 更新用户池登录配置
 *
 * @param tmpReq UpdateLoginPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoginPreferenceResponse
 */
UpdateLoginPreferenceResponse Client::updateLoginPreferenceWithOptions(const UpdateLoginPreferenceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLoginPreferenceShrinkRequest request = UpdateLoginPreferenceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLoginPreference()) {
    request.setLoginPreferenceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLoginPreference(), "LoginPreference", "json"));
  }

  json query = {};
  if (!!request.hasLoginPreferenceShrink()) {
    query["LoginPreference"] = request.getLoginPreferenceShrink();
  }

  json body = {};
  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLoginPreference"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoginPreferenceResponse>();
}

/**
 * @summary 更新用户池登录配置
 *
 * @param request UpdateLoginPreferenceRequest
 * @return UpdateLoginPreferenceResponse
 */
UpdateLoginPreferenceResponse Client::updateLoginPreference(const UpdateLoginPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoginPreferenceWithOptions(request, runtime);
}

/**
 * @summary 修改 OAuth2 凭证提供商
 *
 * @param tmpReq UpdateOAuth2CredentialProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOAuth2CredentialProviderResponse
 */
UpdateOAuth2CredentialProviderResponse Client::updateOAuth2CredentialProviderWithOptions(const UpdateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateOAuth2CredentialProviderShrinkRequest request = UpdateOAuth2CredentialProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOAuth2ProviderConfig()) {
    request.setOAuth2ProviderConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOAuth2ProviderConfig(), "OAuth2ProviderConfig", "json"));
  }

  json body = {};
  if (!!request.hasCallbackURL()) {
    body["CallbackURL"] = request.getCallbackURL();
  }

  if (!!request.hasCredentialProviderVendor()) {
    body["CredentialProviderVendor"] = request.getCredentialProviderVendor();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasOAuth2CredentialProviderName()) {
    body["OAuth2CredentialProviderName"] = request.getOAuth2CredentialProviderName();
  }

  if (!!request.hasOAuth2ProviderConfigShrink()) {
    body["OAuth2ProviderConfig"] = request.getOAuth2ProviderConfigShrink();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateOAuth2CredentialProvider"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOAuth2CredentialProviderResponse>();
}

/**
 * @summary 修改 OAuth2 凭证提供商
 *
 * @param request UpdateOAuth2CredentialProviderRequest
 * @return UpdateOAuth2CredentialProviderResponse
 */
UpdateOAuth2CredentialProviderResponse Client::updateOAuth2CredentialProvider(const UpdateOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary 更新一个权限策略
 *
 * @param tmpReq UpdatePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolicyResponse
 */
UpdatePolicyResponse Client::updatePolicyWithOptions(const UpdatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePolicyShrinkRequest request = UpdatePolicyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDefinition()) {
    request.setDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDefinition(), "Definition", "json"));
  }

  json body = {};
  if (!!request.hasDefinitionShrink()) {
    body["Definition"] = request.getDefinitionShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdatePolicy"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolicyResponse>();
}

/**
 * @summary 更新一个权限策略
 *
 * @param request UpdatePolicyRequest
 * @return UpdatePolicyResponse
 */
UpdatePolicyResponse Client::updatePolicy(const UpdatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolicyWithOptions(request, runtime);
}

/**
 * @summary 更新一个权限策略集合
 *
 * @param request UpdatePolicySetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePolicySetResponse
 */
UpdatePolicySetResponse Client::updatePolicySetWithOptions(const UpdatePolicySetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasPolicySetName()) {
    body["PolicySetName"] = request.getPolicySetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdatePolicySet"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePolicySetResponse>();
}

/**
 * @summary 更新一个权限策略集合
 *
 * @param request UpdatePolicySetRequest
 * @return UpdatePolicySetResponse
 */
UpdatePolicySetResponse Client::updatePolicySet(const UpdatePolicySetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolicySetWithOptions(request, runtime);
}

/**
 * @summary 更新Role
 *
 * @param request UpdateRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRoleWithOptions(const UpdateRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasRoleName()) {
    body["RoleName"] = request.getRoleName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateRole"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoleResponse>();
}

/**
 * @summary 更新Role
 *
 * @param request UpdateRoleRequest
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRole(const UpdateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRoleWithOptions(request, runtime);
}

/**
 * @summary 更新凭证库。
 *
 * @param request UpdateTokenVaultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTokenVaultResponse
 */
UpdateTokenVaultResponse Client::updateTokenVaultWithOptions(const UpdateTokenVaultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasRoleArn()) {
    body["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasTokenVaultName()) {
    body["TokenVaultName"] = request.getTokenVaultName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateTokenVault"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTokenVaultResponse>();
}

/**
 * @summary 更新凭证库。
 *
 * @param request UpdateTokenVaultRequest
 * @return UpdateTokenVaultResponse
 */
UpdateTokenVaultResponse Client::updateTokenVault(const UpdateTokenVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTokenVaultWithOptions(request, runtime);
}

/**
 * @summary 更新用户池用户
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    body["Email"] = request.getEmail();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2025-09-01"},
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
 * @summary 更新用户池用户
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @summary 更新IdentityProvider
 *
 * @param request UpdateUserPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserPoolResponse
 */
UpdateUserPoolResponse Client::updateUserPoolWithOptions(const UpdateUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUserPool"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserPoolResponse>();
}

/**
 * @summary 更新IdentityProvider
 *
 * @param request UpdateUserPoolRequest
 * @return UpdateUserPoolResponse
 */
UpdateUserPoolResponse Client::updateUserPool(const UpdateUserPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserPoolWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param tmpReq UpdateUserPoolClientRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserPoolClientResponse
 */
UpdateUserPoolClientResponse Client::updateUserPoolClientWithOptions(const UpdateUserPoolClientRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateUserPoolClientShrinkRequest request = UpdateUserPoolClientShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRedirectURIs()) {
    request.setRedirectURIsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRedirectURIs(), "RedirectURIs", "json"));
  }

  json body = {};
  if (!!request.hasAccessTokenValidity()) {
    body["AccessTokenValidity"] = request.getAccessTokenValidity();
  }

  if (!!request.hasClientName()) {
    body["ClientName"] = request.getClientName();
  }

  if (!!request.hasEnforcePKCE()) {
    body["EnforcePKCE"] = request.getEnforcePKCE();
  }

  if (!!request.hasRedirectURIsShrink()) {
    body["RedirectURIs"] = request.getRedirectURIsShrink();
  }

  if (!!request.hasRefreshTokenValidity()) {
    body["RefreshTokenValidity"] = request.getRefreshTokenValidity();
  }

  if (!!request.hasSecretRequired()) {
    body["SecretRequired"] = request.getSecretRequired();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUserPoolClient"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserPoolClientResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request UpdateUserPoolClientRequest
 * @return UpdateUserPoolClientResponse
 */
UpdateUserPoolClientResponse Client::updateUserPoolClient(const UpdateUserPoolClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserPoolClientWithOptions(request, runtime);
}

/**
 * @summary 创建应用
 *
 * @param tmpReq UpdateWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkloadIdentityResponse
 */
UpdateWorkloadIdentityResponse Client::updateWorkloadIdentityWithOptions(const UpdateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkloadIdentityShrinkRequest request = UpdateWorkloadIdentityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedResourceOAuth2ReturnURLs()) {
    request.setAllowedResourceOAuth2ReturnURLsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedResourceOAuth2ReturnURLs(), "AllowedResourceOAuth2ReturnURLs", "json"));
  }

  json body = {};
  if (!!request.hasAllowedResourceOAuth2ReturnURLsShrink()) {
    body["AllowedResourceOAuth2ReturnURLs"] = request.getAllowedResourceOAuth2ReturnURLsShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasIdentityProviderName()) {
    body["IdentityProviderName"] = request.getIdentityProviderName();
  }

  if (!!request.hasRoleArn()) {
    body["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasSessionBindingEnabled()) {
    body["SessionBindingEnabled"] = request.getSessionBindingEnabled();
  }

  if (!!request.hasWorkloadIdentityName()) {
    body["WorkloadIdentityName"] = request.getWorkloadIdentityName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWorkloadIdentity"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkloadIdentityResponse>();
}

/**
 * @summary 创建应用
 *
 * @param request UpdateWorkloadIdentityRequest
 * @return UpdateWorkloadIdentityResponse
 */
UpdateWorkloadIdentityResponse Client::updateWorkloadIdentity(const UpdateWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkloadIdentityWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901