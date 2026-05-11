// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_STAROPS20260428_HPP_
#define ALIBABACLOUD_STAROPS20260428_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/STAROps20260428Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/STAROps20260428.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建对话
       *
       * @param request CreateChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatResponse
       */
      FutureGenerator<Models::CreateChatResponse> createChatWithSSE(const Models::CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建对话
       *
       * @param request CreateChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatResponse
       */
      Models::CreateChatResponse createChatWithOptions(const Models::CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建对话
       *
       * @param request CreateChatRequest
       * @return CreateChatResponse
       */
      Models::CreateChatResponse createChat(const Models::CreateChatRequest &request);

      /**
       * @summary 创建DigitalEmployee
       *
       * @param request CreateDigitalEmployeeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDigitalEmployeeResponse
       */
      Models::CreateDigitalEmployeeResponse createDigitalEmployeeWithOptions(const Models::CreateDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建DigitalEmployee
       *
       * @param request CreateDigitalEmployeeRequest
       * @return CreateDigitalEmployeeResponse
       */
      Models::CreateDigitalEmployeeResponse createDigitalEmployee(const Models::CreateDigitalEmployeeRequest &request);

      /**
       * @summary 创建技能
       *
       * @param request CreateDigitalEmployeeSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDigitalEmployeeSkillResponse
       */
      Models::CreateDigitalEmployeeSkillResponse createDigitalEmployeeSkillWithOptions(const string &name, const Models::CreateDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建技能
       *
       * @param request CreateDigitalEmployeeSkillRequest
       * @return CreateDigitalEmployeeSkillResponse
       */
      Models::CreateDigitalEmployeeSkillResponse createDigitalEmployeeSkill(const string &name, const Models::CreateDigitalEmployeeSkillRequest &request);

      /**
       * @summary 创建会话
       *
       * @param request CreateThreadRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateThreadResponse
       */
      Models::CreateThreadResponse createThreadWithOptions(const string &name, const Models::CreateThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建会话
       *
       * @param request CreateThreadRequest
       * @return CreateThreadResponse
       */
      Models::CreateThreadResponse createThread(const string &name, const Models::CreateThreadRequest &request);

      /**
       * @summary 创建票据
       *
       * @param request CreateTicketRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建票据
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary 删除DigitalEmployee
       *
       * @param request DeleteDigitalEmployeeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDigitalEmployeeResponse
       */
      Models::DeleteDigitalEmployeeResponse deleteDigitalEmployeeWithOptions(const string &name, const Models::DeleteDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除DigitalEmployee
       *
       * @param request DeleteDigitalEmployeeRequest
       * @return DeleteDigitalEmployeeResponse
       */
      Models::DeleteDigitalEmployeeResponse deleteDigitalEmployee(const string &name, const Models::DeleteDigitalEmployeeRequest &request);

      /**
       * @summary 删除技能
       *
       * @param request DeleteDigitalEmployeeSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDigitalEmployeeSkillResponse
       */
      Models::DeleteDigitalEmployeeSkillResponse deleteDigitalEmployeeSkillWithOptions(const string &name, const string &skillName, const Models::DeleteDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除技能
       *
       * @param request DeleteDigitalEmployeeSkillRequest
       * @return DeleteDigitalEmployeeSkillResponse
       */
      Models::DeleteDigitalEmployeeSkillResponse deleteDigitalEmployeeSkill(const string &name, const string &skillName, const Models::DeleteDigitalEmployeeSkillRequest &request);

      /**
       * @summary 删除会话
       *
       * @param request DeleteThreadRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteThreadResponse
       */
      Models::DeleteThreadResponse deleteThreadWithOptions(const string &name, const string &threadId, const Models::DeleteThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除会话
       *
       * @param request DeleteThreadRequest
       * @return DeleteThreadResponse
       */
      Models::DeleteThreadResponse deleteThread(const string &name, const string &threadId, const Models::DeleteThreadRequest &request);

      /**
       * @summary 下载产物文件
       *
       * @param request GetArtifactRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifactWithOptions(const string &name, const Models::GetArtifactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下载产物文件
       *
       * @param request GetArtifactRequest
       * @return GetArtifactResponse
       */
      Models::GetArtifactResponse getArtifact(const string &name, const Models::GetArtifactRequest &request);

      /**
       * @summary 查询 DigitalEmployee
       *
       * @param request GetDigitalEmployeeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDigitalEmployeeResponse
       */
      Models::GetDigitalEmployeeResponse getDigitalEmployeeWithOptions(const string &name, const Models::GetDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 DigitalEmployee
       *
       * @param request GetDigitalEmployeeRequest
       * @return GetDigitalEmployeeResponse
       */
      Models::GetDigitalEmployeeResponse getDigitalEmployee(const string &name, const Models::GetDigitalEmployeeRequest &request);

      /**
       * @summary 获取技能详情
       *
       * @param request GetDigitalEmployeeSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDigitalEmployeeSkillResponse
       */
      Models::GetDigitalEmployeeSkillResponse getDigitalEmployeeSkillWithOptions(const string &name, const string &skillName, const Models::GetDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取技能详情
       *
       * @param request GetDigitalEmployeeSkillRequest
       * @return GetDigitalEmployeeSkillResponse
       */
      Models::GetDigitalEmployeeSkillResponse getDigitalEmployeeSkill(const string &name, const string &skillName, const Models::GetDigitalEmployeeSkillRequest &request);

      /**
       * @summary 获取会话
       *
       * @param request GetThreadRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetThreadResponse
       */
      Models::GetThreadResponse getThreadWithOptions(const string &name, const string &threadId, const Models::GetThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会话
       *
       * @param request GetThreadRequest
       * @return GetThreadResponse
       */
      Models::GetThreadResponse getThread(const string &name, const string &threadId, const Models::GetThreadRequest &request);

      /**
       * @summary 获取会话数据
       *
       * @param request GetThreadDataRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetThreadDataResponse
       */
      Models::GetThreadDataResponse getThreadDataWithOptions(const string &name, const string &threadId, const Models::GetThreadDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取会话数据
       *
       * @param request GetThreadDataRequest
       * @return GetThreadDataResponse
       */
      Models::GetThreadDataResponse getThreadData(const string &name, const string &threadId, const Models::GetThreadDataRequest &request);

      /**
       * @summary 列出产物文件
       *
       * @param request ListArtifactsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListArtifactsResponse
       */
      Models::ListArtifactsResponse listArtifactsWithOptions(const string &name, const Models::ListArtifactsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出产物文件
       *
       * @param request ListArtifactsRequest
       * @return ListArtifactsResponse
       */
      Models::ListArtifactsResponse listArtifacts(const string &name, const Models::ListArtifactsRequest &request);

      /**
       * @summary 列出技能版本
       *
       * @param request ListDigitalEmployeeSkillVersionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDigitalEmployeeSkillVersionsResponse
       */
      Models::ListDigitalEmployeeSkillVersionsResponse listDigitalEmployeeSkillVersionsWithOptions(const string &name, const string &skillName, const Models::ListDigitalEmployeeSkillVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出技能版本
       *
       * @param request ListDigitalEmployeeSkillVersionsRequest
       * @return ListDigitalEmployeeSkillVersionsResponse
       */
      Models::ListDigitalEmployeeSkillVersionsResponse listDigitalEmployeeSkillVersions(const string &name, const string &skillName, const Models::ListDigitalEmployeeSkillVersionsRequest &request);

      /**
       * @summary 列出技能
       *
       * @param request ListDigitalEmployeeSkillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDigitalEmployeeSkillsResponse
       */
      Models::ListDigitalEmployeeSkillsResponse listDigitalEmployeeSkillsWithOptions(const string &name, const Models::ListDigitalEmployeeSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出技能
       *
       * @param request ListDigitalEmployeeSkillsRequest
       * @return ListDigitalEmployeeSkillsResponse
       */
      Models::ListDigitalEmployeeSkillsResponse listDigitalEmployeeSkills(const string &name, const Models::ListDigitalEmployeeSkillsRequest &request);

      /**
       * @summary 列出资源DigitalEmployee
       *
       * @param tmpReq ListDigitalEmployeesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDigitalEmployeesResponse
       */
      Models::ListDigitalEmployeesResponse listDigitalEmployeesWithOptions(const Models::ListDigitalEmployeesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出资源DigitalEmployee
       *
       * @param request ListDigitalEmployeesRequest
       * @return ListDigitalEmployeesResponse
       */
      Models::ListDigitalEmployeesResponse listDigitalEmployees(const Models::ListDigitalEmployeesRequest &request);

      /**
       * @summary 列出会话
       *
       * @param tmpReq ListThreadsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListThreadsResponse
       */
      Models::ListThreadsResponse listThreadsWithOptions(const string &name, const Models::ListThreadsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出会话
       *
       * @param request ListThreadsRequest
       * @return ListThreadsResponse
       */
      Models::ListThreadsResponse listThreads(const string &name, const Models::ListThreadsRequest &request);

      /**
       * @summary 更新UpdateDigitalEmployee
       *
       * @param request UpdateDigitalEmployeeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDigitalEmployeeResponse
       */
      Models::UpdateDigitalEmployeeResponse updateDigitalEmployeeWithOptions(const string &name, const Models::UpdateDigitalEmployeeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新UpdateDigitalEmployee
       *
       * @param request UpdateDigitalEmployeeRequest
       * @return UpdateDigitalEmployeeResponse
       */
      Models::UpdateDigitalEmployeeResponse updateDigitalEmployee(const string &name, const Models::UpdateDigitalEmployeeRequest &request);

      /**
       * @summary 更新技能
       *
       * @param request UpdateDigitalEmployeeSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDigitalEmployeeSkillResponse
       */
      Models::UpdateDigitalEmployeeSkillResponse updateDigitalEmployeeSkillWithOptions(const string &name, const string &skillName, const Models::UpdateDigitalEmployeeSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新技能
       *
       * @param request UpdateDigitalEmployeeSkillRequest
       * @return UpdateDigitalEmployeeSkillResponse
       */
      Models::UpdateDigitalEmployeeSkillResponse updateDigitalEmployeeSkill(const string &name, const string &skillName, const Models::UpdateDigitalEmployeeSkillRequest &request);

      /**
       * @summary 更新会话
       *
       * @param request UpdateThreadRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateThreadResponse
       */
      Models::UpdateThreadResponse updateThreadWithOptions(const string &name, const string &threadId, const Models::UpdateThreadRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新会话
       *
       * @param request UpdateThreadRequest
       * @return UpdateThreadResponse
       */
      Models::UpdateThreadResponse updateThread(const string &name, const string &threadId, const Models::UpdateThreadRequest &request);
  };
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
