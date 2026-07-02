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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shenzhen" , "agentrun.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai" , "agentrun.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou" , "agentrun.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing" , "agentrun.cn-beijing.aliyuncs.com"},
    {"ap-southeast-1" , "agentrun.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Activates the `MCP service` for a `sandbox` `template`. This enables a client to access the `sandbox` using the MCP protocol.
 *
 * @description After activation, the platform automatically deploys the `MCP service` `function` for the specified `sandbox` `template`. The `MCP service` ensures a unique mapping between an `mcp-session-id` and a `SandboxID`. When an MCP `client` invokes a `tool`, the `MCP service` automatically creates a `sandbox`.
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
 * @summary Activates the `MCP service` for a `sandbox` `template`. This enables a client to access the `sandbox` using the MCP protocol.
 *
 * @description After activation, the platform automatically deploys the `MCP service` `function` for the specified `sandbox` `template`. The `MCP service` ensures a unique mapping between an `mcp-session-id` and a `SandboxID`. When an MCP `client` invokes a `tool`, the `MCP service` automatically creates a `sandbox`.
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
 * @summary Converts a Flow DSL.
 *
 * @description This operation converts a third-party workflow DSL, such as Dify or n8n, into an AgentRun Flow definition. It performs compatibility checks, identifies plugins, and extracts metadata. The operation runs in dry-run mode, returning the converted Flow configuration, a compatibility analysis report, and the required Toolset installation configuration without creating a Flow resource.
 *
 * @param request ConvertFlowDSLRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertFlowDSLResponse
 */
ConvertFlowDSLResponse Client::convertFlowDSLWithOptions(const ConvertFlowDSLRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ConvertFlowDSL"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/action/convertDsl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertFlowDSLResponse>();
}

/**
 * @summary Converts a Flow DSL.
 *
 * @description This operation converts a third-party workflow DSL, such as Dify or n8n, into an AgentRun Flow definition. It performs compatibility checks, identifies plugins, and extracts metadata. The operation runs in dry-run mode, returning the converted Flow configuration, a compatibility analysis report, and the required Toolset installation configuration without creating a Flow resource.
 *
 * @param request ConvertFlowDSLRequest
 * @return ConvertFlowDSLResponse
 */
ConvertFlowDSLResponse Client::convertFlowDSL(const ConvertFlowDSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return convertFlowDSLWithOptions(request, headers, runtime);
}

/**
 * @summary Creates an agent runtime.
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
 * @summary Creates an agent runtime.
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
 * @summary Create an access endpoint for an agent runtime
 *
 * @description Creates a new endpoint for the specified agent runtime, used for external access and invocation. An endpoint serves as the entry point through which an agent runtime provides services externally.
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
 * @summary Create an access endpoint for an agent runtime
 *
 * @description Creates a new endpoint for the specified agent runtime, used for external access and invocation. An endpoint serves as the entry point through which an agent runtime provides services externally.
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
 * @summary Create Browser Sandbox
 *
 * @description Create a new browser instance for executing web automation tasks. The browser instance provides features such as web browsing, element manipulation, and screenshot recording.
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
 * @summary Create Browser Sandbox
 *
 * @description Create a new browser instance for executing web automation tasks. The browser instance provides features such as web browsing, element manipulation, and screenshot recording.
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
 * @summary Creates a code interpreter.
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
 * @summary Creates a code interpreter.
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
 * @summary Creates a new credential.
 *
 * @description This operation creates a credential for an agent.
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
 * @summary Creates a new credential.
 *
 * @description This operation creates a credential for an agent.
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
 * @summary Creates a custom domain.
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
 * @summary Creates a custom domain.
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
 * @summary Creates a workflow.
 *
 * @description Creates a flow orchestration agent. Flow orchestration is a core component of the AgentRun service that supports visual orchestration and version management.
 *
 * @param request CreateFlowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowResponse
 */
CreateFlowResponse Client::createFlowWithOptions(const CreateFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateFlow"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowResponse>();
}

/**
 * @summary Creates a workflow.
 *
 * @description Creates a flow orchestration agent. Flow orchestration is a core component of the AgentRun service that supports visual orchestration and version management.
 *
 * @param request CreateFlowRequest
 * @return CreateFlowResponse
 */
CreateFlowResponse Client::createFlow(const CreateFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFlowWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a flow endpoint.
 *
 * @description 为指定工作流创建一个新的端点，用于对外提供服务访问。
 *
 * @param request CreateFlowEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowEndpointResponse
 */
CreateFlowEndpointResponse Client::createFlowEndpointWithOptions(const string &flowName, const CreateFlowEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateFlowEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/endpoints")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowEndpointResponse>();
}

/**
 * @summary Creates a flow endpoint.
 *
 * @description 为指定工作流创建一个新的端点，用于对外提供服务访问。
 *
 * @param request CreateFlowEndpointRequest
 * @return CreateFlowEndpointResponse
 */
CreateFlowEndpointResponse Client::createFlowEndpoint(const string &flowName, const CreateFlowEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createFlowEndpointWithOptions(flowName, request, headers, runtime);
}

/**
 * @summary Creates an IM Bot.
 *
 * @description A successful request returns an HTTP 201 status code. Once created, an IM Bot\\"s status is always `running`. The response is in a standard format, and its `data` field contains an `IMBotInfo` object.
 *
 * @param request CreateIMBotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIMBotResponse
 */
CreateIMBotResponse Client::createIMBotWithOptions(const CreateIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateIMBot"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/im-bots")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIMBotResponse>();
}

/**
 * @summary Creates an IM Bot.
 *
 * @description A successful request returns an HTTP 201 status code. Once created, an IM Bot\\"s status is always `running`. The response is in a standard format, and its `data` field contains an `IMBotInfo` object.
 *
 * @param request CreateIMBotRequest
 * @return CreateIMBotResponse
 */
CreateIMBotResponse Client::createIMBot(const CreateIMBotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIMBotWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a knowledge base.
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
 * @summary Creates a knowledge base.
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
 * @summary Creates a memory collection.
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
 * @summary Creates a memory collection.
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
 * @summary Creates a Model Proxy.
 *
 * @description This operation creates a Model Proxy based on the specified configuration.
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
 * @summary Creates a Model Proxy.
 *
 * @description This operation creates a Model Proxy based on the specified configuration.
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
 * @summary Creates a model service.
 *
 * @description This operation creates a model service, such as a code interpreter, based on the specified configuration.
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
 * @summary Creates a model service.
 *
 * @description This operation creates a model service, such as a code interpreter, based on the specified configuration.
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
 * @summary Creates a sandbox.
 *
 * @description Creates a new sandbox instance from a specified template. A sandbox provides an isolated execution environment to run code or launch a browser.
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
 * @summary Creates a sandbox.
 *
 * @description Creates a new sandbox instance from a specified template. A sandbox provides an isolated execution environment to run code or launch a browser.
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
 * @summary Creates a template.
 *
 * @description Creates a new template for subsequently creating sandboxes. A template defines the runtime environment, resource configuration, and other settings for sandboxes.
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
 * @summary Creates a template.
 *
 * @description Creates a new template for subsequently creating sandboxes. A template defines the runtime environment, resource configuration, and other settings for sandboxes.
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
 * @summary Creates a tool.
 *
 * @description This operation creates various types of tools, such as MCP, function call, and skill. An Agent can then call a tool to extend its capabilities.
 *
 * @param request CreateToolRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateToolResponse
 */
CreateToolResponse Client::createToolWithOptions(const CreateToolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateTool"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/tools")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateToolResponse>();
}

/**
 * @summary Creates a tool.
 *
 * @description This operation creates various types of tools, such as MCP, function call, and skill. An Agent can then call a tool to extend its capabilities.
 *
 * @param request CreateToolRequest
 * @return CreateToolResponse
 */
CreateToolResponse Client::createTool(const CreateToolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createToolWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a workspace.
 *
 * @description Creates a workspace.
 *
 * @param request CreateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/workspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary Creates a workspace.
 *
 * @description Creates a workspace.
 *
 * @param request CreateWorkspaceRequest
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspace(const CreateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary Delete Agent Runtime
 *
 * @description Deletes a specified agent runtime instance, including all associated resources and data. This operation is irreversible. Proceed with caution.
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
 * @summary Delete Agent Runtime
 *
 * @description Deletes a specified agent runtime instance, including all associated resources and data. This operation is irreversible. Proceed with caution.
 *
 * @return DeleteAgentRuntimeResponse
 */
DeleteAgentRuntimeResponse Client::deleteAgentRuntime(const string &agentRuntimeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentRuntimeWithOptions(agentRuntimeId, headers, runtime);
}

/**
 * @summary Delete Agent Runtime Endpoint
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
 * @summary Delete Agent Runtime Endpoint
 *
 * @return DeleteAgentRuntimeEndpointResponse
 */
DeleteAgentRuntimeEndpointResponse Client::deleteAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAgentRuntimeEndpointWithOptions(agentRuntimeId, agentRuntimeEndpointId, headers, runtime);
}

/**
 * @summary Delete Browser Sandbox
 *
 * @description Delete the specified browser instance, including all its associated resources and data. The deletion is irreversible. Please proceed with caution.
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
 * @summary Delete Browser Sandbox
 *
 * @description Delete the specified browser instance, including all its associated resources and data. The deletion is irreversible. Please proceed with caution.
 *
 * @return DeleteBrowserResponse
 */
DeleteBrowserResponse Client::deleteBrowser(const string &browserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteBrowserWithOptions(browserId, headers, runtime);
}

/**
 * @summary Delete Code Interpreter
 *
 * @description Delete a specified code interpreter instance, including all its associated resources and data. This operation is irreversible. Please proceed with caution.
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
 * @summary Delete Code Interpreter
 *
 * @description Delete a specified code interpreter instance, including all its associated resources and data. This operation is irreversible. Please proceed with caution.
 *
 * @return DeleteCodeInterpreterResponse
 */
DeleteCodeInterpreterResponse Client::deleteCodeInterpreter(const string &codeInterpreterId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCodeInterpreterWithOptions(codeInterpreterId, headers, runtime);
}

/**
 * @summary Deletes the specified credential.
 *
 * @description This operation deletes the specified credential. This action cannot be undone.
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
 * @summary Deletes the specified credential.
 *
 * @description This operation deletes the specified credential. This action cannot be undone.
 *
 * @return DeleteCredentialResponse
 */
DeleteCredentialResponse Client::deleteCredential(const string &credentialName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCredentialWithOptions(credentialName, headers, runtime);
}

/**
 * @summary Deletes a custom domain.
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
 * @summary Deletes a custom domain.
 *
 * @return DeleteCustomDomainResponse
 */
DeleteCustomDomainResponse Client::deleteCustomDomain(const string &domainName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCustomDomainWithOptions(domainName, headers, runtime);
}

/**
 * @summary Deletes a flow.
 *
 * @description Deletes a specified flow instance, along with all its related resources and data. This operation is irreversible and cannot be undone. Use with caution.
 *
 * @param request DeleteFlowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowResponse
 */
DeleteFlowResponse Client::deleteFlowWithOptions(const string &flowName, const DeleteFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlow"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowResponse>();
}

/**
 * @summary Deletes a flow.
 *
 * @description Deletes a specified flow instance, along with all its related resources and data. This operation is irreversible and cannot be undone. Use with caution.
 *
 * @param request DeleteFlowRequest
 * @return DeleteFlowResponse
 */
DeleteFlowResponse Client::deleteFlow(const string &flowName, const DeleteFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFlowWithOptions(flowName, request, headers, runtime);
}

/**
 * @summary Deletes a flow endpoint.
 *
 * @description Deletes the specified flow endpoint. This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteFlowEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowEndpointResponse
 */
DeleteFlowEndpointResponse Client::deleteFlowEndpointWithOptions(const string &flowName, const string &flowEndpointName, const DeleteFlowEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlowEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/endpoints/" , Darabonba::Encode::Encoder::percentEncode(flowEndpointName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowEndpointResponse>();
}

/**
 * @summary Deletes a flow endpoint.
 *
 * @description Deletes the specified flow endpoint. This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteFlowEndpointRequest
 * @return DeleteFlowEndpointResponse
 */
DeleteFlowEndpointResponse Client::deleteFlowEndpoint(const string &flowName, const string &flowEndpointName, const DeleteFlowEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFlowEndpointWithOptions(flowName, flowEndpointName, request, headers, runtime);
}

/**
 * @summary Deletes a workflow version.
 *
 * @description Deletes a specified version of a workflow. This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteFlowVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowVersionResponse
 */
DeleteFlowVersionResponse Client::deleteFlowVersionWithOptions(const string &flowName, const string &flowVersion, const DeleteFlowVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlowVersion"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(flowVersion))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowVersionResponse>();
}

/**
 * @summary Deletes a workflow version.
 *
 * @description Deletes a specified version of a workflow. This operation is irreversible. Proceed with caution.
 *
 * @param request DeleteFlowVersionRequest
 * @return DeleteFlowVersionResponse
 */
DeleteFlowVersionResponse Client::deleteFlowVersion(const string &flowName, const string &flowVersion, const DeleteFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteFlowVersionWithOptions(flowName, flowVersion, request, headers, runtime);
}

/**
 * @summary Deletes an IM bot.
 *
 * @description This operation deletes an IM bot via a `DELETE` request to the `/2025-09-10/agents/im-bots/{imBotId}` endpoint. A successful request returns an HTTP `204 No Content` status code and an empty response body.
 *
 * @param request DeleteIMBotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIMBotResponse
 */
DeleteIMBotResponse Client::deleteIMBotWithOptions(const string &imBotId, const DeleteIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIMBot"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/im-bots/" , Darabonba::Encode::Encoder::percentEncode(imBotId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIMBotResponse>();
}

/**
 * @summary Deletes an IM bot.
 *
 * @description This operation deletes an IM bot via a `DELETE` request to the `/2025-09-10/agents/im-bots/{imBotId}` endpoint. A successful request returns an HTTP `204 No Content` status code and an empty response body.
 *
 * @param request DeleteIMBotRequest
 * @return DeleteIMBotResponse
 */
DeleteIMBotResponse Client::deleteIMBot(const string &imBotId, const DeleteIMBotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIMBotWithOptions(imBotId, request, headers, runtime);
}

/**
 * @summary Deletes a knowledge base.
 * > This operation is permanent and cannot be undone.
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
 * @summary Deletes a knowledge base.
 * > This operation is permanent and cannot be undone.
 *
 * @return DeleteKnowledgeBaseResponse
 */
DeleteKnowledgeBaseResponse Client::deleteKnowledgeBase(const string &knowledgeBaseName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteKnowledgeBaseWithOptions(knowledgeBaseName, headers, runtime);
}

/**
 * @summary Deletes a memory collection.
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
 * @summary Deletes a memory collection.
 *
 * @return DeleteMemoryCollectionResponse
 */
DeleteMemoryCollectionResponse Client::deleteMemoryCollection(const string &memoryCollectionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryCollectionWithOptions(memoryCollectionName, headers, runtime);
}

/**
 * @summary Deletes a model proxy.
 *
 * @description This operation deletes the specified model proxy configuration without deleting the underlying models or related resources.
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
 * @summary Deletes a model proxy.
 *
 * @description This operation deletes the specified model proxy configuration without deleting the underlying models or related resources.
 *
 * @return DeleteModelProxyResponse
 */
DeleteModelProxyResponse Client::deleteModelProxy(const string &modelProxyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelProxyWithOptions(modelProxyName, headers, runtime);
}

/**
 * @summary Deletes a model service.
 *
 * @description This operation deletes a model service. You must specify the name of the service to delete.
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
 * @summary Deletes a model service.
 *
 * @description This operation deletes a model service. You must specify the name of the service to delete.
 *
 * @return DeleteModelServiceResponse
 */
DeleteModelServiceResponse Client::deleteModelService(const string &modelServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelServiceWithOptions(modelServiceName, headers, runtime);
}

/**
 * @summary Deletes a sandbox instance.
 *
 * @description Deletes a sandbox instance.
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
 * @summary Deletes a sandbox instance.
 *
 * @description Deletes a sandbox instance.
 *
 * @return DeleteSandboxResponse
 */
DeleteSandboxResponse Client::deleteSandbox(const string &sandboxId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSandboxWithOptions(sandboxId, headers, runtime);
}

/**
 * @summary Deletes a template.
 *
 * @description Deletes the specified template. After you delete a template, you can no longer use it to create new sandboxes.
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
 * @summary Deletes a template.
 *
 * @description Deletes the specified template. After you delete a template, you can no longer use it to create new sandboxes.
 *
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const string &templateName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteTemplateWithOptions(templateName, headers, runtime);
}

/**
 * @summary Delete a tool
 *
 * @description Delete the specified tool. The delete operation is irreversible. Proceed with caution. After the tool is deleted, all Agents that reference this tool will no longer be able to use it.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteToolResponse
 */
DeleteToolResponse Client::deleteToolWithOptions(const string &toolName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTool"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/tools/" , Darabonba::Encode::Encoder::percentEncode(toolName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteToolResponse>();
}

/**
 * @summary Delete a tool
 *
 * @description Delete the specified tool. The delete operation is irreversible. Proceed with caution. After the tool is deleted, all Agents that reference this tool will no longer be able to use it.
 *
 * @return DeleteToolResponse
 */
DeleteToolResponse Client::deleteTool(const string &toolName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteToolWithOptions(toolName, headers, runtime);
}

/**
 * @summary Deletes a workspace.
 *
 * @description Deletes the specified workspace.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspace"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResponse>();
}

/**
 * @summary Deletes a workspace.
 *
 * @description Deletes the specified workspace.
 *
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const string &workspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceWithOptions(workspaceId, headers, runtime);
}

/**
 * @summary Obtains an access token.
 *
 * @description Obtains a temporary accessToken that is used to authenticate subsequent API requests.
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
 * @summary Obtains an access token.
 *
 * @description Obtains a temporary accessToken that is used to authenticate subsequent API requests.
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
 * @summary Get Agent Runtime
 *
 * @description Retrieves detailed information about a specified agent runtime by its agent runtime ID, including configuration, status, resource usage, and more.
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
 * @summary Get Agent Runtime
 *
 * @description Retrieves detailed information about a specified agent runtime by its agent runtime ID, including configuration, status, resource usage, and more.
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
 * @summary Get Agent Runtime Access Endpoint
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
 * @summary Get Agent Runtime Access Endpoint
 *
 * @return GetAgentRuntimeEndpointResponse
 */
GetAgentRuntimeEndpointResponse Client::getAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAgentRuntimeEndpointWithOptions(agentRuntimeId, agentRuntimeEndpointId, headers, runtime);
}

/**
 * @summary GetBrowserSandbox
 *
 * @description Retrieves detailed information about a specified browser instance by browser ID, including configuration, status, resource usage, and more.
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
 * @summary GetBrowserSandbox
 *
 * @description Retrieves detailed information about a specified browser instance by browser ID, including configuration, status, resource usage, and more.
 *
 * @return GetBrowserResponse
 */
GetBrowserResponse Client::getBrowser(const string &browserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getBrowserWithOptions(browserId, headers, runtime);
}

/**
 * @summary Retrieves an interpreter.
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
 * @summary Retrieves an interpreter.
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
 * @summary Retrieves information about a specific credential.
 *
 * @description Retrieves detailed information about a specified credential, including its configuration, metadata, and related resources.
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
 * @summary Retrieves information about a specific credential.
 *
 * @description Retrieves detailed information about a specified credential, including its configuration, metadata, and related resources.
 *
 * @return GetCredentialResponse
 */
GetCredentialResponse Client::getCredential(const string &credentialName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCredentialWithOptions(credentialName, headers, runtime);
}

/**
 * @summary Retrieves the configuration of a custom domain.
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
 * @summary Retrieves the configuration of a custom domain.
 *
 * @return GetCustomDomainResponse
 */
GetCustomDomainResponse Client::getCustomDomain(const string &domainName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCustomDomainWithOptions(domainName, headers, runtime);
}

/**
 * @summary Get flow details
 *
 * @description 根据工作流ID获取指定工作流的详细信息，包括配置、定义、版本信息等。
 *
 * @param request GetFlowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlowResponse
 */
GetFlowResponse Client::getFlowWithOptions(const string &flowName, const GetFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFlow"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlowResponse>();
}

/**
 * @summary Get flow details
 *
 * @description 根据工作流ID获取指定工作流的详细信息，包括配置、定义、版本信息等。
 *
 * @param request GetFlowRequest
 * @return GetFlowResponse
 */
GetFlowResponse Client::getFlow(const string &flowName, const GetFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFlowWithOptions(flowName, request, headers, runtime);
}

/**
 * @summary Get the workflow draft.
 *
 * @description 获取指定工作流的草稿版本，返回草稿中的配置信息。
 *
 * @param request GetFlowDraftRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlowDraftResponse
 */
GetFlowDraftResponse Client::getFlowDraftWithOptions(const string &flowName, const GetFlowDraftRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFlowDraft"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/draft")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlowDraftResponse>();
}

/**
 * @summary Get the workflow draft.
 *
 * @description 获取指定工作流的草稿版本，返回草稿中的配置信息。
 *
 * @param request GetFlowDraftRequest
 * @return GetFlowDraftResponse
 */
GetFlowDraftResponse Client::getFlowDraft(const string &flowName, const GetFlowDraftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFlowDraftWithOptions(flowName, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a workflow endpoint.
 *
 * @description 根据工作流ID和端点ID获取指定工作流端点的详细信息。
 *
 * @param request GetFlowEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlowEndpointResponse
 */
GetFlowEndpointResponse Client::getFlowEndpointWithOptions(const string &flowName, const string &flowEndpointName, const GetFlowEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFlowEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/endpoints/" , Darabonba::Encode::Encoder::percentEncode(flowEndpointName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlowEndpointResponse>();
}

/**
 * @summary Retrieves the details of a workflow endpoint.
 *
 * @description 根据工作流ID和端点ID获取指定工作流端点的详细信息。
 *
 * @param request GetFlowEndpointRequest
 * @return GetFlowEndpointResponse
 */
GetFlowEndpointResponse Client::getFlowEndpoint(const string &flowName, const string &flowEndpointName, const GetFlowEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFlowEndpointWithOptions(flowName, flowEndpointName, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a workflow version.
 *
 * @description Retrieves the details of a specific workflow version, including a complete configuration snapshot of its definition, environment variables, tracing configuration, and logging configuration.
 *
 * @param request GetFlowVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlowVersionResponse
 */
GetFlowVersionResponse Client::getFlowVersionWithOptions(const string &flowName, const string &flowVersion, const GetFlowVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFlowVersion"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(flowVersion))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlowVersionResponse>();
}

/**
 * @summary Retrieves the details of a workflow version.
 *
 * @description Retrieves the details of a specific workflow version, including a complete configuration snapshot of its definition, environment variables, tracing configuration, and logging configuration.
 *
 * @param request GetFlowVersionRequest
 * @return GetFlowVersionResponse
 */
GetFlowVersionResponse Client::getFlowVersion(const string &flowName, const string &flowVersion, const GetFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getFlowVersionWithOptions(flowName, flowVersion, request, headers, runtime);
}

/**
 * @summary Gets the details of a specific IM Bot.
 *
 * @description GET /2025-09-10/agents/im-bots/{imBotId}；200 OK，Body 标准包装，data 为 IMBotInfo
 *
 * @param request GetIMBotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIMBotResponse
 */
GetIMBotResponse Client::getIMBotWithOptions(const string &imBotId, const GetIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIMBot"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/im-bots/" , Darabonba::Encode::Encoder::percentEncode(imBotId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIMBotResponse>();
}

/**
 * @summary Gets the details of a specific IM Bot.
 *
 * @description GET /2025-09-10/agents/im-bots/{imBotId}；200 OK，Body 标准包装，data 为 IMBotInfo
 *
 * @param request GetIMBotRequest
 * @return GetIMBotResponse
 */
GetIMBotResponse Client::getIMBot(const string &imBotId, const GetIMBotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIMBotWithOptions(imBotId, request, headers, runtime);
}

/**
 * @summary Gets information about a knowledge base.
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
 * @summary Gets information about a knowledge base.
 *
 * @return GetKnowledgeBaseResponse
 */
GetKnowledgeBaseResponse Client::getKnowledgeBase(const string &knowledgeBaseName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getKnowledgeBaseWithOptions(knowledgeBaseName, headers, runtime);
}

/**
 * @summary Retrieves details for a specific memory collection.
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
 * @summary Retrieves details for a specific memory collection.
 *
 * @return GetMemoryCollectionResponse
 */
GetMemoryCollectionResponse Client::getMemoryCollection(const string &memoryCollectionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryCollectionWithOptions(memoryCollectionName, headers, runtime);
}

/**
 * @summary Retrieves model governance information.
 *
 * @description This operation retrieves the configuration details of a specific model proxy.
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
 * @summary Retrieves model governance information.
 *
 * @description This operation retrieves the configuration details of a specific model proxy.
 *
 * @return GetModelProxyResponse
 */
GetModelProxyResponse Client::getModelProxy(const string &modelProxyName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelProxyWithOptions(modelProxyName, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified model service.
 *
 * @description Retrieves the details of a specified model service.
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
 * @summary Retrieves the details of a specified model service.
 *
 * @description Retrieves the details of a specified model service.
 *
 * @return GetModelServiceResponse
 */
GetModelServiceResponse Client::getModelService(const string &modelServiceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelServiceWithOptions(modelServiceName, headers, runtime);
}

/**
 * @summary Retrieves the details of a specific sandbox.
 *
 * @description Retrieves the details of a specific sandbox by its `sandboxId`, including its status and configuration.
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
 * @summary Retrieves the details of a specific sandbox.
 *
 * @description Retrieves the details of a specific sandbox by its `sandboxId`, including its status and configuration.
 *
 * @return GetSandboxResponse
 */
GetSandboxResponse Client::getSandbox(const string &sandboxId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSandboxWithOptions(sandboxId, headers, runtime);
}

/**
 * @summary Retrieves a template.
 *
 * @description Retrieves the details of a template by its name. The response includes the template\\"s configuration and status.
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
 * @summary Retrieves a template.
 *
 * @description Retrieves the details of a template by its name. The response includes the template\\"s configuration and status.
 *
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const string &templateName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTemplateWithOptions(templateName, headers, runtime);
}

/**
 * @summary Get a tool
 *
 * @description Obtain the complete configuration information of a tool by its name, including basic information, resource configuration, network configuration, running status, and all other detailed information.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetToolResponse
 */
GetToolResponse Client::getToolWithOptions(const string &toolName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTool"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/tools/" , Darabonba::Encode::Encoder::percentEncode(toolName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetToolResponse>();
}

/**
 * @summary Get a tool
 *
 * @description Obtain the complete configuration information of a tool by its name, including basic information, resource configuration, network configuration, running status, and all other detailed information.
 *
 * @return GetToolResponse
 */
GetToolResponse Client::getTool(const string &toolName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getToolWithOptions(toolName, headers, runtime);
}

/**
 * @summary Retrieves the details of a specific workspace.
 *
 * @description Retrieves the details of a specific workspace.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspaceWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspace"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceResponse>();
}

/**
 * @summary Retrieves the details of a specific workspace.
 *
 * @description Retrieves the details of a specific workspace.
 *
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspace(const string &workspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceWithOptions(workspaceId, headers, runtime);
}

/**
 * @summary Gets the discovery endpoints for a workspace.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceDiscoveryEndpointsResponse
 */
GetWorkspaceDiscoveryEndpointsResponse Client::getWorkspaceDiscoveryEndpointsWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspaceDiscoveryEndpoints"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/discovery/endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceDiscoveryEndpointsResponse>();
}

/**
 * @summary Gets the discovery endpoints for a workspace.
 *
 * @return GetWorkspaceDiscoveryEndpointsResponse
 */
GetWorkspaceDiscoveryEndpointsResponse Client::getWorkspaceDiscoveryEndpoints(const string &workspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceDiscoveryEndpointsWithOptions(workspaceId, headers, runtime);
}

/**
 * @summary List Agent Runtime Endpoints
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
 * @summary List Agent Runtime Endpoints
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
 * @summary Retrieves agent runtime versions.
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
 * @summary Retrieves agent runtime versions.
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
 * @summary Retrieves a list of agent runtimes.
 *
 * @description Retrieves a list of agent runtimes for the current user. You can filter the results based on criteria such as name and tags. This operation supports pagination.
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

  if (!!request.hasDiscoveryResourceGroupId()) {
    query["discoveryResourceGroupId"] = request.getDiscoveryResourceGroupId();
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

  if (!!request.hasSystemTags()) {
    query["systemTags"] = request.getSystemTags();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceIds()) {
    query["workspaceIds"] = request.getWorkspaceIds();
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
 * @summary Retrieves a list of agent runtimes.
 *
 * @description Retrieves a list of agent runtimes for the current user. You can filter the results based on criteria such as name and tags. This operation supports pagination.
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
 * @summary List Browser Sandboxes
 *
 * @description Retrieves a list of all browser instances for the current user. Supports filtering by conditions such as name and status, and supports paginated queries.
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
 * @summary List Browser Sandboxes
 *
 * @description Retrieves a list of all browser instances for the current user. Supports filtering by conditions such as name and status, and supports paginated queries.
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
 * @summary List Code Interpreters
 *
 * @description Retrieve a list of all code interpreter instances for the current user, with support for filtering by name and pagination.
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
 * @summary List Code Interpreters
 *
 * @description Retrieve a list of all code interpreter instances for the current user, with support for filtering by name and pagination.
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
 * @summary Lists all credentials.
 *
 * @description Lists the credentials in your account. This operation supports filtering and pagination.
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

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceIds()) {
    query["workspaceIds"] = request.getWorkspaceIds();
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
 * @summary Lists all credentials.
 *
 * @description Lists the credentials in your account. This operation supports filtering and pagination.
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
 * @summary Lists custom domains.
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

  if (!!request.hasDomainType()) {
    query["domainType"] = request.getDomainType();
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
 * @summary Lists custom domains.
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
 * @summary List workflow endpoints.
 *
 * @description Retrieve all endpoints for a specified workflow, with pagination support.
 *
 * @param request ListFlowEndpointsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowEndpointsResponse
 */
ListFlowEndpointsResponse Client::listFlowEndpointsWithOptions(const string &flowId, const ListFlowEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListFlowEndpoints"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowId) , "/endpoints")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowEndpointsResponse>();
}

/**
 * @summary List workflow endpoints.
 *
 * @description Retrieve all endpoints for a specified workflow, with pagination support.
 *
 * @param request ListFlowEndpointsRequest
 * @return ListFlowEndpointsResponse
 */
ListFlowEndpointsResponse Client::listFlowEndpoints(const string &flowId, const ListFlowEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFlowEndpointsWithOptions(flowId, request, headers, runtime);
}

/**
 * @summary Lists the versions of a flow.
 *
 * @description Returns a paginated list of all versions for a specified flow.
 *
 * @param request ListFlowVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowVersionsResponse
 */
ListFlowVersionsResponse Client::listFlowVersionsWithOptions(const string &flowName, const ListFlowVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListFlowVersions"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowVersionsResponse>();
}

/**
 * @summary Lists the versions of a flow.
 *
 * @description Returns a paginated list of all versions for a specified flow.
 *
 * @param request ListFlowVersionsRequest
 * @return ListFlowVersionsResponse
 */
ListFlowVersionsResponse Client::listFlowVersions(const string &flowName, const ListFlowVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFlowVersionsWithOptions(flowName, request, headers, runtime);
}

/**
 * @summary List flows
 *
 * @description 获取当前用户的工作流列表，支持按名称、工作空间等条件过滤，支持分页查询。
 *
 * @param request ListFlowsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlowsResponse
 */
ListFlowsResponse Client::listFlowsWithOptions(const ListFlowsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowName()) {
    query["flowName"] = request.getFlowName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceIds()) {
    query["workspaceIds"] = request.getWorkspaceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlows"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlowsResponse>();
}

/**
 * @summary List flows
 *
 * @description 获取当前用户的工作流列表，支持按名称、工作空间等条件过滤，支持分页查询。
 *
 * @param request ListFlowsRequest
 * @return ListFlowsResponse
 */
ListFlowsResponse Client::listFlows(const ListFlowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFlowsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a paginated list of IM bots.
 *
 * @description Send a GET request to the `/2025-09-10/agents/im-bots` endpoint to retrieve a paginated list of IM bots. Use the `botName`, `agentRuntimeId`, `botBizType`, and `status` query parameters to filter the results. For pagination, the `pageNumber` defaults to 1 and the `pageSize` defaults to 20, with a maximum of 100.
 *
 * @param request ListIMBotsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIMBotsResponse
 */
ListIMBotsResponse Client::listIMBotsWithOptions(const ListIMBotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRuntimeId()) {
    query["agentRuntimeId"] = request.getAgentRuntimeId();
  }

  if (!!request.hasBotBizType()) {
    query["botBizType"] = request.getBotBizType();
  }

  if (!!request.hasBotName()) {
    query["botName"] = request.getBotName();
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
    {"action" , "ListIMBots"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/im-bots")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIMBotsResponse>();
}

/**
 * @summary Retrieves a paginated list of IM bots.
 *
 * @description Send a GET request to the `/2025-09-10/agents/im-bots` endpoint to retrieve a paginated list of IM bots. Use the `botName`, `agentRuntimeId`, `botBizType`, and `status` query parameters to filter the results. For pagination, the `pageNumber` defaults to 1 and the `pageSize` defaults to 20, with a maximum of 100.
 *
 * @param request ListIMBotsRequest
 * @return ListIMBotsResponse
 */
ListIMBotsResponse Client::listIMBots(const ListIMBotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIMBotsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the knowledge bases in your account.
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

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceIds()) {
    query["workspaceIds"] = request.getWorkspaceIds();
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
 * @summary Lists the knowledge bases in your account.
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
 * @summary Returns a paginated list of memory collections.
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

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceIds()) {
    query["workspaceIds"] = request.getWorkspaceIds();
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
 * @summary Returns a paginated list of memory collections.
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
 * @summary Lists all model providers.
 *
 * @description Lists the available model providers. This operation supports filtering and pagination.
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
 * @summary Lists all model providers.
 *
 * @description Lists the available model providers. This operation supports filtering and pagination.
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
 * @summary Lists all Model Proxies.
 *
 * @description Retrieves a paginated list of all Model Proxies for the current user. You can filter the list by status.
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

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceIds()) {
    query["workspaceIds"] = request.getWorkspaceIds();
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
 * @summary Lists all Model Proxies.
 *
 * @description Retrieves a paginated list of all Model Proxies for the current user. You can filter the list by status.
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
 * @summary Lists all models.
 *
 * @description Retrieves a list of all models for the current user. You can filter the models by type and paginate the results.
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

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceIds()) {
    query["workspaceIds"] = request.getWorkspaceIds();
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
 * @summary Lists all models.
 *
 * @description Retrieves a list of all models for the current user. You can filter the models by type and paginate the results.
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
 * @summary Returns a list of sandboxes.
 *
 * @description Retrieves a list of sandboxes for the current user. You can filter the results by template name, template type, or status. This operation supports pagination.
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

  if (!!request.hasSandboxId()) {
    query["sandboxId"] = request.getSandboxId();
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
 * @summary Returns a list of sandboxes.
 *
 * @description Retrieves a list of sandboxes for the current user. You can filter the results by template name, template type, or status. This operation supports pagination.
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
 * @summary Lists templates.
 *
 * @description Lists all templates for the current user. You can filter the results by template type and use pagination.
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

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceIds()) {
    query["workspaceIds"] = request.getWorkspaceIds();
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
 * @summary Lists templates.
 *
 * @description Lists all templates for the current user. You can filter the results by template type and use pagination.
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
 * @summary List tools
 *
 * @description Query the tool list. Support paged query and conditional filtering by tool type, workspace, and other criteria. Return the list of tools that meet the conditions and paging information.
 *
 * @param request ListToolsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListToolsResponse
 */
ListToolsResponse Client::listToolsWithOptions(const ListToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasToolName()) {
    query["toolName"] = request.getToolName();
  }

  if (!!request.hasToolType()) {
    query["toolType"] = request.getToolType();
  }

  if (!!request.hasWorkspaceId()) {
    query["workspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceIds()) {
    query["workspaceIds"] = request.getWorkspaceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTools"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/tools")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListToolsResponse>();
}

/**
 * @summary List tools
 *
 * @description Query the tool list. Support paged query and conditional filtering by tool type, workspace, and other criteria. Return the list of tools that meet the conditions and paging information.
 *
 * @param request ListToolsRequest
 * @return ListToolsResponse
 */
ListToolsResponse Client::listTools(const ListToolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listToolsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists all workspaces in your account.
 *
 * @description Lists all workspaces.
 *
 * @param request ListWorkspacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.getName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/workspaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary Lists all workspaces in your account.
 *
 * @description Lists all workspaces.
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary Pause the sandbox and retain snapshots of its memory and file system. The sandbox enters the PAUSED state so that it can be recovered later.
 *
 * @description This API is used to pause a sandbox. When invoked, the system takes a snapshot of the sandbox, capturing and persisting the memory and disk states. The user can recover the sandbox at a later time.  
 * Note that sandbox snapshots are retained for only 30 days. After 30 days, recovery becomes unavailable.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseSandboxResponse
 */
PauseSandboxResponse Client::pauseSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseSandbox"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/sandboxes/" , Darabonba::Encode::Encoder::percentEncode(sandboxId) , "/pause")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseSandboxResponse>();
}

/**
 * @summary Pause the sandbox and retain snapshots of its memory and file system. The sandbox enters the PAUSED state so that it can be recovered later.
 *
 * @description This API is used to pause a sandbox. When invoked, the system takes a snapshot of the sandbox, capturing and persisting the memory and disk states. The user can recover the sandbox at a later time.  
 * Note that sandbox snapshots are retained for only 30 days. After 30 days, recovery becomes unavailable.
 *
 * @return PauseSandboxResponse
 */
PauseSandboxResponse Client::pauseSandbox(const string &sandboxId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return pauseSandboxWithOptions(sandboxId, headers, runtime);
}

/**
 * @summary Publishes a workflow version.
 *
 * @description Publishes a new version of a specified workflow. This operation supports version management and rollbacks.
 *
 * @param request PublishFlowVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishFlowVersionResponse
 */
PublishFlowVersionResponse Client::publishFlowVersionWithOptions(const string &flowName, const PublishFlowVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "PublishFlowVersion"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishFlowVersionResponse>();
}

/**
 * @summary Publishes a workflow version.
 *
 * @description Publishes a new version of a specified workflow. This operation supports version management and rollbacks.
 *
 * @param request PublishFlowVersionRequest
 * @return PublishFlowVersionResponse
 */
PublishFlowVersionResponse Client::publishFlowVersion(const string &flowName, const PublishFlowVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishFlowVersionWithOptions(flowName, request, headers, runtime);
}

/**
 * @summary Publishes a new version of an agent runtime.
 *
 * @description Publishes a new version for a specified agent runtime for version management and deployment. The new version can include code updates, configuration changes, and other content.
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
 * @summary Publishes a new version of an agent runtime.
 *
 * @description Publishes a new version for a specified agent runtime for version management and deployment. The new version can include code updates, configuration changes, and other content.
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
 * @summary Resume a paused sandbox instance to restore it from the PAUSED state to the READY (running) state.
 *
 * @description This API resumes a sandbox instance from the paused state to the ready state, allowing the user to invoke it and restore it to the state it was in before being paused.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeSandboxResponse
 */
ResumeSandboxResponse Client::resumeSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeSandbox"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/sandboxes/" , Darabonba::Encode::Encoder::percentEncode(sandboxId) , "/resume")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeSandboxResponse>();
}

/**
 * @summary Resume a paused sandbox instance to restore it from the PAUSED state to the READY (running) state.
 *
 * @description This API resumes a sandbox instance from the paused state to the ready state, allowing the user to invoke it and restore it to the state it was in before being paused.
 *
 * @return ResumeSandboxResponse
 */
ResumeSandboxResponse Client::resumeSandbox(const string &sandboxId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return resumeSandboxWithOptions(sandboxId, headers, runtime);
}

/**
 * @summary Stops a sandbox.
 *
 * @description Stops the specified sandbox instance. After the operation, the sandbox enters the TERMINATED state.
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
 * @summary Stops a sandbox.
 *
 * @description Stops the specified sandbox instance. After the operation, the sandbox enters the TERMINATED state.
 *
 * @return StopSandboxResponse
 */
StopSandboxResponse Client::stopSandbox(const string &sandboxId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopSandboxWithOptions(sandboxId, headers, runtime);
}

/**
 * @summary Stops the TemplateMCP service.
 *
 * @description Stopping the MCP service deletes the associated MCP resources and makes the endpoint inaccessible.
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
 * @summary Stops the TemplateMCP service.
 *
 * @description Stopping the MCP service deletes the associated MCP resources and makes the endpoint inaccessible.
 *
 * @return StopTemplateMCPResponse
 */
StopTemplateMCPResponse Client::stopTemplateMCP(const string &templateName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopTemplateMCPWithOptions(templateName, headers, runtime);
}

/**
 * @summary UpdateAgentRuntime
 *
 * @description Updates the configuration of a specified agent runtime, including resource allocation, network configuration, and environment variables. The update operation triggers a runtime restart.
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
 * @summary UpdateAgentRuntime
 *
 * @description Updates the configuration of a specified agent runtime, including resource allocation, network configuration, and environment variables. The update operation triggers a runtime restart.
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
 * @summary Update Agent Runtime Endpoint
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
 * @summary Update Agent Runtime Endpoint
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
 * @summary Updates a credential.
 *
 * @description Updates the configuration of a specified credential.
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
 * @summary Updates a credential.
 *
 * @description Updates the configuration of a specified credential.
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
 * @summary Updates a custom domain.
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
 * @summary Updates a custom domain.
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
 * @summary Updates a workflow.
 *
 * @description Updates the configuration of a specified workflow, including the definition, execution mode, and environment variables.
 *
 * @param request UpdateFlowRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowResponse
 */
UpdateFlowResponse Client::updateFlowWithOptions(const string &flowName, const UpdateFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateFlow"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowResponse>();
}

/**
 * @summary Updates a workflow.
 *
 * @description Updates the configuration of a specified workflow, including the definition, execution mode, and environment variables.
 *
 * @param request UpdateFlowRequest
 * @return UpdateFlowResponse
 */
UpdateFlowResponse Client::updateFlow(const string &flowName, const UpdateFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFlowWithOptions(flowName, request, headers, runtime);
}

/**
 * @summary Update a flow draft.
 *
 * @description 更新指定工作流的草稿版本，草稿更新不影响已发布的工作流版本。
 *
 * @param request UpdateFlowDraftRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowDraftResponse
 */
UpdateFlowDraftResponse Client::updateFlowDraftWithOptions(const string &flowName, const UpdateFlowDraftRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateFlowDraft"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/draft")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowDraftResponse>();
}

/**
 * @summary Update a flow draft.
 *
 * @description 更新指定工作流的草稿版本，草稿更新不影响已发布的工作流版本。
 *
 * @param request UpdateFlowDraftRequest
 * @return UpdateFlowDraftResponse
 */
UpdateFlowDraftResponse Client::updateFlowDraft(const string &flowName, const UpdateFlowDraftRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFlowDraftWithOptions(flowName, request, headers, runtime);
}

/**
 * @summary Update Flow Endpoint
 *
 * @description 更新指定工作流端点的配置信息，包括目标版本、路由配置等。
 *
 * @param request UpdateFlowEndpointRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowEndpointResponse
 */
UpdateFlowEndpointResponse Client::updateFlowEndpointWithOptions(const string &flowName, const string &flowEndpointName, const UpdateFlowEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateFlowEndpoint"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/flows/" , Darabonba::Encode::Encoder::percentEncode(flowName) , "/endpoints/" , Darabonba::Encode::Encoder::percentEncode(flowEndpointName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowEndpointResponse>();
}

/**
 * @summary Update Flow Endpoint
 *
 * @description 更新指定工作流端点的配置信息，包括目标版本、路由配置等。
 *
 * @param request UpdateFlowEndpointRequest
 * @return UpdateFlowEndpointResponse
 */
UpdateFlowEndpointResponse Client::updateFlowEndpoint(const string &flowName, const string &flowEndpointName, const UpdateFlowEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateFlowEndpointWithOptions(flowName, flowEndpointName, request, headers, runtime);
}

/**
 * @summary Updates an IM bot.
 *
 * @description PUT /2025-09-10/agents/im-bots/{imBotId}；成功建议 HTTP 202，Body 标准包装，data 为更新后 IMBotInfo
 *
 * @param request UpdateIMBotRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIMBotResponse
 */
UpdateIMBotResponse Client::updateIMBotWithOptions(const string &imBotId, const UpdateIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateIMBot"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/im-bots/" , Darabonba::Encode::Encoder::percentEncode(imBotId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIMBotResponse>();
}

/**
 * @summary Updates an IM bot.
 *
 * @description PUT /2025-09-10/agents/im-bots/{imBotId}；成功建议 HTTP 202，Body 标准包装，data 为更新后 IMBotInfo
 *
 * @param request UpdateIMBotRequest
 * @return UpdateIMBotResponse
 */
UpdateIMBotResponse Client::updateIMBot(const string &imBotId, const UpdateIMBotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateIMBotWithOptions(imBotId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a knowledge base.
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
 * @summary Updates the configuration of a knowledge base.
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
 * @summary Modifies a memory collection.
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
 * @summary Modifies a memory collection.
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
 * @summary Updates the configuration of a model proxy.
 *
 * @description Use this operation to update the configuration of a specific model proxy.
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
 * @summary Updates the configuration of a model proxy.
 *
 * @description Use this operation to update the configuration of a specific model proxy.
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
 * @summary Updates a model service.
 *
 * @description This operation modifies the configuration of an existing model service.
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
 * @summary Updates a model service.
 *
 * @description This operation modifies the configuration of an existing model service.
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
 * @summary Updates a template.
 *
 * @description Updates a template\\"s configuration, including its resource configuration, network configuration, and environment variables.
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
 * @summary Updates a template.
 *
 * @description Updates a template\\"s configuration, including its resource configuration, network configuration, and environment variables.
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const string &templateName, const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateTemplateWithOptions(templateName, request, headers, runtime);
}

/**
 * @summary Updates a tool.
 *
 * @description Updates the configuration of an existing tool. You can modify its description, resource configuration, network configuration, and more. This operation supports partial updates. You only need to specify the fields that you want to modify.
 *
 * @param request UpdateToolRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateToolResponse
 */
UpdateToolResponse Client::updateToolWithOptions(const string &toolName, const UpdateToolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateTool"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/agents/tools/" , Darabonba::Encode::Encoder::percentEncode(toolName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateToolResponse>();
}

/**
 * @summary Updates a tool.
 *
 * @description Updates the configuration of an existing tool. You can modify its description, resource configuration, network configuration, and more. This operation supports partial updates. You only need to specify the fields that you want to modify.
 *
 * @param request UpdateToolRequest
 * @return UpdateToolResponse
 */
UpdateToolResponse Client::updateTool(const string &toolName, const UpdateToolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateToolWithOptions(toolName, request, headers, runtime);
}

/**
 * @summary Updates a workspace.
 *
 * @description Updates the properties of a workspace.
 *
 * @param request UpdateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspaceWithOptions(const string &workspaceId, const UpdateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkspace"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceResponse>();
}

/**
 * @summary Updates a workspace.
 *
 * @description Updates the properties of a workspace.
 *
 * @param request UpdateWorkspaceRequest
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspace(const string &workspaceId, const UpdateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkspaceWithOptions(workspaceId, request, headers, runtime);
}

/**
 * @summary Updates the discovery endpoint configuration for a specified workspace.
 *
 * @param request UpdateWorkspaceDiscoveryEndpointsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceDiscoveryEndpointsResponse
 */
UpdateWorkspaceDiscoveryEndpointsResponse Client::updateWorkspaceDiscoveryEndpointsWithOptions(const string &workspaceId, const UpdateWorkspaceDiscoveryEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkspaceDiscoveryEndpoints"},
    {"version" , "2025-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/2025-09-10/workspaces/" , Darabonba::Encode::Encoder::percentEncode(workspaceId) , "/discovery/endpoints")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceDiscoveryEndpointsResponse>();
}

/**
 * @summary Updates the discovery endpoint configuration for a specified workspace.
 *
 * @param request UpdateWorkspaceDiscoveryEndpointsRequest
 * @return UpdateWorkspaceDiscoveryEndpointsResponse
 */
UpdateWorkspaceDiscoveryEndpointsResponse Client::updateWorkspaceDiscoveryEndpoints(const string &workspaceId, const UpdateWorkspaceDiscoveryEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkspaceDiscoveryEndpointsWithOptions(workspaceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AgentRun20250910