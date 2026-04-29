// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DYVMSAPI20170525_HPP_
#define ALIBABACLOUD_DYVMSAPI20170525_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dyvmsapi20170525Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dyvmsapi20170525.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Binds multiple real numbers to a service instance at a time.
       *
       * @description ### QPS limits
       * You can call this operation up to 200 times per second per account.
       *
       * @param request AddVirtualNumberRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddVirtualNumberRelationResponse
       */
      Models::AddVirtualNumberRelationResponse addVirtualNumberRelationWithOptions(const Models::AddVirtualNumberRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds multiple real numbers to a service instance at a time.
       *
       * @description ### QPS limits
       * You can call this operation up to 200 times per second per account.
       *
       * @param request AddVirtualNumberRelationRequest
       * @return AddVirtualNumberRelationResponse
       */
      Models::AddVirtualNumberRelationResponse addVirtualNumberRelation(const Models::AddVirtualNumberRelationRequest &request);

      /**
       * @summary Initiates outbound robocall tasks in a batch. You can set up to 100 numbers in a task.
       *
       * @description *   In an intelligent speech interaction task, you can use the robot communication scripts preset in the Voice Messaging Service console, or invoke the callback function to return the response mode configured by the business party in each call.
       * *   The BatchRobotSmartCall operation is used to initiate an outbound robocall task by using the robot communication scripts preset in the Voice Messaging Service console.
       * ## Prerequisites
       * *   You have passed the real-name verification for an enterprise user and passed the enterprise qualification review.
       * *   You have purchased numbers in the [Voice Messaging Service console](https://dyvms.console.aliyun.com/dyvms.htm#/number/normal).
       * *   You have added communication scripts on the [Communication script management](https://dyvms.console.aliyun.com/dyvms.htm#/smart-call/saas/robot/list) page, and the communication scripts have been approved.
       * > Before you call this operation, make sure that you are familiar with the [billing](https://www.aliyun.com/price/product#/vms/detail) of Voice Messaging Service (VMS).
       *
       * @param request BatchRobotSmartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRobotSmartCallResponse
       */
      Models::BatchRobotSmartCallResponse batchRobotSmartCallWithOptions(const Models::BatchRobotSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates outbound robocall tasks in a batch. You can set up to 100 numbers in a task.
       *
       * @description *   In an intelligent speech interaction task, you can use the robot communication scripts preset in the Voice Messaging Service console, or invoke the callback function to return the response mode configured by the business party in each call.
       * *   The BatchRobotSmartCall operation is used to initiate an outbound robocall task by using the robot communication scripts preset in the Voice Messaging Service console.
       * ## Prerequisites
       * *   You have passed the real-name verification for an enterprise user and passed the enterprise qualification review.
       * *   You have purchased numbers in the [Voice Messaging Service console](https://dyvms.console.aliyun.com/dyvms.htm#/number/normal).
       * *   You have added communication scripts on the [Communication script management](https://dyvms.console.aliyun.com/dyvms.htm#/smart-call/saas/robot/list) page, and the communication scripts have been approved.
       * > Before you call this operation, make sure that you are familiar with the [billing](https://www.aliyun.com/price/product#/vms/detail) of Voice Messaging Service (VMS).
       *
       * @param request BatchRobotSmartCallRequest
       * @return BatchRobotSmartCallResponse
       */
      Models::BatchRobotSmartCallResponse batchRobotSmartCall(const Models::BatchRobotSmartCallRequest &request);

      /**
       * @summary Cancels the two-way call that is initiated by calling the ClickToDial operation.
       *
       * @param request CancelCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCallResponse
       */
      Models::CancelCallResponse cancelCallWithOptions(const Models::CancelCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the two-way call that is initiated by calling the ClickToDial operation.
       *
       * @param request CancelCallRequest
       * @return CancelCallResponse
       */
      Models::CancelCallResponse cancelCall(const Models::CancelCallRequest &request);

      /**
       * @summary Cancels a robocall task that has not been started.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request CancelOrderRobotTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOrderRobotTaskResponse
       */
      Models::CancelOrderRobotTaskResponse cancelOrderRobotTaskWithOptions(const Models::CancelOrderRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a robocall task that has not been started.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request CancelOrderRobotTaskRequest
       * @return CancelOrderRobotTaskResponse
       */
      Models::CancelOrderRobotTaskResponse cancelOrderRobotTask(const Models::CancelOrderRobotTaskRequest &request);

      /**
       * @summary Terminates a robocall task.
       *
       * @description Only a task in progress can be terminated by calling the CancelRobotTask operation, and the task cannot be resumed after it is terminated.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request CancelRobotTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRobotTaskResponse
       */
      Models::CancelRobotTaskResponse cancelRobotTaskWithOptions(const Models::CancelRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminates a robocall task.
       *
       * @description Only a task in progress can be terminated by calling the CancelRobotTask operation, and the task cannot be resumed after it is terminated.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request CancelRobotTaskRequest
       * @return CancelRobotTaskResponse
       */
      Models::CancelRobotTaskResponse cancelRobotTask(const Models::CancelRobotTaskRequest &request);

      /**
       * @summary ChangeMediaType
       *
       * @param request ChangeMediaTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeMediaTypeResponse
       */
      Models::ChangeMediaTypeResponse changeMediaTypeWithOptions(const Models::ChangeMediaTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ChangeMediaType
       *
       * @param request ChangeMediaTypeRequest
       * @return ChangeMediaTypeResponse
       */
      Models::ChangeMediaTypeResponse changeMediaType(const Models::ChangeMediaTypeRequest &request);

      /**
       * @summary Publish the agent online through this interface.
       *
       * @param request CloudAgentLoginRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudAgentLoginResponse
       */
      Models::CloudAgentLoginResponse cloudAgentLoginWithOptions(const Models::CloudAgentLoginRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publish the agent online through this interface.
       *
       * @param request CloudAgentLoginRequest
       * @return CloudAgentLoginResponse
       */
      Models::CloudAgentLoginResponse cloudAgentLogin(const Models::CloudAgentLoginRequest &request);

      /**
       * @summary Unpublish an agent.
       *
       * @param request CloudAgentLogoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudAgentLogoutResponse
       */
      Models::CloudAgentLogoutResponse cloudAgentLogoutWithOptions(const Models::CloudAgentLogoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unpublish an agent.
       *
       * @param request CloudAgentLogoutRequest
       * @return CloudAgentLogoutResponse
       */
      Models::CloudAgentLogoutResponse cloudAgentLogout(const Models::CloudAgentLogoutRequest &request);

      /**
       * @summary 座席实时统计
       *
       * @param request CloudAgentMonitorStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudAgentMonitorStatisticsResponse
       */
      Models::CloudAgentMonitorStatisticsResponse cloudAgentMonitorStatisticsWithOptions(const Models::CloudAgentMonitorStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 座席实时统计
       *
       * @param request CloudAgentMonitorStatisticsRequest
       * @return CloudAgentMonitorStatisticsResponse
       */
      Models::CloudAgentMonitorStatisticsResponse cloudAgentMonitorStatistics(const Models::CloudAgentMonitorStatisticsRequest &request);

      /**
       * @summary Use this interface to set agent associated data.
       *
       * @param request CloudAgentSetUserDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudAgentSetUserDataResponse
       */
      Models::CloudAgentSetUserDataResponse cloudAgentSetUserDataWithOptions(const Models::CloudAgentSetUserDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Use this interface to set agent associated data.
       *
       * @param request CloudAgentSetUserDataRequest
       * @return CloudAgentSetUserDataResponse
       */
      Models::CloudAgentSetUserDataResponse cloudAgentSetUserData(const Models::CloudAgentSetUserDataRequest &request);

      /**
       * @summary The agent hangs up.
       *
       * @param request CloudAgentUnlinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudAgentUnlinkResponse
       */
      Models::CloudAgentUnlinkResponse cloudAgentUnlinkWithOptions(const Models::CloudAgentUnlinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The agent hangs up.
       *
       * @param request CloudAgentUnlinkRequest
       * @return CloudAgentUnlinkResponse
       */
      Models::CloudAgentUnlinkResponse cloudAgentUnlink(const Models::CloudAgentUnlinkRequest &request);

      /**
       * @summary 获取座席工作量报表数据
       *
       * @param request CloudAgentWorkloadReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudAgentWorkloadReportResponse
       */
      Models::CloudAgentWorkloadReportResponse cloudAgentWorkloadReportWithOptions(const Models::CloudAgentWorkloadReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取座席工作量报表数据
       *
       * @param request CloudAgentWorkloadReportRequest
       * @return CloudAgentWorkloadReportResponse
       */
      Models::CloudAgentWorkloadReportResponse cloudAgentWorkloadReport(const Models::CloudAgentWorkloadReportRequest &request);

      /**
       * @summary Assigns an agent to an outbound group.
       *
       * @param request CloudAssignAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudAssignAgentGroupResponse
       */
      Models::CloudAssignAgentGroupResponse cloudAssignAgentGroupWithOptions(const Models::CloudAssignAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns an agent to an outbound group.
       *
       * @param request CloudAssignAgentGroupRequest
       * @return CloudAssignAgentGroupResponse
       */
      Models::CloudAssignAgentGroupResponse cloudAssignAgentGroup(const Models::CloudAssignAgentGroupRequest &request);

      /**
       * @summary 批量新增座席,单次批量创建不能超过100个
       *
       * @param request CloudBatchCreateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudBatchCreateAgentResponse
       */
      Models::CloudBatchCreateAgentResponse cloudBatchCreateAgentWithOptions(const Models::CloudBatchCreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量新增座席,单次批量创建不能超过100个
       *
       * @param request CloudBatchCreateAgentRequest
       * @return CloudBatchCreateAgentResponse
       */
      Models::CloudBatchCreateAgentResponse cloudBatchCreateAgent(const Models::CloudBatchCreateAgentRequest &request);

      /**
       * @summary Obtains the real-time status of agents in batches based on their job numbers.
       *
       * @param request CloudBatchGetAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudBatchGetAgentStatusResponse
       */
      Models::CloudBatchGetAgentStatusResponse cloudBatchGetAgentStatusWithOptions(const Models::CloudBatchGetAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the real-time status of agents in batches based on their job numbers.
       *
       * @param request CloudBatchGetAgentStatusRequest
       * @return CloudBatchGetAgentStatusResponse
       */
      Models::CloudBatchGetAgentStatusResponse cloudBatchGetAgentStatus(const Models::CloudBatchGetAgentStatusRequest &request);

      /**
       * @summary 批量更新座席基本信息，不包含座席绑定的技能信息的更新
       *
       * @param request CloudBatchUpdateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudBatchUpdateAgentResponse
       */
      Models::CloudBatchUpdateAgentResponse cloudBatchUpdateAgentWithOptions(const Models::CloudBatchUpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量更新座席基本信息，不包含座席绑定的技能信息的更新
       *
       * @param request CloudBatchUpdateAgentRequest
       * @return CloudBatchUpdateAgentResponse
       */
      Models::CloudBatchUpdateAgentResponse cloudBatchUpdateAgent(const Models::CloudBatchUpdateAgentRequest &request);

      /**
       * @summary 座席新增
       *
       * @param request CloudCreateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudCreateAgentResponse
       */
      Models::CloudCreateAgentResponse cloudCreateAgentWithOptions(const Models::CloudCreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 座席新增
       *
       * @param request CloudCreateAgentRequest
       * @return CloudCreateAgentResponse
       */
      Models::CloudCreateAgentResponse cloudCreateAgent(const Models::CloudCreateAgentRequest &request);

      /**
       * @summary Call this operation to add an outbound group.
       *
       * @param request CloudCreateAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudCreateAgentGroupResponse
       */
      Models::CloudCreateAgentGroupResponse cloudCreateAgentGroupWithOptions(const Models::CloudCreateAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call this operation to add an outbound group.
       *
       * @param request CloudCreateAgentGroupRequest
       * @return CloudCreateAgentGroupResponse
       */
      Models::CloudCreateAgentGroupResponse cloudCreateAgentGroup(const Models::CloudCreateAgentGroupRequest &request);

      /**
       * @summary Upload a recording file and create an ASR transform job.
       *
       * @param request CloudCreateAsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudCreateAsrResponse
       */
      Models::CloudCreateAsrResponse cloudCreateAsrWithOptions(const Models::CloudCreateAsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upload a recording file and create an ASR transform job.
       *
       * @param request CloudCreateAsrRequest
       * @return CloudCreateAsrResponse
       */
      Models::CloudCreateAsrResponse cloudCreateAsr(const Models::CloudCreateAsrRequest &request);

      /**
       * @summary 新增时间条件设置
       *
       * @param request CloudCreateEnterpriseTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudCreateEnterpriseTimeResponse
       */
      Models::CloudCreateEnterpriseTimeResponse cloudCreateEnterpriseTimeWithOptions(const Models::CloudCreateEnterpriseTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增时间条件设置
       *
       * @param request CloudCreateEnterpriseTimeRequest
       * @return CloudCreateEnterpriseTimeResponse
       */
      Models::CloudCreateEnterpriseTimeResponse cloudCreateEnterpriseTime(const Models::CloudCreateEnterpriseTimeRequest &request);

      /**
       * @summary 新增分机
       *
       * @param request CloudCreateExtenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudCreateExtenResponse
       */
      Models::CloudCreateExtenResponse cloudCreateExtenWithOptions(const Models::CloudCreateExtenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增分机
       *
       * @param request CloudCreateExtenRequest
       * @return CloudCreateExtenResponse
       */
      Models::CloudCreateExtenResponse cloudCreateExten(const Models::CloudCreateExtenRequest &request);

      /**
       * @summary 新增队列
       *
       * @param tmpReq CloudCreateQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudCreateQueueResponse
       */
      Models::CloudCreateQueueResponse cloudCreateQueueWithOptions(const Models::CloudCreateQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增队列
       *
       * @param request CloudCreateQueueRequest
       * @return CloudCreateQueueResponse
       */
      Models::CloudCreateQueueResponse cloudCreateQueue(const Models::CloudCreateQueueRequest &request);

      /**
       * @summary Add skills to a queue.
       *
       * @param request CloudCreateQueueSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudCreateQueueSkillResponse
       */
      Models::CloudCreateQueueSkillResponse cloudCreateQueueSkillWithOptions(const Models::CloudCreateQueueSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add skills to a queue.
       *
       * @param request CloudCreateQueueSkillRequest
       * @return CloudCreateQueueSkillResponse
       */
      Models::CloudCreateQueueSkillResponse cloudCreateQueueSkill(const Models::CloudCreateQueueSkillRequest &request);

      /**
       * @summary Adds a skill by calling this interface.
       *
       * @param request CloudCreateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudCreateSkillResponse
       */
      Models::CloudCreateSkillResponse cloudCreateSkillWithOptions(const Models::CloudCreateSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a skill by calling this interface.
       *
       * @param request CloudCreateSkillRequest
       * @return CloudCreateSkillResponse
       */
      Models::CloudCreateSkillResponse cloudCreateSkill(const Models::CloudCreateSkillRequest &request);

      /**
       * @summary 新增任务
       *
       * @param request CloudCreateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudCreateTaskResponse
       */
      Models::CloudCreateTaskResponse cloudCreateTaskWithOptions(const Models::CloudCreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增任务
       *
       * @param request CloudCreateTaskRequest
       * @return CloudCreateTaskResponse
       */
      Models::CloudCreateTaskResponse cloudCreateTask(const Models::CloudCreateTaskRequest &request);

      /**
       * @summary Delete an agent based on the agent number.
       *
       * @param request CloudDeleteAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteAgentResponse
       */
      Models::CloudDeleteAgentResponse cloudDeleteAgentWithOptions(const Models::CloudDeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete an agent based on the agent number.
       *
       * @param request CloudDeleteAgentRequest
       * @return CloudDeleteAgentResponse
       */
      Models::CloudDeleteAgentResponse cloudDeleteAgent(const Models::CloudDeleteAgentRequest &request);

      /**
       * @summary Delete an outbound call group.
       *
       * @param request CloudDeleteAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteAgentGroupResponse
       */
      Models::CloudDeleteAgentGroupResponse cloudDeleteAgentGroupWithOptions(const Models::CloudDeleteAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete an outbound call group.
       *
       * @param request CloudDeleteAgentGroupRequest
       * @return CloudDeleteAgentGroupResponse
       */
      Models::CloudDeleteAgentGroupResponse cloudDeleteAgentGroup(const Models::CloudDeleteAgentGroupRequest &request);

      /**
       * @summary Delete the phone under the agent.
       *
       * @param request CloudDeleteAgentTelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteAgentTelResponse
       */
      Models::CloudDeleteAgentTelResponse cloudDeleteAgentTelWithOptions(const Models::CloudDeleteAgentTelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the phone under the agent.
       *
       * @param request CloudDeleteAgentTelRequest
       * @return CloudDeleteAgentTelResponse
       */
      Models::CloudDeleteAgentTelResponse cloudDeleteAgentTel(const Models::CloudDeleteAgentTelRequest &request);

      /**
       * @summary Delete a time condition setting.
       *
       * @param request CloudDeleteEnterpriseTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteEnterpriseTimeResponse
       */
      Models::CloudDeleteEnterpriseTimeResponse cloudDeleteEnterpriseTimeWithOptions(const Models::CloudDeleteEnterpriseTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a time condition setting.
       *
       * @param request CloudDeleteEnterpriseTimeRequest
       * @return CloudDeleteEnterpriseTimeResponse
       */
      Models::CloudDeleteEnterpriseTimeResponse cloudDeleteEnterpriseTime(const Models::CloudDeleteEnterpriseTimeRequest &request);

      /**
       * @summary Deletes an extension based on the extension number.
       *
       * @param request CloudDeleteExtenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteExtenResponse
       */
      Models::CloudDeleteExtenResponse cloudDeleteExtenWithOptions(const Models::CloudDeleteExtenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an extension based on the extension number.
       *
       * @param request CloudDeleteExtenRequest
       * @return CloudDeleteExtenResponse
       */
      Models::CloudDeleteExtenResponse cloudDeleteExten(const Models::CloudDeleteExtenRequest &request);

      /**
       * @summary Delete a queue.
       *
       * @param request CloudDeleteQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteQueueResponse
       */
      Models::CloudDeleteQueueResponse cloudDeleteQueueWithOptions(const Models::CloudDeleteQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a queue.
       *
       * @param request CloudDeleteQueueRequest
       * @return CloudDeleteQueueResponse
       */
      Models::CloudDeleteQueueResponse cloudDeleteQueue(const Models::CloudDeleteQueueRequest &request);

      /**
       * @summary Queue delete skills.
       *
       * @param request CloudDeleteQueueSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteQueueSkillResponse
       */
      Models::CloudDeleteQueueSkillResponse cloudDeleteQueueSkillWithOptions(const Models::CloudDeleteQueueSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queue delete skills.
       *
       * @param request CloudDeleteQueueSkillRequest
       * @return CloudDeleteQueueSkillResponse
       */
      Models::CloudDeleteQueueSkillResponse cloudDeleteQueueSkill(const Models::CloudDeleteQueueSkillRequest &request);

      /**
       * @summary Deletes a skill.
       *
       * @param request CloudDeleteSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteSkillResponse
       */
      Models::CloudDeleteSkillResponse cloudDeleteSkillWithOptions(const Models::CloudDeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a skill.
       *
       * @param request CloudDeleteSkillRequest
       * @return CloudDeleteSkillResponse
       */
      Models::CloudDeleteSkillResponse cloudDeleteSkill(const Models::CloudDeleteSkillRequest &request);

      /**
       * @summary Supports deleting predictive outbound call and automatic outbound call jobs. Only jobs in the initial or completed status can be deleted. When a job is deleted, the associated numbers are also deleted.
       *
       * @param request CloudDeleteTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteTaskResponse
       */
      Models::CloudDeleteTaskResponse cloudDeleteTaskWithOptions(const Models::CloudDeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Supports deleting predictive outbound call and automatic outbound call jobs. Only jobs in the initial or completed status can be deleted. When a job is deleted, the associated numbers are also deleted.
       *
       * @param request CloudDeleteTaskRequest
       * @return CloudDeleteTaskResponse
       */
      Models::CloudDeleteTaskResponse cloudDeleteTask(const Models::CloudDeleteTaskRequest &request);

      /**
       * @summary Deletes the number of a call job through this interface.
       *
       * @param request CloudDeleteTaskTelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudDeleteTaskTelResponse
       */
      Models::CloudDeleteTaskTelResponse cloudDeleteTaskTelWithOptions(const Models::CloudDeleteTaskTelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the number of a call job through this interface.
       *
       * @param request CloudDeleteTaskTelRequest
       * @return CloudDeleteTaskTelResponse
       */
      Models::CloudDeleteTaskTelResponse cloudDeleteTaskTel(const Models::CloudDeleteTaskTelRequest &request);

      /**
       * @summary 座席详细信息获取
       *
       * @param request CloudGetAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudGetAgentResponse
       */
      Models::CloudGetAgentResponse cloudGetAgentWithOptions(const Models::CloudGetAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 座席详细信息获取
       *
       * @param request CloudGetAgentRequest
       * @return CloudGetAgentResponse
       */
      Models::CloudGetAgentResponse cloudGetAgent(const Models::CloudGetAgentRequest &request);

      /**
       * @summary Obtains the real-time status info of agents.
       *
       * @param request CloudGetAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudGetAgentStatusResponse
       */
      Models::CloudGetAgentStatusResponse cloudGetAgentStatusWithOptions(const Models::CloudGetAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the real-time status info of agents.
       *
       * @param request CloudGetAgentStatusRequest
       * @return CloudGetAgentStatusResponse
       */
      Models::CloudGetAgentStatusResponse cloudGetAgentStatus(const Models::CloudGetAgentStatusRequest &request);

      /**
       * @summary Query phone number attribution.
       *
       * @param request CloudGetAreaCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudGetAreaCodeResponse
       */
      Models::CloudGetAreaCodeResponse cloudGetAreaCodeWithOptions(const Models::CloudGetAreaCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query phone number attribution.
       *
       * @param request CloudGetAreaCodeRequest
       * @return CloudGetAreaCodeResponse
       */
      Models::CloudGetAreaCodeResponse cloudGetAreaCode(const Models::CloudGetAreaCodeRequest &request);

      /**
       * @summary ASR数据获取
       *
       * @param request CloudGetAsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudGetAsrResponse
       */
      Models::CloudGetAsrResponse cloudGetAsrWithOptions(const Models::CloudGetAsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ASR数据获取
       *
       * @param request CloudGetAsrRequest
       * @return CloudGetAsrResponse
       */
      Models::CloudGetAsrResponse cloudGetAsr(const Models::CloudGetAsrRequest &request);

      /**
       * @summary Queries the info about a specified extension.
       *
       * @param request CloudGetExtenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudGetExtenResponse
       */
      Models::CloudGetExtenResponse cloudGetExtenWithOptions(const Models::CloudGetExtenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the info about a specified extension.
       *
       * @param request CloudGetExtenRequest
       * @return CloudGetExtenResponse
       */
      Models::CloudGetExtenResponse cloudGetExten(const Models::CloudGetExtenRequest &request);

      /**
       * @summary 获取座席外呼通话记录详情
       *
       * @param request CloudGetObCdrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudGetObCdrResponse
       */
      Models::CloudGetObCdrResponse cloudGetObCdrWithOptions(const Models::CloudGetObCdrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取座席外呼通话记录详情
       *
       * @param request CloudGetObCdrRequest
       * @return CloudGetObCdrResponse
       */
      Models::CloudGetObCdrResponse cloudGetObCdr(const Models::CloudGetObCdrRequest &request);

      /**
       * @summary 获取队列信息
       *
       * @param request CloudGetQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudGetQueueResponse
       */
      Models::CloudGetQueueResponse cloudGetQueueWithOptions(const Models::CloudGetQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取队列信息
       *
       * @param request CloudGetQueueRequest
       * @return CloudGetQueueResponse
       */
      Models::CloudGetQueueResponse cloudGetQueue(const Models::CloudGetQueueRequest &request);

      /**
       * @summary 获取通话录音地址
       *
       * @param request CloudGetRecordUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudGetRecordUrlResponse
       */
      Models::CloudGetRecordUrlResponse cloudGetRecordUrlWithOptions(const Models::CloudGetRecordUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取通话录音地址
       *
       * @param request CloudGetRecordUrlRequest
       * @return CloudGetRecordUrlResponse
       */
      Models::CloudGetRecordUrlResponse cloudGetRecordUrl(const Models::CloudGetRecordUrlRequest &request);

      /**
       * @summary 获取任务信息
       *
       * @param request CloudGetTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudGetTaskResponse
       */
      Models::CloudGetTaskResponse cloudGetTaskWithOptions(const Models::CloudGetTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务信息
       *
       * @param request CloudGetTaskRequest
       * @return CloudGetTaskResponse
       */
      Models::CloudGetTaskResponse cloudGetTask(const Models::CloudGetTaskRequest &request);

      /**
       * @summary 任务号码导入
       *
       * @param tmpReq CloudImportTaskTelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudImportTaskTelResponse
       */
      Models::CloudImportTaskTelResponse cloudImportTaskTelWithOptions(const Models::CloudImportTaskTelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务号码导入
       *
       * @param request CloudImportTaskTelRequest
       * @return CloudImportTaskTelResponse
       */
      Models::CloudImportTaskTelResponse cloudImportTaskTel(const Models::CloudImportTaskTelRequest &request);

      /**
       * @summary If the current call is at an await edge zone in voice navigation, this interface can interrupt the wait and execute to the next hop.
       *
       * @param request CloudInterruptIvrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudInterruptIvrResponse
       */
      Models::CloudInterruptIvrResponse cloudInterruptIvrWithOptions(const Models::CloudInterruptIvrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If the current call is at an await edge zone in voice navigation, this interface can interrupt the wait and execute to the next hop.
       *
       * @param request CloudInterruptIvrRequest
       * @return CloudInterruptIvrResponse
       */
      Models::CloudInterruptIvrResponse cloudInterruptIvr(const Models::CloudInterruptIvrRequest &request);

      /**
       * @summary You can call this operation to query outbound groups.
       *
       * @param request CloudListAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListAgentGroupResponse
       */
      Models::CloudListAgentGroupResponse cloudListAgentGroupWithOptions(const Models::CloudListAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query outbound groups.
       *
       * @param request CloudListAgentGroupRequest
       * @return CloudListAgentGroupResponse
       */
      Models::CloudListAgentGroupResponse cloudListAgentGroup(const Models::CloudListAgentGroupRequest &request);

      /**
       * @summary Obtain agent phone info by agent number.
       *
       * @param request CloudListAgentTelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListAgentTelResponse
       */
      Models::CloudListAgentTelResponse cloudListAgentTelWithOptions(const Models::CloudListAgentTelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain agent phone info by agent number.
       *
       * @param request CloudListAgentTelRequest
       * @return CloudListAgentTelResponse
       */
      Models::CloudListAgentTelResponse cloudListAgentTel(const Models::CloudListAgentTelRequest &request);

      /**
       * @summary You can call this operation to query the list of agents in an outbound group.
       *
       * @param request CloudListAssignedAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListAssignedAgentGroupResponse
       */
      Models::CloudListAssignedAgentGroupResponse cloudListAssignedAgentGroupWithOptions(const Models::CloudListAssignedAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query the list of agents in an outbound group.
       *
       * @param request CloudListAssignedAgentGroupRequest
       * @return CloudListAssignedAgentGroupResponse
       */
      Models::CloudListAssignedAgentGroupResponse cloudListAssignedAgentGroup(const Models::CloudListAssignedAgentGroupRequest &request);

      /**
       * @summary 推送日志查询
       *
       * @param request CloudListCurlLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListCurlLogResponse
       */
      Models::CloudListCurlLogResponse cloudListCurlLogWithOptions(const Models::CloudListCurlLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 推送日志查询
       *
       * @param request CloudListCurlLogRequest
       * @return CloudListCurlLogResponse
       */
      Models::CloudListCurlLogResponse cloudListCurlLog(const Models::CloudListCurlLogRequest &request);

      /**
       * @summary 获取时间条件设置列表
       *
       * @param request CloudListEnterpriseTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListEnterpriseTimeResponse
       */
      Models::CloudListEnterpriseTimeResponse cloudListEnterpriseTimeWithOptions(const Models::CloudListEnterpriseTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取时间条件设置列表
       *
       * @param request CloudListEnterpriseTimeRequest
       * @return CloudListEnterpriseTimeResponse
       */
      Models::CloudListEnterpriseTimeResponse cloudListEnterpriseTime(const Models::CloudListEnterpriseTimeRequest &request);

      /**
       * @summary 获取分机列表
       *
       * @param request CloudListExtenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListExtenResponse
       */
      Models::CloudListExtenResponse cloudListExtenWithOptions(const Models::CloudListExtenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取分机列表
       *
       * @param request CloudListExtenRequest
       * @return CloudListExtenResponse
       */
      Models::CloudListExtenResponse cloudListExten(const Models::CloudListExtenRequest &request);

      /**
       * @summary Queries the list of online agents.
       *
       * @param request CloudListFreeAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListFreeAgentResponse
       */
      Models::CloudListFreeAgentResponse cloudListFreeAgentWithOptions(const Models::CloudListFreeAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of online agents.
       *
       * @param request CloudListFreeAgentRequest
       * @return CloudListFreeAgentResponse
       */
      Models::CloudListFreeAgentResponse cloudListFreeAgent(const Models::CloudListFreeAgentRequest &request);

      /**
       * @summary 在线座席信息
       *
       * @param request CloudListOnlineAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListOnlineAgentResponse
       */
      Models::CloudListOnlineAgentResponse cloudListOnlineAgentWithOptions(const Models::CloudListOnlineAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在线座席信息
       *
       * @param request CloudListOnlineAgentRequest
       * @return CloudListOnlineAgentResponse
       */
      Models::CloudListOnlineAgentResponse cloudListOnlineAgent(const Models::CloudListOnlineAgentRequest &request);

      /**
       * @summary 获取队列列表
       *
       * @param request CloudListQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListQueueResponse
       */
      Models::CloudListQueueResponse cloudListQueueWithOptions(const Models::CloudListQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取队列列表
       *
       * @param request CloudListQueueRequest
       * @return CloudListQueueResponse
       */
      Models::CloudListQueueResponse cloudListQueue(const Models::CloudListQueueRequest &request);

      /**
       * @summary Obtains queue skill info.
       *
       * @param request CloudListQueueSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListQueueSkillResponse
       */
      Models::CloudListQueueSkillResponse cloudListQueueSkillWithOptions(const Models::CloudListQueueSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains queue skill info.
       *
       * @param request CloudListQueueSkillRequest
       * @return CloudListQueueSkillResponse
       */
      Models::CloudListQueueSkillResponse cloudListQueueSkill(const Models::CloudListQueueSkillRequest &request);

      /**
       * @summary Queries the skill info list.
       *
       * @param request CloudListSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListSkillResponse
       */
      Models::CloudListSkillResponse cloudListSkillWithOptions(const Models::CloudListSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the skill info list.
       *
       * @param request CloudListSkillRequest
       * @return CloudListSkillResponse
       */
      Models::CloudListSkillResponse cloudListSkill(const Models::CloudListSkillRequest &request);

      /**
       * @summary Query the call job batch list info.
       *
       * @param request CloudListTaskFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudListTaskFileResponse
       */
      Models::CloudListTaskFileResponse cloudListTaskFileWithOptions(const Models::CloudListTaskFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the call job batch list info.
       *
       * @param request CloudListTaskFileRequest
       * @return CloudListTaskFileResponse
       */
      Models::CloudListTaskFileResponse cloudListTaskFile(const Models::CloudListTaskFileRequest &request);

      /**
       * @summary 任务监控
       *
       * @param request CloudMonitorTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudMonitorTaskResponse
       */
      Models::CloudMonitorTaskResponse cloudMonitorTaskWithOptions(const Models::CloudMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务监控
       *
       * @param request CloudMonitorTaskRequest
       * @return CloudMonitorTaskResponse
       */
      Models::CloudMonitorTaskResponse cloudMonitorTask(const Models::CloudMonitorTaskRequest &request);

      /**
       * @summary 获取预览外呼主叫号码报表
       *
       * @param request CloudOutboundObClidReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudOutboundObClidReportResponse
       */
      Models::CloudOutboundObClidReportResponse cloudOutboundObClidReportWithOptions(const Models::CloudOutboundObClidReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预览外呼主叫号码报表
       *
       * @param request CloudOutboundObClidReportRequest
       * @return CloudOutboundObClidReportResponse
       */
      Models::CloudOutboundObClidReportResponse cloudOutboundObClidReport(const Models::CloudOutboundObClidReportRequest &request);

      /**
       * @summary 获取预览外呼报表
       *
       * @param request CloudOutboundPreviewObReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudOutboundPreviewObReportResponse
       */
      Models::CloudOutboundPreviewObReportResponse cloudOutboundPreviewObReportWithOptions(const Models::CloudOutboundPreviewObReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取预览外呼报表
       *
       * @param request CloudOutboundPreviewObReportRequest
       * @return CloudOutboundPreviewObReportResponse
       */
      Models::CloudOutboundPreviewObReportResponse cloudOutboundPreviewObReport(const Models::CloudOutboundPreviewObReportRequest &request);

      /**
       * @summary Suspends a call job through this interface.
       *
       * @param request CloudPauseTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudPauseTaskResponse
       */
      Models::CloudPauseTaskResponse cloudPauseTaskWithOptions(const Models::CloudPauseTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Suspends a call job through this interface.
       *
       * @param request CloudPauseTaskRequest
       * @return CloudPauseTaskResponse
       */
      Models::CloudPauseTaskResponse cloudPauseTask(const Models::CloudPauseTaskRequest &request);

      /**
       * @summary 座席外呼
       *
       * @param request CloudPreviewoutcallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudPreviewoutcallResponse
       */
      Models::CloudPreviewoutcallResponse cloudPreviewoutcallWithOptions(const Models::CloudPreviewoutcallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 座席外呼
       *
       * @param request CloudPreviewoutcallRequest
       * @return CloudPreviewoutcallResponse
       */
      Models::CloudPreviewoutcallResponse cloudPreviewoutcall(const Models::CloudPreviewoutcallRequest &request);

      /**
       * @summary 座席详细信息列表获取
       *
       * @param request CloudQueryAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryAgentResponse
       */
      Models::CloudQueryAgentResponse cloudQueryAgentWithOptions(const Models::CloudQueryAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 座席详细信息列表获取
       *
       * @param request CloudQueryAgentRequest
       * @return CloudQueryAgentResponse
       */
      Models::CloudQueryAgentResponse cloudQueryAgent(const Models::CloudQueryAgentRequest &request);

      /**
       * @summary Get all agent numbers and parameter messages.
       *
       * @param request CloudQueryAgentCnoAndNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryAgentCnoAndNameResponse
       */
      Models::CloudQueryAgentCnoAndNameResponse cloudQueryAgentCnoAndNameWithOptions(const Models::CloudQueryAgentCnoAndNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get all agent numbers and parameter messages.
       *
       * @param request CloudQueryAgentCnoAndNameRequest
       * @return CloudQueryAgentCnoAndNameResponse
       */
      Models::CloudQueryAgentCnoAndNameResponse cloudQueryAgentCnoAndName(const Models::CloudQueryAgentCnoAndNameRequest &request);

      /**
       * @summary Queries the info about the outbound group to which the agent belongs.
       *
       * @param request CloudQueryAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryAgentGroupResponse
       */
      Models::CloudQueryAgentGroupResponse cloudQueryAgentGroupWithOptions(const Models::CloudQueryAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the info about the outbound group to which the agent belongs.
       *
       * @param request CloudQueryAgentGroupRequest
       * @return CloudQueryAgentGroupResponse
       */
      Models::CloudQueryAgentGroupResponse cloudQueryAgentGroup(const Models::CloudQueryAgentGroupRequest &request);

      /**
       * @summary Query agent skills by agent number.
       *
       * @param request CloudQueryAgentSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryAgentSkillResponse
       */
      Models::CloudQueryAgentSkillResponse cloudQueryAgentSkillWithOptions(const Models::CloudQueryAgentSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query agent skills by agent number.
       *
       * @param request CloudQueryAgentSkillRequest
       * @return CloudQueryAgentSkillResponse
       */
      Models::CloudQueryAgentSkillResponse cloudQueryAgentSkill(const Models::CloudQueryAgentSkillRequest &request);

      /**
       * @summary 来电通话记录
       *
       * @param request CloudQueryIbCdrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryIbCdrResponse
       */
      Models::CloudQueryIbCdrResponse cloudQueryIbCdrWithOptions(const Models::CloudQueryIbCdrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 来电通话记录
       *
       * @param request CloudQueryIbCdrRequest
       * @return CloudQueryIbCdrResponse
       */
      Models::CloudQueryIbCdrResponse cloudQueryIbCdr(const Models::CloudQueryIbCdrRequest &request);

      /**
       * @summary 获取座席外呼通话记录
       *
       * @param request CloudQueryObCdrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryObCdrResponse
       */
      Models::CloudQueryObCdrResponse cloudQueryObCdrWithOptions(const Models::CloudQueryObCdrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取座席外呼通话记录
       *
       * @param request CloudQueryObCdrRequest
       * @return CloudQueryObCdrResponse
       */
      Models::CloudQueryObCdrResponse cloudQueryObCdr(const Models::CloudQueryObCdrRequest &request);

      /**
       * @summary 预测式外呼通话记录
       *
       * @param request CloudQueryPredictiveCallCdrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryPredictiveCallCdrResponse
       */
      Models::CloudQueryPredictiveCallCdrResponse cloudQueryPredictiveCallCdrWithOptions(const Models::CloudQueryPredictiveCallCdrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预测式外呼通话记录
       *
       * @param request CloudQueryPredictiveCallCdrRequest
       * @return CloudQueryPredictiveCallCdrResponse
       */
      Models::CloudQueryPredictiveCallCdrResponse cloudQueryPredictiveCallCdr(const Models::CloudQueryPredictiveCallCdrRequest &request);

      /**
       * @summary Obtain the rasr info based on the uniqueId.
       *
       * @param request CloudQueryRasrEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryRasrEventResponse
       */
      Models::CloudQueryRasrEventResponse cloudQueryRasrEventWithOptions(const Models::CloudQueryRasrEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the rasr info based on the uniqueId.
       *
       * @param request CloudQueryRasrEventRequest
       * @return CloudQueryRasrEventResponse
       */
      Models::CloudQueryRasrEventResponse cloudQueryRasrEvent(const Models::CloudQueryRasrEventRequest &request);

      /**
       * @summary 获取任务列表
       *
       * @param request CloudQueryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryTaskResponse
       */
      Models::CloudQueryTaskResponse cloudQueryTaskWithOptions(const Models::CloudQueryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务列表
       *
       * @param request CloudQueryTaskRequest
       * @return CloudQueryTaskResponse
       */
      Models::CloudQueryTaskResponse cloudQueryTask(const Models::CloudQueryTaskRequest &request);

      /**
       * @summary webcall通话记录
       *
       * @param request CloudQueryWebcallCdrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudQueryWebcallCdrResponse
       */
      Models::CloudQueryWebcallCdrResponse cloudQueryWebcallCdrWithOptions(const Models::CloudQueryWebcallCdrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary webcall通话记录
       *
       * @param request CloudQueryWebcallCdrRequest
       * @return CloudQueryWebcallCdrResponse
       */
      Models::CloudQueryWebcallCdrResponse cloudQueryWebcallCdr(const Models::CloudQueryWebcallCdrRequest &request);

      /**
       * @summary 任务启动
       *
       * @param request CloudStartTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudStartTaskResponse
       */
      Models::CloudStartTaskResponse cloudStartTaskWithOptions(const Models::CloudStartTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 任务启动
       *
       * @param request CloudStartTaskRequest
       * @return CloudStartTaskResponse
       */
      Models::CloudStartTaskResponse cloudStartTask(const Models::CloudStartTaskRequest &request);

      /**
       * @summary Purges the attachment between an outbound call group and agents.
       *
       * @param request CloudUnassignAgentGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudUnassignAgentGroupResponse
       */
      Models::CloudUnassignAgentGroupResponse cloudUnassignAgentGroupWithOptions(const Models::CloudUnassignAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purges the attachment between an outbound call group and agents.
       *
       * @param request CloudUnassignAgentGroupRequest
       * @return CloudUnassignAgentGroupResponse
       */
      Models::CloudUnassignAgentGroupResponse cloudUnassignAgentGroup(const Models::CloudUnassignAgentGroupRequest &request);

      /**
       * @summary 座席更新
       *
       * @param request CloudUpdateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudUpdateAgentResponse
       */
      Models::CloudUpdateAgentResponse cloudUpdateAgentWithOptions(const Models::CloudUpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 座席更新
       *
       * @param request CloudUpdateAgentRequest
       * @return CloudUpdateAgentResponse
       */
      Models::CloudUpdateAgentResponse cloudUpdateAgent(const Models::CloudUpdateAgentRequest &request);

      /**
       * @summary 更新任务
       *
       * @param request CloudUpdateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudUpdateTaskResponse
       */
      Models::CloudUpdateTaskResponse cloudUpdateTaskWithOptions(const Models::CloudUpdateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新任务
       *
       * @param request CloudUpdateTaskRequest
       * @return CloudUpdateTaskResponse
       */
      Models::CloudUpdateTaskResponse cloudUpdateTask(const Models::CloudUpdateTaskRequest &request);

      /**
       * @summary webcall
       *
       * @param request CloudWebcallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloudWebcallResponse
       */
      Models::CloudWebcallResponse cloudWebcallWithOptions(const Models::CloudWebcallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary webcall
       *
       * @param request CloudWebcallRequest
       * @return CloudWebcallResponse
       */
      Models::CloudWebcallResponse cloudWebcall(const Models::CloudWebcallRequest &request);

      /**
       * @summary Uses a service instance to create a text-to-speech (TTS) task, a voice notification task, or a voice verification code task for multiple called numbers.
       *
       * @description You can create up to 1,000 voice notifications for each task.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request CreateCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCallTaskResponse
       */
      Models::CreateCallTaskResponse createCallTaskWithOptions(const Models::CreateCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses a service instance to create a text-to-speech (TTS) task, a voice notification task, or a voice verification code task for multiple called numbers.
       *
       * @description You can create up to 1,000 voice notifications for each task.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request CreateCallTaskRequest
       * @return CreateCallTaskResponse
       */
      Models::CreateCallTaskResponse createCallTask(const Models::CreateCallTaskRequest &request);

      /**
       * @summary Initiates an outbound robocall task.
       *
       * @description You can call this operation to initiate an outbound robocall task by using the robot communication scripts preset in the Voice Messaging Service console. In an intelligent speech interaction task, you can use the robot communication scripts preset in the Voice Messaging Service console, or invoke the callback function to return the response mode configured by the business party in each call.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request CreateRobotTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRobotTaskResponse
       */
      Models::CreateRobotTaskResponse createRobotTaskWithOptions(const Models::CreateRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an outbound robocall task.
       *
       * @description You can call this operation to initiate an outbound robocall task by using the robot communication scripts preset in the Voice Messaging Service console. In an intelligent speech interaction task, you can use the robot communication scripts preset in the Voice Messaging Service console, or invoke the callback function to return the response mode configured by the business party in each call.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request CreateRobotTaskRequest
       * @return CreateRobotTaskResponse
       */
      Models::CreateRobotTaskResponse createRobotTask(const Models::CreateRobotTaskRequest &request);

      /**
       * @summary Downgrades from a video call to a voice call.
       *
       * @param request DegradeVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DegradeVideoFileResponse
       */
      Models::DegradeVideoFileResponse degradeVideoFileWithOptions(const Models::DegradeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Downgrades from a video call to a voice call.
       *
       * @param request DegradeVideoFileRequest
       * @return DegradeVideoFileResponse
       */
      Models::DegradeVideoFileResponse degradeVideoFile(const Models::DegradeVideoFileRequest &request);

      /**
       * @summary Deletes a robocall task.
       *
       * @description You can call this operation to delete only tasks that are not started, that are completed, and that are terminated.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRobotTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRobotTaskResponse
       */
      Models::DeleteRobotTaskResponse deleteRobotTaskWithOptions(const Models::DeleteRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a robocall task.
       *
       * @description You can call this operation to delete only tasks that are not started, that are completed, and that are terminated.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRobotTaskRequest
       * @return DeleteRobotTaskResponse
       */
      Models::DeleteRobotTaskResponse deleteRobotTask(const Models::DeleteRobotTaskRequest &request);

      /**
       * @summary Executes a call task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request ExecuteCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteCallTaskResponse
       */
      Models::ExecuteCallTaskResponse executeCallTaskWithOptions(const Models::ExecuteCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Executes a call task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request ExecuteCallTaskRequest
       * @return ExecuteCallTaskResponse
       */
      Models::ExecuteCallTaskResponse executeCallTask(const Models::ExecuteCallTaskRequest &request);

      /**
       * @summary Obtains the call type during a call.
       *
       * @param request GetCallMediaTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallMediaTypeResponse
       */
      Models::GetCallMediaTypeResponse getCallMediaTypeWithOptions(const Models::GetCallMediaTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the call type during a call.
       *
       * @param request GetCallMediaTypeRequest
       * @return GetCallMediaTypeResponse
       */
      Models::GetCallMediaTypeResponse getCallMediaType(const Models::GetCallMediaTypeRequest &request);

      /**
       * @summary GetCallProgress
       *
       * @param request GetCallProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallProgressResponse
       */
      Models::GetCallProgressResponse getCallProgressWithOptions(const Models::GetCallProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetCallProgress
       *
       * @param request GetCallProgressRequest
       * @return GetCallProgressResponse
       */
      Models::GetCallProgressResponse getCallProgress(const Models::GetCallProgressRequest &request);

      /**
       * @summary Obtains the qualification ID based on the ID of a qualification application ticket.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request GetHotlineQualificationByOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineQualificationByOrderResponse
       */
      Models::GetHotlineQualificationByOrderResponse getHotlineQualificationByOrderWithOptions(const Models::GetHotlineQualificationByOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the qualification ID based on the ID of a qualification application ticket.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request GetHotlineQualificationByOrderRequest
       * @return GetHotlineQualificationByOrderResponse
       */
      Models::GetHotlineQualificationByOrderResponse getHotlineQualificationByOrder(const Models::GetHotlineQualificationByOrderRequest &request);

      /**
       * @summary Obtains a temporary URL of a video or audio file. You can view the video or audio file immediately by using this temporary URL.
       *
       * @param request GetTemporaryFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemporaryFileUrlResponse
       */
      Models::GetTemporaryFileUrlResponse getTemporaryFileUrlWithOptions(const Models::GetTemporaryFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a temporary URL of a video or audio file. You can view the video or audio file immediately by using this temporary URL.
       *
       * @param request GetTemporaryFileUrlRequest
       * @return GetTemporaryFileUrlResponse
       */
      Models::GetTemporaryFileUrlResponse getTemporaryFileUrl(const Models::GetTemporaryFileUrlRequest &request);

      /**
       * @summary Obtains the token for authentication.
       *
       * @description ### QPS limits
       * You can call this operation up to five times per second per account.
       *
       * @param request GetTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the token for authentication.
       *
       * @description ### QPS limits
       * You can call this operation up to five times per second per account.
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary GetVideoFieldUrl
       *
       * @param request GetVideoFieldUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoFieldUrlResponse
       */
      Models::GetVideoFieldUrlResponse getVideoFieldUrlWithOptions(const Models::GetVideoFieldUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetVideoFieldUrl
       *
       * @param request GetVideoFieldUrlRequest
       * @return GetVideoFieldUrlResponse
       */
      Models::GetVideoFieldUrlResponse getVideoFieldUrl(const Models::GetVideoFieldUrlRequest &request);

      /**
       * @summary Initiates an interactive voice response (IVR) call to a specified number.
       *
       * @description *   Your enterprise qualification is approved. For more information, see [Submit enterprise qualifications](https://help.aliyun.com/document_detail/149795.html).
       * *   Voice numbers are purchased. For more information, see [Purchase numbers](https://help.aliyun.com/document_detail/149794.html).
       * *   When the subscriber answers the call, the subscriber hears a voice that instructs the subscriber to press a key as needed. If the [message receipt](https://help.aliyun.com/document_detail/112503.html) feature is enabled, the Voice Messaging Service (VMS) platform returns the information about the key pressed by the subscriber to the business system. The key information includes the order confirmation, questionnaire survey, and satisfaction survey completed by the subscriber.
       * ## QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request IvrCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IvrCallResponse
       */
      Models::IvrCallResponse ivrCallWithOptions(const Models::IvrCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an interactive voice response (IVR) call to a specified number.
       *
       * @description *   Your enterprise qualification is approved. For more information, see [Submit enterprise qualifications](https://help.aliyun.com/document_detail/149795.html).
       * *   Voice numbers are purchased. For more information, see [Purchase numbers](https://help.aliyun.com/document_detail/149794.html).
       * *   When the subscriber answers the call, the subscriber hears a voice that instructs the subscriber to press a key as needed. If the [message receipt](https://help.aliyun.com/document_detail/112503.html) feature is enabled, the Voice Messaging Service (VMS) platform returns the information about the key pressed by the subscriber to the business system. The key information includes the order confirmation, questionnaire survey, and satisfaction survey completed by the subscriber.
       * ## QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request IvrCallRequest
       * @return IvrCallResponse
       */
      Models::IvrCallResponse ivrCall(const Models::IvrCallRequest &request);

      /**
       * @summary Queries the information about a voice call task after the task is created, including the task ID, task status, and templates used by the task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request ListCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallTaskResponse
       */
      Models::ListCallTaskResponse listCallTaskWithOptions(const Models::ListCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a voice call task after the task is created, including the task ID, task status, and templates used by the task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request ListCallTaskRequest
       * @return ListCallTaskResponse
       */
      Models::ListCallTaskResponse listCallTask(const Models::ListCallTaskRequest &request);

      /**
       * @summary Queries the details of call tasks based on task IDs after call tasks are complete.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request ListCallTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCallTaskDetailResponse
       */
      Models::ListCallTaskDetailResponse listCallTaskDetailWithOptions(const Models::ListCallTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of call tasks based on task IDs after call tasks are complete.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request ListCallTaskDetailRequest
       * @return ListCallTaskDetailResponse
       */
      Models::ListCallTaskDetailResponse listCallTaskDetail(const Models::ListCallTaskDetailRequest &request);

      /**
       * @summary Queries the registration information about a China 400 number.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request ListHotlineTransferRegisterFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotlineTransferRegisterFileResponse
       */
      Models::ListHotlineTransferRegisterFileResponse listHotlineTransferRegisterFileWithOptions(const Models::ListHotlineTransferRegisterFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the registration information about a China 400 number.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request ListHotlineTransferRegisterFileRequest
       * @return ListHotlineTransferRegisterFileResponse
       */
      Models::ListHotlineTransferRegisterFileResponse listHotlineTransferRegisterFile(const Models::ListHotlineTransferRegisterFileRequest &request);

      /**
       * @summary 分页查询服务实例列表
       *
       * @param tmpReq ListServiceInstanceForPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceInstanceForPageResponse
       */
      Models::ListServiceInstanceForPageResponse listServiceInstanceForPageWithOptions(const Models::ListServiceInstanceForPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询服务实例列表
       *
       * @param request ListServiceInstanceForPageRequest
       * @return ListServiceInstanceForPageResponse
       */
      Models::ListServiceInstanceForPageResponse listServiceInstanceForPage(const Models::ListServiceInstanceForPageRequest &request);

      /**
       * @summary Pauses video playback when a video file is played back during a voice call.
       *
       * @param request PauseVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseVideoFileResponse
       */
      Models::PauseVideoFileResponse pauseVideoFileWithOptions(const Models::PauseVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pauses video playback when a video file is played back during a voice call.
       *
       * @param request PauseVideoFileRequest
       * @return PauseVideoFileResponse
       */
      Models::PauseVideoFileResponse pauseVideoFile(const Models::PauseVideoFileRequest &request);

      /**
       * @summary Plays back a video file during a voice call.
       *
       * @param request PlayVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PlayVideoFileResponse
       */
      Models::PlayVideoFileResponse playVideoFileWithOptions(const Models::PlayVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Plays back a video file during a voice call.
       *
       * @param request PlayVideoFileRequest
       * @return PlayVideoFileResponse
       */
      Models::PlayVideoFileResponse playVideoFile(const Models::PlayVideoFileRequest &request);

      /**
       * @summary Queries the details of a call.
       *
       * @description QueryCallDetailByCallId is a common query operation. You can call this operation to query the details of a voice notification, voice verification code, interactive voice response (IVR), intelligent inbound voice call, intelligent outbound voice call, or intelligent robocall.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryCallDetailByCallIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCallDetailByCallIdResponse
       */
      Models::QueryCallDetailByCallIdResponse queryCallDetailByCallIdWithOptions(const Models::QueryCallDetailByCallIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a call.
       *
       * @description QueryCallDetailByCallId is a common query operation. You can call this operation to query the details of a voice notification, voice verification code, interactive voice response (IVR), intelligent inbound voice call, intelligent outbound voice call, or intelligent robocall.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryCallDetailByCallIdRequest
       * @return QueryCallDetailByCallIdResponse
       */
      Models::QueryCallDetailByCallIdResponse queryCallDetailByCallId(const Models::QueryCallDetailByCallIdRequest &request);

      /**
       * @summary Queries the call details of an outbound robocall task.
       *
       * @param request QueryCallDetailByTaskIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCallDetailByTaskIdResponse
       */
      Models::QueryCallDetailByTaskIdResponse queryCallDetailByTaskIdWithOptions(const Models::QueryCallDetailByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the call details of an outbound robocall task.
       *
       * @param request QueryCallDetailByTaskIdRequest
       * @return QueryCallDetailByTaskIdResponse
       */
      Models::QueryCallDetailByTaskIdResponse queryCallDetailByTaskId(const Models::QueryCallDetailByTaskIdRequest &request);

      /**
       * @summary Queries the configuration of the phone number used to transfer a call.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryCallInPoolTransferConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCallInPoolTransferConfigResponse
       */
      Models::QueryCallInPoolTransferConfigResponse queryCallInPoolTransferConfigWithOptions(const Models::QueryCallInPoolTransferConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of the phone number used to transfer a call.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryCallInPoolTransferConfigRequest
       * @return QueryCallInPoolTransferConfigResponse
       */
      Models::QueryCallInPoolTransferConfigResponse queryCallInPoolTransferConfig(const Models::QueryCallInPoolTransferConfigRequest &request);

      /**
       * @summary Queries call transfer records.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryCallInTransferRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCallInTransferRecordResponse
       */
      Models::QueryCallInTransferRecordResponse queryCallInTransferRecordWithOptions(const Models::QueryCallInTransferRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries call transfer records.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryCallInTransferRecordRequest
       * @return QueryCallInTransferRecordResponse
       */
      Models::QueryCallInTransferRecordResponse queryCallInTransferRecord(const Models::QueryCallInTransferRecordRequest &request);

      /**
       * @summary Queries a list of robots to obtain their details.
       *
       * @param request QueryRobotInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRobotInfoListResponse
       */
      Models::QueryRobotInfoListResponse queryRobotInfoListWithOptions(const Models::QueryRobotInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of robots to obtain their details.
       *
       * @param request QueryRobotInfoListRequest
       * @return QueryRobotInfoListResponse
       */
      Models::QueryRobotInfoListResponse queryRobotInfoList(const Models::QueryRobotInfoListRequest &request);

      /**
       * @summary Queries the call details of a called number.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotTaskCallDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRobotTaskCallDetailResponse
       */
      Models::QueryRobotTaskCallDetailResponse queryRobotTaskCallDetailWithOptions(const Models::QueryRobotTaskCallDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the call details of a called number.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotTaskCallDetailRequest
       * @return QueryRobotTaskCallDetailResponse
       */
      Models::QueryRobotTaskCallDetailResponse queryRobotTaskCallDetail(const Models::QueryRobotTaskCallDetailRequest &request);

      /**
       * @summary Queries the information about a robocall task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotTaskCallListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRobotTaskCallListResponse
       */
      Models::QueryRobotTaskCallListResponse queryRobotTaskCallListWithOptions(const Models::QueryRobotTaskCallListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a robocall task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotTaskCallListRequest
       * @return QueryRobotTaskCallListResponse
       */
      Models::QueryRobotTaskCallListResponse queryRobotTaskCallList(const Models::QueryRobotTaskCallListRequest &request);

      /**
       * @summary Queries the details of a robocall task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRobotTaskDetailResponse
       */
      Models::QueryRobotTaskDetailResponse queryRobotTaskDetailWithOptions(const Models::QueryRobotTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a robocall task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotTaskDetailRequest
       * @return QueryRobotTaskDetailResponse
       */
      Models::QueryRobotTaskDetailResponse queryRobotTaskDetail(const Models::QueryRobotTaskDetailRequest &request);

      /**
       * @summary Queries the information about all robocall tasks.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRobotTaskListResponse
       */
      Models::QueryRobotTaskListResponse queryRobotTaskListWithOptions(const Models::QueryRobotTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all robocall tasks.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotTaskListRequest
       * @return QueryRobotTaskListResponse
       */
      Models::QueryRobotTaskListResponse queryRobotTaskList(const Models::QueryRobotTaskListRequest &request);

      /**
       * @summary Queries a list of robot communication scripts.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotv2AllListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRobotv2AllListResponse
       */
      Models::QueryRobotv2AllListResponse queryRobotv2AllListWithOptions(const Models::QueryRobotv2AllListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of robot communication scripts.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryRobotv2AllListRequest
       * @return QueryRobotv2AllListResponse
       */
      Models::QueryRobotv2AllListResponse queryRobotv2AllList(const Models::QueryRobotv2AllListRequest &request);

      /**
       * @summary Queries the video playback progress after you play a video file during a voice call.
       *
       * @param request QueryVideoPlayProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVideoPlayProgressResponse
       */
      Models::QueryVideoPlayProgressResponse queryVideoPlayProgressWithOptions(const Models::QueryVideoPlayProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the video playback progress after you play a video file during a voice call.
       *
       * @param request QueryVideoPlayProgressRequest
       * @return QueryVideoPlayProgressResponse
       */
      Models::QueryVideoPlayProgressResponse queryVideoPlayProgress(const Models::QueryVideoPlayProgressRequest &request);

      /**
       * @summary Lists real numbers bound to service instances. The returned data includes the binding time, the number activation time, and the number of real numbers bound to a service instance.
       *
       * @description ### QPS limits
       * You can call this operation up to 200 times per second per account.
       *
       * @param request QueryVirtualNumberRelationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVirtualNumberRelationResponse
       */
      Models::QueryVirtualNumberRelationResponse queryVirtualNumberRelationWithOptions(const Models::QueryVirtualNumberRelationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists real numbers bound to service instances. The returned data includes the binding time, the number activation time, and the number of real numbers bound to a service instance.
       *
       * @description ### QPS limits
       * You can call this operation up to 200 times per second per account.
       *
       * @param request QueryVirtualNumberRelationRequest
       * @return QueryVirtualNumberRelationResponse
       */
      Models::QueryVirtualNumberRelationResponse queryVirtualNumberRelation(const Models::QueryVirtualNumberRelationRequest &request);

      /**
       * @summary 查询真实号接通率
       *
       * @param request QueryVmsRealNumberCallConnectionRateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVmsRealNumberCallConnectionRateInfoResponse
       */
      Models::QueryVmsRealNumberCallConnectionRateInfoResponse queryVmsRealNumberCallConnectionRateInfoWithOptions(const Models::QueryVmsRealNumberCallConnectionRateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询真实号接通率
       *
       * @param request QueryVmsRealNumberCallConnectionRateInfoRequest
       * @return QueryVmsRealNumberCallConnectionRateInfoResponse
       */
      Models::QueryVmsRealNumberCallConnectionRateInfoResponse queryVmsRealNumberCallConnectionRateInfo(const Models::QueryVmsRealNumberCallConnectionRateInfoRequest &request);

      /**
       * @summary 查询虚拟号码与真实号码绑定关系列表
       *
       * @param request QueryVmsVirtualNumberRelationByPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVmsVirtualNumberRelationByPageResponse
       */
      Models::QueryVmsVirtualNumberRelationByPageResponse queryVmsVirtualNumberRelationByPageWithOptions(const Models::QueryVmsVirtualNumberRelationByPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询虚拟号码与真实号码绑定关系列表
       *
       * @param request QueryVmsVirtualNumberRelationByPageRequest
       * @return QueryVmsVirtualNumberRelationByPageResponse
       */
      Models::QueryVmsVirtualNumberRelationByPageResponse queryVmsVirtualNumberRelationByPage(const Models::QueryVmsVirtualNumberRelationByPageRequest &request);

      /**
       * @summary Queries the review state of a voice file.
       *
       * @param request QueryVoiceFileAuditInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVoiceFileAuditInfoResponse
       */
      Models::QueryVoiceFileAuditInfoResponse queryVoiceFileAuditInfoWithOptions(const Models::QueryVoiceFileAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the review state of a voice file.
       *
       * @param request QueryVoiceFileAuditInfoRequest
       * @return QueryVoiceFileAuditInfoResponse
       */
      Models::QueryVoiceFileAuditInfoResponse queryVoiceFileAuditInfo(const Models::QueryVoiceFileAuditInfoRequest &request);

      /**
       * @summary Resumes the inbound call that is transferred by using a China 400 number.
       *
       * @param request RecoverCallInConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecoverCallInConfigResponse
       */
      Models::RecoverCallInConfigResponse recoverCallInConfigWithOptions(const Models::RecoverCallInConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes the inbound call that is transferred by using a China 400 number.
       *
       * @param request RecoverCallInConfigRequest
       * @return RecoverCallInConfigResponse
       */
      Models::RecoverCallInConfigResponse recoverCallInConfig(const Models::RecoverCallInConfigRequest &request);

      /**
       * @summary Resumes video playback after you pause video playback during a voice call.
       *
       * @param request ResumeVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeVideoFileResponse
       */
      Models::ResumeVideoFileResponse resumeVideoFileWithOptions(const Models::ResumeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resumes video playback after you pause video playback during a voice call.
       *
       * @param request ResumeVideoFileRequest
       * @return ResumeVideoFileResponse
       */
      Models::ResumeVideoFileResponse resumeVideoFile(const Models::ResumeVideoFileRequest &request);

      /**
       * @summary SeekVideoFile
       *
       * @param request SeekVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SeekVideoFileResponse
       */
      Models::SeekVideoFileResponse seekVideoFileWithOptions(const Models::SeekVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SeekVideoFile
       *
       * @param request SeekVideoFileRequest
       * @return SeekVideoFileResponse
       */
      Models::SeekVideoFileResponse seekVideoFile(const Models::SeekVideoFileRequest &request);

      /**
       * @summary Sends an SMS verification code.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request SendVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendVerificationResponse
       */
      Models::SendVerificationResponse sendVerificationWithOptions(const Models::SendVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends an SMS verification code.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request SendVerificationRequest
       * @return SendVerificationResponse
       */
      Models::SendVerificationResponse sendVerification(const Models::SendVerificationRequest &request);

      /**
       * @summary Sets the phone numbers for transferring a call.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request SetTransferCalleePoolConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetTransferCalleePoolConfigResponse
       */
      Models::SetTransferCalleePoolConfigResponse setTransferCalleePoolConfigWithOptions(const Models::SetTransferCalleePoolConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the phone numbers for transferring a call.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request SetTransferCalleePoolConfigRequest
       * @return SetTransferCalleePoolConfigResponse
       */
      Models::SetTransferCalleePoolConfigResponse setTransferCalleePoolConfig(const Models::SetTransferCalleePoolConfigRequest &request);

      /**
       * @summary Sends a voice verification code or a voice notification with variables to a specified phone number.
       *
       * @description *   Due to business adjustments, the updates of the voice notification and voice verification code services have been stopped in regions outside the Chinese mainland and the services have been discontinued since March 2022. Only qualified customers can continue using the voice notification and voice verification code services.
       * *   For more information about voice plans or voice service billing, see [Pricing of VMS on China site (aliyun.com)](https://help.aliyun.com/document_detail/150083.html).
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account.
       *
       * @param request SingleCallByTtsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SingleCallByTtsResponse
       */
      Models::SingleCallByTtsResponse singleCallByTtsWithOptions(const Models::SingleCallByTtsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a voice verification code or a voice notification with variables to a specified phone number.
       *
       * @description *   Due to business adjustments, the updates of the voice notification and voice verification code services have been stopped in regions outside the Chinese mainland and the services have been discontinued since March 2022. Only qualified customers can continue using the voice notification and voice verification code services.
       * *   For more information about voice plans or voice service billing, see [Pricing of VMS on China site (aliyun.com)](https://help.aliyun.com/document_detail/150083.html).
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account.
       *
       * @param request SingleCallByTtsRequest
       * @return SingleCallByTtsResponse
       */
      Models::SingleCallByTtsResponse singleCallByTts(const Models::SingleCallByTtsRequest &request);

      /**
       * @summary Sends voice file notifications or video file notifications to a single called number.
       *
       * @param request SingleCallByVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SingleCallByVideoResponse
       */
      Models::SingleCallByVideoResponse singleCallByVideoWithOptions(const Models::SingleCallByVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends voice file notifications or video file notifications to a single called number.
       *
       * @param request SingleCallByVideoRequest
       * @return SingleCallByVideoResponse
       */
      Models::SingleCallByVideoResponse singleCallByVideo(const Models::SingleCallByVideoRequest &request);

      /**
       * @summary Sends a voice notification to a phone number by using a voice notification file.
       *
       * @description > Due to business adjustments, the updates of the voice notification and voice verification code services have been stopped in regions outside the Chinese mainland and the services have been discontinued since March 2022. Only qualified customers can continue using the voice notification and voice verification code services.
       * You can call the [SingleCallByTts](https://help.aliyun.com/document_detail/393519.html) operation to send voice notifications with variables.
       * ### QPS limits
       * You can call this operation up to 1,200 times per second per account.
       *
       * @param request SingleCallByVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SingleCallByVoiceResponse
       */
      Models::SingleCallByVoiceResponse singleCallByVoiceWithOptions(const Models::SingleCallByVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a voice notification to a phone number by using a voice notification file.
       *
       * @description > Due to business adjustments, the updates of the voice notification and voice verification code services have been stopped in regions outside the Chinese mainland and the services have been discontinued since March 2022. Only qualified customers can continue using the voice notification and voice verification code services.
       * You can call the [SingleCallByTts](https://help.aliyun.com/document_detail/393519.html) operation to send voice notifications with variables.
       * ### QPS limits
       * You can call this operation up to 1,200 times per second per account.
       *
       * @param request SingleCallByVoiceRequest
       * @return SingleCallByVoiceResponse
       */
      Models::SingleCallByVoiceResponse singleCallByVoice(const Models::SingleCallByVoiceRequest &request);

      /**
       * @summary Fast forwards or rewinds a video when you play the video.
       *
       * @param request SkipVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipVideoFileResponse
       */
      Models::SkipVideoFileResponse skipVideoFileWithOptions(const Models::SkipVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Fast forwards or rewinds a video when you play the video.
       *
       * @param request SkipVideoFileRequest
       * @return SkipVideoFileResponse
       */
      Models::SkipVideoFileResponse skipVideoFile(const Models::SkipVideoFileRequest &request);

      /**
       * @summary Initiates an intelligent voice call.
       *
       * @description *   The SmartCall operation must be used together with the [intelligent outbound HTTP operation](https://help.aliyun.com/document_detail/112703.html). After the call initiated by the Voice Messaging Service (VMS) platform is connected, the VMS platform sends the text converted from speech back to the business side, and the business side then returns the follow-up action to the VMS platform.
       * *   The SmartCall operation does not support the following characters: `@ = : "" $ { } ^ * ￥`.
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account.
       *
       * @param request SmartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmartCallResponse
       */
      Models::SmartCallResponse smartCallWithOptions(const Models::SmartCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an intelligent voice call.
       *
       * @description *   The SmartCall operation must be used together with the [intelligent outbound HTTP operation](https://help.aliyun.com/document_detail/112703.html). After the call initiated by the Voice Messaging Service (VMS) platform is connected, the VMS platform sends the text converted from speech back to the business side, and the business side then returns the follow-up action to the VMS platform.
       * *   The SmartCall operation does not support the following characters: `@ = : "" $ { } ^ * ￥`.
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account.
       *
       * @param request SmartCallRequest
       * @return SmartCallResponse
       */
      Models::SmartCallResponse smartCall(const Models::SmartCallRequest &request);

      /**
       * @summary Initiates an action in an outbound robocall. This operation is applicable only when the robocall is transferred to an agent or an agent is listening in on the conversation between the robot and the user.
       *
       * @description You can call this operation to initiate a specified action on the called number of an outbound robocall when the call is transferred to an agent of the call center.
       * > You can only initiate the action of bridging a called number and an agent of the call center.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request SmartCallOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmartCallOperateResponse
       */
      Models::SmartCallOperateResponse smartCallOperateWithOptions(const Models::SmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates an action in an outbound robocall. This operation is applicable only when the robocall is transferred to an agent or an agent is listening in on the conversation between the robot and the user.
       *
       * @description You can call this operation to initiate a specified action on the called number of an outbound robocall when the call is transferred to an agent of the call center.
       * > You can only initiate the action of bridging a called number and an agent of the call center.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request SmartCallOperateRequest
       * @return SmartCallOperateResponse
       */
      Models::SmartCallOperateResponse smartCallOperate(const Models::SmartCallOperateRequest &request);

      /**
       * @summary Starts a robocall task immediately or at a scheduled time.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request StartRobotTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRobotTaskResponse
       */
      Models::StartRobotTaskResponse startRobotTaskWithOptions(const Models::StartRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a robocall task immediately or at a scheduled time.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request StartRobotTaskRequest
       * @return StartRobotTaskResponse
       */
      Models::StartRobotTaskResponse startRobotTask(const Models::StartRobotTaskRequest &request);

      /**
       * @summary Stops the inbound call that is transferred from a China 400 number.
       *
       * @param request StopCallInConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCallInConfigResponse
       */
      Models::StopCallInConfigResponse stopCallInConfigWithOptions(const Models::StopCallInConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the inbound call that is transferred from a China 400 number.
       *
       * @param request StopCallInConfigRequest
       * @return StopCallInConfigResponse
       */
      Models::StopCallInConfigResponse stopCallInConfig(const Models::StopCallInConfigRequest &request);

      /**
       * @summary Stops a robocall task that is in progress.
       *
       * @description After you stop a robocall task, you can call the [StartRobotTask](~~StartRobotTask~~) operation to start it again.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request StopRobotTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRobotTaskResponse
       */
      Models::StopRobotTaskResponse stopRobotTaskWithOptions(const Models::StopRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a robocall task that is in progress.
       *
       * @description After you stop a robocall task, you can call the [StartRobotTask](~~StartRobotTask~~) operation to start it again.
       * ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request StopRobotTaskRequest
       * @return StopRobotTaskResponse
       */
      Models::StopRobotTaskResponse stopRobotTask(const Models::StopRobotTaskRequest &request);

      /**
       * @summary Submits a 400 number for registration.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request SubmitHotlineTransferRegisterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitHotlineTransferRegisterResponse
       */
      Models::SubmitHotlineTransferRegisterResponse submitHotlineTransferRegisterWithOptions(const Models::SubmitHotlineTransferRegisterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a 400 number for registration.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request SubmitHotlineTransferRegisterRequest
       * @return SubmitHotlineTransferRegisterResponse
       */
      Models::SubmitHotlineTransferRegisterResponse submitHotlineTransferRegister(const Models::SubmitHotlineTransferRegisterRequest &request);

      /**
       * @summary Upgrades from a voice call to a video call.
       *
       * @param request UpgradeVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeVideoFileResponse
       */
      Models::UpgradeVideoFileResponse upgradeVideoFileWithOptions(const Models::UpgradeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Upgrades from a voice call to a video call.
       *
       * @param request UpgradeVideoFileRequest
       * @return UpgradeVideoFileResponse
       */
      Models::UpgradeVideoFileResponse upgradeVideoFile(const Models::UpgradeVideoFileRequest &request);

      /**
       * @summary Uploads the called numbers of a robocall task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request UploadRobotTaskCalledFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadRobotTaskCalledFileResponse
       */
      Models::UploadRobotTaskCalledFileResponse uploadRobotTaskCalledFileWithOptions(const Models::UploadRobotTaskCalledFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads the called numbers of a robocall task.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request UploadRobotTaskCalledFileRequest
       * @return UploadRobotTaskCalledFileResponse
       */
      Models::UploadRobotTaskCalledFileResponse uploadRobotTaskCalledFile(const Models::UploadRobotTaskCalledFileRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
