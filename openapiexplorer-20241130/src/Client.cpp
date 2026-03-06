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
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"ap-southeast-1" , "openapi-mcp.ap-southeast-1.aliyuncs.com"},
    {"cn-hangzhou" , "openapi-mcp.cn-hangzhou.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Validates the syntax of HashiCorp Configuration Language (HCL) for Terraform.
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
    body["code"] = request.getCode();
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
 * @summary Validates the syntax of HashiCorp Configuration Language (HCL) for Terraform.
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
 * @summary Creates an API MCP service.
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
    body["additionalApiDescriptions"] = request.getAdditionalApiDescriptions();
  }

  if (!!request.hasApis()) {
    body["apis"] = request.getApis();
  }

  if (!!request.hasAssumeRoleExtraPolicy()) {
    body["assumeRoleExtraPolicy"] = request.getAssumeRoleExtraPolicy();
  }

  if (!!request.hasAssumeRoleName()) {
    body["assumeRoleName"] = request.getAssumeRoleName();
  }

  if (!!request.hasClientToken()) {
    body["clientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasEnableAssumeRole()) {
    body["enableAssumeRole"] = request.getEnableAssumeRole();
  }

  if (!!request.hasEnableCustomVpcWhitelist()) {
    body["enableCustomVpcWhitelist"] = request.getEnableCustomVpcWhitelist();
  }

  if (!!request.hasInstructions()) {
    body["instructions"] = request.getInstructions();
  }

  if (!!request.hasLanguage()) {
    body["language"] = request.getLanguage();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasOauthClientId()) {
    body["oauthClientId"] = request.getOauthClientId();
  }

  if (!!request.hasPrompts()) {
    body["prompts"] = request.getPrompts();
  }

  if (!!request.hasPublicAccess()) {
    body["publicAccess"] = request.getPublicAccess();
  }

  if (!!request.hasSystemTools()) {
    body["systemTools"] = request.getSystemTools();
  }

  if (!!request.hasTerraformTools()) {
    body["terraformTools"] = request.getTerraformTools();
  }

  if (!!request.hasVpcWhitelists()) {
    body["vpcWhitelists"] = request.getVpcWhitelists();
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
 * @summary Creates an API MCP service.
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
 * @summary Deletes an API MCP service.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
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
 * @summary Deletes an API MCP service.
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
 * @summary Generates commands for the Alibaba Cloud command-line interface (CLI).
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
    request.setApiParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApiParams(), "apiParams", "json"));
  }

  json body = {};
  if (!!request.hasAggregatePagination()) {
    body["aggregatePagination"] = request.getAggregatePagination();
  }

  if (!!request.hasApi()) {
    body["api"] = request.getApi();
  }

  if (!!request.hasApiParamsShrink()) {
    body["apiParams"] = request.getApiParamsShrink();
  }

  if (!!request.hasApiVersion()) {
    body["apiVersion"] = request.getApiVersion();
  }

  if (!!request.hasJsonApiParams()) {
    body["jsonApiParams"] = request.getJsonApiParams();
  }

  if (!!request.hasProduct()) {
    body["product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    body["regionId"] = request.getRegionId();
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
 * @summary Generates commands for the Alibaba Cloud command-line interface (CLI).
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
 * @summary Retrieves the OpenAPI metadata for an API in a product.
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
    query["api"] = request.getApi();
  }

  if (!!request.hasApiVersion()) {
    query["apiVersion"] = request.getApiVersion();
  }

  if (!!request.hasProduct()) {
    query["product"] = request.getProduct();
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
 * @summary Retrieves the OpenAPI metadata for an API in a product.
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
 * @summary Retrieves the details of a specific API MCP service.
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
    query["id"] = request.getId();
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
 * @summary Retrieves the details of a specific API MCP service.
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
 * @summary Queries the global API MCP Server configuration for a user. The configuration includes settings for public network access and the whitelist of source VPC IDs for requests from a VPC.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiMcpServerUserConfigResponse
 */
GetApiMcpServerUserConfigResponse Client::getApiMcpServerUserConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApiMcpServerUserConfig"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/userconfig/get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApiMcpServerUserConfigResponse>();
}

/**
 * @summary Queries the global API MCP Server configuration for a user. The configuration includes settings for public network access and the whitelist of source VPC IDs for requests from a VPC.
 *
 * @return GetApiMcpServerUserConfigResponse
 */
GetApiMcpServerUserConfigResponse Client::getApiMcpServerUserConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getApiMcpServerUserConfigWithOptions(headers, runtime);
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
    query["acceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasErrorCode()) {
    query["errorCode"] = request.getErrorCode();
  }

  if (!!request.hasErrorMessage()) {
    query["errorMessage"] = request.getErrorMessage();
  }

  if (!!request.hasProduct()) {
    query["product"] = request.getProduct();
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
 * @summary Queries the details of an OpenAPI call log for your account using the request ID returned from an API call. This operation is used for troubleshooting.
 *
 * @description This API does not support authorization.
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
    query["logRequestId"] = request.getLogRequestId();
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
 * @summary Queries the details of an OpenAPI call log for your account using the request ID returned from an API call. This operation is used for troubleshooting.
 *
 * @description This API does not support authorization.
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
 * @summary Retrieves the endpoint information for a product.
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
    query["product"] = request.getProduct();
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
 * @summary Retrieves the endpoint information for a product.
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
 * @summary Queries the details of a request log using the request ID that is returned from an API call. This operation is useful for troubleshooting.
 *
 * @description You can query call logs across different RAM users or Alibaba Cloud accounts using RAM authorization or role assumption. For more information, see [Cross-account API error diagnosis authorization](https://help.aliyun.com/document_detail/2868101.html).
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
    query["logRequestId"] = request.getLogRequestId();
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
 * @summary Queries the details of a request log using the request ID that is returned from an API call. This operation is useful for troubleshooting.
 *
 * @description You can query call logs across different RAM users or Alibaba Cloud accounts using RAM authorization or role assumption. For more information, see [Cross-account API error diagnosis authorization](https://help.aliyun.com/document_detail/2868101.html).
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
 * @summary Retrieves the OpenAPI metadata for a product.
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
    query["apiVersion"] = request.getApiVersion();
  }

  if (!!request.hasProduct()) {
    query["product"] = request.getProduct();
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
 * @summary Retrieves the OpenAPI metadata for a product.
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
 * @summary Lists the system tools supported by the MCP service.
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
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    query["skip"] = request.getSkip();
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
 * @summary Lists the system tools supported by the MCP service.
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
 * @summary This operation queries a list of all API MCP servers in an Alibaba Cloud account.
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
    query["createTime"] = request.getCreateTime();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasSkip()) {
    query["skip"] = request.getSkip();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
  }

  if (!!request.hasUpdateTime()) {
    query["updateTime"] = request.getUpdateTime();
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
 * @summary This operation queries a list of all API MCP servers in an Alibaba Cloud account.
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
 * @summary Updates an API MCP service.
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
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  json body = {};
  if (!!request.hasAdditionalApiDescriptions()) {
    body["additionalApiDescriptions"] = request.getAdditionalApiDescriptions();
  }

  if (!!request.hasApis()) {
    body["apis"] = request.getApis();
  }

  if (!!request.hasAssumeRoleExtraPolicy()) {
    body["assumeRoleExtraPolicy"] = request.getAssumeRoleExtraPolicy();
  }

  if (!!request.hasAssumeRoleName()) {
    body["assumeRoleName"] = request.getAssumeRoleName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasEnableAssumeRole()) {
    body["enableAssumeRole"] = request.getEnableAssumeRole();
  }

  if (!!request.hasEnableCustomVpcWhitelist()) {
    body["enableCustomVpcWhitelist"] = request.getEnableCustomVpcWhitelist();
  }

  if (!!request.hasInstructions()) {
    body["instructions"] = request.getInstructions();
  }

  if (!!request.hasLanguage()) {
    body["language"] = request.getLanguage();
  }

  if (!!request.hasOauthClientId()) {
    body["oauthClientId"] = request.getOauthClientId();
  }

  if (!!request.hasPrompts()) {
    body["prompts"] = request.getPrompts();
  }

  if (!!request.hasPublicAccess()) {
    body["publicAccess"] = request.getPublicAccess();
  }

  if (!!request.hasSystemTools()) {
    body["systemTools"] = request.getSystemTools();
  }

  if (!!request.hasTerraformTools()) {
    body["terraformTools"] = request.getTerraformTools();
  }

  if (!!request.hasVpcWhitelists()) {
    body["vpcWhitelists"] = request.getVpcWhitelists();
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
 * @summary Updates an API MCP service.
 *
 * @param request UpdateApiMcpServerRequest
 * @return UpdateApiMcpServerResponse
 */
UpdateApiMcpServerResponse Client::updateApiMcpServer(const UpdateApiMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApiMcpServerWithOptions(request, headers, runtime);
}

/**
 * @summary Updates the global API MCP Server configuration for a user.
 *
 * @param request UpdateApiMcpServerUserConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiMcpServerUserConfigResponse
 */
UpdateApiMcpServerUserConfigResponse Client::updateApiMcpServerUserConfigWithOptions(const UpdateApiMcpServerUserConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnablePublicAccess()) {
    body["enablePublicAccess"] = request.getEnablePublicAccess();
  }

  if (!!request.hasVpcWhitelists()) {
    body["vpcWhitelists"] = request.getVpcWhitelists();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApiMcpServerUserConfig"},
    {"version" , "2024-11-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/userconfig/update")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApiMcpServerUserConfigResponse>();
}

/**
 * @summary Updates the global API MCP Server configuration for a user.
 *
 * @param request UpdateApiMcpServerUserConfigRequest
 * @return UpdateApiMcpServerUserConfigResponse
 */
UpdateApiMcpServerUserConfigResponse Client::updateApiMcpServerUserConfig(const UpdateApiMcpServerUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateApiMcpServerUserConfigWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130