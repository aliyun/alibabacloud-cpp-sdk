#include <darabonba/Core.hpp>
#include <alibabacloud/OpenAPIExplorer20241130.hpp>
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
using namespace AlibabaCloud::OpenAPIExplorer20241130::Models;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{

AlibabaCloud::OpenAPIExplorer20241130::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("openapiexplorer", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 验证 Terraform HCL 语法
 *
 * @param request ApiMcpServerValidateHclRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApiMcpServerValidateHclResponse
 */
ApiMcpServerValidateHclResponse Client::apiMcpServerValidateHclWithOptions(const ApiMcpServerValidateHclRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.code();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApiMcpServerValidateHcl"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/terraform/validate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApiMcpServerValidateHclResponse>();
}

/**
 * @summary 验证 Terraform HCL 语法
 *
 * @param request ApiMcpServerValidateHclRequest
 * @return ApiMcpServerValidateHclResponse
 */
ApiMcpServerValidateHclResponse Client::apiMcpServerValidateHcl(const ApiMcpServerValidateHclRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return apiMcpServerValidateHclWithOptions(request, headers, runtime);
}

/**
 * @summary 创建ApiMcpServer
 *
 * @param request CreateApiMcpServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiMcpServerResponse
 */
CreateApiMcpServerResponse Client::createApiMcpServerWithOptions(const CreateApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdditionalApiDescriptions()) {
    body["additionalApiDescriptions"] = request.additionalApiDescriptions();
  }

  if (!!request.hasApis()) {
    body["apis"] = request.apis();
  }

  if (!!request.hasAssumeRoleExtraPolicy()) {
    body["assumeRoleExtraPolicy"] = request.assumeRoleExtraPolicy();
  }

  if (!!request.hasAssumeRoleName()) {
    body["assumeRoleName"] = request.assumeRoleName();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasEnableAssumeRole()) {
    body["enableAssumeRole"] = request.enableAssumeRole();
  }

  if (!!request.hasInstructions()) {
    body["instructions"] = request.instructions();
  }

  if (!!request.hasLanguage()) {
    body["language"] = request.language();
  }

  if (!!request.hasName()) {
    body["name"] = request.name();
  }

  if (!!request.hasOauthClientId()) {
    body["oauthClientId"] = request.oauthClientId();
  }

  if (!!request.hasPrompts()) {
    body["prompts"] = request.prompts();
  }

  if (!!request.hasSystemTools()) {
    body["systemTools"] = request.systemTools();
  }

  if (!!request.hasTerraformTools()) {
    body["terraformTools"] = request.terraformTools();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateApiMcpServer"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apimcpserver")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiMcpServerResponse>();
}

/**
 * @summary 创建ApiMcpServer
 *
 * @param request CreateApiMcpServerRequest
 * @return CreateApiMcpServerResponse
 */
CreateApiMcpServerResponse Client::createApiMcpServer(const CreateApiMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createApiMcpServerWithOptions(request, headers, runtime);
}

/**
 * @summary 删除ApiMcpServer
 *
 * @param request DeleteApiMcpServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiMcpServerResponse
 */
DeleteApiMcpServerResponse Client::deleteApiMcpServerWithOptions(const DeleteApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiMcpServer"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apimcpserver")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiMcpServerResponse>();
}

/**
 * @summary 删除ApiMcpServer
 *
 * @param request DeleteApiMcpServerRequest
 * @return DeleteApiMcpServerResponse
 */
DeleteApiMcpServerResponse Client::deleteApiMcpServer(const DeleteApiMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteApiMcpServerWithOptions(request, headers, runtime);
}

/**
 * @summary 动态生成Aliyun CLI命令
 *
 * @param tmpReq GenerateCLICommandRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateCLICommandResponse
 */
GenerateCLICommandResponse Client::generateCLICommandWithOptions(const GenerateCLICommandRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateCLICommandShrinkRequest request = GenerateCLICommandShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiParams()) {
    request.setApiParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.apiParams(), "apiParams", "json"));
  }

  json body = {};
  if (!!request.hasApi()) {
    body["api"] = request.api();
  }

  if (!!request.hasApiParamsShrink()) {
    body["apiParams"] = request.apiParamsShrink();
  }

  if (!!request.hasApiVersion()) {
    body["apiVersion"] = request.apiVersion();
  }

  if (!!request.hasProduct()) {
    body["product"] = request.product();
  }

  if (!!request.hasRegionId()) {
    body["regionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GenerateCLICommand"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/cli/makeCode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateCLICommandResponse>();
}

/**
 * @summary 动态生成Aliyun CLI命令
 *
 * @param request GenerateCLICommandRequest
 * @return GenerateCLICommandResponse
 */
GenerateCLICommandResponse Client::generateCLICommand(const GenerateCLICommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return generateCLICommandWithOptions(request, headers, runtime);
}

/**
 * @summary 获取产品相关接口的开放元数据
 *
 * @param request GetApiDefinitionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiDefinitionResponse
 */
GetApiDefinitionResponse Client::getApiDefinitionWithOptions(const GetApiDefinitionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApi()) {
    query["api"] = request.api();
  }

  if (!!request.hasApiVersion()) {
    query["apiVersion"] = request.apiVersion();
  }

  if (!!request.hasProduct()) {
    query["product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApiDefinition"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/definition")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApiDefinitionResponse>();
}

/**
 * @summary 获取产品相关接口的开放元数据
 *
 * @param request GetApiDefinitionRequest
 * @return GetApiDefinitionResponse
 */
GetApiDefinitionResponse Client::getApiDefinition(const GetApiDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApiDefinitionWithOptions(request, headers, runtime);
}

/**
 * @summary 查询 ApiMcpServer
 *
 * @param request GetApiMcpServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiMcpServerResponse
 */
GetApiMcpServerResponse Client::getApiMcpServerWithOptions(const GetApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApiMcpServer"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apimcpserver")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApiMcpServerResponse>();
}

/**
 * @summary 查询 ApiMcpServer
 *
 * @param request GetApiMcpServerRequest
 * @return GetApiMcpServerResponse
 */
GetApiMcpServerResponse Client::getApiMcpServer(const GetApiMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApiMcpServerWithOptions(request, headers, runtime);
}

/**
 * @summary Queries an error solution by error code.
 *
 * @description You can call this API operation to query public information instead of special information, such as the account ownership. Permissions on this API operation cannot be granted to other members.
 *
 * @param request GetErrorCodeSolutionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErrorCodeSolutionsResponse
 */
GetErrorCodeSolutionsResponse Client::getErrorCodeSolutionsWithOptions(const GetErrorCodeSolutionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["acceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasErrorCode()) {
    query["errorCode"] = request.errorCode();
  }

  if (!!request.hasErrorMessage()) {
    query["errorMessage"] = request.errorMessage();
  }

  if (!!request.hasProduct()) {
    query["product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetErrorCodeSolutions"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/getErrorCodeSolutions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetErrorCodeSolutionsResponse>();
}

/**
 * @summary Queries an error solution by error code.
 *
 * @description You can call this API operation to query public information instead of special information, such as the account ownership. Permissions on this API operation cannot be granted to other members.
 *
 * @param request GetErrorCodeSolutionsRequest
 * @return GetErrorCodeSolutionsResponse
 */
GetErrorCodeSolutionsResponse Client::getErrorCodeSolutions(const GetErrorCodeSolutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getErrorCodeSolutionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the log of an API call performed by using the current account based on the returned request ID of the API to troubleshoot issues.
 *
 * @description Permissions on this API cannot be granted to other members.
 *
 * @param request GetOwnRequestLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOwnRequestLogResponse
 */
GetOwnRequestLogResponse Client::getOwnRequestLogWithOptions(const GetOwnRequestLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogRequestId()) {
    query["logRequestId"] = request.logRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOwnRequestLog"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/getOwnRequestLog")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOwnRequestLogResponse>();
}

/**
 * @summary Queries the log of an API call performed by using the current account based on the returned request ID of the API to troubleshoot issues.
 *
 * @description Permissions on this API cannot be granted to other members.
 *
 * @param request GetOwnRequestLogRequest
 * @return GetOwnRequestLogResponse
 */
GetOwnRequestLogResponse Client::getOwnRequestLog(const GetOwnRequestLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getOwnRequestLogWithOptions(request, headers, runtime);
}

/**
 * @summary 获取产品的接入点信息
 *
 * @param request GetProductEndpointsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductEndpointsResponse
 */
GetProductEndpointsResponse Client::getProductEndpointsWithOptions(const GetProductEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProduct()) {
    query["product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProductEndpoints"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/product/endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProductEndpointsResponse>();
}

/**
 * @summary 获取产品的接入点信息
 *
 * @param request GetProductEndpointsRequest
 * @return GetProductEndpointsResponse
 */
GetProductEndpointsResponse Client::getProductEndpoints(const GetProductEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProductEndpointsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the log of an API call based on the returned request ID of the API to troubleshoot issues.
 *
 * @description You can grant permissions to a Resource Access Management (RAM) user or assume a role to query the log of an API call across RAM users or Alibaba Cloud accounts. For more information, see [Grant permissions to troubleshoot API errors across accounts](https://help.aliyun.com/document_detail/2868101.html).
 *
 * @param request GetRequestLogRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRequestLogResponse
 */
GetRequestLogResponse Client::getRequestLogWithOptions(const GetRequestLogRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogRequestId()) {
    query["logRequestId"] = request.logRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRequestLog"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/getRequestLog")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRequestLogResponse>();
}

/**
 * @summary Queries the log of an API call based on the returned request ID of the API to troubleshoot issues.
 *
 * @description You can grant permissions to a Resource Access Management (RAM) user or assume a role to query the log of an API call across RAM users or Alibaba Cloud accounts. For more information, see [Grant permissions to troubleshoot API errors across accounts](https://help.aliyun.com/document_detail/2868101.html).
 *
 * @param request GetRequestLogRequest
 * @return GetRequestLogResponse
 */
GetRequestLogResponse Client::getRequestLog(const GetRequestLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRequestLogWithOptions(request, headers, runtime);
}

/**
 * @summary 获取产品的开放元数据
 *
 * @param request ListApiDefinitionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiDefinitionsResponse
 */
ListApiDefinitionsResponse Client::listApiDefinitionsWithOptions(const ListApiDefinitionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiVersion()) {
    query["apiVersion"] = request.apiVersion();
  }

  if (!!request.hasProduct()) {
    query["product"] = request.product();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiDefinitions"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/definitions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiDefinitionsResponse>();
}

/**
 * @summary 获取产品的开放元数据
 *
 * @param request ListApiDefinitionsRequest
 * @return ListApiDefinitionsResponse
 */
ListApiDefinitionsResponse Client::listApiDefinitions(const ListApiDefinitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApiDefinitionsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询系统工具列表
 *
 * @param request ListApiMcpServerSystemToolsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiMcpServerSystemToolsResponse
 */
ListApiMcpServerSystemToolsResponse Client::listApiMcpServerSystemToolsWithOptions(const ListApiMcpServerSystemToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSkip()) {
    query["skip"] = request.skip();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiMcpServerSystemTools"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/mcpSystemTools")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiMcpServerSystemToolsResponse>();
}

/**
 * @summary 查询系统工具列表
 *
 * @param request ListApiMcpServerSystemToolsRequest
 * @return ListApiMcpServerSystemToolsResponse
 */
ListApiMcpServerSystemToolsResponse Client::listApiMcpServerSystemTools(const ListApiMcpServerSystemToolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApiMcpServerSystemToolsWithOptions(request, headers, runtime);
}

/**
 * @summary 列出资源ApiMcpServer
 *
 * @param request ListApiMcpServersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiMcpServersResponse
 */
ListApiMcpServersResponse Client::listApiMcpServersWithOptions(const ListApiMcpServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTime()) {
    query["createTime"] = request.createTime();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.description();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.language();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasSkip()) {
    query["skip"] = request.skip();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.sourceType();
  }

  if (!!request.hasUpdateTime()) {
    query["updateTime"] = request.updateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiMcpServers"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apimcpservers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiMcpServersResponse>();
}

/**
 * @summary 列出资源ApiMcpServer
 *
 * @param request ListApiMcpServersRequest
 * @return ListApiMcpServersResponse
 */
ListApiMcpServersResponse Client::listApiMcpServers(const ListApiMcpServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApiMcpServersWithOptions(request, headers, runtime);
}

/**
 * @summary 更新UpdateApiMcpServer
 *
 * @param request UpdateApiMcpServerRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiMcpServerResponse
 */
UpdateApiMcpServerResponse Client::updateApiMcpServerWithOptions(const UpdateApiMcpServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.clientToken();
  }

  if (!!request.hasId()) {
    query["id"] = request.id();
  }

  json body = {};
  if (!!request.hasAdditionalApiDescriptions()) {
    body["additionalApiDescriptions"] = request.additionalApiDescriptions();
  }

  if (!!request.hasApis()) {
    body["apis"] = request.apis();
  }

  if (!!request.hasAssumeRoleExtraPolicy()) {
    body["assumeRoleExtraPolicy"] = request.assumeRoleExtraPolicy();
  }

  if (!!request.hasAssumeRoleName()) {
    body["assumeRoleName"] = request.assumeRoleName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasEnableAssumeRole()) {
    body["enableAssumeRole"] = request.enableAssumeRole();
  }

  if (!!request.hasInstructions()) {
    body["instructions"] = request.instructions();
  }

  if (!!request.hasLanguage()) {
    body["language"] = request.language();
  }

  if (!!request.hasOauthClientId()) {
    body["oauthClientId"] = request.oauthClientId();
  }

  if (!!request.hasPrompts()) {
    body["prompts"] = request.prompts();
  }

  if (!!request.hasSystemTools()) {
    body["systemTools"] = request.systemTools();
  }

  if (!!request.hasTerraformTools()) {
    body["terraformTools"] = request.terraformTools();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApiMcpServer"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apimcpserver")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApiMcpServerResponse>();
}

/**
 * @summary 更新UpdateApiMcpServer
 *
 * @param request UpdateApiMcpServerRequest
 * @return UpdateApiMcpServerResponse
 */
UpdateApiMcpServerResponse Client::updateApiMcpServer(const UpdateApiMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApiMcpServerWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130