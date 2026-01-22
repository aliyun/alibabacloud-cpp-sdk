#include <darabonba/Core.hpp>
#include <alibabacloud/AgentRun20250910.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
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
 * @summary 启动模板的MCP服务器
 *
 * @param request ActivateTemplateMCPRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateTemplateMCPResponse
 */
ActivateTemplateMCPResponse Client::activateTemplateMCPWithOptions(const string &templateName, const ActivateTemplateMCPRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnabledTools()) {
    body["enabledTools"] = request.getEnabledTools();
  }

  if (!!request.hasTransport()) {
    body["transport"] = request.getTransport();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ActivateTemplateMCP"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/templates/" , Darabonba::Encode::Encoder::percentEncode(templateName) , "/mcp/activate")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateTemplateMCPResponse>();
}

/**
 * @summary 启动模板的MCP服务器
 *
 * @param request ActivateTemplateMCPRequest
 * @return ActivateTemplateMCPResponse
 */
ActivateTemplateMCPResponse Client::activateTemplateMCP(const string &templateName, const ActivateTemplateMCPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return activateTemplateMCPWithOptions(templateName, request, headers, runtime);
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateAgentRuntimeEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId) , "/endpoints")},
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
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
 * @summary Create a credential
 *
 * @param request CreateCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCredentialResponse
 */
CreateCredentialResponse Client::createCredentialWithOptions(const CreateCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateCredential"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/credentials")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCredentialResponse>();
}

/**
 * @summary Create a credential
 *
 * @param request CreateCredentialRequest
 * @return CreateCredentialResponse
 */
CreateCredentialResponse Client::createCredential(const CreateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCredentialWithOptions(request, headers, runtime);
}

/**
 * @summary 创建自定义域名
 *
 * @param request CreateCustomDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomDomainResponse
 */
CreateCustomDomainResponse Client::createCustomDomainWithOptions(const CreateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateCustomDomain"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/custom-domains")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomDomainResponse>();
}

/**
 * @summary 创建自定义域名
 *
 * @param request CreateCustomDomainRequest
 * @return CreateCustomDomainResponse
 */
CreateCustomDomainResponse Client::createCustomDomain(const CreateCustomDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCustomDomainWithOptions(request, headers, runtime);
}

/**
 * @summary 创建知识库
 *
 * @param request CreateKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKnowledgeBaseResponse
 */
CreateKnowledgeBaseResponse Client::createKnowledgeBaseWithOptions(const CreateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateKnowledgeBase"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/knowledgebases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKnowledgeBaseResponse>();
}

/**
 * @summary 创建知识库
 *
 * @param request CreateKnowledgeBaseRequest
 * @return CreateKnowledgeBaseResponse
 */
CreateKnowledgeBaseResponse Client::createKnowledgeBase(const CreateKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createKnowledgeBaseWithOptions(request, headers, runtime);
}

/**
 * @summary 添加记忆存储
 *
 * @param request CreateMemoryCollectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemoryCollectionResponse
 */
CreateMemoryCollectionResponse Client::createMemoryCollectionWithOptions(const CreateMemoryCollectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMemoryCollection"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/memory-collections")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMemoryCollectionResponse>();
}

/**
 * @summary 添加记忆存储
 *
 * @param request CreateMemoryCollectionRequest
 * @return CreateMemoryCollectionResponse
 */
CreateMemoryCollectionResponse Client::createMemoryCollection(const CreateMemoryCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMemoryCollectionWithOptions(request, headers, runtime);
}

/**
 * @summary 新增模型
 *
 * @param request CreateModelProxyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelProxyResponse
 */
CreateModelProxyResponse Client::createModelProxyWithOptions(const CreateModelProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateModelProxy"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-proxies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelProxyResponse>();
}

/**
 * @summary 新增模型
 *
 * @param request CreateModelProxyRequest
 * @return CreateModelProxyResponse
 */
CreateModelProxyResponse Client::createModelProxy(const CreateModelProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelProxyWithOptions(request, headers, runtime);
}

/**
 * @summary 新增模型
 *
 * @param request CreateModelServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelServiceResponse
 */
CreateModelServiceResponse Client::createModelServiceWithOptions(const CreateModelServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateModelService"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-services")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelServiceResponse>();
}

/**
 * @summary 新增模型
 *
 * @param request CreateModelServiceRequest
 * @return CreateModelServiceResponse
 */
CreateModelServiceResponse Client::createModelService(const CreateModelServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelServiceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建沙箱
 *
 * @description 根据模板创建一个新的沙箱实例。沙箱是运行时的执行环境，可以执行代码或运行浏览器。
 *
 * @param request CreateSandboxRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSandboxResponse
 */
CreateSandboxResponse Client::createSandboxWithOptions(const CreateSandboxRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateSandbox"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/sandboxes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSandboxResponse>();
}

/**
 * @summary 创建沙箱
 *
 * @description 根据模板创建一个新的沙箱实例。沙箱是运行时的执行环境，可以执行代码或运行浏览器。
 *
 * @param request CreateSandboxRequest
 * @return CreateSandboxResponse
 */
CreateSandboxResponse Client::createSandbox(const CreateSandboxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSandboxWithOptions(request, headers, runtime);
}

/**
 * @summary 创建模板
 *
 * @description 创建一个新的模板，用于后续创建沙箱。模板定义了沙箱的运行时环境、资源配置等。
 *
 * @param request CreateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplateWithOptions(const CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateTemplate"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/templates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTemplateResponse>();
}

/**
 * @summary 创建模板
 *
 * @description 创建一个新的模板，用于后续创建沙箱。模板定义了沙箱的运行时环境、资源配置等。
 *
 * @param request CreateTemplateRequest
 * @return CreateTemplateResponse
 */
CreateTemplateResponse Client::createTemplate(const CreateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTemplateWithOptions(request, headers, runtime);
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
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId))},
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
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId) , "/endpoints/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeEndpointId))},
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
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/browsers/" , Darabonba::Encode::Encoder::percentEncode(browserId))},
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
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/code-interpreters/" , Darabonba::Encode::Encoder::percentEncode(codeInterpreterId))},
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
 * @summary Delete a credential
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredentialWithOptions(const string &credentialName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCredential"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/credentials/" , Darabonba::Encode::Encoder::percentEncode(credentialName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCredentialResponse>();
}

/**
 * @summary Delete a credential
 *
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredential(const string &credentialName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCredentialWithOptions(credentialName, headers, runtime);
}

/**
 * @summary Delete a custom domain
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomDomainResponse
 */
DeleteCustomDomainResponse Client::deleteCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomDomain"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/custom-domains/" , Darabonba::Encode::Encoder::percentEncode(domainName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomDomainResponse>();
}

/**
 * @summary Delete a custom domain
 *
 * @return DeleteCustomDomainResponse
 */
DeleteCustomDomainResponse Client::deleteCustomDomain(const string &domainName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCustomDomainWithOptions(domainName, headers, runtime);
}

/**
 * @summary 删除知识库
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKnowledgeBaseResponse
 */
DeleteKnowledgeBaseResponse Client::deleteKnowledgeBaseWithOptions(const string &knowledgeBaseName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKnowledgeBase"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(knowledgeBaseName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKnowledgeBaseResponse>();
}

/**
 * @summary 删除知识库
 *
 * @return DeleteKnowledgeBaseResponse
 */
DeleteKnowledgeBaseResponse Client::deleteKnowledgeBase(const string &knowledgeBaseName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKnowledgeBaseWithOptions(knowledgeBaseName, headers, runtime);
}

/**
 * @summary 删除记忆存储
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoryCollectionResponse
 */
DeleteMemoryCollectionResponse Client::deleteMemoryCollectionWithOptions(const string &memoryCollectionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemoryCollection"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/memory-collections/" , Darabonba::Encode::Encoder::percentEncode(memoryCollectionName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemoryCollectionResponse>();
}

/**
 * @summary 删除记忆存储
 *
 * @return DeleteMemoryCollectionResponse
 */
DeleteMemoryCollectionResponse Client::deleteMemoryCollection(const string &memoryCollectionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryCollectionWithOptions(memoryCollectionName, headers, runtime);
}

/**
 * @summary 删除模型
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelProxyResponse
 */
DeleteModelProxyResponse Client::deleteModelProxyWithOptions(const string &modelProxyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelProxy"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-proxies/" , Darabonba::Encode::Encoder::percentEncode(modelProxyName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelProxyResponse>();
}

/**
 * @summary 删除模型
 *
 * @return DeleteModelProxyResponse
 */
DeleteModelProxyResponse Client::deleteModelProxy(const string &modelProxyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelProxyWithOptions(modelProxyName, headers, runtime);
}

/**
 * @summary 删除模型
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelServiceResponse
 */
DeleteModelServiceResponse Client::deleteModelServiceWithOptions(const string &modelServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelService"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-services/" , Darabonba::Encode::Encoder::percentEncode(modelServiceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelServiceResponse>();
}

/**
 * @summary 删除模型
 *
 * @return DeleteModelServiceResponse
 */
DeleteModelServiceResponse Client::deleteModelService(const string &modelServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelServiceWithOptions(modelServiceName, headers, runtime);
}

/**
 * @summary 删除Sandbox
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSandboxResponse
 */
DeleteSandboxResponse Client::deleteSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSandbox"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/sandboxes/" , Darabonba::Encode::Encoder::percentEncode(sandboxId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSandboxResponse>();
}

/**
 * @summary 删除Sandbox
 *
 * @return DeleteSandboxResponse
 */
DeleteSandboxResponse Client::deleteSandbox(const string &sandboxId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSandboxWithOptions(sandboxId, headers, runtime);
}

/**
 * @summary 删除模板
 *
 * @description 删除指定的模板。删除后，该模板将无法再用于创建新的沙箱。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/templates/" , Darabonba::Encode::Encoder::percentEncode(templateName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @summary 删除模板
 *
 * @description 删除指定的模板。删除后，该模板将无法再用于创建新的沙箱。
 *
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const string &templateName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTemplateWithOptions(templateName, headers, runtime);
}

/**
 * @summary Get access token for a resource
 *
 * @param request GetAccessTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessTokenResponse
 */
GetAccessTokenResponse Client::getAccessTokenWithOptions(const GetAccessTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceName()) {
    query["resourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessToken"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/accessToken")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessTokenResponse>();
}

/**
 * @summary Get access token for a resource
 *
 * @param request GetAccessTokenRequest
 * @return GetAccessTokenResponse
 */
GetAccessTokenResponse Client::getAccessToken(const GetAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAccessTokenWithOptions(request, headers, runtime);
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
    query["agentRuntimeVersion"] = request.getAgentRuntimeVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgentRuntime"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId))},
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
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId) , "/endpoints/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeEndpointId))},
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
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/browsers/" , Darabonba::Encode::Encoder::percentEncode(browserId))},
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
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/code-interpreters/" , Darabonba::Encode::Encoder::percentEncode(codeInterpreterId))},
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
 * @summary Get a credential
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredentialWithOptions(const string &credentialName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCredential"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/credentials/" , Darabonba::Encode::Encoder::percentEncode(credentialName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCredentialResponse>();
}

/**
 * @summary Get a credential
 *
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredential(const string &credentialName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCredentialWithOptions(credentialName, headers, runtime);
}

/**
 * @summary 获取自定义域名详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomDomainResponse
 */
GetCustomDomainResponse Client::getCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomDomain"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/custom-domains/" , Darabonba::Encode::Encoder::percentEncode(domainName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomDomainResponse>();
}

/**
 * @summary 获取自定义域名详情
 *
 * @return GetCustomDomainResponse
 */
GetCustomDomainResponse Client::getCustomDomain(const string &domainName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCustomDomainWithOptions(domainName, headers, runtime);
}

/**
 * @summary 获取知识库
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKnowledgeBaseResponse
 */
GetKnowledgeBaseResponse Client::getKnowledgeBaseWithOptions(const string &knowledgeBaseName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKnowledgeBase"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(knowledgeBaseName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKnowledgeBaseResponse>();
}

/**
 * @summary 获取知识库
 *
 * @return GetKnowledgeBaseResponse
 */
GetKnowledgeBaseResponse Client::getKnowledgeBase(const string &knowledgeBaseName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseWithOptions(knowledgeBaseName, headers, runtime);
}

/**
 * @summary 查询记忆存储详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryCollectionResponse
 */
GetMemoryCollectionResponse Client::getMemoryCollectionWithOptions(const string &memoryCollectionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMemoryCollection"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/memory-collections/" , Darabonba::Encode::Encoder::percentEncode(memoryCollectionName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryCollectionResponse>();
}

/**
 * @summary 查询记忆存储详情
 *
 * @return GetMemoryCollectionResponse
 */
GetMemoryCollectionResponse Client::getMemoryCollection(const string &memoryCollectionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryCollectionWithOptions(memoryCollectionName, headers, runtime);
}

/**
 * @summary 查看model
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelProxyResponse
 */
GetModelProxyResponse Client::getModelProxyWithOptions(const string &modelProxyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelProxy"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-proxies/" , Darabonba::Encode::Encoder::percentEncode(modelProxyName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelProxyResponse>();
}

/**
 * @summary 查看model
 *
 * @return GetModelProxyResponse
 */
GetModelProxyResponse Client::getModelProxy(const string &modelProxyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelProxyWithOptions(modelProxyName, headers, runtime);
}

/**
 * @summary 查看model
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelServiceResponse
 */
GetModelServiceResponse Client::getModelServiceWithOptions(const string &modelServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelService"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-services/" , Darabonba::Encode::Encoder::percentEncode(modelServiceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelServiceResponse>();
}

/**
 * @summary 查看model
 *
 * @return GetModelServiceResponse
 */
GetModelServiceResponse Client::getModelService(const string &modelServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelServiceWithOptions(modelServiceName, headers, runtime);
}

/**
 * @summary 获取沙箱
 *
 * @description 根据沙箱ID获取指定沙箱的详细信息，包括状态、配置等。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSandboxResponse
 */
GetSandboxResponse Client::getSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSandbox"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/sandboxes/" , Darabonba::Encode::Encoder::percentEncode(sandboxId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSandboxResponse>();
}

/**
 * @summary 获取沙箱
 *
 * @description 根据沙箱ID获取指定沙箱的详细信息，包括状态、配置等。
 *
 * @return GetSandboxResponse
 */
GetSandboxResponse Client::getSandbox(const string &sandboxId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSandboxWithOptions(sandboxId, headers, runtime);
}

/**
 * @summary 获取模板
 *
 * @description 根据模板名称获取指定模板的详细信息，包括配置、状态等。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/templates/" , Darabonba::Encode::Encoder::percentEncode(templateName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary 获取模板
 *
 * @description 根据模板名称获取指定模板的详细信息，包括配置、状态等。
 *
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const string &templateName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTemplateWithOptions(templateName, headers, runtime);
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
    query["endpointName"] = request.getEndpointName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchMode()) {
    query["searchMode"] = request.getSearchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentRuntimeEndpoints"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId) , "/endpoints")},
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
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentRuntimeVersions"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId) , "/versions")},
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
    query["agentRuntimeName"] = request.getAgentRuntimeName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSearchMode()) {
    query["searchMode"] = request.getSearchMode();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
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
    query["browserName"] = request.getBrowserName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
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
    query["codeInterpreterName"] = request.getCodeInterpreterName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
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
 * @summary List credentials
 *
 * @param request ListCredentialsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentialsWithOptions(const ListCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCredentialAuthType()) {
    query["credentialAuthType"] = request.getCredentialAuthType();
  }

  if (!!request.hasCredentialName()) {
    query["credentialName"] = request.getCredentialName();
  }

  if (!!request.hasCredentialSourceType()) {
    query["credentialSourceType"] = request.getCredentialSourceType();
  }

  if (!!request.hasEnabled()) {
    query["enabled"] = request.getEnabled();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProvider()) {
    query["provider"] = request.getProvider();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCredentials"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/credentials")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCredentialsResponse>();
}

/**
 * @summary List credentials
 *
 * @param request ListCredentialsRequest
 * @return ListCredentialsResponse
 */
ListCredentialsResponse Client::listCredentials(const ListCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCredentialsWithOptions(request, headers, runtime);
}

/**
 * @summary 自定义域名列表
 *
 * @param request ListCustomDomainsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomDomainsResponse
 */
ListCustomDomainsResponse Client::listCustomDomainsWithOptions(const ListCustomDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["domainName"] = request.getDomainName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceName()) {
    query["resourceName"] = request.getResourceName();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomDomains"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/custom-domains")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomDomainsResponse>();
}

/**
 * @summary 自定义域名列表
 *
 * @param request ListCustomDomainsRequest
 * @return ListCustomDomainsResponse
 */
ListCustomDomainsResponse Client::listCustomDomains(const ListCustomDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCustomDomainsWithOptions(request, headers, runtime);
}

/**
 * @summary 列出知识库
 *
 * @param request ListKnowledgeBasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKnowledgeBasesResponse
 */
ListKnowledgeBasesResponse Client::listKnowledgeBasesWithOptions(const ListKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProvider()) {
    query["provider"] = request.getProvider();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKnowledgeBases"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/knowledgebases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKnowledgeBasesResponse>();
}

/**
 * @summary 列出知识库
 *
 * @param request ListKnowledgeBasesRequest
 * @return ListKnowledgeBasesResponse
 */
ListKnowledgeBasesResponse Client::listKnowledgeBases(const ListKnowledgeBasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listKnowledgeBasesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询记忆存储列表
 *
 * @param request ListMemoryCollectionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemoryCollectionsResponse
 */
ListMemoryCollectionsResponse Client::listMemoryCollectionsWithOptions(const ListMemoryCollectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemoryCollectionName()) {
    query["memoryCollectionName"] = request.getMemoryCollectionName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMemoryCollections"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/memory-collections")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemoryCollectionsResponse>();
}

/**
 * @summary 查询记忆存储列表
 *
 * @param request ListMemoryCollectionsRequest
 * @return ListMemoryCollectionsResponse
 */
ListMemoryCollectionsResponse Client::listMemoryCollections(const ListMemoryCollectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMemoryCollectionsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询支持的模型提供商及其模型
 *
 * @param request ListModelProvidersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelProvidersResponse
 */
ListModelProvidersResponse Client::listModelProvidersWithOptions(const ListModelProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelName()) {
    query["modelName"] = request.getModelName();
  }

  if (!!request.hasModelType()) {
    query["modelType"] = request.getModelType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProvider()) {
    query["provider"] = request.getProvider();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelProviders"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-providers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelProvidersResponse>();
}

/**
 * @summary 查询支持的模型提供商及其模型
 *
 * @param request ListModelProvidersRequest
 * @return ListModelProvidersResponse
 */
ListModelProvidersResponse Client::listModelProviders(const ListModelProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelProvidersWithOptions(request, headers, runtime);
}

/**
 * @summary model列表
 *
 * @param request ListModelProxiesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelProxiesResponse
 */
ListModelProxiesResponse Client::listModelProxiesWithOptions(const ListModelProxiesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProxyMode()) {
    query["proxyMode"] = request.getProxyMode();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelProxies"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-proxies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelProxiesResponse>();
}

/**
 * @summary model列表
 *
 * @param request ListModelProxiesRequest
 * @return ListModelProxiesResponse
 */
ListModelProxiesResponse Client::listModelProxies(const ListModelProxiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelProxiesWithOptions(request, headers, runtime);
}

/**
 * @summary model列表
 *
 * @param request ListModelServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelServicesResponse
 */
ListModelServicesResponse Client::listModelServicesWithOptions(const ListModelServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelType()) {
    query["modelType"] = request.getModelType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProvider()) {
    query["provider"] = request.getProvider();
  }

  if (!!request.hasProviderType()) {
    query["providerType"] = request.getProviderType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelServices"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelServicesResponse>();
}

/**
 * @summary model列表
 *
 * @param request ListModelServicesRequest
 * @return ListModelServicesResponse
 */
ListModelServicesResponse Client::listModelServices(const ListModelServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelServicesWithOptions(request, headers, runtime);
}

/**
 * @summary 列出沙箱
 *
 * @description 获取当前用户的所有沙箱列表，支持按模板名称过滤，支持分页查询。
 *
 * @param request ListSandboxesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSandboxesResponse
 */
ListSandboxesResponse Client::listSandboxesWithOptions(const ListSandboxesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTemplateName()) {
    query["templateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["templateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSandboxes"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/sandboxes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSandboxesResponse>();
}

/**
 * @summary 列出沙箱
 *
 * @description 获取当前用户的所有沙箱列表，支持按模板名称过滤，支持分页查询。
 *
 * @param request ListSandboxesRequest
 * @return ListSandboxesResponse
 */
ListSandboxesResponse Client::listSandboxes(const ListSandboxesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSandboxesWithOptions(request, headers, runtime);
}

/**
 * @summary 列出模板
 *
 * @description 获取当前用户的所有模板列表，支持按模板类型过滤，支持分页查询。
 *
 * @param request ListTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const ListTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTemplateName()) {
    query["templateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["templateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplates"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatesResponse>();
}

/**
 * @summary 列出模板
 *
 * @description 获取当前用户的所有模板列表，支持按模板类型过滤，支持分页查询。
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTemplatesWithOptions(request, headers, runtime);
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "PublishRuntimeVersion"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId) , "/versions")},
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
 * @summary 删除沙箱
 *
 * @description 停止指定的沙箱实例。停止后，沙箱将进入TERMINATED状态。
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSandboxResponse
 */
StopSandboxResponse Client::stopSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopSandbox"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/sandboxes/" , Darabonba::Encode::Encoder::percentEncode(sandboxId) , "/stop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopSandboxResponse>();
}

/**
 * @summary 删除沙箱
 *
 * @description 停止指定的沙箱实例。停止后，沙箱将进入TERMINATED状态。
 *
 * @return StopSandboxResponse
 */
StopSandboxResponse Client::stopSandbox(const string &sandboxId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopSandboxWithOptions(sandboxId, headers, runtime);
}

/**
 * @summary 停止模板的MCP服务器
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTemplateMCPResponse
 */
StopTemplateMCPResponse Client::stopTemplateMCPWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopTemplateMCP"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/templates/" , Darabonba::Encode::Encoder::percentEncode(templateName) , "/mcp/stop")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTemplateMCPResponse>();
}

/**
 * @summary 停止模板的MCP服务器
 *
 * @return StopTemplateMCPResponse
 */
StopTemplateMCPResponse Client::stopTemplateMCP(const string &templateName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTemplateMCPWithOptions(templateName, headers, runtime);
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentRuntime"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId))},
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
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateAgentRuntimeEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/runtimes/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeId) , "/endpoints/" , Darabonba::Encode::Encoder::percentEncode(agentRuntimeEndpointId))},
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

/**
 * @summary Update a credential
 *
 * @param request UpdateCredentialRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCredentialResponse
 */
UpdateCredentialResponse Client::updateCredentialWithOptions(const string &credentialName, const UpdateCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateCredential"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/credentials/" , Darabonba::Encode::Encoder::percentEncode(credentialName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCredentialResponse>();
}

/**
 * @summary Update a credential
 *
 * @param request UpdateCredentialRequest
 * @return UpdateCredentialResponse
 */
UpdateCredentialResponse Client::updateCredential(const string &credentialName, const UpdateCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCredentialWithOptions(credentialName, request, headers, runtime);
}

/**
 * @summary 更新自定义域名
 *
 * @param request UpdateCustomDomainRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomDomainResponse
 */
UpdateCustomDomainResponse Client::updateCustomDomainWithOptions(const string &domainName, const UpdateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateCustomDomain"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/custom-domains/" , Darabonba::Encode::Encoder::percentEncode(domainName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomDomainResponse>();
}

/**
 * @summary 更新自定义域名
 *
 * @param request UpdateCustomDomainRequest
 * @return UpdateCustomDomainResponse
 */
UpdateCustomDomainResponse Client::updateCustomDomain(const string &domainName, const UpdateCustomDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCustomDomainWithOptions(domainName, request, headers, runtime);
}

/**
 * @summary 更新知识库
 *
 * @param request UpdateKnowledgeBaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKnowledgeBaseResponse
 */
UpdateKnowledgeBaseResponse Client::updateKnowledgeBaseWithOptions(const string &knowledgeBaseName, const UpdateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateKnowledgeBase"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/knowledgebases/" , Darabonba::Encode::Encoder::percentEncode(knowledgeBaseName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKnowledgeBaseResponse>();
}

/**
 * @summary 更新知识库
 *
 * @param request UpdateKnowledgeBaseRequest
 * @return UpdateKnowledgeBaseResponse
 */
UpdateKnowledgeBaseResponse Client::updateKnowledgeBase(const string &knowledgeBaseName, const UpdateKnowledgeBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateKnowledgeBaseWithOptions(knowledgeBaseName, request, headers, runtime);
}

/**
 * @summary 修改记忆存储信息
 *
 * @param request UpdateMemoryCollectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemoryCollectionResponse
 */
UpdateMemoryCollectionResponse Client::updateMemoryCollectionWithOptions(const string &memoryCollectionName, const UpdateMemoryCollectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateMemoryCollection"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/memory-collections/" , Darabonba::Encode::Encoder::percentEncode(memoryCollectionName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemoryCollectionResponse>();
}

/**
 * @summary 修改记忆存储信息
 *
 * @param request UpdateMemoryCollectionRequest
 * @return UpdateMemoryCollectionResponse
 */
UpdateMemoryCollectionResponse Client::updateMemoryCollection(const string &memoryCollectionName, const UpdateMemoryCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMemoryCollectionWithOptions(memoryCollectionName, request, headers, runtime);
}

/**
 * @summary 更新模型
 *
 * @param request UpdateModelProxyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelProxyResponse
 */
UpdateModelProxyResponse Client::updateModelProxyWithOptions(const string &modelProxyName, const UpdateModelProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateModelProxy"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-proxies/" , Darabonba::Encode::Encoder::percentEncode(modelProxyName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelProxyResponse>();
}

/**
 * @summary 更新模型
 *
 * @param request UpdateModelProxyRequest
 * @return UpdateModelProxyResponse
 */
UpdateModelProxyResponse Client::updateModelProxy(const string &modelProxyName, const UpdateModelProxyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateModelProxyWithOptions(modelProxyName, request, headers, runtime);
}

/**
 * @summary 更新模型
 *
 * @param request UpdateModelServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelServiceResponse
 */
UpdateModelServiceResponse Client::updateModelServiceWithOptions(const string &modelServiceName, const UpdateModelServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateModelService"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/model-services/" , Darabonba::Encode::Encoder::percentEncode(modelServiceName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelServiceResponse>();
}

/**
 * @summary 更新模型
 *
 * @param request UpdateModelServiceRequest
 * @return UpdateModelServiceResponse
 */
UpdateModelServiceResponse Client::updateModelService(const string &modelServiceName, const UpdateModelServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateModelServiceWithOptions(modelServiceName, request, headers, runtime);
}

/**
 * @summary 更新模板
 *
 * @description 更新指定模板的配置信息，包括资源配置、网络配置、环境变量等。
 *
 * @param request UpdateTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const string &templateName, const UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/templates/" , Darabonba::Encode::Encoder::percentEncode(templateName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @summary 更新模板
 *
 * @description 更新指定模板的配置信息，包括资源配置、网络配置、环境变量等。
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const string &templateName, const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTemplateWithOptions(templateName, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentRun20250910