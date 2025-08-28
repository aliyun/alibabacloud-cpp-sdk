#include <darabonba/Core.hpp>
#include <alibabacloud/Dyvmsapi20170525.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Dyvmsapi20170525::Models;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{

AlibabaCloud::Dyvmsapi20170525::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("dyvmsapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds the association relationship between a virtual number and real numbers in batches.
 *
 * @description ### QPS limits
 * You can call this operation up to 200 times per second per account.
 *
 * @param request AddVirtualNumberRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVirtualNumberRelationResponse
 */
AddVirtualNumberRelationResponse Client::addVirtualNumberRelationWithOptions(const AddVirtualNumberRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCorpNameList()) {
    query["CorpNameList"] = request.corpNameList();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNum()) {
    query["PhoneNum"] = request.phoneNum();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteType()) {
    query["RouteType"] = request.routeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddVirtualNumberRelation"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddVirtualNumberRelationResponse>();
}

/**
 * @summary Adds the association relationship between a virtual number and real numbers in batches.
 *
 * @description ### QPS limits
 * You can call this operation up to 200 times per second per account.
 *
 * @param request AddVirtualNumberRelationRequest
 * @return AddVirtualNumberRelationResponse
 */
AddVirtualNumberRelationResponse Client::addVirtualNumberRelation(const AddVirtualNumberRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVirtualNumberRelationWithOptions(request, runtime);
}

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
BatchRobotSmartCallResponse Client::batchRobotSmartCallWithOptions(const BatchRobotSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.calledShowNumber();
  }

  if (!!request.hasCorpName()) {
    query["CorpName"] = request.corpName();
  }

  if (!!request.hasDialogId()) {
    query["DialogId"] = request.dialogId();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.earlyMediaAsr();
  }

  if (!!request.hasIsSelfLine()) {
    query["IsSelfLine"] = request.isSelfLine();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduleCall()) {
    query["ScheduleCall"] = request.scheduleCall();
  }

  if (!!request.hasScheduleTime()) {
    query["ScheduleTime"] = request.scheduleTime();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTtsParam()) {
    query["TtsParam"] = request.ttsParam();
  }

  if (!!request.hasTtsParamHead()) {
    query["TtsParamHead"] = request.ttsParamHead();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchRobotSmartCall"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchRobotSmartCallResponse>();
}

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
BatchRobotSmartCallResponse Client::batchRobotSmartCall(const BatchRobotSmartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchRobotSmartCallWithOptions(request, runtime);
}

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
CancelOrderRobotTaskResponse Client::cancelOrderRobotTaskWithOptions(const CancelOrderRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelOrderRobotTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelOrderRobotTaskResponse>();
}

/**
 * @summary Cancels a robocall task that has not been started.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request CancelOrderRobotTaskRequest
 * @return CancelOrderRobotTaskResponse
 */
CancelOrderRobotTaskResponse Client::cancelOrderRobotTask(const CancelOrderRobotTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelOrderRobotTaskWithOptions(request, runtime);
}

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
CancelRobotTaskResponse Client::cancelRobotTaskWithOptions(const CancelRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelRobotTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelRobotTaskResponse>();
}

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
CancelRobotTaskResponse Client::cancelRobotTask(const CancelRobotTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelRobotTaskWithOptions(request, runtime);
}

/**
 * @summary ChangeMediaType
 *
 * @param request ChangeMediaTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeMediaTypeResponse
 */
ChangeMediaTypeResponse Client::changeMediaTypeWithOptions(const ChangeMediaTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNum()) {
    query["CalledNum"] = request.calledNum();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeMediaType"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeMediaTypeResponse>();
}

/**
 * @summary ChangeMediaType
 *
 * @param request ChangeMediaTypeRequest
 * @return ChangeMediaTypeResponse
 */
ChangeMediaTypeResponse Client::changeMediaType(const ChangeMediaTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeMediaTypeWithOptions(request, runtime);
}

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
CreateCallTaskResponse Client::createCallTaskWithOptions(const CreateCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasFireTime()) {
    query["FireTime"] = request.fireTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasScheduleType()) {
    query["ScheduleType"] = request.scheduleType();
  }

  if (!!request.hasStopTime()) {
    query["StopTime"] = request.stopTime();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCallTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCallTaskResponse>();
}

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
CreateCallTaskResponse Client::createCallTask(const CreateCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCallTaskWithOptions(request, runtime);
}

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
CreateRobotTaskResponse Client::createRobotTaskWithOptions(const CreateRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasCorpName()) {
    query["CorpName"] = request.corpName();
  }

  if (!!request.hasDialogId()) {
    query["DialogId"] = request.dialogId();
  }

  if (!!request.hasIsSelfLine()) {
    query["IsSelfLine"] = request.isSelfLine();
  }

  if (!!request.hasNumberStatusIdent()) {
    query["NumberStatusIdent"] = request.numberStatusIdent();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRecallInterval()) {
    query["RecallInterval"] = request.recallInterval();
  }

  if (!!request.hasRecallStateCodes()) {
    query["RecallStateCodes"] = request.recallStateCodes();
  }

  if (!!request.hasRecallTimes()) {
    query["RecallTimes"] = request.recallTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRetryType()) {
    query["RetryType"] = request.retryType();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRobotTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRobotTaskResponse>();
}

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
CreateRobotTaskResponse Client::createRobotTask(const CreateRobotTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRobotTaskWithOptions(request, runtime);
}

/**
 * @summary DegradeVideoFile
 *
 * @param request DegradeVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DegradeVideoFileResponse
 */
DegradeVideoFileResponse Client::degradeVideoFileWithOptions(const DegradeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DegradeVideoFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DegradeVideoFileResponse>();
}

/**
 * @summary DegradeVideoFile
 *
 * @param request DegradeVideoFileRequest
 * @return DegradeVideoFileResponse
 */
DegradeVideoFileResponse Client::degradeVideoFile(const DegradeVideoFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return degradeVideoFileWithOptions(request, runtime);
}

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
DeleteRobotTaskResponse Client::deleteRobotTaskWithOptions(const DeleteRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRobotTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRobotTaskResponse>();
}

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
DeleteRobotTaskResponse Client::deleteRobotTask(const DeleteRobotTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRobotTaskWithOptions(request, runtime);
}

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
ExecuteCallTaskResponse Client::executeCallTaskWithOptions(const ExecuteCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFireTime()) {
    query["FireTime"] = request.fireTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteCallTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteCallTaskResponse>();
}

/**
 * @summary Executes a call task.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request ExecuteCallTaskRequest
 * @return ExecuteCallTaskResponse
 */
ExecuteCallTaskResponse Client::executeCallTask(const ExecuteCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeCallTaskWithOptions(request, runtime);
}

/**
 * @summary GetCallMediaType
 *
 * @param request GetCallMediaTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallMediaTypeResponse
 */
GetCallMediaTypeResponse Client::getCallMediaTypeWithOptions(const GetCallMediaTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCallMediaType"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCallMediaTypeResponse>();
}

/**
 * @summary GetCallMediaType
 *
 * @param request GetCallMediaTypeRequest
 * @return GetCallMediaTypeResponse
 */
GetCallMediaTypeResponse Client::getCallMediaType(const GetCallMediaTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallMediaTypeWithOptions(request, runtime);
}

/**
 * @summary GetCallProgress
 *
 * @param request GetCallProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallProgressResponse
 */
GetCallProgressResponse Client::getCallProgressWithOptions(const GetCallProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNum()) {
    query["CalledNum"] = request.calledNum();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCallProgress"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCallProgressResponse>();
}

/**
 * @summary GetCallProgress
 *
 * @param request GetCallProgressRequest
 * @return GetCallProgressResponse
 */
GetCallProgressResponse Client::getCallProgress(const GetCallProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallProgressWithOptions(request, runtime);
}

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
GetHotlineQualificationByOrderResponse Client::getHotlineQualificationByOrderWithOptions(const GetHotlineQualificationByOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotlineQualificationByOrder"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotlineQualificationByOrderResponse>();
}

/**
 * @summary Obtains the qualification ID based on the ID of a qualification application ticket.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request GetHotlineQualificationByOrderRequest
 * @return GetHotlineQualificationByOrderResponse
 */
GetHotlineQualificationByOrderResponse Client::getHotlineQualificationByOrder(const GetHotlineQualificationByOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotlineQualificationByOrderWithOptions(request, runtime);
}

/**
 * @summary GetTemporaryFileUrl
 *
 * @param request GetTemporaryFileUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemporaryFileUrlResponse
 */
GetTemporaryFileUrlResponse Client::getTemporaryFileUrlWithOptions(const GetTemporaryFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemporaryFileUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemporaryFileUrlResponse>();
}

/**
 * @summary GetTemporaryFileUrl
 *
 * @param request GetTemporaryFileUrlRequest
 * @return GetTemporaryFileUrlResponse
 */
GetTemporaryFileUrlResponse Client::getTemporaryFileUrl(const GetTemporaryFileUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemporaryFileUrlWithOptions(request, runtime);
}

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
GetTokenResponse Client::getTokenWithOptions(const GetTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTokenType()) {
    query["TokenType"] = request.tokenType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetToken"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenResponse>();
}

/**
 * @summary Obtains the token for authentication.
 *
 * @description ### QPS limits
 * You can call this operation up to five times per second per account.
 *
 * @param request GetTokenRequest
 * @return GetTokenResponse
 */
GetTokenResponse Client::getToken(const GetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTokenWithOptions(request, runtime);
}

/**
 * @summary GetVideoFieldUrl
 *
 * @param request GetVideoFieldUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoFieldUrlResponse
 */
GetVideoFieldUrlResponse Client::getVideoFieldUrlWithOptions(const GetVideoFieldUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVideoFile()) {
    query["VideoFile"] = request.videoFile();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoFieldUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoFieldUrlResponse>();
}

/**
 * @summary GetVideoFieldUrl
 *
 * @param request GetVideoFieldUrlRequest
 * @return GetVideoFieldUrlResponse
 */
GetVideoFieldUrlResponse Client::getVideoFieldUrl(const GetVideoFieldUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoFieldUrlWithOptions(request, runtime);
}

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
IvrCallResponse Client::ivrCallWithOptions(const IvrCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasByeCode()) {
    query["ByeCode"] = request.byeCode();
  }

  if (!!request.hasByeTtsParams()) {
    query["ByeTtsParams"] = request.byeTtsParams();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.calledShowNumber();
  }

  if (!!request.hasMenuKeyMap()) {
    query["MenuKeyMap"] = request.menuKeyMap();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.playTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartCode()) {
    query["StartCode"] = request.startCode();
  }

  if (!!request.hasStartTtsParams()) {
    query["StartTtsParams"] = request.startTtsParams();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IvrCall"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IvrCallResponse>();
}

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
IvrCallResponse Client::ivrCall(const IvrCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ivrCallWithOptions(request, runtime);
}

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
ListCallTaskResponse Client::listCallTaskWithOptions(const ListCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCallTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCallTaskResponse>();
}

/**
 * @summary Queries task information.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request ListCallTaskRequest
 * @return ListCallTaskResponse
 */
ListCallTaskResponse Client::listCallTask(const ListCallTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallTaskWithOptions(request, runtime);
}

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
ListCallTaskDetailResponse Client::listCallTaskDetailWithOptions(const ListCallTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNum()) {
    query["CalledNum"] = request.calledNum();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCallTaskDetail"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCallTaskDetailResponse>();
}

/**
 * @summary Queries the information about a task based on the task ID.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request ListCallTaskDetailRequest
 * @return ListCallTaskDetailResponse
 */
ListCallTaskDetailResponse Client::listCallTaskDetail(const ListCallTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallTaskDetailWithOptions(request, runtime);
}

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
ListHotlineTransferRegisterFileResponse Client::listHotlineTransferRegisterFileWithOptions(const ListHotlineTransferRegisterFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHotlineNumber()) {
    query["HotlineNumber"] = request.hotlineNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.qualificationId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHotlineTransferRegisterFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotlineTransferRegisterFileResponse>();
}

/**
 * @summary Queries the registration information about a China 400 number.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request ListHotlineTransferRegisterFileRequest
 * @return ListHotlineTransferRegisterFileResponse
 */
ListHotlineTransferRegisterFileResponse Client::listHotlineTransferRegisterFile(const ListHotlineTransferRegisterFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotlineTransferRegisterFileWithOptions(request, runtime);
}

/**
 * @summary PauseVideoFile
 *
 * @param request PauseVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseVideoFileResponse
 */
PauseVideoFileResponse Client::pauseVideoFileWithOptions(const PauseVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseVideoFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseVideoFileResponse>();
}

/**
 * @summary PauseVideoFile
 *
 * @param request PauseVideoFileRequest
 * @return PauseVideoFileResponse
 */
PauseVideoFileResponse Client::pauseVideoFile(const PauseVideoFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseVideoFileWithOptions(request, runtime);
}

/**
 * @summary PlayVideoFile
 *
 * @param request PlayVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PlayVideoFileResponse
 */
PlayVideoFileResponse Client::playVideoFileWithOptions(const PlayVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasOnlyPhone()) {
    query["OnlyPhone"] = request.onlyPhone();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PlayVideoFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PlayVideoFileResponse>();
}

/**
 * @summary PlayVideoFile
 *
 * @param request PlayVideoFileRequest
 * @return PlayVideoFileResponse
 */
PlayVideoFileResponse Client::playVideoFile(const PlayVideoFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return playVideoFileWithOptions(request, runtime);
}

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
QueryCallDetailByCallIdResponse Client::queryCallDetailByCallIdWithOptions(const QueryCallDetailByCallIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProdId()) {
    query["ProdId"] = request.prodId();
  }

  if (!!request.hasQueryDate()) {
    query["QueryDate"] = request.queryDate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCallDetailByCallId"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCallDetailByCallIdResponse>();
}

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
QueryCallDetailByCallIdResponse Client::queryCallDetailByCallId(const QueryCallDetailByCallIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCallDetailByCallIdWithOptions(request, runtime);
}

/**
 * @summary Queries the call details of an outbound robocall task.
 *
 * @param request QueryCallDetailByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCallDetailByTaskIdResponse
 */
QueryCallDetailByTaskIdResponse Client::queryCallDetailByTaskIdWithOptions(const QueryCallDetailByTaskIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.callee();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQueryDate()) {
    query["QueryDate"] = request.queryDate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCallDetailByTaskId"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCallDetailByTaskIdResponse>();
}

/**
 * @summary Queries the call details of an outbound robocall task.
 *
 * @param request QueryCallDetailByTaskIdRequest
 * @return QueryCallDetailByTaskIdResponse
 */
QueryCallDetailByTaskIdResponse Client::queryCallDetailByTaskId(const QueryCallDetailByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCallDetailByTaskIdWithOptions(request, runtime);
}

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
QueryCallInPoolTransferConfigResponse Client::queryCallInPoolTransferConfigWithOptions(const QueryCallInPoolTransferConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCallInPoolTransferConfig"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCallInPoolTransferConfigResponse>();
}

/**
 * @summary Queries the configuration of the phone number used to transfer a call.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request QueryCallInPoolTransferConfigRequest
 * @return QueryCallInPoolTransferConfigResponse
 */
QueryCallInPoolTransferConfigResponse Client::queryCallInPoolTransferConfig(const QueryCallInPoolTransferConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCallInPoolTransferConfigWithOptions(request, runtime);
}

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
QueryCallInTransferRecordResponse Client::queryCallInTransferRecordWithOptions(const QueryCallInTransferRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallInCaller()) {
    query["CallInCaller"] = request.callInCaller();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasQueryDate()) {
    query["QueryDate"] = request.queryDate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCallInTransferRecord"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCallInTransferRecordResponse>();
}

/**
 * @summary Queries call transfer records.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request QueryCallInTransferRecordRequest
 * @return QueryCallInTransferRecordResponse
 */
QueryCallInTransferRecordResponse Client::queryCallInTransferRecord(const QueryCallInTransferRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCallInTransferRecordWithOptions(request, runtime);
}

/**
 * @summary Queries a list of robots.
 *
 * @param request QueryRobotInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRobotInfoListResponse
 */
QueryRobotInfoListResponse Client::queryRobotInfoListWithOptions(const QueryRobotInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.auditStatus();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRobotInfoList"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRobotInfoListResponse>();
}

/**
 * @summary Queries a list of robots.
 *
 * @param request QueryRobotInfoListRequest
 * @return QueryRobotInfoListResponse
 */
QueryRobotInfoListResponse Client::queryRobotInfoList(const QueryRobotInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRobotInfoListWithOptions(request, runtime);
}

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
QueryRobotTaskCallDetailResponse Client::queryRobotTaskCallDetailWithOptions(const QueryRobotTaskCallDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.callee();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQueryDate()) {
    query["QueryDate"] = request.queryDate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRobotTaskCallDetail"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRobotTaskCallDetailResponse>();
}

/**
 * @summary Queries the call details of a called number in a robocall task.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request QueryRobotTaskCallDetailRequest
 * @return QueryRobotTaskCallDetailResponse
 */
QueryRobotTaskCallDetailResponse Client::queryRobotTaskCallDetail(const QueryRobotTaskCallDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRobotTaskCallDetailWithOptions(request, runtime);
}

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
QueryRobotTaskCallListResponse Client::queryRobotTaskCallListWithOptions(const QueryRobotTaskCallListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallResult()) {
    query["CallResult"] = request.callResult();
  }

  if (!!request.hasCalled()) {
    query["Called"] = request.called();
  }

  if (!!request.hasDialogCountFrom()) {
    query["DialogCountFrom"] = request.dialogCountFrom();
  }

  if (!!request.hasDialogCountTo()) {
    query["DialogCountTo"] = request.dialogCountTo();
  }

  if (!!request.hasDurationFrom()) {
    query["DurationFrom"] = request.durationFrom();
  }

  if (!!request.hasDurationTo()) {
    query["DurationTo"] = request.durationTo();
  }

  if (!!request.hasHangupDirection()) {
    query["HangupDirection"] = request.hangupDirection();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRobotTaskCallList"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRobotTaskCallListResponse>();
}

/**
 * @summary Queries the information about a robocall task.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request QueryRobotTaskCallListRequest
 * @return QueryRobotTaskCallListResponse
 */
QueryRobotTaskCallListResponse Client::queryRobotTaskCallList(const QueryRobotTaskCallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRobotTaskCallListWithOptions(request, runtime);
}

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
QueryRobotTaskDetailResponse Client::queryRobotTaskDetailWithOptions(const QueryRobotTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRobotTaskDetail"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRobotTaskDetailResponse>();
}

/**
 * @summary Queries the details of a robocall task.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request QueryRobotTaskDetailRequest
 * @return QueryRobotTaskDetailResponse
 */
QueryRobotTaskDetailResponse Client::queryRobotTaskDetail(const QueryRobotTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRobotTaskDetailWithOptions(request, runtime);
}

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
QueryRobotTaskListResponse Client::queryRobotTaskListWithOptions(const QueryRobotTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.time();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRobotTaskList"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRobotTaskListResponse>();
}

/**
 * @summary Queries the information about all robocall tasks.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request QueryRobotTaskListRequest
 * @return QueryRobotTaskListResponse
 */
QueryRobotTaskListResponse Client::queryRobotTaskList(const QueryRobotTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRobotTaskListWithOptions(request, runtime);
}

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
QueryRobotv2AllListResponse Client::queryRobotv2AllListWithOptions(const QueryRobotv2AllListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRobotv2AllList"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRobotv2AllListResponse>();
}

/**
 * @summary Queries a list of robot communication scripts.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request QueryRobotv2AllListRequest
 * @return QueryRobotv2AllListResponse
 */
QueryRobotv2AllListResponse Client::queryRobotv2AllList(const QueryRobotv2AllListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRobotv2AllListWithOptions(request, runtime);
}

/**
 * @summary QueryVideoPlayProgress
 *
 * @param request QueryVideoPlayProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVideoPlayProgressResponse
 */
QueryVideoPlayProgressResponse Client::queryVideoPlayProgressWithOptions(const QueryVideoPlayProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVideoPlayProgress"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVideoPlayProgressResponse>();
}

/**
 * @summary QueryVideoPlayProgress
 *
 * @param request QueryVideoPlayProgressRequest
 * @return QueryVideoPlayProgressResponse
 */
QueryVideoPlayProgressResponse Client::queryVideoPlayProgress(const QueryVideoPlayProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVideoPlayProgressWithOptions(request, runtime);
}

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
QueryVirtualNumberResponse Client::queryVirtualNumberWithOptions(const QueryVirtualNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteType()) {
    query["RouteType"] = request.routeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVirtualNumber"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVirtualNumberResponse>();
}

/**
 * @summary Queries a list of virtual numbers.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request QueryVirtualNumberRequest
 * @return QueryVirtualNumberResponse
 */
QueryVirtualNumberResponse Client::queryVirtualNumber(const QueryVirtualNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVirtualNumberWithOptions(request, runtime);
}

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
QueryVirtualNumberRelationResponse Client::queryVirtualNumberRelationWithOptions(const QueryVirtualNumberRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhoneNum()) {
    query["PhoneNum"] = request.phoneNum();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.qualificationId();
  }

  if (!!request.hasRegionNameCity()) {
    query["RegionNameCity"] = request.regionNameCity();
  }

  if (!!request.hasRelatedNum()) {
    query["RelatedNum"] = request.relatedNum();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRouteType()) {
    query["RouteType"] = request.routeType();
  }

  if (!!request.hasSpecId()) {
    query["SpecId"] = request.specId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVirtualNumberRelation"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVirtualNumberRelationResponse>();
}

/**
 * @summary Queries a list of associations between virtual numbers and real numbers.
 *
 * @description ### QPS limits
 * You can call this operation up to 200 times per second per account.
 *
 * @param request QueryVirtualNumberRelationRequest
 * @return QueryVirtualNumberRelationResponse
 */
QueryVirtualNumberRelationResponse Client::queryVirtualNumberRelation(const QueryVirtualNumberRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVirtualNumberRelationWithOptions(request, runtime);
}

/**
 * @summary Queries the review state of a voice file.
 *
 * @param request QueryVoiceFileAuditInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVoiceFileAuditInfoResponse
 */
QueryVoiceFileAuditInfoResponse Client::queryVoiceFileAuditInfoWithOptions(const QueryVoiceFileAuditInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.businessType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVoiceCodes()) {
    query["VoiceCodes"] = request.voiceCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVoiceFileAuditInfo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVoiceFileAuditInfoResponse>();
}

/**
 * @summary Queries the review state of a voice file.
 *
 * @param request QueryVoiceFileAuditInfoRequest
 * @return QueryVoiceFileAuditInfoResponse
 */
QueryVoiceFileAuditInfoResponse Client::queryVoiceFileAuditInfo(const QueryVoiceFileAuditInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVoiceFileAuditInfoWithOptions(request, runtime);
}

/**
 * @summary Resumes the inbound call that is transferred by using a China 400 number.
 *
 * @param request RecoverCallInConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecoverCallInConfigResponse
 */
RecoverCallInConfigResponse Client::recoverCallInConfigWithOptions(const RecoverCallInConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecoverCallInConfig"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecoverCallInConfigResponse>();
}

/**
 * @summary Resumes the inbound call that is transferred by using a China 400 number.
 *
 * @param request RecoverCallInConfigRequest
 * @return RecoverCallInConfigResponse
 */
RecoverCallInConfigResponse Client::recoverCallInConfig(const RecoverCallInConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recoverCallInConfigWithOptions(request, runtime);
}

/**
 * @summary ResumeVideoFile
 *
 * @param request ResumeVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeVideoFileResponse
 */
ResumeVideoFileResponse Client::resumeVideoFileWithOptions(const ResumeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeVideoFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeVideoFileResponse>();
}

/**
 * @summary ResumeVideoFile
 *
 * @param request ResumeVideoFileRequest
 * @return ResumeVideoFileResponse
 */
ResumeVideoFileResponse Client::resumeVideoFile(const ResumeVideoFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeVideoFileWithOptions(request, runtime);
}

/**
 * @summary SeekVideoFile
 *
 * @param request SeekVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SeekVideoFileResponse
 */
SeekVideoFileResponse Client::seekVideoFileWithOptions(const SeekVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSeekTimes()) {
    query["SeekTimes"] = request.seekTimes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SeekVideoFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SeekVideoFileResponse>();
}

/**
 * @summary SeekVideoFile
 *
 * @param request SeekVideoFileRequest
 * @return SeekVideoFileResponse
 */
SeekVideoFileResponse Client::seekVideoFile(const SeekVideoFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return seekVideoFileWithOptions(request, runtime);
}

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
SendVerificationResponse Client::sendVerificationWithOptions(const SendVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.verifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendVerification"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendVerificationResponse>();
}

/**
 * @summary Sends an SMS verification code.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request SendVerificationRequest
 * @return SendVerificationResponse
 */
SendVerificationResponse Client::sendVerification(const SendVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendVerificationWithOptions(request, runtime);
}

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
SetTransferCalleePoolConfigResponse Client::setTransferCalleePoolConfigWithOptions(const SetTransferCalleePoolConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledRouteMode()) {
    query["CalledRouteMode"] = request.calledRouteMode();
  }

  if (!!request.hasDetails()) {
    query["Details"] = request.details();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.qualificationId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetTransferCalleePoolConfig"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetTransferCalleePoolConfigResponse>();
}

/**
 * @summary Sets the phone numbers for transferring a call.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request SetTransferCalleePoolConfigRequest
 * @return SetTransferCalleePoolConfigResponse
 */
SetTransferCalleePoolConfigResponse Client::setTransferCalleePoolConfig(const SetTransferCalleePoolConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setTransferCalleePoolConfigWithOptions(request, runtime);
}

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
SingleCallByTtsResponse Client::singleCallByTtsWithOptions(const SingleCallByTtsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.calledShowNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.playTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  if (!!request.hasTtsCode()) {
    query["TtsCode"] = request.ttsCode();
  }

  if (!!request.hasTtsParam()) {
    query["TtsParam"] = request.ttsParam();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.volume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SingleCallByTts"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SingleCallByTtsResponse>();
}

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
SingleCallByTtsResponse Client::singleCallByTts(const SingleCallByTtsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return singleCallByTtsWithOptions(request, runtime);
}

/**
 * @summary 语音视频单呼接口
 *
 * @param request SingleCallByVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SingleCallByVideoResponse
 */
SingleCallByVideoResponse Client::singleCallByVideoWithOptions(const SingleCallByVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.calledShowNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.playTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  if (!!request.hasVideoCode()) {
    query["VideoCode"] = request.videoCode();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.voiceCode();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.volume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SingleCallByVideo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SingleCallByVideoResponse>();
}

/**
 * @summary 语音视频单呼接口
 *
 * @param request SingleCallByVideoRequest
 * @return SingleCallByVideoResponse
 */
SingleCallByVideoResponse Client::singleCallByVideo(const SingleCallByVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return singleCallByVideoWithOptions(request, runtime);
}

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
SingleCallByVoiceResponse Client::singleCallByVoiceWithOptions(const SingleCallByVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.calledShowNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.playTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.voiceCode();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.volume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SingleCallByVoice"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SingleCallByVoiceResponse>();
}

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
SingleCallByVoiceResponse Client::singleCallByVoice(const SingleCallByVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return singleCallByVoiceWithOptions(request, runtime);
}

/**
 * @summary SkipVideoFile
 *
 * @param request SkipVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SkipVideoFileResponse
 */
SkipVideoFileResponse Client::skipVideoFileWithOptions(const SkipVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSkipTimes()) {
    query["SkipTimes"] = request.skipTimes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SkipVideoFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SkipVideoFileResponse>();
}

/**
 * @summary SkipVideoFile
 *
 * @param request SkipVideoFileRequest
 * @return SkipVideoFileResponse
 */
SkipVideoFileResponse Client::skipVideoFile(const SkipVideoFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return skipVideoFileWithOptions(request, runtime);
}

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
SmartCallResponse Client::smartCallWithOptions(const SmartCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionCodeBreak()) {
    query["ActionCodeBreak"] = request.actionCodeBreak();
  }

  if (!!request.hasActionCodeTimeBreak()) {
    query["ActionCodeTimeBreak"] = request.actionCodeTimeBreak();
  }

  if (!!request.hasAsrBaseId()) {
    query["AsrBaseId"] = request.asrBaseId();
  }

  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.asrModelId();
  }

  if (!!request.hasBackgroundFileCode()) {
    query["BackgroundFileCode"] = request.backgroundFileCode();
  }

  if (!!request.hasBackgroundSpeed()) {
    query["BackgroundSpeed"] = request.backgroundSpeed();
  }

  if (!!request.hasBackgroundVolume()) {
    query["BackgroundVolume"] = request.backgroundVolume();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.calledShowNumber();
  }

  if (!!request.hasDynamicId()) {
    query["DynamicId"] = request.dynamicId();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.earlyMediaAsr();
  }

  if (!!request.hasEnableITN()) {
    query["EnableITN"] = request.enableITN();
  }

  if (!!request.hasMuteTime()) {
    query["MuteTime"] = request.muteTime();
  }

  if (!!request.hasNoiseThreshold()) {
    query["NoiseThreshold"] = request.noiseThreshold();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPauseTime()) {
    query["PauseTime"] = request.pauseTime();
  }

  if (!!request.hasRecordFlag()) {
    query["RecordFlag"] = request.recordFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.sessionTimeout();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  if (!!request.hasStreamAsr()) {
    query["StreamAsr"] = request.streamAsr();
  }

  if (!!request.hasTtsConf()) {
    query["TtsConf"] = request.ttsConf();
  }

  if (!!request.hasTtsSpeed()) {
    query["TtsSpeed"] = request.ttsSpeed();
  }

  if (!!request.hasTtsStyle()) {
    query["TtsStyle"] = request.ttsStyle();
  }

  if (!!request.hasTtsVolume()) {
    query["TtsVolume"] = request.ttsVolume();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.voiceCode();
  }

  if (!!request.hasVoiceCodeParam()) {
    query["VoiceCodeParam"] = request.voiceCodeParam();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.volume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SmartCall"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SmartCallResponse>();
}

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
SmartCallResponse Client::smartCall(const SmartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smartCallWithOptions(request, runtime);
}

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
SmartCallOperateResponse Client::smartCallOperateWithOptions(const SmartCallOperateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.param();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SmartCallOperate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SmartCallOperateResponse>();
}

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
SmartCallOperateResponse Client::smartCallOperate(const SmartCallOperateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smartCallOperateWithOptions(request, runtime);
}

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
StartRobotTaskResponse Client::startRobotTaskWithOptions(const StartRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduleTime()) {
    query["ScheduleTime"] = request.scheduleTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRobotTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRobotTaskResponse>();
}

/**
 * @summary Starts a robocall task immediately or at a scheduled time.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request StartRobotTaskRequest
 * @return StartRobotTaskResponse
 */
StartRobotTaskResponse Client::startRobotTask(const StartRobotTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRobotTaskWithOptions(request, runtime);
}

/**
 * @summary Stops the inbound call that is transferred from a China 400 number.
 *
 * @param request StopCallInConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopCallInConfigResponse
 */
StopCallInConfigResponse Client::stopCallInConfigWithOptions(const StopCallInConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopCallInConfig"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopCallInConfigResponse>();
}

/**
 * @summary Stops the inbound call that is transferred from a China 400 number.
 *
 * @param request StopCallInConfigRequest
 * @return StopCallInConfigResponse
 */
StopCallInConfigResponse Client::stopCallInConfig(const StopCallInConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopCallInConfigWithOptions(request, runtime);
}

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
StopRobotTaskResponse Client::stopRobotTaskWithOptions(const StopRobotTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopRobotTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopRobotTaskResponse>();
}

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
StopRobotTaskResponse Client::stopRobotTask(const StopRobotTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRobotTaskWithOptions(request, runtime);
}

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
SubmitHotlineTransferRegisterResponse Client::submitHotlineTransferRegisterWithOptions(const SubmitHotlineTransferRegisterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgreement()) {
    query["Agreement"] = request.agreement();
  }

  if (!!request.hasHotlineNumber()) {
    query["HotlineNumber"] = request.hotlineNumber();
  }

  if (!!request.hasOperatorIdentityCard()) {
    query["OperatorIdentityCard"] = request.operatorIdentityCard();
  }

  if (!!request.hasOperatorMail()) {
    query["OperatorMail"] = request.operatorMail();
  }

  if (!!request.hasOperatorMailVerifyCode()) {
    query["OperatorMailVerifyCode"] = request.operatorMailVerifyCode();
  }

  if (!!request.hasOperatorMobile()) {
    query["OperatorMobile"] = request.operatorMobile();
  }

  if (!!request.hasOperatorMobileVerifyCode()) {
    query["OperatorMobileVerifyCode"] = request.operatorMobileVerifyCode();
  }

  if (!!request.hasOperatorName()) {
    query["OperatorName"] = request.operatorName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.qualificationId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTransferPhoneNumberInfos()) {
    query["TransferPhoneNumberInfos"] = request.transferPhoneNumberInfos();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitHotlineTransferRegister"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitHotlineTransferRegisterResponse>();
}

/**
 * @summary Submits a China 400 number for registration.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request SubmitHotlineTransferRegisterRequest
 * @return SubmitHotlineTransferRegisterResponse
 */
SubmitHotlineTransferRegisterResponse Client::submitHotlineTransferRegister(const SubmitHotlineTransferRegisterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitHotlineTransferRegisterWithOptions(request, runtime);
}

/**
 * @summary UpgradeVideoFile
 *
 * @param request UpgradeVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeVideoFileResponse
 */
UpgradeVideoFileResponse Client::upgradeVideoFileWithOptions(const UpgradeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeVideoFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeVideoFileResponse>();
}

/**
 * @summary UpgradeVideoFile
 *
 * @param request UpgradeVideoFileRequest
 * @return UpgradeVideoFileResponse
 */
UpgradeVideoFileResponse Client::upgradeVideoFile(const UpgradeVideoFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeVideoFileWithOptions(request, runtime);
}

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
UploadRobotTaskCalledFileResponse Client::uploadRobotTaskCalledFileWithOptions(const UploadRobotTaskCalledFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTtsParam()) {
    query["TtsParam"] = request.ttsParam();
  }

  if (!!request.hasTtsParamHead()) {
    query["TtsParamHead"] = request.ttsParamHead();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadRobotTaskCalledFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadRobotTaskCalledFileResponse>();
}

/**
 * @summary Uploads the called numbers of a robocall task.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account.
 *
 * @param request UploadRobotTaskCalledFileRequest
 * @return UploadRobotTaskCalledFileResponse
 */
UploadRobotTaskCalledFileResponse Client::uploadRobotTaskCalledFile(const UploadRobotTaskCalledFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadRobotTaskCalledFileWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525