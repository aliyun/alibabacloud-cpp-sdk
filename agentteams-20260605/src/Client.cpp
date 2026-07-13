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
  this->_endpointRule = "";
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
 * @summary 绑定上游身份提供商
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
 * @summary 绑定上游身份提供商
 *
 * @param request BindIdentityProviderRequest
 * @return BindIdentityProviderResponse
 */
BindIdentityProviderResponse Client::bindIdentityProvider(const BindIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 为指定AgentTeams实例异步开通并配置阿里云公网NAT网关。
 *
 * @description ## 请求说明
 * - 本接口用于为特定的AgentTeams实例创建公网NAT网关，并自动完成EIP申请、绑定以及SNAT规则的设置。
 * - 接口调用后将返回一个异步任务ID，实际的NAT网关、EIP及SNAT资源ID会在异步任务完成后通过任务结果提供。
 * - NAT网关名称由系统自动生成，格式为`magic-create-for-vpc-{vpcId}`。
 * - 支持GET和POST方法进行请求。
 * - `eipBandwidth`参数指定了自动申请EIP时的带宽大小，默认值为5Mbps，范围在1-200Mbps之间。
 * - 如果`instanceId`为空或无效，或者提供的`eipBandwidth`不在允许范围内，API将返回错误响应。
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
 * @summary 为指定AgentTeams实例异步开通并配置阿里云公网NAT网关。
 *
 * @description ## 请求说明
 * - 本接口用于为特定的AgentTeams实例创建公网NAT网关，并自动完成EIP申请、绑定以及SNAT规则的设置。
 * - 接口调用后将返回一个异步任务ID，实际的NAT网关、EIP及SNAT资源ID会在异步任务完成后通过任务结果提供。
 * - NAT网关名称由系统自动生成，格式为`magic-create-for-vpc-{vpcId}`。
 * - 支持GET和POST方法进行请求。
 * - `eipBandwidth`参数指定了自动申请EIP时的带宽大小，默认值为5Mbps，范围在1-200Mbps之间。
 * - 如果`instanceId`为空或无效，或者提供的`eipBandwidth`不在允许范围内，API将返回错误响应。
 *
 * @param request ConfigureNatGatewayRequest
 * @return ConfigureNatGatewayResponse
 */
ConfigureNatGatewayResponse Client::configureNatGateway(const ConfigureNatGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureNatGatewayWithOptions(request, runtime);
}

/**
 * @summary 创建凭证
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
 * @summary 创建凭证
 *
 * @param request CreateCredentialRequest
 * @return CreateCredentialResponse
 */
CreateCredentialResponse Client::createCredential(const CreateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCredentialWithOptions(request, runtime);
}

/**
 * @summary 用于创建指定配置的集群实例。
 *
 * @description ## 请求说明
 * - 本接口支持通过表单参数或 query 参数传递请求信息。
 * - `instanceSpec` 和 `networkType` 等部分参数有默认值，若未指定则使用默认值。
 * - 必须提供 `instanceName`, `regionId`, `vpcId`, 和 `vSwitchId` 参数。
 * - `networkType` 支持三种选项：`PRIVATE_PUBNET`, `PRIVATE_NET`, `PUB_NET`，默认为 `PRIVATE_NET`。
 * - 如果指定了 `zoneId`，则会尝试在该可用区创建实例；否则将根据系统策略选择合适的可用区。
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
 * @summary 用于创建指定配置的集群实例。
 *
 * @description ## 请求说明
 * - 本接口支持通过表单参数或 query 参数传递请求信息。
 * - `instanceSpec` 和 `networkType` 等部分参数有默认值，若未指定则使用默认值。
 * - 必须提供 `instanceName`, `regionId`, `vpcId`, 和 `vSwitchId` 参数。
 * - `networkType` 支持三种选项：`PRIVATE_PUBNET`, `PRIVATE_NET`, `PUB_NET`，默认为 `PRIVATE_NET`。
 * - 如果指定了 `zoneId`，则会尝试在该可用区创建实例；否则将根据系统策略选择合适的可用区。
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建MCP
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 创建MCP
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request CreateMcpRequest
 * @return CreateMcpResponse
 */
CreateMcpResponse Client::createMcp(const CreateMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcpWithOptions(request, runtime);
}

/**
 * @summary 创建模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 创建模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request CreateModelRequest
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModel(const CreateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelWithOptions(request, runtime);
}

/**
 * @summary 创建模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 创建模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request CreateModelProviderRequest
 * @return CreateModelProviderResponse
 */
CreateModelProviderResponse Client::createModelProvider(const CreateModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelProviderWithOptions(request, runtime);
}

/**
 * @summary 用于创建指定实例的Endpoint，支持多种组件和网关类型。
 *
 * @description ## 请求说明
 * - 当前controller使用的是普通参数绑定，不是`@RequestBody`，因此参数更适合按query/form方式传递。
 * - `domain`字段会在服务端进行`trim + lowerCase`处理。
 * - `query`和`headers`必须是JSON object字符串格式，不能为数组。
 * - 创建操作仅将数据保存到数据库；只有在更新时，如果满足`ELEMENT/MATRIX + AI_GATEWAY + INTERNET`且域名或证书发生变化，才会触发AI Gateway域名同步逻辑。
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
 * @summary 用于创建指定实例的Endpoint，支持多种组件和网关类型。
 *
 * @description ## 请求说明
 * - 当前controller使用的是普通参数绑定，不是`@RequestBody`，因此参数更适合按query/form方式传递。
 * - `domain`字段会在服务端进行`trim + lowerCase`处理。
 * - `query`和`headers`必须是JSON object字符串格式，不能为数组。
 * - 创建操作仅将数据保存到数据库；只有在更新时，如果满足`ELEMENT/MATRIX + AI_GATEWAY + INTERNET`且域名或证书发生变化，才会触发AI Gateway域名同步逻辑。
 *
 * @param request CreateServiceEndpointRequest
 * @return CreateServiceEndpointResponse
 */
CreateServiceEndpointResponse Client::createServiceEndpoint(const CreateServiceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceEndpointWithOptions(request, runtime);
}

/**
 * @summary 创建团队
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
 * @summary 创建团队
 *
 * @param request CreateTeamRequest
 * @return CreateTeamResponse
 */
CreateTeamResponse Client::createTeam(const CreateTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTeamWithOptions(request, runtime);
}

/**
 * @summary 创建用户
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
 * @summary 创建用户
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary 创建Worker
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
 * @summary 创建Worker
 *
 * @param request CreateWorkerRequest
 * @return CreateWorkerResponse
 */
CreateWorkerResponse Client::createWorker(const CreateWorkerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkerWithOptions(request, runtime);
}

/**
 * @summary 创建Worker本地纳管启动Token
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
 * @summary 创建Worker本地纳管启动Token
 *
 * @param request CreateWorkerBootstrapTokenRequest
 * @return CreateWorkerBootstrapTokenResponse
 */
CreateWorkerBootstrapTokenResponse Client::createWorkerBootstrapToken(const CreateWorkerBootstrapTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkerBootstrapTokenWithOptions(request, runtime);
}

/**
 * @summary 删除凭证
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
 * @summary 删除凭证
 *
 * @param request DeleteCredentialRequest
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredential(const DeleteCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCredentialWithOptions(request, runtime);
}

/**
 * @summary 用于释放指定的AgentTeams实例，并清理相关资源。
 *
 * @description ## 请求说明
 * - 本API支持`GET`和`POST`方法，两者语义相同。
 * - 使用`POST`方法时，参数通过`application/x-www-form-urlencoded`格式提交。
 * - 当前实例状态为`CREATING`、`DELETING`或`DELETED`时，请求将被拒绝。
 * - 成功调用后，实例状态将首先更改为`DELETING`，实际的资源清理过程由后台异步执行。
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
 * @summary 用于释放指定的AgentTeams实例，并清理相关资源。
 *
 * @description ## 请求说明
 * - 本API支持`GET`和`POST`方法，两者语义相同。
 * - 使用`POST`方法时，参数通过`application/x-www-form-urlencoded`格式提交。
 * - 当前实例状态为`CREATING`、`DELETING`或`DELETED`时，请求将被拒绝。
 * - 成功调用后，实例状态将首先更改为`DELETING`，实际的资源清理过程由后台异步执行。
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除MCP
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 删除MCP
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request DeleteMcpRequest
 * @return DeleteMcpResponse
 */
DeleteMcpResponse Client::deleteMcp(const DeleteMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcpWithOptions(request, runtime);
}

/**
 * @summary 删除模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 删除模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request DeleteModelRequest
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModel(const DeleteModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelWithOptions(request, runtime);
}

/**
 * @summary 删除模型供应商
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 删除模型供应商
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request DeleteModelProviderRequest
 * @return DeleteModelProviderResponse
 */
DeleteModelProviderResponse Client::deleteModelProvider(const DeleteModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteModelProviderWithOptions(request, runtime);
}

/**
 * @summary 用于删除指定AgentTeams实例下的endpoint，并清理相关资源。
 *
 * @description ## 请求说明
 * - 该接口支持通过GET或POST方法调用。
 * - 如果目标endpoint是`WORKER`类型，系统将自动清理与之关联的APIG/AI Gateway云资源及KubeOne worker service配置。
 * - 请求参数必须包含`instanceId`和`endpointId`，且不能为空。
 * - 成功响应会返回HTTP状态码200以及成功标志；错误响应则根据具体情况返回相应的HTTP状态码（如400、404、409）及错误信息。
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
 * @summary 用于删除指定AgentTeams实例下的endpoint，并清理相关资源。
 *
 * @description ## 请求说明
 * - 该接口支持通过GET或POST方法调用。
 * - 如果目标endpoint是`WORKER`类型，系统将自动清理与之关联的APIG/AI Gateway云资源及KubeOne worker service配置。
 * - 请求参数必须包含`instanceId`和`endpointId`，且不能为空。
 * - 成功响应会返回HTTP状态码200以及成功标志；错误响应则根据具体情况返回相应的HTTP状态码（如400、404、409）及错误信息。
 *
 * @param request DeleteServiceEndpointRequest
 * @return DeleteServiceEndpointResponse
 */
DeleteServiceEndpointResponse Client::deleteServiceEndpoint(const DeleteServiceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteServiceEndpointWithOptions(request, runtime);
}

/**
 * @summary 删除团队
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
 * @summary 删除团队
 *
 * @param request DeleteTeamRequest
 * @return DeleteTeamResponse
 */
DeleteTeamResponse Client::deleteTeam(const DeleteTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTeamWithOptions(request, runtime);
}

/**
 * @summary 删除用户
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
 * @summary 删除用户
 *
 * @param request DeleteUserRequest
 * @return DeleteUserResponse
 */
DeleteUserResponse Client::deleteUser(const DeleteUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWithOptions(request, runtime);
}

/**
 * @summary 删除Worker
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
 * @summary 删除Worker
 *
 * @param request DeleteWorkerRequest
 * @return DeleteWorkerResponse
 */
DeleteWorkerResponse Client::deleteWorker(const DeleteWorkerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkerWithOptions(request, runtime);
}

/**
 * @summary 查询凭证详情
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
 * @summary 查询凭证详情
 *
 * @param request GetCredentialRequest
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredential(const GetCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCredentialWithOptions(request, runtime);
}

/**
 * @summary 查询指定类型的上游身份提供商详情
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
 * @summary 查询指定类型的上游身份提供商详情
 *
 * @param request GetIdentityProviderRequest
 * @return GetIdentityProviderResponse
 */
GetIdentityProviderResponse Client::getIdentityProvider(const GetIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 通过实例ID查询指定实例的详细信息。
 *
 * @description ## 请求说明
 * - 该接口支持`GET`和`POST`方法。
 * - 请求时必须在头部包含`X-User-Id`，用于校验实例归属。
 * - `X-Acs-Request-Id`为可选项，如果提供，则响应中的`requestId`将优先使用此值。
 * - 必须通过`instanceId`参数指定要查询的实例。
 * - 成功响应会返回实例的详细配置信息及状态。
 * - 如果请求失败，根据错误类型返回相应的HTTP状态码及错误消息。
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
 * @summary 通过实例ID查询指定实例的详细信息。
 *
 * @description ## 请求说明
 * - 该接口支持`GET`和`POST`方法。
 * - 请求时必须在头部包含`X-User-Id`，用于校验实例归属。
 * - `X-Acs-Request-Id`为可选项，如果提供，则响应中的`requestId`将优先使用此值。
 * - 必须通过`instanceId`参数指定要查询的实例。
 * - 成功响应会返回实例的详细配置信息及状态。
 * - 如果请求失败，根据错误类型返回相应的HTTP状态码及错误消息。
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询指定AgentTeams实例关联的异步任务状态，支持分页。
 *
 * @description ## 请求说明
 * - 本接口用于查询特定AgentTeams实例下的异步任务执行状态。
 * - 目前仅支持查询与实例生命周期相关的创建实例任务。
 * - 可通过`taskCode`参数指定要查询的任务类型，默认为创建实例任务。
 * - 支持使用`maxResults`和`nextToken`进行结果分页。
 * - 当任务处于暂停(`PAUSED`)状态时，会返回用户需要采取行动的信息(`recoveryMessage`)。
 * - 注意：当前不支持通过`taskId`直接查询任务状态。
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
 * @summary 查询指定AgentTeams实例关联的异步任务状态，支持分页。
 *
 * @description ## 请求说明
 * - 本接口用于查询特定AgentTeams实例下的异步任务执行状态。
 * - 目前仅支持查询与实例生命周期相关的创建实例任务。
 * - 可通过`taskCode`参数指定要查询的任务类型，默认为创建实例任务。
 * - 支持使用`maxResults`和`nextToken`进行结果分页。
 * - 当任务处于暂停(`PAUSED`)状态时，会返回用户需要采取行动的信息(`recoveryMessage`)。
 * - 注意：当前不支持通过`taskId`直接查询任务状态。
 *
 * @param request GetInstanceAsyncTaskRequest
 * @return GetInstanceAsyncTaskResponse
 */
GetInstanceAsyncTaskResponse Client::getInstanceAsyncTask(const GetInstanceAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary 获取实例 OSS 挂载到 ACS 所需的 RAM 授权链接。
 *
 * @description ## 请求说明
 * - 该接口支持`GET`和`POST`方法。
 * - 请求时必须在头部包含`X-User-Id`，用于校验实例归属。
 * - 必须通过`instanceId`参数指定实例，后端会根据实例信息生成授权链接。
 * - 成功响应会返回 RAM 控制台授权链接，不会创建 RAM 角色或策略。
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
 * @summary 获取实例 OSS 挂载到 ACS 所需的 RAM 授权链接。
 *
 * @description ## 请求说明
 * - 该接口支持`GET`和`POST`方法。
 * - 请求时必须在头部包含`X-User-Id`，用于校验实例归属。
 * - 必须通过`instanceId`参数指定实例，后端会根据实例信息生成授权链接。
 * - 成功响应会返回 RAM 控制台授权链接，不会创建 RAM 角色或策略。
 *
 * @param request GetInstanceOssMountRamAuthorizeUrlRequest
 * @return GetInstanceOssMountRamAuthorizeUrlResponse
 */
GetInstanceOssMountRamAuthorizeUrlResponse Client::getInstanceOssMountRamAuthorizeUrl(const GetInstanceOssMountRamAuthorizeUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceOssMountRamAuthorizeUrlWithOptions(request, runtime);
}

/**
 * @summary 查询MCP详情
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 查询MCP详情
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request GetMcpRequest
 * @return GetMcpResponse
 */
GetMcpResponse Client::getMcp(const GetMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcpWithOptions(request, runtime);
}

/**
 * @summary 模型调用摘要
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
 * @summary 模型调用摘要
 *
 * @param request GetModelInvocationSummaryRequest
 * @return GetModelInvocationSummaryResponse
 */
GetModelInvocationSummaryResponse Client::getModelInvocationSummary(const GetModelInvocationSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModelInvocationSummaryWithOptions(request, runtime);
}

/**
 * @summary 查询模型供应商详情
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 查询模型供应商详情
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request GetModelProviderRequest
 * @return GetModelProviderResponse
 */
GetModelProviderResponse Client::getModelProvider(const GetModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModelProviderWithOptions(request, runtime);
}

/**
 * @summary 查询指定实例的NAT网关及其SNAT规则的配置状态。
 *
 * @description ## 请求说明
 * 通过此API，您可以获取特定实例关联的NAT网关配置详情及SNAT规则的状态。该接口支持GET或POST方法调用，并需要提供`instanceId`作为请求参数来指定要查询的实例。
 * ### 注意事项
 * - 确保提供的`instanceId`是有效的且属于您的账户。
 * - 根据返回的状态值（如`READY`, `NEED_CONFIGURE_NAT_GATEWAY`, `NEED_CONFIGURE_SNAT_RULE`），采取相应的操作以完成NAT网关或SNAT规则的配置。
 * - 当状态为`NEED_CONFIGURE_NAT_GATEWAY`时，表示当前VPC下没有可用的NAT网关；而`NEED_CONFIGURE_SNAT_RULE`则意味着虽然存在NAT网关但某些子网CIDR未被SNAT规则覆盖。
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
 * @summary 查询指定实例的NAT网关及其SNAT规则的配置状态。
 *
 * @description ## 请求说明
 * 通过此API，您可以获取特定实例关联的NAT网关配置详情及SNAT规则的状态。该接口支持GET或POST方法调用，并需要提供`instanceId`作为请求参数来指定要查询的实例。
 * ### 注意事项
 * - 确保提供的`instanceId`是有效的且属于您的账户。
 * - 根据返回的状态值（如`READY`, `NEED_CONFIGURE_NAT_GATEWAY`, `NEED_CONFIGURE_SNAT_RULE`），采取相应的操作以完成NAT网关或SNAT规则的配置。
 * - 当状态为`NEED_CONFIGURE_NAT_GATEWAY`时，表示当前VPC下没有可用的NAT网关；而`NEED_CONFIGURE_SNAT_RULE`则意味着虽然存在NAT网关但某些子网CIDR未被SNAT规则覆盖。
 *
 * @param request GetNatGatewayStatusRequest
 * @return GetNatGatewayStatusResponse
 */
GetNatGatewayStatusResponse Client::getNatGatewayStatus(const GetNatGatewayStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNatGatewayStatusWithOptions(request, runtime);
}

/**
 * @summary 查询指定ID的Endpoint详细信息，支持通过实例ID进行校验。
 *
 * @description ## 请求说明
 * - 该API用于根据`endpointId`查询单个Endpoint的具体配置与状态信息。
 * - 可选参数`instanceId`用于验证Endpoint是否属于特定实例。
 * - 请求方式支持`GET`和`POST`，其中`GET`使用query string传递参数，而`POST`则可以通过form参数提交。
 * - 如果`endpointId`缺失或为空，则会返回`InvalidParameter`错误。
 * - 当请求的Endpoint不存在、不属于提供的实例或者不属于当前用户时，将收到相应的资源不存在类错误响应。
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
 * @summary 查询指定ID的Endpoint详细信息，支持通过实例ID进行校验。
 *
 * @description ## 请求说明
 * - 该API用于根据`endpointId`查询单个Endpoint的具体配置与状态信息。
 * - 可选参数`instanceId`用于验证Endpoint是否属于特定实例。
 * - 请求方式支持`GET`和`POST`，其中`GET`使用query string传递参数，而`POST`则可以通过form参数提交。
 * - 如果`endpointId`缺失或为空，则会返回`InvalidParameter`错误。
 * - 当请求的Endpoint不存在、不属于提供的实例或者不属于当前用户时，将收到相应的资源不存在类错误响应。
 *
 * @param request GetServiceEndpointRequest
 * @return GetServiceEndpointResponse
 */
GetServiceEndpointResponse Client::getServiceEndpoint(const GetServiceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceEndpointWithOptions(request, runtime);
}

/**
 * @summary 任务统计摘要
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
 * @summary 任务统计摘要
 *
 * @param request GetTaskStatsSummaryRequest
 * @return GetTaskStatsSummaryResponse
 */
GetTaskStatsSummaryResponse Client::getTaskStatsSummary(const GetTaskStatsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskStatsSummaryWithOptions(request, runtime);
}

/**
 * @summary 查询团队详情
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
 * @summary 查询团队详情
 *
 * @param request GetTeamRequest
 * @return GetTeamResponse
 */
GetTeamResponse Client::getTeam(const GetTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTeamWithOptions(request, runtime);
}

/**
 * @summary Token趋势统计
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
 * @summary Token趋势统计
 *
 * @param request GetTokenTrendRequest
 * @return GetTokenTrendResponse
 */
GetTokenTrendResponse Client::getTokenTrend(const GetTokenTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTokenTrendWithOptions(request, runtime);
}

/**
 * @summary 工具调用分布
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
 * @summary 工具调用分布
 *
 * @param request GetToolCallDistributionRequest
 * @return GetToolCallDistributionResponse
 */
GetToolCallDistributionResponse Client::getToolCallDistribution(const GetToolCallDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getToolCallDistributionWithOptions(request, runtime);
}

/**
 * @summary 查询用户详情
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
 * @summary 查询用户详情
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary 获取用户初始密码
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
 * @summary 获取用户初始密码
 *
 * @param request GetUserPasswordRequest
 * @return GetUserPasswordResponse
 */
GetUserPasswordResponse Client::getUserPassword(const GetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserPasswordWithOptions(request, runtime);
}

/**
 * @summary 查询Worker详情
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
 * @summary 查询Worker详情
 *
 * @param request GetWorkerRequest
 * @return GetWorkerResponse
 */
GetWorkerResponse Client::getWorker(const GetWorkerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkerWithOptions(request, runtime);
}

/**
 * @summary 查询Worker本地纳管启动选项
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
 * @summary 查询Worker本地纳管启动选项
 *
 * @param request GetWorkerBootstrapOptionsRequest
 * @return GetWorkerBootstrapOptionsResponse
 */
GetWorkerBootstrapOptionsResponse Client::getWorkerBootstrapOptions(const GetWorkerBootstrapOptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkerBootstrapOptionsWithOptions(request, runtime);
}

/**
 * @summary 查询Worker最大可升级版本
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
 * @summary 查询Worker最大可升级版本
 *
 * @param request GetWorkerMaxVersionRequest
 * @return GetWorkerMaxVersionResponse
 */
GetWorkerMaxVersionResponse Client::getWorkerMaxVersion(const GetWorkerMaxVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkerMaxVersionWithOptions(request, runtime);
}

/**
 * @summary Worker统计摘要
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
 * @summary Worker统计摘要
 *
 * @param request GetWorkerStatsSummaryRequest
 * @return GetWorkerStatsSummaryResponse
 */
GetWorkerStatsSummaryResponse Client::getWorkerStatsSummary(const GetWorkerStatsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkerStatsSummaryWithOptions(request, runtime);
}

/**
 * @summary 查询凭证列表
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
 * @summary 查询凭证列表
 *
 * @param request ListCredentialsRequest
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentials(const ListCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCredentialsWithOptions(request, runtime);
}

/**
 * @summary 查询上游身份提供商绑定列表
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
 * @summary 查询上游身份提供商绑定列表
 *
 * @param request ListIdentityProvidersRequest
 * @return ListIdentityProvidersResponse
 */
ListIdentityProvidersResponse Client::listIdentityProviders(const ListIdentityProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIdentityProvidersWithOptions(request, runtime);
}

/**
 * @summary 用于查询符合条件的实例列表，并支持分页和模糊匹配。
 *
 * @description ## 请求说明
 * - **分页规则**：
 *   - 如果传了 `NextToken`，优先按 `NextToken` 解析 offset。
 *   - 如果没传 `NextToken`，则使用 `skip`。
 *   - `MaxResults` 的取值范围为 1 到 100，非法值会返回 `400` 错误。
 *   - `NextToken` 必须是有效的整数，否则会返回 `400` 错误。
 *   - `skip` 的值不能小于 0，否则会返回 `400` 错误。
 * - **排序规则**：列表按创建时间倒序返回。
 * - **请求参数**：
 *   - `instanceName`：实例名称，支持模糊匹配。
 *   - `status`：实例状态。
 *   - `MaxResults`：分页大小，默认值为 20。
 *   - `NextToken`：下一页游标。
 *   - `skip`：跳过的记录数，默认值为 0。
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
 * @summary 用于查询符合条件的实例列表，并支持分页和模糊匹配。
 *
 * @description ## 请求说明
 * - **分页规则**：
 *   - 如果传了 `NextToken`，优先按 `NextToken` 解析 offset。
 *   - 如果没传 `NextToken`，则使用 `skip`。
 *   - `MaxResults` 的取值范围为 1 到 100，非法值会返回 `400` 错误。
 *   - `NextToken` 必须是有效的整数，否则会返回 `400` 错误。
 *   - `skip` 的值不能小于 0，否则会返回 `400` 错误。
 * - **排序规则**：列表按创建时间倒序返回。
 * - **请求参数**：
 *   - `instanceName`：实例名称，支持模糊匹配。
 *   - `status`：实例状态。
 *   - `MaxResults`：分页大小，默认值为 20。
 *   - `NextToken`：下一页游标。
 *   - `skip`：跳过的记录数，默认值为 0。
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary 测试模型供应商和模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有Magic实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 测试模型供应商和模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有Magic实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request ListMcpToolsRequest
 * @return ListMcpToolsResponse
 */
ListMcpToolsResponse Client::listMcpTools(const ListMcpToolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcpToolsWithOptions(request, runtime);
}

/**
 * @summary 查询MCP列表
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 查询MCP列表
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request ListMcpsRequest
 * @return ListMcpsResponse
 */
ListMcpsResponse Client::listMcps(const ListMcpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcpsWithOptions(request, runtime);
}

/**
 * @summary 查询模型供应商列表
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 查询模型供应商列表
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request ListModelProvidersRequest
 * @return ListModelProvidersResponse
 */
ListModelProvidersResponse Client::listModelProviders(const ListModelProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelProvidersWithOptions(request, runtime);
}

/**
 * @summary 查询模型列表
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 查询模型列表
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request ListModelsRequest
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModels(const ListModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listModelsWithOptions(request, runtime);
}

/**
 * @summary 此API用于查询指定实例下的AI网关端点列表。
 *
 * @description ## 请求说明
 * - `instanceId` 是必填参数，用来指定 AgentTeams 实例 ID。
 * - 可选参数包括 `component`, `serviceName`, `networkType`, 和 `domainType`，用于进一步筛选返回的端点列表。
 * - 不支持通过 `status` 参数进行筛选。
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
 * @summary 此API用于查询指定实例下的AI网关端点列表。
 *
 * @description ## 请求说明
 * - `instanceId` 是必填参数，用来指定 AgentTeams 实例 ID。
 * - 可选参数包括 `component`, `serviceName`, `networkType`, 和 `domainType`，用于进一步筛选返回的端点列表。
 * - 不支持通过 `status` 参数进行筛选。
 *
 * @param request ListServiceEndpointsRequest
 * @return ListServiceEndpointsResponse
 */
ListServiceEndpointsResponse Client::listServiceEndpoints(const ListServiceEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceEndpointsWithOptions(request, runtime);
}

/**
 * @summary 查询用户侧APIG可用的SSL证书列表
 *
 * @description ## 请求说明
 * - 该API用于获取与指定AgentTeams实例相关的SSL证书列表。
 * - 可通过`certNameLike`和`domainName`参数进行模糊搜索或精确匹配证书名称及绑定域名。
 * - 分页参数`pageNumber`和`pageSize`允许客户端控制返回结果的数量和页码，默认每页显示10条记录。
 * - 成功响应将包含请求ID、是否成功标志、错误代码（如果有的话）、HTTP状态码、本次请求的最大结果数、下一页标记（如果有更多数据的话）、总证书数量以及具体的证书详情列表。
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
 * @summary 查询用户侧APIG可用的SSL证书列表
 *
 * @description ## 请求说明
 * - 该API用于获取与指定AgentTeams实例相关的SSL证书列表。
 * - 可通过`certNameLike`和`domainName`参数进行模糊搜索或精确匹配证书名称及绑定域名。
 * - 分页参数`pageNumber`和`pageSize`允许客户端控制返回结果的数量和页码，默认每页显示10条记录。
 * - 成功响应将包含请求ID、是否成功标志、错误代码（如果有的话）、HTTP状态码、本次请求的最大结果数、下一页标记（如果有更多数据的话）、总证书数量以及具体的证书详情列表。
 *
 * @param request ListSslCertsRequest
 * @return ListSslCertsResponse
 */
ListSslCertsResponse Client::listSslCerts(const ListSslCertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSslCertsWithOptions(request, runtime);
}

/**
 * @summary 团队详情列表
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
 * @summary 团队详情列表
 *
 * @param request ListTeamDetailsRequest
 * @return ListTeamDetailsResponse
 */
ListTeamDetailsResponse Client::listTeamDetails(const ListTeamDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTeamDetailsWithOptions(request, runtime);
}

/**
 * @summary 查询Team任务列表
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
 * @summary 查询Team任务列表
 *
 * @param request ListTeamTasksRequest
 * @return ListTeamTasksResponse
 */
ListTeamTasksResponse Client::listTeamTasks(const ListTeamTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTeamTasksWithOptions(request, runtime);
}

/**
 * @summary 查询团队列表
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
 * @summary 查询团队列表
 *
 * @param request ListTeamsRequest
 * @return ListTeamsResponse
 */
ListTeamsResponse Client::listTeams(const ListTeamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTeamsWithOptions(request, runtime);
}

/**
 * @summary 查询用户列表
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
 * @summary 查询用户列表
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Worker统计详情列表
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
 * @summary Worker统计详情列表
 *
 * @param request ListWorkerStatsDetailsRequest
 * @return ListWorkerStatsDetailsResponse
 */
ListWorkerStatsDetailsResponse Client::listWorkerStatsDetails(const ListWorkerStatsDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkerStatsDetailsWithOptions(request, runtime);
}

/**
 * @summary 查询Worker列表
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
 * @summary 查询Worker列表
 *
 * @param request ListWorkersRequest
 * @return ListWorkersResponse
 */
ListWorkersResponse Client::listWorkers(const ListWorkersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkersWithOptions(request, runtime);
}

/**
 * @summary 创建或更新CMS工作空间
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
 * @summary 创建或更新CMS工作空间
 *
 * @param request PutCmsWorkspaceRequest
 * @return PutCmsWorkspaceResponse
 */
PutCmsWorkspaceResponse Client::putCmsWorkspace(const PutCmsWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putCmsWorkspaceWithOptions(request, runtime);
}

/**
 * @summary 查询指定实例、worker、团队或个人的功能特性状态。
 *
 * @description ## 请求说明
 * - 该接口用于查询特定`instanceId`下的不同目标（如`INSTANCE`、`WORKER`、`TEAM`、`HUMAN`）的功能特性状态。
 * - `targetScope`参数定义了查询的目标类型，根据不同的`targetScope`值，可能需要提供额外的`resourceName`参数来指定具体的资源名称。
 * - 如果提供了`featureCodes`列表，则返回这些特定功能特性的状态；否则，将返回指定`targetScope`下所有功能特性的状态。
 * - 当使用`WORKER`、`TEAM`或`HUMAN`作为`targetScope`时，请确保正确填写对应的`resourceName`。
 * - 对于`INSTANCE`级别的查询，无需提供`resourceName`。
 * - 特性支持情况受基础版本、工作器版本等因素影响，并通过`unsupportedReasonCode`和`unsupportedReason`字段给出不支持的具体原因。
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
 * @summary 查询指定实例、worker、团队或个人的功能特性状态。
 *
 * @description ## 请求说明
 * - 该接口用于查询特定`instanceId`下的不同目标（如`INSTANCE`、`WORKER`、`TEAM`、`HUMAN`）的功能特性状态。
 * - `targetScope`参数定义了查询的目标类型，根据不同的`targetScope`值，可能需要提供额外的`resourceName`参数来指定具体的资源名称。
 * - 如果提供了`featureCodes`列表，则返回这些特定功能特性的状态；否则，将返回指定`targetScope`下所有功能特性的状态。
 * - 当使用`WORKER`、`TEAM`或`HUMAN`作为`targetScope`时，请确保正确填写对应的`resourceName`。
 * - 对于`INSTANCE`级别的查询，无需提供`resourceName`。
 * - 特性支持情况受基础版本、工作器版本等因素影响，并通过`unsupportedReasonCode`和`unsupportedReason`字段给出不支持的具体原因。
 *
 * @param request QueryFeaturesRequest
 * @return QueryFeaturesResponse
 */
QueryFeaturesResponse Client::queryFeatures(const QueryFeaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFeaturesWithOptions(request, runtime);
}

/**
 * @summary 获取当前AgentTeams Resource Pool配置支持的所有可用区ID。
 *
 * @description ## 请求说明
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
 * @summary 获取当前AgentTeams Resource Pool配置支持的所有可用区ID。
 *
 * @description ## 请求说明
 *
 * @param request QuerySupportedZonesRequest
 * @return QuerySupportedZonesResponse
 */
QuerySupportedZonesResponse Client::querySupportedZones(const QuerySupportedZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySupportedZonesWithOptions(request, runtime);
}

/**
 * @summary 设置用户密码
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
 * @summary 设置用户密码
 *
 * @param request ResetUserPasswordRequest
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPassword(const ResetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetUserPasswordWithOptions(request, runtime);
}

/**
 * @summary 测试模型供应商和模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 测试模型供应商和模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request TestModelProviderRequest
 * @return TestModelProviderResponse
 */
TestModelProviderResponse Client::testModelProvider(const TestModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testModelProviderWithOptions(request, runtime);
}

/**
 * @summary 解绑上游身份提供商
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
 * @summary 解绑上游身份提供商
 *
 * @param request UnbindIdentityProviderRequest
 * @return UnbindIdentityProviderResponse
 */
UnbindIdentityProviderResponse Client::unbindIdentityProvider(const UnbindIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 更新凭证密钥
 *
 * @description ## 请求说明
 * - 该接口用于更新 AgentTeams 实例下已有 Credential 的密钥明文。
 * - 仅更新 Agent Identity TokenVault 中同名 APIKeyCredentialProvider 的密钥值，不修改本地元数据（description、createTime、updateTime、status）。
 * - 响应不包含 apiKey 明文；如需绑定 Worker 明细请调用 GetCredential。
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
 * @summary 更新凭证密钥
 *
 * @description ## 请求说明
 * - 该接口用于更新 AgentTeams 实例下已有 Credential 的密钥明文。
 * - 仅更新 Agent Identity TokenVault 中同名 APIKeyCredentialProvider 的密钥值，不修改本地元数据（description、createTime、updateTime、status）。
 * - 响应不包含 apiKey 明文；如需绑定 Worker 明细请调用 GetCredential。
 *
 * @param request UpdateCredentialRequest
 * @return UpdateCredentialResponse
 */
UpdateCredentialResponse Client::updateCredential(const UpdateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCredentialWithOptions(request, runtime);
}

/**
 * @summary 更新上游身份提供商绑定
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
 * @summary 更新上游身份提供商绑定
 *
 * @param request UpdateIdentityProviderRequest
 * @return UpdateIdentityProviderResponse
 */
UpdateIdentityProviderResponse Client::updateIdentityProvider(const UpdateIdentityProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIdentityProviderWithOptions(request, runtime);
}

/**
 * @summary 用于更改指定AgentTeams实例的名称，支持通过GET或POST方法调用。
 *
 * @description ## 请求说明
 * - 推荐使用`POST`方法，并以表单形式提交参数。
 * - 当前实现不支持JSON格式的请求体，请勿尝试使用`@RequestBody`方式调用。
 * - 必须提供有效的`instanceId`和非空的`instanceName`作为参数。
 * - 该接口仅允许修改实例名称(`instanceName`)，不允许通过此接口变更命名空间(`namespace`)。
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
 * @summary 用于更改指定AgentTeams实例的名称，支持通过GET或POST方法调用。
 *
 * @description ## 请求说明
 * - 推荐使用`POST`方法，并以表单形式提交参数。
 * - 当前实现不支持JSON格式的请求体，请勿尝试使用`@RequestBody`方式调用。
 * - 必须提供有效的`instanceId`和非空的`instanceName`作为参数。
 * - 该接口仅允许修改实例名称(`instanceName`)，不允许通过此接口变更命名空间(`namespace`)。
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceWithOptions(request, runtime);
}

/**
 * @summary 重启暂停中的创建实例异步任务。
 *
 * @description ## 请求说明
 * - 该接口用于重新启动一个处于暂停状态的创建实例任务。
 * - 目前仅支持 `agentteams:pay-order:create` 类型的任务。
 * - 确保提供的 `instanceId`、`taskCode` 和 `taskId` 参数准确无误，否则可能导致请求失败。
 * - 如果任务不是暂停状态（PAUSED），则不允许调用此接口进行更新。
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
 * @summary 重启暂停中的创建实例异步任务。
 *
 * @description ## 请求说明
 * - 该接口用于重新启动一个处于暂停状态的创建实例任务。
 * - 目前仅支持 `agentteams:pay-order:create` 类型的任务。
 * - 确保提供的 `instanceId`、`taskCode` 和 `taskId` 参数准确无误，否则可能导致请求失败。
 * - 如果任务不是暂停状态（PAUSED），则不允许调用此接口进行更新。
 *
 * @param request UpdateInstanceAsyncTaskRequest
 * @return UpdateInstanceAsyncTaskResponse
 */
UpdateInstanceAsyncTaskResponse Client::updateInstanceAsyncTask(const UpdateInstanceAsyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstanceAsyncTaskWithOptions(request, runtime);
}

/**
 * @summary 更新MCP
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 更新MCP
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request UpdateMcpRequest
 * @return UpdateMcpResponse
 */
UpdateMcpResponse Client::updateMcp(const UpdateMcpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMcpWithOptions(request, runtime);
}

/**
 * @summary 更新模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 更新模型
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request UpdateModelRequest
 * @return UpdateModelResponse
 */
UpdateModelResponse Client::updateModel(const UpdateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateModelWithOptions(request, runtime);
}

/**
 * @summary 更新模型供应商
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
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
 * @summary 更新模型供应商
 *
 * @description ## 请求说明
 * - 该接口用于查询当前登录用户所拥有的所有AgentTeams实例。
 * - 用户身份通过请求头`X-User-Id`传递，服务端会根据此ID自动过滤只返回属于该用户的实例数据。
 * - 支持使用`instanceName`进行模糊匹配以及通过`status`参数精确匹配实例状态来过滤查询结果。
 * - 默认情况下，结果将按照创建时间倒序排列，并且可以通过设置`limit`和`offset`参数来进行分页控制，默认每页显示20条记录。
 * - 如果请求中缺少`X-User-Id`或者其值为空，则会返回400错误；如果指定的实例不存在或不属于当前用户，则返回404错误。
 *
 * @param request UpdateModelProviderRequest
 * @return UpdateModelProviderResponse
 */
UpdateModelProviderResponse Client::updateModelProvider(const UpdateModelProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateModelProviderWithOptions(request, runtime);
}

/**
 * @summary 用于更新指定Endpoint的域名和SSL证书信息。
 *
 * @description ## 请求说明
 * - 本API支持更新`ELEMENT`、`MATRIX`类型的Endpoint。
 * - 如果尝试更新其他类型的Endpoint，将返回400错误。
 * - 当`endpointId`不存在或不属于当前用户实例时，将返回404错误。
 * - 更新域名时，系统会创建或复用新的HTTPS domain，并将其绑定到原endpoint route上，同时解绑旧domain，但不会删除旧domain。
 * - 若不提供`domain`或`certIdentifier`参数，则保持原有设置不变。
 * - 其他如`component`、`gatewayType`等字段即使传入也不会被更新。
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
 * @summary 用于更新指定Endpoint的域名和SSL证书信息。
 *
 * @description ## 请求说明
 * - 本API支持更新`ELEMENT`、`MATRIX`类型的Endpoint。
 * - 如果尝试更新其他类型的Endpoint，将返回400错误。
 * - 当`endpointId`不存在或不属于当前用户实例时，将返回404错误。
 * - 更新域名时，系统会创建或复用新的HTTPS domain，并将其绑定到原endpoint route上，同时解绑旧domain，但不会删除旧domain。
 * - 若不提供`domain`或`certIdentifier`参数，则保持原有设置不变。
 * - 其他如`component`、`gatewayType`等字段即使传入也不会被更新。
 *
 * @param request UpdateServiceEndpointRequest
 * @return UpdateServiceEndpointResponse
 */
UpdateServiceEndpointResponse Client::updateServiceEndpoint(const UpdateServiceEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateServiceEndpointWithOptions(request, runtime);
}

/**
 * @summary 更新团队
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
 * @summary 更新团队
 *
 * @param request UpdateTeamRequest
 * @return UpdateTeamResponse
 */
UpdateTeamResponse Client::updateTeam(const UpdateTeamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTeamWithOptions(request, runtime);
}

/**
 * @summary 更新用户信息
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
 * @summary 更新用户信息
 *
 * @param request UpdateUserRequest
 * @return UpdateUserResponse
 */
UpdateUserResponse Client::updateUser(const UpdateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWithOptions(request, runtime);
}

/**
 * @summary 更新Worker
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
 * @summary 更新Worker
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