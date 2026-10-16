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
 * @summary Attaches a policy set to a gateway.
 *
 * @description Attaches a policy set to a target gateway.
 * The attachment relationship is 1:1. A gateway can have only one policy set attached at a time. If you attach a policy set multiple times, the latest attachment takes effect. You can specify the policy enforcement mode by using the EnforcementMode parameter. Valid values: ENFORCE (blocks non-compliant requests) and LOG_ONLY (records non-compliant requests but allows them, which is commonly used for canary release observation).
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
 * @summary Attaches a policy set to a gateway.
 *
 * @description Attaches a policy set to a target gateway.
 * The attachment relationship is 1:1. A gateway can have only one policy set attached at a time. If you attach a policy set multiple times, the latest attachment takes effect. You can specify the policy enforcement mode by using the EnforcementMode parameter. Valid values: ENFORCE (blocks non-compliant requests) and LOG_ONLY (records non-compliant requests but allows them, which is commonly used for canary release observation).
 *
 * @param request AttachPolicySetToGatewayRequest
 * @return AttachPolicySetToGatewayResponse
 */
AttachPolicySetToGatewayResponse Client::attachPolicySetToGateway(const AttachPolicySetToGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachPolicySetToGatewayWithOptions(request, runtime);
}

/**
 * @summary Creates an API key credential provider.
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
 * @summary Creates an API key credential provider.
 *
 * @param request CreateAPIKeyCredentialProviderRequest
 * @return CreateAPIKeyCredentialProviderResponse
 */
CreateAPIKeyCredentialProviderResponse Client::createAPIKeyCredentialProvider(const CreateAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Creates a workload identity.
 *
 * @description The response includes the plaintext client secret (ClientSecretValue). For security reasons, the plaintext secret is returned only once upon creation and cannot be retrieved later. Store it securely.
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
 * @summary Creates a workload identity.
 *
 * @description The response includes the plaintext client secret (ClientSecretValue). For security reasons, the plaintext secret is returned only once upon creation and cannot be retrieved later. Store it securely.
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
 * @summary Creates an OAuth 2.0 credential provider.
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

  if (!!request.hasOAuthType()) {
    body["OAuthType"] = request.getOAuthType();
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
 * @summary Creates an OAuth 2.0 credential provider.
 *
 * @param request CreateOAuth2CredentialProviderRequest
 * @return CreateOAuth2CredentialProviderResponse
 */
CreateOAuth2CredentialProviderResponse Client::createOAuth2CredentialProvider(const CreateOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Creates an access policy.
 *
 * @description Calls the CreatePolicy operation to add a policy to an existing policy set. The policy defines specific control rules, such as throttling thresholds, admission conditions, and allow or block actions, through the Definition field. After a policy set is mounted to a gateway, requests on the gateway are evaluated and controlled based on the merged results of all policies in the policy set.
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
 * @summary Creates an access policy.
 *
 * @description Calls the CreatePolicy operation to add a policy to an existing policy set. The policy defines specific control rules, such as throttling thresholds, admission conditions, and allow or block actions, through the Definition field. After a policy set is mounted to a gateway, requests on the gateway are evaluated and controlled based on the merged results of all policies in the policy set.
 *
 * @param request CreatePolicyRequest
 * @return CreatePolicyResponse
 */
CreatePolicyResponse Client::createPolicy(const CreatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates an access policy set.
 *
 * @description Calls CreatePolicySet to create a policy set in the current account. A policy set is a container for a group of policies. After a policy set is mounted to a gateway, all policies in the set evaluate requests to the gateway as a whole.
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

  if (!!request.hasSourcePlatform()) {
    body["SourcePlatform"] = request.getSourcePlatform();
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
 * @summary Creates an access policy set.
 *
 * @description Calls CreatePolicySet to create a policy set in the current account. A policy set is a container for a group of policies. After a policy set is mounted to a gateway, all policies in the set evaluate requests to the gateway as a whole.
 *
 * @param request CreatePolicySetRequest
 * @return CreatePolicySetResponse
 */
CreatePolicySetResponse Client::createPolicySet(const CreatePolicySetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPolicySetWithOptions(request, runtime);
}

/**
 * @summary Creates a role.
 *
 * @description Users in a user pool can be allocated roles to enable quick authorization. Administrators can specify permissions for roles in an access policy.
 * When a user pool is created, the platform automatically provisions a default role, and newly created users are automatically allocated this default role. This operation creates a custom role of the Manual type, which must be explicitly allocated to users by calling CreateRoleAssignment.
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
 * @summary Creates a role.
 *
 * @description Users in a user pool can be allocated roles to enable quick authorization. Administrators can specify permissions for roles in an access policy.
 * When a user pool is created, the platform automatically provisions a default role, and newly created users are automatically allocated this default role. This operation creates a custom role of the Manual type, which must be explicitly allocated to users by calling CreateRoleAssignment.
 *
 * @param request CreateRoleRequest
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRole(const CreateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoleWithOptions(request, runtime);
}

/**
 * @summary Associates a policy set with a gateway.
 *
 * @description Users must be assigned roles to complete authorization. When a user is created through JIT, a default role is automatically assigned. Administrators can use this operation to assign additional custom roles to users.
 * PrincipalType currently supports only User. A single identity can have multiple role assignments.
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
 * @summary Associates a policy set with a gateway.
 *
 * @description Users must be assigned roles to complete authorization. When a user is created through JIT, a default role is automatically assigned. Administrators can use this operation to assign additional custom roles to users.
 * PrincipalType currently supports only User. A single identity can have multiple role assignments.
 *
 * @param request CreateRoleAssignmentRequest
 * @return CreateRoleAssignmentResponse
 */
CreateRoleAssignmentResponse Client::createRoleAssignment(const CreateRoleAssignmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoleAssignmentWithOptions(request, runtime);
}

/**
 * @summary Creates a token vault.
 *
 * @description Calls the CreateTokenVault operation to create a token vault within the current Alibaba Cloud account. A token vault is a container used by the AgentIdentity service to securely store sensitive credentials such as OAuth2 tokens and API keys. Each token is encrypted when it is written to the vault.
 * You can specify the encryption configuration when you create the vault. By default, a service-managed key (SERVICE_MANAGED_KEY) is used. For greater control over the key, you can use a customer-managed Key Management Service (KMS) key (CUSTOMER_MANAGED_KEY). To use a customer-managed key, specify the Alibaba Cloud Resource Name (ARN) of the KMS key and use the RoleArn parameter to authorize the AgentIdentity service to access the KMS key.
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
 * @summary Creates a token vault.
 *
 * @description Calls the CreateTokenVault operation to create a token vault within the current Alibaba Cloud account. A token vault is a container used by the AgentIdentity service to securely store sensitive credentials such as OAuth2 tokens and API keys. Each token is encrypted when it is written to the vault.
 * You can specify the encryption configuration when you create the vault. By default, a service-managed key (SERVICE_MANAGED_KEY) is used. For greater control over the key, you can use a customer-managed Key Management Service (KMS) key (CUSTOMER_MANAGED_KEY). To use a customer-managed key, specify the Alibaba Cloud Resource Name (ARN) of the KMS key and use the RoleArn parameter to authorize the AgentIdentity service to access the KMS key.
 *
 * @param request CreateTokenVaultRequest
 * @return CreateTokenVaultResponse
 */
CreateTokenVaultResponse Client::createTokenVault(const CreateTokenVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTokenVaultWithOptions(request, runtime);
}

/**
 * @summary Creates a user in a user pool.
 *
 * @description Creates a user in a specified user pool. The type of the created user is Manual, and the default status is Enabled. The username must be unique within the user pool and can contain letters, digits, underscores (_), periods (.), and hyphens (-), and must be 3 to 128 characters in length. The email address must be unique within the user pool. After the user is created, you can call the SetUserPassword operation to set a logon password for the user and call the CreateRoleAssignment operation to assign a role to the user.
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
 * @summary Creates a user in a user pool.
 *
 * @description Creates a user in a specified user pool. The type of the created user is Manual, and the default status is Enabled. The username must be unique within the user pool and can contain letters, digits, underscores (_), periods (.), and hyphens (-), and must be 3 to 128 characters in length. The email address must be unique within the user pool. After the user is created, you can call the SetUserPassword operation to set a logon password for the user and call the CreateRoleAssignment operation to assign a role to the user.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Creates a user pool.
 *
 * @description A user pool is a secure and isolated user folder designed by the Agent Identity platform for the AI agent ecosystem. You can create multiple user pools under a single Alibaba Cloud account for the independent user identity management of different AI agents. When you create a user pool, you only need to specify the name (UserPoolName). The description is optional. After the user pool is created, the platform automatically generates a default role for the user pool. Users subsequently created through SAML SSO just-in-time (JIT) synchronization are automatically allocated this default role.
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
 * @summary Creates a user pool.
 *
 * @description A user pool is a secure and isolated user folder designed by the Agent Identity platform for the AI agent ecosystem. You can create multiple user pools under a single Alibaba Cloud account for the independent user identity management of different AI agents. When you create a user pool, you only need to specify the name (UserPoolName). The description is optional. After the user pool is created, the platform automatically generates a default role for the user pool. Users subsequently created through SAML SSO just-in-time (JIT) synchronization are automatically allocated this default role.
 *
 * @param request CreateUserPoolRequest
 * @return CreateUserPoolResponse
 */
CreateUserPoolResponse Client::createUserPool(const CreateUserPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserPoolWithOptions(request, runtime);
}

/**
 * @summary Creates a WorkloadIdentity.
 *
 * @description A client represents an application that is integrated with a user pool. When you create a client, you must specify the client name and redirect URIs. You can configure whether an application secret is required, whether to enforce Proof Key for Code Exchange (PKCE), the access token validity period, and the refresh token validity period. The application scopes are generated by the platform by default. If SecretRequired is set to true, you must call CreateClientSecret to create a client secret.
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

  if (!!tmpReq.hasScopes()) {
    request.setScopesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScopes(), "Scopes", "json"));
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

  if (!!request.hasScopesShrink()) {
    body["Scopes"] = request.getScopesShrink();
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
 * @summary Creates a WorkloadIdentity.
 *
 * @description A client represents an application that is integrated with a user pool. When you create a client, you must specify the client name and redirect URIs. You can configure whether an application secret is required, whether to enforce Proof Key for Code Exchange (PKCE), the access token validity period, and the refresh token validity period. The application scopes are generated by the platform by default. If SecretRequired is set to true, you must call CreateClientSecret to create a client secret.
 *
 * @param request CreateUserPoolClientRequest
 * @return CreateUserPoolClientResponse
 */
CreateUserPoolClientResponse Client::createUserPoolClient(const CreateUserPoolClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserPoolClientWithOptions(request, runtime);
}

/**
 * @summary Create a workload identity for an AI Agent to uniquely identify it.
 *
 * @param tmpReq CreateWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkloadIdentityResponse
 */
CreateWorkloadIdentityResponse Client::createWorkloadIdentityWithOptions(const CreateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkloadIdentityShrinkRequest request = CreateWorkloadIdentityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedConsentCallbackURLs()) {
    request.setAllowedConsentCallbackURLsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedConsentCallbackURLs(), "AllowedConsentCallbackURLs", "json"));
  }

  if (!!tmpReq.hasAllowedResourceOAuth2ReturnURLs()) {
    request.setAllowedResourceOAuth2ReturnURLsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedResourceOAuth2ReturnURLs(), "AllowedResourceOAuth2ReturnURLs", "json"));
  }

  json body = {};
  if (!!request.hasAllowedConsentCallbackURLsShrink()) {
    body["AllowedConsentCallbackURLs"] = request.getAllowedConsentCallbackURLsShrink();
  }

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
 * @summary Create a workload identity for an AI Agent to uniquely identify it.
 *
 * @param request CreateWorkloadIdentityRequest
 * @return CreateWorkloadIdentityResponse
 */
CreateWorkloadIdentityResponse Client::createWorkloadIdentity(const CreateWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified API key credential provider.
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
 * @summary Deletes a specified API key credential provider.
 *
 * @param request DeleteAPIKeyCredentialProviderRequest
 * @return DeleteAPIKeyCredentialProviderResponse
 */
DeleteAPIKeyCredentialProviderResponse Client::deleteAPIKeyCredentialProvider(const DeleteAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes an identity provider.
 *
 * @description Deletes a specified client secret by client ID and key ID. The secret becomes invalid immediately after deletion, and all OAuth authentication flows that use this secret will fail.
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
 * @summary Deletes an identity provider.
 *
 * @description Deletes a specified client secret by client ID and key ID. The secret becomes invalid immediately after deletion, and all OAuth authentication flows that use this secret will fail.
 *
 * @param request DeleteClientSecretRequest
 * @return DeleteClientSecretResponse
 */
DeleteClientSecretResponse Client::deleteClientSecret(const DeleteClientSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientSecretWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified identity provider.
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
 * @summary Deletes a specified identity provider.
 *
 * @param request DeleteIdentityProviderRequest
 * @return DeleteIdentityProviderResponse
 */
DeleteIdentityProviderResponse Client::deleteIdentityProvider(const DeleteIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified OAuth 2.0 credential provider.
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
 * @summary Deletes a specified OAuth 2.0 credential provider.
 *
 * @param request DeleteOAuth2CredentialProviderRequest
 * @return DeleteOAuth2CredentialProviderResponse
 */
DeleteOAuth2CredentialProviderResponse Client::deleteOAuth2CredentialProvider(const DeleteOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes an access policy.
 *
 * @description Calls DeletePolicy to remove a policy from a specified policy set. The policy becomes invalid immediately after deletion, and gateways that depend on the policy set do not need to be remounted.
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
 * @summary Deletes an access policy.
 *
 * @description Calls DeletePolicy to remove a policy from a specified policy set. The policy becomes invalid immediately after deletion, and gateways that depend on the policy set do not need to be remounted.
 *
 * @param request DeletePolicyRequest
 * @return DeletePolicyResponse
 */
DeletePolicyResponse Client::deletePolicy(const DeletePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes an access policy set.
 *
 * @description Calls DeletePolicySet to delete a policy set that is no longer in use.
 * Before deleting the policy set, ensure that it is unmounted from all gateways (you can query this by calling ListPolicySetAttachedGateways) and contains no policies. Otherwise, the deletion fails.
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
 * @summary Deletes an access policy set.
 *
 * @description Calls DeletePolicySet to delete a policy set that is no longer in use.
 * Before deleting the policy set, ensure that it is unmounted from all gateways (you can query this by calling ListPolicySetAttachedGateways) and contains no policies. Otherwise, the deletion fails.
 *
 * @param request DeletePolicySetRequest
 * @return DeletePolicySetResponse
 */
DeletePolicySetResponse Client::deletePolicySet(const DeletePolicySetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePolicySetWithOptions(request, runtime);
}

/**
 * @summary Deletes a role.
 *
 * @description Before deletion, the system checks whether the role has any bound users. If role assignments exist, the deletion is rejected. You must call DeleteRoleAssignment to remove the assignments before deleting the role. Default roles (Type=Default) cannot be deleted.
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
 * @summary Deletes a role.
 *
 * @description Before deletion, the system checks whether the role has any bound users. If role assignments exist, the deletion is rejected. You must call DeleteRoleAssignment to remove the assignments before deleting the role. Default roles (Type=Default) cannot be deleted.
 *
 * @param request DeleteRoleRequest
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRole(const DeleteRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoleWithOptions(request, runtime);
}

/**
 * @summary Disassociates a policy set from a gateway.
 *
 * @description Removes the role assignment relationship between an identity and a role.
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
 * @summary Disassociates a policy set from a gateway.
 *
 * @description Removes the role assignment relationship between an identity and a role.
 *
 * @param request DeleteRoleAssignmentRequest
 * @return DeleteRoleAssignmentResponse
 */
DeleteRoleAssignmentResponse Client::deleteRoleAssignment(const DeleteRoleAssignmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoleAssignmentWithOptions(request, runtime);
}

/**
 * @summary Deletes a workload identity.
 *
 * @description Cleans up expired or unused certificates after certificate rotation is complete. Before deleting the certificate, ensure that it is no longer used for SAML assertion signature verification. Otherwise, SSO logon may fail.
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
 * @summary Deletes a workload identity.
 *
 * @description Cleans up expired or unused certificates after certificate rotation is complete. Before deleting the certificate, ensure that it is no longer used for SAML assertion signature verification. Otherwise, SSO logon may fail.
 *
 * @param request DeleteSAMLIdentityProviderCertificateRequest
 * @return DeleteSAMLIdentityProviderCertificateResponse
 */
DeleteSAMLIdentityProviderCertificateResponse Client::deleteSAMLIdentityProviderCertificate(const DeleteSAMLIdentityProviderCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSAMLIdentityProviderCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified token vault.
 *
 * @description Call DeleteTokenVault to delete a token vault that is no longer in use.
 * Before deletion, ensure that the token vault is not referenced by any credential provider. Otherwise, the deletion may cause credentials that depend on the token vault to become unavailable. This operation cannot be undone.
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
 * @summary Deletes a specified token vault.
 *
 * @description Call DeleteTokenVault to delete a token vault that is no longer in use.
 * Before deletion, ensure that the token vault is not referenced by any credential provider. Otherwise, the deletion may cause credentials that depend on the token vault to become unavailable. This operation cannot be undone.
 *
 * @param request DeleteTokenVaultRequest
 * @return DeleteTokenVaultResponse
 */
DeleteTokenVaultResponse Client::deleteTokenVault(const DeleteTokenVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTokenVaultWithOptions(request, runtime);
}

/**
 * @summary Deletes a user.
 *
 * @description Deleting a user forcibly clears all role assignments of the user in the user pool. This operation is irreversible. Proceed with caution.
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
 * @summary Deletes a user.
 *
 * @description Deleting a user forcibly clears all role assignments of the user in the user pool. This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a user pool.
 *
 * @description Before deleting a user pool, you must clean up all resources in the user pool, including all users, roles, clients, SAML IdPs, and role assignments. Calls to this operation are rejected if the resources are not cleaned up. This operation is irreversible. Proceed with caution.
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
 * @summary Deletes a user pool.
 *
 * @description Before deleting a user pool, you must clean up all resources in the user pool, including all users, roles, clients, SAML IdPs, and role assignments. Calls to this operation are rejected if the resources are not cleaned up. This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteUserPoolRequest
 * @return DeleteUserPoolResponse
 */
DeleteUserPoolResponse Client::deleteUserPool(const DeleteUserPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserPoolWithOptions(request, runtime);
}

/**
 * @summary Deletes a WorkloadIdentity.
 *
 * @description Deleting a client also removes all its associated client secrets. After deletion, the client can no longer be used for OAuth authentication and authorization flows. Proceed with caution.
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
 * @summary Deletes a WorkloadIdentity.
 *
 * @description Deleting a client also removes all its associated client secrets. After deletion, the client can no longer be used for OAuth authentication and authorization flows. Proceed with caution.
 *
 * @param request DeleteUserPoolClientRequest
 * @return DeleteUserPoolClientResponse
 */
DeleteUserPoolClientResponse Client::deleteUserPoolClient(const DeleteUserPoolClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserPoolClientWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified workload identity.
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
 * @summary Deletes a specified workload identity.
 *
 * @param request DeleteWorkloadIdentityRequest
 * @return DeleteWorkloadIdentityResponse
 */
DeleteWorkloadIdentityResponse Client::deleteWorkloadIdentity(const DeleteWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary Detaches a policy set from a gateway.
 *
 * @description Detaches a policy set from a gateway. After the policy set is detached, requests on the gateway are no longer governed by the policies in the policy set.
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
 * @summary Detaches a policy set from a gateway.
 *
 * @description Detaches a policy set from a gateway. After the policy set is detached, requests on the gateway are no longer governed by the policies in the policy set.
 *
 * @param request DetachPolicySetFromGatewayRequest
 * @return DetachPolicySetFromGatewayResponse
 */
DetachPolicySetFromGatewayResponse Client::detachPolicySetFromGateway(const DetachPolicySetFromGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachPolicySetFromGatewayWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified API key credential provider.
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
 * @summary Retrieves the details of a specified API key credential provider.
 *
 * @param request GetAPIKeyCredentialProviderRequest
 * @return GetAPIKeyCredentialProviderResponse
 */
GetAPIKeyCredentialProviderResponse Client::getAPIKeyCredentialProvider(const GetAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Queries the gateway policy configuration.
 *
 * @description Calls the GetGatewayPolicyConfig operation to query the currently effective policy configuration of a gateway, including the ARN of the mounted policy set and the enforcement mode.
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
 * @summary Queries the gateway policy configuration.
 *
 * @description Calls the GetGatewayPolicyConfig operation to query the currently effective policy configuration of a gateway, including the ARN of the mounted policy set and the enforcement mode.
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
 * @summary 查询身份源同步范围与统计（已选部门有效性 + 展开部门数/预计人数）
 *
 * @description 目标用户池需已配置指定类型的身份源。本接口使用已保存的身份源配置，无需传入钉钉或飞书应用密钥。
 * 同步范围支持 AllAuthorized 和 SelectedDepartments。未显式配置范围时默认为 AllAuthorized，表示第三方应用授权可见范围内的全部用户。SelectedDepartments 包含选中部门及其全部后代部门；人员有任一当前所属部门命中展开集合，即命中同步范围。
 * 本接口不修改范围、不创建人员同步任务。查询可能触发后台统计；EstimateStatus 表示范围统计状态，不是人员同步任务状态。统计结果可能复用缓存，也可能来自同一范围最近一次同步结果；跨部门重复用户可能重复计数，不应视为实时、精确去重人数。
 * 对应身份源未配置时返回 EntityNotExists.IdpConfiguration；目录权限或通讯录可见范围不足时，返回 DingTalkApiPermissionDenied 或 FeishuApiPermissionDenied，不会将权限问题当作部门不存在。
 *
 * @param request GetIdentityProviderSyncScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderSyncScopeResponse
 */
GetIdentityProviderSyncScopeResponse Client::getIdentityProviderSyncScopeWithOptions(const GetIdentityProviderSyncScopeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetIdentityProviderSyncScope"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityProviderSyncScopeResponse>();
}

/**
 * @summary 查询身份源同步范围与统计（已选部门有效性 + 展开部门数/预计人数）
 *
 * @description 目标用户池需已配置指定类型的身份源。本接口使用已保存的身份源配置，无需传入钉钉或飞书应用密钥。
 * 同步范围支持 AllAuthorized 和 SelectedDepartments。未显式配置范围时默认为 AllAuthorized，表示第三方应用授权可见范围内的全部用户。SelectedDepartments 包含选中部门及其全部后代部门；人员有任一当前所属部门命中展开集合，即命中同步范围。
 * 本接口不修改范围、不创建人员同步任务。查询可能触发后台统计；EstimateStatus 表示范围统计状态，不是人员同步任务状态。统计结果可能复用缓存，也可能来自同一范围最近一次同步结果；跨部门重复用户可能重复计数，不应视为实时、精确去重人数。
 * 对应身份源未配置时返回 EntityNotExists.IdpConfiguration；目录权限或通讯录可见范围不足时，返回 DingTalkApiPermissionDenied 或 FeishuApiPermissionDenied，不会将权限问题当作部门不存在。
 *
 * @param request GetIdentityProviderSyncScopeRequest
 * @return GetIdentityProviderSyncScopeResponse
 */
GetIdentityProviderSyncScopeResponse Client::getIdentityProviderSyncScope(const GetIdentityProviderSyncScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderSyncScopeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the logon-related configurations of a user pool.
 *
 * @description Retrieves the logon configuration and password policy of a specified user pool. The logon configuration includes preference settings such as whether to enable password logon. The password policy includes rules for password complexity, length limits, and logon failure lockouts. The password policy is read-only and does not support custom modifications.
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
 * @summary Retrieves the logon-related configurations of a user pool.
 *
 * @description Retrieves the logon configuration and password policy of a specified user pool. The logon configuration includes preference settings such as whether to enable password logon. The password policy includes rules for password complexity, length limits, and logon failure lockouts. The password policy is read-only and does not support custom modifications.
 *
 * @param request GetLoginPreferenceRequest
 * @return GetLoginPreferenceResponse
 */
GetLoginPreferenceResponse Client::getLoginPreference(const GetLoginPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginPreferenceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified OAuth 2.0 credential provider.
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
 * @summary Retrieves the details of a specified OAuth 2.0 credential provider.
 *
 * @param request GetOAuth2CredentialProviderRequest
 * @return GetOAuth2CredentialProviderResponse
 */
GetOAuth2CredentialProviderResponse Client::getOAuth2CredentialProvider(const GetOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Queries an access policy.
 *
 * @description Calls GetPolicy to retrieve the complete configuration of a single policy, including its definition, associated policy set, and creation and update times.
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
 * @summary Queries an access policy.
 *
 * @description Calls GetPolicy to retrieve the complete configuration of a single policy, including its definition, associated policy set, and creation and update times.
 *
 * @param request GetPolicyRequest
 * @return GetPolicyResponse
 */
GetPolicyResponse Client::getPolicy(const GetPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries an access policy set.
 *
 * @description Calls GetPolicySet to query the complete configuration of a single policy set, including the ARN, description, creation time, and update time.
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
 * @summary Queries an access policy set.
 *
 * @description Calls GetPolicySet to query the complete configuration of a single policy set, including the ARN, description, creation time, and update time.
 *
 * @param request GetPolicySetRequest
 * @return GetPolicySetResponse
 */
GetPolicySetResponse Client::getPolicySet(const GetPolicySetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPolicySetWithOptions(request, runtime);
}

/**
 * @summary Retrieves a role.
 *
 * @description Returns the complete information about a specified role, including the role ID, name, description, type (Default or Manual), and creation and update times.
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
 * @summary Retrieves a role.
 *
 * @description Returns the complete information about a specified role, including the role ID, name, description, type (Default or Manual), and creation and update times.
 *
 * @param request GetRoleRequest
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRole(const GetRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoleWithOptions(request, runtime);
}

/**
 * @summary Creates an application.
 *
 * @description Returns the complete configuration of the SAML IdP, including the EntityId, logon URL, X509 certificate list, and the enabling status of SSO and JIT synchronization.
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
 * @summary Creates an application.
 *
 * @description Returns the complete configuration of the SAML IdP, including the EntityId, logon URL, X509 certificate list, and the enabling status of SSO and JIT synchronization.
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
 * @summary Retrieves the specified identity provider.
 *
 * @description Queries the SSO configuration of a specific type of identity provider in a specified user pool. Returns information such as the enabling status, synchronization callback status, and metadata of the IdP. For security reasons, sensitive fields such as appSecret, encryptKey, and verificationToken are not returned in the response.
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
 * @summary Retrieves the specified identity provider.
 *
 * @description Queries the SSO configuration of a specific type of identity provider in a specified user pool. Returns information such as the enabling status, synchronization callback status, and metadata of the IdP. For security reasons, sensitive fields such as appSecret, encryptKey, and verificationToken are not returned in the response.
 *
 * @param request GetSpecificIdentityProviderRequest
 * @return GetSpecificIdentityProviderResponse
 */
GetSpecificIdentityProviderResponse Client::getSpecificIdentityProvider(const GetSpecificIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSpecificIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Retrieves the detailed configuration of a specified token vault.
 *
 * @description Calls GetTokenVault to retrieve the complete configuration of a single token vault, including the encryption method, associated RAM role ARN, creation time, and update time.
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
 * @summary Retrieves the detailed configuration of a specified token vault.
 *
 * @description Calls GetTokenVault to retrieve the complete configuration of a single token vault, including the encryption method, associated RAM role ARN, creation time, and update time.
 *
 * @param request GetTokenVaultRequest
 * @return GetTokenVaultResponse
 */
GetTokenVaultResponse Client::getTokenVault(const GetTokenVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTokenVaultWithOptions(request, runtime);
}

/**
 * @summary Retrieves a user.
 *
 * @description Returns the complete information of a specified user, including the user ID, username, display name, description, and creation and update times.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  if (!!request.hasUserPoolId()) {
    body["UserPoolId"] = request.getUserPoolId();
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
 * @summary Retrieves a user.
 *
 * @description Returns the complete information of a specified user, including the user ID, username, display name, description, and creation and update times.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary Retrieves a user pool.
 *
 * @description Returns the complete configuration information of a specified user pool, including the user pool ID, name, description, creation time, and update time.
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
 * @summary Retrieves a user pool.
 *
 * @description Returns the complete configuration information of a specified user pool, including the user pool ID, name, description, creation time, and update time.
 *
 * @param request GetUserPoolRequest
 * @return GetUserPoolResponse
 */
GetUserPoolResponse Client::getUserPool(const GetUserPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserPoolWithOptions(request, runtime);
}

/**
 * @summary Creates an application.
 *
 * @description Returns the complete configuration information of a client, including the client ID, name, redirect URIs, token validity periods, SecretRequired and EnforcePKCE settings, and default client scopes.
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
 * @summary Creates an application.
 *
 * @description Returns the complete configuration information of a client, including the client ID, name, redirect URIs, token validity periods, SecretRequired and EnforcePKCE settings, and default client scopes.
 *
 * @param request GetUserPoolClientRequest
 * @return GetUserPoolClientResponse
 */
GetUserPoolClientResponse Client::getUserPoolClient(const GetUserPoolClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserPoolClientWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a synchronization task in a user pool.
 *
 * @description Queries the execution details of a single synchronization task in a specified user pool, including the task status, start and end times, synchronization result statistics (the number of created, updated, deleted, and unchanged users), and error messages.
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
 * @summary Retrieves the details of a synchronization task in a user pool.
 *
 * @description Queries the execution details of a single synchronization task in a specified user pool, including the task status, start and end times, synchronization result statistics (the number of created, updated, deleted, and unchanged users), and error messages.
 *
 * @param request GetUserPoolSyncJobRequest
 * @return GetUserPoolSyncJobResponse
 */
GetUserPoolSyncJobResponse Client::getUserPoolSyncJob(const GetUserPoolSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserPoolSyncJobWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed configuration of a workload identity by name.
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
 * @summary Queries the detailed configuration of a workload identity by name.
 *
 * @param request GetWorkloadIdentityRequest
 * @return GetWorkloadIdentityResponse
 */
GetWorkloadIdentityResponse Client::getWorkloadIdentity(const GetWorkloadIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkloadIdentityWithOptions(request, runtime);
}

/**
 * @summary Lists all API key credential providers in the account.
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
 * @summary Lists all API key credential providers in the account.
 *
 * @param request ListAPIKeyCredentialProvidersRequest
 * @return ListAPIKeyCredentialProvidersResponse
 */
ListAPIKeyCredentialProvidersResponse Client::listAPIKeyCredentialProviders(const ListAPIKeyCredentialProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAPIKeyCredentialProvidersWithOptions(request, runtime);
}

/**
 * @summary Lists identity providers.
 *
 * @description Returns summary information about all secrets of a client, including the client key ID and creation time. For security reasons, the plaintext secret (ClientSecretValue) is not returned in the list.
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
 * @summary Lists identity providers.
 *
 * @description Returns summary information about all secrets of a client, including the client key ID and creation time. For security reasons, the plaintext secret (ClientSecretValue) is not returned in the list.
 *
 * @param request ListClientSecretsRequest
 * @return ListClientSecretsResponse
 */
ListClientSecretsResponse Client::listClientSecrets(const ListClientSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientSecretsWithOptions(request, runtime);
}

/**
 * @summary 查询身份源部门树（按层懒加载，供控制台勾选同步范围）
 *
 * @description 用户池需已配置相应身份源，且应用具有目标部门的通讯录访问权限。本接口使用已保存的身份源配置，无需传入应用密钥。
 * 本接口仅返回指定父部门的直属子部门，不包含父部门本身，不递归返回整棵部门树。未传父部门时，钉钉默认查询根部门1下的直属子部门，飞书默认查询根部门0下的直属子部门。部门浏览受应用授权可见范围限制，不受当前保存的同步范围限制。
 * 本接口不修改同步范围，不触发人员同步。
 *
 * @param request ListIdentityProviderDepartmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProviderDepartmentsResponse
 */
ListIdentityProviderDepartmentsResponse Client::listIdentityProviderDepartmentsWithOptions(const ListIdentityProviderDepartmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIdentityProviderType()) {
    body["IdentityProviderType"] = request.getIdentityProviderType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasParentDepartmentId()) {
    body["ParentDepartmentId"] = request.getParentDepartmentId();
  }

  if (!!request.hasUserPoolName()) {
    body["UserPoolName"] = request.getUserPoolName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListIdentityProviderDepartments"},
    {"version" , "2025-09-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIdentityProviderDepartmentsResponse>();
}

/**
 * @summary 查询身份源部门树（按层懒加载，供控制台勾选同步范围）
 *
 * @description 用户池需已配置相应身份源，且应用具有目标部门的通讯录访问权限。本接口使用已保存的身份源配置，无需传入应用密钥。
 * 本接口仅返回指定父部门的直属子部门，不包含父部门本身，不递归返回整棵部门树。未传父部门时，钉钉默认查询根部门1下的直属子部门，飞书默认查询根部门0下的直属子部门。部门浏览受应用授权可见范围限制，不受当前保存的同步范围限制。
 * 本接口不修改同步范围，不触发人员同步。
 *
 * @param request ListIdentityProviderDepartmentsRequest
 * @return ListIdentityProviderDepartmentsResponse
 */
ListIdentityProviderDepartmentsResponse Client::listIdentityProviderDepartments(const ListIdentityProviderDepartmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentityProviderDepartmentsWithOptions(request, runtime);
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
 * @summary Lists all OAuth 2.0 credential providers in the account.
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
 * @summary Lists all OAuth 2.0 credential providers in the account.
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
 * @summary Lists gateway policy configurations.
 *
 * @description Calls ListPolicySetAttachedGateways to query the gateways to which a specific policy set is currently attached. Call this operation before deleting a policy set to verify that no residual attachments exist.
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
 * @summary Lists gateway policy configurations.
 *
 * @description Calls ListPolicySetAttachedGateways to query the gateways to which a specific policy set is currently attached. Call this operation before deleting a policy set to verify that no residual attachments exist.
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
 * @summary Lists roles.
 *
 * @description Returns summary information about all roles in a user pool, including the default role Default and custom roles Manual. The information includes the role ID, name, description, creation time, update time, and role type.
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
 * @summary Lists roles.
 *
 * @description Returns summary information about all roles in a user pool, including the default role Default and custom roles Manual. The information includes the role ID, name, description, creation time, update time, and role type.
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRolesWithOptions(request, runtime);
}

/**
 * @summary Lists identity providers.
 *
 * @description Returns a list of all X.509 certificates under the SAML IdP configuration of the user pool to help administrators manage the certificate lifecycle and perform certificate rotation.
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
 * @summary Lists identity providers.
 *
 * @description Returns a list of all X.509 certificates under the SAML IdP configuration of the user pool to help administrators manage the certificate lifecycle and perform certificate rotation.
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
 * @summary Lists identity providers.
 *
 * @description Returns summary information about all clients in a user pool, including the client ID, name, redirect URIs, creation time, and configurations such as PKCE, client secret, and token validity periods.
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
 * @summary Lists identity providers.
 *
 * @description Returns summary information about all clients in a user pool, including the client ID, name, redirect URIs, creation time, and configurations such as PKCE, client secret, and token validity periods.
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
 * @summary Lists identity providers.
 *
 * @description Returns summary information about all user pools within the current account, including the user pool ID, name, description, and creation and update times. Supports pagination by using NextToken.
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
 * @summary Lists identity providers.
 *
 * @description Returns summary information about all user pools within the current account, including the user pool ID, name, description, and creation and update times. Supports pagination by using NextToken.
 *
 * @param request ListUserPoolsRequest
 * @return ListUserPoolsResponse
 */
ListUserPoolsResponse Client::listUserPools(const ListUserPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserPoolsWithOptions(request, runtime);
}

/**
 * @summary Lists users.
 *
 * @description Returns the summary information of all users in a user pool, including the user ID, username, display name, description, creation time, and update time.
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
 * @summary Lists users.
 *
 * @description Returns the summary information of all users in a user pool, including the user ID, username, display name, description, creation time, and update time.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Lists workload identities with pagination.
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
 * @summary Lists workload identities with pagination.
 *
 * @param request ListWorkloadIdentitiesRequest
 * @return ListWorkloadIdentitiesResponse
 */
ListWorkloadIdentitiesResponse Client::listWorkloadIdentities(const ListWorkloadIdentitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkloadIdentitiesWithOptions(request, runtime);
}

/**
 * @summary Triggers a user synchronization task in a user pool.
 *
 * @description Creates and immediately executes a user synchronization task in a specified user pool. The system pulls user data from the specified identity provider and synchronizes the data to the user pool. The task runs asynchronously. The operation completes after the task ID is returned. You can call GetUserPoolSyncJob to query the execution progress and results. Only one synchronization task can run in a user pool at a time.
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
 * @summary Triggers a user synchronization task in a user pool.
 *
 * @description Creates and immediately executes a user synchronization task in a specified user pool. The system pulls user data from the specified identity provider and synchronizes the data to the user pool. The task runs asynchronously. The operation completes after the task ID is returned. You can call GetUserPoolSyncJob to query the execution progress and results. Only one synchronization task can run in a user pool at a time.
 *
 * @param request RunUserPoolSyncJobRequest
 * @return RunUserPoolSyncJobResponse
 */
RunUserPoolSyncJobResponse Client::runUserPoolSyncJob(const RunUserPoolSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runUserPoolSyncJobWithOptions(request, runtime);
}

/**
 * @summary Creates a workload identity.
 *
 * @description This operation sets or updates the core configurations of a SAML identity provider (IdP), including the IdP identifier (EntityId), logon URL (LoginURL), X.509 certificates, single sign-on (SSO) status, and Just-In-Time (JIT) user provisioning and update settings. If you specify X509Certificates, all existing certificates in the user pool are replaced. To append certificates while retaining the existing ones, use AddSAMLIdentityProviderCertificate.
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
 * @summary Creates a workload identity.
 *
 * @description This operation sets or updates the core configurations of a SAML identity provider (IdP), including the IdP identifier (EntityId), logon URL (LoginURL), X.509 certificates, single sign-on (SSO) status, and Just-In-Time (JIT) user provisioning and update settings. If you specify X509Certificates, all existing certificates in the user pool are replaced. To append certificates while retaining the existing ones, use AddSAMLIdentityProviderCertificate.
 *
 * @param request SetSAMLIdentityProviderRequest
 * @return SetSAMLIdentityProviderResponse
 */
SetSAMLIdentityProviderResponse Client::setSAMLIdentityProvider(const SetSAMLIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSAMLIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Configures the SSO settings for a specified type of identity provider in a user pool.
 *
 * @description Configures a specific type of identity provider for a specified user pool. This operation is used to configure SSO logon and address book synchronization for non-SAML IdPs such as DingTalk. A user pool does not support enabling multiple identity providers at the same time. You must disable other enabled IdPs before enabling a new IdP.
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
 * @summary Configures the SSO settings for a specified type of identity provider in a user pool.
 *
 * @description Configures a specific type of identity provider for a specified user pool. This operation is used to configure SSO logon and address book synchronization for non-SAML IdPs such as DingTalk. A user pool does not support enabling multiple identity providers at the same time. You must disable other enabled IdPs before enabling a new IdP.
 *
 * @param request SetSpecificIdentityProviderRequest
 * @return SetSpecificIdentityProviderResponse
 */
SetSpecificIdentityProviderResponse Client::setSpecificIdentityProvider(const SetSpecificIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSpecificIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Modifies the logon password of a user.
 *
 * @description Sets or resets the logon password for a user in a specified user pool. Two methods are supported: specifying a password (Password) or generating a random password (GenerateRandomPassword). The two methods are mutually exclusive, and you must select exactly one. If you specify a password, it must meet the password policy requirements: a minimum length of 8 characters, containing at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters, and it must not contain the username. Passwords are managed independently of the user creation process and are not passed through CreateUser.
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
 * @summary Modifies the logon password of a user.
 *
 * @description Sets or resets the logon password for a user in a specified user pool. Two methods are supported: specifying a password (Password) or generating a random password (GenerateRandomPassword). The two methods are mutually exclusive, and you must select exactly one. If you specify a password, it must meet the password policy requirements: a minimum length of 8 characters, containing at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters, and it must not contain the username. Passwords are managed independently of the user creation process and are not passed through CreateUser.
 *
 * @param request SetUserPasswordRequest
 * @return SetUserPasswordResponse
 */
SetUserPasswordResponse Client::setUserPassword(const SetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Updates an existing API key credential provider.
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
 * @summary Updates an existing API key credential provider.
 *
 * @param request UpdateAPIKeyCredentialProviderRequest
 * @return UpdateAPIKeyCredentialProviderResponse
 */
UpdateAPIKeyCredentialProviderResponse Client::updateAPIKeyCredentialProvider(const UpdateAPIKeyCredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAPIKeyCredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Queries the gateway policy configuration.
 *
 * @description Calls UpdateGatewayPolicyConfig to adjust the policy enforcement mode on a gateway. Common usage: Use LOG_ONLY for observation and verification during the initial rollout of a policy. After confirming that everything is correct, switch the gateway to ENFORCE to enforce interception. This operation does not modify the attached policy set itself. To replace the policy set, call AttachPolicySetToGateway.
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
 * @summary Queries the gateway policy configuration.
 *
 * @description Calls UpdateGatewayPolicyConfig to adjust the policy enforcement mode on a gateway. Common usage: Use LOG_ONLY for observation and verification during the initial rollout of a policy. After confirming that everything is correct, switch the gateway to ENFORCE to enforce interception. This operation does not modify the attached policy set itself. To replace the policy set, call AttachPolicySetToGateway.
 *
 * @param request UpdateGatewayPolicyConfigRequest
 * @return UpdateGatewayPolicyConfigResponse
 */
UpdateGatewayPolicyConfigResponse Client::updateGatewayPolicyConfig(const UpdateGatewayPolicyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGatewayPolicyConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the specified identity provider.
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
 * @summary Updates the specified identity provider.
 *
 * @param request UpdateIdentityProviderRequest
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProvider(const UpdateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Updates the logon configuration of a user pool.
 *
 * @description Updates the logon configuration of a specified user pool. Currently, only logon preferences, such as whether password logon is enabled, can be updated. The password policy cannot be modified. Specify only the fields to be updated. Unspecified fields remain unchanged.
 *
 * @param tmpReq UpdateLoginPreferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoginPreferenceResponse
 */
UpdateLoginPreferenceResponse Client::updateLoginPreferenceWithOptions(const UpdateLoginPreferenceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLoginPreferenceShrinkRequest request = UpdateLoginPreferenceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedPostLogoutRedirectUris()) {
    request.setAllowedPostLogoutRedirectUrisShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedPostLogoutRedirectUris(), "AllowedPostLogoutRedirectUris", "json"));
  }

  if (!!tmpReq.hasLoginPreference()) {
    request.setLoginPreferenceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLoginPreference(), "LoginPreference", "json"));
  }

  json query = {};
  if (!!request.hasAllowedPostLogoutRedirectUrisShrink()) {
    query["AllowedPostLogoutRedirectUris"] = request.getAllowedPostLogoutRedirectUrisShrink();
  }

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
 * @summary Updates the logon configuration of a user pool.
 *
 * @description Updates the logon configuration of a specified user pool. Currently, only logon preferences, such as whether password logon is enabled, can be updated. The password policy cannot be modified. Specify only the fields to be updated. Unspecified fields remain unchanged.
 *
 * @param request UpdateLoginPreferenceRequest
 * @return UpdateLoginPreferenceResponse
 */
UpdateLoginPreferenceResponse Client::updateLoginPreference(const UpdateLoginPreferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoginPreferenceWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of an existing OAuth 2.0 credential provider.
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
 * @summary Updates the configuration of an existing OAuth 2.0 credential provider.
 *
 * @param request UpdateOAuth2CredentialProviderRequest
 * @return UpdateOAuth2CredentialProviderResponse
 */
UpdateOAuth2CredentialProviderResponse Client::updateOAuth2CredentialProvider(const UpdateOAuth2CredentialProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOAuth2CredentialProviderWithOptions(request, runtime);
}

/**
 * @summary Updates an access policy.
 *
 * @description Calls the UpdatePolicy operation to update the description and definition of an existing policy. The updated definition takes effect immediately for all gateways to which the policy set is mounted.
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
 * @summary Updates an access policy.
 *
 * @description Calls the UpdatePolicy operation to update the description and definition of an existing policy. The updated definition takes effect immediately for all gateways to which the policy set is mounted.
 *
 * @param request UpdatePolicyRequest
 * @return UpdatePolicyResponse
 */
UpdatePolicyResponse Client::updatePolicy(const UpdatePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolicyWithOptions(request, runtime);
}

/**
 * @summary Updates an access policy set.
 *
 * @description Calls UpdatePolicySet to update the description of an existing policy set. To modify specific policies in the policy set, use UpdatePolicy. To change the mount relationship, use AttachPolicySetToGateway or DetachPolicySetFromGateway.
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
 * @summary Updates an access policy set.
 *
 * @description Calls UpdatePolicySet to update the description of an existing policy set. To modify specific policies in the policy set, use UpdatePolicy. To change the mount relationship, use AttachPolicySetToGateway or DetachPolicySetFromGateway.
 *
 * @param request UpdatePolicySetRequest
 * @return UpdatePolicySetResponse
 */
UpdatePolicySetResponse Client::updatePolicySet(const UpdatePolicySetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePolicySetWithOptions(request, runtime);
}

/**
 * @summary Updates a role.
 *
 * @description Updates the Description field of a role. The RoleName field serves as a unique identifier and cannot be modified.
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
 * @summary Updates a role.
 *
 * @description Updates the Description field of a role. The RoleName field serves as a unique identifier and cannot be modified.
 *
 * @param request UpdateRoleRequest
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRole(const UpdateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRoleWithOptions(request, runtime);
}

/**
 * @summary Updates a token vault.
 *
 * @description Updates the description and role configuration of an existing token vault. Note: The encryption configuration (KeyType or KmsKeyArn) of a token vault cannot be changed after it is created.
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
 * @summary Updates a token vault.
 *
 * @description Updates the description and role configuration of an existing token vault. Note: The encryption configuration (KeyType or KmsKeyArn) of a token vault cannot be changed after it is created.
 *
 * @param request UpdateTokenVaultRequest
 * @return UpdateTokenVaultResponse
 */
UpdateTokenVaultResponse Client::updateTokenVault(const UpdateTokenVaultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTokenVaultWithOptions(request, runtime);
}

/**
 * @summary Updates a user in a user pool.
 *
 * @description Updates the attribute information of a user in a specified user pool. Specify only the fields that you want to update. Unspecified fields remain unchanged. UserName is the user identifier and cannot be modified. You can update the display name, description, email address, and status. Email addresses must be unique within the user pool.
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
 * @summary Updates a user in a user pool.
 *
 * @description Updates the attribute information of a user in a specified user pool. Specify only the fields that you want to update. Unspecified fields remain unchanged. UserName is the user identifier and cannot be modified. You can update the display name, description, email address, and status. Email addresses must be unique within the user pool.
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
 * @summary Creates an application.
 *
 * @description Updates the callback URLs (RedirectURIs), whether an application secret is required (SecretRequired), whether Proof Key for Code Exchange (PKCE) is enforced (EnforcePKCE), and the validity periods of the access token and refresh token. The client name (ClientName) serves as a unique identifier and cannot be modified.
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

  if (!!tmpReq.hasScopes()) {
    request.setScopesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScopes(), "Scopes", "json"));
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

  if (!!request.hasScopesShrink()) {
    body["Scopes"] = request.getScopesShrink();
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
 * @summary Creates an application.
 *
 * @description Updates the callback URLs (RedirectURIs), whether an application secret is required (SecretRequired), whether Proof Key for Code Exchange (PKCE) is enforced (EnforcePKCE), and the validity periods of the access token and refresh token. The client name (ClientName) serves as a unique identifier and cannot be modified.
 *
 * @param request UpdateUserPoolClientRequest
 * @return UpdateUserPoolClientResponse
 */
UpdateUserPoolClientResponse Client::updateUserPoolClient(const UpdateUserPoolClientRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserPoolClientWithOptions(request, runtime);
}

/**
 * @summary Updates the specified workload identity.
 *
 * @param tmpReq UpdateWorkloadIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkloadIdentityResponse
 */
UpdateWorkloadIdentityResponse Client::updateWorkloadIdentityWithOptions(const UpdateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkloadIdentityShrinkRequest request = UpdateWorkloadIdentityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAllowedConsentCallbackURLs()) {
    request.setAllowedConsentCallbackURLsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedConsentCallbackURLs(), "AllowedConsentCallbackURLs", "json"));
  }

  if (!!tmpReq.hasAllowedResourceOAuth2ReturnURLs()) {
    request.setAllowedResourceOAuth2ReturnURLsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAllowedResourceOAuth2ReturnURLs(), "AllowedResourceOAuth2ReturnURLs", "json"));
  }

  json body = {};
  if (!!request.hasAllowedConsentCallbackURLsShrink()) {
    body["AllowedConsentCallbackURLs"] = request.getAllowedConsentCallbackURLsShrink();
  }

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
 * @summary Updates the specified workload identity.
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