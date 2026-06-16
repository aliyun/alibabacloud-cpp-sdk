// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTRUN20250910_HPP_
#define ALIBABACLOUD_AGENTRUN20250910_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentRun20250910Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentRun20250910.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::ActivateTemplateMCPResponse activateTemplateMCPWithOptions(const string &templateName, const Models::ActivateTemplateMCPRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the `MCP service` for a `sandbox` `template`. This enables a client to access the `sandbox` using the MCP protocol.
       *
       * @description After activation, the platform automatically deploys the `MCP service` `function` for the specified `sandbox` `template`. The `MCP service` ensures a unique mapping between an `mcp-session-id` and a `SandboxID`. When an MCP `client` invokes a `tool`, the `MCP service` automatically creates a `sandbox`.
       *
       * @param request ActivateTemplateMCPRequest
       * @return ActivateTemplateMCPResponse
       */
      Models::ActivateTemplateMCPResponse activateTemplateMCP(const string &templateName, const Models::ActivateTemplateMCPRequest &request);

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
      Models::ConvertFlowDSLResponse convertFlowDSLWithOptions(const Models::ConvertFlowDSLRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a Flow DSL.
       *
       * @description This operation converts a third-party workflow DSL, such as Dify or n8n, into an AgentRun Flow definition. It performs compatibility checks, identifies plugins, and extracts metadata. The operation runs in dry-run mode, returning the converted Flow configuration, a compatibility analysis report, and the required Toolset installation configuration without creating a Flow resource.
       *
       * @param request ConvertFlowDSLRequest
       * @return ConvertFlowDSLResponse
       */
      Models::ConvertFlowDSLResponse convertFlowDSL(const Models::ConvertFlowDSLRequest &request);

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
      Models::CreateAgentRuntimeResponse createAgentRuntimeWithOptions(const Models::CreateAgentRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an agent runtime.
       *
       * @description 创建一个新的智能体运行时实例，用于执行AI代理任务。智能体运行时是AgentRun服务的核心组件，提供代码执行、浏览器操作、内存管理等能力。
       *
       * @param request CreateAgentRuntimeRequest
       * @return CreateAgentRuntimeResponse
       */
      Models::CreateAgentRuntimeResponse createAgentRuntime(const Models::CreateAgentRuntimeRequest &request);

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
      Models::CreateAgentRuntimeEndpointResponse createAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const Models::CreateAgentRuntimeEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an access endpoint for an agent runtime
       *
       * @description Creates a new endpoint for the specified agent runtime, used for external access and invocation. An endpoint serves as the entry point through which an agent runtime provides services externally.
       *
       * @param request CreateAgentRuntimeEndpointRequest
       * @return CreateAgentRuntimeEndpointResponse
       */
      Models::CreateAgentRuntimeEndpointResponse createAgentRuntimeEndpoint(const string &agentRuntimeId, const Models::CreateAgentRuntimeEndpointRequest &request);

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
      Models::CreateBrowserResponse createBrowserWithOptions(const Models::CreateBrowserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Browser Sandbox
       *
       * @description Create a new browser instance for executing web automation tasks. The browser instance provides features such as web browsing, element manipulation, and screenshot recording.
       *
       * @param request CreateBrowserRequest
       * @return CreateBrowserResponse
       */
      Models::CreateBrowserResponse createBrowser(const Models::CreateBrowserRequest &request);

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
      Models::CreateCodeInterpreterResponse createCodeInterpreterWithOptions(const Models::CreateCodeInterpreterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a code interpreter.
       *
       * @description 创建一个新的代码解释器实例，用于执行代码解释和运行任务。代码解释器提供Python代码执行、数据处理、机器学习等功能。
       *
       * @param request CreateCodeInterpreterRequest
       * @return CreateCodeInterpreterResponse
       */
      Models::CreateCodeInterpreterResponse createCodeInterpreter(const Models::CreateCodeInterpreterRequest &request);

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
      Models::CreateCredentialResponse createCredentialWithOptions(const Models::CreateCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new credential.
       *
       * @description This operation creates a credential for an agent.
       *
       * @param request CreateCredentialRequest
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredential(const Models::CreateCredentialRequest &request);

      /**
       * @summary Creates a custom domain.
       *
       * @param request CreateCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomDomainResponse
       */
      Models::CreateCustomDomainResponse createCustomDomainWithOptions(const Models::CreateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom domain.
       *
       * @param request CreateCustomDomainRequest
       * @return CreateCustomDomainResponse
       */
      Models::CreateCustomDomainResponse createCustomDomain(const Models::CreateCustomDomainRequest &request);

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
      Models::CreateFlowResponse createFlowWithOptions(const Models::CreateFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workflow.
       *
       * @description Creates a flow orchestration agent. Flow orchestration is a core component of the AgentRun service that supports visual orchestration and version management.
       *
       * @param request CreateFlowRequest
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlow(const Models::CreateFlowRequest &request);

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
      Models::CreateFlowEndpointResponse createFlowEndpointWithOptions(const string &flowName, const Models::CreateFlowEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow endpoint.
       *
       * @description 为指定工作流创建一个新的端点，用于对外提供服务访问。
       *
       * @param request CreateFlowEndpointRequest
       * @return CreateFlowEndpointResponse
       */
      Models::CreateFlowEndpointResponse createFlowEndpoint(const string &flowName, const Models::CreateFlowEndpointRequest &request);

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
      Models::CreateIMBotResponse createIMBotWithOptions(const Models::CreateIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IM Bot.
       *
       * @description A successful request returns an HTTP 201 status code. Once created, an IM Bot\\"s status is always `running`. The response is in a standard format, and its `data` field contains an `IMBotInfo` object.
       *
       * @param request CreateIMBotRequest
       * @return CreateIMBotResponse
       */
      Models::CreateIMBotResponse createIMBot(const Models::CreateIMBotRequest &request);

      /**
       * @summary Creates a knowledge base.
       *
       * @param request CreateKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseResponse
       */
      Models::CreateKnowledgeBaseResponse createKnowledgeBaseWithOptions(const Models::CreateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a knowledge base.
       *
       * @param request CreateKnowledgeBaseRequest
       * @return CreateKnowledgeBaseResponse
       */
      Models::CreateKnowledgeBaseResponse createKnowledgeBase(const Models::CreateKnowledgeBaseRequest &request);

      /**
       * @summary Creates a memory collection.
       *
       * @param request CreateMemoryCollectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryCollectionResponse
       */
      Models::CreateMemoryCollectionResponse createMemoryCollectionWithOptions(const Models::CreateMemoryCollectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a memory collection.
       *
       * @param request CreateMemoryCollectionRequest
       * @return CreateMemoryCollectionResponse
       */
      Models::CreateMemoryCollectionResponse createMemoryCollection(const Models::CreateMemoryCollectionRequest &request);

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
      Models::CreateModelProxyResponse createModelProxyWithOptions(const Models::CreateModelProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Model Proxy.
       *
       * @description This operation creates a Model Proxy based on the specified configuration.
       *
       * @param request CreateModelProxyRequest
       * @return CreateModelProxyResponse
       */
      Models::CreateModelProxyResponse createModelProxy(const Models::CreateModelProxyRequest &request);

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
      Models::CreateModelServiceResponse createModelServiceWithOptions(const Models::CreateModelServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model service.
       *
       * @description This operation creates a model service, such as a code interpreter, based on the specified configuration.
       *
       * @param request CreateModelServiceRequest
       * @return CreateModelServiceResponse
       */
      Models::CreateModelServiceResponse createModelService(const Models::CreateModelServiceRequest &request);

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
      Models::CreateSandboxResponse createSandboxWithOptions(const Models::CreateSandboxRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a sandbox.
       *
       * @description Creates a new sandbox instance from a specified template. A sandbox provides an isolated execution environment to run code or launch a browser.
       *
       * @param request CreateSandboxRequest
       * @return CreateSandboxResponse
       */
      Models::CreateSandboxResponse createSandbox(const Models::CreateSandboxRequest &request);

      /**
       * @summary Creates a template.
       *
       * @description Creates a template for launching sandboxes. A template defines the runtime environment, resource configuration, and other settings for a sandbox.
       *
       * @param request CreateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a template.
       *
       * @description Creates a template for launching sandboxes. A template defines the runtime environment, resource configuration, and other settings for a sandbox.
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

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
      Models::CreateToolResponse createToolWithOptions(const Models::CreateToolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tool.
       *
       * @description This operation creates various types of tools, such as MCP, function call, and skill. An Agent can then call a tool to extend its capabilities.
       *
       * @param request CreateToolRequest
       * @return CreateToolResponse
       */
      Models::CreateToolResponse createTool(const Models::CreateToolRequest &request);

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
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @description Creates a workspace.
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary Delete Agent Runtime
       *
       * @description Deletes a specified agent runtime instance, including all associated resources and data. This operation is irreversible. Proceed with caution.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentRuntimeResponse
       */
      Models::DeleteAgentRuntimeResponse deleteAgentRuntimeWithOptions(const string &agentRuntimeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Agent Runtime
       *
       * @description Deletes a specified agent runtime instance, including all associated resources and data. This operation is irreversible. Proceed with caution.
       *
       * @return DeleteAgentRuntimeResponse
       */
      Models::DeleteAgentRuntimeResponse deleteAgentRuntime(const string &agentRuntimeId);

      /**
       * @summary Delete Agent Runtime Endpoint
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentRuntimeEndpointResponse
       */
      Models::DeleteAgentRuntimeEndpointResponse deleteAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Agent Runtime Endpoint
       *
       * @return DeleteAgentRuntimeEndpointResponse
       */
      Models::DeleteAgentRuntimeEndpointResponse deleteAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId);

      /**
       * @summary Delete Browser Sandbox
       *
       * @description Delete the specified browser instance, including all its associated resources and data. The deletion is irreversible. Please proceed with caution.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBrowserResponse
       */
      Models::DeleteBrowserResponse deleteBrowserWithOptions(const string &browserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Browser Sandbox
       *
       * @description Delete the specified browser instance, including all its associated resources and data. The deletion is irreversible. Please proceed with caution.
       *
       * @return DeleteBrowserResponse
       */
      Models::DeleteBrowserResponse deleteBrowser(const string &browserId);

      /**
       * @summary Delete Code Interpreter
       *
       * @description Delete a specified code interpreter instance, including all its associated resources and data. This operation is irreversible. Please proceed with caution.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCodeInterpreterResponse
       */
      Models::DeleteCodeInterpreterResponse deleteCodeInterpreterWithOptions(const string &codeInterpreterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Code Interpreter
       *
       * @description Delete a specified code interpreter instance, including all its associated resources and data. This operation is irreversible. Please proceed with caution.
       *
       * @return DeleteCodeInterpreterResponse
       */
      Models::DeleteCodeInterpreterResponse deleteCodeInterpreter(const string &codeInterpreterId);

      /**
       * @summary Deletes the specified credential.
       *
       * @description This operation deletes the specified credential. This action cannot be undone.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredentialWithOptions(const string &credentialName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified credential.
       *
       * @description This operation deletes the specified credential. This action cannot be undone.
       *
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredential(const string &credentialName);

      /**
       * @summary Deletes a custom domain.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomDomainResponse
       */
      Models::DeleteCustomDomainResponse deleteCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom domain.
       *
       * @return DeleteCustomDomainResponse
       */
      Models::DeleteCustomDomainResponse deleteCustomDomain(const string &domainName);

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
      Models::DeleteFlowResponse deleteFlowWithOptions(const string &flowName, const Models::DeleteFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow.
       *
       * @description Deletes a specified flow instance, along with all its related resources and data. This operation is irreversible and cannot be undone. Use with caution.
       *
       * @param request DeleteFlowRequest
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlow(const string &flowName, const Models::DeleteFlowRequest &request);

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
      Models::DeleteFlowEndpointResponse deleteFlowEndpointWithOptions(const string &flowName, const string &flowEndpointName, const Models::DeleteFlowEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a flow endpoint.
       *
       * @description Deletes the specified flow endpoint. This operation is irreversible. Proceed with caution.
       *
       * @param request DeleteFlowEndpointRequest
       * @return DeleteFlowEndpointResponse
       */
      Models::DeleteFlowEndpointResponse deleteFlowEndpoint(const string &flowName, const string &flowEndpointName, const Models::DeleteFlowEndpointRequest &request);

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
      Models::DeleteFlowVersionResponse deleteFlowVersionWithOptions(const string &flowName, const string &flowVersion, const Models::DeleteFlowVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workflow version.
       *
       * @description Deletes a specified version of a workflow. This operation is irreversible. Proceed with caution.
       *
       * @param request DeleteFlowVersionRequest
       * @return DeleteFlowVersionResponse
       */
      Models::DeleteFlowVersionResponse deleteFlowVersion(const string &flowName, const string &flowVersion, const Models::DeleteFlowVersionRequest &request);

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
      Models::DeleteIMBotResponse deleteIMBotWithOptions(const string &imBotId, const Models::DeleteIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IM bot.
       *
       * @description This operation deletes an IM bot via a `DELETE` request to the `/2025-09-10/agents/im-bots/{imBotId}` endpoint. A successful request returns an HTTP `204 No Content` status code and an empty response body.
       *
       * @param request DeleteIMBotRequest
       * @return DeleteIMBotResponse
       */
      Models::DeleteIMBotResponse deleteIMBot(const string &imBotId, const Models::DeleteIMBotRequest &request);

      /**
       * @summary Deletes a knowledge base.
       * > This operation is permanent and cannot be undone.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKnowledgeBaseResponse
       */
      Models::DeleteKnowledgeBaseResponse deleteKnowledgeBaseWithOptions(const string &knowledgeBaseName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a knowledge base.
       * > This operation is permanent and cannot be undone.
       *
       * @return DeleteKnowledgeBaseResponse
       */
      Models::DeleteKnowledgeBaseResponse deleteKnowledgeBase(const string &knowledgeBaseName);

      /**
       * @summary Deletes a memory collection.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryCollectionResponse
       */
      Models::DeleteMemoryCollectionResponse deleteMemoryCollectionWithOptions(const string &memoryCollectionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a memory collection.
       *
       * @return DeleteMemoryCollectionResponse
       */
      Models::DeleteMemoryCollectionResponse deleteMemoryCollection(const string &memoryCollectionName);

      /**
       * @summary Deletes a model proxy.
       *
       * @description This operation deletes the specified model proxy configuration without deleting the underlying models or related resources.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelProxyResponse
       */
      Models::DeleteModelProxyResponse deleteModelProxyWithOptions(const string &modelProxyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model proxy.
       *
       * @description This operation deletes the specified model proxy configuration without deleting the underlying models or related resources.
       *
       * @return DeleteModelProxyResponse
       */
      Models::DeleteModelProxyResponse deleteModelProxy(const string &modelProxyName);

      /**
       * @summary Deletes a model service.
       *
       * @description This operation deletes a model service. You must specify the name of the service to delete.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelServiceWithOptions(const string &modelServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model service.
       *
       * @description This operation deletes a model service. You must specify the name of the service to delete.
       *
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelService(const string &modelServiceName);

      /**
       * @summary Deletes a sandbox instance.
       *
       * @description Deletes a sandbox instance.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSandboxResponse
       */
      Models::DeleteSandboxResponse deleteSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a sandbox instance.
       *
       * @description Deletes a sandbox instance.
       *
       * @return DeleteSandboxResponse
       */
      Models::DeleteSandboxResponse deleteSandbox(const string &sandboxId);

      /**
       * @summary Deletes a template.
       *
       * @description Deletes the specified template. After you delete a template, you can no longer use it to create new sandboxes.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a template.
       *
       * @description Deletes the specified template. After you delete a template, you can no longer use it to create new sandboxes.
       *
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const string &templateName);

      /**
       * @summary Delete a tool
       *
       * @description Delete the specified tool. The delete operation is irreversible. Proceed with caution. After the tool is deleted, all Agents that reference this tool will no longer be able to use it.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteToolResponse
       */
      Models::DeleteToolResponse deleteToolWithOptions(const string &toolName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a tool
       *
       * @description Delete the specified tool. The delete operation is irreversible. Proceed with caution. After the tool is deleted, all Agents that reference this tool will no longer be able to use it.
       *
       * @return DeleteToolResponse
       */
      Models::DeleteToolResponse deleteTool(const string &toolName);

      /**
       * @summary Deletes a workspace.
       *
       * @description Deletes the specified workspace.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workspace.
       *
       * @description Deletes the specified workspace.
       *
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceId);

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
      Models::GetAccessTokenResponse getAccessTokenWithOptions(const Models::GetAccessTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an access token.
       *
       * @description Obtains a temporary accessToken that is used to authenticate subsequent API requests.
       *
       * @param request GetAccessTokenRequest
       * @return GetAccessTokenResponse
       */
      Models::GetAccessTokenResponse getAccessToken(const Models::GetAccessTokenRequest &request);

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
      Models::GetAgentRuntimeResponse getAgentRuntimeWithOptions(const string &agentRuntimeId, const Models::GetAgentRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Agent Runtime
       *
       * @description Retrieves detailed information about a specified agent runtime by its agent runtime ID, including configuration, status, resource usage, and more.
       *
       * @param request GetAgentRuntimeRequest
       * @return GetAgentRuntimeResponse
       */
      Models::GetAgentRuntimeResponse getAgentRuntime(const string &agentRuntimeId, const Models::GetAgentRuntimeRequest &request);

      /**
       * @summary Get Agent Runtime Access Endpoint
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentRuntimeEndpointResponse
       */
      Models::GetAgentRuntimeEndpointResponse getAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Agent Runtime Access Endpoint
       *
       * @return GetAgentRuntimeEndpointResponse
       */
      Models::GetAgentRuntimeEndpointResponse getAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId);

      /**
       * @summary GetBrowserSandbox
       *
       * @description Retrieves detailed information about a specified browser instance by browser ID, including configuration, status, resource usage, and more.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBrowserResponse
       */
      Models::GetBrowserResponse getBrowserWithOptions(const string &browserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetBrowserSandbox
       *
       * @description Retrieves detailed information about a specified browser instance by browser ID, including configuration, status, resource usage, and more.
       *
       * @return GetBrowserResponse
       */
      Models::GetBrowserResponse getBrowser(const string &browserId);

      /**
       * @summary Retrieves an interpreter.
       *
       * @description 根据代码解释器ID获取指定代码解释器实例的详细信息，包括配置、状态、资源使用情况等。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCodeInterpreterResponse
       */
      Models::GetCodeInterpreterResponse getCodeInterpreterWithOptions(const string &codeInterpreterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an interpreter.
       *
       * @description 根据代码解释器ID获取指定代码解释器实例的详细信息，包括配置、状态、资源使用情况等。
       *
       * @return GetCodeInterpreterResponse
       */
      Models::GetCodeInterpreterResponse getCodeInterpreter(const string &codeInterpreterId);

      /**
       * @summary Retrieves information about a specific credential.
       *
       * @description Retrieves detailed information about a specified credential, including its configuration, metadata, and related resources.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredentialWithOptions(const string &credentialName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specific credential.
       *
       * @description Retrieves detailed information about a specified credential, including its configuration, metadata, and related resources.
       *
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredential(const string &credentialName);

      /**
       * @summary Retrieves the configuration of a custom domain.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomDomainResponse
       */
      Models::GetCustomDomainResponse getCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configuration of a custom domain.
       *
       * @return GetCustomDomainResponse
       */
      Models::GetCustomDomainResponse getCustomDomain(const string &domainName);

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
      Models::GetFlowResponse getFlowWithOptions(const string &flowName, const Models::GetFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get flow details
       *
       * @description 根据工作流ID获取指定工作流的详细信息，包括配置、定义、版本信息等。
       *
       * @param request GetFlowRequest
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlow(const string &flowName, const Models::GetFlowRequest &request);

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
      Models::GetFlowDraftResponse getFlowDraftWithOptions(const string &flowName, const Models::GetFlowDraftRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the workflow draft.
       *
       * @description 获取指定工作流的草稿版本，返回草稿中的配置信息。
       *
       * @param request GetFlowDraftRequest
       * @return GetFlowDraftResponse
       */
      Models::GetFlowDraftResponse getFlowDraft(const string &flowName, const Models::GetFlowDraftRequest &request);

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
      Models::GetFlowEndpointResponse getFlowEndpointWithOptions(const string &flowName, const string &flowEndpointName, const Models::GetFlowEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a workflow endpoint.
       *
       * @description 根据工作流ID和端点ID获取指定工作流端点的详细信息。
       *
       * @param request GetFlowEndpointRequest
       * @return GetFlowEndpointResponse
       */
      Models::GetFlowEndpointResponse getFlowEndpoint(const string &flowName, const string &flowEndpointName, const Models::GetFlowEndpointRequest &request);

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
      Models::GetFlowVersionResponse getFlowVersionWithOptions(const string &flowName, const string &flowVersion, const Models::GetFlowVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a workflow version.
       *
       * @description Retrieves the details of a specific workflow version, including a complete configuration snapshot of its definition, environment variables, tracing configuration, and logging configuration.
       *
       * @param request GetFlowVersionRequest
       * @return GetFlowVersionResponse
       */
      Models::GetFlowVersionResponse getFlowVersion(const string &flowName, const string &flowVersion, const Models::GetFlowVersionRequest &request);

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
      Models::GetIMBotResponse getIMBotWithOptions(const string &imBotId, const Models::GetIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a specific IM Bot.
       *
       * @description GET /2025-09-10/agents/im-bots/{imBotId}；200 OK，Body 标准包装，data 为 IMBotInfo
       *
       * @param request GetIMBotRequest
       * @return GetIMBotResponse
       */
      Models::GetIMBotResponse getIMBot(const string &imBotId, const Models::GetIMBotRequest &request);

      /**
       * @summary Gets information about a knowledge base.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeBaseResponse
       */
      Models::GetKnowledgeBaseResponse getKnowledgeBaseWithOptions(const string &knowledgeBaseName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets information about a knowledge base.
       *
       * @return GetKnowledgeBaseResponse
       */
      Models::GetKnowledgeBaseResponse getKnowledgeBase(const string &knowledgeBaseName);

      /**
       * @summary Retrieves details for a specific memory collection.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryCollectionResponse
       */
      Models::GetMemoryCollectionResponse getMemoryCollectionWithOptions(const string &memoryCollectionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves details for a specific memory collection.
       *
       * @return GetMemoryCollectionResponse
       */
      Models::GetMemoryCollectionResponse getMemoryCollection(const string &memoryCollectionName);

      /**
       * @summary Retrieves model governance information.
       *
       * @description This operation retrieves the configuration details of a specific model proxy.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelProxyResponse
       */
      Models::GetModelProxyResponse getModelProxyWithOptions(const string &modelProxyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves model governance information.
       *
       * @description This operation retrieves the configuration details of a specific model proxy.
       *
       * @return GetModelProxyResponse
       */
      Models::GetModelProxyResponse getModelProxy(const string &modelProxyName);

      /**
       * @summary Retrieves the details of a specified model service.
       *
       * @description Retrieves the details of a specified model service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelServiceResponse
       */
      Models::GetModelServiceResponse getModelServiceWithOptions(const string &modelServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified model service.
       *
       * @description Retrieves the details of a specified model service.
       *
       * @return GetModelServiceResponse
       */
      Models::GetModelServiceResponse getModelService(const string &modelServiceName);

      /**
       * @summary Retrieves the details of a specific sandbox.
       *
       * @description Retrieves the details of a specific sandbox by its `sandboxId`, including its status and configuration.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSandboxResponse
       */
      Models::GetSandboxResponse getSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific sandbox.
       *
       * @description Retrieves the details of a specific sandbox by its `sandboxId`, including its status and configuration.
       *
       * @return GetSandboxResponse
       */
      Models::GetSandboxResponse getSandbox(const string &sandboxId);

      /**
       * @summary Retrieves a template.
       *
       * @description Retrieves the details of a template by its name. The response includes the template\\"s configuration and status.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a template.
       *
       * @description Retrieves the details of a template by its name. The response includes the template\\"s configuration and status.
       *
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const string &templateName);

      /**
       * @summary Get a tool
       *
       * @description Obtain the complete configuration information of a tool by its name, including basic information, resource configuration, network configuration, running status, and all other detailed information.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetToolResponse
       */
      Models::GetToolResponse getToolWithOptions(const string &toolName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get a tool
       *
       * @description Obtain the complete configuration information of a tool by its name, including basic information, resource configuration, network configuration, running status, and all other detailed information.
       *
       * @return GetToolResponse
       */
      Models::GetToolResponse getTool(const string &toolName);

      /**
       * @summary Retrieves the details of a specific workspace.
       *
       * @description Retrieves the details of a specific workspace.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specific workspace.
       *
       * @description Retrieves the details of a specific workspace.
       *
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceId);

      /**
       * @summary Gets the discovery endpoints for a workspace.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceDiscoveryEndpointsResponse
       */
      Models::GetWorkspaceDiscoveryEndpointsResponse getWorkspaceDiscoveryEndpointsWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the discovery endpoints for a workspace.
       *
       * @return GetWorkspaceDiscoveryEndpointsResponse
       */
      Models::GetWorkspaceDiscoveryEndpointsResponse getWorkspaceDiscoveryEndpoints(const string &workspaceId);

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
      Models::ListAgentRuntimeEndpointsResponse listAgentRuntimeEndpointsWithOptions(const string &agentRuntimeId, const Models::ListAgentRuntimeEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Agent Runtime Endpoints
       *
       * @description 获取指定智能体运行时的所有端点列表，支持按名称过滤和分页查询。端点用于外部系统访问智能体运行时服务。
       *
       * @param request ListAgentRuntimeEndpointsRequest
       * @return ListAgentRuntimeEndpointsResponse
       */
      Models::ListAgentRuntimeEndpointsResponse listAgentRuntimeEndpoints(const string &agentRuntimeId, const Models::ListAgentRuntimeEndpointsRequest &request);

      /**
       * @summary Retrieves agent runtime versions.
       *
       * @param request ListAgentRuntimeVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentRuntimeVersionsResponse
       */
      Models::ListAgentRuntimeVersionsResponse listAgentRuntimeVersionsWithOptions(const string &agentRuntimeId, const Models::ListAgentRuntimeVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves agent runtime versions.
       *
       * @param request ListAgentRuntimeVersionsRequest
       * @return ListAgentRuntimeVersionsResponse
       */
      Models::ListAgentRuntimeVersionsResponse listAgentRuntimeVersions(const string &agentRuntimeId, const Models::ListAgentRuntimeVersionsRequest &request);

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
      Models::ListAgentRuntimesResponse listAgentRuntimesWithOptions(const Models::ListAgentRuntimesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of agent runtimes.
       *
       * @description Retrieves a list of agent runtimes for the current user. You can filter the results based on criteria such as name and tags. This operation supports pagination.
       *
       * @param request ListAgentRuntimesRequest
       * @return ListAgentRuntimesResponse
       */
      Models::ListAgentRuntimesResponse listAgentRuntimes(const Models::ListAgentRuntimesRequest &request);

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
      Models::ListBrowsersResponse listBrowsersWithOptions(const Models::ListBrowsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Browser Sandboxes
       *
       * @description Retrieves a list of all browser instances for the current user. Supports filtering by conditions such as name and status, and supports paginated queries.
       *
       * @param request ListBrowsersRequest
       * @return ListBrowsersResponse
       */
      Models::ListBrowsersResponse listBrowsers(const Models::ListBrowsersRequest &request);

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
      Models::ListCodeInterpretersResponse listCodeInterpretersWithOptions(const Models::ListCodeInterpretersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Code Interpreters
       *
       * @description Retrieve a list of all code interpreter instances for the current user, with support for filtering by name and pagination.
       *
       * @param request ListCodeInterpretersRequest
       * @return ListCodeInterpretersResponse
       */
      Models::ListCodeInterpretersResponse listCodeInterpreters(const Models::ListCodeInterpretersRequest &request);

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
      Models::ListCredentialsResponse listCredentialsWithOptions(const Models::ListCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all credentials.
       *
       * @description Lists the credentials in your account. This operation supports filtering and pagination.
       *
       * @param request ListCredentialsRequest
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentials(const Models::ListCredentialsRequest &request);

      /**
       * @summary Lists custom domains.
       *
       * @param request ListCustomDomainsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomDomainsResponse
       */
      Models::ListCustomDomainsResponse listCustomDomainsWithOptions(const Models::ListCustomDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists custom domains.
       *
       * @param request ListCustomDomainsRequest
       * @return ListCustomDomainsResponse
       */
      Models::ListCustomDomainsResponse listCustomDomains(const Models::ListCustomDomainsRequest &request);

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
      Models::ListFlowEndpointsResponse listFlowEndpointsWithOptions(const string &flowId, const Models::ListFlowEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List workflow endpoints.
       *
       * @description Retrieve all endpoints for a specified workflow, with pagination support.
       *
       * @param request ListFlowEndpointsRequest
       * @return ListFlowEndpointsResponse
       */
      Models::ListFlowEndpointsResponse listFlowEndpoints(const string &flowId, const Models::ListFlowEndpointsRequest &request);

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
      Models::ListFlowVersionsResponse listFlowVersionsWithOptions(const string &flowName, const Models::ListFlowVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the versions of a flow.
       *
       * @description Returns a paginated list of all versions for a specified flow.
       *
       * @param request ListFlowVersionsRequest
       * @return ListFlowVersionsResponse
       */
      Models::ListFlowVersionsResponse listFlowVersions(const string &flowName, const Models::ListFlowVersionsRequest &request);

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
      Models::ListFlowsResponse listFlowsWithOptions(const Models::ListFlowsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List flows
       *
       * @description 获取当前用户的工作流列表，支持按名称、工作空间等条件过滤，支持分页查询。
       *
       * @param request ListFlowsRequest
       * @return ListFlowsResponse
       */
      Models::ListFlowsResponse listFlows(const Models::ListFlowsRequest &request);

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
      Models::ListIMBotsResponse listIMBotsWithOptions(const Models::ListIMBotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paginated list of IM bots.
       *
       * @description Send a GET request to the `/2025-09-10/agents/im-bots` endpoint to retrieve a paginated list of IM bots. Use the `botName`, `agentRuntimeId`, `botBizType`, and `status` query parameters to filter the results. For pagination, the `pageNumber` defaults to 1 and the `pageSize` defaults to 20, with a maximum of 100.
       *
       * @param request ListIMBotsRequest
       * @return ListIMBotsResponse
       */
      Models::ListIMBotsResponse listIMBots(const Models::ListIMBotsRequest &request);

      /**
       * @summary Lists the knowledge bases in your account.
       *
       * @param request ListKnowledgeBasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBasesWithOptions(const Models::ListKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the knowledge bases in your account.
       *
       * @param request ListKnowledgeBasesRequest
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBases(const Models::ListKnowledgeBasesRequest &request);

      /**
       * @summary Returns a paginated list of memory collections.
       *
       * @param request ListMemoryCollectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoryCollectionsResponse
       */
      Models::ListMemoryCollectionsResponse listMemoryCollectionsWithOptions(const Models::ListMemoryCollectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a paginated list of memory collections.
       *
       * @param request ListMemoryCollectionsRequest
       * @return ListMemoryCollectionsResponse
       */
      Models::ListMemoryCollectionsResponse listMemoryCollections(const Models::ListMemoryCollectionsRequest &request);

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
      Models::ListModelProvidersResponse listModelProvidersWithOptions(const Models::ListModelProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all model providers.
       *
       * @description Lists the available model providers. This operation supports filtering and pagination.
       *
       * @param request ListModelProvidersRequest
       * @return ListModelProvidersResponse
       */
      Models::ListModelProvidersResponse listModelProviders(const Models::ListModelProvidersRequest &request);

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
      Models::ListModelProxiesResponse listModelProxiesWithOptions(const Models::ListModelProxiesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all Model Proxies.
       *
       * @description Retrieves a paginated list of all Model Proxies for the current user. You can filter the list by status.
       *
       * @param request ListModelProxiesRequest
       * @return ListModelProxiesResponse
       */
      Models::ListModelProxiesResponse listModelProxies(const Models::ListModelProxiesRequest &request);

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
      Models::ListModelServicesResponse listModelServicesWithOptions(const Models::ListModelServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all models.
       *
       * @description Retrieves a list of all models for the current user. You can filter the models by type and paginate the results.
       *
       * @param request ListModelServicesRequest
       * @return ListModelServicesResponse
       */
      Models::ListModelServicesResponse listModelServices(const Models::ListModelServicesRequest &request);

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
      Models::ListSandboxesResponse listSandboxesWithOptions(const Models::ListSandboxesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a list of sandboxes.
       *
       * @description Retrieves a list of sandboxes for the current user. You can filter the results by template name, template type, or status. This operation supports pagination.
       *
       * @param request ListSandboxesRequest
       * @return ListSandboxesResponse
       */
      Models::ListSandboxesResponse listSandboxes(const Models::ListSandboxesRequest &request);

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
      Models::ListTemplatesResponse listTemplatesWithOptions(const Models::ListTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists templates.
       *
       * @description Lists all templates for the current user. You can filter the results by template type and use pagination.
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

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
      Models::ListToolsResponse listToolsWithOptions(const Models::ListToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List tools
       *
       * @description Query the tool list. Support paged query and conditional filtering by tool type, workspace, and other criteria. Return the list of tools that meet the conditions and paging information.
       *
       * @param request ListToolsRequest
       * @return ListToolsResponse
       */
      Models::ListToolsResponse listTools(const Models::ListToolsRequest &request);

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
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all workspaces in your account.
       *
       * @description Lists all workspaces.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

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
      Models::PauseSandboxResponse pauseSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pause the sandbox and retain snapshots of its memory and file system. The sandbox enters the PAUSED state so that it can be recovered later.
       *
       * @description This API is used to pause a sandbox. When invoked, the system takes a snapshot of the sandbox, capturing and persisting the memory and disk states. The user can recover the sandbox at a later time.  
       * Note that sandbox snapshots are retained for only 30 days. After 30 days, recovery becomes unavailable.
       *
       * @return PauseSandboxResponse
       */
      Models::PauseSandboxResponse pauseSandbox(const string &sandboxId);

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
      Models::PublishFlowVersionResponse publishFlowVersionWithOptions(const string &flowName, const Models::PublishFlowVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a workflow version.
       *
       * @description Publishes a new version of a specified workflow. This operation supports version management and rollbacks.
       *
       * @param request PublishFlowVersionRequest
       * @return PublishFlowVersionResponse
       */
      Models::PublishFlowVersionResponse publishFlowVersion(const string &flowName, const Models::PublishFlowVersionRequest &request);

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
      Models::PublishRuntimeVersionResponse publishRuntimeVersionWithOptions(const string &agentRuntimeId, const Models::PublishRuntimeVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a new version of an agent runtime.
       *
       * @description Publishes a new version for a specified agent runtime for version management and deployment. The new version can include code updates, configuration changes, and other content.
       *
       * @param request PublishRuntimeVersionRequest
       * @return PublishRuntimeVersionResponse
       */
      Models::PublishRuntimeVersionResponse publishRuntimeVersion(const string &agentRuntimeId, const Models::PublishRuntimeVersionRequest &request);

      /**
       * @summary Resume a paused sandbox instance to restore it from the PAUSED state to the READY (running) state.
       *
       * @description This API resumes a sandbox instance from the paused state to the ready state, allowing the user to invoke it and restore it to the state it was in before being paused.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeSandboxResponse
       */
      Models::ResumeSandboxResponse resumeSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resume a paused sandbox instance to restore it from the PAUSED state to the READY (running) state.
       *
       * @description This API resumes a sandbox instance from the paused state to the ready state, allowing the user to invoke it and restore it to the state it was in before being paused.
       *
       * @return ResumeSandboxResponse
       */
      Models::ResumeSandboxResponse resumeSandbox(const string &sandboxId);

      /**
       * @summary Stops a sandbox.
       *
       * @description Stops the specified sandbox instance. After the operation, the sandbox enters the TERMINATED state.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSandboxResponse
       */
      Models::StopSandboxResponse stopSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a sandbox.
       *
       * @description Stops the specified sandbox instance. After the operation, the sandbox enters the TERMINATED state.
       *
       * @return StopSandboxResponse
       */
      Models::StopSandboxResponse stopSandbox(const string &sandboxId);

      /**
       * @summary Stops the TemplateMCP service.
       *
       * @description Stopping the MCP service deletes the associated MCP resources and makes the endpoint inaccessible.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTemplateMCPResponse
       */
      Models::StopTemplateMCPResponse stopTemplateMCPWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the TemplateMCP service.
       *
       * @description Stopping the MCP service deletes the associated MCP resources and makes the endpoint inaccessible.
       *
       * @return StopTemplateMCPResponse
       */
      Models::StopTemplateMCPResponse stopTemplateMCP(const string &templateName);

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
      Models::UpdateAgentRuntimeResponse updateAgentRuntimeWithOptions(const string &agentRuntimeId, const Models::UpdateAgentRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateAgentRuntime
       *
       * @description Updates the configuration of a specified agent runtime, including resource allocation, network configuration, and environment variables. The update operation triggers a runtime restart.
       *
       * @param request UpdateAgentRuntimeRequest
       * @return UpdateAgentRuntimeResponse
       */
      Models::UpdateAgentRuntimeResponse updateAgentRuntime(const string &agentRuntimeId, const Models::UpdateAgentRuntimeRequest &request);

      /**
       * @summary Update Agent Runtime Endpoint
       *
       * @param request UpdateAgentRuntimeEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentRuntimeEndpointResponse
       */
      Models::UpdateAgentRuntimeEndpointResponse updateAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const Models::UpdateAgentRuntimeEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Agent Runtime Endpoint
       *
       * @param request UpdateAgentRuntimeEndpointRequest
       * @return UpdateAgentRuntimeEndpointResponse
       */
      Models::UpdateAgentRuntimeEndpointResponse updateAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const Models::UpdateAgentRuntimeEndpointRequest &request);

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
      Models::UpdateCredentialResponse updateCredentialWithOptions(const string &credentialName, const Models::UpdateCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a credential.
       *
       * @description Updates the configuration of a specified credential.
       *
       * @param request UpdateCredentialRequest
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredential(const string &credentialName, const Models::UpdateCredentialRequest &request);

      /**
       * @summary Updates a custom domain.
       *
       * @param request UpdateCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomDomainResponse
       */
      Models::UpdateCustomDomainResponse updateCustomDomainWithOptions(const string &domainName, const Models::UpdateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom domain.
       *
       * @param request UpdateCustomDomainRequest
       * @return UpdateCustomDomainResponse
       */
      Models::UpdateCustomDomainResponse updateCustomDomain(const string &domainName, const Models::UpdateCustomDomainRequest &request);

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
      Models::UpdateFlowResponse updateFlowWithOptions(const string &flowName, const Models::UpdateFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a workflow.
       *
       * @description Updates the configuration of a specified workflow, including the definition, execution mode, and environment variables.
       *
       * @param request UpdateFlowRequest
       * @return UpdateFlowResponse
       */
      Models::UpdateFlowResponse updateFlow(const string &flowName, const Models::UpdateFlowRequest &request);

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
      Models::UpdateFlowDraftResponse updateFlowDraftWithOptions(const string &flowName, const Models::UpdateFlowDraftRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a flow draft.
       *
       * @description 更新指定工作流的草稿版本，草稿更新不影响已发布的工作流版本。
       *
       * @param request UpdateFlowDraftRequest
       * @return UpdateFlowDraftResponse
       */
      Models::UpdateFlowDraftResponse updateFlowDraft(const string &flowName, const Models::UpdateFlowDraftRequest &request);

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
      Models::UpdateFlowEndpointResponse updateFlowEndpointWithOptions(const string &flowName, const string &flowEndpointName, const Models::UpdateFlowEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Flow Endpoint
       *
       * @description 更新指定工作流端点的配置信息，包括目标版本、路由配置等。
       *
       * @param request UpdateFlowEndpointRequest
       * @return UpdateFlowEndpointResponse
       */
      Models::UpdateFlowEndpointResponse updateFlowEndpoint(const string &flowName, const string &flowEndpointName, const Models::UpdateFlowEndpointRequest &request);

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
      Models::UpdateIMBotResponse updateIMBotWithOptions(const string &imBotId, const Models::UpdateIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an IM bot.
       *
       * @description PUT /2025-09-10/agents/im-bots/{imBotId}；成功建议 HTTP 202，Body 标准包装，data 为更新后 IMBotInfo
       *
       * @param request UpdateIMBotRequest
       * @return UpdateIMBotResponse
       */
      Models::UpdateIMBotResponse updateIMBot(const string &imBotId, const Models::UpdateIMBotRequest &request);

      /**
       * @summary Updates the configuration of a knowledge base.
       *
       * @param request UpdateKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBaseWithOptions(const string &knowledgeBaseName, const Models::UpdateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a knowledge base.
       *
       * @param request UpdateKnowledgeBaseRequest
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBase(const string &knowledgeBaseName, const Models::UpdateKnowledgeBaseRequest &request);

      /**
       * @summary Modifies a memory collection.
       *
       * @param request UpdateMemoryCollectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryCollectionResponse
       */
      Models::UpdateMemoryCollectionResponse updateMemoryCollectionWithOptions(const string &memoryCollectionName, const Models::UpdateMemoryCollectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a memory collection.
       *
       * @param request UpdateMemoryCollectionRequest
       * @return UpdateMemoryCollectionResponse
       */
      Models::UpdateMemoryCollectionResponse updateMemoryCollection(const string &memoryCollectionName, const Models::UpdateMemoryCollectionRequest &request);

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
      Models::UpdateModelProxyResponse updateModelProxyWithOptions(const string &modelProxyName, const Models::UpdateModelProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a model proxy.
       *
       * @description Use this operation to update the configuration of a specific model proxy.
       *
       * @param request UpdateModelProxyRequest
       * @return UpdateModelProxyResponse
       */
      Models::UpdateModelProxyResponse updateModelProxy(const string &modelProxyName, const Models::UpdateModelProxyRequest &request);

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
      Models::UpdateModelServiceResponse updateModelServiceWithOptions(const string &modelServiceName, const Models::UpdateModelServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a model service.
       *
       * @description This operation modifies the configuration of an existing model service.
       *
       * @param request UpdateModelServiceRequest
       * @return UpdateModelServiceResponse
       */
      Models::UpdateModelServiceResponse updateModelService(const string &modelServiceName, const Models::UpdateModelServiceRequest &request);

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
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &templateName, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a template.
       *
       * @description Updates a template\\"s configuration, including its resource configuration, network configuration, and environment variables.
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &templateName, const Models::UpdateTemplateRequest &request);

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
      Models::UpdateToolResponse updateToolWithOptions(const string &toolName, const Models::UpdateToolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a tool.
       *
       * @description Updates the configuration of an existing tool. You can modify its description, resource configuration, network configuration, and more. This operation supports partial updates. You only need to specify the fields that you want to modify.
       *
       * @param request UpdateToolRequest
       * @return UpdateToolResponse
       */
      Models::UpdateToolResponse updateTool(const string &toolName, const Models::UpdateToolRequest &request);

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
      Models::UpdateWorkspaceResponse updateWorkspaceWithOptions(const string &workspaceId, const Models::UpdateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a workspace.
       *
       * @description Updates the properties of a workspace.
       *
       * @param request UpdateWorkspaceRequest
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspace(const string &workspaceId, const Models::UpdateWorkspaceRequest &request);

      /**
       * @summary Updates the discovery endpoint configuration for a specified workspace.
       *
       * @param request UpdateWorkspaceDiscoveryEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceDiscoveryEndpointsResponse
       */
      Models::UpdateWorkspaceDiscoveryEndpointsResponse updateWorkspaceDiscoveryEndpointsWithOptions(const string &workspaceId, const Models::UpdateWorkspaceDiscoveryEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the discovery endpoint configuration for a specified workspace.
       *
       * @param request UpdateWorkspaceDiscoveryEndpointsRequest
       * @return UpdateWorkspaceDiscoveryEndpointsResponse
       */
      Models::UpdateWorkspaceDiscoveryEndpointsResponse updateWorkspaceDiscoveryEndpoints(const string &workspaceId, const Models::UpdateWorkspaceDiscoveryEndpointsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
