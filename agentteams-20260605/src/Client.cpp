#include <darabonba/Core.hpp>
#include <alibabacloud/AgentTeams20260605.hpp>
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
using namespace AlibabaCloud::AgentTeams20260605::Models;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{

AlibabaCloud::AgentTeams20260605::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "agentteams.cn-beijing.aliyuncs.com"},
    {"ap-southeast-1" , "agentteams.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou" , "agentteams.cn-hangzhou.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("agentteams", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Binds an upstream identity provider to a specified instance and triggers a synchronization task.
 *
 * @description ## Operation description
 * - This is an asynchronous operation that immediately returns binding task information after the call.
 * - Use `GetInstanceAsyncTask` to poll for the asynchronous task result. The default polling interval is 30 seconds, with a maximum of 20 attempts.
 * - The `IdpMetadata` parameter contains sensitive information. Ensure secure transmission.
 * - The default values of `LoginEnabled` and `SyncEnabled` are `true` and `false`, respectively. If not explicitly specified, the default values are used.
 *
 * @param request BindIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindIdentityProviderResponse
 */
BindIdentityProviderResponse Client::bindIdentityProviderWithOptions(const BindIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderType()) {
    query["IdentityProviderType"] = request.getIdentityProviderType();
  }

  if (!!request.hasIdpMetadata()) {
    query["IdpMetadata"] = request.getIdpMetadata();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLoginEnabled()) {
    query["LoginEnabled"] = request.getLoginEnabled();
  }

  if (!!request.hasSyncEnabled()) {
    query["SyncEnabled"] = request.getSyncEnabled();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BindIdentityProvider"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindIdentityProviderResponse>();
}

/**
 * @summary Binds an upstream identity provider to a specified instance and triggers a synchronization task.
 *
 * @description ## Operation description
 * - This is an asynchronous operation that immediately returns binding task information after the call.
 * - Use `GetInstanceAsyncTask` to poll for the asynchronous task result. The default polling interval is 30 seconds, with a maximum of 20 attempts.
 * - The `IdpMetadata` parameter contains sensitive information. Ensure secure transmission.
 * - The default values of `LoginEnabled` and `SyncEnabled` are `true` and `false`, respectively. If not explicitly specified, the default values are used.
 *
 * @param request BindIdentityProviderRequest
 * @return BindIdentityProviderResponse
 */
BindIdentityProviderResponse Client::bindIdentityProvider(const BindIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Activates and configures an Internet NAT gateway for a specified AgentTeams instance.
 *
 * @description ## Operation description
 * - This operation creates an Internet NAT gateway and automatically applies for an elastic IP address (EIP), bindS the EIP, and configures SNAT rules.
 * - An asynchronous task ID is returned after the call. The actual resource ID is provided in the task result.
 * - NAT gateway name format: `magic-create-for-vpc-{vpcId}`.
 * - GET and POST methods are supported.
 * - The `eipBandwidth` parameter ranges from 1 to 200 Mbit/s. Default value: 5 Mbit/s.
 * - If `InstanceId` is invalid or `eipBandwidth` is out of range, the API returns an error response.
 *
 * @param request ConfigureNatGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureNatGatewayResponse
 */
ConfigureNatGatewayResponse Client::configureNatGatewayWithOptions(const ConfigureNatGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEipAllocationId()) {
    query["EipAllocationId"] = request.getEipAllocationId();
  }

  if (!!request.hasEipBandwidth()) {
    query["EipBandwidth"] = request.getEipBandwidth();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNatGatewayInstanceId()) {
    query["NatGatewayInstanceId"] = request.getNatGatewayInstanceId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ConfigureNatGateway"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureNatGatewayResponse>();
}

/**
 * @summary Activates and configures an Internet NAT gateway for a specified AgentTeams instance.
 *
 * @description ## Operation description
 * - This operation creates an Internet NAT gateway and automatically applies for an elastic IP address (EIP), bindS the EIP, and configures SNAT rules.
 * - An asynchronous task ID is returned after the call. The actual resource ID is provided in the task result.
 * - NAT gateway name format: `magic-create-for-vpc-{vpcId}`.
 * - GET and POST methods are supported.
 * - The `eipBandwidth` parameter ranges from 1 to 200 Mbit/s. Default value: 5 Mbit/s.
 * - If `InstanceId` is invalid or `eipBandwidth` is out of range, the API returns an error response.
 *
 * @param request ConfigureNatGatewayRequest
 * @return ConfigureNatGatewayResponse
 */
ConfigureNatGatewayResponse Client::configureNatGateway(const ConfigureNatGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureNatGatewayWithOptions(request, runtime);
}

/**
 * @summary Creates a new key-value credential under a specified AgentTeams instance.
 *
 * @description ## Operation description
 * - `ApiKey` is a sensitive field and is not returned in plaintext.
 * - `ClientToken` is used to ensure idempotence of the request. This parameter is optional but recommended.
 * - The credential name (Name) must match the regular expression `^[A-Z_][A-Z0-9_]*$`.
 * - If the specified credential name already exists in the specified instance, the error code `Credential.Name.AlreadyExists` is returned.
 *
 * @param request CreateCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCredentialResponse
 */
CreateCredentialResponse Client::createCredentialWithOptions(const CreateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  json body = {};
  if (!!request.hasApiKey()) {
    body["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCredential"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCredentialResponse>();
}

/**
 * @summary Creates a new key-value credential under a specified AgentTeams instance.
 *
 * @description ## Operation description
 * - `ApiKey` is a sensitive field and is not returned in plaintext.
 * - `ClientToken` is used to ensure idempotence of the request. This parameter is optional but recommended.
 * - The credential name (Name) must match the regular expression `^[A-Z_][A-Z0-9_]*$`.
 * - If the specified credential name already exists in the specified instance, the error code `Credential.Name.AlreadyExists` is returned.
 *
 * @param request CreateCredentialRequest
 * @return CreateCredentialResponse
 */
CreateCredentialResponse Client::createCredential(const CreateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCredentialWithOptions(request, runtime);
}

/**
 * @summary Asynchronously creates a cluster instance with the specified configurations.
 *
 * @description ## Operation description
 * - This is an asynchronous operation. After a successful call, the instance status changes to CREATING.
 * - The actual resource creation is completed asynchronously in the background. Poll the creation result by calling the `GetInstance` operation.
 * - You can pass request information by using form parameters or query parameters.
 * - If optional parameters are not provided, default values are used.
 * - Use `ClientToken` to ensure the idempotence of the request.
 *
 * @param tmpReq CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateInstanceShrinkRequest request = CreateInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasZones()) {
    request.setZonesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getZones(), "Zones", "json"));
  }

  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasInstanceSpec()) {
    query["InstanceSpec"] = request.getInstanceSpec();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasZonesShrink()) {
    query["Zones"] = request.getZonesShrink();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasPaymentType()) {
    body["PaymentType"] = request.getPaymentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Asynchronously creates a cluster instance with the specified configurations.
 *
 * @description ## Operation description
 * - This is an asynchronous operation. After a successful call, the instance status changes to CREATING.
 * - The actual resource creation is completed asynchronously in the background. Poll the creation result by calling the `GetInstance` operation.
 * - You can pass request information by using form parameters or query parameters.
 * - If optional parameters are not provided, default values are used.
 * - Use `ClientToken` to ensure the idempotence of the request.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates an MCP server.
 *
 * @description ## Operation description
 * - You must specify the `InstanceId`, `Name`, and `Addresses` parameters when you create an MCP server.
 * - The `CreateType` parameter defaults to `DIRECT_PROXY`. If you select the `HTTP_TO_MCP` mode, you must also specify `SwaggerConfig`.
 * - Set `AuthEnabled` to enable or disable authentication. If authentication is enabled, you must specify `AuthConfig`.
 * - Use `ClientToken` to ensure the idempotence of the request.
 * - Custom protocol types are supported. The `streamable` protocol is used by default.
 *
 * @param tmpReq CreateMcpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcpResponse
 */
CreateMcpResponse Client::createMcpWithOptions(const CreateMcpRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMcpShrinkRequest request = CreateMcpShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddresses()) {
    request.setAddressesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddresses(), "Addresses", "json"));
  }

  json query = {};
  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  json body = {};
  if (!!request.hasAddressesShrink()) {
    body["Addresses"] = request.getAddressesShrink();
  }

  if (!!request.hasAuthConfig()) {
    body["AuthConfig"] = request.getAuthConfig();
  }

  if (!!request.hasAuthEnabled()) {
    body["AuthEnabled"] = request.getAuthEnabled();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCreateType()) {
    body["CreateType"] = request.getCreateType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSwaggerConfig()) {
    body["SwaggerConfig"] = request.getSwaggerConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMcp"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcpResponse>();
}

/**
 * @summary Creates an MCP server.
 *
 * @description ## Operation description
 * - You must specify the `InstanceId`, `Name`, and `Addresses` parameters when you create an MCP server.
 * - The `CreateType` parameter defaults to `DIRECT_PROXY`. If you select the `HTTP_TO_MCP` mode, you must also specify `SwaggerConfig`.
 * - Set `AuthEnabled` to enable or disable authentication. If authentication is enabled, you must specify `AuthConfig`.
 * - Use `ClientToken` to ensure the idempotence of the request.
 * - Custom protocol types are supported. The `streamable` protocol is used by default.
 *
 * @param request CreateMcpRequest
 * @return CreateMcpResponse
 */
CreateMcpResponse Client::createMcp(const CreateMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcpWithOptions(request, runtime);
}

/**
 * @summary Creates an AI model under a specified AgentTeams instance. You must specify the model name, the model provider, and the list of supported protocols.
 *
 * @description Creates an AI model under a specified AgentTeams instance. You must specify the model name, the model provider, and the list of supported protocols.
 *
 * @param tmpReq CreateModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModelWithOptions(const CreateModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateModelShrinkRequest request = CreateModelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProtocols()) {
    request.setProtocolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProtocols(), "Protocols", "json"));
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProtocolsShrink()) {
    body["Protocols"] = request.getProtocolsShrink();
  }

  if (!!request.hasProvider()) {
    body["Provider"] = request.getProvider();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  if (!!request.hasProviderName()) {
    body["ProviderName"] = request.getProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateModel"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelResponse>();
}

/**
 * @summary Creates an AI model under a specified AgentTeams instance. You must specify the model name, the model provider, and the list of supported protocols.
 *
 * @description Creates an AI model under a specified AgentTeams instance. You must specify the model name, the model provider, and the list of supported protocols.
 *
 * @param request CreateModelRequest
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModel(const CreateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelWithOptions(request, runtime);
}

/**
 * @summary Creates an AI model provider under a specified AgentTeams instance. You must specify the provider name, address, supported protocol list, and API keys.
 *
 * @description Creates an AI model provider under a specified AgentTeams instance. You must specify the provider name, address, supported protocol list, and API keys.
 *
 * @param tmpReq CreateModelProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelProviderResponse
 */
CreateModelProviderResponse Client::createModelProviderWithOptions(const CreateModelProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateModelProviderShrinkRequest request = CreateModelProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiKeys()) {
    request.setApiKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApiKeys(), "ApiKeys", "json"));
  }

  if (!!tmpReq.hasProtocols()) {
    request.setProtocolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProtocols(), "Protocols", "json"));
  }

  json body = {};
  if (!!request.hasAddress()) {
    body["Address"] = request.getAddress();
  }

  if (!!request.hasApiKeysShrink()) {
    body["ApiKeys"] = request.getApiKeysShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProtocolsShrink()) {
    body["Protocols"] = request.getProtocolsShrink();
  }

  if (!!request.hasProvider()) {
    body["Provider"] = request.getProvider();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateModelProvider"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelProviderResponse>();
}

/**
 * @summary Creates an AI model provider under a specified AgentTeams instance. You must specify the provider name, address, supported protocol list, and API keys.
 *
 * @description Creates an AI model provider under a specified AgentTeams instance. You must specify the provider name, address, supported protocol list, and API keys.
 *
 * @param request CreateModelProviderRequest
 * @return CreateModelProviderResponse
 */
CreateModelProviderResponse Client::createModelProvider(const CreateModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelProviderWithOptions(request, runtime);
}

/**
 * @summary Creates an endpoint for a specified instance. Multiple component types and gateway types are supported.
 *
 * @description Creates an endpoint for a specified instance. Multiple component types and gateway types are supported.
 * - The current controller uses standard parameter binding instead of @RequestBody, so parameters are better suited for query/form-based transmission.
 * - The domain field is trimmed and converted to lowercase on the server side.
 * - The query and headers must be in JSON object string format and cannot be arrays.
 * - The create operation only saves data to the database. The AI Gateway domain name synchronization logic is triggered only during an update when the conditions ELEMENT/MATRIX + AI_GATEWAY + INTERNET are met and the domain name or certificate has changed.
 *
 * @param request CreateServiceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceEndpointResponse
 */
CreateServiceEndpointResponse Client::createServiceEndpointWithOptions(const CreateServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasComponent()) {
    query["Component"] = request.getComponent();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceEndpoint"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceEndpointResponse>();
}

/**
 * @summary Creates an endpoint for a specified instance. Multiple component types and gateway types are supported.
 *
 * @description Creates an endpoint for a specified instance. Multiple component types and gateway types are supported.
 * - The current controller uses standard parameter binding instead of @RequestBody, so parameters are better suited for query/form-based transmission.
 * - The domain field is trimmed and converted to lowercase on the server side.
 * - The query and headers must be in JSON object string format and cannot be arrays.
 * - The create operation only saves data to the database. The AI Gateway domain name synchronization logic is triggered only during an update when the conditions ELEMENT/MATRIX + AI_GATEWAY + INTERNET are met and the domain name or certificate has changed.
 *
 * @param request CreateServiceEndpointRequest
 * @return CreateServiceEndpointResponse
 */
CreateServiceEndpointResponse Client::createServiceEndpoint(const CreateServiceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceEndpointWithOptions(request, runtime);
}

/**
 * @summary Creates a team under a specified instance. You can set the team name, description, administrator, and initial member list.
 *
 * @description Creates a team under a specified instance. You can set the team name, description, administrator, and initial member list.
 *
 * @param tmpReq CreateTeamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTeamResponse
 */
CreateTeamResponse Client::createTeamWithOptions(const CreateTeamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTeamShrinkRequest request = CreateTeamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTeamMembers()) {
    request.setTeamMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTeamMembers(), "TeamMembers", "json"));
  }

  json query = {};
  if (!!request.hasAdminName()) {
    query["AdminName"] = request.getAdminName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTeamMembersShrink()) {
    query["TeamMembers"] = request.getTeamMembersShrink();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTeam"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTeamResponse>();
}

/**
 * @summary Creates a team under a specified instance. You can set the team name, description, administrator, and initial member list.
 *
 * @description Creates a team under a specified instance. You can set the team name, description, administrator, and initial member list.
 *
 * @param request CreateTeamRequest
 * @return CreateTeamResponse
 */
CreateTeamResponse Client::createTeam(const CreateTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTeamWithOptions(request, runtime);
}

/**
 * @summary Creates a user under a specified instance. You can set the username, display name, email address, authentication method, note, and password. If no password is specified, the system automatically generates an initial password and returns it in the response.
 *
 * @description Creates a user under a specified instance. You can set the username, display name, email address, authentication method, note, and password. If no password is specified, the system automatically generates an initial password and returns it in the response.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMethod()) {
    query["AuthMethod"] = request.getAuthMethod();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.getNote();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2026-06-05"},
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
 * @summary Creates a user under a specified instance. You can set the username, display name, email address, authentication method, note, and password. If no password is specified, the system automatically generates an initial password and returns it in the response.
 *
 * @description Creates a user under a specified instance. You can set the username, display name, email address, authentication method, note, and password. If no password is specified, the system automatically generates an initial password and returns it in the response.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary Creates a Worker instance with specified configurations such as model, skills, template, MCP servers, and channels.
 *
 * @description Creates a Worker instance with specified configurations such as model, skills, template, MCP servers, and channels.
 *
 * @param tmpReq CreateWorkerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkerResponse
 */
CreateWorkerResponse Client::createWorkerWithOptions(const CreateWorkerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkerShrinkRequest request = CreateWorkerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChannels()) {
    request.setChannelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChannels(), "Channels", "json"));
  }

  if (!!tmpReq.hasCredentials()) {
    request.setCredentialsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentials(), "Credentials", "json"));
  }

  if (!!tmpReq.hasGroups()) {
    request.setGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroups(), "Groups", "json"));
  }

  if (!!tmpReq.hasLimitConfig()) {
    request.setLimitConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLimitConfig(), "LimitConfig", "json"));
  }

  if (!!tmpReq.hasMcpServers()) {
    request.setMcpServersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMcpServers(), "McpServers", "json"));
  }

  if (!!tmpReq.hasModel()) {
    request.setModelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModel(), "Model", "json"));
  }

  if (!!tmpReq.hasSkills()) {
    request.setSkillsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSkills(), "Skills", "json"));
  }

  if (!!tmpReq.hasSubagents()) {
    request.setSubagentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubagents(), "Subagents", "json"));
  }

  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplate(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasAgents()) {
    query["Agents"] = request.getAgents();
  }

  if (!!request.hasChannelsShrink()) {
    query["Channels"] = request.getChannelsShrink();
  }

  if (!!request.hasDeployType()) {
    query["DeployType"] = request.getDeployType();
  }

  if (!!request.hasGroupsShrink()) {
    query["Groups"] = request.getGroupsShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLimitConfigShrink()) {
    query["LimitConfig"] = request.getLimitConfigShrink();
  }

  if (!!request.hasMcpServersShrink()) {
    query["McpServers"] = request.getMcpServersShrink();
  }

  if (!!request.hasModelShrink()) {
    query["Model"] = request.getModelShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSkillsShrink()) {
    query["Skills"] = request.getSkillsShrink();
  }

  if (!!request.hasSoul()) {
    query["Soul"] = request.getSoul();
  }

  if (!!request.hasSubagentsShrink()) {
    query["Subagents"] = request.getSubagentsShrink();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.getTemplateShrink();
  }

  if (!!request.hasVersionCode()) {
    query["VersionCode"] = request.getVersionCode();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCredentialsShrink()) {
    body["Credentials"] = request.getCredentialsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorker"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkerResponse>();
}

/**
 * @summary Creates a Worker instance with specified configurations such as model, skills, template, MCP servers, and channels.
 *
 * @description Creates a Worker instance with specified configurations such as model, skills, template, MCP servers, and channels.
 *
 * @param request CreateWorkerRequest
 * @return CreateWorkerResponse
 */
CreateWorkerResponse Client::createWorker(const CreateWorkerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkerWithOptions(request, runtime);
}

/**
 * @summary Creates a local management bootstrap token for a Worker, with support for specifying the network type.
 *
 * @description Creates a local management bootstrap token for a Worker, with support for specifying the network type.
 *
 * @param request CreateWorkerBootstrapTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkerBootstrapTokenResponse
 */
CreateWorkerBootstrapTokenResponse Client::createWorkerBootstrapTokenWithOptions(const CreateWorkerBootstrapTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWorkerBootstrapToken"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkerBootstrapTokenResponse>();
}

/**
 * @summary Creates a local management bootstrap token for a Worker, with support for specifying the network type.
 *
 * @description Creates a local management bootstrap token for a Worker, with support for specifying the network type.
 *
 * @param request CreateWorkerBootstrapTokenRequest
 * @return CreateWorkerBootstrapTokenResponse
 */
CreateWorkerBootstrapTokenResponse Client::createWorkerBootstrapToken(const CreateWorkerBootstrapTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkerBootstrapTokenWithOptions(request, runtime);
}

/**
 * @summary Deletes an existing credential from a specified AgentTeams instance. The credential cannot be deleted if it is still attached to a Worker.
 *
 * @description Deletes an existing credential from a specified AgentTeams instance. The credential cannot be deleted if it is still attached to a Worker.
 *
 * @param request DeleteCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredentialWithOptions(const DeleteCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteCredential"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCredentialResponse>();
}

/**
 * @summary Deletes an existing credential from a specified AgentTeams instance. The credential cannot be deleted if it is still attached to a Worker.
 *
 * @description Deletes an existing credential from a specified AgentTeams instance. The credential cannot be deleted if it is still attached to a Worker.
 *
 * @param request DeleteCredentialRequest
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredential(const DeleteCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCredentialWithOptions(request, runtime);
}

/**
 * @summary Releases a specified AgentTeams instance and cleans up related resources. Supports GET and POST methods. After a successful call, the instance status changes to DELETING, and resource cleanup is performed asynchronously in the background.
 *
 * @description Releases a specified AgentTeams instance and cleans up related resources. Supports GET and POST methods. After a successful call, the instance status changes to DELETING, and resource cleanup is performed asynchronously in the background.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Releases a specified AgentTeams instance and cleans up related resources. Supports GET and POST methods. After a successful call, the instance status changes to DELETING, and resource cleanup is performed asynchronously in the background.
 *
 * @description Releases a specified AgentTeams instance and cleans up related resources. Supports GET and POST methods. After a successful call, the instance status changes to DELETING, and resource cleanup is performed asynchronously in the background.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes an MCP server from a specified AgentTeams instance. The server cannot be deleted if it is associated with any Workers.
 *
 * @description Deletes an MCP server from a specified AgentTeams instance. The server cannot be deleted if it is associated with any Workers.
 *
 * @param request DeleteMcpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcpResponse
 */
DeleteMcpResponse Client::deleteMcpWithOptions(const DeleteMcpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcp"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcpResponse>();
}

/**
 * @summary Deletes an MCP server from a specified AgentTeams instance. The server cannot be deleted if it is associated with any Workers.
 *
 * @description Deletes an MCP server from a specified AgentTeams instance. The server cannot be deleted if it is associated with any Workers.
 *
 * @param request DeleteMcpRequest
 * @return DeleteMcpResponse
 */
DeleteMcpResponse Client::deleteMcp(const DeleteMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcpWithOptions(request, runtime);
}

/**
 * @summary Deletes an AI model from a specified AgentTeams instance. The model cannot be deleted if it is still associated with a Worker.
 *
 * @description Deletes an AI model from a specified AgentTeams instance. The model cannot be deleted if it is still associated with a Worker.
 *
 * @param request DeleteModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModelWithOptions(const DeleteModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteModel"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelResponse>();
}

/**
 * @summary Deletes an AI model from a specified AgentTeams instance. The model cannot be deleted if it is still associated with a Worker.
 *
 * @description Deletes an AI model from a specified AgentTeams instance. The model cannot be deleted if it is still associated with a Worker.
 *
 * @param request DeleteModelRequest
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModel(const DeleteModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelWithOptions(request, runtime);
}

/**
 * @summary Deletes an AI model provider from a specified AgentTeams instance. The provider cannot be deleted if it still has associated models.
 *
 * @description Deletes an AI model provider from a specified AgentTeams instance. The provider cannot be deleted if it still has associated models.
 *
 * @param request DeleteModelProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelProviderResponse
 */
DeleteModelProviderResponse Client::deleteModelProviderWithOptions(const DeleteModelProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteModelProvider"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelProviderResponse>();
}

/**
 * @summary Deletes an AI model provider from a specified AgentTeams instance. The provider cannot be deleted if it still has associated models.
 *
 * @description Deletes an AI model provider from a specified AgentTeams instance. The provider cannot be deleted if it still has associated models.
 *
 * @param request DeleteModelProviderRequest
 * @return DeleteModelProviderResponse
 */
DeleteModelProviderResponse Client::deleteModelProvider(const DeleteModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelProviderWithOptions(request, runtime);
}

/**
 * @summary Deletes an endpoint from a specified AgentTeams instance and cleans up related resources.
 *
 * @description Deletes an endpoint from a specified AgentTeams instance and cleans up related resources.
 * - This operation supports GET or POST methods.
 * - If the target endpoint is of the WORKER type, the system automatically cleans up associated APIG/AI Gateway cloud resources and KubeOne worker service configurations.
 * - The request parameters must include instanceId and endpointId, and neither can be empty.
 * - A successful response returns HTTP status code 200 and a success flag. An error response returns the corresponding HTTP status code (such as 400, 404, or 409) and an error message.
 *
 * @param request DeleteServiceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceEndpointResponse
 */
DeleteServiceEndpointResponse Client::deleteServiceEndpointWithOptions(const DeleteServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteServiceEndpoint"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceEndpointResponse>();
}

/**
 * @summary Deletes an endpoint from a specified AgentTeams instance and cleans up related resources.
 *
 * @description Deletes an endpoint from a specified AgentTeams instance and cleans up related resources.
 * - This operation supports GET or POST methods.
 * - If the target endpoint is of the WORKER type, the system automatically cleans up associated APIG/AI Gateway cloud resources and KubeOne worker service configurations.
 * - The request parameters must include instanceId and endpointId, and neither can be empty.
 * - A successful response returns HTTP status code 200 and a success flag. An error response returns the corresponding HTTP status code (such as 400, 404, or 409) and an error message.
 *
 * @param request DeleteServiceEndpointRequest
 * @return DeleteServiceEndpointResponse
 */
DeleteServiceEndpointResponse Client::deleteServiceEndpoint(const DeleteServiceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes a team under a specified instance. After deletion, the team and associated resources enter an asynchronous cleanup process.
 *
 * @description Deletes a team under a specified instance. After deletion, the team and associated resources enter an asynchronous cleanup process.
 *
 * @param request DeleteTeamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTeamResponse
 */
DeleteTeamResponse Client::deleteTeamWithOptions(const DeleteTeamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTeam"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTeamResponse>();
}

/**
 * @summary Deletes a team under a specified instance. After deletion, the team and associated resources enter an asynchronous cleanup process.
 *
 * @description Deletes a team under a specified instance. After deletion, the team and associated resources enter an asynchronous cleanup process.
 *
 * @param request DeleteTeamRequest
 * @return DeleteTeamResponse
 */
DeleteTeamResponse Client::deleteTeam(const DeleteTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTeamWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified user from a specified instance. After deletion, the user cannot log on to or access instance resources. Proceed with caution.
 *
 * @description Deletes a specified user from a specified instance. After deletion, the user cannot log on to or access instance resources. Proceed with caution.
 *
 * @param request DeleteUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUserWithOptions(const DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUser"},
    {"version" , "2026-06-05"},
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
 * @summary Deletes a specified user from a specified instance. After deletion, the user cannot log on to or access instance resources. Proceed with caution.
 *
 * @description Deletes a specified user from a specified instance. After deletion, the user cannot log on to or access instance resources. Proceed with caution.
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a Worker under a specified instance.
 *
 * @description Deletes a Worker under a specified instance.
 *
 * @param request DeleteWorkerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkerResponse
 */
DeleteWorkerResponse Client::deleteWorkerWithOptions(const DeleteWorkerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorker"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkerResponse>();
}

/**
 * @summary Deletes a Worker under a specified instance.
 *
 * @description Deletes a Worker under a specified instance.
 *
 * @param request DeleteWorkerRequest
 * @return DeleteWorkerResponse
 */
DeleteWorkerResponse Client::deleteWorker(const DeleteWorkerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkerWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified credential under an AgentTeams instance, including the status, description, and list of bound Workers.
 *
 * @description Queries the details of a specified credential under an AgentTeams instance, including the status, description, and list of bound Workers.
 *
 * @param request GetCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredentialWithOptions(const GetCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCredential"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCredentialResponse>();
}

/**
 * @summary Queries the details of a specified credential under an AgentTeams instance, including the status, description, and list of bound Workers.
 *
 * @description Queries the details of a specified credential under an AgentTeams instance, including the status, description, and list of bound Workers.
 *
 * @param request GetCredentialRequest
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredential(const GetCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCredentialWithOptions(request, runtime);
}

/**
 * @summary Queries the binding details of an upstream identity provider for a specified instance and identity provider type, including the logon callback URL and metadata.
 *
 * @description Queries the binding details of an upstream identity provider for a specified instance and identity provider type, including the logon callback URL and metadata.
 *
 * @param request GetIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProviderWithOptions(const GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderType()) {
    query["IdentityProviderType"] = request.getIdentityProviderType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityProvider"},
    {"version" , "2026-06-05"},
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
 * @summary Queries the binding details of an upstream identity provider for a specified instance and identity provider type, including the logon callback URL and metadata.
 *
 * @description Queries the binding details of an upstream identity provider for a specified instance and identity provider type, including the logon callback URL and metadata.
 *
 * @param request GetIdentityProviderRequest
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProvider(const GetIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified instance by instance ID. Supports GET and POST methods. A successful response returns the detailed configuration and status of the instance.
 *
 * @description Queries the details of a specified instance by instance ID. Supports GET and POST methods. A successful response returns the detailed configuration and status of the instance.
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Queries the details of a specified instance by instance ID. Supports GET and POST methods. A successful response returns the detailed configuration and status of the instance.
 *
 * @description Queries the details of a specified instance by instance ID. Supports GET and POST methods. A successful response returns the detailed configuration and status of the instance.
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the status of asynchronous tasks associated with a specified AgentTeams instance, with pagination support.
 *
 * @description Queries the status of asynchronous tasks associated with a specified AgentTeams instance, with paging support.
 * - This operation queries the execution status of asynchronous tasks under a specific AgentTeams instance.
 * - Currently, only instance creation tasks related to the instance lifecycle are supported.
 * - Use the taskCode parameter to specify the task type to query. The default is the instance creation task.
 * - Use maxResults and nextToken for result paging.
 * - When a task is in the PAUSED state, the response includes information about the action the user needs to take (recoveryMessage).
 * - Querying task status directly by taskId is not currently supported.
 *
 * @param request GetInstanceAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceAsyncTaskResponse
 */
GetInstanceAsyncTaskResponse Client::getInstanceAsyncTaskWithOptions(const GetInstanceAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskCode()) {
    query["TaskCode"] = request.getTaskCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceAsyncTask"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceAsyncTaskResponse>();
}

/**
 * @summary Queries the status of asynchronous tasks associated with a specified AgentTeams instance, with pagination support.
 *
 * @description Queries the status of asynchronous tasks associated with a specified AgentTeams instance, with paging support.
 * - This operation queries the execution status of asynchronous tasks under a specific AgentTeams instance.
 * - Currently, only instance creation tasks related to the instance lifecycle are supported.
 * - Use the taskCode parameter to specify the task type to query. The default is the instance creation task.
 * - Use maxResults and nextToken for result paging.
 * - When a task is in the PAUSED state, the response includes information about the action the user needs to take (recoveryMessage).
 * - Querying task status directly by taskId is not currently supported.
 *
 * @param request GetInstanceAsyncTaskRequest
 * @return GetInstanceAsyncTaskResponse
 */
GetInstanceAsyncTaskResponse Client::getInstanceAsyncTask(const GetInstanceAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the RAM authorization URL required to mount OSS to ACS for an instance.
 *
 * @description Retrieves the RAM authorization URL required to mount OSS to ACS for an instance.
 * - This operation supports GET and POST methods.
 * - The X-User-Id header must be included in the request to verify instance ownership.
 * - The InstanceId parameter is required to specify the instance. The backend generates the authorization URL based on the instance information.
 * - A successful response returns the RAM console authorization URL without creating a RAM role or policy.
 *
 * @param request GetInstanceOssMountRamAuthorizeUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceOssMountRamAuthorizeUrlResponse
 */
GetInstanceOssMountRamAuthorizeUrlResponse Client::getInstanceOssMountRamAuthorizeUrlWithOptions(const GetInstanceOssMountRamAuthorizeUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceOssMountRamAuthorizeUrl"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceOssMountRamAuthorizeUrlResponse>();
}

/**
 * @summary Retrieves the RAM authorization URL required to mount OSS to ACS for an instance.
 *
 * @description Retrieves the RAM authorization URL required to mount OSS to ACS for an instance.
 * - This operation supports GET and POST methods.
 * - The X-User-Id header must be included in the request to verify instance ownership.
 * - The InstanceId parameter is required to specify the instance. The backend generates the authorization URL based on the instance information.
 * - A successful response returns the RAM console authorization URL without creating a RAM role or policy.
 *
 * @param request GetInstanceOssMountRamAuthorizeUrlRequest
 * @return GetInstanceOssMountRamAuthorizeUrlResponse
 */
GetInstanceOssMountRamAuthorizeUrlResponse Client::getInstanceOssMountRamAuthorizeUrl(const GetInstanceOssMountRamAuthorizeUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceOssMountRamAuthorizeUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified MCP server, including the address, authentication configuration, deployment status, and protocol.
 *
 * @description Queries the details of a specified MCP server, including the address, authentication configuration, deployment status, and protocol.
 *
 * @param request GetMcpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcpResponse
 */
GetMcpResponse Client::getMcpWithOptions(const GetMcpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMcp"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcpResponse>();
}

/**
 * @summary Queries the details of a specified MCP server, including the address, authentication configuration, deployment status, and protocol.
 *
 * @description Queries the details of a specified MCP server, including the address, authentication configuration, deployment status, and protocol.
 *
 * @param request GetMcpRequest
 * @return GetMcpResponse
 */
GetMcpResponse Client::getMcp(const GetMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcpWithOptions(request, runtime);
}

/**
 * @summary Queries the model call summary for a specified AgentTeams instance within a specified time range, including today\\"s and this week\\"s call counts, change rates, call frequency, and provider distribution.
 *
 * @description Queries the model call summary for a specified AgentTeams instance within a specified time range, including today\\"s and this week\\"s call counts, change rates, call frequency, and provider distribution.
 *
 * @param request GetModelInvocationSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelInvocationSummaryResponse
 */
GetModelInvocationSummaryResponse Client::getModelInvocationSummaryWithOptions(const GetModelInvocationSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelInvocationSummary"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelInvocationSummaryResponse>();
}

/**
 * @summary Queries the model call summary for a specified AgentTeams instance within a specified time range, including today\\"s and this week\\"s call counts, change rates, call frequency, and provider distribution.
 *
 * @description Queries the model call summary for a specified AgentTeams instance within a specified time range, including today\\"s and this week\\"s call counts, change rates, call frequency, and provider distribution.
 *
 * @param request GetModelInvocationSummaryRequest
 * @return GetModelInvocationSummaryResponse
 */
GetModelInvocationSummaryResponse Client::getModelInvocationSummary(const GetModelInvocationSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModelInvocationSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a single AI model provider, including the name, address, protocol list, API keys, and deployment status.
 *
 * @description Queries the details of a single AI model provider, including the name, address, protocol list, API keys, and deployment status.
 *
 * @param request GetModelProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelProviderResponse
 */
GetModelProviderResponse Client::getModelProviderWithOptions(const GetModelProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelProvider"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelProviderResponse>();
}

/**
 * @summary Queries the details of a single AI model provider, including the name, address, protocol list, API keys, and deployment status.
 *
 * @description Queries the details of a single AI model provider, including the name, address, protocol list, API keys, and deployment status.
 *
 * @param request GetModelProviderRequest
 * @return GetModelProviderResponse
 */
GetModelProviderResponse Client::getModelProvider(const GetModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModelProviderWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration status of the NAT gateway and its SNAT rules for a specified instance.
 *
 * @description Queries the configuration status of the NAT gateway and its SNAT rules for a specified instance.
 * - This API allows you to retrieve the NAT gateway configuration details and SNAT rule status associated with a specific instance. This operation supports GET or POST method calls and requires the instanceId as a request parameter to specify the instance to query.
 * - Ensure that the provided instanceId is valid and belongs to your account.
 * - Based on the returned status values (such as READY, NEED_CONFIGURE_NAT_GATEWAY, or NEED_CONFIGURE_SNAT_RULE), take the corresponding actions to complete the NAT gateway or SNAT rule configuration.
 * - When the status is NEED_CONFIGURE_NAT_GATEWAY, it indicates that no available NAT gateway exists in the current VPC. NEED_CONFIGURE_SNAT_RULE means that a NAT gateway exists but some subnet CIDRs are not covered by SNAT rules.
 *
 * @param request GetNatGatewayStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNatGatewayStatusResponse
 */
GetNatGatewayStatusResponse Client::getNatGatewayStatusWithOptions(const GetNatGatewayStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNatGatewayStatus"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNatGatewayStatusResponse>();
}

/**
 * @summary Queries the configuration status of the NAT gateway and its SNAT rules for a specified instance.
 *
 * @description Queries the configuration status of the NAT gateway and its SNAT rules for a specified instance.
 * - This API allows you to retrieve the NAT gateway configuration details and SNAT rule status associated with a specific instance. This operation supports GET or POST method calls and requires the instanceId as a request parameter to specify the instance to query.
 * - Ensure that the provided instanceId is valid and belongs to your account.
 * - Based on the returned status values (such as READY, NEED_CONFIGURE_NAT_GATEWAY, or NEED_CONFIGURE_SNAT_RULE), take the corresponding actions to complete the NAT gateway or SNAT rule configuration.
 * - When the status is NEED_CONFIGURE_NAT_GATEWAY, it indicates that no available NAT gateway exists in the current VPC. NEED_CONFIGURE_SNAT_RULE means that a NAT gateway exists but some subnet CIDRs are not covered by SNAT rules.
 *
 * @param request GetNatGatewayStatusRequest
 * @return GetNatGatewayStatusResponse
 */
GetNatGatewayStatusResponse Client::getNatGatewayStatus(const GetNatGatewayStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNatGatewayStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an endpoint with a specified ID. You can verify the endpoint by instance ID.
 *
 * @description Queries the details of an endpoint with a specified ID. You can verify the endpoint by instance ID.
 * - This API operation queries the configuration and status information of a single endpoint based on the endpointId.
 * - The optional parameter instanceId is used to verify whether the endpoint belongs to a specific instance.
 * - The request supports both GET and POST methods. GET passes parameters through the query string, while POST submits parameters through form data.
 * - If endpointId is missing or empty, an InvalidParameter error is returned.
 * - If the requested endpoint does not exist, does not belong to the specified instance, or does not belong to the current user, a resource-not-found error is returned.
 *
 * @param request GetServiceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceEndpointResponse
 */
GetServiceEndpointResponse Client::getServiceEndpointWithOptions(const GetServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceEndpoint"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceEndpointResponse>();
}

/**
 * @summary Queries the details of an endpoint with a specified ID. You can verify the endpoint by instance ID.
 *
 * @description Queries the details of an endpoint with a specified ID. You can verify the endpoint by instance ID.
 * - This API operation queries the configuration and status information of a single endpoint based on the endpointId.
 * - The optional parameter instanceId is used to verify whether the endpoint belongs to a specific instance.
 * - The request supports both GET and POST methods. GET passes parameters through the query string, while POST submits parameters through form data.
 * - If endpointId is missing or empty, an InvalidParameter error is returned.
 * - If the requested endpoint does not exist, does not belong to the specified instance, or does not belong to the current user, a resource-not-found error is returned.
 *
 * @param request GetServiceEndpointRequest
 * @return GetServiceEndpointResponse
 */
GetServiceEndpointResponse Client::getServiceEndpoint(const GetServiceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the task statistics summary of a specified AgentTeams instance within a specified time range, including total tasks, average task duration, token consumption, and status distribution.
 *
 * @description Queries the task statistics summary of a specified AgentTeams instance within a specified time range, including total tasks, average task duration, token consumption, and status distribution.
 *
 * @param request GetTaskStatsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskStatsSummaryResponse
 */
GetTaskStatsSummaryResponse Client::getTaskStatsSummaryWithOptions(const GetTaskStatsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskStatsSummary"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskStatsSummaryResponse>();
}

/**
 * @summary Queries the task statistics summary of a specified AgentTeams instance within a specified time range, including total tasks, average task duration, token consumption, and status distribution.
 *
 * @description Queries the task statistics summary of a specified AgentTeams instance within a specified time range, including total tasks, average task duration, token consumption, and status distribution.
 *
 * @param request GetTaskStatsSummaryRequest
 * @return GetTaskStatsSummaryResponse
 */
GetTaskStatsSummaryResponse Client::getTaskStatsSummary(const GetTaskStatsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskStatsSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified team under a specified instance, including the description, administrator, leader, members, associated workers, and room status.
 *
 * @description Queries the details of a specified team under a specified instance, including the description, administrator, leader, members, associated workers, and room status.
 *
 * @param request GetTeamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTeamResponse
 */
GetTeamResponse Client::getTeamWithOptions(const GetTeamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTeam"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTeamResponse>();
}

/**
 * @summary Queries the details of a specified team under a specified instance, including the description, administrator, leader, members, associated workers, and room status.
 *
 * @description Queries the details of a specified team under a specified instance, including the description, administrator, leader, members, associated workers, and room status.
 *
 * @param request GetTeamRequest
 * @return GetTeamResponse
 */
GetTeamResponse Client::getTeam(const GetTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTeamWithOptions(request, runtime);
}

/**
 * @summary Queries the token consumption trend of a specified AgentTeams instance within a specified time range, supports grouping by time dimension, and returns time series data that can be used for charting.
 *
 * @description Queries the token consumption trend of a specified AgentTeams instance within a specified time range, supports grouping by time dimension, and returns time series data that can be used for charting.
 *
 * @param request GetTokenTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenTrendResponse
 */
GetTokenTrendResponse Client::getTokenTrendWithOptions(const GetTokenTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.getGroupBy();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTokenTrend"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenTrendResponse>();
}

/**
 * @summary Queries the token consumption trend of a specified AgentTeams instance within a specified time range, supports grouping by time dimension, and returns time series data that can be used for charting.
 *
 * @description Queries the token consumption trend of a specified AgentTeams instance within a specified time range, supports grouping by time dimension, and returns time series data that can be used for charting.
 *
 * @param request GetTokenTrendRequest
 * @return GetTokenTrendResponse
 */
GetTokenTrendResponse Client::getTokenTrend(const GetTokenTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTokenTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the tool calling distribution of a specified AgentTeams instance within a specified time range, and returns the number of calls for each tool and the total number of calls.
 *
 * @description Queries the tool calling distribution of a specified AgentTeams instance within a specified time range, and returns the number of calls for each tool and the total number of calls.
 *
 * @param request GetToolCallDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetToolCallDistributionResponse
 */
GetToolCallDistributionResponse Client::getToolCallDistributionWithOptions(const GetToolCallDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetToolCallDistribution"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetToolCallDistributionResponse>();
}

/**
 * @summary Queries the tool calling distribution of a specified AgentTeams instance within a specified time range, and returns the number of calls for each tool and the total number of calls.
 *
 * @description Queries the tool calling distribution of a specified AgentTeams instance within a specified time range, and returns the number of calls for each tool and the total number of calls.
 *
 * @param request GetToolCallDistributionRequest
 * @return GetToolCallDistributionResponse
 */
GetToolCallDistributionResponse Client::getToolCallDistribution(const GetToolCallDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getToolCallDistributionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified user under a specified instance, including the username, display name, email address, authentication method, status, and creation time.
 *
 * @description Queries the details of a specified user under a specified instance, including the username, display name, email address, authentication method, status, and creation time.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2026-06-05"},
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
 * @summary Queries the details of a specified user under a specified instance, including the username, display name, email address, authentication method, status, and creation time.
 *
 * @description Queries the details of a specified user under a specified instance, including the username, display name, email address, authentication method, status, and creation time.
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary Retrieves the initial password of a specified user under a specified instance. The initial password is generated by the system or specified by the user when the user is created.
 *
 * @description Retrieves the initial password of a specified user under a specified instance. The initial password is generated by the system or specified by the user when the user is created.
 *
 * @param request GetUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserPasswordResponse
 */
GetUserPasswordResponse Client::getUserPasswordWithOptions(const GetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserPassword"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserPasswordResponse>();
}

/**
 * @summary Retrieves the initial password of a specified user under a specified instance. The initial password is generated by the system or specified by the user when the user is created.
 *
 * @description Retrieves the initial password of a specified user under a specified instance. The initial password is generated by the system or specified by the user when the user is created.
 *
 * @param request GetUserPasswordRequest
 * @return GetUserPasswordResponse
 */
GetUserPasswordResponse Client::getUserPassword(const GetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified worker, including configurations such as model, skills, sub-agents, MCP servers, channels, and quotas.
 *
 * @description Queries the details of a specified worker, including configurations such as model, skills, sub-agents, MCP servers, channels, and quotas.
 *
 * @param request GetWorkerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkerResponse
 */
GetWorkerResponse Client::getWorkerWithOptions(const GetWorkerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorker"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkerResponse>();
}

/**
 * @summary Queries the details of a specified worker, including configurations such as model, skills, sub-agents, MCP servers, channels, and quotas.
 *
 * @description Queries the details of a specified worker, including configurations such as model, skills, sub-agents, MCP servers, channels, and quotas.
 *
 * @param request GetWorkerRequest
 * @return GetWorkerResponse
 */
GetWorkerResponse Client::getWorker(const GetWorkerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkerWithOptions(request, runtime);
}

/**
 * @summary Queries the startup options for local Worker management and returns available network types.
 *
 * @description Queries the startup options for local Worker management and returns available network types.
 *
 * @param request GetWorkerBootstrapOptionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkerBootstrapOptionsResponse
 */
GetWorkerBootstrapOptionsResponse Client::getWorkerBootstrapOptionsWithOptions(const GetWorkerBootstrapOptionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkerBootstrapOptions"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkerBootstrapOptionsResponse>();
}

/**
 * @summary Queries the startup options for local Worker management and returns available network types.
 *
 * @description Queries the startup options for local Worker management and returns available network types.
 *
 * @param request GetWorkerBootstrapOptionsRequest
 * @return GetWorkerBootstrapOptionsResponse
 */
GetWorkerBootstrapOptionsResponse Client::getWorkerBootstrapOptions(const GetWorkerBootstrapOptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkerBootstrapOptionsWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum upgradable version of a worker.
 *
 * @description Queries the maximum upgradable version of a worker.
 *
 * @param request GetWorkerMaxVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkerMaxVersionResponse
 */
GetWorkerMaxVersionResponse Client::getWorkerMaxVersionWithOptions(const GetWorkerMaxVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkerMaxVersion"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkerMaxVersionResponse>();
}

/**
 * @summary Queries the maximum upgradable version of a worker.
 *
 * @description Queries the maximum upgradable version of a worker.
 *
 * @param request GetWorkerMaxVersionRequest
 * @return GetWorkerMaxVersionResponse
 */
GetWorkerMaxVersionResponse Client::getWorkerMaxVersion(const GetWorkerMaxVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkerMaxVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the Worker statistics summary, including the total number of workers, the number of running workers, the number of stopped workers, and more.
 *
 * @description Queries the Worker statistics summary, including the total number of workers, the number of running workers, the number of stopped workers, and more.
 *
 * @param request GetWorkerStatsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkerStatsSummaryResponse
 */
GetWorkerStatsSummaryResponse Client::getWorkerStatsSummaryWithOptions(const GetWorkerStatsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkerStatsSummary"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkerStatsSummaryResponse>();
}

/**
 * @summary Queries the Worker statistics summary, including the total number of workers, the number of running workers, the number of stopped workers, and more.
 *
 * @description Queries the Worker statistics summary, including the total number of workers, the number of running workers, the number of stopped workers, and more.
 *
 * @param request GetWorkerStatsSummaryRequest
 * @return GetWorkerStatsSummaryResponse
 */
GetWorkerStatsSummaryResponse Client::getWorkerStatsSummary(const GetWorkerStatsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkerStatsSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the credential list under a specified AgentTeams instance with paging, returning credential summary information and the number of Workers attached to each credential.
 *
 * @description Queries the credential list under a specified AgentTeams instance with paging, returning credential summary information and the number of Workers attached to each credential.
 *
 * @param request ListCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentialsWithOptions(const ListCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNameLike()) {
    query["NameLike"] = request.getNameLike();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCredentials"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCredentialsResponse>();
}

/**
 * @summary Queries the credential list under a specified AgentTeams instance with paging, returning credential summary information and the number of Workers attached to each credential.
 *
 * @description Queries the credential list under a specified AgentTeams instance with paging, returning credential summary information and the number of Workers attached to each credential.
 *
 * @param request ListCredentialsRequest
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentials(const ListCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCredentialsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of upstream identity provider bindings for a specified instance, with support for paginated responses.
 *
 * @description Queries the list of upstream identity provider bindings for a specified instance, with support for paginated responses.
 *
 * @param request ListIdentityProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProvidersWithOptions(const ListIdentityProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIdentityProviders"},
    {"version" , "2026-06-05"},
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
 * @summary Queries the list of upstream identity provider bindings for a specified instance, with support for paginated responses.
 *
 * @description Queries the list of upstream identity provider bindings for a specified instance, with support for paginated responses.
 *
 * @param request ListIdentityProvidersRequest
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProviders(const ListIdentityProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentityProvidersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of instances that meet the specified conditions. Supports pagination and fuzzy match. Supports GET and POST methods. The list is returned in reverse chronological order by creation time.
 *
 * @description Queries a list of instances that meet the specified conditions. Supports pagination and fuzzy match. Supports GET and POST methods. The list is returned in reverse chronological order by creation time.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries a list of instances that meet the specified conditions. Supports pagination and fuzzy match. Supports GET and POST methods. The list is returned in reverse chronological order by creation time.
 *
 * @description Queries a list of instances that meet the specified conditions. Supports pagination and fuzzy match. Supports GET and POST methods. The list is returned in reverse chronological order by creation time.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of tools provided by a specified MCP server, including tool names, titles, descriptions, and input schemas.
 *
 * @description Queries the list of tools provided by a specified MCP server, including tool names, titles, descriptions, and input schemas.
 *
 * @param request ListMcpToolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcpToolsResponse
 */
ListMcpToolsResponse Client::listMcpToolsWithOptions(const ListMcpToolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMcpTools"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcpToolsResponse>();
}

/**
 * @summary Queries the list of tools provided by a specified MCP server, including tool names, titles, descriptions, and input schemas.
 *
 * @description Queries the list of tools provided by a specified MCP server, including tool names, titles, descriptions, and input schemas.
 *
 * @param request ListMcpToolsRequest
 * @return ListMcpToolsResponse
 */
ListMcpToolsResponse Client::listMcpTools(const ListMcpToolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcpToolsWithOptions(request, runtime);
}

/**
 * @summary Queries the MCP server list under a specified AgentTeams instance by using paging.
 *
 * @description Queries the MCP server list under a specified AgentTeams instance by using paging.
 *
 * @param request ListMcpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcpsResponse
 */
ListMcpsResponse Client::listMcpsWithOptions(const ListMcpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMcps"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcpsResponse>();
}

/**
 * @summary Queries the MCP server list under a specified AgentTeams instance by using paging.
 *
 * @description Queries the MCP server list under a specified AgentTeams instance by using paging.
 *
 * @param request ListMcpsRequest
 * @return ListMcpsResponse
 */
ListMcpsResponse Client::listMcps(const ListMcpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcpsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of AI model providers under a specified AgentTeams instance. Paging is supported.
 *
 * @description Queries the list of AI model providers under a specified AgentTeams instance. Paging is supported.
 *
 * @param request ListModelProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelProvidersResponse
 */
ListModelProvidersResponse Client::listModelProvidersWithOptions(const ListModelProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelProviders"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelProvidersResponse>();
}

/**
 * @summary Queries the list of AI model providers under a specified AgentTeams instance. Paging is supported.
 *
 * @description Queries the list of AI model providers under a specified AgentTeams instance. Paging is supported.
 *
 * @param request ListModelProvidersRequest
 * @return ListModelProvidersResponse
 */
ListModelProvidersResponse Client::listModelProviders(const ListModelProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelProvidersWithOptions(request, runtime);
}

/**
 * @summary Queries the list of AI models under a specified AgentTeams instance. You can filter results by model name or provider name, and paging is supported.
 *
 * @description Queries the list of AI models under a specified AgentTeams instance. You can filter results by model name or provider name, and paging is supported.
 *
 * @param request ListModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModelsWithOptions(const ListModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasProviderName()) {
    query["ProviderName"] = request.getProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModels"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelsResponse>();
}

/**
 * @summary Queries the list of AI models under a specified AgentTeams instance. You can filter results by model name or provider name, and paging is supported.
 *
 * @description Queries the list of AI models under a specified AgentTeams instance. You can filter results by model name or provider name, and paging is supported.
 *
 * @param request ListModelsRequest
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModels(const ListModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of AI gateway endpoints under a specified instance.
 *
 * @description This API queries the list of AI gateway endpoints under a specified instance.
 * - instanceId is a required parameter that specifies the AgentTeams instance ID.
 * - Optional parameters include component, serviceName, networkType, and domainType, which are used to further filter the returned endpoint list.
 * - Filtering by the status parameter is not supported.
 *
 * @param request ListServiceEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceEndpointsResponse
 */
ListServiceEndpointsResponse Client::listServiceEndpointsWithOptions(const ListServiceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComponent()) {
    query["Component"] = request.getComponent();
  }

  if (!!request.hasDomainType()) {
    query["DomainType"] = request.getDomainType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.getSkip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceEndpoints"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceEndpointsResponse>();
}

/**
 * @summary Queries the list of AI gateway endpoints under a specified instance.
 *
 * @description This API queries the list of AI gateway endpoints under a specified instance.
 * - instanceId is a required parameter that specifies the AgentTeams instance ID.
 * - Optional parameters include component, serviceName, networkType, and domainType, which are used to further filter the returned endpoint list.
 * - Filtering by the status parameter is not supported.
 *
 * @param request ListServiceEndpointsRequest
 * @return ListServiceEndpointsResponse
 */
ListServiceEndpointsResponse Client::listServiceEndpoints(const ListServiceEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of SSL certificates available to the user in APIG.
 *
 * @description Queries the list of SSL certificates available to the user in APIG.
 * - This API retrieves the list of SSL certificates associated with a specified AgentTeams instance.
 * - The pagination parameters MaxResults and NextToken allow the client to control the number of returned results and retrieve the next page of data.
 * - A successful response includes the request ID, success flag, error code, next page token, total certificate count, and the certificate details list.
 *
 * @param request ListSslCertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSslCertsResponse
 */
ListSslCertsResponse Client::listSslCertsWithOptions(const ListSslCertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSslCerts"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSslCertsResponse>();
}

/**
 * @summary Queries the list of SSL certificates available to the user in APIG.
 *
 * @description Queries the list of SSL certificates available to the user in APIG.
 * - This API retrieves the list of SSL certificates associated with a specified AgentTeams instance.
 * - The pagination parameters MaxResults and NextToken allow the client to control the number of returned results and retrieve the next page of data.
 * - A successful response includes the request ID, success flag, error code, next page token, total certificate count, and the certificate details list.
 *
 * @param request ListSslCertsRequest
 * @return ListSslCertsResponse
 */
ListSslCertsResponse Client::listSslCerts(const ListSslCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSslCertsWithOptions(request, runtime);
}

/**
 * @summary Queries the statistical details of teams under a specified instance, including aggregate metrics such as the number of workers, number of tasks, success rate, and token usage for each team.
 *
 * @description Queries the statistical details of teams under a specified instance, including aggregate metrics such as the number of workers, number of tasks, success rate, and token usage for each team.
 *
 * @param request ListTeamDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTeamDetailsResponse
 */
ListTeamDetailsResponse Client::listTeamDetailsWithOptions(const ListTeamDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTeamDetails"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTeamDetailsResponse>();
}

/**
 * @summary Queries the statistical details of teams under a specified instance, including aggregate metrics such as the number of workers, number of tasks, success rate, and token usage for each team.
 *
 * @description Queries the statistical details of teams under a specified instance, including aggregate metrics such as the number of workers, number of tasks, success rate, and token usage for each team.
 *
 * @param request ListTeamDetailsRequest
 * @return ListTeamDetailsResponse
 */
ListTeamDetailsResponse Client::listTeamDetails(const ListTeamDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTeamDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the task list of a specified team under a specified instance. The task metadata is sourced from the OSS bucket bound to the instance.
 *
 * @description Queries the task list of a specified team under a specified instance. The task metadata is sourced from the OSS bucket bound to the instance.
 *
 * @param request ListTeamTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTeamTasksResponse
 */
ListTeamTasksResponse Client::listTeamTasksWithOptions(const ListTeamTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTeam()) {
    query["Team"] = request.getTeam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTeamTasks"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTeamTasksResponse>();
}

/**
 * @summary Queries the task list of a specified team under a specified instance. The task metadata is sourced from the OSS bucket bound to the instance.
 *
 * @description Queries the task list of a specified team under a specified instance. The task metadata is sourced from the OSS bucket bound to the instance.
 *
 * @param request ListTeamTasksRequest
 * @return ListTeamTasksResponse
 */
ListTeamTasksResponse Client::listTeamTasks(const ListTeamTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTeamTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the list of teams under a specified instance, with support for fuzzy filtering by name and pagination.
 *
 * @description Queries the list of teams under a specified instance, with support for fuzzy filtering by name and pagination.
 *
 * @param request ListTeamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTeamsResponse
 */
ListTeamsResponse Client::listTeamsWithOptions(const ListTeamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNameLike()) {
    query["NameLike"] = request.getNameLike();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTeams"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTeamsResponse>();
}

/**
 * @summary Queries the list of teams under a specified instance, with support for fuzzy filtering by name and pagination.
 *
 * @description Queries the list of teams under a specified instance, with support for fuzzy filtering by name and pagination.
 *
 * @param request ListTeamsRequest
 * @return ListTeamsResponse
 */
ListTeamsResponse Client::listTeams(const ListTeamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTeamsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of users under a specified instance. Supports fuzzy match by username and paging query. The list is returned in reverse chronological order by creation time.
 *
 * @description Queries the list of users under a specified instance. Supports fuzzy match by username and paging query. The list is returned in reverse chronological order by creation time.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNameLike()) {
    query["NameLike"] = request.getNameLike();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2026-06-05"},
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
 * @summary Queries the list of users under a specified instance. Supports fuzzy match by username and paging query. The list is returned in reverse chronological order by creation time.
 *
 * @description Queries the list of users under a specified instance. Supports fuzzy match by username and paging query. The list is returned in reverse chronological order by creation time.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Worker statistics details by paging, including task count, token usage, and LLM call count.
 *
 * @description Queries a list of Worker statistics details by paging, including task count, token usage, and LLM call count.
 *
 * @param request ListWorkerStatsDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkerStatsDetailsResponse
 */
ListWorkerStatsDetailsResponse Client::listWorkerStatsDetailsWithOptions(const ListWorkerStatsDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkerStatsDetails"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkerStatsDetailsResponse>();
}

/**
 * @summary Queries a list of Worker statistics details by paging, including task count, token usage, and LLM call count.
 *
 * @description Queries a list of Worker statistics details by paging, including task count, token usage, and LLM call count.
 *
 * @param request ListWorkerStatsDetailsRequest
 * @return ListWorkerStatsDetailsResponse
 */
ListWorkerStatsDetailsResponse Client::listWorkerStatsDetails(const ListWorkerStatsDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkerStatsDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Workers under a specified instance by using paging, with support for filtering by name, model, template, and other conditions.
 *
 * @description Queries the list of Workers under a specified instance by using paging, with support for filtering by name, model, template, and other conditions.
 *
 * @param tmpReq ListWorkersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkersResponse
 */
ListWorkersResponse Client::listWorkersWithOptions(const ListWorkersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWorkersShrinkRequest request = ListWorkersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGroup()) {
    request.setGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroup(), "Group", "json"));
  }

  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplate(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasCredential()) {
    query["Credential"] = request.getCredential();
  }

  if (!!request.hasGroupShrink()) {
    query["Group"] = request.getGroupShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMcp()) {
    query["Mcp"] = request.getMcp();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelProvider()) {
    query["ModelProvider"] = request.getModelProvider();
  }

  if (!!request.hasNameLike()) {
    query["NameLike"] = request.getNameLike();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.getTemplateShrink();
  }

  if (!!request.hasVersionCode()) {
    query["VersionCode"] = request.getVersionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkers"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkersResponse>();
}

/**
 * @summary Queries the list of Workers under a specified instance by using paging, with support for filtering by name, model, template, and other conditions.
 *
 * @description Queries the list of Workers under a specified instance by using paging, with support for filtering by name, model, template, and other conditions.
 *
 * @param request ListWorkersRequest
 * @return ListWorkersResponse
 */
ListWorkersResponse Client::listWorkers(const ListWorkersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkersWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a CMS workspace.
 *
 * @description Creates or updates a CMS workspace.
 *
 * @param request PutCmsWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutCmsWorkspaceResponse
 */
PutCmsWorkspaceResponse Client::putCmsWorkspaceWithOptions(const PutCmsWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutCmsWorkspace"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutCmsWorkspaceResponse>();
}

/**
 * @summary Creates or updates a CMS workspace.
 *
 * @description Creates or updates a CMS workspace.
 *
 * @param request PutCmsWorkspaceRequest
 * @return PutCmsWorkspaceResponse
 */
PutCmsWorkspaceResponse Client::putCmsWorkspace(const PutCmsWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putCmsWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Queries the attribute status of a specified instance, worker, team, or individual.
 *
 * @description Queries the feature status of a specified instance, worker, team, or individual.
 * - This operation queries the feature status of different targets (such as INSTANCE, WORKER, TEAM, or HUMAN) under a specific instanceId.
 * - The targetScope parameter defines the target type for the query. Depending on the targetScope value, you may need to provide an additional resourceName parameter to specify the resource name.
 * - If a featureCodes list is provided, the status of those specific features is returned. Otherwise, the status of all features under the specified targetScope is returned.
 * - When using WORKER, TEAM, or HUMAN as the targetScope, make sure to correctly specify the corresponding resourceName.
 * - For INSTANCE-level queries, resourceName is not required.
 * - Feature support is affected by factors such as the base version and worker version. The unsupportedReasonCode and unsupportedReason fields provide the specific reason why a feature is not supported.
 *
 * @param request QueryFeaturesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFeaturesResponse
 */
QueryFeaturesResponse Client::queryFeaturesWithOptions(const QueryFeaturesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.getResourceName();
  }

  if (!!request.hasTargetScope()) {
    query["TargetScope"] = request.getTargetScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFeatures"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFeaturesResponse>();
}

/**
 * @summary Queries the attribute status of a specified instance, worker, team, or individual.
 *
 * @description Queries the feature status of a specified instance, worker, team, or individual.
 * - This operation queries the feature status of different targets (such as INSTANCE, WORKER, TEAM, or HUMAN) under a specific instanceId.
 * - The targetScope parameter defines the target type for the query. Depending on the targetScope value, you may need to provide an additional resourceName parameter to specify the resource name.
 * - If a featureCodes list is provided, the status of those specific features is returned. Otherwise, the status of all features under the specified targetScope is returned.
 * - When using WORKER, TEAM, or HUMAN as the targetScope, make sure to correctly specify the corresponding resourceName.
 * - For INSTANCE-level queries, resourceName is not required.
 * - Feature support is affected by factors such as the base version and worker version. The unsupportedReasonCode and unsupportedReason fields provide the specific reason why a feature is not supported.
 *
 * @param request QueryFeaturesRequest
 * @return QueryFeaturesResponse
 */
QueryFeaturesResponse Client::queryFeatures(const QueryFeaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFeaturesWithOptions(request, runtime);
}

/**
 * @summary Retrieves all zone IDs supported by the current AgentTeams Resource Pool configuration.
 *
 * @description Retrieves all zone IDs supported by the current AgentTeams Resource Pool configuration.
 *
 * @param request QuerySupportedZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySupportedZonesResponse
 */
QuerySupportedZonesResponse Client::querySupportedZonesWithOptions(const QuerySupportedZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySupportedZones"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySupportedZonesResponse>();
}

/**
 * @summary Retrieves all zone IDs supported by the current AgentTeams Resource Pool configuration.
 *
 * @description Retrieves all zone IDs supported by the current AgentTeams Resource Pool configuration.
 *
 * @param request QuerySupportedZonesRequest
 * @return QuerySupportedZonesResponse
 */
QuerySupportedZonesResponse Client::querySupportedZones(const QuerySupportedZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySupportedZonesWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a specified user under a specified instance. After the reset, the user must log on with the new password.
 *
 * @description Resets the password of a specified user under a specified instance. After the reset, the user must log on with the new password.
 *
 * @param request ResetUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPasswordWithOptions(const ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetUserPassword"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetUserPasswordResponse>();
}

/**
 * @summary Resets the password of a specified user under a specified instance. After the reset, the user must log on with the new password.
 *
 * @description Resets the password of a specified user under a specified instance. After the reset, the user must log on with the new password.
 *
 * @param request ResetUserPasswordRequest
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPassword(const ResetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Tests the connectivity of an AI model provider and model under a specified AgentTeams instance by sending a test prompt and returning the call result, latency, and token usage.
 *
 * @description Tests the connectivity of an AI model provider and model under a specified AgentTeams instance by sending a test prompt and returning the call result, latency, and token usage.
 *
 * @param request TestModelProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestModelProviderResponse
 */
TestModelProviderResponse Client::testModelProviderWithOptions(const TestModelProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.getModelName();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  if (!!request.hasProviderName()) {
    body["ProviderName"] = request.getProviderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TestModelProvider"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestModelProviderResponse>();
}

/**
 * @summary Tests the connectivity of an AI model provider and model under a specified AgentTeams instance by sending a test prompt and returning the call result, latency, and token usage.
 *
 * @description Tests the connectivity of an AI model provider and model under a specified AgentTeams instance by sending a test prompt and returning the call result, latency, and token usage.
 *
 * @param request TestModelProviderRequest
 * @return TestModelProviderResponse
 */
TestModelProviderResponse Client::testModelProvider(const TestModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testModelProviderWithOptions(request, runtime);
}

/**
 * @summary Unbinds the upstream identity provider from a specified instance, dissociates the identity federation relationship, and cleans up associated user identities and data.
 *
 * @description Unbinds the upstream identity provider from a specified instance, dissociates the identity federation relationship, and cleans up associated user identities and data.
 *
 * @param request UnbindIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindIdentityProviderResponse
 */
UnbindIdentityProviderResponse Client::unbindIdentityProviderWithOptions(const UnbindIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderType()) {
    query["IdentityProviderType"] = request.getIdentityProviderType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindIdentityProvider"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindIdentityProviderResponse>();
}

/**
 * @summary Unbinds the upstream identity provider from a specified instance, dissociates the identity federation relationship, and cleans up associated user identities and data.
 *
 * @description Unbinds the upstream identity provider from a specified instance, dissociates the identity federation relationship, and cleans up associated user identities and data.
 *
 * @param request UnbindIdentityProviderRequest
 * @return UnbindIdentityProviderResponse
 */
UnbindIdentityProviderResponse Client::unbindIdentityProvider(const UnbindIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Updates the plaintext key of an existing credential in an AgentTeams instance.
 *
 * @description Updates the plaintext key of an existing credential in an AgentTeams instance.
 * - This operation updates the plaintext key of an existing Credential in an AgentTeams instance.
 * - Only the key value of the APIKeyCredentialProvider with the same name in the Agent Identity TokenVault is updated. Local metadata (description, createTime, updateTime, and status) is not modified.
 * - The response does not contain the apiKey plaintext. To obtain Worker details, call GetCredential.
 *
 * @param request UpdateCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCredentialResponse
 */
UpdateCredentialResponse Client::updateCredentialWithOptions(const UpdateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  json body = {};
  if (!!request.hasApiKey()) {
    body["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCredential"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCredentialResponse>();
}

/**
 * @summary Updates the plaintext key of an existing credential in an AgentTeams instance.
 *
 * @description Updates the plaintext key of an existing credential in an AgentTeams instance.
 * - This operation updates the plaintext key of an existing Credential in an AgentTeams instance.
 * - Only the key value of the APIKeyCredentialProvider with the same name in the Agent Identity TokenVault is updated. Local metadata (description, createTime, updateTime, and status) is not modified.
 * - The response does not contain the apiKey plaintext. To obtain Worker details, call GetCredential.
 *
 * @param request UpdateCredentialRequest
 * @return UpdateCredentialResponse
 */
UpdateCredentialResponse Client::updateCredential(const UpdateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCredentialWithOptions(request, runtime);
}

/**
 * @summary Updates the upstream identity provider configuration bound to a specified instance. You can adjust the logon switch and user synchronization switch.
 *
 * @description Updates the upstream identity provider configuration bound to a specified instance. You can adjust the logon switch and user synchronization switch.
 *
 * @param request UpdateIdentityProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProviderWithOptions(const UpdateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentityProviderType()) {
    query["IdentityProviderType"] = request.getIdentityProviderType();
  }

  if (!!request.hasIdpMetadata()) {
    query["IdpMetadata"] = request.getIdpMetadata();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLoginEnabled()) {
    query["LoginEnabled"] = request.getLoginEnabled();
  }

  if (!!request.hasSyncEnabled()) {
    query["SyncEnabled"] = request.getSyncEnabled();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateIdentityProvider"},
    {"version" , "2026-06-05"},
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
 * @summary Updates the upstream identity provider configuration bound to a specified instance. You can adjust the logon switch and user synchronization switch.
 *
 * @description Updates the upstream identity provider configuration bound to a specified instance. You can adjust the logon switch and user synchronization switch.
 *
 * @param request UpdateIdentityProviderRequest
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProvider(const UpdateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary Changes the name of a specified AgentTeams instance. This operation supports GET and POST methods. You can only modify the instance name through this operation. You cannot change the namespace through this operation.
 *
 * @description Changes the name of a specified AgentTeams instance. This operation supports GET and POST methods. You can only modify the instance name through this operation. You cannot change the namespace through this operation.
 *
 * @param tmpReq UpdateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateInstanceShrinkRequest request = UpdateInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasZones()) {
    request.setZonesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getZones(), "Zones", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasNetworkType()) {
    query["NetworkType"] = request.getNetworkType();
  }

  if (!!request.hasZonesShrink()) {
    query["Zones"] = request.getZonesShrink();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary Changes the name of a specified AgentTeams instance. This operation supports GET and POST methods. You can only modify the instance name through this operation. You cannot change the namespace through this operation.
 *
 * @description Changes the name of a specified AgentTeams instance. This operation supports GET and POST methods. You can only modify the instance name through this operation. You cannot change the namespace through this operation.
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceWithOptions(request, runtime);
}

/**
 * @summary Restarts a paused asynchronous task for creating an instance.
 *
 * @description Restarts a paused asynchronous task for creating an instance.
 * - This operation restarts a create-instance task that is in the paused state.
 * - Only tasks of the agentteams:pay-order:create type are supported.
 * - Ensure that the InstanceId, TaskCode, and TaskId parameters are accurate. Otherwise, the request may fail.
 * - If the task is not in the paused state (PAUSED), you cannot call this operation to update the task.
 *
 * @param request UpdateInstanceAsyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceAsyncTaskResponse
 */
UpdateInstanceAsyncTaskResponse Client::updateInstanceAsyncTaskWithOptions(const UpdateInstanceAsyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsResume()) {
    query["IsResume"] = request.getIsResume();
  }

  if (!!request.hasTaskCode()) {
    query["TaskCode"] = request.getTaskCode();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateInstanceAsyncTask"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceAsyncTaskResponse>();
}

/**
 * @summary Restarts a paused asynchronous task for creating an instance.
 *
 * @description Restarts a paused asynchronous task for creating an instance.
 * - This operation restarts a create-instance task that is in the paused state.
 * - Only tasks of the agentteams:pay-order:create type are supported.
 * - Ensure that the InstanceId, TaskCode, and TaskId parameters are accurate. Otherwise, the request may fail.
 * - If the task is not in the paused state (PAUSED), you cannot call this operation to update the task.
 *
 * @param request UpdateInstanceAsyncTaskRequest
 * @return UpdateInstanceAsyncTaskResponse
 */
UpdateInstanceAsyncTaskResponse Client::updateInstanceAsyncTask(const UpdateInstanceAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a specified MCP server, including the address list, authentication information, and description.
 *
 * @description Updates the configuration of a specified MCP server, including the address list, authentication information, and description.
 *
 * @param tmpReq UpdateMcpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMcpResponse
 */
UpdateMcpResponse Client::updateMcpWithOptions(const UpdateMcpRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMcpShrinkRequest request = UpdateMcpShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddresses()) {
    request.setAddressesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddresses(), "Addresses", "json"));
  }

  json body = {};
  if (!!request.hasAddressesShrink()) {
    body["Addresses"] = request.getAddressesShrink();
  }

  if (!!request.hasAuthConfig()) {
    body["AuthConfig"] = request.getAuthConfig();
  }

  if (!!request.hasAuthEnabled()) {
    body["AuthEnabled"] = request.getAuthEnabled();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCreateType()) {
    body["CreateType"] = request.getCreateType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSwaggerConfig()) {
    body["SwaggerConfig"] = request.getSwaggerConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMcp"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMcpResponse>();
}

/**
 * @summary Updates the configuration of a specified MCP server, including the address list, authentication information, and description.
 *
 * @description Updates the configuration of a specified MCP server, including the address list, authentication information, and description.
 *
 * @param request UpdateMcpRequest
 * @return UpdateMcpResponse
 */
UpdateMcpResponse Client::updateMcp(const UpdateMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMcpWithOptions(request, runtime);
}

/**
 * @summary Updates the description and other information of an AI model in a specified AgentTeams instance.
 *
 * @description Updates the description and other information of an AI model in a specified AgentTeams instance.
 *
 * @param request UpdateModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelResponse
 */
UpdateModelResponse Client::updateModelWithOptions(const UpdateModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateModel"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelResponse>();
}

/**
 * @summary Updates the description and other information of an AI model in a specified AgentTeams instance.
 *
 * @description Updates the description and other information of an AI model in a specified AgentTeams instance.
 *
 * @param request UpdateModelRequest
 * @return UpdateModelResponse
 */
UpdateModelResponse Client::updateModel(const UpdateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateModelWithOptions(request, runtime);
}

/**
 * @summary Updates the address, protocol list, API key, and other information of an AI model provider in a specified AgentTeams instance.
 *
 * @description Updates the address, protocol list, API key, and other information of an AI model provider in a specified AgentTeams instance.
 *
 * @param tmpReq UpdateModelProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelProviderResponse
 */
UpdateModelProviderResponse Client::updateModelProviderWithOptions(const UpdateModelProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateModelProviderShrinkRequest request = UpdateModelProviderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiKeys()) {
    request.setApiKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApiKeys(), "ApiKeys", "json"));
  }

  if (!!tmpReq.hasProtocols()) {
    request.setProtocolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProtocols(), "Protocols", "json"));
  }

  json body = {};
  if (!!request.hasAddress()) {
    body["Address"] = request.getAddress();
  }

  if (!!request.hasApiKeysShrink()) {
    body["ApiKeys"] = request.getApiKeysShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProtocolsShrink()) {
    body["Protocols"] = request.getProtocolsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateModelProvider"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelProviderResponse>();
}

/**
 * @summary Updates the address, protocol list, API key, and other information of an AI model provider in a specified AgentTeams instance.
 *
 * @description Updates the address, protocol list, API key, and other information of an AI model provider in a specified AgentTeams instance.
 *
 * @param request UpdateModelProviderRequest
 * @return UpdateModelProviderResponse
 */
UpdateModelProviderResponse Client::updateModelProvider(const UpdateModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateModelProviderWithOptions(request, runtime);
}

/**
 * @summary Updates the domain name and SSL certificate information for a specified endpoint.
 *
 * @description Updates the domain name and SSL certificate information for a specified endpoint.
 * - This API operation supports updating endpoints of the ELEMENT or MATRIX type.
 * - If you attempt to update an endpoint of another type, a 400 error is returned.
 * - If the endpointId does not exist or does not belong to the current user instance, a 404 error is returned.
 * - When updating a domain name, the system creates or reuses a new HTTPS domain and binds it to the original endpoint route. The old domain is unbound but not deleted.
 * - If the domain or certIdentifier parameter is not specified, the existing settings are retained.
 * - Other fields such as component and gatewayType are not updated even if they are specified in the request.
 *
 * @param request UpdateServiceEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceEndpointResponse
 */
UpdateServiceEndpointResponse Client::updateServiceEndpointWithOptions(const UpdateServiceEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEndpointId()) {
    query["EndpointId"] = request.getEndpointId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceEndpoint"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceEndpointResponse>();
}

/**
 * @summary Updates the domain name and SSL certificate information for a specified endpoint.
 *
 * @description Updates the domain name and SSL certificate information for a specified endpoint.
 * - This API operation supports updating endpoints of the ELEMENT or MATRIX type.
 * - If you attempt to update an endpoint of another type, a 400 error is returned.
 * - If the endpointId does not exist or does not belong to the current user instance, a 404 error is returned.
 * - When updating a domain name, the system creates or reuses a new HTTPS domain and binds it to the original endpoint route. The old domain is unbound but not deleted.
 * - If the domain or certIdentifier parameter is not specified, the existing settings are retained.
 * - Other fields such as component and gatewayType are not updated even if they are specified in the request.
 *
 * @param request UpdateServiceEndpointRequest
 * @return UpdateServiceEndpointResponse
 */
UpdateServiceEndpointResponse Client::updateServiceEndpoint(const UpdateServiceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceEndpointWithOptions(request, runtime);
}

/**
 * @summary Updates the description and member list of a team under a specified instance, and returns the latest team information after the update.
 *
 * @description Updates the description and member list of a team under a specified instance, and returns the latest team information after the update.
 *
 * @param tmpReq UpdateTeamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTeamResponse
 */
UpdateTeamResponse Client::updateTeamWithOptions(const UpdateTeamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTeamShrinkRequest request = UpdateTeamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTeamMembers()) {
    request.setTeamMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTeamMembers(), "TeamMembers", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTeamMembersShrink()) {
    query["TeamMembers"] = request.getTeamMembersShrink();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTeam"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTeamResponse>();
}

/**
 * @summary Updates the description and member list of a team under a specified instance, and returns the latest team information after the update.
 *
 * @description Updates the description and member list of a team under a specified instance, and returns the latest team information after the update.
 *
 * @param request UpdateTeamRequest
 * @return UpdateTeamResponse
 */
UpdateTeamResponse Client::updateTeam(const UpdateTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTeamWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a specified user under a specified instance, including the display name, email address, authentication method, and remarks.
 *
 * @description Updates the information of a specified user under a specified instance, including the display name, email address, authentication method, and remarks.
 *
 * @param request UpdateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUserWithOptions(const UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthMethod()) {
    query["AuthMethod"] = request.getAuthMethod();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNote()) {
    query["Note"] = request.getNote();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUser"},
    {"version" , "2026-06-05"},
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
 * @summary Updates the information of a specified user under a specified instance, including the display name, email address, authentication method, and remarks.
 *
 * @description Updates the information of a specified user under a specified instance, including the display name, email address, authentication method, and remarks.
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a specified Worker, including model, skills, template, MCP servers, channels, and quotas.
 *
 * @description Updates the configuration of a specified Worker, including model, skills, template, MCP servers, channels, and quotas.
 *
 * @param tmpReq UpdateWorkerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkerResponse
 */
UpdateWorkerResponse Client::updateWorkerWithOptions(const UpdateWorkerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkerShrinkRequest request = UpdateWorkerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChannels()) {
    request.setChannelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChannels(), "Channels", "json"));
  }

  if (!!tmpReq.hasCredentials()) {
    request.setCredentialsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentials(), "Credentials", "json"));
  }

  if (!!tmpReq.hasLimitConfig()) {
    request.setLimitConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLimitConfig(), "LimitConfig", "json"));
  }

  if (!!tmpReq.hasMcpServers()) {
    request.setMcpServersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMcpServers(), "McpServers", "json"));
  }

  if (!!tmpReq.hasModel()) {
    request.setModelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModel(), "Model", "json"));
  }

  if (!!tmpReq.hasSkills()) {
    request.setSkillsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSkills(), "Skills", "json"));
  }

  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplate(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasAgents()) {
    query["Agents"] = request.getAgents();
  }

  if (!!request.hasChannelsShrink()) {
    query["Channels"] = request.getChannelsShrink();
  }

  if (!!request.hasCredentialsShrink()) {
    query["Credentials"] = request.getCredentialsShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLimitConfigShrink()) {
    query["LimitConfig"] = request.getLimitConfigShrink();
  }

  if (!!request.hasMcpServersShrink()) {
    query["McpServers"] = request.getMcpServersShrink();
  }

  if (!!request.hasModelShrink()) {
    query["Model"] = request.getModelShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSkillsShrink()) {
    query["Skills"] = request.getSkillsShrink();
  }

  if (!!request.hasSoul()) {
    query["Soul"] = request.getSoul();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.getTemplateShrink();
  }

  if (!!request.hasVersionCode()) {
    query["VersionCode"] = request.getVersionCode();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorker"},
    {"version" , "2026-06-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkerResponse>();
}

/**
 * @summary Updates the configuration of a specified Worker, including model, skills, template, MCP servers, channels, and quotas.
 *
 * @description Updates the configuration of a specified Worker, including model, skills, template, MCP servers, channels, and quotas.
 *
 * @param request UpdateWorkerRequest
 * @return UpdateWorkerResponse
 */
UpdateWorkerResponse Client::updateWorker(const UpdateWorkerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentTeams20260605