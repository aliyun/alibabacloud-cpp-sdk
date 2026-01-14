// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AICCS20230516_HPP_
#define ALIBABACLOUD_AICCS20230516_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Aiccs20230516Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Aiccs20230516.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20230516
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建坐席
       *
       * @param request AddAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAgentResponse
       */
      Models::AddAgentResponse addAgentWithOptions(const Models::AddAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建坐席
       *
       * @param request AddAgentRequest
       * @return AddAgentResponse
       */
      Models::AddAgentResponse addAgent(const Models::AddAgentRequest &request);

      /**
       * @summary 创建坐席组接口
       *
       * @param request AddAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddAgentGroupResponse
       */
      Models::AddAgentGroupResponse addAgentGroupWithOptions(const Models::AddAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建坐席组接口
       *
       * @param request AddAgentGroupRequest
       * @return AddAgentGroupResponse
       */
      Models::AddAgentGroupResponse addAgentGroup(const Models::AddAgentGroupRequest &request);

      /**
       * @summary 添加黑名单接口
       *
       * @param tmpReq AddBlacklistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddBlacklistResponse
       */
      Models::AddBlacklistResponse addBlacklistWithOptions(const Models::AddBlacklistRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加黑名单接口
       *
       * @param request AddBlacklistRequest
       * @return AddBlacklistResponse
       */
      Models::AddBlacklistResponse addBlacklist(const Models::AddBlacklistRequest &request);

      /**
       * @summary 创建任务接口
       *
       * @param tmpReq AddTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTaskResponse
       */
      Models::AddTaskResponse addTaskWithOptions(const Models::AddTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建任务接口
       *
       * @param request AddTaskRequest
       * @return AddTaskResponse
       */
      Models::AddTaskResponse addTask(const Models::AddTaskRequest &request);

      /**
       * @summary 坐席外呼查询外呼记录
       *
       * @param tmpReq AgentCallListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AgentCallListResponse
       */
      Models::AgentCallListResponse agentCallListWithOptions(const Models::AgentCallListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 坐席外呼查询外呼记录
       *
       * @param request AgentCallListRequest
       * @return AgentCallListResponse
       */
      Models::AgentCallListResponse agentCallList(const Models::AgentCallListRequest &request);

      /**
       * @summary 坐席取消号码外呼
       *
       * @param tmpReq AgentCancelCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AgentCancelCallResponse
       */
      Models::AgentCancelCallResponse agentCancelCallWithOptions(const Models::AgentCancelCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 坐席取消号码外呼
       *
       * @param request AgentCancelCallRequest
       * @return AgentCancelCallResponse
       */
      Models::AgentCancelCallResponse agentCancelCall(const Models::AgentCancelCallRequest &request);

      /**
       * @summary 坐席组分页查询
       *
       * @param request AgentGroupPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AgentGroupPageResponse
       */
      Models::AgentGroupPageResponse agentGroupPageWithOptions(const Models::AgentGroupPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 坐席组分页查询
       *
       * @param request AgentGroupPageRequest
       * @return AgentGroupPageResponse
       */
      Models::AgentGroupPageResponse agentGroupPage(const Models::AgentGroupPageRequest &request);

      /**
       * @summary 坐席外呼导入号码
       *
       * @param tmpReq AgentImportNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AgentImportNumberResponse
       */
      Models::AgentImportNumberResponse agentImportNumberWithOptions(const Models::AgentImportNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 坐席外呼导入号码
       *
       * @param request AgentImportNumberRequest
       * @return AgentImportNumberResponse
       */
      Models::AgentImportNumberResponse agentImportNumber(const Models::AgentImportNumberRequest &request);

      /**
       * @summary 坐席任务恢复号码
       *
       * @param tmpReq AgentRecoverCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AgentRecoverCallResponse
       */
      Models::AgentRecoverCallResponse agentRecoverCallWithOptions(const Models::AgentRecoverCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 坐席任务恢复号码
       *
       * @param request AgentRecoverCallRequest
       * @return AgentRecoverCallResponse
       */
      Models::AgentRecoverCallResponse agentRecoverCall(const Models::AgentRecoverCallRequest &request);

      /**
       * @summary 获取聊天内容
       *
       * @param request CallChatListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CallChatListResponse
       */
      Models::CallChatListResponse callChatListWithOptions(const Models::CallChatListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取聊天内容
       *
       * @param request CallChatListRequest
       * @return CallChatListResponse
       */
      Models::CallChatListResponse callChatList(const Models::CallChatListRequest &request);

      /**
       * @summary 获取号码外呼详情
       *
       * @param request CallNumberDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CallNumberDetailResponse
       */
      Models::CallNumberDetailResponse callNumberDetailWithOptions(const Models::CallNumberDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取号码外呼详情
       *
       * @param request CallNumberDetailRequest
       * @return CallNumberDetailResponse
       */
      Models::CallNumberDetailResponse callNumberDetail(const Models::CallNumberDetailRequest &request);

      /**
       * @summary AI批量任务查询号码状态接口
       *
       * @param tmpReq DetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetailsResponse
       */
      Models::DetailsResponse detailsWithOptions(const Models::DetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI批量任务查询号码状态接口
       *
       * @param request DetailsRequest
       * @return DetailsResponse
       */
      Models::DetailsResponse details(const Models::DetailsRequest &request);

      /**
       * @summary 编辑任务接口
       *
       * @param tmpReq EditTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditTaskResponse
       */
      Models::EditTaskResponse editTaskWithOptions(const Models::EditTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑任务接口
       *
       * @param request EditTaskRequest
       * @return EditTaskResponse
       */
      Models::EditTaskResponse editTask(const Models::EditTaskRequest &request);

      /**
       * @summary 导入号码
       *
       * @param tmpReq ImportNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportNumberResponse
       */
      Models::ImportNumberResponse importNumberWithOptions(const Models::ImportNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入号码
       *
       * @param request ImportNumberRequest
       * @return ImportNumberResponse
       */
      Models::ImportNumberResponse importNumber(const Models::ImportNumberRequest &request);

      /**
       * @summary 导入号码
       *
       * @param tmpReq ImportNumberV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportNumberV2Response
       */
      Models::ImportNumberV2Response importNumberV2WithOptions(const Models::ImportNumberV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入号码
       *
       * @param request ImportNumberV2Request
       * @return ImportNumberV2Response
       */
      Models::ImportNumberV2Response importNumberV2(const Models::ImportNumberV2Request &request);

      /**
       * @summary 绑定坐席组
       *
       * @param tmpReq JoinAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinAgentGroupResponse
       */
      Models::JoinAgentGroupResponse joinAgentGroupWithOptions(const Models::JoinAgentGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定坐席组
       *
       * @param request JoinAgentGroupRequest
       * @return JoinAgentGroupResponse
       */
      Models::JoinAgentGroupResponse joinAgentGroup(const Models::JoinAgentGroupRequest &request);

      /**
       * @summary 查询企业黑名单
       *
       * @param tmpReq PageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageResponse
       */
      Models::PageResponse pageWithOptions(const Models::PageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询企业黑名单
       *
       * @param request PageRequest
       * @return PageResponse
       */
      Models::PageResponse page(const Models::PageRequest &request);

      /**
       * @summary 查询坐席具体信息
       *
       * @param request QueryAgentInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAgentInfoResponse
       */
      Models::QueryAgentInfoResponse queryAgentInfoWithOptions(const Models::QueryAgentInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询坐席具体信息
       *
       * @param request QueryAgentInfoRequest
       * @return QueryAgentInfoResponse
       */
      Models::QueryAgentInfoResponse queryAgentInfo(const Models::QueryAgentInfoRequest &request);

      /**
       * @summary 快速创建任务接口
       *
       * @param tmpReq QuickAddTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuickAddTaskResponse
       */
      Models::QuickAddTaskResponse quickAddTaskWithOptions(const Models::QuickAddTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 快速创建任务接口
       *
       * @param request QuickAddTaskRequest
       * @return QuickAddTaskResponse
       */
      Models::QuickAddTaskResponse quickAddTask(const Models::QuickAddTaskRequest &request);

      /**
       * @summary 解绑坐席组
       *
       * @param tmpReq QuitAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuitAgentGroupResponse
       */
      Models::QuitAgentGroupResponse quitAgentGroupWithOptions(const Models::QuitAgentGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑坐席组
       *
       * @param request QuitAgentGroupRequest
       * @return QuitAgentGroupResponse
       */
      Models::QuitAgentGroupResponse quitAgentGroup(const Models::QuitAgentGroupRequest &request);

      /**
       * @summary 短信模板创建
       *
       * @param request SmsTemplateCreateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmsTemplateCreateResponse
       */
      Models::SmsTemplateCreateResponse smsTemplateCreateWithOptions(const Models::SmsTemplateCreateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 短信模板创建
       *
       * @param request SmsTemplateCreateRequest
       * @return SmsTemplateCreateResponse
       */
      Models::SmsTemplateCreateResponse smsTemplateCreate(const Models::SmsTemplateCreateRequest &request);

      /**
       * @summary 短信模板列表查询
       *
       * @param request SmsTemplatePageListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmsTemplatePageListResponse
       */
      Models::SmsTemplatePageListResponse smsTemplatePageListWithOptions(const Models::SmsTemplatePageListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 短信模板列表查询
       *
       * @param request SmsTemplatePageListRequest
       * @return SmsTemplatePageListResponse
       */
      Models::SmsTemplatePageListResponse smsTemplatePageList(const Models::SmsTemplatePageListRequest &request);

      /**
       * @summary 查询聊天记录接口
       *
       * @param request TaskCallChatsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TaskCallChatsResponse
       */
      Models::TaskCallChatsResponse taskCallChatsWithOptions(const Models::TaskCallChatsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询聊天记录接口
       *
       * @param request TaskCallChatsRequest
       * @return TaskCallChatsResponse
       */
      Models::TaskCallChatsResponse taskCallChats(const Models::TaskCallChatsRequest &request);

      /**
       * @summary 获取任务外呼情况接口
       *
       * @param request TaskCallInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TaskCallInfoResponse
       */
      Models::TaskCallInfoResponse taskCallInfoWithOptions(const Models::TaskCallInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务外呼情况接口
       *
       * @param request TaskCallInfoRequest
       * @return TaskCallInfoResponse
       */
      Models::TaskCallInfoResponse taskCallInfo(const Models::TaskCallInfoRequest &request);

      /**
       * @summary AI批量任务查询外呼记录接口
       *
       * @param tmpReq TaskCallListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TaskCallListResponse
       */
      Models::TaskCallListResponse taskCallListWithOptions(const Models::TaskCallListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AI批量任务查询外呼记录接口
       *
       * @param request TaskCallListRequest
       * @return TaskCallListResponse
       */
      Models::TaskCallListResponse taskCallList(const Models::TaskCallListRequest &request);

      /**
       * @summary 批量任务取消号码外呼
       *
       * @param tmpReq TaskCancelCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TaskCancelCallResponse
       */
      Models::TaskCancelCallResponse taskCancelCallWithOptions(const Models::TaskCancelCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量任务取消号码外呼
       *
       * @param request TaskCancelCallRequest
       * @return TaskCancelCallResponse
       */
      Models::TaskCancelCallResponse taskCancelCall(const Models::TaskCancelCallRequest &request);

      /**
       * @summary 查询任务列表接口
       *
       * @param request TaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TaskListResponse
       */
      Models::TaskListResponse taskListWithOptions(const Models::TaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询任务列表接口
       *
       * @param request TaskListRequest
       * @return TaskListResponse
       */
      Models::TaskListResponse taskList(const Models::TaskListRequest &request);

      /**
       * @summary 批量任务恢复号码
       *
       * @param tmpReq TaskRecoverCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TaskRecoverCallResponse
       */
      Models::TaskRecoverCallResponse taskRecoverCallWithOptions(const Models::TaskRecoverCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量任务恢复号码
       *
       * @param request TaskRecoverCallRequest
       * @return TaskRecoverCallResponse
       */
      Models::TaskRecoverCallResponse taskRecoverCall(const Models::TaskRecoverCallRequest &request);

      /**
       * @summary 话术模板列表查询接口
       *
       * @param request TemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TemplateListResponse
       */
      Models::TemplateListResponse templateListWithOptions(const Models::TemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 话术模板列表查询接口
       *
       * @param request TemplateListRequest
       * @return TemplateListResponse
       */
      Models::TemplateListResponse templateList(const Models::TemplateListRequest &request);

      /**
       * @summary 修改坐席状态
       *
       * @param request UpdateAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentStatusResponse
       */
      Models::UpdateAgentStatusResponse updateAgentStatusWithOptions(const Models::UpdateAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改坐席状态
       *
       * @param request UpdateAgentStatusRequest
       * @return UpdateAgentStatusResponse
       */
      Models::UpdateAgentStatusResponse updateAgentStatus(const Models::UpdateAgentStatusRequest &request);

      /**
       * @summary 更新当天导入的号码
       *
       * @param tmpReq UpdateTaskCustomerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTaskCustomerResponse
       */
      Models::UpdateTaskCustomerResponse updateTaskCustomerWithOptions(const Models::UpdateTaskCustomerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新当天导入的号码
       *
       * @param request UpdateTaskCustomerRequest
       * @return UpdateTaskCustomerResponse
       */
      Models::UpdateTaskCustomerResponse updateTaskCustomer(const Models::UpdateTaskCustomerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Aiccs20230516
#endif
