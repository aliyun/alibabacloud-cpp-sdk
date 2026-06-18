// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AICCS20191015_HPP_
#define ALIBABACLOUD_AICCS20191015_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Aiccs20191015Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Aiccs20191015.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Invoke the AddHotlineNumber API to add a hotline number.
       *
       * @description > Hotline numbers are for inbound and outbound calls only.
       *
       * @param tmpReq AddHotlineNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddHotlineNumberResponse
       */
      Models::AddHotlineNumberResponse addHotlineNumberWithOptions(const Models::AddHotlineNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the AddHotlineNumber API to add a hotline number.
       *
       * @description > Hotline numbers are for inbound and outbound calls only.
       *
       * @param request AddHotlineNumberRequest
       * @return AddHotlineNumberResponse
       */
      Models::AddHotlineNumberResponse addHotlineNumber(const Models::AddHotlineNumberRequest &request);

      /**
       * @summary Adds one or more inbound numbers.
       *
       * @param tmpReq AddInboundNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddInboundNumberResponse
       */
      Models::AddInboundNumberResponse addInboundNumberWithOptions(const Models::AddInboundNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more inbound numbers.
       *
       * @param request AddInboundNumberRequest
       * @return AddInboundNumberResponse
       */
      Models::AddInboundNumberResponse addInboundNumber(const Models::AddInboundNumberRequest &request);

      /**
       * @summary Adds a large language model.
       *
       * @param tmpReq AddLargeModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddLargeModelResponse
       */
      Models::AddLargeModelResponse addLargeModelWithOptions(const Models::AddLargeModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a large language model.
       *
       * @param request AddLargeModelRequest
       * @return AddLargeModelResponse
       */
      Models::AddLargeModelResponse addLargeModel(const Models::AddLargeModelRequest &request);

      /**
       * @summary Add a model application
       *
       * @param tmpReq AddModelApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddModelApplicationResponse
       */
      Models::AddModelApplicationResponse addModelApplicationWithOptions(const Models::AddModelApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a model application
       *
       * @param request AddModelApplicationRequest
       * @return AddModelApplicationResponse
       */
      Models::AddModelApplicationResponse addModelApplication(const Models::AddModelApplicationRequest &request);

      /**
       * @summary Invoke AddOuterAccount to add an external account.
       *
       * @param request AddOuterAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOuterAccountResponse
       */
      Models::AddOuterAccountResponse addOuterAccountWithOptions(const Models::AddOuterAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke AddOuterAccount to add an external account.
       *
       * @param request AddOuterAccountRequest
       * @return AddOuterAccountResponse
       */
      Models::AddOuterAccountResponse addOuterAccount(const Models::AddOuterAccountRequest &request);

      /**
       * @summary Invoke AddSkillGroup to create an external skill group.
       *
       * @param request AddSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSkillGroupResponse
       */
      Models::AddSkillGroupResponse addSkillGroupWithOptions(const Models::AddSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke AddSkillGroup to create an external skill group.
       *
       * @param request AddSkillGroupRequest
       * @return AddSkillGroupResponse
       */
      Models::AddSkillGroupResponse addSkillGroup(const Models::AddSkillGroupRequest &request);

      /**
       * @summary Invoke the AiccsSmartCall API to initiate an Intelligent Speech Interaction call.
       *
       * @param request AiccsSmartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AiccsSmartCallResponse
       */
      Models::AiccsSmartCallResponse aiccsSmartCallWithOptions(const Models::AiccsSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the AiccsSmartCall API to initiate an Intelligent Speech Interaction call.
       *
       * @param request AiccsSmartCallRequest
       * @return AiccsSmartCallResponse
       */
      Models::AiccsSmartCallResponse aiccsSmartCall(const Models::AiccsSmartCallRequest &request);

      /**
       * @summary Invoke the AiccsSmartCallOperate API to initiate a specified action during an Intelligent outbound call. This API is only used for scenarios such as parallel transfer to a human agent or allowing a human agent to listen in on the man-machine dialogue.
       *
       * @param request AiccsSmartCallOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AiccsSmartCallOperateResponse
       */
      Models::AiccsSmartCallOperateResponse aiccsSmartCallOperateWithOptions(const Models::AiccsSmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the AiccsSmartCallOperate API to initiate a specified action during an Intelligent outbound call. This API is only used for scenarios such as parallel transfer to a human agent or allowing a human agent to listen in on the man-machine dialogue.
       *
       * @param request AiccsSmartCallOperateRequest
       * @return AiccsSmartCallOperateResponse
       */
      Models::AiccsSmartCallOperateResponse aiccsSmartCallOperate(const Models::AiccsSmartCallOperateRequest &request);

      /**
       * @summary Invoke AnswerCall to answer an incoming call.
       *
       * @param request AnswerCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnswerCallResponse
       */
      Models::AnswerCallResponse answerCallWithOptions(const Models::AnswerCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke AnswerCall to answer an incoming call.
       *
       * @param request AnswerCallRequest
       * @return AnswerCallResponse
       */
      Models::AnswerCallResponse answerCall(const Models::AnswerCallRequest &request);

      /**
       * @summary Append job details.
       *
       * @description - After creating an Intelligent Contact Robot calling job, you can invoke this API to append job details.
       * - Before invoking this API, ensure that you already have a successfully created Intelligent Contact Robot calling job.
       * - If you do not have a successfully created Intelligent Contact Robot calling job, you can click **Create Job** on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or create a job by using the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request AttachTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachTaskResponse
       */
      Models::AttachTaskResponse attachTaskWithOptions(const Models::AttachTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Append job details.
       *
       * @description - After creating an Intelligent Contact Robot calling job, you can invoke this API to append job details.
       * - Before invoking this API, ensure that you already have a successfully created Intelligent Contact Robot calling job.
       * - If you do not have a successfully created Intelligent Contact Robot calling job, you can click **Create Job** on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or create a job by using the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request AttachTaskRequest
       * @return AttachTaskResponse
       */
      Models::AttachTaskResponse attachTask(const Models::AttachTaskRequest &request);

      /**
       * @param request BatchCreateQualityProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateQualityProjectsResponse
       */
      Models::BatchCreateQualityProjectsResponse batchCreateQualityProjectsWithOptions(const Models::BatchCreateQualityProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BatchCreateQualityProjectsRequest
       * @return BatchCreateQualityProjectsResponse
       */
      Models::BatchCreateQualityProjectsResponse batchCreateQualityProjects(const Models::BatchCreateQualityProjectsRequest &request);

      /**
       * @summary This operation cancels calls from a call task. You cannot cancel a call if its detail record is already in the pending call queue or is in progress.
       *
       * @description - Use this operation to cancel calls. Alternatively, you can manually cancel calls in the console by navigating to **Call Task Management** > **Manage** > **Execution Records** > **Pending**.
       * - Before calling this operation, ensure you have created a call task and imported callee data.
       * - If you have not created a call task, you can create one and import callee data on the **Call Task Management** page. You can also call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926815.html) and [ImportTaskNumberDatas]() operations.
       * - Canceling a call task may affect your business. Please proceed with caution.
       *
       * @param tmpReq CancelAiCallDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAiCallDetailsResponse
       */
      Models::CancelAiCallDetailsResponse cancelAiCallDetailsWithOptions(const Models::CancelAiCallDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation cancels calls from a call task. You cannot cancel a call if its detail record is already in the pending call queue or is in progress.
       *
       * @description - Use this operation to cancel calls. Alternatively, you can manually cancel calls in the console by navigating to **Call Task Management** > **Manage** > **Execution Records** > **Pending**.
       * - Before calling this operation, ensure you have created a call task and imported callee data.
       * - If you have not created a call task, you can create one and import callee data on the **Call Task Management** page. You can also call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926815.html) and [ImportTaskNumberDatas]() operations.
       * - Canceling a call task may affect your business. Please proceed with caution.
       *
       * @param request CancelAiCallDetailsRequest
       * @return CancelAiCallDetailsResponse
       */
      Models::CancelAiCallDetailsResponse cancelAiCallDetails(const Models::CancelAiCallDetailsRequest &request);

      /**
       * @summary Cancel an Intelligent Contact Robot calling job.
       *
       * @description - You can invoke this API to cancel an Intelligent Contact Robot calling job, or manually cancel the job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
       * - After an Intelligent Contact Robot calling job is canceled, it cannot be started again. Proceed with caution.
       * - If you want to pause a job and restart it later, you can manually pause the job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or pause it by using the [StopTask](https://help.aliyun.com/document_detail/2718006.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request CancelTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTaskWithOptions(const Models::CancelTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel an Intelligent Contact Robot calling job.
       *
       * @description - You can invoke this API to cancel an Intelligent Contact Robot calling job, or manually cancel the job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
       * - After an Intelligent Contact Robot calling job is canceled, it cannot be started again. Proceed with caution.
       * - If you want to pause a job and restart it later, you can manually pause the job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or pause it by using the [StopTask](https://help.aliyun.com/document_detail/2718006.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request CancelTaskRequest
       * @return CancelTaskResponse
       */
      Models::CancelTaskResponse cancelTask(const Models::CancelTaskRequest &request);

      /**
       * @summary Invoke ChangeChatAgentStatus to modify the Live Support status.
       *
       * @description > Currently, only changing the Live Support status to offline is supported.
       *
       * @param request ChangeChatAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeChatAgentStatusResponse
       */
      Models::ChangeChatAgentStatusResponse changeChatAgentStatusWithOptions(const Models::ChangeChatAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ChangeChatAgentStatus to modify the Live Support status.
       *
       * @description > Currently, only changing the Live Support status to offline is supported.
       *
       * @param request ChangeChatAgentStatusRequest
       * @return ChangeChatAgentStatusResponse
       */
      Models::ChangeChatAgentStatusResponse changeChatAgentStatus(const Models::ChangeChatAgentStatusRequest &request);

      /**
       * @param request ChangeQualityProjectStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeQualityProjectStatusResponse
       */
      Models::ChangeQualityProjectStatusResponse changeQualityProjectStatusWithOptions(const Models::ChangeQualityProjectStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeQualityProjectStatusRequest
       * @return ChangeQualityProjectStatusResponse
       */
      Models::ChangeQualityProjectStatusResponse changeQualityProjectStatus(const Models::ChangeQualityProjectStatusRequest &request);

      /**
       * @summary Create an agent account in the Cloud Customer Service System and return the agent ID.
       *
       * @description - Before calling this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify skill group information, refer to the guidance in [Request Parameters](#api-detail-35).  
       * - You can manage agents by calling [DeleteAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-deleteagent) to delete an agent or [UpdateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-updateagent) to update agent data.  
       * ### QPS Limit
       * - Per-user call frequency: No rate limiting.  
       * - API call frequency: 100 queries per second (QPS).  
       * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request CreateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgentWithOptions(const Models::CreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an agent account in the Cloud Customer Service System and return the agent ID.
       *
       * @description - Before calling this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify skill group information, refer to the guidance in [Request Parameters](#api-detail-35).  
       * - You can manage agents by calling [DeleteAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-deleteagent) to delete an agent or [UpdateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-updateagent) to update agent data.  
       * ### QPS Limit
       * - Per-user call frequency: No rate limiting.  
       * - API call frequency: 100 queries per second (QPS).  
       * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request CreateAgentRequest
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgent(const Models::CreateAgentRequest &request);

      /**
       * @summary Creates a call task.
       *
       * @description Before creating a call task, make a test call with an agent to ensure the results meet your requirements.
       *
       * @param tmpReq CreateAiCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiCallTaskResponse
       */
      Models::CreateAiCallTaskResponse createAiCallTaskWithOptions(const Models::CreateAiCallTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a call task.
       *
       * @description Before creating a call task, make a test call with an agent to ensure the results meet your requirements.
       *
       * @param request CreateAiCallTaskRequest
       * @return CreateAiCallTaskResponse
       */
      Models::CreateAiCallTaskResponse createAiCallTask(const Models::CreateAiCallTaskRequest &request);

      /**
       * @summary Create an Intelligent Outbound Call Job. You can configure the Task Type, job name, outbound caller ID, callee number deduplication policy, and other settings when creating the job.
       *
       * @description - The **Data** field in the response parameters of this API is the job ID.  
       * - After creating an Intelligent Outbound Call Job, if you need to make updates, you can invoke the [UpdateAiOutboundTask](https://help.aliyun.com/document_detail/2718021.html) API to update the outbound call job.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 20 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param tmpReq CreateAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiOutboundTaskResponse
       */
      Models::CreateAiOutboundTaskResponse createAiOutboundTaskWithOptions(const Models::CreateAiOutboundTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an Intelligent Outbound Call Job. You can configure the Task Type, job name, outbound caller ID, callee number deduplication policy, and other settings when creating the job.
       *
       * @description - The **Data** field in the response parameters of this API is the job ID.  
       * - After creating an Intelligent Outbound Call Job, if you need to make updates, you can invoke the [UpdateAiOutboundTask](https://help.aliyun.com/document_detail/2718021.html) API to update the outbound call job.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 20 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request CreateAiOutboundTaskRequest
       * @return CreateAiOutboundTaskResponse
       */
      Models::CreateAiOutboundTaskResponse createAiOutboundTask(const Models::CreateAiOutboundTaskRequest &request);

      /**
       * @summary Creates a batch for an Intelligent Outbound Calling job based on the instance ID and job ID, enabling data under the job to be queried by batch.
       *
       * @description Before invoking this API, we recommend that you confirm the instance ID and job ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).
       * ### QPS limit
       * - Per-user invocation frequency: 20 queries per second (QPS).
       * - API-wide invocation frequency: 20 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request CreateAiOutboundTaskBatchRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAiOutboundTaskBatchResponse
       */
      Models::CreateAiOutboundTaskBatchResponse createAiOutboundTaskBatchWithOptions(const Models::CreateAiOutboundTaskBatchRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a batch for an Intelligent Outbound Calling job based on the instance ID and job ID, enabling data under the job to be queried by batch.
       *
       * @description Before invoking this API, we recommend that you confirm the instance ID and job ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).
       * ### QPS limit
       * - Per-user invocation frequency: 20 queries per second (QPS).
       * - API-wide invocation frequency: 20 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request CreateAiOutboundTaskBatchRequest
       * @return CreateAiOutboundTaskBatchResponse
       */
      Models::CreateAiOutboundTaskBatchResponse createAiOutboundTaskBatch(const Models::CreateAiOutboundTaskBatchRequest &request);

      /**
       * @summary Creates department information based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department name. Upon successful creation, the department ID is returned.
       *
       * @description - If you need to update department information, you can invoke the [UpdateDepartment](https://help.aliyun.com/document_detail/2717977.html) API.
       * - After successfully creating department information by invoking this API, the **Data** field in the response contains the department ID. If you need to query the department ID later, you can invoke the [GetAllDepartment](https://help.aliyun.com/document_detail/2717975.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.
       * - API invocation frequency: 100 times/second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request CreateDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDepartmentResponse
       */
      Models::CreateDepartmentResponse createDepartmentWithOptions(const Models::CreateDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates department information based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department name. Upon successful creation, the department ID is returned.
       *
       * @description - If you need to update department information, you can invoke the [UpdateDepartment](https://help.aliyun.com/document_detail/2717977.html) API.
       * - After successfully creating department information by invoking this API, the **Data** field in the response contains the department ID. If you need to query the department ID later, you can invoke the [GetAllDepartment](https://help.aliyun.com/document_detail/2717975.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.
       * - API invocation frequency: 100 times/second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request CreateDepartmentRequest
       * @return CreateDepartmentResponse
       */
      Models::CreateDepartmentResponse createDepartment(const Models::CreateDepartmentRequest &request);

      /**
       * @param request CreateOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOutboundTaskResponse
       */
      Models::CreateOutboundTaskResponse createOutboundTaskWithOptions(const Models::CreateOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateOutboundTaskRequest
       * @return CreateOutboundTaskResponse
       */
      Models::CreateOutboundTaskResponse createOutboundTask(const Models::CreateOutboundTaskRequest &request);

      /**
       * @param request CreateQualityProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityProjectResponse
       */
      Models::CreateQualityProjectResponse createQualityProjectWithOptions(const Models::CreateQualityProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateQualityProjectRequest
       * @return CreateQualityProjectResponse
       */
      Models::CreateQualityProjectResponse createQualityProject(const Models::CreateQualityProjectRequest &request);

      /**
       * @param request CreateQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQualityRuleResponse
       */
      Models::CreateQualityRuleResponse createQualityRuleWithOptions(const Models::CreateQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateQualityRuleRequest
       * @return CreateQualityRuleResponse
       */
      Models::CreateQualityRuleResponse createQualityRule(const Models::CreateQualityRuleRequest &request);

      /**
       * @summary Create a skill group based on the skill group name and channel type.
       *
       * @description - This API allows you to define information such as the external display name and description of the skill group. For details, see [Request Parameters](#api-detail-35).
       * - The **Data** parameter returned by this API is the ID of the successfully created skill group.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 1000 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request CreateSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillGroupResponse
       */
      Models::CreateSkillGroupResponse createSkillGroupWithOptions(const Models::CreateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a skill group based on the skill group name and channel type.
       *
       * @description - This API allows you to define information such as the external display name and description of the skill group. For details, see [Request Parameters](#api-detail-35).
       * - The **Data** parameter returned by this API is the ID of the successfully created skill group.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 1000 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request CreateSkillGroupRequest
       * @return CreateSkillGroupResponse
       */
      Models::CreateSkillGroupResponse createSkillGroup(const Models::CreateSkillGroupRequest &request);

      /**
       * @summary Create an Artificial Intelligence Cloud Call Service robot outbound calling job.
       *
       * @description - You can invoke this API to create a job, or create one in the **Artificial Intelligence Cloud Call Service console** > **Outbound Robot (Standard Edition)** > [Task Management](https://aiccs.console.aliyun.com/job/list) by clicking **Create Job**.  
       * - After invoking this API, the **Data** field in the response contains the unique job ID of the robot outbound calling task.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request CreateTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTaskWithOptions(const Models::CreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an Artificial Intelligence Cloud Call Service robot outbound calling job.
       *
       * @description - You can invoke this API to create a job, or create one in the **Artificial Intelligence Cloud Call Service console** > **Outbound Robot (Standard Edition)** > [Task Management](https://aiccs.console.aliyun.com/job/list) by clicking **Create Job**.  
       * - After invoking this API, the **Data** field in the response contains the unique job ID of the robot outbound calling task.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request CreateTaskRequest
       * @return CreateTaskResponse
       */
      Models::CreateTaskResponse createTask(const Models::CreateTaskRequest &request);

      /**
       * @summary Create an agent that enables password-free login to the Cloud Customer Service System based on a User Account.
       *
       * @param request CreateThirdSsoAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateThirdSsoAgentResponse
       */
      Models::CreateThirdSsoAgentResponse createThirdSsoAgentWithOptions(const Models::CreateThirdSsoAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an agent that enables password-free login to the Cloud Customer Service System based on a User Account.
       *
       * @param request CreateThirdSsoAgentRequest
       * @return CreateThirdSsoAgentResponse
       */
      Models::CreateThirdSsoAgentResponse createThirdSsoAgent(const Models::CreateThirdSsoAgentRequest &request);

      /**
       * @summary Deletes an agent account in the Cloud Customer Service System based on the instance ID and agent account name.
       *
       * @description - Before deletion, we recommend that you confirm the agent account name and instance ID to be deleted. For guidance on how to obtain them, see the description of [Request Parameters](#api-detail-35).
       * - If an agent is accidentally deleted, you can invoke the [CreateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createagent) API to recreate the agent.
       * > If an account is re-added after deletion, the agent ID remains unchanged.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request DeleteAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgentWithOptions(const Models::DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an agent account in the Cloud Customer Service System based on the instance ID and agent account name.
       *
       * @description - Before deletion, we recommend that you confirm the agent account name and instance ID to be deleted. For guidance on how to obtain them, see the description of [Request Parameters](#api-detail-35).
       * - If an agent is accidentally deleted, you can invoke the [CreateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createagent) API to recreate the agent.
       * > If an account is re-added after deletion, the agent ID remains unchanged.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request DeleteAgentRequest
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgent(const Models::DeleteAgentRequest &request);

      /**
       * @summary Deletes an Intelligent Outbound Calling job by instance ID and job ID. After deletion, the job will no longer appear in the outbound calling job list.
       *
       * @description >Notice: Deletion is a sensitive operation. Proceed with caution.
       * - Before deletion, we recommend that you confirm the job ID and related information. You can call the [GetAiOutboundTaskList](https://help.aliyun.com/document_detail/2718026.html) API to view the outbound calling job list and verify the task name, description, and corresponding job ID.
       * - If you need to recreate an Intelligent Outbound Calling job, you can call the [CreateAiOutboundTask](https://help.aliyun.com/document_detail/312260.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 20 times/second.
       * - API invocation frequency: 20 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request DeleteAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAiOutboundTaskResponse
       */
      Models::DeleteAiOutboundTaskResponse deleteAiOutboundTaskWithOptions(const Models::DeleteAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Intelligent Outbound Calling job by instance ID and job ID. After deletion, the job will no longer appear in the outbound calling job list.
       *
       * @description >Notice: Deletion is a sensitive operation. Proceed with caution.
       * - Before deletion, we recommend that you confirm the job ID and related information. You can call the [GetAiOutboundTaskList](https://help.aliyun.com/document_detail/2718026.html) API to view the outbound calling job list and verify the task name, description, and corresponding job ID.
       * - If you need to recreate an Intelligent Outbound Calling job, you can call the [CreateAiOutboundTask](https://help.aliyun.com/document_detail/312260.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 20 times/second.
       * - API invocation frequency: 20 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request DeleteAiOutboundTaskRequest
       * @return DeleteAiOutboundTaskResponse
       */
      Models::DeleteAiOutboundTaskResponse deleteAiOutboundTask(const Models::DeleteAiOutboundTaskRequest &request);

      /**
       * @summary Deletes department information based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department ID.
       *
       * @description - Deletion is a sensitive operation. Proceed with caution.
       * - Before invoking this API, we recommend that you confirm the AICCS instance ID and department ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).
       * - If you accidentally delete department information, you can call the [CreateDepartment](https://help.aliyun.com/document_detail/2717974.html) API to recreate it.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: 100 times/second.
       * - API invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request DeleteDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDepartmentResponse
       */
      Models::DeleteDepartmentResponse deleteDepartmentWithOptions(const Models::DeleteDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes department information based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department ID.
       *
       * @description - Deletion is a sensitive operation. Proceed with caution.
       * - Before invoking this API, we recommend that you confirm the AICCS instance ID and department ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).
       * - If you accidentally delete department information, you can call the [CreateDepartment](https://help.aliyun.com/document_detail/2717974.html) API to recreate it.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: 100 times/second.
       * - API invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request DeleteDepartmentRequest
       * @return DeleteDepartmentResponse
       */
      Models::DeleteDepartmentResponse deleteDepartment(const Models::DeleteDepartmentRequest &request);

      /**
       * @summary Invoke the DeleteHotlineNumber API to delete a configured hotline number.
       *
       * @param request DeleteHotlineNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHotlineNumberResponse
       */
      Models::DeleteHotlineNumberResponse deleteHotlineNumberWithOptions(const Models::DeleteHotlineNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the DeleteHotlineNumber API to delete a configured hotline number.
       *
       * @param request DeleteHotlineNumberRequest
       * @return DeleteHotlineNumberResponse
       */
      Models::DeleteHotlineNumberResponse deleteHotlineNumber(const Models::DeleteHotlineNumberRequest &request);

      /**
       * @param request DeleteOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOutboundTaskResponse
       */
      Models::DeleteOutboundTaskResponse deleteOutboundTaskWithOptions(const Models::DeleteOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteOutboundTaskRequest
       * @return DeleteOutboundTaskResponse
       */
      Models::DeleteOutboundTaskResponse deleteOutboundTask(const Models::DeleteOutboundTaskRequest &request);

      /**
       * @summary Invoke DeleteOuterAccount to delete an external account by its external Account ID.
       *
       * @param request DeleteOuterAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOuterAccountResponse
       */
      Models::DeleteOuterAccountResponse deleteOuterAccountWithOptions(const Models::DeleteOuterAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke DeleteOuterAccount to delete an external account by its external Account ID.
       *
       * @param request DeleteOuterAccountRequest
       * @return DeleteOuterAccountResponse
       */
      Models::DeleteOuterAccountResponse deleteOuterAccount(const Models::DeleteOuterAccountRequest &request);

      /**
       * @param request DeleteQualityProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityProjectResponse
       */
      Models::DeleteQualityProjectResponse deleteQualityProjectWithOptions(const Models::DeleteQualityProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteQualityProjectRequest
       * @return DeleteQualityProjectResponse
       */
      Models::DeleteQualityProjectResponse deleteQualityProject(const Models::DeleteQualityProjectRequest &request);

      /**
       * @param request DeleteQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQualityRuleResponse
       */
      Models::DeleteQualityRuleResponse deleteQualityRuleWithOptions(const Models::DeleteQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteQualityRuleRequest
       * @return DeleteQualityRuleResponse
       */
      Models::DeleteQualityRuleResponse deleteQualityRule(const Models::DeleteQualityRuleRequest &request);

      /**
       * @summary Deletes an external skill group based on the skill group ID and skill group channel type.
       *
       * @param request DeleteSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillGroupResponse
       */
      Models::DeleteSkillGroupResponse deleteSkillGroupWithOptions(const Models::DeleteSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an external skill group based on the skill group ID and skill group channel type.
       *
       * @param request DeleteSkillGroupRequest
       * @return DeleteSkillGroupResponse
       */
      Models::DeleteSkillGroupResponse deleteSkillGroup(const Models::DeleteSkillGroupRequest &request);

      /**
       * @summary Invoke the DescribeRecordData API to retrieve call information.
       *
       * @param request DescribeRecordDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRecordDataResponse
       */
      Models::DescribeRecordDataResponse describeRecordDataWithOptions(const Models::DescribeRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the DescribeRecordData API to retrieve call information.
       *
       * @param request DescribeRecordDataRequest
       * @return DescribeRecordDataResponse
       */
      Models::DescribeRecordDataResponse describeRecordData(const Models::DescribeRecordDataRequest &request);

      /**
       * @param request EditQualityProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditQualityProjectResponse
       */
      Models::EditQualityProjectResponse editQualityProjectWithOptions(const Models::EditQualityProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EditQualityProjectRequest
       * @return EditQualityProjectResponse
       */
      Models::EditQualityProjectResponse editQualityProject(const Models::EditQualityProjectRequest &request);

      /**
       * @param request EditQualityRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditQualityRuleResponse
       */
      Models::EditQualityRuleResponse editQualityRuleWithOptions(const Models::EditQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EditQualityRuleRequest
       * @return EditQualityRuleResponse
       */
      Models::EditQualityRuleResponse editQualityRule(const Models::EditQualityRuleRequest &request);

      /**
       * @param request EditQualityRuleTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditQualityRuleTagResponse
       */
      Models::EditQualityRuleTagResponse editQualityRuleTagWithOptions(const Models::EditQualityRuleTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EditQualityRuleTagRequest
       * @return EditQualityRuleTagResponse
       */
      Models::EditQualityRuleTagResponse editQualityRuleTag(const Models::EditQualityRuleTagRequest &request);

      /**
       * @summary Invoke EncryptPhoneNum to encrypt the User\\"s Phone number.
       *
       * @param request EncryptPhoneNumRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EncryptPhoneNumResponse
       */
      Models::EncryptPhoneNumResponse encryptPhoneNumWithOptions(const Models::EncryptPhoneNumRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke EncryptPhoneNum to encrypt the User\\"s Phone number.
       *
       * @param request EncryptPhoneNumRequest
       * @return EncryptPhoneNumResponse
       */
      Models::EncryptPhoneNumResponse encryptPhoneNum(const Models::EncryptPhoneNumRequest &request);

      /**
       * @summary Retrieve or recover a call.
       *
       * @param request FetchCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FetchCallResponse
       */
      Models::FetchCallResponse fetchCallWithOptions(const Models::FetchCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve or recover a call.
       *
       * @param request FetchCallRequest
       * @return FetchCallResponse
       */
      Models::FetchCallResponse fetchCall(const Models::FetchCallRequest &request);

      /**
       * @summary End the hotline service by instance ID and agent account name.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user API call frequency: No rate limiting.
       * - API frequency: 100 calls per second.
       * > If the total number of calls from multiple users exceeds the API frequency limit, throttling will be triggered.
       *
       * @param request FinishHotlineServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishHotlineServiceResponse
       */
      Models::FinishHotlineServiceResponse finishHotlineServiceWithOptions(const Models::FinishHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary End the hotline service by instance ID and agent account name.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user API call frequency: No rate limiting.
       * - API frequency: 100 calls per second.
       * > If the total number of calls from multiple users exceeds the API frequency limit, throttling will be triggered.
       *
       * @param request FinishHotlineServiceRequest
       * @return FinishHotlineServiceResponse
       */
      Models::FinishHotlineServiceResponse finishHotlineService(const Models::FinishHotlineServiceRequest &request);

      /**
       * @summary Generate a message channel access signature based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and agent account name.
       *
       * @description - You can invoke this API to generate a message channel access signature. The **Data** field in the response contains the MessageBox message channel signature code.
       * - Before invoking the API, we recommend that you confirm your AICCS instance ID. For instructions on how to obtain it, see the description of [Request Parameters](#api-detail-35).
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API-wide frequency: 100 queries per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GenerateWebSocketSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateWebSocketSignResponse
       */
      Models::GenerateWebSocketSignResponse generateWebSocketSignWithOptions(const Models::GenerateWebSocketSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate a message channel access signature based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and agent account name.
       *
       * @description - You can invoke this API to generate a message channel access signature. The **Data** field in the response contains the MessageBox message channel signature code.
       * - Before invoking the API, we recommend that you confirm your AICCS instance ID. For instructions on how to obtain it, see the description of [Request Parameters](#api-detail-35).
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API-wide frequency: 100 queries per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GenerateWebSocketSignRequest
       * @return GenerateWebSocketSignResponse
       */
      Models::GenerateWebSocketSignResponse generateWebSocketSign(const Models::GenerateWebSocketSignRequest &request);

      /**
       * @summary Query agent information in the Cloud Customer Service System by instance ID and agent account name, such as agent ID.
       *
       * @description - Before invoking this API, confirm the AICCS instance information and the agent account name. For guidance on how to obtain these details, refer to the instructions in [Request Parameters](#api-detail-35).
       * - Deleted agents can also be queried. Check the **Status** parameter in the response. If its value is 2, it indicates that the agent has been deleted.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query agent information in the Cloud Customer Service System by instance ID and agent account name, such as agent ID.
       *
       * @description - Before invoking this API, confirm the AICCS instance information and the agent account name. For guidance on how to obtain these details, refer to the instructions in [Request Parameters](#api-detail-35).
       * - Deleted agents can also be queried. Check the **Status** parameter in the response. If its value is 2, it indicates that the agent has been deleted.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @summary Obtain the agent-level status metrics under hotline monitoring. Supports queries by instance, time range, agent, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to provide agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param tmpReq GetAgentBasisStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentBasisStatusResponse
       */
      Models::GetAgentBasisStatusResponse getAgentBasisStatusWithOptions(const Models::GetAgentBasisStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the agent-level status metrics under hotline monitoring. Supports queries by instance, time range, agent, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to provide agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetAgentBasisStatusRequest
       * @return GetAgentBasisStatusResponse
       */
      Models::GetAgentBasisStatusResponse getAgentBasisStatus(const Models::GetAgentBasisStatusRequest &request);

      /**
       * @param request GetAgentByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentByIdResponse
       */
      Models::GetAgentByIdResponse getAgentByIdWithOptions(const Models::GetAgentByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAgentByIdRequest
       * @return GetAgentByIdResponse
       */
      Models::GetAgentByIdResponse getAgentById(const Models::GetAgentByIdRequest &request);

      /**
       * @summary Retrieve the summary data of hotline agent details under hotline reports. Supports queries by instance, time range, agent, and department group.
       *
       * @description - Before you invoke this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to provide agent or department information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param tmpReq GetAgentDetailReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentDetailReportResponse
       */
      Models::GetAgentDetailReportResponse getAgentDetailReportWithOptions(const Models::GetAgentDetailReportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the summary data of hotline agent details under hotline reports. Supports queries by instance, time range, agent, and department group.
       *
       * @description - Before you invoke this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to provide agent or department information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetAgentDetailReportRequest
       * @return GetAgentDetailReportResponse
       */
      Models::GetAgentDetailReportResponse getAgentDetailReport(const Models::GetAgentDetailReportRequest &request);

      /**
       * @summary Obtain real-time agent detail data grouped by instance, department, and skill group (real-time data).
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).
       * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 10 requests per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAgentIndexRealTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentIndexRealTimeResponse
       */
      Models::GetAgentIndexRealTimeResponse getAgentIndexRealTimeWithOptions(const Models::GetAgentIndexRealTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain real-time agent detail data grouped by instance, department, and skill group (real-time data).
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).
       * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 10 requests per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAgentIndexRealTimeRequest
       * @return GetAgentIndexRealTimeResponse
       */
      Models::GetAgentIndexRealTimeResponse getAgentIndexRealTime(const Models::GetAgentIndexRealTimeRequest &request);

      /**
       * @summary Obtain the agent service status metrics from online reports. Supports queries by instance, time range, agent, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to provide agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 queries per second.
       * - API-wide invocation frequency: 100 queries per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param tmpReq GetAgentServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentServiceStatusResponse
       */
      Models::GetAgentServiceStatusResponse getAgentServiceStatusWithOptions(const Models::GetAgentServiceStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the agent service status metrics from online reports. Supports queries by instance, time range, agent, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to provide agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 queries per second.
       * - API-wide invocation frequency: 100 queries per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param request GetAgentServiceStatusRequest
       * @return GetAgentServiceStatusResponse
       */
      Models::GetAgentServiceStatusResponse getAgentServiceStatus(const Models::GetAgentServiceStatusRequest &request);

      /**
       * @summary Obtain agent-level statistics under hotline monitoring. Supports querying by instance, time range, agent, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### queries per second (QPS) limit
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param tmpReq GetAgentStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentStatisticsResponse
       */
      Models::GetAgentStatisticsResponse getAgentStatisticsWithOptions(const Models::GetAgentStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain agent-level statistics under hotline monitoring. Supports querying by instance, time range, agent, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### queries per second (QPS) limit
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param request GetAgentStatisticsRequest
       * @return GetAgentStatisticsResponse
       */
      Models::GetAgentStatisticsResponse getAgentStatistics(const Models::GetAgentStatisticsRequest &request);

      /**
       * @summary Query the business information associated with this call by instance ID and session ID.
       *
       * @description ### Queries per second (QPS) limits
       * - Call frequency per user: 100 times/second.
       * - API call frequency: 100 times/second.
       * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAiOutboundTaskBizDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskBizDataResponse
       */
      Models::GetAiOutboundTaskBizDataResponse getAiOutboundTaskBizDataWithOptions(const Models::GetAiOutboundTaskBizDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the business information associated with this call by instance ID and session ID.
       *
       * @description ### Queries per second (QPS) limits
       * - Call frequency per user: 100 times/second.
       * - API call frequency: 100 times/second.
       * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAiOutboundTaskBizDataRequest
       * @return GetAiOutboundTaskBizDataResponse
       */
      Models::GetAiOutboundTaskBizDataResponse getAiOutboundTaskBizData(const Models::GetAiOutboundTaskBizDataRequest &request);

      /**
       * @summary Obtain the outbound call job details by instance ID and job ID.
       *
       * @description The outbound call job details include the job ID, job status, task type, outbound caller number, callee number repetition policy, and other information. For more information, see [Response parameters](#api-detail-40).  
       * ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 100 times per second.  
       * - API invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAiOutboundTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskDetailResponse
       */
      Models::GetAiOutboundTaskDetailResponse getAiOutboundTaskDetailWithOptions(const Models::GetAiOutboundTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the outbound call job details by instance ID and job ID.
       *
       * @description The outbound call job details include the job ID, job status, task type, outbound caller number, callee number repetition policy, and other information. For more information, see [Response parameters](#api-detail-40).  
       * ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 100 times per second.  
       * - API invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAiOutboundTaskDetailRequest
       * @return GetAiOutboundTaskDetailResponse
       */
      Models::GetAiOutboundTaskDetailResponse getAiOutboundTaskDetail(const Models::GetAiOutboundTaskDetailRequest &request);

      /**
       * @summary Obtain task execution details by instance ID and job ID.
       *
       * @description The task execution details include the total number of jobs, job batches, outbound call numbers, corresponding call counts, execution status, and other information.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.
       * - API invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAiOutboundTaskExecDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskExecDetailResponse
       */
      Models::GetAiOutboundTaskExecDetailResponse getAiOutboundTaskExecDetailWithOptions(const Models::GetAiOutboundTaskExecDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain task execution details by instance ID and job ID.
       *
       * @description The task execution details include the total number of jobs, job batches, outbound call numbers, corresponding call counts, execution status, and other information.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.
       * - API invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAiOutboundTaskExecDetailRequest
       * @return GetAiOutboundTaskExecDetailResponse
       */
      Models::GetAiOutboundTaskExecDetailResponse getAiOutboundTaskExecDetail(const Models::GetAiOutboundTaskExecDetailRequest &request);

      /**
       * @summary Retrieve the outbound call job list by instance ID and Task Type.
       *
       * @description - The job list contains job information, including job ID, Task Status, Task Name, task completion rate, and more. For details, see [Response parameters](#api-detail-40).
       * - If you need to update job information, you can invoke the [UpdateAiOutboundTask](https://help.aliyun.com/document_detail/2718021.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.
       * - API invocation frequency: 100 times/second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request GetAiOutboundTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskListResponse
       */
      Models::GetAiOutboundTaskListResponse getAiOutboundTaskListWithOptions(const Models::GetAiOutboundTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the outbound call job list by instance ID and Task Type.
       *
       * @description - The job list contains job information, including job ID, Task Status, Task Name, task completion rate, and more. For details, see [Response parameters](#api-detail-40).
       * - If you need to update job information, you can invoke the [UpdateAiOutboundTask](https://help.aliyun.com/document_detail/2718021.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.
       * - API invocation frequency: 100 times/second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request GetAiOutboundTaskListRequest
       * @return GetAiOutboundTaskListResponse
       */
      Models::GetAiOutboundTaskListResponse getAiOutboundTaskList(const Models::GetAiOutboundTaskListRequest &request);

      /**
       * @summary Obtain the outbound call job progress by instance ID and job ID.
       *
       * @description - Before invoking this API, we recommend that you confirm the instance ID and job ID. For more information, see [Request Parameters](#api-detail-35).  
       * - The outbound call job progress includes information such as job ID, Task Type, job completion rate, agent connection rate, and customer connection rate. For details, see [Response Parameters](#api-detail-40).  
       * ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 100 times/second.  
       * - API-wide invocation frequency: 100 times/second.  
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetAiOutboundTaskProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAiOutboundTaskProgressResponse
       */
      Models::GetAiOutboundTaskProgressResponse getAiOutboundTaskProgressWithOptions(const Models::GetAiOutboundTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the outbound call job progress by instance ID and job ID.
       *
       * @description - Before invoking this API, we recommend that you confirm the instance ID and job ID. For more information, see [Request Parameters](#api-detail-35).  
       * - The outbound call job progress includes information such as job ID, Task Type, job completion rate, agent connection rate, and customer connection rate. For details, see [Response Parameters](#api-detail-40).  
       * ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 100 times/second.  
       * - API-wide invocation frequency: 100 times/second.  
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetAiOutboundTaskProgressRequest
       * @return GetAiOutboundTaskProgressResponse
       */
      Models::GetAiOutboundTaskProgressResponse getAiOutboundTaskProgress(const Models::GetAiOutboundTaskProgressRequest &request);

      /**
       * @summary getAllDepartment
       *
       * @description - You can invoke this API to obtain department IDs for department group queries in certain data query APIs (such as [GetHotlineServiceStatistics](https://help.aliyun.com/document_detail/2717938.html)).  
       * - After creating, deleting, or updating department information, you can invoke this API to confirm whether the department information matches your expectations.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.  
       * - API invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAllDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAllDepartmentResponse
       */
      Models::GetAllDepartmentResponse getAllDepartmentWithOptions(const Models::GetAllDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary getAllDepartment
       *
       * @description - You can invoke this API to obtain department IDs for department group queries in certain data query APIs (such as [GetHotlineServiceStatistics](https://help.aliyun.com/document_detail/2717938.html)).  
       * - After creating, deleting, or updating department information, you can invoke this API to confirm whether the department information matches your expectations.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.  
       * - API invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetAllDepartmentRequest
       * @return GetAllDepartmentResponse
       */
      Models::GetAllDepartmentResponse getAllDepartment(const Models::GetAllDepartmentRequest &request);

      /**
       * @summary Retrieves the upload address for a voice memo recording.
       *
       * @param request GetAudioNoteUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAudioNoteUploadUrlResponse
       */
      Models::GetAudioNoteUploadUrlResponse getAudioNoteUploadUrlWithOptions(const Models::GetAudioNoteUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the upload address for a voice memo recording.
       *
       * @param request GetAudioNoteUploadUrlRequest
       * @return GetAudioNoteUploadUrlResponse
       */
      Models::GetAudioNoteUploadUrlResponse getAudioNoteUploadUrl(const Models::GetAudioNoteUploadUrlRequest &request);

      /**
       * @summary Retrieves the dialog content for a call by using its call ID. You can retrieve content for calls completed within the last 30 days.
       *
       * @param request GetCallDialogContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallDialogContentResponse
       */
      Models::GetCallDialogContentResponse getCallDialogContentWithOptions(const Models::GetCallDialogContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the dialog content for a call by using its call ID. You can retrieve content for calls completed within the last 30 days.
       *
       * @param request GetCallDialogContentRequest
       * @return GetCallDialogContentResponse
       */
      Models::GetCallDialogContentResponse getCallDialogContent(const Models::GetCallDialogContentRequest &request);

      /**
       * @summary Obtain the URL of a call recording file based on the call creation time and the unique call ID, and then retrieve the call recording file using the URL.
       *
       * @description ### Prerequisites
       * Before invoking this API, ensure that call recording was enabled during the invocation of the [RobotCall](https://help.aliyun.com/document_detail/223270.html) API and that you successfully received the recording receipt, indicating that the recording file has been generated. Otherwise, an invalid URL will be returned.
       * ### How-To
       * This API serves as a supplementary method to the recording receipt. If the URL in the recording receipt message expires, you can use this API to obtain a new recording URL. By default, the validity period of the recording receipt URL is three days.
       * > We recommend that you directly download the recording content using the recording receipt URL and save it locally, rather than relying on the receipt URL, to avoid issues caused by expiration.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > Throttling will be triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request GetCallSoundRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallSoundRecordResponse
       */
      Models::GetCallSoundRecordResponse getCallSoundRecordWithOptions(const Models::GetCallSoundRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the URL of a call recording file based on the call creation time and the unique call ID, and then retrieve the call recording file using the URL.
       *
       * @description ### Prerequisites
       * Before invoking this API, ensure that call recording was enabled during the invocation of the [RobotCall](https://help.aliyun.com/document_detail/223270.html) API and that you successfully received the recording receipt, indicating that the recording file has been generated. Otherwise, an invalid URL will be returned.
       * ### How-To
       * This API serves as a supplementary method to the recording receipt. If the URL in the recording receipt message expires, you can use this API to obtain a new recording URL. By default, the validity period of the recording receipt URL is three days.
       * > We recommend that you directly download the recording content using the recording receipt URL and save it locally, rather than relying on the receipt URL, to avoid issues caused by expiration.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > Throttling will be triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request GetCallSoundRecordRequest
       * @return GetCallSoundRecordResponse
       */
      Models::GetCallSoundRecordResponse getCallSoundRecord(const Models::GetCallSoundRecordRequest &request);

      /**
       * @summary Invoke the GetConfigNumList API to obtain the hotline settings number list.
       *
       * @param request GetConfigNumListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConfigNumListResponse
       */
      Models::GetConfigNumListResponse getConfigNumListWithOptions(const Models::GetConfigNumListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the GetConfigNumList API to obtain the hotline settings number list.
       *
       * @param request GetConfigNumListRequest
       * @return GetConfigNumListResponse
       */
      Models::GetConfigNumListResponse getConfigNumList(const Models::GetConfigNumListRequest &request);

      /**
       * @summary You can invoke the GetCustomerInfo API to obtain membership details by Workbench membership ID.
       *
       * @param request GetCustomerInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomerInfoResponse
       */
      Models::GetCustomerInfoResponse getCustomerInfoWithOptions(const Models::GetCustomerInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke the GetCustomerInfo API to obtain membership details by Workbench membership ID.
       *
       * @param request GetCustomerInfoRequest
       * @return GetCustomerInfoResponse
       */
      Models::GetCustomerInfoResponse getCustomerInfo(const Models::GetCustomerInfoRequest &request);

      /**
       * @summary Queries skill group categories and the skill group list by AICCS instance ID and agent ID.
       *
       * @description - The skill groups returned by this API are grouped by department ID, which can be specified when you [create a skill group](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createskillgroup).
       * - To query detailed skill group information, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API.
       * - Before invoking this API, you should confirm the AICCS instance ID and agent ID. For guidance on how to obtain them, see the description of [Request Parameters](#api-detail-35).
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 1000 queries per second.
       * - API-wide invocation frequency: 1000 queries per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetDepGroupTreeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDepGroupTreeDataResponse
       */
      Models::GetDepGroupTreeDataResponse getDepGroupTreeDataWithOptions(const Models::GetDepGroupTreeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries skill group categories and the skill group list by AICCS instance ID and agent ID.
       *
       * @description - The skill groups returned by this API are grouped by department ID, which can be specified when you [create a skill group](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createskillgroup).
       * - To query detailed skill group information, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API.
       * - Before invoking this API, you should confirm the AICCS instance ID and agent ID. For guidance on how to obtain them, see the description of [Request Parameters](#api-detail-35).
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 1000 queries per second.
       * - API-wide invocation frequency: 1000 queries per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetDepGroupTreeDataRequest
       * @return GetDepGroupTreeDataResponse
       */
      Models::GetDepGroupTreeDataResponse getDepGroupTreeData(const Models::GetDepGroupTreeDataRequest &request);

      /**
       * @summary Obtain department-level status metrics under hotline monitoring. Supports queries by instance, time range, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.  
       * - API-wide invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param tmpReq GetDepartmentalLatitudeAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDepartmentalLatitudeAgentStatusResponse
       */
      Models::GetDepartmentalLatitudeAgentStatusResponse getDepartmentalLatitudeAgentStatusWithOptions(const Models::GetDepartmentalLatitudeAgentStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain department-level status metrics under hotline monitoring. Supports queries by instance, time range, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.  
       * - API-wide invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetDepartmentalLatitudeAgentStatusRequest
       * @return GetDepartmentalLatitudeAgentStatusResponse
       */
      Models::GetDepartmentalLatitudeAgentStatusResponse getDepartmentalLatitudeAgentStatus(const Models::GetDepartmentalLatitudeAgentStatusRequest &request);

      /**
       * @summary Obtain the current service details of a hotline agent based on the instance ID and agent account name.
       *
       * @description The hotline agent details include information such as agent posture status, agent ID, and heartbeat signature. For more information, see [Response parameters](#api-detail-40).  
       * ### Queries per second (QPS) limit  
       * - Per-user invocation frequency: Rate Limiting is not applied.  
       * - API frequency: 100 queries per second (QPS).  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetHotlineAgentDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineAgentDetailResponse
       */
      Models::GetHotlineAgentDetailResponse getHotlineAgentDetailWithOptions(const Models::GetHotlineAgentDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the current service details of a hotline agent based on the instance ID and agent account name.
       *
       * @description The hotline agent details include information such as agent posture status, agent ID, and heartbeat signature. For more information, see [Response parameters](#api-detail-40).  
       * ### Queries per second (QPS) limit  
       * - Per-user invocation frequency: Rate Limiting is not applied.  
       * - API frequency: 100 queries per second (QPS).  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetHotlineAgentDetailRequest
       * @return GetHotlineAgentDetailResponse
       */
      Models::GetHotlineAgentDetailResponse getHotlineAgentDetail(const Models::GetHotlineAgentDetailRequest &request);

      /**
       * @summary Obtain detailed data metrics by hotline agent dimension (T+1). Supports grouping queries by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/document_detail/276009.html) and [created an instance](https://help.aliyun.com/document_detail/276011.html).
       * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * > Query logic priority:
       * > - If GroupIds is not empty, query data metrics under the specified skill groups.
       * > - Otherwise, if DepIds is not empty, query data metrics under the corresponding department groups.
       * > - Otherwise, query data metrics under the AICCS instance.
       * ### QPS Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 10 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetHotlineAgentDetailReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineAgentDetailReportResponse
       */
      Models::GetHotlineAgentDetailReportResponse getHotlineAgentDetailReportWithOptions(const Models::GetHotlineAgentDetailReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain detailed data metrics by hotline agent dimension (T+1). Supports grouping queries by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/document_detail/276009.html) and [created an instance](https://help.aliyun.com/document_detail/276011.html).
       * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * > Query logic priority:
       * > - If GroupIds is not empty, query data metrics under the specified skill groups.
       * > - Otherwise, if DepIds is not empty, query data metrics under the corresponding department groups.
       * > - Otherwise, query data metrics under the AICCS instance.
       * ### QPS Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 10 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetHotlineAgentDetailReportRequest
       * @return GetHotlineAgentDetailReportResponse
       */
      Models::GetHotlineAgentDetailReportResponse getHotlineAgentDetailReport(const Models::GetHotlineAgentDetailReportRequest &request);

      /**
       * @summary Queries the hotline agent status in the Cloud Customer Service System by AICCS instance ID and agent account name.
       *
       * @description - Before invoking this API, confirm the AICCS instance information and the agent account name. For guidance on how to obtain these details, see the description in [Request Parameters](#api-detail-35).  
       * - To retrieve detailed information about a hotline agent, you can invoke the [GetHotlineAgentDetail](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-gethotlineagentdetail) API.  
       * ### Queries per second (QPS) Limit  
       * - Per-user invocation frequency: No rate limiting.  
       * - API-wide frequency: 200 queries per second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetHotlineAgentStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineAgentStatusResponse
       */
      Models::GetHotlineAgentStatusResponse getHotlineAgentStatusWithOptions(const Models::GetHotlineAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the hotline agent status in the Cloud Customer Service System by AICCS instance ID and agent account name.
       *
       * @description - Before invoking this API, confirm the AICCS instance information and the agent account name. For guidance on how to obtain these details, see the description in [Request Parameters](#api-detail-35).  
       * - To retrieve detailed information about a hotline agent, you can invoke the [GetHotlineAgentDetail](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-gethotlineagentdetail) API.  
       * ### Queries per second (QPS) Limit  
       * - Per-user invocation frequency: No rate limiting.  
       * - API-wide frequency: 200 queries per second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetHotlineAgentStatusRequest
       * @return GetHotlineAgentStatusResponse
       */
      Models::GetHotlineAgentStatusResponse getHotlineAgentStatus(const Models::GetHotlineAgentStatusRequest &request);

      /**
       * @summary Invoke the GetHotlineCallAction API to query the result data of call actions.
       *
       * @description ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 50 times/second.  
       * - API invocation frequency: 100 times/second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetHotlineCallActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineCallActionResponse
       */
      Models::GetHotlineCallActionResponse getHotlineCallActionWithOptions(const Models::GetHotlineCallActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the GetHotlineCallAction API to query the result data of call actions.
       *
       * @description ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 50 times/second.  
       * - API invocation frequency: 100 times/second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetHotlineCallActionRequest
       * @return GetHotlineCallActionResponse
       */
      Models::GetHotlineCallActionResponse getHotlineCallAction(const Models::GetHotlineCallActionRequest &request);

      /**
       * @summary Retrieve detailed (T+1) data by hotline skill group dimension. Supports grouping by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/document_detail/276009.html) and [created an instance](https://help.aliyun.com/document_detail/276011.html).  
       * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No Rate Limiting.  
       * - API frequency: 10 queries per second.
       * > Throttle will be triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request GetHotlineGroupDetailReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineGroupDetailReportResponse
       */
      Models::GetHotlineGroupDetailReportResponse getHotlineGroupDetailReportWithOptions(const Models::GetHotlineGroupDetailReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve detailed (T+1) data by hotline skill group dimension. Supports grouping by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/document_detail/276009.html) and [created an instance](https://help.aliyun.com/document_detail/276011.html).  
       * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No Rate Limiting.  
       * - API frequency: 10 queries per second.
       * > Throttle will be triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request GetHotlineGroupDetailReportRequest
       * @return GetHotlineGroupDetailReportResponse
       */
      Models::GetHotlineGroupDetailReportResponse getHotlineGroupDetailReport(const Models::GetHotlineGroupDetailReportRequest &request);

      /**
       * @summary Invoke the GetHotlineMessageLog API to retrieve hotline message records.
       *
       * @param request GetHotlineMessageLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineMessageLogResponse
       */
      Models::GetHotlineMessageLogResponse getHotlineMessageLogWithOptions(const Models::GetHotlineMessageLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the GetHotlineMessageLog API to retrieve hotline message records.
       *
       * @param request GetHotlineMessageLogRequest
       * @return GetHotlineMessageLogResponse
       */
      Models::GetHotlineMessageLogResponse getHotlineMessageLog(const Models::GetHotlineMessageLogRequest &request);

      /**
       * @summary Invoke the GetHotlineRuntimeInfo API to query hotline runtime information.
       *
       * @param request GetHotlineRuntimeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineRuntimeInfoResponse
       */
      Models::GetHotlineRuntimeInfoResponse getHotlineRuntimeInfoWithOptions(const Models::GetHotlineRuntimeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the GetHotlineRuntimeInfo API to query hotline runtime information.
       *
       * @param request GetHotlineRuntimeInfoRequest
       * @return GetHotlineRuntimeInfoResponse
       */
      Models::GetHotlineRuntimeInfoResponse getHotlineRuntimeInfo(const Models::GetHotlineRuntimeInfoRequest &request);

      /**
       * @summary Obtain service statistics under hotline monitoring. Supports grouped queries by instance, time dimension, agent, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to provide agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param tmpReq GetHotlineServiceStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineServiceStatisticsResponse
       */
      Models::GetHotlineServiceStatisticsResponse getHotlineServiceStatisticsWithOptions(const Models::GetHotlineServiceStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain service statistics under hotline monitoring. Supports grouped queries by instance, time dimension, agent, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to provide agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param request GetHotlineServiceStatisticsRequest
       * @return GetHotlineServiceStatisticsResponse
       */
      Models::GetHotlineServiceStatisticsResponse getHotlineServiceStatistics(const Models::GetHotlineServiceStatisticsRequest &request);

      /**
       * @summary Obtain the queue length of hotline members.
       *
       * @param request GetHotlineWaitingNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHotlineWaitingNumberResponse
       */
      Models::GetHotlineWaitingNumberResponse getHotlineWaitingNumberWithOptions(const Models::GetHotlineWaitingNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the queue length of hotline members.
       *
       * @param request GetHotlineWaitingNumberRequest
       * @return GetHotlineWaitingNumberResponse
       */
      Models::GetHotlineWaitingNumberResponse getHotlineWaitingNumber(const Models::GetHotlineWaitingNumberRequest &request);

      /**
       * @summary You can obtain the current statistical metrics (real-time data) and query them by instance ID, department, or skill group.
       *
       * @description - The current data statistics metrics include cumulative metrics for the day and real-time metrics.  
       * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * > Query logic priority:  
       * > - If GroupIds is not empty, query the data metrics for the specified skill groups.  
       * > - Otherwise, if DepIds is not empty, query the data metrics for the specified departments.  
       * > - Otherwise, query the data metrics for the Artificial Intelligence Cloud Call Service (AICCS) instance.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.  
       * - API frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetIndexCurrentValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIndexCurrentValueResponse
       */
      Models::GetIndexCurrentValueResponse getIndexCurrentValueWithOptions(const Models::GetIndexCurrentValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can obtain the current statistical metrics (real-time data) and query them by instance ID, department, or skill group.
       *
       * @description - The current data statistics metrics include cumulative metrics for the day and real-time metrics.  
       * - If you need to specify department or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * > Query logic priority:  
       * > - If GroupIds is not empty, query the data metrics for the specified skill groups.  
       * > - Otherwise, if DepIds is not empty, query the data metrics for the specified departments.  
       * > - Otherwise, query the data metrics for the Artificial Intelligence Cloud Call Service (AICCS) instance.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.  
       * - API frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetIndexCurrentValueRequest
       * @return GetIndexCurrentValueResponse
       */
      Models::GetIndexCurrentValueResponse getIndexCurrentValue(const Models::GetIndexCurrentValueRequest &request);

      /**
       * @param request GetInstanceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceListResponse
       */
      Models::GetInstanceListResponse getInstanceListWithOptions(const Models::GetInstanceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetInstanceListRequest
       * @return GetInstanceListResponse
       */
      Models::GetInstanceListResponse getInstanceList(const Models::GetInstanceListRequest &request);

      /**
       * @summary Invoke the GetMcuLvsIp API to query the hotline server IP address.
       *
       * @param request GetMcuLvsIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcuLvsIpResponse
       */
      Models::GetMcuLvsIpResponse getMcuLvsIpWithOptions(const Models::GetMcuLvsIpRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the GetMcuLvsIp API to query the hotline server IP address.
       *
       * @param request GetMcuLvsIpRequest
       * @return GetMcuLvsIpResponse
       */
      Models::GetMcuLvsIpResponse getMcuLvsIp(const Models::GetMcuLvsIpRequest &request);

      /**
       * @summary Obtain the number\\"s归属地 information based on the instance ID and phone number.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetNumLocationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNumLocationResponse
       */
      Models::GetNumLocationResponse getNumLocationWithOptions(const Models::GetNumLocationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the number\\"s归属地 information based on the instance ID and phone number.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetNumLocationRequest
       * @return GetNumLocationResponse
       */
      Models::GetNumLocationResponse getNumLocation(const Models::GetNumLocationRequest &request);

      /**
       * @summary Obtain online agent information data under real-time monitoring. Support queries by instance, time range, agent, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param tmpReq GetOnlineSeatInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOnlineSeatInformationResponse
       */
      Models::GetOnlineSeatInformationResponse getOnlineSeatInformationWithOptions(const Models::GetOnlineSeatInformationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain online agent information data under real-time monitoring. Support queries by instance, time range, agent, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify agent or department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param request GetOnlineSeatInformationRequest
       * @return GetOnlineSeatInformationResponse
       */
      Models::GetOnlineSeatInformationResponse getOnlineSeatInformation(const Models::GetOnlineSeatInformationRequest &request);

      /**
       * @summary Obtain the volume of Online Services under online monitoring. Support grouped queries by instance, time range, agent, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param tmpReq GetOnlineServiceVolumeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOnlineServiceVolumeResponse
       */
      Models::GetOnlineServiceVolumeResponse getOnlineServiceVolumeWithOptions(const Models::GetOnlineServiceVolumeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the volume of Online Services under online monitoring. Support grouped queries by instance, time range, agent, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetOnlineServiceVolumeRequest
       * @return GetOnlineServiceVolumeResponse
       */
      Models::GetOnlineServiceVolumeResponse getOnlineServiceVolume(const Models::GetOnlineServiceVolumeRequest &request);

      /**
       * @summary Retrieve the list of external hotline numbers.
       *
       * @param request GetOutbounNumListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOutbounNumListResponse
       */
      Models::GetOutbounNumListResponse getOutbounNumListWithOptions(const Models::GetOutbounNumListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of external hotline numbers.
       *
       * @param request GetOutbounNumListRequest
       * @return GetOutbounNumListResponse
       */
      Models::GetOutbounNumListResponse getOutbounNumList(const Models::GetOutbounNumListRequest &request);

      /**
       * @summary Invoke GetQualityProjectDetail to obtain the quality inspection job details.
       *
       * @param request GetQualityProjectDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityProjectDetailResponse
       */
      Models::GetQualityProjectDetailResponse getQualityProjectDetailWithOptions(const Models::GetQualityProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetQualityProjectDetail to obtain the quality inspection job details.
       *
       * @param request GetQualityProjectDetailRequest
       * @return GetQualityProjectDetailResponse
       */
      Models::GetQualityProjectDetailResponse getQualityProjectDetail(const Models::GetQualityProjectDetailRequest &request);

      /**
       * @summary Invoke GetQualityProjectList to obtain the quality inspection job list.
       *
       * @param request GetQualityProjectListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityProjectListResponse
       */
      Models::GetQualityProjectListResponse getQualityProjectListWithOptions(const Models::GetQualityProjectListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetQualityProjectList to obtain the quality inspection job list.
       *
       * @param request GetQualityProjectListRequest
       * @return GetQualityProjectListResponse
       */
      Models::GetQualityProjectListResponse getQualityProjectList(const Models::GetQualityProjectListRequest &request);

      /**
       * @param request GetQualityProjectLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityProjectLogResponse
       */
      Models::GetQualityProjectLogResponse getQualityProjectLogWithOptions(const Models::GetQualityProjectLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityProjectLogRequest
       * @return GetQualityProjectLogResponse
       */
      Models::GetQualityProjectLogResponse getQualityProjectLog(const Models::GetQualityProjectLogRequest &request);

      /**
       * @param request GetQualityResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityResultResponse
       */
      Models::GetQualityResultResponse getQualityResultWithOptions(const Models::GetQualityResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityResultRequest
       * @return GetQualityResultResponse
       */
      Models::GetQualityResultResponse getQualityResult(const Models::GetQualityResultRequest &request);

      /**
       * @param request GetQualityRuleDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleDetailResponse
       */
      Models::GetQualityRuleDetailResponse getQualityRuleDetailWithOptions(const Models::GetQualityRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityRuleDetailRequest
       * @return GetQualityRuleDetailResponse
       */
      Models::GetQualityRuleDetailResponse getQualityRuleDetail(const Models::GetQualityRuleDetailRequest &request);

      /**
       * @param request GetQualityRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleListResponse
       */
      Models::GetQualityRuleListResponse getQualityRuleListWithOptions(const Models::GetQualityRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityRuleListRequest
       * @return GetQualityRuleListResponse
       */
      Models::GetQualityRuleListResponse getQualityRuleList(const Models::GetQualityRuleListRequest &request);

      /**
       * @param request GetQualityRuleTagListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualityRuleTagListResponse
       */
      Models::GetQualityRuleTagListResponse getQualityRuleTagListWithOptions(const Models::GetQualityRuleTagListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetQualityRuleTagListRequest
       * @return GetQualityRuleTagListResponse
       */
      Models::GetQualityRuleTagListResponse getQualityRuleTagList(const Models::GetQualityRuleTagListRequest &request);

      /**
       * @summary Obtain queue information under the skill group dimension in online monitoring. Supports queries grouped by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param tmpReq GetQueueInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQueueInformationResponse
       */
      Models::GetQueueInformationResponse getQueueInformationWithOptions(const Models::GetQueueInformationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain queue information under the skill group dimension in online monitoring. Supports queries grouped by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetQueueInformationRequest
       * @return GetQueueInformationResponse
       */
      Models::GetQueueInformationResponse getQueueInformation(const Models::GetQueueInformationRequest &request);

      /**
       * @summary Invoke the GetRecordData API to obtain a recording file.
       *
       * @param request GetRecordDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordDataResponse
       */
      Models::GetRecordDataResponse getRecordDataWithOptions(const Models::GetRecordDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the GetRecordData API to obtain a recording file.
       *
       * @param request GetRecordDataRequest
       * @return GetRecordDataResponse
       */
      Models::GetRecordDataResponse getRecordData(const Models::GetRecordDataRequest &request);

      /**
       * @summary Invoke the GetRecordUrl API to obtain the incoming and outgoing calls recording link.
       *
       * @param request GetRecordUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecordUrlResponse
       */
      Models::GetRecordUrlResponse getRecordUrlWithOptions(const Models::GetRecordUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the GetRecordUrl API to obtain the incoming and outgoing calls recording link.
       *
       * @param request GetRecordUrlRequest
       * @return GetRecordUrlResponse
       */
      Models::GetRecordUrlResponse getRecordUrl(const Models::GetRecordUrlRequest &request);

      /**
       * @summary Invoke GetRtcToken to obtain the token for a shift agent.
       *
       * @param request GetRtcTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRtcTokenResponse
       */
      Models::GetRtcTokenResponse getRtcTokenWithOptions(const Models::GetRtcTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke GetRtcToken to obtain the token for a shift agent.
       *
       * @param request GetRtcTokenRequest
       * @return GetRtcTokenResponse
       */
      Models::GetRtcTokenResponse getRtcToken(const Models::GetRtcTokenRequest &request);

      /**
       * @summary Obtain agent service capacity data under online monitoring. Supports queries by instance, time range, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param tmpReq GetSeatInformationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSeatInformationResponse
       */
      Models::GetSeatInformationResponse getSeatInformationWithOptions(const Models::GetSeatInformationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain agent service capacity data under online monitoring. Supports queries by instance, time range, and department group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetSeatInformationRequest
       * @return GetSeatInformationResponse
       */
      Models::GetSeatInformationResponse getSeatInformation(const Models::GetSeatInformationRequest &request);

      /**
       * @summary Obtain the service status metrics of skill groups. Support grouped queries by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param tmpReq GetSkillGroupAgentStatusDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupAgentStatusDetailsResponse
       */
      Models::GetSkillGroupAgentStatusDetailsResponse getSkillGroupAgentStatusDetailsWithOptions(const Models::GetSkillGroupAgentStatusDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the service status metrics of skill groups. Support grouped queries by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request GetSkillGroupAgentStatusDetailsRequest
       * @return GetSkillGroupAgentStatusDetailsResponse
       */
      Models::GetSkillGroupAgentStatusDetailsResponse getSkillGroupAgentStatusDetails(const Models::GetSkillGroupAgentStatusDetailsRequest &request);

      /**
       * @summary Obtain the aggregated agent status metrics for skill groups under hotline monitoring. Supports grouped queries by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param tmpReq GetSkillGroupAndAgentStatusSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupAndAgentStatusSummaryResponse
       */
      Models::GetSkillGroupAndAgentStatusSummaryResponse getSkillGroupAndAgentStatusSummaryWithOptions(const Models::GetSkillGroupAndAgentStatusSummaryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the aggregated agent status metrics for skill groups under hotline monitoring. Supports grouped queries by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param request GetSkillGroupAndAgentStatusSummaryRequest
       * @return GetSkillGroupAndAgentStatusSummaryResponse
       */
      Models::GetSkillGroupAndAgentStatusSummaryResponse getSkillGroupAndAgentStatusSummary(const Models::GetSkillGroupAndAgentStatusSummaryRequest &request);

      /**
       * @summary Obtain the hotline monitoring status metrics by skill group dimension. Supports queries grouped by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param tmpReq GetSkillGroupLatitudeStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupLatitudeStateResponse
       */
      Models::GetSkillGroupLatitudeStateResponse getSkillGroupLatitudeStateWithOptions(const Models::GetSkillGroupLatitudeStateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the hotline monitoring status metrics by skill group dimension. Supports queries grouped by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetSkillGroupLatitudeStateRequest
       * @return GetSkillGroupLatitudeStateResponse
       */
      Models::GetSkillGroupLatitudeStateResponse getSkillGroupLatitudeState(const Models::GetSkillGroupLatitudeStateRequest &request);

      /**
       * @summary Retrieve skill group–level service capacity data under online monitoring. Supports queries grouped by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param tmpReq GetSkillGroupServiceCapabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupServiceCapabilityResponse
       */
      Models::GetSkillGroupServiceCapabilityResponse getSkillGroupServiceCapabilityWithOptions(const Models::GetSkillGroupServiceCapabilityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve skill group–level service capacity data under online monitoring. Supports queries grouped by instance, time range, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify department or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param request GetSkillGroupServiceCapabilityRequest
       * @return GetSkillGroupServiceCapabilityResponse
       */
      Models::GetSkillGroupServiceCapabilityResponse getSkillGroupServiceCapability(const Models::GetSkillGroupServiceCapabilityRequest &request);

      /**
       * @summary Obtain the service status metrics of skill groups in online reports.
       *
       * @description ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 100 times per second.  
       * - API invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param tmpReq GetSkillGroupServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupServiceStatusResponse
       */
      Models::GetSkillGroupServiceStatusResponse getSkillGroupServiceStatusWithOptions(const Models::GetSkillGroupServiceStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the service status metrics of skill groups in online reports.
       *
       * @description ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 100 times per second.  
       * - API invocation frequency: 100 times per second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request GetSkillGroupServiceStatusRequest
       * @return GetSkillGroupServiceStatusResponse
       */
      Models::GetSkillGroupServiceStatusResponse getSkillGroupServiceStatus(const Models::GetSkillGroupServiceStatusRequest &request);

      /**
       * @summary Obtain the total status count of skill groups under hotline reports. Supports grouped queries by instance, time range, agent, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling will be triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param tmpReq GetSkillGroupStatusTotalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillGroupStatusTotalResponse
       */
      Models::GetSkillGroupStatusTotalResponse getSkillGroupStatusTotalWithOptions(const Models::GetSkillGroupStatusTotalRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the total status count of skill groups under hotline reports. Supports grouped queries by instance, time range, agent, department, and skill group.
       *
       * @description - Before invoking this API, ensure that you have [activated the service](https://help.aliyun.com/zh/aiccs/user-guide/activate-aiccs?spm=a2c4g.11186623.0.0.38365923RQDwdH) and [created an instance](https://help.aliyun.com/zh/aiccs/user-guide/create-an-instance?spm=a2c4g.11186623.0.0.8e0b5a2fWNeRUn).  
       * - If you need to specify agent, department, or skill group information, refer to the guidance in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times per second.  
       * - API-wide invocation frequency: 100 times per second.  
       * > Throttling will be triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request GetSkillGroupStatusTotalRequest
       * @return GetSkillGroupStatusTotalResponse
       */
      Models::GetSkillGroupStatusTotalResponse getSkillGroupStatusTotal(const Models::GetSkillGroupStatusTotalRequest &request);

      /**
       * @summary Cancel dual-call.
       *
       * @param request HangUpDoubleCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HangUpDoubleCallResponse
       */
      Models::HangUpDoubleCallResponse hangUpDoubleCallWithOptions(const Models::HangUpDoubleCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel dual-call.
       *
       * @param request HangUpDoubleCallRequest
       * @return HangUpDoubleCallResponse
       */
      Models::HangUpDoubleCallResponse hangUpDoubleCall(const Models::HangUpDoubleCallRequest &request);

      /**
       * @summary Invoke HangupCall to execute the agent hang-up operation.
       *
       * @param request HangupCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HangupCallResponse
       */
      Models::HangupCallResponse hangupCallWithOptions(const Models::HangupCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke HangupCall to execute the agent hang-up operation.
       *
       * @param request HangupCallRequest
       * @return HangupCallResponse
       */
      Models::HangupCallResponse hangupCall(const Models::HangupCallRequest &request);

      /**
       * @summary Hangs up a call in Communication Intelligence Engine.
       *
       * @description - Before you hang up a call in Communication Intelligence Engine, ensure that a call has been initiated by a large model.
       * - If a call has not been initiated, use the [LlmSmartCall](https://help.aliyun.com/document_detail/2862828.html) or [LlmSmartCallEncrypt](https://help.aliyun.com/document_detail/2881065.html) operation to do so.
       *
       * @param request HangupOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HangupOperateResponse
       */
      Models::HangupOperateResponse hangupOperateWithOptions(const Models::HangupOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Hangs up a call in Communication Intelligence Engine.
       *
       * @description - Before you hang up a call in Communication Intelligence Engine, ensure that a call has been initiated by a large model.
       * - If a call has not been initiated, use the [LlmSmartCall](https://help.aliyun.com/document_detail/2862828.html) or [LlmSmartCallEncrypt](https://help.aliyun.com/document_detail/2881065.html) operation to do so.
       *
       * @param request HangupOperateRequest
       * @return HangupOperateResponse
       */
      Models::HangupOperateResponse hangupOperate(const Models::HangupOperateRequest &request);

      /**
       * @summary Hang up a third-party call.
       *
       * @param request HangupThirdCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HangupThirdCallResponse
       */
      Models::HangupThirdCallResponse hangupThirdCallWithOptions(const Models::HangupThirdCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Hang up a third-party call.
       *
       * @param request HangupThirdCallRequest
       * @return HangupThirdCallResponse
       */
      Models::HangupThirdCallResponse hangupThirdCall(const Models::HangupThirdCallRequest &request);

      /**
       * @summary Hold the call.
       *
       * @param request HoldCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HoldCallResponse
       */
      Models::HoldCallResponse holdCallWithOptions(const Models::HoldCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Hold the call.
       *
       * @param request HoldCallRequest
       * @return HoldCallResponse
       */
      Models::HoldCallResponse holdCall(const Models::HoldCallRequest &request);

      /**
       * @summary Query call details by instance ID.
       *
       * @description Call details include the total number of records, call result, agent name, call time, and other information.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 80 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency, throttling will be triggered.
       *
       * @param request HotlineSessionQueryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HotlineSessionQueryResponse
       */
      Models::HotlineSessionQueryResponse hotlineSessionQueryWithOptions(const Models::HotlineSessionQueryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query call details by instance ID.
       *
       * @description Call details include the total number of records, call result, agent name, call time, and other information.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 80 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency, throttling will be triggered.
       *
       * @param request HotlineSessionQueryRequest
       * @return HotlineSessionQueryResponse
       */
      Models::HotlineSessionQueryResponse hotlineSessionQuery(const Models::HotlineSessionQueryRequest &request);

      /**
       * @summary Imports a single phone number to a task.
       *
       * @param tmpReq ImportOneTaskPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportOneTaskPhoneNumberResponse
       */
      Models::ImportOneTaskPhoneNumberResponse importOneTaskPhoneNumberWithOptions(const Models::ImportOneTaskPhoneNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a single phone number to a task.
       *
       * @param request ImportOneTaskPhoneNumberRequest
       * @return ImportOneTaskPhoneNumberResponse
       */
      Models::ImportOneTaskPhoneNumberResponse importOneTaskPhoneNumber(const Models::ImportOneTaskPhoneNumberRequest &request);

      /**
       * @summary Imports callee data for a call task.
       *
       * @description - You can import callee data by calling this operation. Alternatively, go to the **call task management** page, click **Import Callee Data**, download the template, and then upload your file.
       * - This API operation currently supports only the JSON data type for importing callee data.
       * - Ensure that you have created a call task before you call this operation.
       * - To create a call task, go to the **call task management** page and click **Create Call Task**, or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
       *
       * @param tmpReq ImportTaskNumberDatasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportTaskNumberDatasResponse
       */
      Models::ImportTaskNumberDatasResponse importTaskNumberDatasWithOptions(const Models::ImportTaskNumberDatasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports callee data for a call task.
       *
       * @description - You can import callee data by calling this operation. Alternatively, go to the **call task management** page, click **Import Callee Data**, download the template, and then upload your file.
       * - This API operation currently supports only the JSON data type for importing callee data.
       * - Ensure that you have created a call task before you call this operation.
       * - To create a call task, go to the **call task management** page and click **Create Call Task**, or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
       *
       * @param request ImportTaskNumberDatasRequest
       * @return ImportTaskNumberDatasResponse
       */
      Models::ImportTaskNumberDatasResponse importTaskNumberDatas(const Models::ImportTaskNumberDatasRequest &request);

      /**
       * @summary Import outbound call callee numbers based on the instance ID and job ID.
       *
       * @description - After importing outbound call callee numbers, the outbound calling job can operate normally.  
       * - Before invoking this API, we recommend that you confirm the instance ID and job ID. For more information, see [Request Parameters](#api-detail-35).  
       * ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 20 times/second.  
       * - API invocation frequency: 50 times/second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param tmpReq InsertAiOutboundPhoneNumsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertAiOutboundPhoneNumsResponse
       */
      Models::InsertAiOutboundPhoneNumsResponse insertAiOutboundPhoneNumsWithOptions(const Models::InsertAiOutboundPhoneNumsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Import outbound call callee numbers based on the instance ID and job ID.
       *
       * @description - After importing outbound call callee numbers, the outbound calling job can operate normally.  
       * - Before invoking this API, we recommend that you confirm the instance ID and job ID. For more information, see [Request Parameters](#api-detail-35).  
       * ### Queries per second (QPS) limits  
       * - Per-user invocation frequency: 20 times/second.  
       * - API invocation frequency: 50 times/second.  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request InsertAiOutboundPhoneNumsRequest
       * @return InsertAiOutboundPhoneNumsResponse
       */
      Models::InsertAiOutboundPhoneNumsResponse insertAiOutboundPhoneNums(const Models::InsertAiOutboundPhoneNumsRequest &request);

      /**
       * @param request InsertTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InsertTaskDetailResponse
       */
      Models::InsertTaskDetailResponse insertTaskDetailWithOptions(const Models::InsertTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request InsertTaskDetailRequest
       * @return InsertTaskDetailResponse
       */
      Models::InsertTaskDetailResponse insertTaskDetail(const Models::InsertTaskDetailRequest &request);

      /**
       * @summary Add a third party to the call.
       *
       * @param request JoinThirdCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return JoinThirdCallResponse
       */
      Models::JoinThirdCallResponse joinThirdCallWithOptions(const Models::JoinThirdCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a third party to the call.
       *
       * @param request JoinThirdCallRequest
       * @return JoinThirdCallResponse
       */
      Models::JoinThirdCallResponse joinThirdCall(const Models::JoinThirdCallRequest &request);

      /**
       * @summary Query the agent list in the Cloud Customer Service System by AICCS instance ID and skill group ID.
       *
       * @description - Before invoking this API, confirm the AICCS instance information and skill group information. For guidance on how to obtain these details, refer to the description of [Request Parameters](#api-detail-35).
       * - If an agent is not assigned to any skill group, you can invoke [GetAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-getagent) to query the agent information.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListAgentBySkillGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentBySkillGroupIdResponse
       */
      Models::ListAgentBySkillGroupIdResponse listAgentBySkillGroupIdWithOptions(const Models::ListAgentBySkillGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the agent list in the Cloud Customer Service System by AICCS instance ID and skill group ID.
       *
       * @description - Before invoking this API, confirm the AICCS instance information and skill group information. For guidance on how to obtain these details, refer to the description of [Request Parameters](#api-detail-35).
       * - If an agent is not assigned to any skill group, you can invoke [GetAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-getagent) to query the agent information.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListAgentBySkillGroupIdRequest
       * @return ListAgentBySkillGroupIdResponse
       */
      Models::ListAgentBySkillGroupIdResponse listAgentBySkillGroupId(const Models::ListAgentBySkillGroupIdRequest &request);

      /**
       * @summary Retrieve the list of robot scripts, including robot type, robot name, robot ID, associated business, and industry information.
       *
       * @description - Before invoking this API, ensure that you already have scripts that have passed the Review.
       * - If you do not have any scripts that have passed the Review, add a script and submit it for Review in the [Script Management](https://aiccs.console.aliyun.com/patter/list) interface first.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttle will be triggered.
       *
       * @param request ListAiccsRobotRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAiccsRobotResponse
       */
      Models::ListAiccsRobotResponse listAiccsRobotWithOptions(const Models::ListAiccsRobotRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the list of robot scripts, including robot type, robot name, robot ID, associated business, and industry information.
       *
       * @description - Before invoking this API, ensure that you already have scripts that have passed the Review.
       * - If you do not have any scripts that have passed the Review, add a script and submit it for Review in the [Script Management](https://aiccs.console.aliyun.com/patter/list) interface first.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttle will be triggered.
       *
       * @param request ListAiccsRobotRequest
       * @return ListAiccsRobotResponse
       */
      Models::ListAiccsRobotResponse listAiccsRobot(const Models::ListAiccsRobotRequest &request);

      /**
       * @summary Lists the system and custom TTS voices available for large model-based outbound calls.
       *
       * @description If you have not created and published any custom voices on the [Custom Voice](https://aiccs.console.aliyun.com/engine/voiceprint) page, the operation returns only system voices.
       *
       * @param request ListAvailableTtsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAvailableTtsResponse
       */
      Models::ListAvailableTtsResponse listAvailableTtsWithOptions(const Models::ListAvailableTtsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the system and custom TTS voices available for large model-based outbound calls.
       *
       * @description If you have not created and published any custom voices on the [Custom Voice](https://aiccs.console.aliyun.com/engine/voiceprint) page, the operation returns only system voices.
       *
       * @param request ListAvailableTtsRequest
       * @return ListAvailableTtsResponse
       */
      Models::ListAvailableTtsResponse listAvailableTts(const Models::ListAvailableTtsRequest &request);

      /**
       * @summary Invoke ListChatRecordDetail to query online session details by time period.
       *
       * @description This API queries information about completed online sessions within a specified time range, including session content. The query rules are as follows:  
       * - The maximum time span for the query is 1 Day.  
       * - If only the query End Time is provided, the query Start Time is set to 1 hour before the End Time.  
       * - If only the query Start Time is provided, the End Time is set to 1 hour after the Start Time.  
       * - If neither time is provided, the End Time defaults to the current time, and the Start Time is set to 1 hour before the End Time.  
       * - If both times are provided but the time span exceeds 1 Day, an abnormal response is returned.
       *
       * @param request ListChatRecordDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatRecordDetailResponse
       */
      Models::ListChatRecordDetailResponse listChatRecordDetailWithOptions(const Models::ListChatRecordDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ListChatRecordDetail to query online session details by time period.
       *
       * @description This API queries information about completed online sessions within a specified time range, including session content. The query rules are as follows:  
       * - The maximum time span for the query is 1 Day.  
       * - If only the query End Time is provided, the query Start Time is set to 1 hour before the End Time.  
       * - If only the query Start Time is provided, the End Time is set to 1 hour after the Start Time.  
       * - If neither time is provided, the End Time defaults to the current time, and the Start Time is set to 1 hour before the End Time.  
       * - If both times are provided but the time span exceeds 1 Day, an abnormal response is returned.
       *
       * @param request ListChatRecordDetailRequest
       * @return ListChatRecordDetailResponse
       */
      Models::ListChatRecordDetailResponse listChatRecordDetail(const Models::ListChatRecordDetailRequest &request);

      /**
       * @summary Query Intelligent Contact Bot conversation records.
       *
       * @description - You can invoke this API to query Intelligent Contact Bot conversation records, or view them in the **Task Management** > **Details** > **View Conversation Records** interface.
       * - Before invoking this API, ensure that your created Intelligent Contact Bot calling job has successfully connected to at least one phone number.
       * - If you do not have an existing Intelligent Contact Bot calling job, you can create and start a job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface, or use the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) and [StartTask](https://help.aliyun.com/document_detail/2718005.html) APIs to create and start a job.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListDialogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDialogResponse
       */
      Models::ListDialogResponse listDialogWithOptions(const Models::ListDialogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Intelligent Contact Bot conversation records.
       *
       * @description - You can invoke this API to query Intelligent Contact Bot conversation records, or view them in the **Task Management** > **Details** > **View Conversation Records** interface.
       * - Before invoking this API, ensure that your created Intelligent Contact Bot calling job has successfully connected to at least one phone number.
       * - If you do not have an existing Intelligent Contact Bot calling job, you can create and start a job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface, or use the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) and [StartTask](https://help.aliyun.com/document_detail/2718005.html) APIs to create and start a job.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListDialogRequest
       * @return ListDialogResponse
       */
      Models::ListDialogResponse listDialog(const Models::ListDialogRequest &request);

      /**
       * @summary Invoke ListHotlineRecord to query the hotline recording list by hotline session ID.
       *
       * @param request ListHotlineRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotlineRecordResponse
       */
      Models::ListHotlineRecordResponse listHotlineRecordWithOptions(const Models::ListHotlineRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ListHotlineRecord to query the hotline recording list by hotline session ID.
       *
       * @param request ListHotlineRecordRequest
       * @return ListHotlineRecordResponse
       */
      Models::ListHotlineRecordResponse listHotlineRecord(const Models::ListHotlineRecordRequest &request);

      /**
       * @summary Query the list of hotline details by time period.
       *
       * @description This API queries detailed hotline information within a specified time range, including hotline call information. The query rules are as follows:  
       * - The maximum time span for the query is 1 Day.  
       * - If only the query End Time is provided, the query Start Time is set to 1 hour before the End Time.  
       * - If only the query Start Time is provided, the End Time is set to 1 hour after the Start Time.  
       * - If neither time is provided, the End Time defaults to the current time, and the Start Time is set to 1 hour before the End Time.  
       * - If both times are provided but the time span exceeds 1 Day, an abnormal result is returned.
       *
       * @param request ListHotlineRecordDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListHotlineRecordDetailResponse
       */
      Models::ListHotlineRecordDetailResponse listHotlineRecordDetailWithOptions(const Models::ListHotlineRecordDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of hotline details by time period.
       *
       * @description This API queries detailed hotline information within a specified time range, including hotline call information. The query rules are as follows:  
       * - The maximum time span for the query is 1 Day.  
       * - If only the query End Time is provided, the query Start Time is set to 1 hour before the End Time.  
       * - If only the query Start Time is provided, the End Time is set to 1 hour after the Start Time.  
       * - If neither time is provided, the End Time defaults to the current time, and the Start Time is set to 1 hour before the End Time.  
       * - If both times are provided but the time span exceeds 1 Day, an abnormal result is returned.
       *
       * @param request ListHotlineRecordDetailRequest
       * @return ListHotlineRecordDetailResponse
       */
      Models::ListHotlineRecordDetailResponse listHotlineRecordDetail(const Models::ListHotlineRecordDetailRequest &request);

      /**
       * @summary Obtain the outbound caller phone numbers for a specified agent based on the instance ID and agent account name.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user API call frequency: No rate limiting.
       * - API frequency: 100 calls per second.
       * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListOutboundPhoneNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOutboundPhoneNumberResponse
       */
      Models::ListOutboundPhoneNumberResponse listOutboundPhoneNumberWithOptions(const Models::ListOutboundPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the outbound caller phone numbers for a specified agent based on the instance ID and agent account name.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user API call frequency: No rate limiting.
       * - API frequency: 100 calls per second.
       * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListOutboundPhoneNumberRequest
       * @return ListOutboundPhoneNumberResponse
       */
      Models::ListOutboundPhoneNumberResponse listOutboundPhoneNumber(const Models::ListOutboundPhoneNumberRequest &request);

      /**
       * @summary Query Intelligent Contact Robot call records.
       *
       * @description - Before invoking this API, ensure that you have already initiated an outbound job using the Intelligent Contact Robot.
       * - If you have not yet initiated an outbound job using the Intelligent Contact Robot, you can invoke the [RobotCall](https://help.aliyun.com/document_detail/2717996.html) API to start one.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListRobotCallDialogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRobotCallDialogResponse
       */
      Models::ListRobotCallDialogResponse listRobotCallDialogWithOptions(const Models::ListRobotCallDialogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Intelligent Contact Robot call records.
       *
       * @description - Before invoking this API, ensure that you have already initiated an outbound job using the Intelligent Contact Robot.
       * - If you have not yet initiated an outbound job using the Intelligent Contact Robot, you can invoke the [RobotCall](https://help.aliyun.com/document_detail/2717996.html) API to start one.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListRobotCallDialogRequest
       * @return ListRobotCallDialogResponse
       */
      Models::ListRobotCallDialogResponse listRobotCallDialog(const Models::ListRobotCallDialogRequest &request);

      /**
       * @summary Retrieves the list of robot node information based on the robot ID, which is the script ID.
       *
       * @description - Robot node information includes flow name, model name, node name, whether it is an output, and output ID.  
       * - Before invoking this API, you can confirm the robot ID (that is, the script ID) by following the instructions in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListRobotNodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRobotNodeResponse
       */
      Models::ListRobotNodeResponse listRobotNodeWithOptions(const Models::ListRobotNodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of robot node information based on the robot ID, which is the script ID.
       *
       * @description - Robot node information includes flow name, model name, node name, whether it is an output, and output ID.  
       * - Before invoking this API, you can confirm the robot ID (that is, the script ID) by following the instructions in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListRobotNodeRequest
       * @return ListRobotNodeResponse
       */
      Models::ListRobotNodeResponse listRobotNode(const Models::ListRobotNodeRequest &request);

      /**
       * @summary Queries the list of robot parameters by robot ID, which is also the script ID.
       *
       * @description - Before invoking this API, ensure that you have already added input parameters for the robot.
       * - If your robot does not have any input parameters, go to the [**Script Management**](https://aiccs.console.aliyun.com/patter/list) > **Configuration** > **Input and Output Parameters** interface and click to add an input parameter.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttle will be triggered.
       *
       * @param request ListRobotParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRobotParamsResponse
       */
      Models::ListRobotParamsResponse listRobotParamsWithOptions(const Models::ListRobotParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of robot parameters by robot ID, which is also the script ID.
       *
       * @description - Before invoking this API, ensure that you have already added input parameters for the robot.
       * - If your robot does not have any input parameters, go to the [**Script Management**](https://aiccs.console.aliyun.com/patter/list) > **Configuration** > **Input and Output Parameters** interface and click to add an input parameter.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttle will be triggered.
       *
       * @param request ListRobotParamsRequest
       * @return ListRobotParamsResponse
       */
      Models::ListRobotParamsResponse listRobotParams(const Models::ListRobotParamsRequest &request);

      /**
       * @summary Invoke ListRoles to obtain the list of all roles under a tenant.
       *
       * @param request ListRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke ListRoles to obtain the list of all roles under a tenant.
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary Query skill groups in the Cloud Customer Service System by instance ID and skill group channel type.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillGroupResponse
       */
      Models::ListSkillGroupResponse listSkillGroupWithOptions(const Models::ListSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query skill groups in the Cloud Customer Service System by instance ID and skill group channel type.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListSkillGroupRequest
       * @return ListSkillGroupResponse
       */
      Models::ListSkillGroupResponse listSkillGroup(const Models::ListSkillGroupRequest &request);

      /**
       * @summary Perform a paged query to retrieve the list of Intelligent Contact Robot call jobs. The response includes the total number of jobs and job details.
       *
       * @description - You can use this API to obtain the list of Intelligent Contact Robot call jobs, or retrieve the job list from the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
       * - If you have not created any Intelligent Contact Robot call jobs, you can click **Create Job** in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or create a job by invoking the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
       * - The optional parameters of this API serve as Filter Conditions for the Intelligent Contact Robot call job list. If these parameters are not specified, the API queries all jobs.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 500 calls per second.
       * > If the combined invocations from multiple users exceed the API frequency limit, throttle will be triggered.
       *
       * @param request ListTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskResponse
       */
      Models::ListTaskResponse listTaskWithOptions(const Models::ListTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Perform a paged query to retrieve the list of Intelligent Contact Robot call jobs. The response includes the total number of jobs and job details.
       *
       * @description - You can use this API to obtain the list of Intelligent Contact Robot call jobs, or retrieve the job list from the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
       * - If you have not created any Intelligent Contact Robot call jobs, you can click **Create Job** in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or create a job by invoking the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
       * - The optional parameters of this API serve as Filter Conditions for the Intelligent Contact Robot call job list. If these parameters are not specified, the API queries all jobs.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No Rate Limiting.
       * - API frequency: 500 calls per second.
       * > If the combined invocations from multiple users exceed the API frequency limit, throttle will be triggered.
       *
       * @param request ListTaskRequest
       * @return ListTaskResponse
       */
      Models::ListTaskResponse listTask(const Models::ListTaskRequest &request);

      /**
       * @summary Obtain the detail information of Intelligent Contact Robot call jobs.
       *
       * @description - You can invoke this API to obtain the detail information of Intelligent Contact Robot call jobs. Alternatively, you can view this information in the **Detail** interface under [**Task Management**](https://aiccs.console.aliyun.com/job/list).
       * - Before invoking this API, ensure that you have created an Intelligent Contact Robot and successfully started a job.
       * - If you do not have any successfully created Intelligent Contact Robot call jobs, you can create and start a job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface, or use the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) and [StartTask](https://help.aliyun.com/document_detail/2718005.html) APIs to create and start a job.
       * - The optional parameters in this API serve as filter conditions for the detail information of Intelligent Contact Robot call jobs. If these parameters are not specified, all job details will be queried.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTaskDetailResponse
       */
      Models::ListTaskDetailResponse listTaskDetailWithOptions(const Models::ListTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the detail information of Intelligent Contact Robot call jobs.
       *
       * @description - You can invoke this API to obtain the detail information of Intelligent Contact Robot call jobs. Alternatively, you can view this information in the **Detail** interface under [**Task Management**](https://aiccs.console.aliyun.com/job/list).
       * - Before invoking this API, ensure that you have created an Intelligent Contact Robot and successfully started a job.
       * - If you do not have any successfully created Intelligent Contact Robot call jobs, you can create and start a job in the [Task Management](https://aiccs.console.aliyun.com/job/list) interface, or use the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) and [StartTask](https://help.aliyun.com/document_detail/2718005.html) APIs to create and start a job.
       * - The optional parameters in this API serve as filter conditions for the detail information of Intelligent Contact Robot call jobs. If these parameters are not specified, all job details will be queried.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request ListTaskDetailRequest
       * @return ListTaskDetailResponse
       */
      Models::ListTaskDetailResponse listTaskDetail(const Models::ListTaskDetailRequest &request);

      /**
       * @summary Performs full-duplex large language model operations.
       *
       * @description - This operation can be called only during an intelligent outbound call. When you call this operation, set the **CallId** request parameter to the unique receipt ID of the ongoing call.
       * - **CallId** is the **CallId** parameter returned by the [LlmSmartCallFullDuplex](https://help.aliyun.com/document_detail/2718012.html) operation.
       *
       * @param request LlmFullDuplexCallOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LlmFullDuplexCallOperateResponse
       */
      Models::LlmFullDuplexCallOperateResponse llmFullDuplexCallOperateWithOptions(const Models::LlmFullDuplexCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs full-duplex large language model operations.
       *
       * @description - This operation can be called only during an intelligent outbound call. When you call this operation, set the **CallId** request parameter to the unique receipt ID of the ongoing call.
       * - **CallId** is the **CallId** parameter returned by the [LlmSmartCallFullDuplex](https://help.aliyun.com/document_detail/2718012.html) operation.
       *
       * @param request LlmFullDuplexCallOperateRequest
       * @return LlmFullDuplexCallOperateResponse
       */
      Models::LlmFullDuplexCallOperateResponse llmFullDuplexCallOperate(const Models::LlmFullDuplexCallOperateRequest &request);

      /**
       * @summary Intelligent outbound call based on an LLM.
       *
       * @description - Each API invocation supports adding only one called number. If you have multiple called numbers, invoke the API multiple times.
       * - Before initiating an intelligent call based on an LLM, ensure that you have created an LLM application in the [Application Management](https://aiccs.console.aliyun.com/engine/llmApp) interface and have successfully requested a real number in the Voice Service [Number Management](https://dyvmsnext.console.aliyun.com/number/list/normal) interface.
       *
       * @param tmpReq LlmSmartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LlmSmartCallResponse
       */
      Models::LlmSmartCallResponse llmSmartCallWithOptions(const Models::LlmSmartCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Intelligent outbound call based on an LLM.
       *
       * @description - Each API invocation supports adding only one called number. If you have multiple called numbers, invoke the API multiple times.
       * - Before initiating an intelligent call based on an LLM, ensure that you have created an LLM application in the [Application Management](https://aiccs.console.aliyun.com/engine/llmApp) interface and have successfully requested a real number in the Voice Service [Number Management](https://dyvmsnext.console.aliyun.com/number/list/normal) interface.
       *
       * @param request LlmSmartCallRequest
       * @return LlmSmartCallResponse
       */
      Models::LlmSmartCallResponse llmSmartCall(const Models::LlmSmartCallRequest &request);

      /**
       * @summary Initiates a smart call to an encrypted number using a large language model.
       *
       * @param tmpReq LlmSmartCallEncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LlmSmartCallEncryptResponse
       */
      Models::LlmSmartCallEncryptResponse llmSmartCallEncryptWithOptions(const Models::LlmSmartCallEncryptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a smart call to an encrypted number using a large language model.
       *
       * @param request LlmSmartCallEncryptRequest
       * @return LlmSmartCallEncryptResponse
       */
      Models::LlmSmartCallEncryptResponse llmSmartCallEncrypt(const Models::LlmSmartCallEncryptRequest &request);

      /**
       * @summary Initiates a full-duplex Artificial Intelligence Cloud Call Service call with support for personalized configurations.
       *
       * @description ## Operation description
       * - Before calling this operation, make sure that you have configured the ASR callback URL.
       * - This operation is available only to users whose UIDs are added to the whitelist.
       * - The request rate limit for a single user is 100 QPS.
       * - `CalledNumber` and `CallerNumber` are required parameters that specify the called number and the calling number, respectively.
       * - Optional parameters such as `StartWordParam`, `TtsVoiceCode`, `TtsSpeed`, and `TtsVolume` allow you to customize the call experience. If these parameters are not specified, the default settings of the application are used.
       * - The `SessionTimeout` parameter specifies the maximum call duration in seconds. The call is automatically ended when the specified duration is exceeded. For the default value and valid range, refer to the relevant documentation.
       * - The `OutId` field can be used to track a unique identifier in an external system. The value must be 1 to 32 bytes in length.
       *
       * @param tmpReq LlmSmartCallFullDuplexRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LlmSmartCallFullDuplexResponse
       */
      Models::LlmSmartCallFullDuplexResponse llmSmartCallFullDuplexWithOptions(const Models::LlmSmartCallFullDuplexRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a full-duplex Artificial Intelligence Cloud Call Service call with support for personalized configurations.
       *
       * @description ## Operation description
       * - Before calling this operation, make sure that you have configured the ASR callback URL.
       * - This operation is available only to users whose UIDs are added to the whitelist.
       * - The request rate limit for a single user is 100 QPS.
       * - `CalledNumber` and `CallerNumber` are required parameters that specify the called number and the calling number, respectively.
       * - Optional parameters such as `StartWordParam`, `TtsVoiceCode`, `TtsSpeed`, and `TtsVolume` allow you to customize the call experience. If these parameters are not specified, the default settings of the application are used.
       * - The `SessionTimeout` parameter specifies the maximum call duration in seconds. The call is automatically ended when the specified duration is exceeded. For the default value and valid range, refer to the relevant documentation.
       * - The `OutId` field can be used to track a unique identifier in an external system. The value must be 1 to 32 bytes in length.
       *
       * @param request LlmSmartCallFullDuplexRequest
       * @return LlmSmartCallFullDuplexResponse
       */
      Models::LlmSmartCallFullDuplexResponse llmSmartCallFullDuplex(const Models::LlmSmartCallFullDuplexRequest &request);

      /**
       * @summary Invoke MakeCall to initiate a call.
       *
       * @param request MakeCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MakeCallResponse
       */
      Models::MakeCallResponse makeCallWithOptions(const Models::MakeCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke MakeCall to initiate a call.
       *
       * @param request MakeCallRequest
       * @return MakeCallResponse
       */
      Models::MakeCallResponse makeCall(const Models::MakeCallRequest &request);

      /**
       * @summary You can invoke MakeDoubleCall to initiate a call by using the server-side software development kit (SDK).
       *
       * @param request MakeDoubleCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MakeDoubleCallResponse
       */
      Models::MakeDoubleCallResponse makeDoubleCallWithOptions(const Models::MakeDoubleCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can invoke MakeDoubleCall to initiate a call by using the server-side software development kit (SDK).
       *
       * @param request MakeDoubleCallRequest
       * @return MakeDoubleCallResponse
       */
      Models::MakeDoubleCallResponse makeDoubleCall(const Models::MakeDoubleCallRequest &request);

      /**
       * @summary Returns a paginated list of agents.
       *
       * @param request PageQueryAgentListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageQueryAgentListResponse
       */
      Models::PageQueryAgentListResponse pageQueryAgentListWithOptions(const Models::PageQueryAgentListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns a paginated list of agents.
       *
       * @param request PageQueryAgentListRequest
       * @return PageQueryAgentListResponse
       */
      Models::PageQueryAgentListResponse pageQueryAgentList(const Models::PageQueryAgentListRequest &request);

      /**
       * @summary Retrieve a paginated list of agents (agency mode V2)
       *
       * @param request PageQueryAgentListNewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageQueryAgentListNewResponse
       */
      Models::PageQueryAgentListNewResponse pageQueryAgentListNewWithOptions(const Models::PageQueryAgentListNewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a paginated list of agents (agency mode V2)
       *
       * @param request PageQueryAgentListNewRequest
       * @return PageQueryAgentListNewResponse
       */
      Models::PageQueryAgentListNewResponse pageQueryAgentListNew(const Models::PageQueryAgentListNewRequest &request);

      /**
       * @summary Runs a paginated query for call task details.
       *
       * @description - You must create a call task before you can query its details.
       * - You can create a call task on the **call task management** page or by calling the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) API.
       *
       * @param tmpReq QueryAiCallDetailPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAiCallDetailPageResponse
       */
      Models::QueryAiCallDetailPageResponse queryAiCallDetailPageWithOptions(const Models::QueryAiCallDetailPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Runs a paginated query for call task details.
       *
       * @description - You must create a call task before you can query its details.
       * - You can create a call task on the **call task management** page or by calling the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) API.
       *
       * @param request QueryAiCallDetailPageRequest
       * @return QueryAiCallDetailPageResponse
       */
      Models::QueryAiCallDetailPageResponse queryAiCallDetailPage(const Models::QueryAiCallDetailPageRequest &request);

      /**
       * @summary Gets basic information for a call task.
       *
       * @param request QueryAiCallTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAiCallTaskDetailResponse
       */
      Models::QueryAiCallTaskDetailResponse queryAiCallTaskDetailWithOptions(const Models::QueryAiCallTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets basic information for a call task.
       *
       * @param request QueryAiCallTaskDetailRequest
       * @return QueryAiCallTaskDetailResponse
       */
      Models::QueryAiCallTaskDetailResponse queryAiCallTaskDetail(const Models::QueryAiCallTaskDetailRequest &request);

      /**
       * @summary Retrieves a list of call tasks.
       *
       * @param request QueryAiCallTaskPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAiCallTaskPageResponse
       */
      Models::QueryAiCallTaskPageResponse queryAiCallTaskPageWithOptions(const Models::QueryAiCallTaskPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of call tasks.
       *
       * @param request QueryAiCallTaskPageRequest
       * @return QueryAiCallTaskPageResponse
       */
      Models::QueryAiCallTaskPageResponse queryAiCallTaskPage(const Models::QueryAiCallTaskPageRequest &request);

      /**
       * @summary Retrieve the details of a communication agent.
       *
       * @param request QueryAiVoiceAgentDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAiVoiceAgentDetailResponse
       */
      Models::QueryAiVoiceAgentDetailResponse queryAiVoiceAgentDetailWithOptions(const Models::QueryAiVoiceAgentDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the details of a communication agent.
       *
       * @param request QueryAiVoiceAgentDetailRequest
       * @return QueryAiVoiceAgentDetailResponse
       */
      Models::QueryAiVoiceAgentDetailResponse queryAiVoiceAgentDetail(const Models::QueryAiVoiceAgentDetailRequest &request);

      /**
       * @summary Gets details for a specified agent, including its basic, branch, and version information.
       *
       * @description ## Usage notes
       * - This API retrieves the details of a communication agent.
       * - If you do not specify `BranchId` and `VersionId`, the API returns the configuration for the latest published version on the effective branch. If the effective branch only contains a draft version, no configuration is returned.
       * - If you specify only `BranchId`, the API returns the configuration for the latest published version on the specified branch. If the specified branch only contains a draft version, no configuration is returned.
       * - If you specify both `BranchId` and `VersionId`, the API returns the configuration for the specified version.
       * - When `BranchDeployStatus` is `1` (branch deployed) and `VersionPublishStatus` is `1` (version published), imported outbound tasks use the configuration of this branch.
       *
       * @param request QueryAiVoiceAgentDetailNewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAiVoiceAgentDetailNewResponse
       */
      Models::QueryAiVoiceAgentDetailNewResponse queryAiVoiceAgentDetailNewWithOptions(const Models::QueryAiVoiceAgentDetailNewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets details for a specified agent, including its basic, branch, and version information.
       *
       * @description ## Usage notes
       * - This API retrieves the details of a communication agent.
       * - If you do not specify `BranchId` and `VersionId`, the API returns the configuration for the latest published version on the effective branch. If the effective branch only contains a draft version, no configuration is returned.
       * - If you specify only `BranchId`, the API returns the configuration for the latest published version on the specified branch. If the specified branch only contains a draft version, no configuration is returned.
       * - If you specify both `BranchId` and `VersionId`, the API returns the configuration for the specified version.
       * - When `BranchDeployStatus` is `1` (branch deployed) and `VersionPublishStatus` is `1` (version published), imported outbound tasks use the configuration of this branch.
       *
       * @param request QueryAiVoiceAgentDetailNewRequest
       * @return QueryAiVoiceAgentDetailNewResponse
       */
      Models::QueryAiVoiceAgentDetailNewResponse queryAiVoiceAgentDetailNew(const Models::QueryAiVoiceAgentDetailNewRequest &request);

      /**
       * @summary Gets call details.
       *
       * @description - This API retrieves call details. You can also view these details on the **call task management** > **details** > **execution history** > **completed** > **call details** page.
       * - Before calling this API, make sure you have created a call task and imported called number data.
       * - You can create a call task and import called number data either on the **call task management** page or by using the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) and [ImportTaskNumberDatas](https://help.aliyun.com/document_detail/2926815.html) APIs.
       *
       * @param request QueryConversationDetailInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConversationDetailInfoResponse
       */
      Models::QueryConversationDetailInfoResponse queryConversationDetailInfoWithOptions(const Models::QueryConversationDetailInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets call details.
       *
       * @description - This API retrieves call details. You can also view these details on the **call task management** > **details** > **execution history** > **completed** > **call details** page.
       * - Before calling this API, make sure you have created a call task and imported called number data.
       * - You can create a call task and import called number data either on the **call task management** page or by using the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) and [ImportTaskNumberDatas](https://help.aliyun.com/document_detail/2926815.html) APIs.
       *
       * @param request QueryConversationDetailInfoRequest
       * @return QueryConversationDetailInfoResponse
       */
      Models::QueryConversationDetailInfoResponse queryConversationDetailInfo(const Models::QueryConversationDetailInfoRequest &request);

      /**
       * @summary Queries the details of a call task and call records.
       *
       * @description - You can call this operation to query call details. You can also view call details in the **Call Task Management** > **Details** > **Execution Records** > **Completed** > **Call Details** console.
       * - Before calling this operation, make sure that you have created a call task and imported callee data.
       * - If you do not have a created call task, create a call task and import callee data in the **Call Task Management** console, or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) and [ImportTaskNumberDatas](https://help.aliyun.com/document_detail/2926815.html) operations to create a call task and import callee data.
       *
       * @param request QueryConversationDetailInfoNewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryConversationDetailInfoNewResponse
       */
      Models::QueryConversationDetailInfoNewResponse queryConversationDetailInfoNewWithOptions(const Models::QueryConversationDetailInfoNewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a call task and call records.
       *
       * @description - You can call this operation to query call details. You can also view call details in the **Call Task Management** > **Details** > **Execution Records** > **Completed** > **Call Details** console.
       * - Before calling this operation, make sure that you have created a call task and imported callee data.
       * - If you do not have a created call task, create a call task and import callee data in the **Call Task Management** console, or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) and [ImportTaskNumberDatas](https://help.aliyun.com/document_detail/2926815.html) operations to create a call task and import callee data.
       *
       * @param request QueryConversationDetailInfoNewRequest
       * @return QueryConversationDetailInfoNewResponse
       */
      Models::QueryConversationDetailInfoNewResponse queryConversationDetailInfoNew(const Models::QueryConversationDetailInfoNewRequest &request);

      /**
       * @summary Invoke QueryHotlineInQueue to obtain hotline agent data for a skill group by skill group ID.
       *
       * @param request QueryHotlineInQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryHotlineInQueueResponse
       */
      Models::QueryHotlineInQueueResponse queryHotlineInQueueWithOptions(const Models::QueryHotlineInQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke QueryHotlineInQueue to obtain hotline agent data for a skill group by skill group ID.
       *
       * @param request QueryHotlineInQueueRequest
       * @return QueryHotlineInQueueResponse
       */
      Models::QueryHotlineInQueueResponse queryHotlineInQueue(const Models::QueryHotlineInQueueRequest &request);

      /**
       * @summary Query the hotline number configuration list by instance ID. Fuzzy query by hotline number is supported.
       *
       * @description The hotline number configuration includes information such as the hotline number, number location, carrier, and whether it is used for incoming calls. For details, see [Return Parameters](#api-detail-40).
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: 100 times per second.
       * - API invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param tmpReq QueryHotlineNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryHotlineNumberResponse
       */
      Models::QueryHotlineNumberResponse queryHotlineNumberWithOptions(const Models::QueryHotlineNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the hotline number configuration list by instance ID. Fuzzy query by hotline number is supported.
       *
       * @description The hotline number configuration includes information such as the hotline number, number location, carrier, and whether it is used for incoming calls. For details, see [Return Parameters](#api-detail-40).
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: 100 times per second.
       * - API invocation frequency: 100 times per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request QueryHotlineNumberRequest
       * @return QueryHotlineNumberResponse
       */
      Models::QueryHotlineNumberResponse queryHotlineNumber(const Models::QueryHotlineNumberRequest &request);

      /**
       * @summary 查询呼入CallId
       *
       * @param request QueryInboundCallIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInboundCallIdResponse
       */
      Models::QueryInboundCallIdResponse queryInboundCallIdWithOptions(const Models::QueryInboundCallIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询呼入CallId
       *
       * @param request QueryInboundCallIdRequest
       * @return QueryInboundCallIdResponse
       */
      Models::QueryInboundCallIdResponse queryInboundCallId(const Models::QueryInboundCallIdRequest &request);

      /**
       * @param request QueryOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOutboundTaskResponse
       */
      Models::QueryOutboundTaskResponse queryOutboundTaskWithOptions(const Models::QueryOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryOutboundTaskRequest
       * @return QueryOutboundTaskResponse
       */
      Models::QueryOutboundTaskResponse queryOutboundTask(const Models::QueryOutboundTaskRequest &request);

      /**
       * @summary Queries the skill group list of the Cloud Customer Service System by instance ID.
       *
       * @description This API allows you to query information such as the display name, description, channel type, and ID of skill groups. For details, see [Response Parameters](#api-detail-40).
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 1000 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request QuerySkillGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySkillGroupsResponse
       */
      Models::QuerySkillGroupsResponse querySkillGroupsWithOptions(const Models::QuerySkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the skill group list of the Cloud Customer Service System by instance ID.
       *
       * @description This API allows you to query information such as the display name, description, channel type, and ID of skill groups. For details, see [Response Parameters](#api-detail-40).
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 1000 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request QuerySkillGroupsRequest
       * @return QuerySkillGroupsResponse
       */
      Models::QuerySkillGroupsResponse querySkillGroups(const Models::QuerySkillGroupsRequest &request);

      /**
       * @param request QueryTaskDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskDetailResponse
       */
      Models::QueryTaskDetailResponse queryTaskDetailWithOptions(const Models::QueryTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTaskDetailRequest
       * @return QueryTaskDetailResponse
       */
      Models::QueryTaskDetailResponse queryTaskDetail(const Models::QueryTaskDetailRequest &request);

      /**
       * @summary Invoke the QueryTickets API to query ticket information.
       *
       * @param tmpReq QueryTicketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTicketsResponse
       */
      Models::QueryTicketsResponse queryTicketsWithOptions(const Models::QueryTicketsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the QueryTickets API to query ticket information.
       *
       * @param request QueryTicketsRequest
       * @return QueryTicketsResponse
       */
      Models::QueryTicketsResponse queryTickets(const Models::QueryTicketsRequest &request);

      /**
       * @summary Query contact data by instance, list of contact IDs, list of session IDs, and so on.
       *
       * @description This API allows you to query contact data such as contact status, session recipient, agent name, contact channel, satisfaction rating, and evaluation status. For details, see [Response parameters](#api-detail-40).  
       * ### Queries per second (QPS) limit  
       * - Per-user invocation frequency: No Rate Limiting.  
       * - API frequency: 50 queries per second (QPS).  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request QueryTouchListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTouchListResponse
       */
      Models::QueryTouchListResponse queryTouchListWithOptions(const Models::QueryTouchListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query contact data by instance, list of contact IDs, list of session IDs, and so on.
       *
       * @description This API allows you to query contact data such as contact status, session recipient, agent name, contact channel, satisfaction rating, and evaluation status. For details, see [Response parameters](#api-detail-40).  
       * ### Queries per second (QPS) limit  
       * - Per-user invocation frequency: No Rate Limiting.  
       * - API frequency: 50 queries per second (QPS).  
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request QueryTouchListRequest
       * @return QueryTouchListResponse
       */
      Models::QueryTouchListResponse queryTouchList(const Models::QueryTouchListRequest &request);

      /**
       * @summary Remove agent accounts from a skill group by specifying the skill group and agent IDs.
       *
       * @description - If you need to provide agent or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * - You can invoke [ListAgentBySkillGroupId](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-listagentbyskillgroupid) to retrieve agent information under a skill group and verify whether the removal aligns with your expectations.
       * - If you accidentally remove an agent, you can invoke [UpdateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-updateagent) to update the agent data and reassign the skill group to the agent.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 50 times/second.
       * - API-wide invocation frequency: 100 times/second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param tmpReq RemoveAgentFromSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveAgentFromSkillGroupResponse
       */
      Models::RemoveAgentFromSkillGroupResponse removeAgentFromSkillGroupWithOptions(const Models::RemoveAgentFromSkillGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove agent accounts from a skill group by specifying the skill group and agent IDs.
       *
       * @description - If you need to provide agent or skill group information, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * - You can invoke [ListAgentBySkillGroupId](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-listagentbyskillgroupid) to retrieve agent information under a skill group and verify whether the removal aligns with your expectations.
       * - If you accidentally remove an agent, you can invoke [UpdateAgent](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-updateagent) to update the agent data and reassign the skill group to the agent.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 50 times/second.
       * - API-wide invocation frequency: 100 times/second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param request RemoveAgentFromSkillGroupRequest
       * @return RemoveAgentFromSkillGroupResponse
       */
      Models::RemoveAgentFromSkillGroupResponse removeAgentFromSkillGroup(const Models::RemoveAgentFromSkillGroupRequest &request);

      /**
       * @summary Deletes a skill group in the Cloud Customer Service System based on the AICCS instance ID and skill group ID.
       *
       * @description - Deletion is a sensitive operation. Proceed with caution.  
       * - Before deletion, confirm the AICCS instance ID and the skill group ID to be deleted. Refer to the guidance in [Request Parameters](#api-detail-35) for details on how to obtain them.  
       * - After deletion, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API to verify the skill group status.  
       * - If you accidentally delete a skill group, you can recreate it by invoking the [CreateSkillGroup](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createskillgroup) API.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.  
       * - API frequency: 1000 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request RemoveSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveSkillGroupResponse
       */
      Models::RemoveSkillGroupResponse removeSkillGroupWithOptions(const Models::RemoveSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a skill group in the Cloud Customer Service System based on the AICCS instance ID and skill group ID.
       *
       * @description - Deletion is a sensitive operation. Proceed with caution.  
       * - Before deletion, confirm the AICCS instance ID and the skill group ID to be deleted. Refer to the guidance in [Request Parameters](#api-detail-35) for details on how to obtain them.  
       * - After deletion, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API to verify the skill group status.  
       * - If you accidentally delete a skill group, you can recreate it by invoking the [CreateSkillGroup](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-createskillgroup) API.
       * ### Queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.  
       * - API frequency: 1000 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request RemoveSkillGroupRequest
       * @return RemoveSkillGroupResponse
       */
      Models::RemoveSkillGroupResponse removeSkillGroup(const Models::RemoveSkillGroupRequest &request);

      /**
       * @summary Invoke the ResetHotlineNumber API to reset the inbound (IVR flow) and outbound (effective scope) configuration information of a hotline number.
       *
       * @param tmpReq ResetHotlineNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetHotlineNumberResponse
       */
      Models::ResetHotlineNumberResponse resetHotlineNumberWithOptions(const Models::ResetHotlineNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the ResetHotlineNumber API to reset the inbound (IVR flow) and outbound (effective scope) configuration information of a hotline number.
       *
       * @param request ResetHotlineNumberRequest
       * @return ResetHotlineNumberResponse
       */
      Models::ResetHotlineNumberResponse resetHotlineNumber(const Models::ResetHotlineNumberRequest &request);

      /**
       * @param request RestartOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestartOutboundTaskResponse
       */
      Models::RestartOutboundTaskResponse restartOutboundTaskWithOptions(const Models::RestartOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RestartOutboundTaskRequest
       * @return RestartOutboundTaskResponse
       */
      Models::RestartOutboundTaskResponse restartOutboundTask(const Models::RestartOutboundTaskRequest &request);

      /**
       * @summary Initiate an outbound call using the Intelligent Contact Robot.
       *
       * @description - Before initiating an outbound call using the Intelligent Contact Robot, ensure that you already have a reviewed and approved script in the [Script Management](https://aiccs.console.aliyun.com/patter/list) interface and an approved real number in the Voice Service [Real Number Management](https://dyvmsnext.console.aliyun.com/number/list/normal) interface.
       * - You can obtain the creation time of the call from the **date** parameter in the **Response Header** after invoking this API.  
       * > For example, if the **date** parameter is: `"date": "Mon, 24 Jun 2024 03:40:31 GMT"`, then the call creation time is: `"2024-06-24 03:40:31"`.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 1000 calls per second.
       * > If the total calls from multiple users exceed the API frequency limit, throttle will be triggered.
       *
       * @param request RobotCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RobotCallResponse
       */
      Models::RobotCallResponse robotCallWithOptions(const Models::RobotCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiate an outbound call using the Intelligent Contact Robot.
       *
       * @description - Before initiating an outbound call using the Intelligent Contact Robot, ensure that you already have a reviewed and approved script in the [Script Management](https://aiccs.console.aliyun.com/patter/list) interface and an approved real number in the Voice Service [Real Number Management](https://dyvmsnext.console.aliyun.com/number/list/normal) interface.
       * - You can obtain the creation time of the call from the **date** parameter in the **Response Header** after invoking this API.  
       * > For example, if the **date** parameter is: `"date": "Mon, 24 Jun 2024 03:40:31 GMT"`, then the call creation time is: `"2024-06-24 03:40:31"`.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 1000 calls per second.
       * > If the total calls from multiple users exceed the API frequency limit, throttle will be triggered.
       *
       * @param request RobotCallRequest
       * @return RobotCallResponse
       */
      Models::RobotCallResponse robotCall(const Models::RobotCallRequest &request);

      /**
       * @summary Initiate an Intelligent Speech Interaction call based on the callee\\"s caller ID, callee number, and intelligent outbound call audio file.
       *
       * @description - The following characters cannot appear in the Intelligent Speech Interaction SendCcoSmartCall callback: `@ = : "" $ { } ^ * ￥`.  
       * - After invoking this API, the **Data** field in the response contains the unique receipt ID for this call, which can be used when invoking the [SendCcoSmartCallOperate](https://help.aliyun.com/document_detail/2718013.html) API.
       * ### Queries Per Second (QPS) Limits
       * - Per-user invocation frequency: No rate limiting.  
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request SendCcoSmartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCcoSmartCallResponse
       */
      Models::SendCcoSmartCallResponse sendCcoSmartCallWithOptions(const Models::SendCcoSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiate an Intelligent Speech Interaction call based on the callee\\"s caller ID, callee number, and intelligent outbound call audio file.
       *
       * @description - The following characters cannot appear in the Intelligent Speech Interaction SendCcoSmartCall callback: `@ = : "" $ { } ^ * ￥`.  
       * - After invoking this API, the **Data** field in the response contains the unique receipt ID for this call, which can be used when invoking the [SendCcoSmartCallOperate](https://help.aliyun.com/document_detail/2718013.html) API.
       * ### Queries Per Second (QPS) Limits
       * - Per-user invocation frequency: No rate limiting.  
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request SendCcoSmartCallRequest
       * @return SendCcoSmartCallResponse
       */
      Models::SendCcoSmartCallResponse sendCcoSmartCall(const Models::SendCcoSmartCallRequest &request);

      /**
       * @summary Initiates a specified action during an Intelligent Outbound Call, applicable only to scenarios such as parallel transfer to a human agent or allowing a human agent to listen in on the man-machine dialogue.
       *
       * @description - This API can be successfully invoked only during an ongoing Intelligent Outbound Call. When invoking it, note that the **CallId** in the request parameters must be set to the unique receipt ID of the active call.  
       * - The **CallId** is the **Data** parameter returned when you invoke the [SendCcoSmartCall](https://help.aliyun.com/document_detail/2718012.html) API.
       *
       * @param request SendCcoSmartCallOperateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCcoSmartCallOperateResponse
       */
      Models::SendCcoSmartCallOperateResponse sendCcoSmartCallOperateWithOptions(const Models::SendCcoSmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a specified action during an Intelligent Outbound Call, applicable only to scenarios such as parallel transfer to a human agent or allowing a human agent to listen in on the man-machine dialogue.
       *
       * @description - This API can be successfully invoked only during an ongoing Intelligent Outbound Call. When invoking it, note that the **CallId** in the request parameters must be set to the unique receipt ID of the active call.  
       * - The **CallId** is the **Data** parameter returned when you invoke the [SendCcoSmartCall](https://help.aliyun.com/document_detail/2718012.html) API.
       *
       * @param request SendCcoSmartCallOperateRequest
       * @return SendCcoSmartCallOperateResponse
       */
      Models::SendCcoSmartCallOperateResponse sendCcoSmartCallOperate(const Models::SendCcoSmartCallOperateRequest &request);

      /**
       * @summary Send a hotline heartbeat request based on the instance ID, agent account name, and heartbeat signature.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request SendHotlineHeartBeatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendHotlineHeartBeatResponse
       */
      Models::SendHotlineHeartBeatResponse sendHotlineHeartBeatWithOptions(const Models::SendHotlineHeartBeatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Send a hotline heartbeat request based on the instance ID, agent account name, and heartbeat signature.
       *
       * @description ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request SendHotlineHeartBeatRequest
       * @return SendHotlineHeartBeatResponse
       */
      Models::SendHotlineHeartBeatResponse sendHotlineHeartBeat(const Models::SendHotlineHeartBeatRequest &request);

      /**
       * @summary Starts a call task.
       *
       * @description - Before you start a call task, ensure its status is Stopped.
       * - If you do not have a call task, create one on the **Call Task Management** page or by calling the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
       *
       * @param request StartAiCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAiCallTaskResponse
       */
      Models::StartAiCallTaskResponse startAiCallTaskWithOptions(const Models::StartAiCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a call task.
       *
       * @description - Before you start a call task, ensure its status is Stopped.
       * - If you do not have a call task, create one on the **Call Task Management** page or by calling the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
       *
       * @param request StartAiCallTaskRequest
       * @return StartAiCallTaskResponse
       */
      Models::StartAiCallTaskResponse startAiCallTask(const Models::StartAiCallTaskRequest &request);

      /**
       * @summary Start an outbound calling job by instance ID and job ID.
       *
       * @description - You can invoke this API to start an outbound calling job that is in the paused state.  
       * - An outbound calling job in the stopped state cannot be started again.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 20 times per second.  
       * - API invocation frequency: 20 times per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StartAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartAiOutboundTaskResponse
       */
      Models::StartAiOutboundTaskResponse startAiOutboundTaskWithOptions(const Models::StartAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start an outbound calling job by instance ID and job ID.
       *
       * @description - You can invoke this API to start an outbound calling job that is in the paused state.  
       * - An outbound calling job in the stopped state cannot be started again.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 20 times per second.  
       * - API invocation frequency: 20 times per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StartAiOutboundTaskRequest
       * @return StartAiOutboundTaskResponse
       */
      Models::StartAiOutboundTaskResponse startAiOutboundTask(const Models::StartAiOutboundTaskRequest &request);

      /**
       * @summary Initiate an outbound call based on the instance ID, agent account name, hotline outbound caller number, and callee number.
       *
       * @description ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StartCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCallResponse
       */
      Models::StartCallResponse startCallWithOptions(const Models::StartCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiate an outbound call based on the instance ID, agent account name, hotline outbound caller number, and callee number.
       *
       * @description ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StartCallRequest
       * @return StartCallResponse
       */
      Models::StartCallResponse startCall(const Models::StartCallRequest &request);

      /**
       * @summary Invoke StartCallV2 to initiate an outbound call V2.
       *
       * @param request StartCallV2Request
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCallV2Response
       */
      Models::StartCallV2Response startCallV2WithOptions(const Models::StartCallV2Request &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke StartCallV2 to initiate an outbound call V2.
       *
       * @param request StartCallV2Request
       * @return StartCallV2Response
       */
      Models::StartCallV2Response startCallV2(const Models::StartCallV2Request &request);

      /**
       * @summary Invoke StartChatWork to switch an online agent to the working status.
       *
       * @param request StartChatWorkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartChatWorkResponse
       */
      Models::StartChatWorkResponse startChatWorkWithOptions(const Models::StartChatWorkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke StartChatWork to switch an online agent to the working status.
       *
       * @param request StartChatWorkRequest
       * @return StartChatWorkResponse
       */
      Models::StartChatWorkResponse startChatWork(const Models::StartChatWorkRequest &request);

      /**
       * @summary Sign in a hotline agent by instance ID and agent account name to start the hotline service.
       *
       * @description - The **Data** parameter returned by this API is the token required to initiate a heartbeat.  
       * - If the agent takes a break, you can pause the hotline service by invoking the [SuspendHotlineService](https://help.aliyun.com/document_detail/2718046.html) API.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StartHotlineServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartHotlineServiceResponse
       */
      Models::StartHotlineServiceResponse startHotlineServiceWithOptions(const Models::StartHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sign in a hotline agent by instance ID and agent account name to start the hotline service.
       *
       * @description - The **Data** parameter returned by this API is the token required to initiate a heartbeat.  
       * - If the agent takes a break, you can pause the hotline service by invoking the [SuspendHotlineService](https://help.aliyun.com/document_detail/2718046.html) API.
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StartHotlineServiceRequest
       * @return StartHotlineServiceResponse
       */
      Models::StartHotlineServiceResponse startHotlineService(const Models::StartHotlineServiceRequest &request);

      /**
       * @summary Invoke the StartMicroOutbound API to initiate an outbound call request.
       *
       * @param request StartMicroOutboundRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartMicroOutboundResponse
       */
      Models::StartMicroOutboundResponse startMicroOutboundWithOptions(const Models::StartMicroOutboundRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the StartMicroOutbound API to initiate an outbound call request.
       *
       * @param request StartMicroOutboundRequest
       * @return StartMicroOutboundResponse
       */
      Models::StartMicroOutboundResponse startMicroOutbound(const Models::StartMicroOutboundRequest &request);

      /**
       * @summary Start a successfully created Intelligent Contact Robot calling job.
       *
       * @description - You can invoke this API to start a successfully created Intelligent Contact Robot calling job, or manually start the job on the [Task Management](https://aiccs.console.aliyun.com/job/list) page.
       * - Before invoking this API, ensure that you already have a successfully created Intelligent Contact Robot calling job.
       * - If you do not have a successfully created Intelligent Contact Robot outbound calling job, you can click to create a job on the [Task Management](https://aiccs.console.aliyun.com/job/list) page or create one by using the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StartTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTaskResponse
       */
      Models::StartTaskResponse startTaskWithOptions(const Models::StartTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Start a successfully created Intelligent Contact Robot calling job.
       *
       * @description - You can invoke this API to start a successfully created Intelligent Contact Robot calling job, or manually start the job on the [Task Management](https://aiccs.console.aliyun.com/job/list) page.
       * - Before invoking this API, ensure that you already have a successfully created Intelligent Contact Robot calling job.
       * - If you do not have a successfully created Intelligent Contact Robot outbound calling job, you can click to create a job on the [Task Management](https://aiccs.console.aliyun.com/job/list) page or create one by using the [CreateTask](https://help.aliyun.com/document_detail/2718003.html) API.
       * ### queries per second (QPS) Limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StartTaskRequest
       * @return StartTaskResponse
       */
      Models::StartTaskResponse startTask(const Models::StartTaskRequest &request);

      /**
       * @summary Stops an outbound call task.
       *
       * @description - Before you stop an outbound call task, ensure that the task has been created and its status is `running`.
       * - If you have not created an outbound call task, create one on the Outbound Task Management page or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
       *
       * @param request StopAiCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAiCallTaskResponse
       */
      Models::StopAiCallTaskResponse stopAiCallTaskWithOptions(const Models::StopAiCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an outbound call task.
       *
       * @description - Before you stop an outbound call task, ensure that the task has been created and its status is `running`.
       * - If you have not created an outbound call task, create one on the Outbound Task Management page or call the [CreateAiCallTask](https://help.aliyun.com/document_detail/2926796.html) operation.
       *
       * @param request StopAiCallTaskRequest
       * @return StopAiCallTaskResponse
       */
      Models::StopAiCallTaskResponse stopAiCallTask(const Models::StopAiCallTaskRequest &request);

      /**
       * @summary Pause an outbound calling job by instance ID and job ID.
       *
       * @description After pausing an outbound calling job, you can invoke the [StartAiOutboundTask](https://help.aliyun.com/document_detail/2718027.html) API to restart it.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 20 times/second.
       * - API invocation frequency: 20 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StopAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopAiOutboundTaskResponse
       */
      Models::StopAiOutboundTaskResponse stopAiOutboundTaskWithOptions(const Models::StopAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pause an outbound calling job by instance ID and job ID.
       *
       * @description After pausing an outbound calling job, you can invoke the [StartAiOutboundTask](https://help.aliyun.com/document_detail/2718027.html) API to restart it.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 20 times/second.
       * - API invocation frequency: 20 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StopAiOutboundTaskRequest
       * @return StopAiOutboundTaskResponse
       */
      Models::StopAiOutboundTaskResponse stopAiOutboundTask(const Models::StopAiOutboundTaskRequest &request);

      /**
       * @summary Pause an Intelligent Contact Robot calling job that has been successfully started.
       *
       * @description - You can use this API to pause an Intelligent Contact Robot calling job that has been successfully started, or manually pause the job on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
       * - Before invoking this API, ensure that you already have a successfully started Intelligent Contact Robot calling job.
       * - If you do not have a successfully started Intelligent Contact Robot calling job, click **Start** on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or start a job by using the [StartTask](https://help.aliyun.com/document_detail/2718005.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StopTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTaskWithOptions(const Models::StopTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pause an Intelligent Contact Robot calling job that has been successfully started.
       *
       * @description - You can use this API to pause an Intelligent Contact Robot calling job that has been successfully started, or manually pause the job on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface.
       * - Before invoking this API, ensure that you already have a successfully started Intelligent Contact Robot calling job.
       * - If you do not have a successfully started Intelligent Contact Robot calling job, click **Start** on the [Task Management](https://aiccs.console.aliyun.com/job/list) interface or start a job by using the [StartTask](https://help.aliyun.com/document_detail/2718005.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 500 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request StopTaskRequest
       * @return StopTaskResponse
       */
      Models::StopTaskResponse stopTask(const Models::StopTaskRequest &request);

      /**
       * @summary Submits a recording notes task.
       *
       * @param request SubmitAudioNoteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAudioNoteResponse
       */
      Models::SubmitAudioNoteResponse submitAudioNoteWithOptions(const Models::SubmitAudioNoteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a recording notes task.
       *
       * @param request SubmitAudioNoteRequest
       * @return SubmitAudioNoteResponse
       */
      Models::SubmitAudioNoteResponse submitAudioNote(const Models::SubmitAudioNoteRequest &request);

      /**
       * @summary Pause hotline service when an agent takes a short break.
       *
       * @description If the break ends and you need to resume hotline service, you can invoke the [StartHotlineService](https://help.aliyun.com/document_detail/2718045.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request SuspendHotlineServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendHotlineServiceResponse
       */
      Models::SuspendHotlineServiceResponse suspendHotlineServiceWithOptions(const Models::SuspendHotlineServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pause hotline service when an agent takes a short break.
       *
       * @description If the break ends and you need to resume hotline service, you can invoke the [StartHotlineService](https://help.aliyun.com/document_detail/2718045.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 100 queries per second (QPS).
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request SuspendHotlineServiceRequest
       * @return SuspendHotlineServiceResponse
       */
      Models::SuspendHotlineServiceResponse suspendHotlineService(const Models::SuspendHotlineServiceRequest &request);

      /**
       * @param request SuspendOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuspendOutboundTaskResponse
       */
      Models::SuspendOutboundTaskResponse suspendOutboundTaskWithOptions(const Models::SuspendOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SuspendOutboundTaskRequest
       * @return SuspendOutboundTaskResponse
       */
      Models::SuspendOutboundTaskResponse suspendOutboundTask(const Models::SuspendOutboundTaskRequest &request);

      /**
       * @summary Terminate an outbound call job by instance ID and job ID.
       *
       * @description - This API supports terminating an outbound call job. Once terminated, the job cannot be restarted.
       * - To temporarily stop an outbound call job, you can invoke the [StopAiOutboundTask](https://help.aliyun.com/document_detail/2718024.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 20 times/second.
       * - API-wide invocation frequency: 20 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request TerminateAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TerminateAiOutboundTaskResponse
       */
      Models::TerminateAiOutboundTaskResponse terminateAiOutboundTaskWithOptions(const Models::TerminateAiOutboundTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Terminate an outbound call job by instance ID and job ID.
       *
       * @description - This API supports terminating an outbound call job. Once terminated, the job cannot be restarted.
       * - To temporarily stop an outbound call job, you can invoke the [StopAiOutboundTask](https://help.aliyun.com/document_detail/2718024.html) API.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 20 times/second.
       * - API-wide invocation frequency: 20 times/second.
       * > If the total invocations from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request TerminateAiOutboundTaskRequest
       * @return TerminateAiOutboundTaskResponse
       */
      Models::TerminateAiOutboundTaskResponse terminateAiOutboundTask(const Models::TerminateAiOutboundTaskRequest &request);

      /**
       * @summary TestLargeModel
       *
       * @param tmpReq TestLargeModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestLargeModelResponse
       */
      Models::TestLargeModelResponse testLargeModelWithOptions(const Models::TestLargeModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary TestLargeModel
       *
       * @param request TestLargeModelRequest
       * @return TestLargeModelResponse
       */
      Models::TestLargeModelResponse testLargeModel(const Models::TestLargeModelRequest &request);

      /**
       * @summary Invoke the TransferCallToSkillGroup API to execute a single-step or two-step transfer to a skill group.
       *
       * @param request TransferCallToSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferCallToSkillGroupResponse
       */
      Models::TransferCallToSkillGroupResponse transferCallToSkillGroupWithOptions(const Models::TransferCallToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke the TransferCallToSkillGroup API to execute a single-step or two-step transfer to a skill group.
       *
       * @param request TransferCallToSkillGroupRequest
       * @return TransferCallToSkillGroupResponse
       */
      Models::TransferCallToSkillGroupResponse transferCallToSkillGroup(const Models::TransferCallToSkillGroupRequest &request);

      /**
       * @summary Modify agent information in the Cloud Customer Service System based on the instance ID and agent account name. You can modify the agent\\"s display name and the skill groups to which the agent belongs.
       *
       * @description - Before invoking this API, we recommend that you confirm your Artificial Intelligence Cloud Call Service (AICCS) instance ID. For guidance on how to obtain it, see the description of [Request Parameters](#api-detail-35).
       * - After the update, you can invoke the [GetAgent](https://help.aliyun.com/document_detail/2717961.html) API to confirm whether the update meets your expectations.
       * > Currently, only the display name and assigned skill groups can be modified.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API-wide invocation frequency: 100 queries per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param request UpdateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgentWithOptions(const Models::UpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify agent information in the Cloud Customer Service System based on the instance ID and agent account name. You can modify the agent\\"s display name and the skill groups to which the agent belongs.
       *
       * @description - Before invoking this API, we recommend that you confirm your Artificial Intelligence Cloud Call Service (AICCS) instance ID. For guidance on how to obtain it, see the description of [Request Parameters](#api-detail-35).
       * - After the update, you can invoke the [GetAgent](https://help.aliyun.com/document_detail/2717961.html) API to confirm whether the update meets your expectations.
       * > Currently, only the display name and assigned skill groups can be modified.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: No rate limiting.
       * - API-wide invocation frequency: 100 queries per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API-wide frequency limit.
       *
       * @param request UpdateAgentRequest
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgent(const Models::UpdateAgentRequest &request);

      /**
       * @summary Updates a call task configuration.
       *
       * @description Ensure the call task is stopped before you update its configuration.
       *
       * @param tmpReq UpdateAiCallTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAiCallTaskResponse
       */
      Models::UpdateAiCallTaskResponse updateAiCallTaskWithOptions(const Models::UpdateAiCallTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a call task configuration.
       *
       * @description Ensure the call task is stopped before you update its configuration.
       *
       * @param request UpdateAiCallTaskRequest
       * @return UpdateAiCallTaskResponse
       */
      Models::UpdateAiCallTaskResponse updateAiCallTask(const Models::UpdateAiCallTaskRequest &request);

      /**
       * @summary Update an outbound call job by instance ID and job ID.
       *
       * @description This API supports updating information such as the task name, task description, outbound caller number, and skill group ID. For details, see [Request Parameters](#api-detail-35).
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 20 times per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param tmpReq UpdateAiOutboundTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAiOutboundTaskResponse
       */
      Models::UpdateAiOutboundTaskResponse updateAiOutboundTaskWithOptions(const Models::UpdateAiOutboundTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update an outbound call job by instance ID and job ID.
       *
       * @description This API supports updating information such as the task name, task description, outbound caller number, and skill group ID. For details, see [Request Parameters](#api-detail-35).
       * ### Queries per second (QPS) limit
       * - Per-user invocation frequency: No rate limiting.
       * - API frequency: 20 times per second.
       * > Throttling is triggered if the total invocations from multiple users exceed the API frequency limit.
       *
       * @param request UpdateAiOutboundTaskRequest
       * @return UpdateAiOutboundTaskResponse
       */
      Models::UpdateAiOutboundTaskResponse updateAiOutboundTask(const Models::UpdateAiOutboundTaskRequest &request);

      /**
       * @summary Update the department name based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department ID.
       *
       * @description - This API supports updating only the department name and does not support updating the department ID.  
       * - Before invoking this API, we recommend that you confirm the AICCS instance ID and department ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).  
       * - After the update is complete, you can invoke the [GetAllDepartment](https://help.aliyun.com/document_detail/2717975.html) API to confirm whether the department information matches your expectations.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.  
       * - API-wide invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request UpdateDepartmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDepartmentResponse
       */
      Models::UpdateDepartmentResponse updateDepartmentWithOptions(const Models::UpdateDepartmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the department name based on the Artificial Intelligence Cloud Call Service (AICCS) instance ID and department ID.
       *
       * @description - This API supports updating only the department name and does not support updating the department ID.  
       * - Before invoking this API, we recommend that you confirm the AICCS instance ID and department ID. For guidance on how to obtain them, see the instructions in [Request Parameters](#api-detail-35).  
       * - After the update is complete, you can invoke the [GetAllDepartment](https://help.aliyun.com/document_detail/2717975.html) API to confirm whether the department information matches your expectations.
       * ### Queries per second (QPS) limits
       * - Per-user invocation frequency: 100 times/second.  
       * - API-wide invocation frequency: 100 times/second.
       * > If the total invocations from multiple users exceed the API-wide frequency limit, throttling will be triggered.
       *
       * @param request UpdateDepartmentRequest
       * @return UpdateDepartmentResponse
       */
      Models::UpdateDepartmentResponse updateDepartment(const Models::UpdateDepartmentRequest &request);

      /**
       * @summary Updates a large language model.
       *
       * @param tmpReq UpdateLargeModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLargeModelResponse
       */
      Models::UpdateLargeModelResponse updateLargeModelWithOptions(const Models::UpdateLargeModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a large language model.
       *
       * @param request UpdateLargeModelRequest
       * @return UpdateLargeModelResponse
       */
      Models::UpdateLargeModelResponse updateLargeModel(const Models::UpdateLargeModelRequest &request);

      /**
       * @summary Edit Model Application
       *
       * @param tmpReq UpdateModelApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelApplicationResponse
       */
      Models::UpdateModelApplicationResponse updateModelApplicationWithOptions(const Models::UpdateModelApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edit Model Application
       *
       * @param request UpdateModelApplicationRequest
       * @return UpdateModelApplicationResponse
       */
      Models::UpdateModelApplicationResponse updateModelApplication(const Models::UpdateModelApplicationRequest &request);

      /**
       * @summary Invoke UpdateOuterAccount to update an external account based on the external account ID.
       *
       * @param request UpdateOuterAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOuterAccountResponse
       */
      Models::UpdateOuterAccountResponse updateOuterAccountWithOptions(const Models::UpdateOuterAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invoke UpdateOuterAccount to update an external account based on the external account ID.
       *
       * @param request UpdateOuterAccountRequest
       * @return UpdateOuterAccountResponse
       */
      Models::UpdateOuterAccountResponse updateOuterAccount(const Models::UpdateOuterAccountRequest &request);

      /**
       * @summary Update the skill group information in the Cloud Customer Service System based on the AICCS instance ID and skill group ID. This API supports updating the skill group description and display name.
       *
       * @description - This API does not support updating the skill group ID or skill group name.  
       * - After the update, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API to query the skill group information.  
       * - If you need to provide the AICCS instance ID and skill group ID, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limit
       * - Per-user call frequency: No rate limiting.
       * - API call frequency: 1000 calls per second.
       * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request UpdateSkillGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillGroupResponse
       */
      Models::UpdateSkillGroupResponse updateSkillGroupWithOptions(const Models::UpdateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the skill group information in the Cloud Customer Service System based on the AICCS instance ID and skill group ID. This API supports updating the skill group description and display name.
       *
       * @description - This API does not support updating the skill group ID or skill group name.  
       * - After the update, you can invoke the [QuerySkillGroups](https://help.aliyun.com/zh/aiccs/developer-reference/api-aiccs-2019-10-15-queryskillgroups) API to query the skill group information.  
       * - If you need to provide the AICCS instance ID and skill group ID, refer to the instructions in the [Request Parameters](#api-detail-35) section.
       * ### Queries per second (QPS) limit
       * - Per-user call frequency: No rate limiting.
       * - API call frequency: 1000 calls per second.
       * > If the total calls from multiple users exceed the API frequency limit, throttling will be triggered.
       *
       * @param request UpdateSkillGroupRequest
       * @return UpdateSkillGroupResponse
       */
      Models::UpdateSkillGroupResponse updateSkillGroup(const Models::UpdateSkillGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
