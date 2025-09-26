#include <darabonba/Core.hpp>
#include <alibabacloud/AgentRun20250910.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/http/URL.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AgentRun20250910::Models;
namespace AlibabaCloud
{
namespace AgentRun20250910
{

AlibabaCloud::AgentRun20250910::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("agentrun", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Create an agent runtime
 *
 * @description 创建一个新的智能体运行时实例，用于执行AI代理任务。智能体运行时是AgentRun服务的核心组件，提供代码执行、浏览器操作、内存管理等能力。
 *
 * @param request CreateAgentRuntimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentRuntimeResponse
 */
CreateAgentRuntimeResponse Client::createAgentRuntimeWithOptions(const CreateAgentRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateAgentRuntime"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentRuntimeResponse>();
}

/**
 * @summary Create an agent runtime
 *
 * @description 创建一个新的智能体运行时实例，用于执行AI代理任务。智能体运行时是AgentRun服务的核心组件，提供代码执行、浏览器操作、内存管理等能力。
 *
 * @param request CreateAgentRuntimeRequest
 * @return CreateAgentRuntimeResponse
 */
CreateAgentRuntimeResponse Client::createAgentRuntime(const CreateAgentRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAgentRuntimeWithOptions(request, headers, runtime);
}

/**
 * @summary 创建智能体运行时端点
 *
 * @description 为指定的智能体运行时创建新的端点，用于外部访问和调用。端点是智能体运行时对外提供服务的入口。
 *
 * @param request CreateAgentRuntimeEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentRuntimeEndpointResponse
 */
CreateAgentRuntimeEndpointResponse Client::createAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const CreateAgentRuntimeEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateAgentRuntimeEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId) , "/endpoints")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentRuntimeEndpointResponse>();
}

/**
 * @summary 创建智能体运行时端点
 *
 * @description 为指定的智能体运行时创建新的端点，用于外部访问和调用。端点是智能体运行时对外提供服务的入口。
 *
 * @param request CreateAgentRuntimeEndpointRequest
 * @return CreateAgentRuntimeEndpointResponse
 */
CreateAgentRuntimeEndpointResponse Client::createAgentRuntimeEndpoint(const string &agentRuntimeId, const CreateAgentRuntimeEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAgentRuntimeEndpointWithOptions(agentRuntimeId, request, headers, runtime);
}

/**
 * @summary 创建浏览器实例
 *
 * @description 创建一个新的浏览器实例，用于执行网页自动化任务。浏览器实例提供网页浏览、元素操作、截图录制等功能。
 *
 * @param request CreateBrowserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBrowserResponse
 */
CreateBrowserResponse Client::createBrowserWithOptions(const CreateBrowserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateBrowser"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/browsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBrowserResponse>();
}

/**
 * @summary 创建浏览器实例
 *
 * @description 创建一个新的浏览器实例，用于执行网页自动化任务。浏览器实例提供网页浏览、元素操作、截图录制等功能。
 *
 * @param request CreateBrowserRequest
 * @return CreateBrowserResponse
 */
CreateBrowserResponse Client::createBrowser(const CreateBrowserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createBrowserWithOptions(request, headers, runtime);
}

/**
 * @summary 创建代码解释器
 *
 * @description 创建一个新的代码解释器实例，用于执行代码解释和运行任务。代码解释器提供Python代码执行、数据处理、机器学习等功能。
 *
 * @param request CreateCodeInterpreterRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCodeInterpreterResponse
 */
CreateCodeInterpreterResponse Client::createCodeInterpreterWithOptions(const CreateCodeInterpreterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "CreateCodeInterpreter"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/code-interpreters")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCodeInterpreterResponse>();
}

/**
 * @summary 创建代码解释器
 *
 * @description 创建一个新的代码解释器实例，用于执行代码解释和运行任务。代码解释器提供Python代码执行、数据处理、机器学习等功能。
 *
 * @param request CreateCodeInterpreterRequest
 * @return CreateCodeInterpreterResponse
 */
CreateCodeInterpreterResponse Client::createCodeInterpreter(const CreateCodeInterpreterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCodeInterpreterWithOptions(request, headers, runtime);
}

/**
 * @summary 删除智能体运行时
 *
 * @description 删除指定的智能体运行时实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentRuntimeResponse
 */
DeleteAgentRuntimeResponse Client::deleteAgentRuntimeWithOptions(const string &agentRuntimeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgentRuntime"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentRuntimeResponse>();
}

/**
 * @summary 删除智能体运行时
 *
 * @description 删除指定的智能体运行时实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
 *
 * @return DeleteAgentRuntimeResponse
 */
DeleteAgentRuntimeResponse Client::deleteAgentRuntime(const string &agentRuntimeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentRuntimeWithOptions(agentRuntimeId, headers, runtime);
}

/**
 * @summary Delete an agent runtime endpoint
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentRuntimeEndpointResponse
 */
DeleteAgentRuntimeEndpointResponse Client::deleteAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAgentRuntimeEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId) , "/endpoints/" , Darabonba::Http::URL::percentEncode(agentRuntimeEndpointId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentRuntimeEndpointResponse>();
}

/**
 * @summary Delete an agent runtime endpoint
 *
 * @return DeleteAgentRuntimeEndpointResponse
 */
DeleteAgentRuntimeEndpointResponse Client::deleteAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentRuntimeEndpointWithOptions(agentRuntimeId, agentRuntimeEndpointId, headers, runtime);
}

/**
 * @summary 删除浏览器实例
 *
 * @description 删除指定的浏览器实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBrowserResponse
 */
DeleteBrowserResponse Client::deleteBrowserWithOptions(const string &browserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBrowser"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/browsers/" , Darabonba::Http::URL::percentEncode(browserId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBrowserResponse>();
}

/**
 * @summary 删除浏览器实例
 *
 * @description 删除指定的浏览器实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
 *
 * @return DeleteBrowserResponse
 */
DeleteBrowserResponse Client::deleteBrowser(const string &browserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteBrowserWithOptions(browserId, headers, runtime);
}

/**
 * @summary 删除代码解释器
 *
 * @description 删除指定的代码解释器实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCodeInterpreterResponse
 */
DeleteCodeInterpreterResponse Client::deleteCodeInterpreterWithOptions(const string &codeInterpreterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCodeInterpreter"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/code-interpreters/" , Darabonba::Http::URL::percentEncode(codeInterpreterId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCodeInterpreterResponse>();
}

/**
 * @summary 删除代码解释器
 *
 * @description 删除指定的代码解释器实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
 *
 * @return DeleteCodeInterpreterResponse
 */
DeleteCodeInterpreterResponse Client::deleteCodeInterpreter(const string &codeInterpreterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCodeInterpreterWithOptions(codeInterpreterId, headers, runtime);
}

/**
 * @summary 获取智能体运行时详情
 *
 * @description 根据智能体运行时ID获取指定智能体运行时的详细信息，包括配置、状态、资源使用情况等。
 *
 * @param request GetAgentRuntimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentRuntimeResponse
 */
GetAgentRuntimeResponse Client::getAgentRuntimeWithOptions(const string &agentRuntimeId, const GetAgentRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRuntimeVersion()) {
    query["agentRuntimeVersion"] = request.agentRuntimeVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentRuntime"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentRuntimeResponse>();
}

/**
 * @summary 获取智能体运行时详情
 *
 * @description 根据智能体运行时ID获取指定智能体运行时的详细信息，包括配置、状态、资源使用情况等。
 *
 * @param request GetAgentRuntimeRequest
 * @return GetAgentRuntimeResponse
 */
GetAgentRuntimeResponse Client::getAgentRuntime(const string &agentRuntimeId, const GetAgentRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentRuntimeWithOptions(agentRuntimeId, request, headers, runtime);
}

/**
 * @summary Get an agent runtime endpoint
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentRuntimeEndpointResponse
 */
GetAgentRuntimeEndpointResponse Client::getAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentRuntimeEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId) , "/endpoints/" , Darabonba::Http::URL::percentEncode(agentRuntimeEndpointId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentRuntimeEndpointResponse>();
}

/**
 * @summary Get an agent runtime endpoint
 *
 * @return GetAgentRuntimeEndpointResponse
 */
GetAgentRuntimeEndpointResponse Client::getAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentRuntimeEndpointWithOptions(agentRuntimeId, agentRuntimeEndpointId, headers, runtime);
}

/**
 * @summary 获取浏览器实例详情
 *
 * @description 根据浏览器ID获取指定浏览器实例的详细信息，包括配置、状态、资源使用情况等。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBrowserResponse
 */
GetBrowserResponse Client::getBrowserWithOptions(const string &browserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBrowser"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/browsers/" , Darabonba::Http::URL::percentEncode(browserId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBrowserResponse>();
}

/**
 * @summary 获取浏览器实例详情
 *
 * @description 根据浏览器ID获取指定浏览器实例的详细信息，包括配置、状态、资源使用情况等。
 *
 * @return GetBrowserResponse
 */
GetBrowserResponse Client::getBrowser(const string &browserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getBrowserWithOptions(browserId, headers, runtime);
}

/**
 * @summary 获取代码解释器详情
 *
 * @description 根据代码解释器ID获取指定代码解释器实例的详细信息，包括配置、状态、资源使用情况等。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCodeInterpreterResponse
 */
GetCodeInterpreterResponse Client::getCodeInterpreterWithOptions(const string &codeInterpreterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCodeInterpreter"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/code-interpreters/" , Darabonba::Http::URL::percentEncode(codeInterpreterId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCodeInterpreterResponse>();
}

/**
 * @summary 获取代码解释器详情
 *
 * @description 根据代码解释器ID获取指定代码解释器实例的详细信息，包括配置、状态、资源使用情况等。
 *
 * @return GetCodeInterpreterResponse
 */
GetCodeInterpreterResponse Client::getCodeInterpreter(const string &codeInterpreterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCodeInterpreterWithOptions(codeInterpreterId, headers, runtime);
}

/**
 * @summary 列出智能体运行时端点
 *
 * @description 获取指定智能体运行时的所有端点列表，支持按名称过滤和分页查询。端点用于外部系统访问智能体运行时服务。
 *
 * @param request ListAgentRuntimeEndpointsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentRuntimeEndpointsResponse
 */
ListAgentRuntimeEndpointsResponse Client::listAgentRuntimeEndpointsWithOptions(const string &agentRuntimeId, const ListAgentRuntimeEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndpointName()) {
    query["endpointName"] = request.endpointName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentRuntimeEndpoints"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId) , "/endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentRuntimeEndpointsResponse>();
}

/**
 * @summary 列出智能体运行时端点
 *
 * @description 获取指定智能体运行时的所有端点列表，支持按名称过滤和分页查询。端点用于外部系统访问智能体运行时服务。
 *
 * @param request ListAgentRuntimeEndpointsRequest
 * @return ListAgentRuntimeEndpointsResponse
 */
ListAgentRuntimeEndpointsResponse Client::listAgentRuntimeEndpoints(const string &agentRuntimeId, const ListAgentRuntimeEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentRuntimeEndpointsWithOptions(agentRuntimeId, request, headers, runtime);
}

/**
 * @summary List agent runtime versions
 *
 * @param request ListAgentRuntimeVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentRuntimeVersionsResponse
 */
ListAgentRuntimeVersionsResponse Client::listAgentRuntimeVersionsWithOptions(const string &agentRuntimeId, const ListAgentRuntimeVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentRuntimeVersions"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentRuntimeVersionsResponse>();
}

/**
 * @summary List agent runtime versions
 *
 * @param request ListAgentRuntimeVersionsRequest
 * @return ListAgentRuntimeVersionsResponse
 */
ListAgentRuntimeVersionsResponse Client::listAgentRuntimeVersions(const string &agentRuntimeId, const ListAgentRuntimeVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentRuntimeVersionsWithOptions(agentRuntimeId, request, headers, runtime);
}

/**
 * @summary 列出智能体运行时
 *
 * @description 获取当前用户的所有智能体运行时列表，支持按名称、标签等条件过滤，支持分页查询。
 *
 * @param request ListAgentRuntimesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentRuntimesResponse
 */
ListAgentRuntimesResponse Client::listAgentRuntimesWithOptions(const ListAgentRuntimesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRuntimeName()) {
    query["agentRuntimeName"] = request.agentRuntimeName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentRuntimes"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentRuntimesResponse>();
}

/**
 * @summary 列出智能体运行时
 *
 * @description 获取当前用户的所有智能体运行时列表，支持按名称、标签等条件过滤，支持分页查询。
 *
 * @param request ListAgentRuntimesRequest
 * @return ListAgentRuntimesResponse
 */
ListAgentRuntimesResponse Client::listAgentRuntimes(const ListAgentRuntimesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAgentRuntimesWithOptions(request, headers, runtime);
}

/**
 * @summary 列出浏览器实例
 *
 * @description 获取当前用户的所有浏览器实例列表，支持按名称、状态等条件过滤，支持分页查询。
 *
 * @param request ListBrowsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBrowsersResponse
 */
ListBrowsersResponse Client::listBrowsersWithOptions(const ListBrowsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrowserName()) {
    query["browserName"] = request.browserName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBrowsers"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/browsers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBrowsersResponse>();
}

/**
 * @summary 列出浏览器实例
 *
 * @description 获取当前用户的所有浏览器实例列表，支持按名称、状态等条件过滤，支持分页查询。
 *
 * @param request ListBrowsersRequest
 * @return ListBrowsersResponse
 */
ListBrowsersResponse Client::listBrowsers(const ListBrowsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBrowsersWithOptions(request, headers, runtime);
}

/**
 * @summary 列出代码解释器
 *
 * @description 获取当前用户的所有代码解释器实例列表，支持按名称等条件过滤，支持分页查询。
 *
 * @param request ListCodeInterpretersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCodeInterpretersResponse
 */
ListCodeInterpretersResponse Client::listCodeInterpretersWithOptions(const ListCodeInterpretersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCodeInterpreterName()) {
    query["codeInterpreterName"] = request.codeInterpreterName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCodeInterpreters"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/code-interpreters")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCodeInterpretersResponse>();
}

/**
 * @summary 列出代码解释器
 *
 * @description 获取当前用户的所有代码解释器实例列表，支持按名称等条件过滤，支持分页查询。
 *
 * @param request ListCodeInterpretersRequest
 * @return ListCodeInterpretersResponse
 */
ListCodeInterpretersResponse Client::listCodeInterpreters(const ListCodeInterpretersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCodeInterpretersWithOptions(request, headers, runtime);
}

/**
 * @summary 发布运行时版本
 *
 * @description 为指定的智能体运行时发布新版本，用于版本管理和部署。新版本可以包含代码更新、配置变更等内容。
 *
 * @param request PublishRuntimeVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishRuntimeVersionResponse
 */
PublishRuntimeVersionResponse Client::publishRuntimeVersionWithOptions(const string &agentRuntimeId, const PublishRuntimeVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "PublishRuntimeVersion"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishRuntimeVersionResponse>();
}

/**
 * @summary 发布运行时版本
 *
 * @description 为指定的智能体运行时发布新版本，用于版本管理和部署。新版本可以包含代码更新、配置变更等内容。
 *
 * @param request PublishRuntimeVersionRequest
 * @return PublishRuntimeVersionResponse
 */
PublishRuntimeVersionResponse Client::publishRuntimeVersion(const string &agentRuntimeId, const PublishRuntimeVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishRuntimeVersionWithOptions(agentRuntimeId, request, headers, runtime);
}

/**
 * @summary 更新智能体运行时
 *
 * @description 更新指定智能体运行时的配置信息，包括资源分配、网络配置、环境变量等。更新操作会触发运行时重启。
 *
 * @param request UpdateAgentRuntimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentRuntimeResponse
 */
UpdateAgentRuntimeResponse Client::updateAgentRuntimeWithOptions(const string &agentRuntimeId, const UpdateAgentRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentRuntime"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentRuntimeResponse>();
}

/**
 * @summary 更新智能体运行时
 *
 * @description 更新指定智能体运行时的配置信息，包括资源分配、网络配置、环境变量等。更新操作会触发运行时重启。
 *
 * @param request UpdateAgentRuntimeRequest
 * @return UpdateAgentRuntimeResponse
 */
UpdateAgentRuntimeResponse Client::updateAgentRuntime(const string &agentRuntimeId, const UpdateAgentRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentRuntimeWithOptions(agentRuntimeId, request, headers, runtime);
}

/**
 * @summary Update an agent runtime endpoint
 *
 * @param request UpdateAgentRuntimeEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentRuntimeEndpointResponse
 */
UpdateAgentRuntimeEndpointResponse Client::updateAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const UpdateAgentRuntimeEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.body())}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentRuntimeEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Http::URL::percentEncode(agentRuntimeId) , "/endpoints/" , Darabonba::Http::URL::percentEncode(agentRuntimeEndpointId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentRuntimeEndpointResponse>();
}

/**
 * @summary Update an agent runtime endpoint
 *
 * @param request UpdateAgentRuntimeEndpointRequest
 * @return UpdateAgentRuntimeEndpointResponse
 */
UpdateAgentRuntimeEndpointResponse Client::updateAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const UpdateAgentRuntimeEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAgentRuntimeEndpointWithOptions(agentRuntimeId, agentRuntimeEndpointId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentRun20250910