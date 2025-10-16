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
  };
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
