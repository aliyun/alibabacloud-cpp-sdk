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
       * @summary 启动模板的MCP服务器
       *
       * @param request ActivateTemplateMCPRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ActivateTemplateMCPResponse
       */
      Models::ActivateTemplateMCPResponse activateTemplateMCPWithOptions(const string &templateName, const Models::ActivateTemplateMCPRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启动模板的MCP服务器
       *
       * @param request ActivateTemplateMCPRequest
       * @return ActivateTemplateMCPResponse
       */
      Models::ActivateTemplateMCPResponse activateTemplateMCP(const string &templateName, const Models::ActivateTemplateMCPRequest &request);

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
      Models::CreateAgentRuntimeResponse createAgentRuntimeWithOptions(const Models::CreateAgentRuntimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an agent runtime
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
       * @summary create memory store
       *
       * @param request CreateMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryResponse
       */
      Models::CreateMemoryResponse createMemoryWithOptions(const Models::CreateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary create memory store
       *
       * @param request CreateMemoryRequest
       * @return CreateMemoryResponse
       */
      Models::CreateMemoryResponse createMemory(const Models::CreateMemoryRequest &request);

      /**
       * @summary create event
       *
       * @param request CreateMemoryEventRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryEventResponse
       */
      Models::CreateMemoryEventResponse createMemoryEventWithOptions(const string &memoryName, const Models::CreateMemoryEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary create event
       *
       * @param request CreateMemoryEventRequest
       * @return CreateMemoryEventResponse
       */
      Models::CreateMemoryEventResponse createMemoryEvent(const string &memoryName, const Models::CreateMemoryEventRequest &request);

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
       * @summary 创建模板
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
       * @summary 创建模板
       *
       * @description 创建一个新的模板，用于后续创建沙箱。模板定义了沙箱的运行时环境、资源配置等。
       *
       * @param request CreateTemplateRequest
       * @return CreateTemplateResponse
       */
      Models::CreateTemplateResponse createTemplate(const Models::CreateTemplateRequest &request);

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
       * @summary delete memory store
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemoryWithOptions(const string &memoryName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary delete memory store
       *
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemory(const string &memoryName);

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
       * @summary GetMemory
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemoryWithOptions(const string &memoryName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetMemory
       *
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemory(const string &memoryName);

      /**
       * @summary get event
       *
       * @param request GetMemoryEventRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryEventResponse
       */
      Models::GetMemoryEventResponse getMemoryEventWithOptions(const string &memoryName, const string &sessionId, const string &eventId, const Models::GetMemoryEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary get event
       *
       * @param request GetMemoryEventRequest
       * @return GetMemoryEventResponse
       */
      Models::GetMemoryEventResponse getMemoryEvent(const string &memoryName, const string &sessionId, const string &eventId, const Models::GetMemoryEventRequest &request);

      /**
       * @summary 获取内存会话详情
       *
       * @description 根据会话ID获取指定内存会话的详细信息，包括会话中的事件记录、时间戳等。用于查看和管理对话历史。
       *
       * @param request GetMemorySessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemorySessionResponse
       */
      Models::GetMemorySessionResponse getMemorySessionWithOptions(const string &memoryName, const string &sessionId, const Models::GetMemorySessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取内存会话详情
       *
       * @description 根据会话ID获取指定内存会话的详细信息，包括会话中的事件记录、时间戳等。用于查看和管理对话历史。
       *
       * @param request GetMemorySessionRequest
       * @return GetMemorySessionResponse
       */
      Models::GetMemorySessionResponse getMemorySession(const string &memoryName, const string &sessionId, const Models::GetMemorySessionRequest &request);

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
       * @summary 列出智能体运行时端点
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
       * @summary 列出智能体运行时端点
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
       * @summary ListMemory
       *
       * @param request ListMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoryResponse
       */
      Models::ListMemoryResponse listMemoryWithOptions(const Models::ListMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListMemory
       *
       * @param request ListMemoryRequest
       * @return ListMemoryResponse
       */
      Models::ListMemoryResponse listMemory(const Models::ListMemoryRequest &request);

      /**
       * @summary list events
       *
       * @param request ListMemoryEventRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoryEventResponse
       */
      Models::ListMemoryEventResponse listMemoryEventWithOptions(const string &memoryName, const string &sessionId, const Models::ListMemoryEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary list events
       *
       * @param request ListMemoryEventRequest
       * @return ListMemoryEventResponse
       */
      Models::ListMemoryEventResponse listMemoryEvent(const string &memoryName, const string &sessionId, const Models::ListMemoryEventRequest &request);

      /**
       * @summary 列出内存会话
       *
       * @description 获取指定内存实例的所有会话列表，支持按时间范围过滤和分页查询。会话是AgentRun中用于存储对话历史和管理上下文的重要组件。
       *
       * @param request ListMemorySessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemorySessionsResponse
       */
      Models::ListMemorySessionsResponse listMemorySessionsWithOptions(const string &memoryName, const Models::ListMemorySessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出内存会话
       *
       * @description 获取指定内存实例的所有会话列表，支持按时间范围过滤和分页查询。会话是AgentRun中用于存储对话历史和管理上下文的重要组件。
       *
       * @param request ListMemorySessionsRequest
       * @return ListMemorySessionsResponse
       */
      Models::ListMemorySessionsResponse listMemorySessions(const string &memoryName, const Models::ListMemorySessionsRequest &request);

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
       * @summary RetrieveMemory
       *
       * @param request RetrieveMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetrieveMemoryResponse
       */
      Models::RetrieveMemoryResponse retrieveMemoryWithOptions(const string &memoryName, const Models::RetrieveMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RetrieveMemory
       *
       * @param request RetrieveMemoryRequest
       * @return RetrieveMemoryResponse
       */
      Models::RetrieveMemoryResponse retrieveMemory(const string &memoryName, const Models::RetrieveMemoryRequest &request);

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
       * @summary 停止模板的MCP服务器
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTemplateMCPResponse
       */
      Models::StopTemplateMCPResponse stopTemplateMCPWithOptions(const string &templateName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 停止模板的MCP服务器
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
       * @summary Update Memory
       *
       * @param request UpdateMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemoryWithOptions(const string &memoryName, const Models::UpdateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Memory
       *
       * @param request UpdateMemoryRequest
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemory(const string &memoryName, const Models::UpdateMemoryRequest &request);

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
  };
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
