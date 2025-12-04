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
       * @summary Adds the association relationship between a virtual number and real numbers in batches.
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
       * @summary Adds the association relationship between a virtual number and real numbers in batches.
       *
       * @description ### QPS limits
       * You can call this operation up to 200 times per second per account.
       *
       * @param request AddVirtualNumberRelationRequest
       * @return AddVirtualNumberRelationResponse
       */
      Models::AddVirtualNumberRelationResponse addVirtualNumberRelation(const Models::AddVirtualNumberRelationRequest &request);

      /**
       * @summary Initiates an outbound robocall task.
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
       * @summary Initiates an outbound robocall task.
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
       * @param request CancelCallRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCallResponse
       */
      Models::CancelCallResponse cancelCallWithOptions(const Models::CancelCallRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary Creates a task for sending voice notifications or voice verification codes.
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
       * @summary Creates a task for sending voice notifications or voice verification codes.
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
       * @summary DegradeVideoFile
       *
       * @param request DegradeVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DegradeVideoFileResponse
       */
      Models::DegradeVideoFileResponse degradeVideoFileWithOptions(const Models::DegradeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DegradeVideoFile
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
       * @summary GetCallMediaType
       *
       * @param request GetCallMediaTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCallMediaTypeResponse
       */
      Models::GetCallMediaTypeResponse getCallMediaTypeWithOptions(const Models::GetCallMediaTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetCallMediaType
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
       * @summary GetTemporaryFileUrl
       *
       * @param request GetTemporaryFileUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTemporaryFileUrlResponse
       */
      Models::GetTemporaryFileUrlResponse getTemporaryFileUrlWithOptions(const Models::GetTemporaryFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetTemporaryFileUrl
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
       * @summary Queries task information.
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
       * @summary Queries task information.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request ListCallTaskRequest
       * @return ListCallTaskResponse
       */
      Models::ListCallTaskResponse listCallTask(const Models::ListCallTaskRequest &request);

      /**
       * @summary Queries the information about a task based on the task ID.
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
       * @summary Queries the information about a task based on the task ID.
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
       * @summary PauseVideoFile
       *
       * @param request PauseVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseVideoFileResponse
       */
      Models::PauseVideoFileResponse pauseVideoFileWithOptions(const Models::PauseVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary PauseVideoFile
       *
       * @param request PauseVideoFileRequest
       * @return PauseVideoFileResponse
       */
      Models::PauseVideoFileResponse pauseVideoFile(const Models::PauseVideoFileRequest &request);

      /**
       * @summary PlayVideoFile
       *
       * @param request PlayVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PlayVideoFileResponse
       */
      Models::PlayVideoFileResponse playVideoFileWithOptions(const Models::PlayVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary PlayVideoFile
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
       * @summary Queries a list of robots.
       *
       * @param request QueryRobotInfoListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRobotInfoListResponse
       */
      Models::QueryRobotInfoListResponse queryRobotInfoListWithOptions(const Models::QueryRobotInfoListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of robots.
       *
       * @param request QueryRobotInfoListRequest
       * @return QueryRobotInfoListResponse
       */
      Models::QueryRobotInfoListResponse queryRobotInfoList(const Models::QueryRobotInfoListRequest &request);

      /**
       * @summary Queries the call details of a called number in a robocall task.
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
       * @summary Queries the call details of a called number in a robocall task.
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
       * @summary QueryVideoPlayProgress
       *
       * @param request QueryVideoPlayProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVideoPlayProgressResponse
       */
      Models::QueryVideoPlayProgressResponse queryVideoPlayProgressWithOptions(const Models::QueryVideoPlayProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary QueryVideoPlayProgress
       *
       * @param request QueryVideoPlayProgressRequest
       * @return QueryVideoPlayProgressResponse
       */
      Models::QueryVideoPlayProgressResponse queryVideoPlayProgress(const Models::QueryVideoPlayProgressRequest &request);

      /**
       * @summary Queries a list of virtual numbers.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryVirtualNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryVirtualNumberResponse
       */
      Models::QueryVirtualNumberResponse queryVirtualNumberWithOptions(const Models::QueryVirtualNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of virtual numbers.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request QueryVirtualNumberRequest
       * @return QueryVirtualNumberResponse
       */
      Models::QueryVirtualNumberResponse queryVirtualNumber(const Models::QueryVirtualNumberRequest &request);

      /**
       * @summary Queries a list of associations between virtual numbers and real numbers.
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
       * @summary Queries a list of associations between virtual numbers and real numbers.
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
       * @summary ResumeVideoFile
       *
       * @param request ResumeVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResumeVideoFileResponse
       */
      Models::ResumeVideoFileResponse resumeVideoFileWithOptions(const Models::ResumeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ResumeVideoFile
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
       * @summary 语音视频单呼接口
       *
       * @param request SingleCallByVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SingleCallByVideoResponse
       */
      Models::SingleCallByVideoResponse singleCallByVideoWithOptions(const Models::SingleCallByVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 语音视频单呼接口
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
       * @summary SkipVideoFile
       *
       * @param request SkipVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SkipVideoFileResponse
       */
      Models::SkipVideoFileResponse skipVideoFileWithOptions(const Models::SkipVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SkipVideoFile
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
       * @summary Submits a China 400 number for registration.
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
       * @summary Submits a China 400 number for registration.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account.
       *
       * @param request SubmitHotlineTransferRegisterRequest
       * @return SubmitHotlineTransferRegisterResponse
       */
      Models::SubmitHotlineTransferRegisterResponse submitHotlineTransferRegister(const Models::SubmitHotlineTransferRegisterRequest &request);

      /**
       * @summary UpgradeVideoFile
       *
       * @param request UpgradeVideoFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeVideoFileResponse
       */
      Models::UpgradeVideoFileResponse upgradeVideoFileWithOptions(const Models::UpgradeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpgradeVideoFile
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
