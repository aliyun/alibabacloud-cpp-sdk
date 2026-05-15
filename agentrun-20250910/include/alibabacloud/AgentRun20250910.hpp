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
       * @summary Enable the TemplateMCP service.
       *
       * @param request ActivateTemplateMCPRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateTemplateMCPResponse
       */
      Models::ActivateTemplateMCPResponse activateTemplateMCPWithOptions(const string &templateName, const Models::ActivateTemplateMCPRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable the TemplateMCP service.
       *
       * @param request ActivateTemplateMCPRequest
       * @return ActivateTemplateMCPResponse
       */
      Models::ActivateTemplateMCPResponse activateTemplateMCP(const string &templateName, const Models::ActivateTemplateMCPRequest &request);

      /**
       * @summary 转换Flow DSL
       *
       * @description 将第三方工作流DSL（如Dify、n8n等）转换为AgentRun Flow定义。支持兼容性检查、插件识别和元数据提取，返回转换后的Flow配置、兼容性分析报告和所需的Toolset安装配置。此操作为dry-run模式，不会创建实际的Flow资源。
       *
       * @param request ConvertFlowDSLRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertFlowDSLResponse
       */
      Models::ConvertFlowDSLResponse convertFlowDSLWithOptions(const Models::ConvertFlowDSLRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 转换Flow DSL
       *
       * @description 将第三方工作流DSL（如Dify、n8n等）转换为AgentRun Flow定义。支持兼容性检查、插件识别和元数据提取，返回转换后的Flow配置、兼容性分析报告和所需的Toolset安装配置。此操作为dry-run模式，不会创建实际的Flow资源。
       *
       * @param request ConvertFlowDSLRequest
       * @return ConvertFlowDSLResponse
       */
      Models::ConvertFlowDSLResponse convertFlowDSL(const Models::ConvertFlowDSLRequest &request);

      /**
       * @summary CreateAgentRuntime
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
       * @summary CreateAgentRuntime
       *
       * @description 创建一个新的智能体运行时实例，用于执行AI代理任务。智能体运行时是AgentRun服务的核心组件，提供代码执行、浏览器操作、内存管理等能力。
       *
       * @param request CreateAgentRuntimeRequest
       * @return CreateAgentRuntimeResponse
       */
      Models::CreateAgentRuntimeResponse createAgentRuntime(const Models::CreateAgentRuntimeRequest &request);

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
      Models::CreateAgentRuntimeEndpointResponse createAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const Models::CreateAgentRuntimeEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建智能体运行时端点
       *
       * @description 为指定的智能体运行时创建新的端点，用于外部访问和调用。端点是智能体运行时对外提供服务的入口。
       *
       * @param request CreateAgentRuntimeEndpointRequest
       * @return CreateAgentRuntimeEndpointResponse
       */
      Models::CreateAgentRuntimeEndpointResponse createAgentRuntimeEndpoint(const string &agentRuntimeId, const Models::CreateAgentRuntimeEndpointRequest &request);

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
      Models::CreateBrowserResponse createBrowserWithOptions(const Models::CreateBrowserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建浏览器实例
       *
       * @description 创建一个新的浏览器实例，用于执行网页自动化任务。浏览器实例提供网页浏览、元素操作、截图录制等功能。
       *
       * @param request CreateBrowserRequest
       * @return CreateBrowserResponse
       */
      Models::CreateBrowserResponse createBrowser(const Models::CreateBrowserRequest &request);

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
      Models::CreateCodeInterpreterResponse createCodeInterpreterWithOptions(const Models::CreateCodeInterpreterRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建代码解释器
       *
       * @description 创建一个新的代码解释器实例，用于执行代码解释和运行任务。代码解释器提供Python代码执行、数据处理、机器学习等功能。
       *
       * @param request CreateCodeInterpreterRequest
       * @return CreateCodeInterpreterResponse
       */
      Models::CreateCodeInterpreterResponse createCodeInterpreter(const Models::CreateCodeInterpreterRequest &request);

      /**
       * @summary Create a credential
       *
       * @param request CreateCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredentialWithOptions(const Models::CreateCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a credential
       *
       * @param request CreateCredentialRequest
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredential(const Models::CreateCredentialRequest &request);

      /**
       * @summary 创建自定义域名
       *
       * @param request CreateCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomDomainResponse
       */
      Models::CreateCustomDomainResponse createCustomDomainWithOptions(const Models::CreateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义域名
       *
       * @param request CreateCustomDomainRequest
       * @return CreateCustomDomainResponse
       */
      Models::CreateCustomDomainResponse createCustomDomain(const Models::CreateCustomDomainRequest &request);

      /**
       * @summary 创建工作流
       *
       * @description 创建一个新的工作流实例，用于定义和执行自动化流程。工作流是AgentRun服务的核心组件，支持可视化编排和版本管理。
       *
       * @param request CreateFlowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlowWithOptions(const Models::CreateFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作流
       *
       * @description 创建一个新的工作流实例，用于定义和执行自动化流程。工作流是AgentRun服务的核心组件，支持可视化编排和版本管理。
       *
       * @param request CreateFlowRequest
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlow(const Models::CreateFlowRequest &request);

      /**
       * @summary 创建工作流端点
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
       * @summary 创建工作流端点
       *
       * @description 为指定工作流创建一个新的端点，用于对外提供服务访问。
       *
       * @param request CreateFlowEndpointRequest
       * @return CreateFlowEndpointResponse
       */
      Models::CreateFlowEndpointResponse createFlowEndpoint(const string &flowName, const Models::CreateFlowEndpointRequest &request);

      /**
       * @summary 创建 IM Bot
       *
       * @description POST /2025-09-10/agents/im-bots；成功 HTTP 201；请求体无 status（创建后恒为 running）；Body 标准包装，data 为 IMBotInfo
       *
       * @param request CreateIMBotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIMBotResponse
       */
      Models::CreateIMBotResponse createIMBotWithOptions(const Models::CreateIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 IM Bot
       *
       * @description POST /2025-09-10/agents/im-bots；成功 HTTP 201；请求体无 status（创建后恒为 running）；Body 标准包装，data 为 IMBotInfo
       *
       * @param request CreateIMBotRequest
       * @return CreateIMBotResponse
       */
      Models::CreateIMBotResponse createIMBot(const Models::CreateIMBotRequest &request);

      /**
       * @summary 创建知识库
       *
       * @param request CreateKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateKnowledgeBaseResponse
       */
      Models::CreateKnowledgeBaseResponse createKnowledgeBaseWithOptions(const Models::CreateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建知识库
       *
       * @param request CreateKnowledgeBaseRequest
       * @return CreateKnowledgeBaseResponse
       */
      Models::CreateKnowledgeBaseResponse createKnowledgeBase(const Models::CreateKnowledgeBaseRequest &request);

      /**
       * @summary 添加记忆存储
       *
       * @param request CreateMemoryCollectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryCollectionResponse
       */
      Models::CreateMemoryCollectionResponse createMemoryCollectionWithOptions(const Models::CreateMemoryCollectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加记忆存储
       *
       * @param request CreateMemoryCollectionRequest
       * @return CreateMemoryCollectionResponse
       */
      Models::CreateMemoryCollectionResponse createMemoryCollection(const Models::CreateMemoryCollectionRequest &request);

      /**
       * @summary 新增模型
       *
       * @param request CreateModelProxyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelProxyResponse
       */
      Models::CreateModelProxyResponse createModelProxyWithOptions(const Models::CreateModelProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增模型
       *
       * @param request CreateModelProxyRequest
       * @return CreateModelProxyResponse
       */
      Models::CreateModelProxyResponse createModelProxy(const Models::CreateModelProxyRequest &request);

      /**
       * @summary 新增模型
       *
       * @param request CreateModelServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelServiceResponse
       */
      Models::CreateModelServiceResponse createModelServiceWithOptions(const Models::CreateModelServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增模型
       *
       * @param request CreateModelServiceRequest
       * @return CreateModelServiceResponse
       */
      Models::CreateModelServiceResponse createModelService(const Models::CreateModelServiceRequest &request);

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
      Models::CreateSandboxResponse createSandboxWithOptions(const Models::CreateSandboxRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建沙箱
       *
       * @description 根据模板创建一个新的沙箱实例。沙箱是运行时的执行环境，可以执行代码或运行浏览器。
       *
       * @param request CreateSandboxRequest
       * @return CreateSandboxResponse
       */
      Models::CreateSandboxResponse createSandbox(const Models::CreateSandboxRequest &request);

      /**
       * @summary Create a template.
       *
       * @description 创建一个新的模板，用于后续创建沙箱。模板定义了沙箱的运行时环境、资源配置等。
       *
       * @param request CreateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplateWithOptions(const Models::CreateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a template.
       *
       * @description 创建一个新的模板，用于后续创建沙箱。模板定义了沙箱的运行时环境、资源配置等。
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

      /**
       * @summary 创建工具
       *
       * @description 创建一个新的工具，支持创建 MCP、函数调用和技能等多种类型的工具。工具创建后可以被 Agent 调用以扩展其能力。
       *
       * @param request CreateToolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateToolResponse
       */
      Models::CreateToolResponse createToolWithOptions(const Models::CreateToolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工具
       *
       * @description 创建一个新的工具，支持创建 MCP、函数调用和技能等多种类型的工具。工具创建后可以被 Agent 调用以扩展其能力。
       *
       * @param request CreateToolRequest
       * @return CreateToolResponse
       */
      Models::CreateToolResponse createTool(const Models::CreateToolRequest &request);

      /**
       * @summary 创建工作空间
       *
       * @description 创建工作空间
       *
       * @param request CreateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建工作空间
       *
       * @description 创建工作空间
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary 删除智能体运行时
       *
       * @description 删除指定的智能体运行时实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentRuntimeResponse
       */
      Models::DeleteAgentRuntimeResponse deleteAgentRuntimeWithOptions(const string &agentRuntimeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除智能体运行时
       *
       * @description 删除指定的智能体运行时实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
       *
       * @return DeleteAgentRuntimeResponse
       */
      Models::DeleteAgentRuntimeResponse deleteAgentRuntime(const string &agentRuntimeId);

      /**
       * @summary Delete an agent runtime endpoint
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentRuntimeEndpointResponse
       */
      Models::DeleteAgentRuntimeEndpointResponse deleteAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete an agent runtime endpoint
       *
       * @return DeleteAgentRuntimeEndpointResponse
       */
      Models::DeleteAgentRuntimeEndpointResponse deleteAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId);

      /**
       * @summary 删除浏览器实例
       *
       * @description 删除指定的浏览器实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBrowserResponse
       */
      Models::DeleteBrowserResponse deleteBrowserWithOptions(const string &browserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除浏览器实例
       *
       * @description 删除指定的浏览器实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
       *
       * @return DeleteBrowserResponse
       */
      Models::DeleteBrowserResponse deleteBrowser(const string &browserId);

      /**
       * @summary 删除代码解释器
       *
       * @description 删除指定的代码解释器实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCodeInterpreterResponse
       */
      Models::DeleteCodeInterpreterResponse deleteCodeInterpreterWithOptions(const string &codeInterpreterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除代码解释器
       *
       * @description 删除指定的代码解释器实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
       *
       * @return DeleteCodeInterpreterResponse
       */
      Models::DeleteCodeInterpreterResponse deleteCodeInterpreter(const string &codeInterpreterId);

      /**
       * @summary Delete a credential
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredentialWithOptions(const string &credentialName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a credential
       *
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredential(const string &credentialName);

      /**
       * @summary Delete a custom domain
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomDomainResponse
       */
      Models::DeleteCustomDomainResponse deleteCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a custom domain
       *
       * @return DeleteCustomDomainResponse
       */
      Models::DeleteCustomDomainResponse deleteCustomDomain(const string &domainName);

      /**
       * @summary 删除工作流
       *
       * @description 删除指定的工作流实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
       *
       * @param request DeleteFlowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlowWithOptions(const string &flowName, const Models::DeleteFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作流
       *
       * @description 删除指定的工作流实例，包括其所有相关资源和数据。删除操作不可逆，请谨慎操作。
       *
       * @param request DeleteFlowRequest
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlow(const string &flowName, const Models::DeleteFlowRequest &request);

      /**
       * @summary 删除工作流端点
       *
       * @description 删除指定的工作流端点。删除操作不可逆，请谨慎操作。
       *
       * @param request DeleteFlowEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowEndpointResponse
       */
      Models::DeleteFlowEndpointResponse deleteFlowEndpointWithOptions(const string &flowName, const string &flowEndpointName, const Models::DeleteFlowEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作流端点
       *
       * @description 删除指定的工作流端点。删除操作不可逆，请谨慎操作。
       *
       * @param request DeleteFlowEndpointRequest
       * @return DeleteFlowEndpointResponse
       */
      Models::DeleteFlowEndpointResponse deleteFlowEndpoint(const string &flowName, const string &flowEndpointName, const Models::DeleteFlowEndpointRequest &request);

      /**
       * @summary 删除工作流版本
       *
       * @description 删除指定工作流的指定版本。删除操作不可逆，请谨慎操作。
       *
       * @param request DeleteFlowVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowVersionResponse
       */
      Models::DeleteFlowVersionResponse deleteFlowVersionWithOptions(const string &flowName, const string &flowVersion, const Models::DeleteFlowVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作流版本
       *
       * @description 删除指定工作流的指定版本。删除操作不可逆，请谨慎操作。
       *
       * @param request DeleteFlowVersionRequest
       * @return DeleteFlowVersionResponse
       */
      Models::DeleteFlowVersionResponse deleteFlowVersion(const string &flowName, const string &flowVersion, const Models::DeleteFlowVersionRequest &request);

      /**
       * @summary 删除 IM Bot
       *
       * @description DELETE /2025-09-10/agents/im-bots/{imBotId}；成功为 HTTP 204 No Content，无 JSON 响应体
       *
       * @param request DeleteIMBotRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIMBotResponse
       */
      Models::DeleteIMBotResponse deleteIMBotWithOptions(const string &imBotId, const Models::DeleteIMBotRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 IM Bot
       *
       * @description DELETE /2025-09-10/agents/im-bots/{imBotId}；成功为 HTTP 204 No Content，无 JSON 响应体
       *
       * @param request DeleteIMBotRequest
       * @return DeleteIMBotResponse
       */
      Models::DeleteIMBotResponse deleteIMBot(const string &imBotId, const Models::DeleteIMBotRequest &request);

      /**
       * @summary 删除知识库
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteKnowledgeBaseResponse
       */
      Models::DeleteKnowledgeBaseResponse deleteKnowledgeBaseWithOptions(const string &knowledgeBaseName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除知识库
       *
       * @return DeleteKnowledgeBaseResponse
       */
      Models::DeleteKnowledgeBaseResponse deleteKnowledgeBase(const string &knowledgeBaseName);

      /**
       * @summary 删除记忆存储
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryCollectionResponse
       */
      Models::DeleteMemoryCollectionResponse deleteMemoryCollectionWithOptions(const string &memoryCollectionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除记忆存储
       *
       * @return DeleteMemoryCollectionResponse
       */
      Models::DeleteMemoryCollectionResponse deleteMemoryCollection(const string &memoryCollectionName);

      /**
       * @summary 删除模型
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelProxyResponse
       */
      Models::DeleteModelProxyResponse deleteModelProxyWithOptions(const string &modelProxyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模型
       *
       * @return DeleteModelProxyResponse
       */
      Models::DeleteModelProxyResponse deleteModelProxy(const string &modelProxyName);

      /**
       * @summary 删除模型
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelServiceWithOptions(const string &modelServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模型
       *
       * @return DeleteModelServiceResponse
       */
      Models::DeleteModelServiceResponse deleteModelService(const string &modelServiceName);

      /**
       * @summary 删除Sandbox
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSandboxResponse
       */
      Models::DeleteSandboxResponse deleteSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Sandbox
       *
       * @return DeleteSandboxResponse
       */
      Models::DeleteSandboxResponse deleteSandbox(const string &sandboxId);

      /**
       * @summary 删除模板
       *
       * @description 删除指定的模板。删除后，该模板将无法再用于创建新的沙箱。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplateWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模板
       *
       * @description 删除指定的模板。删除后，该模板将无法再用于创建新的沙箱。
       *
       * @return DeleteTemplateResponse
       */
      Models::DeleteTemplateResponse deleteTemplate(const string &templateName);

      /**
       * @summary 删除工具
       *
       * @description 删除指定的工具。删除操作不可逆，请谨慎操作。删除工具后，所有引用该工具的 Agent 将无法继续使用该工具。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteToolResponse
       */
      Models::DeleteToolResponse deleteToolWithOptions(const string &toolName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工具
       *
       * @description 删除指定的工具。删除操作不可逆，请谨慎操作。删除工具后，所有引用该工具的 Agent 将无法继续使用该工具。
       *
       * @return DeleteToolResponse
       */
      Models::DeleteToolResponse deleteTool(const string &toolName);

      /**
       * @summary 删除工作空间
       *
       * @description 删除工作空间
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除工作空间
       *
       * @description 删除工作空间
       *
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceId);

      /**
       * @summary Get access token for a resource
       *
       * @param request GetAccessTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessTokenResponse
       */
      Models::GetAccessTokenResponse getAccessTokenWithOptions(const Models::GetAccessTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get access token for a resource
       *
       * @param request GetAccessTokenRequest
       * @return GetAccessTokenResponse
       */
      Models::GetAccessTokenResponse getAccessToken(const Models::GetAccessTokenRequest &request);

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
      Models::GetAgentRuntimeResponse getAgentRuntimeWithOptions(const string &agentRuntimeId, const Models::GetAgentRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取智能体运行时详情
       *
       * @description 根据智能体运行时ID获取指定智能体运行时的详细信息，包括配置、状态、资源使用情况等。
       *
       * @param request GetAgentRuntimeRequest
       * @return GetAgentRuntimeResponse
       */
      Models::GetAgentRuntimeResponse getAgentRuntime(const string &agentRuntimeId, const Models::GetAgentRuntimeRequest &request);

      /**
       * @summary Get an agent runtime endpoint
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentRuntimeEndpointResponse
       */
      Models::GetAgentRuntimeEndpointResponse getAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get an agent runtime endpoint
       *
       * @return GetAgentRuntimeEndpointResponse
       */
      Models::GetAgentRuntimeEndpointResponse getAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId);

      /**
       * @summary 获取浏览器实例详情
       *
       * @description 根据浏览器ID获取指定浏览器实例的详细信息，包括配置、状态、资源使用情况等。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBrowserResponse
       */
      Models::GetBrowserResponse getBrowserWithOptions(const string &browserId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取浏览器实例详情
       *
       * @description 根据浏览器ID获取指定浏览器实例的详细信息，包括配置、状态、资源使用情况等。
       *
       * @return GetBrowserResponse
       */
      Models::GetBrowserResponse getBrowser(const string &browserId);

      /**
       * @summary 获取代码解释器详情
       *
       * @description 根据代码解释器ID获取指定代码解释器实例的详细信息，包括配置、状态、资源使用情况等。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCodeInterpreterResponse
       */
      Models::GetCodeInterpreterResponse getCodeInterpreterWithOptions(const string &codeInterpreterId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取代码解释器详情
       *
       * @description 根据代码解释器ID获取指定代码解释器实例的详细信息，包括配置、状态、资源使用情况等。
       *
       * @return GetCodeInterpreterResponse
       */
      Models::GetCodeInterpreterResponse getCodeInterpreter(const string &codeInterpreterId);

      /**
       * @summary Get a credential
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredentialWithOptions(const string &credentialName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get a credential
       *
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredential(const string &credentialName);

      /**
       * @summary 获取自定义域名详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomDomainResponse
       */
      Models::GetCustomDomainResponse getCustomDomainWithOptions(const string &domainName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义域名详情
       *
       * @return GetCustomDomainResponse
       */
      Models::GetCustomDomainResponse getCustomDomain(const string &domainName);

      /**
       * @summary 获取工作流详情
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
       * @summary 获取工作流详情
       *
       * @description 根据工作流ID获取指定工作流的详细信息，包括配置、定义、版本信息等。
       *
       * @param request GetFlowRequest
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlow(const string &flowName, const Models::GetFlowRequest &request);

      /**
       * @summary 获取工作流草稿
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
       * @summary 获取工作流草稿
       *
       * @description 获取指定工作流的草稿版本，返回草稿中的配置信息。
       *
       * @param request GetFlowDraftRequest
       * @return GetFlowDraftResponse
       */
      Models::GetFlowDraftResponse getFlowDraft(const string &flowName, const Models::GetFlowDraftRequest &request);

      /**
       * @summary 获取工作流端点详情
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
       * @summary 获取工作流端点详情
       *
       * @description 根据工作流ID和端点ID获取指定工作流端点的详细信息。
       *
       * @param request GetFlowEndpointRequest
       * @return GetFlowEndpointResponse
       */
      Models::GetFlowEndpointResponse getFlowEndpoint(const string &flowName, const string &flowEndpointName, const Models::GetFlowEndpointRequest &request);

      /**
       * @summary 获取工作流版本详情
       *
       * @description 根据工作流名称和版本号获取指定版本的详细信息，包括该版本的完整配置快照（定义、环境变量、追踪配置、日志配置等）。
       *
       * @param request GetFlowVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowVersionResponse
       */
      Models::GetFlowVersionResponse getFlowVersionWithOptions(const string &flowName, const string &flowVersion, const Models::GetFlowVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作流版本详情
       *
       * @description 根据工作流名称和版本号获取指定版本的详细信息，包括该版本的完整配置快照（定义、环境变量、追踪配置、日志配置等）。
       *
       * @param request GetFlowVersionRequest
       * @return GetFlowVersionResponse
       */
      Models::GetFlowVersionResponse getFlowVersion(const string &flowName, const string &flowVersion, const Models::GetFlowVersionRequest &request);

      /**
       * @summary 获取 IM Bot
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
       * @summary 获取 IM Bot
       *
       * @description GET /2025-09-10/agents/im-bots/{imBotId}；200 OK，Body 标准包装，data 为 IMBotInfo
       *
       * @param request GetIMBotRequest
       * @return GetIMBotResponse
       */
      Models::GetIMBotResponse getIMBot(const string &imBotId, const Models::GetIMBotRequest &request);

      /**
       * @summary 获取知识库
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetKnowledgeBaseResponse
       */
      Models::GetKnowledgeBaseResponse getKnowledgeBaseWithOptions(const string &knowledgeBaseName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取知识库
       *
       * @return GetKnowledgeBaseResponse
       */
      Models::GetKnowledgeBaseResponse getKnowledgeBase(const string &knowledgeBaseName);

      /**
       * @summary 查询记忆存储详情
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryCollectionResponse
       */
      Models::GetMemoryCollectionResponse getMemoryCollectionWithOptions(const string &memoryCollectionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询记忆存储详情
       *
       * @return GetMemoryCollectionResponse
       */
      Models::GetMemoryCollectionResponse getMemoryCollection(const string &memoryCollectionName);

      /**
       * @summary 查看model
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelProxyResponse
       */
      Models::GetModelProxyResponse getModelProxyWithOptions(const string &modelProxyName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看model
       *
       * @return GetModelProxyResponse
       */
      Models::GetModelProxyResponse getModelProxy(const string &modelProxyName);

      /**
       * @summary 查看model
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelServiceResponse
       */
      Models::GetModelServiceResponse getModelServiceWithOptions(const string &modelServiceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看model
       *
       * @return GetModelServiceResponse
       */
      Models::GetModelServiceResponse getModelService(const string &modelServiceName);

      /**
       * @summary 获取沙箱
       *
       * @description 根据沙箱ID获取指定沙箱的详细信息，包括状态、配置等。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSandboxResponse
       */
      Models::GetSandboxResponse getSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取沙箱
       *
       * @description 根据沙箱ID获取指定沙箱的详细信息，包括状态、配置等。
       *
       * @return GetSandboxResponse
       */
      Models::GetSandboxResponse getSandbox(const string &sandboxId);

      /**
       * @summary 获取模板
       *
       * @description 根据模板名称获取指定模板的详细信息，包括配置、状态等。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplateWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取模板
       *
       * @description 根据模板名称获取指定模板的详细信息，包括配置、状态等。
       *
       * @return GetTemplateResponse
       */
      Models::GetTemplateResponse getTemplate(const string &templateName);

      /**
       * @summary 获取工具详情
       *
       * @description 根据工具名称获取工具的完整配置信息，包括工具的基本信息、资源配置、网络配置、运行状态等所有详细信息。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetToolResponse
       */
      Models::GetToolResponse getToolWithOptions(const string &toolName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工具详情
       *
       * @description 根据工具名称获取工具的完整配置信息，包括工具的基本信息、资源配置、网络配置、运行状态等所有详细信息。
       *
       * @return GetToolResponse
       */
      Models::GetToolResponse getTool(const string &toolName);

      /**
       * @summary 查看工作空间
       *
       * @description 查看工作空间
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看工作空间
       *
       * @description 查看工作空间
       *
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceId);

      /**
       * @summary 获取工作空间下的发现端点
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceDiscoveryEndpointsResponse
       */
      Models::GetWorkspaceDiscoveryEndpointsResponse getWorkspaceDiscoveryEndpointsWithOptions(const string &workspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间下的发现端点
       *
       * @return GetWorkspaceDiscoveryEndpointsResponse
       */
      Models::GetWorkspaceDiscoveryEndpointsResponse getWorkspaceDiscoveryEndpoints(const string &workspaceId);

      /**
       * @summary Retrieve the list of access endpoints for an agent runtime
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
       * @summary Retrieve the list of access endpoints for an agent runtime
       *
       * @description 获取指定智能体运行时的所有端点列表，支持按名称过滤和分页查询。端点用于外部系统访问智能体运行时服务。
       *
       * @param request ListAgentRuntimeEndpointsRequest
       * @return ListAgentRuntimeEndpointsResponse
       */
      Models::ListAgentRuntimeEndpointsResponse listAgentRuntimeEndpoints(const string &agentRuntimeId, const Models::ListAgentRuntimeEndpointsRequest &request);

      /**
       * @summary List agent runtime versions
       *
       * @param request ListAgentRuntimeVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentRuntimeVersionsResponse
       */
      Models::ListAgentRuntimeVersionsResponse listAgentRuntimeVersionsWithOptions(const string &agentRuntimeId, const Models::ListAgentRuntimeVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List agent runtime versions
       *
       * @param request ListAgentRuntimeVersionsRequest
       * @return ListAgentRuntimeVersionsResponse
       */
      Models::ListAgentRuntimeVersionsResponse listAgentRuntimeVersions(const string &agentRuntimeId, const Models::ListAgentRuntimeVersionsRequest &request);

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
      Models::ListAgentRuntimesResponse listAgentRuntimesWithOptions(const Models::ListAgentRuntimesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出智能体运行时
       *
       * @description 获取当前用户的所有智能体运行时列表，支持按名称、标签等条件过滤，支持分页查询。
       *
       * @param request ListAgentRuntimesRequest
       * @return ListAgentRuntimesResponse
       */
      Models::ListAgentRuntimesResponse listAgentRuntimes(const Models::ListAgentRuntimesRequest &request);

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
      Models::ListBrowsersResponse listBrowsersWithOptions(const Models::ListBrowsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出浏览器实例
       *
       * @description 获取当前用户的所有浏览器实例列表，支持按名称、状态等条件过滤，支持分页查询。
       *
       * @param request ListBrowsersRequest
       * @return ListBrowsersResponse
       */
      Models::ListBrowsersResponse listBrowsers(const Models::ListBrowsersRequest &request);

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
      Models::ListCodeInterpretersResponse listCodeInterpretersWithOptions(const Models::ListCodeInterpretersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出代码解释器
       *
       * @description 获取当前用户的所有代码解释器实例列表，支持按名称等条件过滤，支持分页查询。
       *
       * @param request ListCodeInterpretersRequest
       * @return ListCodeInterpretersResponse
       */
      Models::ListCodeInterpretersResponse listCodeInterpreters(const Models::ListCodeInterpretersRequest &request);

      /**
       * @summary List credentials
       *
       * @param request ListCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentialsWithOptions(const Models::ListCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List credentials
       *
       * @param request ListCredentialsRequest
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentials(const Models::ListCredentialsRequest &request);

      /**
       * @summary 自定义域名列表
       *
       * @param request ListCustomDomainsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomDomainsResponse
       */
      Models::ListCustomDomainsResponse listCustomDomainsWithOptions(const Models::ListCustomDomainsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自定义域名列表
       *
       * @param request ListCustomDomainsRequest
       * @return ListCustomDomainsResponse
       */
      Models::ListCustomDomainsResponse listCustomDomains(const Models::ListCustomDomainsRequest &request);

      /**
       * @summary 列出工作流端点
       *
       * @description 获取指定工作流的所有端点列表，支持分页查询。
       *
       * @param request ListFlowEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowEndpointsResponse
       */
      Models::ListFlowEndpointsResponse listFlowEndpointsWithOptions(const string &flowId, const Models::ListFlowEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出工作流端点
       *
       * @description 获取指定工作流的所有端点列表，支持分页查询。
       *
       * @param request ListFlowEndpointsRequest
       * @return ListFlowEndpointsResponse
       */
      Models::ListFlowEndpointsResponse listFlowEndpoints(const string &flowId, const Models::ListFlowEndpointsRequest &request);

      /**
       * @summary 列出工作流版本
       *
       * @description 获取指定工作流的所有版本列表，支持分页查询。
       *
       * @param request ListFlowVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowVersionsResponse
       */
      Models::ListFlowVersionsResponse listFlowVersionsWithOptions(const string &flowName, const Models::ListFlowVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出工作流版本
       *
       * @description 获取指定工作流的所有版本列表，支持分页查询。
       *
       * @param request ListFlowVersionsRequest
       * @return ListFlowVersionsResponse
       */
      Models::ListFlowVersionsResponse listFlowVersions(const string &flowName, const Models::ListFlowVersionsRequest &request);

      /**
       * @summary 列出工作流
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
       * @summary 列出工作流
       *
       * @description 获取当前用户的工作流列表，支持按名称、工作空间等条件过滤，支持分页查询。
       *
       * @param request ListFlowsRequest
       * @return ListFlowsResponse
       */
      Models::ListFlowsResponse listFlows(const Models::ListFlowsRequest &request);

      /**
       * @summary 分页列举 IM Bots
       *
       * @description GET /2025-09-10/agents/im-bots；200 OK；data 含 items、pageNumber、pageSize、total；pageNumber 默认 1、pageSize 默认 20、上限 100；可按 botName（子串忽略大小写）、agentRuntimeId、botBizType、status 筛选
       *
       * @param request ListIMBotsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIMBotsResponse
       */
      Models::ListIMBotsResponse listIMBotsWithOptions(const Models::ListIMBotsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页列举 IM Bots
       *
       * @description GET /2025-09-10/agents/im-bots；200 OK；data 含 items、pageNumber、pageSize、total；pageNumber 默认 1、pageSize 默认 20、上限 100；可按 botName（子串忽略大小写）、agentRuntimeId、botBizType、status 筛选
       *
       * @param request ListIMBotsRequest
       * @return ListIMBotsResponse
       */
      Models::ListIMBotsResponse listIMBots(const Models::ListIMBotsRequest &request);

      /**
       * @summary 列出知识库
       *
       * @param request ListKnowledgeBasesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBasesWithOptions(const Models::ListKnowledgeBasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出知识库
       *
       * @param request ListKnowledgeBasesRequest
       * @return ListKnowledgeBasesResponse
       */
      Models::ListKnowledgeBasesResponse listKnowledgeBases(const Models::ListKnowledgeBasesRequest &request);

      /**
       * @summary 查询记忆存储列表
       *
       * @param request ListMemoryCollectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoryCollectionsResponse
       */
      Models::ListMemoryCollectionsResponse listMemoryCollectionsWithOptions(const Models::ListMemoryCollectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询记忆存储列表
       *
       * @param request ListMemoryCollectionsRequest
       * @return ListMemoryCollectionsResponse
       */
      Models::ListMemoryCollectionsResponse listMemoryCollections(const Models::ListMemoryCollectionsRequest &request);

      /**
       * @summary 查询支持的模型提供商及其模型
       *
       * @param request ListModelProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelProvidersResponse
       */
      Models::ListModelProvidersResponse listModelProvidersWithOptions(const Models::ListModelProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询支持的模型提供商及其模型
       *
       * @param request ListModelProvidersRequest
       * @return ListModelProvidersResponse
       */
      Models::ListModelProvidersResponse listModelProviders(const Models::ListModelProvidersRequest &request);

      /**
       * @summary model列表
       *
       * @param request ListModelProxiesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelProxiesResponse
       */
      Models::ListModelProxiesResponse listModelProxiesWithOptions(const Models::ListModelProxiesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary model列表
       *
       * @param request ListModelProxiesRequest
       * @return ListModelProxiesResponse
       */
      Models::ListModelProxiesResponse listModelProxies(const Models::ListModelProxiesRequest &request);

      /**
       * @summary model列表
       *
       * @param request ListModelServicesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelServicesResponse
       */
      Models::ListModelServicesResponse listModelServicesWithOptions(const Models::ListModelServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary model列表
       *
       * @param request ListModelServicesRequest
       * @return ListModelServicesResponse
       */
      Models::ListModelServicesResponse listModelServices(const Models::ListModelServicesRequest &request);

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
      Models::ListSandboxesResponse listSandboxesWithOptions(const Models::ListSandboxesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出沙箱
       *
       * @description 获取当前用户的所有沙箱列表，支持按模板名称过滤，支持分页查询。
       *
       * @param request ListSandboxesRequest
       * @return ListSandboxesResponse
       */
      Models::ListSandboxesResponse listSandboxes(const Models::ListSandboxesRequest &request);

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
      Models::ListTemplatesResponse listTemplatesWithOptions(const Models::ListTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出模板
       *
       * @description 获取当前用户的所有模板列表，支持按模板类型过滤，支持分页查询。
       *
       * @param request ListTemplatesRequest
       * @return ListTemplatesResponse
       */
      Models::ListTemplatesResponse listTemplates(const Models::ListTemplatesRequest &request);

      /**
       * @summary 工具列表
       *
       * @description 查询工具列表，支持分页查询和按工具类型、工作空间等条件过滤。返回符合条件的工具列表及分页信息。
       *
       * @param request ListToolsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListToolsResponse
       */
      Models::ListToolsResponse listToolsWithOptions(const Models::ListToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 工具列表
       *
       * @description 查询工具列表，支持分页查询和按工具类型、工作空间等条件过滤。返回符合条件的工具列表及分页信息。
       *
       * @param request ListToolsRequest
       * @return ListToolsResponse
       */
      Models::ListToolsResponse listTools(const Models::ListToolsRequest &request);

      /**
       * @summary 获取工作空间列表
       *
       * @description 获取工作空间列表
       *
       * @param request ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间列表
       *
       * @description 获取工作空间列表
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary 暂停沙箱
       *
       * @description 停止指定的沙箱实例。停止后，沙箱将进入TERMINATED状态。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseSandboxResponse
       */
      Models::PauseSandboxResponse pauseSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 暂停沙箱
       *
       * @description 停止指定的沙箱实例。停止后，沙箱将进入TERMINATED状态。
       *
       * @return PauseSandboxResponse
       */
      Models::PauseSandboxResponse pauseSandbox(const string &sandboxId);

      /**
       * @summary 发布工作流版本
       *
       * @description 为指定工作流发布新版本，用于版本管理和回滚。
       *
       * @param request PublishFlowVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishFlowVersionResponse
       */
      Models::PublishFlowVersionResponse publishFlowVersionWithOptions(const string &flowName, const Models::PublishFlowVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布工作流版本
       *
       * @description 为指定工作流发布新版本，用于版本管理和回滚。
       *
       * @param request PublishFlowVersionRequest
       * @return PublishFlowVersionResponse
       */
      Models::PublishFlowVersionResponse publishFlowVersion(const string &flowName, const Models::PublishFlowVersionRequest &request);

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
      Models::PublishRuntimeVersionResponse publishRuntimeVersionWithOptions(const string &agentRuntimeId, const Models::PublishRuntimeVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布运行时版本
       *
       * @description 为指定的智能体运行时发布新版本，用于版本管理和部署。新版本可以包含代码更新、配置变更等内容。
       *
       * @param request PublishRuntimeVersionRequest
       * @return PublishRuntimeVersionResponse
       */
      Models::PublishRuntimeVersionResponse publishRuntimeVersion(const string &agentRuntimeId, const Models::PublishRuntimeVersionRequest &request);

      /**
       * @summary 恢复沙箱
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeSandboxResponse
       */
      Models::ResumeSandboxResponse resumeSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 恢复沙箱
       *
       * @return ResumeSandboxResponse
       */
      Models::ResumeSandboxResponse resumeSandbox(const string &sandboxId);

      /**
       * @summary 停止沙箱
       *
       * @description 停止指定的沙箱实例。停止后，沙箱将进入TERMINATED状态。
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopSandboxResponse
       */
      Models::StopSandboxResponse stopSandboxWithOptions(const string &sandboxId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止沙箱
       *
       * @description 停止指定的沙箱实例。停止后，沙箱将进入TERMINATED状态。
       *
       * @return StopSandboxResponse
       */
      Models::StopSandboxResponse stopSandbox(const string &sandboxId);

      /**
       * @summary Stop the TemplateMCP service.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTemplateMCPResponse
       */
      Models::StopTemplateMCPResponse stopTemplateMCPWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stop the TemplateMCP service.
       *
       * @return StopTemplateMCPResponse
       */
      Models::StopTemplateMCPResponse stopTemplateMCP(const string &templateName);

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
      Models::UpdateAgentRuntimeResponse updateAgentRuntimeWithOptions(const string &agentRuntimeId, const Models::UpdateAgentRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新智能体运行时
       *
       * @description 更新指定智能体运行时的配置信息，包括资源分配、网络配置、环境变量等。更新操作会触发运行时重启。
       *
       * @param request UpdateAgentRuntimeRequest
       * @return UpdateAgentRuntimeResponse
       */
      Models::UpdateAgentRuntimeResponse updateAgentRuntime(const string &agentRuntimeId, const Models::UpdateAgentRuntimeRequest &request);

      /**
       * @summary Update an agent runtime endpoint
       *
       * @param request UpdateAgentRuntimeEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentRuntimeEndpointResponse
       */
      Models::UpdateAgentRuntimeEndpointResponse updateAgentRuntimeEndpointWithOptions(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const Models::UpdateAgentRuntimeEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update an agent runtime endpoint
       *
       * @param request UpdateAgentRuntimeEndpointRequest
       * @return UpdateAgentRuntimeEndpointResponse
       */
      Models::UpdateAgentRuntimeEndpointResponse updateAgentRuntimeEndpoint(const string &agentRuntimeId, const string &agentRuntimeEndpointId, const Models::UpdateAgentRuntimeEndpointRequest &request);

      /**
       * @summary Update a credential
       *
       * @param request UpdateCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredentialWithOptions(const string &credentialName, const Models::UpdateCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a credential
       *
       * @param request UpdateCredentialRequest
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredential(const string &credentialName, const Models::UpdateCredentialRequest &request);

      /**
       * @summary 更新自定义域名
       *
       * @param request UpdateCustomDomainRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomDomainResponse
       */
      Models::UpdateCustomDomainResponse updateCustomDomainWithOptions(const string &domainName, const Models::UpdateCustomDomainRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新自定义域名
       *
       * @param request UpdateCustomDomainRequest
       * @return UpdateCustomDomainResponse
       */
      Models::UpdateCustomDomainResponse updateCustomDomain(const string &domainName, const Models::UpdateCustomDomainRequest &request);

      /**
       * @summary 更新工作流
       *
       * @description 更新指定工作流的配置信息，包括定义、执行模式、环境变量等。
       *
       * @param request UpdateFlowRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowResponse
       */
      Models::UpdateFlowResponse updateFlowWithOptions(const string &flowName, const Models::UpdateFlowRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新工作流
       *
       * @description 更新指定工作流的配置信息，包括定义、执行模式、环境变量等。
       *
       * @param request UpdateFlowRequest
       * @return UpdateFlowResponse
       */
      Models::UpdateFlowResponse updateFlow(const string &flowName, const Models::UpdateFlowRequest &request);

      /**
       * @summary 更新工作流草稿
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
       * @summary 更新工作流草稿
       *
       * @description 更新指定工作流的草稿版本，草稿更新不影响已发布的工作流版本。
       *
       * @param request UpdateFlowDraftRequest
       * @return UpdateFlowDraftResponse
       */
      Models::UpdateFlowDraftResponse updateFlowDraft(const string &flowName, const Models::UpdateFlowDraftRequest &request);

      /**
       * @summary 更新工作流端点
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
       * @summary 更新工作流端点
       *
       * @description 更新指定工作流端点的配置信息，包括目标版本、路由配置等。
       *
       * @param request UpdateFlowEndpointRequest
       * @return UpdateFlowEndpointResponse
       */
      Models::UpdateFlowEndpointResponse updateFlowEndpoint(const string &flowName, const string &flowEndpointName, const Models::UpdateFlowEndpointRequest &request);

      /**
       * @summary 更新 IM Bot
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
       * @summary 更新 IM Bot
       *
       * @description PUT /2025-09-10/agents/im-bots/{imBotId}；成功建议 HTTP 202，Body 标准包装，data 为更新后 IMBotInfo
       *
       * @param request UpdateIMBotRequest
       * @return UpdateIMBotResponse
       */
      Models::UpdateIMBotResponse updateIMBot(const string &imBotId, const Models::UpdateIMBotRequest &request);

      /**
       * @summary 更新知识库
       *
       * @param request UpdateKnowledgeBaseRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBaseWithOptions(const string &knowledgeBaseName, const Models::UpdateKnowledgeBaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新知识库
       *
       * @param request UpdateKnowledgeBaseRequest
       * @return UpdateKnowledgeBaseResponse
       */
      Models::UpdateKnowledgeBaseResponse updateKnowledgeBase(const string &knowledgeBaseName, const Models::UpdateKnowledgeBaseRequest &request);

      /**
       * @summary 修改记忆存储信息
       *
       * @param request UpdateMemoryCollectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryCollectionResponse
       */
      Models::UpdateMemoryCollectionResponse updateMemoryCollectionWithOptions(const string &memoryCollectionName, const Models::UpdateMemoryCollectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改记忆存储信息
       *
       * @param request UpdateMemoryCollectionRequest
       * @return UpdateMemoryCollectionResponse
       */
      Models::UpdateMemoryCollectionResponse updateMemoryCollection(const string &memoryCollectionName, const Models::UpdateMemoryCollectionRequest &request);

      /**
       * @summary 更新模型
       *
       * @param request UpdateModelProxyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelProxyResponse
       */
      Models::UpdateModelProxyResponse updateModelProxyWithOptions(const string &modelProxyName, const Models::UpdateModelProxyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模型
       *
       * @param request UpdateModelProxyRequest
       * @return UpdateModelProxyResponse
       */
      Models::UpdateModelProxyResponse updateModelProxy(const string &modelProxyName, const Models::UpdateModelProxyRequest &request);

      /**
       * @summary 更新模型
       *
       * @param request UpdateModelServiceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelServiceResponse
       */
      Models::UpdateModelServiceResponse updateModelServiceWithOptions(const string &modelServiceName, const Models::UpdateModelServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模型
       *
       * @param request UpdateModelServiceRequest
       * @return UpdateModelServiceResponse
       */
      Models::UpdateModelServiceResponse updateModelService(const string &modelServiceName, const Models::UpdateModelServiceRequest &request);

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
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &templateName, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模板
       *
       * @description 更新指定模板的配置信息，包括资源配置、网络配置、环境变量等。
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &templateName, const Models::UpdateTemplateRequest &request);

      /**
       * @summary 更新工具
       *
       * @description 更新现有工具的配置信息，可以修改工具的描述、资源配置、网络配置等。更新操作支持部分更新，只需提供需要修改的字段。
       *
       * @param request UpdateToolRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateToolResponse
       */
      Models::UpdateToolResponse updateToolWithOptions(const string &toolName, const Models::UpdateToolRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新工具
       *
       * @description 更新现有工具的配置信息，可以修改工具的描述、资源配置、网络配置等。更新操作支持部分更新，只需提供需要修改的字段。
       *
       * @param request UpdateToolRequest
       * @return UpdateToolResponse
       */
      Models::UpdateToolResponse updateTool(const string &toolName, const Models::UpdateToolRequest &request);

      /**
       * @summary 更新工作空间
       *
       * @description 更新工作空间
       *
       * @param request UpdateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspaceWithOptions(const string &workspaceId, const Models::UpdateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新工作空间
       *
       * @description 更新工作空间
       *
       * @param request UpdateWorkspaceRequest
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspace(const string &workspaceId, const Models::UpdateWorkspaceRequest &request);

      /**
       * @summary 获取工作空间下的发现端点
       *
       * @param request UpdateWorkspaceDiscoveryEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceDiscoveryEndpointsResponse
       */
      Models::UpdateWorkspaceDiscoveryEndpointsResponse updateWorkspaceDiscoveryEndpointsWithOptions(const string &workspaceId, const Models::UpdateWorkspaceDiscoveryEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作空间下的发现端点
       *
       * @param request UpdateWorkspaceDiscoveryEndpointsRequest
       * @return UpdateWorkspaceDiscoveryEndpointsResponse
       */
      Models::UpdateWorkspaceDiscoveryEndpointsResponse updateWorkspaceDiscoveryEndpoints(const string &workspaceId, const Models::UpdateWorkspaceDiscoveryEndpointsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
