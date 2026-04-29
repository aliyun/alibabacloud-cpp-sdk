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
 * @summary Binds multiple real numbers to a service instance at a time.
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
    query["CorpNameList"] = request.getCorpNameList();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNum()) {
    query["PhoneNum"] = request.getPhoneNum();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteType()) {
    query["RouteType"] = request.getRouteType();
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
 * @summary Binds multiple real numbers to a service instance at a time.
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
BatchRobotSmartCallResponse Client::batchRobotSmartCallWithOptions(const BatchRobotSmartCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.getCalledShowNumber();
  }

  if (!!request.hasCorpName()) {
    query["CorpName"] = request.getCorpName();
  }

  if (!!request.hasDialogId()) {
    query["DialogId"] = request.getDialogId();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.getEarlyMediaAsr();
  }

  if (!!request.hasIsSelfLine()) {
    query["IsSelfLine"] = request.getIsSelfLine();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScheduleCall()) {
    query["ScheduleCall"] = request.getScheduleCall();
  }

  if (!!request.hasScheduleTime()) {
    query["ScheduleTime"] = request.getScheduleTime();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTtsParam()) {
    query["TtsParam"] = request.getTtsParam();
  }

  if (!!request.hasTtsParamHead()) {
    query["TtsParamHead"] = request.getTtsParamHead();
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
BatchRobotSmartCallResponse Client::batchRobotSmartCall(const BatchRobotSmartCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchRobotSmartCallWithOptions(request, runtime);
}

/**
 * @summary Cancels the two-way call that is initiated by calling the ClickToDial operation.
 *
 * @param request CancelCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCallResponse
 */
CancelCallResponse Client::cancelCallWithOptions(const CancelCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCall"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCallResponse>();
}

/**
 * @summary Cancels the two-way call that is initiated by calling the ClickToDial operation.
 *
 * @param request CancelCallRequest
 * @return CancelCallResponse
 */
CancelCallResponse Client::cancelCall(const CancelCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCallWithOptions(request, runtime);
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNum()) {
    query["CalledNum"] = request.getCalledNum();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Publish the agent online through this interface.
 *
 * @param request CloudAgentLoginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudAgentLoginResponse
 */
CloudAgentLoginResponse Client::cloudAgentLoginWithOptions(const CloudAgentLoginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindTel()) {
    query["BindTel"] = request.getBindTel();
  }

  if (!!request.hasBindType()) {
    query["BindType"] = request.getBindType();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasLoginStatus()) {
    query["LoginStatus"] = request.getLoginStatus();
  }

  if (!!request.hasPauseDescription()) {
    query["PauseDescription"] = request.getPauseDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudAgentLogin"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudAgentLoginResponse>();
}

/**
 * @summary Publish the agent online through this interface.
 *
 * @param request CloudAgentLoginRequest
 * @return CloudAgentLoginResponse
 */
CloudAgentLoginResponse Client::cloudAgentLogin(const CloudAgentLoginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudAgentLoginWithOptions(request, runtime);
}

/**
 * @summary Unpublish an agent.
 *
 * @param request CloudAgentLogoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudAgentLogoutResponse
 */
CloudAgentLogoutResponse Client::cloudAgentLogoutWithOptions(const CloudAgentLogoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasIgnoreOffline()) {
    query["IgnoreOffline"] = request.getIgnoreOffline();
  }

  if (!!request.hasIsKickout()) {
    query["IsKickout"] = request.getIsKickout();
  }

  if (!!request.hasRemoveBinding()) {
    query["RemoveBinding"] = request.getRemoveBinding();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudAgentLogout"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudAgentLogoutResponse>();
}

/**
 * @summary Unpublish an agent.
 *
 * @param request CloudAgentLogoutRequest
 * @return CloudAgentLogoutResponse
 */
CloudAgentLogoutResponse Client::cloudAgentLogout(const CloudAgentLogoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudAgentLogoutWithOptions(request, runtime);
}

/**
 * @summary 座席实时统计
 *
 * @param request CloudAgentMonitorStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudAgentMonitorStatisticsResponse
 */
CloudAgentMonitorStatisticsResponse Client::cloudAgentMonitorStatisticsWithOptions(const CloudAgentMonitorStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasEndHour()) {
    query["EndHour"] = request.getEndHour();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasFields()) {
    query["Fields"] = request.getFields();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasIsNeedQueueName()) {
    query["IsNeedQueueName"] = request.getIsNeedQueueName();
  }

  if (!!request.hasIsUseGno()) {
    query["IsUseGno"] = request.getIsUseGno();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasStartHour()) {
    query["StartHour"] = request.getStartHour();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudAgentMonitorStatistics"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudAgentMonitorStatisticsResponse>();
}

/**
 * @summary 座席实时统计
 *
 * @param request CloudAgentMonitorStatisticsRequest
 * @return CloudAgentMonitorStatisticsResponse
 */
CloudAgentMonitorStatisticsResponse Client::cloudAgentMonitorStatistics(const CloudAgentMonitorStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudAgentMonitorStatisticsWithOptions(request, runtime);
}

/**
 * @summary Use this interface to set agent associated data.
 *
 * @param request CloudAgentSetUserDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudAgentSetUserDataResponse
 */
CloudAgentSetUserDataResponse Client::cloudAgentSetUserDataWithOptions(const CloudAgentSetUserDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudAgentSetUserData"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudAgentSetUserDataResponse>();
}

/**
 * @summary Use this interface to set agent associated data.
 *
 * @param request CloudAgentSetUserDataRequest
 * @return CloudAgentSetUserDataResponse
 */
CloudAgentSetUserDataResponse Client::cloudAgentSetUserData(const CloudAgentSetUserDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudAgentSetUserDataWithOptions(request, runtime);
}

/**
 * @summary The agent hangs up.
 *
 * @param request CloudAgentUnlinkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudAgentUnlinkResponse
 */
CloudAgentUnlinkResponse Client::cloudAgentUnlinkWithOptions(const CloudAgentUnlinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasRequestUniqueId()) {
    query["RequestUniqueId"] = request.getRequestUniqueId();
  }

  if (!!request.hasSide()) {
    query["Side"] = request.getSide();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudAgentUnlink"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudAgentUnlinkResponse>();
}

/**
 * @summary The agent hangs up.
 *
 * @param request CloudAgentUnlinkRequest
 * @return CloudAgentUnlinkResponse
 */
CloudAgentUnlinkResponse Client::cloudAgentUnlink(const CloudAgentUnlinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudAgentUnlinkWithOptions(request, runtime);
}

/**
 * @summary 获取座席工作量报表数据
 *
 * @param request CloudAgentWorkloadReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudAgentWorkloadReportResponse
 */
CloudAgentWorkloadReportResponse Client::cloudAgentWorkloadReportWithOptions(const CloudAgentWorkloadReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGnos()) {
    query["Gnos"] = request.getGnos();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisticMethod()) {
    query["StatisticMethod"] = request.getStatisticMethod();
  }

  if (!!request.hasTimeRangeType()) {
    query["TimeRangeType"] = request.getTimeRangeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudAgentWorkloadReport"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudAgentWorkloadReportResponse>();
}

/**
 * @summary 获取座席工作量报表数据
 *
 * @param request CloudAgentWorkloadReportRequest
 * @return CloudAgentWorkloadReportResponse
 */
CloudAgentWorkloadReportResponse Client::cloudAgentWorkloadReport(const CloudAgentWorkloadReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudAgentWorkloadReportWithOptions(request, runtime);
}

/**
 * @summary Assigns an agent to an outbound group.
 *
 * @param request CloudAssignAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudAssignAgentGroupResponse
 */
CloudAssignAgentGroupResponse Client::cloudAssignAgentGroupWithOptions(const CloudAssignAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudAssignAgentGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudAssignAgentGroupResponse>();
}

/**
 * @summary Assigns an agent to an outbound group.
 *
 * @param request CloudAssignAgentGroupRequest
 * @return CloudAssignAgentGroupResponse
 */
CloudAssignAgentGroupResponse Client::cloudAssignAgentGroup(const CloudAssignAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudAssignAgentGroupWithOptions(request, runtime);
}

/**
 * @summary 批量新增座席,单次批量创建不能超过100个
 *
 * @param request CloudBatchCreateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudBatchCreateAgentResponse
 */
CloudBatchCreateAgentResponse Client::cloudBatchCreateAgentWithOptions(const CloudBatchCreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.getActive();
  }

  if (!!request.hasAreaCode()) {
    query["AreaCode"] = request.getAreaCode();
  }

  if (!!request.hasCallPower()) {
    query["CallPower"] = request.getCallPower();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEndCno()) {
    query["EndCno"] = request.getEndCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasIbRecord()) {
    query["IbRecord"] = request.getIbRecord();
  }

  if (!!request.hasIsAsr()) {
    query["IsAsr"] = request.getIsAsr();
  }

  if (!!request.hasIsOb()) {
    query["IsOb"] = request.getIsOb();
  }

  if (!!request.hasIsQualityCheck()) {
    query["IsQualityCheck"] = request.getIsQualityCheck();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasObClid()) {
    query["ObClid"] = request.getObClid();
  }

  if (!!request.hasObClidProperty()) {
    query["ObClidProperty"] = request.getObClidProperty();
  }

  if (!!request.hasObClidType()) {
    query["ObClidType"] = request.getObClidType();
  }

  if (!!request.hasObRecord()) {
    query["ObRecord"] = request.getObRecord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPower()) {
    query["Power"] = request.getPower();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSkillIds()) {
    query["SkillIds"] = request.getSkillIds();
  }

  if (!!request.hasSkillLevels()) {
    query["SkillLevels"] = request.getSkillLevels();
  }

  if (!!request.hasWebrtcUrlType()) {
    query["WebrtcUrlType"] = request.getWebrtcUrlType();
  }

  if (!!request.hasWrapup()) {
    query["Wrapup"] = request.getWrapup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudBatchCreateAgent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudBatchCreateAgentResponse>();
}

/**
 * @summary 批量新增座席,单次批量创建不能超过100个
 *
 * @param request CloudBatchCreateAgentRequest
 * @return CloudBatchCreateAgentResponse
 */
CloudBatchCreateAgentResponse Client::cloudBatchCreateAgent(const CloudBatchCreateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudBatchCreateAgentWithOptions(request, runtime);
}

/**
 * @summary Obtains the real-time status of agents in batches based on their job numbers.
 *
 * @param request CloudBatchGetAgentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudBatchGetAgentStatusResponse
 */
CloudBatchGetAgentStatusResponse Client::cloudBatchGetAgentStatusWithOptions(const CloudBatchGetAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudBatchGetAgentStatus"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudBatchGetAgentStatusResponse>();
}

/**
 * @summary Obtains the real-time status of agents in batches based on their job numbers.
 *
 * @param request CloudBatchGetAgentStatusRequest
 * @return CloudBatchGetAgentStatusResponse
 */
CloudBatchGetAgentStatusResponse Client::cloudBatchGetAgentStatus(const CloudBatchGetAgentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudBatchGetAgentStatusWithOptions(request, runtime);
}

/**
 * @summary 批量更新座席基本信息，不包含座席绑定的技能信息的更新
 *
 * @param request CloudBatchUpdateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudBatchUpdateAgentResponse
 */
CloudBatchUpdateAgentResponse Client::cloudBatchUpdateAgentWithOptions(const CloudBatchUpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.getActive();
  }

  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasAreaCode()) {
    query["AreaCode"] = request.getAreaCode();
  }

  if (!!request.hasCallPower()) {
    query["CallPower"] = request.getCallPower();
  }

  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasIbRecord()) {
    query["IbRecord"] = request.getIbRecord();
  }

  if (!!request.hasIsAsr()) {
    query["IsAsr"] = request.getIsAsr();
  }

  if (!!request.hasIsOb()) {
    query["IsOb"] = request.getIsOb();
  }

  if (!!request.hasIsObRemember()) {
    query["IsObRemember"] = request.getIsObRemember();
  }

  if (!!request.hasIsQualityCheck()) {
    query["IsQualityCheck"] = request.getIsQualityCheck();
  }

  if (!!request.hasIsRandom()) {
    query["IsRandom"] = request.getIsRandom();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasObClid()) {
    query["ObClid"] = request.getObClid();
  }

  if (!!request.hasObClidProperty()) {
    query["ObClidProperty"] = request.getObClidProperty();
  }

  if (!!request.hasObClidType()) {
    query["ObClidType"] = request.getObClidType();
  }

  if (!!request.hasObRecord()) {
    query["ObRecord"] = request.getObRecord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPermitObPreviewTime()) {
    query["PermitObPreviewTime"] = request.getPermitObPreviewTime();
  }

  if (!!request.hasPower()) {
    query["Power"] = request.getPower();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasWebrtcUrlType()) {
    query["WebrtcUrlType"] = request.getWebrtcUrlType();
  }

  if (!!request.hasWrapup()) {
    query["Wrapup"] = request.getWrapup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudBatchUpdateAgent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudBatchUpdateAgentResponse>();
}

/**
 * @summary 批量更新座席基本信息，不包含座席绑定的技能信息的更新
 *
 * @param request CloudBatchUpdateAgentRequest
 * @return CloudBatchUpdateAgentResponse
 */
CloudBatchUpdateAgentResponse Client::cloudBatchUpdateAgent(const CloudBatchUpdateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudBatchUpdateAgentWithOptions(request, runtime);
}

/**
 * @summary 座席新增
 *
 * @param request CloudCreateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudCreateAgentResponse
 */
CloudCreateAgentResponse Client::cloudCreateAgentWithOptions(const CloudCreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.getActive();
  }

  if (!!request.hasAreaCode()) {
    query["AreaCode"] = request.getAreaCode();
  }

  if (!!request.hasCallPower()) {
    query["CallPower"] = request.getCallPower();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasIbRecord()) {
    query["IbRecord"] = request.getIbRecord();
  }

  if (!!request.hasIsAsr()) {
    query["IsAsr"] = request.getIsAsr();
  }

  if (!!request.hasIsOb()) {
    query["IsOb"] = request.getIsOb();
  }

  if (!!request.hasIsObRemember()) {
    query["IsObRemember"] = request.getIsObRemember();
  }

  if (!!request.hasIsQualityCheck()) {
    query["IsQualityCheck"] = request.getIsQualityCheck();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasObClid()) {
    query["ObClid"] = request.getObClid();
  }

  if (!!request.hasObClidProperty()) {
    query["ObClidProperty"] = request.getObClidProperty();
  }

  if (!!request.hasObClidType()) {
    query["ObClidType"] = request.getObClidType();
  }

  if (!!request.hasObRecord()) {
    query["ObRecord"] = request.getObRecord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPermitObPreviewTime()) {
    query["PermitObPreviewTime"] = request.getPermitObPreviewTime();
  }

  if (!!request.hasPower()) {
    query["Power"] = request.getPower();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSkillIds()) {
    query["SkillIds"] = request.getSkillIds();
  }

  if (!!request.hasSkillLevels()) {
    query["SkillLevels"] = request.getSkillLevels();
  }

  if (!!request.hasWebrtcUrlType()) {
    query["WebrtcUrlType"] = request.getWebrtcUrlType();
  }

  if (!!request.hasWrapup()) {
    query["Wrapup"] = request.getWrapup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudCreateAgent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudCreateAgentResponse>();
}

/**
 * @summary 座席新增
 *
 * @param request CloudCreateAgentRequest
 * @return CloudCreateAgentResponse
 */
CloudCreateAgentResponse Client::cloudCreateAgent(const CloudCreateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudCreateAgentWithOptions(request, runtime);
}

/**
 * @summary Call this operation to add an outbound group.
 *
 * @param request CloudCreateAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudCreateAgentGroupResponse
 */
CloudCreateAgentGroupResponse Client::cloudCreateAgentGroupWithOptions(const CloudCreateAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudCreateAgentGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudCreateAgentGroupResponse>();
}

/**
 * @summary Call this operation to add an outbound group.
 *
 * @param request CloudCreateAgentGroupRequest
 * @return CloudCreateAgentGroupResponse
 */
CloudCreateAgentGroupResponse Client::cloudCreateAgentGroup(const CloudCreateAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudCreateAgentGroupWithOptions(request, runtime);
}

/**
 * @summary Upload a recording file and create an ASR transform job.
 *
 * @param request CloudCreateAsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudCreateAsrResponse
 */
CloudCreateAsrResponse Client::cloudCreateAsrWithOptions(const CloudCreateAsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallType()) {
    query["CallType"] = request.getCallType();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasMainUniqueId()) {
    query["MainUniqueId"] = request.getMainUniqueId();
  }

  if (!!request.hasRecordFile()) {
    query["RecordFile"] = request.getRecordFile();
  }

  if (!!request.hasRecordSide()) {
    query["RecordSide"] = request.getRecordSide();
  }

  if (!!request.hasRecordType()) {
    query["RecordType"] = request.getRecordType();
  }

  if (!!request.hasSupportMp3()) {
    query["SupportMp3"] = request.getSupportMp3();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudCreateAsr"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudCreateAsrResponse>();
}

/**
 * @summary Upload a recording file and create an ASR transform job.
 *
 * @param request CloudCreateAsrRequest
 * @return CloudCreateAsrResponse
 */
CloudCreateAsrResponse Client::cloudCreateAsr(const CloudCreateAsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudCreateAsrWithOptions(request, runtime);
}

/**
 * @summary 新增时间条件设置
 *
 * @param request CloudCreateEnterpriseTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudCreateEnterpriseTimeResponse
 */
CloudCreateEnterpriseTimeResponse Client::cloudCreateEnterpriseTimeWithOptions(const CloudCreateEnterpriseTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDayOfWeek()) {
    query["DayOfWeek"] = request.getDayOfWeek();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasFromDay()) {
    query["FromDay"] = request.getFromDay();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeType()) {
    query["TimeType"] = request.getTimeType();
  }

  if (!!request.hasToDay()) {
    query["ToDay"] = request.getToDay();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudCreateEnterpriseTime"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudCreateEnterpriseTimeResponse>();
}

/**
 * @summary 新增时间条件设置
 *
 * @param request CloudCreateEnterpriseTimeRequest
 * @return CloudCreateEnterpriseTimeResponse
 */
CloudCreateEnterpriseTimeResponse Client::cloudCreateEnterpriseTime(const CloudCreateEnterpriseTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudCreateEnterpriseTimeWithOptions(request, runtime);
}

/**
 * @summary 新增分机
 *
 * @param request CloudCreateExtenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudCreateExtenResponse
 */
CloudCreateExtenResponse Client::cloudCreateExtenWithOptions(const CloudCreateExtenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllow()) {
    query["Allow"] = request.getAllow();
  }

  if (!!request.hasAreaCode()) {
    query["AreaCode"] = request.getAreaCode();
  }

  if (!!request.hasCallPower()) {
    query["CallPower"] = request.getCallPower();
  }

  if (!!request.hasDenoise()) {
    query["Denoise"] = request.getDenoise();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasExten()) {
    query["Exten"] = request.getExten();
  }

  if (!!request.hasIadName()) {
    query["IadName"] = request.getIadName();
  }

  if (!!request.hasIbRecord()) {
    query["IbRecord"] = request.getIbRecord();
  }

  if (!!request.hasIsDirect()) {
    query["IsDirect"] = request.getIsDirect();
  }

  if (!!request.hasIsOb()) {
    query["IsOb"] = request.getIsOb();
  }

  if (!!request.hasJitterBuffer()) {
    query["JitterBuffer"] = request.getJitterBuffer();
  }

  if (!!request.hasObRecord()) {
    query["ObRecord"] = request.getObRecord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProperty()) {
    query["Property"] = request.getProperty();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudCreateExten"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudCreateExtenResponse>();
}

/**
 * @summary 新增分机
 *
 * @param request CloudCreateExtenRequest
 * @return CloudCreateExtenResponse
 */
CloudCreateExtenResponse Client::cloudCreateExten(const CloudCreateExtenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudCreateExtenWithOptions(request, runtime);
}

/**
 * @summary 新增队列
 *
 * @param tmpReq CloudCreateQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudCreateQueueResponse
 */
CloudCreateQueueResponse Client::cloudCreateQueueWithOptions(const CloudCreateQueueRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CloudCreateQueueShrinkRequest request = CloudCreateQueueShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueue()) {
    request.setQueueShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueue(), "Queue", "json"));
  }

  if (!!tmpReq.hasQueueSkills()) {
    request.setQueueSkillsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueueSkills(), "QueueSkills", "json"));
  }

  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQueueShrink()) {
    query["Queue"] = request.getQueueShrink();
  }

  if (!!request.hasQueueSkillsShrink()) {
    query["QueueSkills"] = request.getQueueSkillsShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudCreateQueue"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudCreateQueueResponse>();
}

/**
 * @summary 新增队列
 *
 * @param request CloudCreateQueueRequest
 * @return CloudCreateQueueResponse
 */
CloudCreateQueueResponse Client::cloudCreateQueue(const CloudCreateQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudCreateQueueWithOptions(request, runtime);
}

/**
 * @summary Add skills to a queue.
 *
 * @param request CloudCreateQueueSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudCreateQueueSkillResponse
 */
CloudCreateQueueSkillResponse Client::cloudCreateQueueSkillWithOptions(const CloudCreateQueueSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQno()) {
    query["Qno"] = request.getQno();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  if (!!request.hasSkillLevel()) {
    query["SkillLevel"] = request.getSkillLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudCreateQueueSkill"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudCreateQueueSkillResponse>();
}

/**
 * @summary Add skills to a queue.
 *
 * @param request CloudCreateQueueSkillRequest
 * @return CloudCreateQueueSkillResponse
 */
CloudCreateQueueSkillResponse Client::cloudCreateQueueSkill(const CloudCreateQueueSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudCreateQueueSkillWithOptions(request, runtime);
}

/**
 * @summary Adds a skill by calling this interface.
 *
 * @param request CloudCreateSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudCreateSkillResponse
 */
CloudCreateSkillResponse Client::cloudCreateSkillWithOptions(const CloudCreateSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudCreateSkill"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudCreateSkillResponse>();
}

/**
 * @summary Adds a skill by calling this interface.
 *
 * @param request CloudCreateSkillRequest
 * @return CloudCreateSkillResponse
 */
CloudCreateSkillResponse Client::cloudCreateSkill(const CloudCreateSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudCreateSkillWithOptions(request, runtime);
}

/**
 * @summary 新增任务
 *
 * @param request CloudCreateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudCreateTaskResponse
 */
CloudCreateTaskResponse Client::cloudCreateTaskWithOptions(const CloudCreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentGroup()) {
    query["AgentGroup"] = request.getAgentGroup();
  }

  if (!!request.hasAgentTimeout()) {
    query["AgentTimeout"] = request.getAgentTimeout();
  }

  if (!!request.hasAnswerRate()) {
    query["AnswerRate"] = request.getAnswerRate();
  }

  if (!!request.hasAutoComplete()) {
    query["AutoComplete"] = request.getAutoComplete();
  }

  if (!!request.hasAutoDelete()) {
    query["AutoDelete"] = request.getAutoDelete();
  }

  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.getAutoStart();
  }

  if (!!request.hasAutoStartDay()) {
    query["AutoStartDay"] = request.getAutoStartDay();
  }

  if (!!request.hasAutoStartTime()) {
    query["AutoStartTime"] = request.getAutoStartTime();
  }

  if (!!request.hasAutoStop()) {
    query["AutoStop"] = request.getAutoStop();
  }

  if (!!request.hasAutoStopDay()) {
    query["AutoStopDay"] = request.getAutoStopDay();
  }

  if (!!request.hasAutoStopTime()) {
    query["AutoStopTime"] = request.getAutoStopTime();
  }

  if (!!request.hasAutoTaskType()) {
    query["AutoTaskType"] = request.getAutoTaskType();
  }

  if (!!request.hasAutoTriggerTimeStrategy()) {
    query["AutoTriggerTimeStrategy"] = request.getAutoTriggerTimeStrategy();
  }

  if (!!request.hasCallGroupType()) {
    query["CallGroupType"] = request.getCallGroupType();
  }

  if (!!request.hasCallLimitStrategy()) {
    query["CallLimitStrategy"] = request.getCallLimitStrategy();
  }

  if (!!request.hasCallPriorityStrategy()) {
    query["CallPriorityStrategy"] = request.getCallPriorityStrategy();
  }

  if (!!request.hasCallRouteStrategy()) {
    query["CallRouteStrategy"] = request.getCallRouteStrategy();
  }

  if (!!request.hasCallStrategy()) {
    query["CallStrategy"] = request.getCallStrategy();
  }

  if (!!request.hasCallVariables()) {
    query["CallVariables"] = request.getCallVariables();
  }

  if (!!request.hasClidProperty()) {
    query["ClidProperty"] = request.getClidProperty();
  }

  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasConcurrency()) {
    query["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasCustomerClidType()) {
    query["CustomerClidType"] = request.getCustomerClidType();
  }

  if (!!request.hasCustomerClidWeight()) {
    query["CustomerClidWeight"] = request.getCustomerClidWeight();
  }

  if (!!request.hasCustomerClidWeightFlag()) {
    query["CustomerClidWeightFlag"] = request.getCustomerClidWeightFlag();
  }

  if (!!request.hasCustomerClids()) {
    query["CustomerClids"] = request.getCustomerClids();
  }

  if (!!request.hasCustomerClidsCategory()) {
    query["CustomerClidsCategory"] = request.getCustomerClidsCategory();
  }

  if (!!request.hasCustomerClidsGroup()) {
    query["CustomerClidsGroup"] = request.getCustomerClidsGroup();
  }

  if (!!request.hasCustomerMoh()) {
    query["CustomerMoh"] = request.getCustomerMoh();
  }

  if (!!request.hasCustomerTimeout()) {
    query["CustomerTimeout"] = request.getCustomerTimeout();
  }

  if (!!request.hasCustomerVoice()) {
    query["CustomerVoice"] = request.getCustomerVoice();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasForceEndFlag()) {
    query["ForceEndFlag"] = request.getForceEndFlag();
  }

  if (!!request.hasIsRewarm()) {
    query["IsRewarm"] = request.getIsRewarm();
  }

  if (!!request.hasIvrId()) {
    query["IvrId"] = request.getIvrId();
  }

  if (!!request.hasIvrName()) {
    query["IvrName"] = request.getIvrName();
  }

  if (!!request.hasMaxWaitTime()) {
    query["MaxWaitTime"] = request.getMaxWaitTime();
  }

  if (!!request.hasMinAvailableAgentCount()) {
    query["MinAvailableAgentCount"] = request.getMinAvailableAgentCount();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPredictAdjust()) {
    query["PredictAdjust"] = request.getPredictAdjust();
  }

  if (!!request.hasQuotiety()) {
    query["Quotiety"] = request.getQuotiety();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRetryStrategy()) {
    query["RetryStrategy"] = request.getRetryStrategy();
  }

  if (!!request.hasRetryStrategyOnlyToday()) {
    query["RetryStrategyOnlyToday"] = request.getRetryStrategyOnlyToday();
  }

  if (!!request.hasRetryStrategyTimeType()) {
    query["RetryStrategyTimeType"] = request.getRetryStrategyTimeType();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTimeStrategy()) {
    query["TimeStrategy"] = request.getTimeStrategy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserFields()) {
    query["UserFields"] = request.getUserFields();
  }

  if (!!request.hasWarmUpDuration()) {
    query["WarmUpDuration"] = request.getWarmUpDuration();
  }

  if (!!request.hasWrapup()) {
    query["Wrapup"] = request.getWrapup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudCreateTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudCreateTaskResponse>();
}

/**
 * @summary 新增任务
 *
 * @param request CloudCreateTaskRequest
 * @return CloudCreateTaskResponse
 */
CloudCreateTaskResponse Client::cloudCreateTask(const CloudCreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudCreateTaskWithOptions(request, runtime);
}

/**
 * @summary Delete an agent based on the agent number.
 *
 * @param request CloudDeleteAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteAgentResponse
 */
CloudDeleteAgentResponse Client::cloudDeleteAgentWithOptions(const CloudDeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteAgent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteAgentResponse>();
}

/**
 * @summary Delete an agent based on the agent number.
 *
 * @param request CloudDeleteAgentRequest
 * @return CloudDeleteAgentResponse
 */
CloudDeleteAgentResponse Client::cloudDeleteAgent(const CloudDeleteAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteAgentWithOptions(request, runtime);
}

/**
 * @summary Delete an outbound call group.
 *
 * @param request CloudDeleteAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteAgentGroupResponse
 */
CloudDeleteAgentGroupResponse Client::cloudDeleteAgentGroupWithOptions(const CloudDeleteAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteAgentGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteAgentGroupResponse>();
}

/**
 * @summary Delete an outbound call group.
 *
 * @param request CloudDeleteAgentGroupRequest
 * @return CloudDeleteAgentGroupResponse
 */
CloudDeleteAgentGroupResponse Client::cloudDeleteAgentGroup(const CloudDeleteAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteAgentGroupWithOptions(request, runtime);
}

/**
 * @summary Delete the phone under the agent.
 *
 * @param request CloudDeleteAgentTelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteAgentTelResponse
 */
CloudDeleteAgentTelResponse Client::cloudDeleteAgentTelWithOptions(const CloudDeleteAgentTelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTel()) {
    query["Tel"] = request.getTel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteAgentTel"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteAgentTelResponse>();
}

/**
 * @summary Delete the phone under the agent.
 *
 * @param request CloudDeleteAgentTelRequest
 * @return CloudDeleteAgentTelResponse
 */
CloudDeleteAgentTelResponse Client::cloudDeleteAgentTel(const CloudDeleteAgentTelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteAgentTelWithOptions(request, runtime);
}

/**
 * @summary Delete a time condition setting.
 *
 * @param request CloudDeleteEnterpriseTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteEnterpriseTimeResponse
 */
CloudDeleteEnterpriseTimeResponse Client::cloudDeleteEnterpriseTimeWithOptions(const CloudDeleteEnterpriseTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteEnterpriseTime"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteEnterpriseTimeResponse>();
}

/**
 * @summary Delete a time condition setting.
 *
 * @param request CloudDeleteEnterpriseTimeRequest
 * @return CloudDeleteEnterpriseTimeResponse
 */
CloudDeleteEnterpriseTimeResponse Client::cloudDeleteEnterpriseTime(const CloudDeleteEnterpriseTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteEnterpriseTimeWithOptions(request, runtime);
}

/**
 * @summary Deletes an extension based on the extension number.
 *
 * @param request CloudDeleteExtenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteExtenResponse
 */
CloudDeleteExtenResponse Client::cloudDeleteExtenWithOptions(const CloudDeleteExtenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasExten()) {
    query["Exten"] = request.getExten();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteExten"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteExtenResponse>();
}

/**
 * @summary Deletes an extension based on the extension number.
 *
 * @param request CloudDeleteExtenRequest
 * @return CloudDeleteExtenResponse
 */
CloudDeleteExtenResponse Client::cloudDeleteExten(const CloudDeleteExtenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteExtenWithOptions(request, runtime);
}

/**
 * @summary Delete a queue.
 *
 * @param request CloudDeleteQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteQueueResponse
 */
CloudDeleteQueueResponse Client::cloudDeleteQueueWithOptions(const CloudDeleteQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQno()) {
    query["Qno"] = request.getQno();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteQueue"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteQueueResponse>();
}

/**
 * @summary Delete a queue.
 *
 * @param request CloudDeleteQueueRequest
 * @return CloudDeleteQueueResponse
 */
CloudDeleteQueueResponse Client::cloudDeleteQueue(const CloudDeleteQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteQueueWithOptions(request, runtime);
}

/**
 * @summary Queue delete skills.
 *
 * @param request CloudDeleteQueueSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteQueueSkillResponse
 */
CloudDeleteQueueSkillResponse Client::cloudDeleteQueueSkillWithOptions(const CloudDeleteQueueSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQno()) {
    query["Qno"] = request.getQno();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteQueueSkill"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteQueueSkillResponse>();
}

/**
 * @summary Queue delete skills.
 *
 * @param request CloudDeleteQueueSkillRequest
 * @return CloudDeleteQueueSkillResponse
 */
CloudDeleteQueueSkillResponse Client::cloudDeleteQueueSkill(const CloudDeleteQueueSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteQueueSkillWithOptions(request, runtime);
}

/**
 * @summary Deletes a skill.
 *
 * @param request CloudDeleteSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteSkillResponse
 */
CloudDeleteSkillResponse Client::cloudDeleteSkillWithOptions(const CloudDeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteSkill"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteSkillResponse>();
}

/**
 * @summary Deletes a skill.
 *
 * @param request CloudDeleteSkillRequest
 * @return CloudDeleteSkillResponse
 */
CloudDeleteSkillResponse Client::cloudDeleteSkill(const CloudDeleteSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteSkillWithOptions(request, runtime);
}

/**
 * @summary Supports deleting predictive outbound call and automatic outbound call jobs. Only jobs in the initial or completed status can be deleted. When a job is deleted, the associated numbers are also deleted.
 *
 * @param request CloudDeleteTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteTaskResponse
 */
CloudDeleteTaskResponse Client::cloudDeleteTaskWithOptions(const CloudDeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteTaskResponse>();
}

/**
 * @summary Supports deleting predictive outbound call and automatic outbound call jobs. Only jobs in the initial or completed status can be deleted. When a job is deleted, the associated numbers are also deleted.
 *
 * @param request CloudDeleteTaskRequest
 * @return CloudDeleteTaskResponse
 */
CloudDeleteTaskResponse Client::cloudDeleteTask(const CloudDeleteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes the number of a call job through this interface.
 *
 * @param request CloudDeleteTaskTelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudDeleteTaskTelResponse
 */
CloudDeleteTaskTelResponse Client::cloudDeleteTaskTelWithOptions(const CloudDeleteTaskTelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTels()) {
    query["Tels"] = request.getTels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudDeleteTaskTel"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudDeleteTaskTelResponse>();
}

/**
 * @summary Deletes the number of a call job through this interface.
 *
 * @param request CloudDeleteTaskTelRequest
 * @return CloudDeleteTaskTelResponse
 */
CloudDeleteTaskTelResponse Client::cloudDeleteTaskTel(const CloudDeleteTaskTelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudDeleteTaskTelWithOptions(request, runtime);
}

/**
 * @summary 座席详细信息获取
 *
 * @param request CloudGetAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudGetAgentResponse
 */
CloudGetAgentResponse Client::cloudGetAgentWithOptions(const CloudGetAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudGetAgent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudGetAgentResponse>();
}

/**
 * @summary 座席详细信息获取
 *
 * @param request CloudGetAgentRequest
 * @return CloudGetAgentResponse
 */
CloudGetAgentResponse Client::cloudGetAgent(const CloudGetAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudGetAgentWithOptions(request, runtime);
}

/**
 * @summary Obtains the real-time status info of agents.
 *
 * @param request CloudGetAgentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudGetAgentStatusResponse
 */
CloudGetAgentStatusResponse Client::cloudGetAgentStatusWithOptions(const CloudGetAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudGetAgentStatus"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudGetAgentStatusResponse>();
}

/**
 * @summary Obtains the real-time status info of agents.
 *
 * @param request CloudGetAgentStatusRequest
 * @return CloudGetAgentStatusResponse
 */
CloudGetAgentStatusResponse Client::cloudGetAgentStatus(const CloudGetAgentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudGetAgentStatusWithOptions(request, runtime);
}

/**
 * @summary Query phone number attribution.
 *
 * @param request CloudGetAreaCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudGetAreaCodeResponse
 */
CloudGetAreaCodeResponse Client::cloudGetAreaCodeWithOptions(const CloudGetAreaCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasTel()) {
    query["Tel"] = request.getTel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudGetAreaCode"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudGetAreaCodeResponse>();
}

/**
 * @summary Query phone number attribution.
 *
 * @param request CloudGetAreaCodeRequest
 * @return CloudGetAreaCodeResponse
 */
CloudGetAreaCodeResponse Client::cloudGetAreaCode(const CloudGetAreaCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudGetAreaCodeWithOptions(request, runtime);
}

/**
 * @summary ASR数据获取
 *
 * @param request CloudGetAsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudGetAsrResponse
 */
CloudGetAsrResponse Client::cloudGetAsrWithOptions(const CloudGetAsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasCallType()) {
    query["CallType"] = request.getCallType();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasMainUniqueId()) {
    query["MainUniqueId"] = request.getMainUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudGetAsr"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudGetAsrResponse>();
}

/**
 * @summary ASR数据获取
 *
 * @param request CloudGetAsrRequest
 * @return CloudGetAsrResponse
 */
CloudGetAsrResponse Client::cloudGetAsr(const CloudGetAsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudGetAsrWithOptions(request, runtime);
}

/**
 * @summary Queries the info about a specified extension.
 *
 * @param request CloudGetExtenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudGetExtenResponse
 */
CloudGetExtenResponse Client::cloudGetExtenWithOptions(const CloudGetExtenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasExten()) {
    query["Exten"] = request.getExten();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudGetExten"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudGetExtenResponse>();
}

/**
 * @summary Queries the info about a specified extension.
 *
 * @param request CloudGetExtenRequest
 * @return CloudGetExtenResponse
 */
CloudGetExtenResponse Client::cloudGetExten(const CloudGetExtenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudGetExtenWithOptions(request, runtime);
}

/**
 * @summary 获取座席外呼通话记录详情
 *
 * @param request CloudGetObCdrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudGetObCdrResponse
 */
CloudGetObCdrResponse Client::cloudGetObCdrWithOptions(const CloudGetObCdrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudGetObCdr"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudGetObCdrResponse>();
}

/**
 * @summary 获取座席外呼通话记录详情
 *
 * @param request CloudGetObCdrRequest
 * @return CloudGetObCdrResponse
 */
CloudGetObCdrResponse Client::cloudGetObCdr(const CloudGetObCdrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudGetObCdrWithOptions(request, runtime);
}

/**
 * @summary 获取队列信息
 *
 * @param request CloudGetQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudGetQueueResponse
 */
CloudGetQueueResponse Client::cloudGetQueueWithOptions(const CloudGetQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQno()) {
    query["Qno"] = request.getQno();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudGetQueue"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudGetQueueResponse>();
}

/**
 * @summary 获取队列信息
 *
 * @param request CloudGetQueueRequest
 * @return CloudGetQueueResponse
 */
CloudGetQueueResponse Client::cloudGetQueue(const CloudGetQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudGetQueueWithOptions(request, runtime);
}

/**
 * @summary 获取通话录音地址
 *
 * @param request CloudGetRecordUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudGetRecordUrlResponse
 */
CloudGetRecordUrlResponse Client::cloudGetRecordUrlWithOptions(const CloudGetRecordUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallType()) {
    query["CallType"] = request.getCallType();
  }

  if (!!request.hasDownload()) {
    query["Download"] = request.getDownload();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasRecordFile()) {
    query["RecordFile"] = request.getRecordFile();
  }

  if (!!request.hasRecordFormat()) {
    query["RecordFormat"] = request.getRecordFormat();
  }

  if (!!request.hasRecordSide()) {
    query["RecordSide"] = request.getRecordSide();
  }

  if (!!request.hasRecordType()) {
    query["RecordType"] = request.getRecordType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudGetRecordUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudGetRecordUrlResponse>();
}

/**
 * @summary 获取通话录音地址
 *
 * @param request CloudGetRecordUrlRequest
 * @return CloudGetRecordUrlResponse
 */
CloudGetRecordUrlResponse Client::cloudGetRecordUrl(const CloudGetRecordUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudGetRecordUrlWithOptions(request, runtime);
}

/**
 * @summary 获取任务信息
 *
 * @param request CloudGetTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudGetTaskResponse
 */
CloudGetTaskResponse Client::cloudGetTaskWithOptions(const CloudGetTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudGetTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudGetTaskResponse>();
}

/**
 * @summary 获取任务信息
 *
 * @param request CloudGetTaskRequest
 * @return CloudGetTaskResponse
 */
CloudGetTaskResponse Client::cloudGetTask(const CloudGetTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudGetTaskWithOptions(request, runtime);
}

/**
 * @summary 任务号码导入
 *
 * @param tmpReq CloudImportTaskTelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudImportTaskTelResponse
 */
CloudImportTaskTelResponse Client::cloudImportTaskTelWithOptions(const CloudImportTaskTelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CloudImportTaskTelShrinkRequest request = CloudImportTaskTelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskTelList()) {
    request.setTaskTelListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskTelList(), "TaskTelList", "json"));
  }

  json query = {};
  if (!!request.hasBridgeVoicePath()) {
    query["BridgeVoicePath"] = request.getBridgeVoicePath();
  }

  if (!!request.hasBridgeVoiceType()) {
    query["BridgeVoiceType"] = request.getBridgeVoiceType();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasImportTelAutoStart()) {
    query["ImportTelAutoStart"] = request.getImportTelAutoStart();
  }

  if (!!request.hasIsRepeat()) {
    query["IsRepeat"] = request.getIsRepeat();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskTelListShrink()) {
    query["TaskTelList"] = request.getTaskTelListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudImportTaskTel"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudImportTaskTelResponse>();
}

/**
 * @summary 任务号码导入
 *
 * @param request CloudImportTaskTelRequest
 * @return CloudImportTaskTelResponse
 */
CloudImportTaskTelResponse Client::cloudImportTaskTel(const CloudImportTaskTelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudImportTaskTelWithOptions(request, runtime);
}

/**
 * @summary If the current call is at an await edge zone in voice navigation, this interface can interrupt the wait and execute to the next hop.
 *
 * @param request CloudInterruptIvrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudInterruptIvrResponse
 */
CloudInterruptIvrResponse Client::cloudInterruptIvrWithOptions(const CloudInterruptIvrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckName()) {
    query["CheckName"] = request.getCheckName();
  }

  if (!!request.hasCheckValue()) {
    query["CheckValue"] = request.getCheckValue();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  if (!!request.hasUserField()) {
    query["UserField"] = request.getUserField();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudInterruptIvr"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudInterruptIvrResponse>();
}

/**
 * @summary If the current call is at an await edge zone in voice navigation, this interface can interrupt the wait and execute to the next hop.
 *
 * @param request CloudInterruptIvrRequest
 * @return CloudInterruptIvrResponse
 */
CloudInterruptIvrResponse Client::cloudInterruptIvr(const CloudInterruptIvrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudInterruptIvrWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query outbound groups.
 *
 * @param request CloudListAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListAgentGroupResponse
 */
CloudListAgentGroupResponse Client::cloudListAgentGroupWithOptions(const CloudListAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListAgentGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListAgentGroupResponse>();
}

/**
 * @summary You can call this operation to query outbound groups.
 *
 * @param request CloudListAgentGroupRequest
 * @return CloudListAgentGroupResponse
 */
CloudListAgentGroupResponse Client::cloudListAgentGroup(const CloudListAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListAgentGroupWithOptions(request, runtime);
}

/**
 * @summary Obtain agent phone info by agent number.
 *
 * @param request CloudListAgentTelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListAgentTelResponse
 */
CloudListAgentTelResponse Client::cloudListAgentTelWithOptions(const CloudListAgentTelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTel()) {
    query["Tel"] = request.getTel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListAgentTel"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListAgentTelResponse>();
}

/**
 * @summary Obtain agent phone info by agent number.
 *
 * @param request CloudListAgentTelRequest
 * @return CloudListAgentTelResponse
 */
CloudListAgentTelResponse Client::cloudListAgentTel(const CloudListAgentTelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListAgentTelWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query the list of agents in an outbound group.
 *
 * @param request CloudListAssignedAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListAssignedAgentGroupResponse
 */
CloudListAssignedAgentGroupResponse Client::cloudListAssignedAgentGroupWithOptions(const CloudListAssignedAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCname()) {
    query["Cname"] = request.getCname();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListAssignedAgentGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListAssignedAgentGroupResponse>();
}

/**
 * @summary You can call this operation to query the list of agents in an outbound group.
 *
 * @param request CloudListAssignedAgentGroupRequest
 * @return CloudListAssignedAgentGroupResponse
 */
CloudListAssignedAgentGroupResponse Client::cloudListAssignedAgentGroup(const CloudListAssignedAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListAssignedAgentGroupWithOptions(request, runtime);
}

/**
 * @summary 推送日志查询
 *
 * @param request CloudListCurlLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListCurlLogResponse
 */
CloudListCurlLogResponse Client::cloudListCurlLogWithOptions(const CloudListCurlLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasResult()) {
    query["Result"] = request.getResult();
  }

  if (!!request.hasRetry()) {
    query["Retry"] = request.getRetry();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListCurlLog"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListCurlLogResponse>();
}

/**
 * @summary 推送日志查询
 *
 * @param request CloudListCurlLogRequest
 * @return CloudListCurlLogResponse
 */
CloudListCurlLogResponse Client::cloudListCurlLog(const CloudListCurlLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListCurlLogWithOptions(request, runtime);
}

/**
 * @summary 获取时间条件设置列表
 *
 * @param request CloudListEnterpriseTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListEnterpriseTimeResponse
 */
CloudListEnterpriseTimeResponse Client::cloudListEnterpriseTimeWithOptions(const CloudListEnterpriseTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListEnterpriseTime"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListEnterpriseTimeResponse>();
}

/**
 * @summary 获取时间条件设置列表
 *
 * @param request CloudListEnterpriseTimeRequest
 * @return CloudListEnterpriseTimeResponse
 */
CloudListEnterpriseTimeResponse Client::cloudListEnterpriseTime(const CloudListEnterpriseTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListEnterpriseTimeWithOptions(request, runtime);
}

/**
 * @summary 获取分机列表
 *
 * @param request CloudListExtenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListExtenResponse
 */
CloudListExtenResponse Client::cloudListExtenWithOptions(const CloudListExtenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAreaCode()) {
    query["AreaCode"] = request.getAreaCode();
  }

  if (!!request.hasCallPower()) {
    query["CallPower"] = request.getCallPower();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasExten()) {
    query["Exten"] = request.getExten();
  }

  if (!!request.hasIbRecord()) {
    query["IbRecord"] = request.getIbRecord();
  }

  if (!!request.hasIsBind()) {
    query["IsBind"] = request.getIsBind();
  }

  if (!!request.hasIsOb()) {
    query["IsOb"] = request.getIsOb();
  }

  if (!!request.hasJitterBuffer()) {
    query["JitterBuffer"] = request.getJitterBuffer();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasObRecord()) {
    query["ObRecord"] = request.getObRecord();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListExten"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListExtenResponse>();
}

/**
 * @summary 获取分机列表
 *
 * @param request CloudListExtenRequest
 * @return CloudListExtenResponse
 */
CloudListExtenResponse Client::cloudListExten(const CloudListExtenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListExtenWithOptions(request, runtime);
}

/**
 * @summary Queries the list of online agents.
 *
 * @param request CloudListFreeAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListFreeAgentResponse
 */
CloudListFreeAgentResponse Client::cloudListFreeAgentWithOptions(const CloudListFreeAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListFreeAgent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListFreeAgentResponse>();
}

/**
 * @summary Queries the list of online agents.
 *
 * @param request CloudListFreeAgentRequest
 * @return CloudListFreeAgentResponse
 */
CloudListFreeAgentResponse Client::cloudListFreeAgent(const CloudListFreeAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListFreeAgentWithOptions(request, runtime);
}

/**
 * @summary 在线座席信息
 *
 * @param request CloudListOnlineAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListOnlineAgentResponse
 */
CloudListOnlineAgentResponse Client::cloudListOnlineAgentWithOptions(const CloudListOnlineAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPauseDescription()) {
    query["PauseDescription"] = request.getPauseDescription();
  }

  if (!!request.hasPauseType()) {
    query["PauseType"] = request.getPauseType();
  }

  if (!!request.hasQnos()) {
    query["Qnos"] = request.getQnos();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStateCode()) {
    query["StateCode"] = request.getStateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListOnlineAgent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListOnlineAgentResponse>();
}

/**
 * @summary 在线座席信息
 *
 * @param request CloudListOnlineAgentRequest
 * @return CloudListOnlineAgentResponse
 */
CloudListOnlineAgentResponse Client::cloudListOnlineAgent(const CloudListOnlineAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListOnlineAgentWithOptions(request, runtime);
}

/**
 * @summary 获取队列列表
 *
 * @param request CloudListQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListQueueResponse
 */
CloudListQueueResponse Client::cloudListQueueWithOptions(const CloudListQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQno()) {
    query["Qno"] = request.getQno();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListQueue"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListQueueResponse>();
}

/**
 * @summary 获取队列列表
 *
 * @param request CloudListQueueRequest
 * @return CloudListQueueResponse
 */
CloudListQueueResponse Client::cloudListQueue(const CloudListQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListQueueWithOptions(request, runtime);
}

/**
 * @summary Obtains queue skill info.
 *
 * @param request CloudListQueueSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListQueueSkillResponse
 */
CloudListQueueSkillResponse Client::cloudListQueueSkillWithOptions(const CloudListQueueSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQno()) {
    query["Qno"] = request.getQno();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListQueueSkill"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListQueueSkillResponse>();
}

/**
 * @summary Obtains queue skill info.
 *
 * @param request CloudListQueueSkillRequest
 * @return CloudListQueueSkillResponse
 */
CloudListQueueSkillResponse Client::cloudListQueueSkill(const CloudListQueueSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListQueueSkillWithOptions(request, runtime);
}

/**
 * @summary Queries the skill info list.
 *
 * @param request CloudListSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListSkillResponse
 */
CloudListSkillResponse Client::cloudListSkillWithOptions(const CloudListSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListSkill"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListSkillResponse>();
}

/**
 * @summary Queries the skill info list.
 *
 * @param request CloudListSkillRequest
 * @return CloudListSkillResponse
 */
CloudListSkillResponse Client::cloudListSkill(const CloudListSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListSkillWithOptions(request, runtime);
}

/**
 * @summary Query the call job batch list info.
 *
 * @param request CloudListTaskFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudListTaskFileResponse
 */
CloudListTaskFileResponse Client::cloudListTaskFileWithOptions(const CloudListTaskFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudListTaskFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudListTaskFileResponse>();
}

/**
 * @summary Query the call job batch list info.
 *
 * @param request CloudListTaskFileRequest
 * @return CloudListTaskFileResponse
 */
CloudListTaskFileResponse Client::cloudListTaskFile(const CloudListTaskFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudListTaskFileWithOptions(request, runtime);
}

/**
 * @summary 任务监控
 *
 * @param request CloudMonitorTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudMonitorTaskResponse
 */
CloudMonitorTaskResponse Client::cloudMonitorTaskWithOptions(const CloudMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudMonitorTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudMonitorTaskResponse>();
}

/**
 * @summary 任务监控
 *
 * @param request CloudMonitorTaskRequest
 * @return CloudMonitorTaskResponse
 */
CloudMonitorTaskResponse Client::cloudMonitorTask(const CloudMonitorTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudMonitorTaskWithOptions(request, runtime);
}

/**
 * @summary 获取预览外呼主叫号码报表
 *
 * @param request CloudOutboundObClidReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudOutboundObClidReportResponse
 */
CloudOutboundObClidReportResponse Client::cloudOutboundObClidReportWithOptions(const CloudOutboundObClidReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAreaCodes()) {
    query["AreaCodes"] = request.getAreaCodes();
  }

  if (!!request.hasEndHour()) {
    query["EndHour"] = request.getEndHour();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartHour()) {
    query["StartHour"] = request.getStartHour();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisticMethod()) {
    query["StatisticMethod"] = request.getStatisticMethod();
  }

  if (!!request.hasTimeRangeType()) {
    query["TimeRangeType"] = request.getTimeRangeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudOutboundObClidReport"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudOutboundObClidReportResponse>();
}

/**
 * @summary 获取预览外呼主叫号码报表
 *
 * @param request CloudOutboundObClidReportRequest
 * @return CloudOutboundObClidReportResponse
 */
CloudOutboundObClidReportResponse Client::cloudOutboundObClidReport(const CloudOutboundObClidReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudOutboundObClidReportWithOptions(request, runtime);
}

/**
 * @summary 获取预览外呼报表
 *
 * @param request CloudOutboundPreviewObReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudOutboundPreviewObReportResponse
 */
CloudOutboundPreviewObReportResponse Client::cloudOutboundPreviewObReportWithOptions(const CloudOutboundPreviewObReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasEndHour()) {
    query["EndHour"] = request.getEndHour();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartHour()) {
    query["StartHour"] = request.getStartHour();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatisticMethod()) {
    query["StatisticMethod"] = request.getStatisticMethod();
  }

  if (!!request.hasTimeRangeType()) {
    query["TimeRangeType"] = request.getTimeRangeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudOutboundPreviewObReport"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudOutboundPreviewObReportResponse>();
}

/**
 * @summary 获取预览外呼报表
 *
 * @param request CloudOutboundPreviewObReportRequest
 * @return CloudOutboundPreviewObReportResponse
 */
CloudOutboundPreviewObReportResponse Client::cloudOutboundPreviewObReport(const CloudOutboundPreviewObReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudOutboundPreviewObReportWithOptions(request, runtime);
}

/**
 * @summary Suspends a call job through this interface.
 *
 * @param request CloudPauseTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudPauseTaskResponse
 */
CloudPauseTaskResponse Client::cloudPauseTaskWithOptions(const CloudPauseTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPauseDuration()) {
    query["PauseDuration"] = request.getPauseDuration();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudPauseTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudPauseTaskResponse>();
}

/**
 * @summary Suspends a call job through this interface.
 *
 * @param request CloudPauseTaskRequest
 * @return CloudPauseTaskResponse
 */
CloudPauseTaskResponse Client::cloudPauseTask(const CloudPauseTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudPauseTaskWithOptions(request, runtime);
}

/**
 * @summary 座席外呼
 *
 * @param request CloudPreviewoutcallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudPreviewoutcallResponse
 */
CloudPreviewoutcallResponse Client::cloudPreviewoutcallWithOptions(const CloudPreviewoutcallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupTels()) {
    query["BackupTels"] = request.getBackupTels();
  }

  if (!!request.hasCallVariables()) {
    query["CallVariables"] = request.getCallVariables();
  }

  if (!!request.hasCdrIsAsr()) {
    query["CdrIsAsr"] = request.getCdrIsAsr();
  }

  if (!!request.hasClidList()) {
    query["ClidList"] = request.getClidList();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasCrnId()) {
    query["CrnId"] = request.getCrnId();
  }

  if (!!request.hasDialTelTimeout()) {
    query["DialTelTimeout"] = request.getDialTelTimeout();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasIsInvestigation()) {
    query["IsInvestigation"] = request.getIsInvestigation();
  }

  if (!!request.hasObClid()) {
    query["ObClid"] = request.getObClid();
  }

  if (!!request.hasObClidAreaCode()) {
    query["ObClidAreaCode"] = request.getObClidAreaCode();
  }

  if (!!request.hasObClidGroup()) {
    query["ObClidGroup"] = request.getObClidGroup();
  }

  if (!!request.hasRequestUniqueId()) {
    query["RequestUniqueId"] = request.getRequestUniqueId();
  }

  if (!!request.hasTel()) {
    query["Tel"] = request.getTel();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudPreviewoutcall"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudPreviewoutcallResponse>();
}

/**
 * @summary 座席外呼
 *
 * @param request CloudPreviewoutcallRequest
 * @return CloudPreviewoutcallResponse
 */
CloudPreviewoutcallResponse Client::cloudPreviewoutcall(const CloudPreviewoutcallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudPreviewoutcallWithOptions(request, runtime);
}

/**
 * @summary 座席详细信息列表获取
 *
 * @param request CloudQueryAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryAgentResponse
 */
CloudQueryAgentResponse Client::cloudQueryAgentWithOptions(const CloudQueryAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.getActive();
  }

  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQno()) {
    query["Qno"] = request.getQno();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasReturnQueue()) {
    query["ReturnQueue"] = request.getReturnQueue();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWebrtcUrlType()) {
    query["WebrtcUrlType"] = request.getWebrtcUrlType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryAgent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryAgentResponse>();
}

/**
 * @summary 座席详细信息列表获取
 *
 * @param request CloudQueryAgentRequest
 * @return CloudQueryAgentResponse
 */
CloudQueryAgentResponse Client::cloudQueryAgent(const CloudQueryAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryAgentWithOptions(request, runtime);
}

/**
 * @summary Get all agent numbers and parameter messages.
 *
 * @param request CloudQueryAgentCnoAndNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryAgentCnoAndNameResponse
 */
CloudQueryAgentCnoAndNameResponse Client::cloudQueryAgentCnoAndNameWithOptions(const CloudQueryAgentCnoAndNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryAgentCnoAndName"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryAgentCnoAndNameResponse>();
}

/**
 * @summary Get all agent numbers and parameter messages.
 *
 * @param request CloudQueryAgentCnoAndNameRequest
 * @return CloudQueryAgentCnoAndNameResponse
 */
CloudQueryAgentCnoAndNameResponse Client::cloudQueryAgentCnoAndName(const CloudQueryAgentCnoAndNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryAgentCnoAndNameWithOptions(request, runtime);
}

/**
 * @summary Queries the info about the outbound group to which the agent belongs.
 *
 * @param request CloudQueryAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryAgentGroupResponse
 */
CloudQueryAgentGroupResponse Client::cloudQueryAgentGroupWithOptions(const CloudQueryAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryAgentGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryAgentGroupResponse>();
}

/**
 * @summary Queries the info about the outbound group to which the agent belongs.
 *
 * @param request CloudQueryAgentGroupRequest
 * @return CloudQueryAgentGroupResponse
 */
CloudQueryAgentGroupResponse Client::cloudQueryAgentGroup(const CloudQueryAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryAgentGroupWithOptions(request, runtime);
}

/**
 * @summary Query agent skills by agent number.
 *
 * @param request CloudQueryAgentSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryAgentSkillResponse
 */
CloudQueryAgentSkillResponse Client::cloudQueryAgentSkillWithOptions(const CloudQueryAgentSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryAgentSkill"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryAgentSkillResponse>();
}

/**
 * @summary Query agent skills by agent number.
 *
 * @param request CloudQueryAgentSkillRequest
 * @return CloudQueryAgentSkillResponse
 */
CloudQueryAgentSkillResponse Client::cloudQueryAgentSkill(const CloudQueryAgentSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryAgentSkillWithOptions(request, runtime);
}

/**
 * @summary 来电通话记录
 *
 * @param request CloudQueryIbCdrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryIbCdrResponse
 */
CloudQueryIbCdrResponse Client::cloudQueryIbCdrWithOptions(const CloudQueryIbCdrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalleeNumber()) {
    query["CalleeNumber"] = request.getCalleeNumber();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasCustomerNumber()) {
    query["CustomerNumber"] = request.getCustomerNumber();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasHotline()) {
    query["Hotline"] = request.getHotline();
  }

  if (!!request.hasJoinQueueCode()) {
    query["JoinQueueCode"] = request.getJoinQueueCode();
  }

  if (!!request.hasLeaveQueueCode()) {
    query["LeaveQueueCode"] = request.getLeaveQueueCode();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasQno()) {
    query["Qno"] = request.getQno();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTimeRangeType()) {
    query["TimeRangeType"] = request.getTimeRangeType();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  if (!!request.hasUserFieldValue()) {
    query["UserFieldValue"] = request.getUserFieldValue();
  }

  if (!!request.hasUserFieldkey()) {
    query["UserFieldkey"] = request.getUserFieldkey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryIbCdr"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryIbCdrResponse>();
}

/**
 * @summary 来电通话记录
 *
 * @param request CloudQueryIbCdrRequest
 * @return CloudQueryIbCdrResponse
 */
CloudQueryIbCdrResponse Client::cloudQueryIbCdr(const CloudQueryIbCdrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryIbCdrWithOptions(request, runtime);
}

/**
 * @summary 获取座席外呼通话记录
 *
 * @param request CloudQueryObCdrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryObCdrResponse
 */
CloudQueryObCdrResponse Client::cloudQueryObCdrWithOptions(const CloudQueryObCdrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasAgentNumber()) {
    query["AgentNumber"] = request.getAgentNumber();
  }

  if (!!request.hasCallType()) {
    query["CallType"] = request.getCallType();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasClid()) {
    query["Clid"] = request.getClid();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasCustomerNumber()) {
    query["CustomerNumber"] = request.getCustomerNumber();
  }

  if (!!request.hasDownGrade()) {
    query["DownGrade"] = request.getDownGrade();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasIsRealAnswer()) {
    query["IsRealAnswer"] = request.getIsRealAnswer();
  }

  if (!!request.hasLeftDisplayNumber()) {
    query["LeftDisplayNumber"] = request.getLeftDisplayNumber();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasRequestUniqueId()) {
    query["RequestUniqueId"] = request.getRequestUniqueId();
  }

  if (!!request.hasReturnCount()) {
    query["ReturnCount"] = request.getReturnCount();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTimeRangeType()) {
    query["TimeRangeType"] = request.getTimeRangeType();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  if (!!request.hasUserFieldValue()) {
    query["UserFieldValue"] = request.getUserFieldValue();
  }

  if (!!request.hasUserFieldkey()) {
    query["UserFieldkey"] = request.getUserFieldkey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryObCdr"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryObCdrResponse>();
}

/**
 * @summary 获取座席外呼通话记录
 *
 * @param request CloudQueryObCdrRequest
 * @return CloudQueryObCdrResponse
 */
CloudQueryObCdrResponse Client::cloudQueryObCdr(const CloudQueryObCdrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryObCdrWithOptions(request, runtime);
}

/**
 * @summary 预测式外呼通话记录
 *
 * @param request CloudQueryPredictiveCallCdrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryPredictiveCallCdrResponse
 */
CloudQueryPredictiveCallCdrResponse Client::cloudQueryPredictiveCallCdrWithOptions(const CloudQueryPredictiveCallCdrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasClid()) {
    query["Clid"] = request.getClid();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasCustomerNumber()) {
    query["CustomerNumber"] = request.getCustomerNumber();
  }

  if (!!request.hasDisplayNumber()) {
    query["DisplayNumber"] = request.getDisplayNumber();
  }

  if (!!request.hasDownGrade()) {
    query["DownGrade"] = request.getDownGrade();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasIsRealAnswer()) {
    query["IsRealAnswer"] = request.getIsRealAnswer();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasRequestUniqueId()) {
    query["RequestUniqueId"] = request.getRequestUniqueId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskFileId()) {
    query["TaskFileId"] = request.getTaskFileId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTimeRangeType()) {
    query["TimeRangeType"] = request.getTimeRangeType();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  if (!!request.hasUserFieldValue()) {
    query["UserFieldValue"] = request.getUserFieldValue();
  }

  if (!!request.hasUserFieldkey()) {
    query["UserFieldkey"] = request.getUserFieldkey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryPredictiveCallCdr"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryPredictiveCallCdrResponse>();
}

/**
 * @summary 预测式外呼通话记录
 *
 * @param request CloudQueryPredictiveCallCdrRequest
 * @return CloudQueryPredictiveCallCdrResponse
 */
CloudQueryPredictiveCallCdrResponse Client::cloudQueryPredictiveCallCdr(const CloudQueryPredictiveCallCdrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryPredictiveCallCdrWithOptions(request, runtime);
}

/**
 * @summary Obtain the rasr info based on the uniqueId.
 *
 * @param request CloudQueryRasrEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryRasrEventResponse
 */
CloudQueryRasrEventResponse Client::cloudQueryRasrEventWithOptions(const CloudQueryRasrEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryRasrEvent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryRasrEventResponse>();
}

/**
 * @summary Obtain the rasr info based on the uniqueId.
 *
 * @param request CloudQueryRasrEventRequest
 * @return CloudQueryRasrEventResponse
 */
CloudQueryRasrEventResponse Client::cloudQueryRasrEvent(const CloudQueryRasrEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryRasrEventWithOptions(request, runtime);
}

/**
 * @summary 获取任务列表
 *
 * @param request CloudQueryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryTaskResponse
 */
CloudQueryTaskResponse Client::cloudQueryTaskWithOptions(const CloudQueryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.getAutoStart();
  }

  if (!!request.hasAutoStop()) {
    query["AutoStop"] = request.getAutoStop();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTimeType()) {
    query["TimeType"] = request.getTimeType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryTaskResponse>();
}

/**
 * @summary 获取任务列表
 *
 * @param request CloudQueryTaskRequest
 * @return CloudQueryTaskResponse
 */
CloudQueryTaskResponse Client::cloudQueryTask(const CloudQueryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryTaskWithOptions(request, runtime);
}

/**
 * @summary webcall通话记录
 *
 * @param request CloudQueryWebcallCdrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudQueryWebcallCdrResponse
 */
CloudQueryWebcallCdrResponse Client::cloudQueryWebcallCdrWithOptions(const CloudQueryWebcallCdrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalleeClid()) {
    query["CalleeClid"] = request.getCalleeClid();
  }

  if (!!request.hasCalleeDisplayNumber()) {
    query["CalleeDisplayNumber"] = request.getCalleeDisplayNumber();
  }

  if (!!request.hasCalleeNumber()) {
    query["CalleeNumber"] = request.getCalleeNumber();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasClid()) {
    query["Clid"] = request.getClid();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasCustomerNumber()) {
    query["CustomerNumber"] = request.getCustomerNumber();
  }

  if (!!request.hasDisplayNumber()) {
    query["DisplayNumber"] = request.getDisplayNumber();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasIsRealAnswer()) {
    query["IsRealAnswer"] = request.getIsRealAnswer();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasRequestUniqueId()) {
    query["RequestUniqueId"] = request.getRequestUniqueId();
  }

  if (!!request.hasReturnCount()) {
    query["ReturnCount"] = request.getReturnCount();
  }

  if (!!request.hasStart()) {
    query["Start"] = request.getStart();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTimeRangeType()) {
    query["TimeRangeType"] = request.getTimeRangeType();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  if (!!request.hasUserFieldValue()) {
    query["UserFieldValue"] = request.getUserFieldValue();
  }

  if (!!request.hasUserFieldkey()) {
    query["UserFieldkey"] = request.getUserFieldkey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudQueryWebcallCdr"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudQueryWebcallCdrResponse>();
}

/**
 * @summary webcall通话记录
 *
 * @param request CloudQueryWebcallCdrRequest
 * @return CloudQueryWebcallCdrResponse
 */
CloudQueryWebcallCdrResponse Client::cloudQueryWebcallCdr(const CloudQueryWebcallCdrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudQueryWebcallCdrWithOptions(request, runtime);
}

/**
 * @summary 任务启动
 *
 * @param request CloudStartTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudStartTaskResponse
 */
CloudStartTaskResponse Client::cloudStartTaskWithOptions(const CloudStartTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudStartTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudStartTaskResponse>();
}

/**
 * @summary 任务启动
 *
 * @param request CloudStartTaskRequest
 * @return CloudStartTaskResponse
 */
CloudStartTaskResponse Client::cloudStartTask(const CloudStartTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudStartTaskWithOptions(request, runtime);
}

/**
 * @summary Purges the attachment between an outbound call group and agents.
 *
 * @param request CloudUnassignAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudUnassignAgentGroupResponse
 */
CloudUnassignAgentGroupResponse Client::cloudUnassignAgentGroupWithOptions(const CloudUnassignAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGno()) {
    query["Gno"] = request.getGno();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudUnassignAgentGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudUnassignAgentGroupResponse>();
}

/**
 * @summary Purges the attachment between an outbound call group and agents.
 *
 * @param request CloudUnassignAgentGroupRequest
 * @return CloudUnassignAgentGroupResponse
 */
CloudUnassignAgentGroupResponse Client::cloudUnassignAgentGroup(const CloudUnassignAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudUnassignAgentGroupWithOptions(request, runtime);
}

/**
 * @summary 座席更新
 *
 * @param request CloudUpdateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudUpdateAgentResponse
 */
CloudUpdateAgentResponse Client::cloudUpdateAgentWithOptions(const CloudUpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.getActive();
  }

  if (!!request.hasAgentType()) {
    query["AgentType"] = request.getAgentType();
  }

  if (!!request.hasAreaCode()) {
    query["AreaCode"] = request.getAreaCode();
  }

  if (!!request.hasCallPower()) {
    query["CallPower"] = request.getCallPower();
  }

  if (!!request.hasCno()) {
    query["Cno"] = request.getCno();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasIbRecord()) {
    query["IbRecord"] = request.getIbRecord();
  }

  if (!!request.hasIsAsr()) {
    query["IsAsr"] = request.getIsAsr();
  }

  if (!!request.hasIsOb()) {
    query["IsOb"] = request.getIsOb();
  }

  if (!!request.hasIsObRemember()) {
    query["IsObRemember"] = request.getIsObRemember();
  }

  if (!!request.hasIsQualityCheck()) {
    query["IsQualityCheck"] = request.getIsQualityCheck();
  }

  if (!!request.hasIsRandom()) {
    query["IsRandom"] = request.getIsRandom();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasObClid()) {
    query["ObClid"] = request.getObClid();
  }

  if (!!request.hasObClidProperty()) {
    query["ObClidProperty"] = request.getObClidProperty();
  }

  if (!!request.hasObClidType()) {
    query["ObClidType"] = request.getObClidType();
  }

  if (!!request.hasObRecord()) {
    query["ObRecord"] = request.getObRecord();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPermitObPreviewTime()) {
    query["PermitObPreviewTime"] = request.getPermitObPreviewTime();
  }

  if (!!request.hasPower()) {
    query["Power"] = request.getPower();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSkillIds()) {
    query["SkillIds"] = request.getSkillIds();
  }

  if (!!request.hasSkillLevels()) {
    query["SkillLevels"] = request.getSkillLevels();
  }

  if (!!request.hasWebrtcUrlType()) {
    query["WebrtcUrlType"] = request.getWebrtcUrlType();
  }

  if (!!request.hasWrapup()) {
    query["Wrapup"] = request.getWrapup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudUpdateAgent"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudUpdateAgentResponse>();
}

/**
 * @summary 座席更新
 *
 * @param request CloudUpdateAgentRequest
 * @return CloudUpdateAgentResponse
 */
CloudUpdateAgentResponse Client::cloudUpdateAgent(const CloudUpdateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudUpdateAgentWithOptions(request, runtime);
}

/**
 * @summary 更新任务
 *
 * @param request CloudUpdateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudUpdateTaskResponse
 */
CloudUpdateTaskResponse Client::cloudUpdateTaskWithOptions(const CloudUpdateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentGroup()) {
    query["AgentGroup"] = request.getAgentGroup();
  }

  if (!!request.hasAgentTimeout()) {
    query["AgentTimeout"] = request.getAgentTimeout();
  }

  if (!!request.hasAnswerRate()) {
    query["AnswerRate"] = request.getAnswerRate();
  }

  if (!!request.hasAutoComplete()) {
    query["AutoComplete"] = request.getAutoComplete();
  }

  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.getAutoStart();
  }

  if (!!request.hasAutoStartDay()) {
    query["AutoStartDay"] = request.getAutoStartDay();
  }

  if (!!request.hasAutoStartTime()) {
    query["AutoStartTime"] = request.getAutoStartTime();
  }

  if (!!request.hasAutoStop()) {
    query["AutoStop"] = request.getAutoStop();
  }

  if (!!request.hasAutoStopDay()) {
    query["AutoStopDay"] = request.getAutoStopDay();
  }

  if (!!request.hasAutoStopTime()) {
    query["AutoStopTime"] = request.getAutoStopTime();
  }

  if (!!request.hasAutoTaskType()) {
    query["AutoTaskType"] = request.getAutoTaskType();
  }

  if (!!request.hasAutoTriggerTimeStrategy()) {
    query["AutoTriggerTimeStrategy"] = request.getAutoTriggerTimeStrategy();
  }

  if (!!request.hasCallLimitStrategy()) {
    query["CallLimitStrategy"] = request.getCallLimitStrategy();
  }

  if (!!request.hasCallPriorityStrategy()) {
    query["CallPriorityStrategy"] = request.getCallPriorityStrategy();
  }

  if (!!request.hasCallRouteStrategy()) {
    query["CallRouteStrategy"] = request.getCallRouteStrategy();
  }

  if (!!request.hasCallStrategy()) {
    query["CallStrategy"] = request.getCallStrategy();
  }

  if (!!request.hasCallVariables()) {
    query["CallVariables"] = request.getCallVariables();
  }

  if (!!request.hasClidProperty()) {
    query["ClidProperty"] = request.getClidProperty();
  }

  if (!!request.hasCnos()) {
    query["Cnos"] = request.getCnos();
  }

  if (!!request.hasConcurrency()) {
    query["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasCustomerClidType()) {
    query["CustomerClidType"] = request.getCustomerClidType();
  }

  if (!!request.hasCustomerClidWeight()) {
    query["CustomerClidWeight"] = request.getCustomerClidWeight();
  }

  if (!!request.hasCustomerClidWeightFlag()) {
    query["CustomerClidWeightFlag"] = request.getCustomerClidWeightFlag();
  }

  if (!!request.hasCustomerClids()) {
    query["CustomerClids"] = request.getCustomerClids();
  }

  if (!!request.hasCustomerClidsCategory()) {
    query["CustomerClidsCategory"] = request.getCustomerClidsCategory();
  }

  if (!!request.hasCustomerClidsGroup()) {
    query["CustomerClidsGroup"] = request.getCustomerClidsGroup();
  }

  if (!!request.hasCustomerMoh()) {
    query["CustomerMoh"] = request.getCustomerMoh();
  }

  if (!!request.hasCustomerTimeout()) {
    query["CustomerTimeout"] = request.getCustomerTimeout();
  }

  if (!!request.hasCustomerVoice()) {
    query["CustomerVoice"] = request.getCustomerVoice();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasForceEndFlag()) {
    query["ForceEndFlag"] = request.getForceEndFlag();
  }

  if (!!request.hasIsRewarm()) {
    query["IsRewarm"] = request.getIsRewarm();
  }

  if (!!request.hasIvrId()) {
    query["IvrId"] = request.getIvrId();
  }

  if (!!request.hasIvrName()) {
    query["IvrName"] = request.getIvrName();
  }

  if (!!request.hasMaxWaitTime()) {
    query["MaxWaitTime"] = request.getMaxWaitTime();
  }

  if (!!request.hasMinAvailableAgentCount()) {
    query["MinAvailableAgentCount"] = request.getMinAvailableAgentCount();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPredictAdjust()) {
    query["PredictAdjust"] = request.getPredictAdjust();
  }

  if (!!request.hasQuotiety()) {
    query["Quotiety"] = request.getQuotiety();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRetryStrategy()) {
    query["RetryStrategy"] = request.getRetryStrategy();
  }

  if (!!request.hasRetryStrategyOnlyToday()) {
    query["RetryStrategyOnlyToday"] = request.getRetryStrategyOnlyToday();
  }

  if (!!request.hasRetryStrategyTimeType()) {
    query["RetryStrategyTimeType"] = request.getRetryStrategyTimeType();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTimeStrategy()) {
    query["TimeStrategy"] = request.getTimeStrategy();
  }

  if (!!request.hasUserFields()) {
    query["UserFields"] = request.getUserFields();
  }

  if (!!request.hasWarmUpDuration()) {
    query["WarmUpDuration"] = request.getWarmUpDuration();
  }

  if (!!request.hasWrapup()) {
    query["Wrapup"] = request.getWrapup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudUpdateTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudUpdateTaskResponse>();
}

/**
 * @summary 更新任务
 *
 * @param request CloudUpdateTaskRequest
 * @return CloudUpdateTaskResponse
 */
CloudUpdateTaskResponse Client::cloudUpdateTask(const CloudUpdateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudUpdateTaskWithOptions(request, runtime);
}

/**
 * @summary webcall
 *
 * @param request CloudWebcallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudWebcallResponse
 */
CloudWebcallResponse Client::cloudWebcallWithOptions(const CloudWebcallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmd()) {
    query["Amd"] = request.getAmd();
  }

  if (!!request.hasClid()) {
    query["Clid"] = request.getClid();
  }

  if (!!request.hasClidAreaCode()) {
    query["ClidAreaCode"] = request.getClidAreaCode();
  }

  if (!!request.hasClidGroup()) {
    query["ClidGroup"] = request.getClidGroup();
  }

  if (!!request.hasClidList()) {
    query["ClidList"] = request.getClidList();
  }

  if (!!request.hasCrnId()) {
    query["CrnId"] = request.getCrnId();
  }

  if (!!request.hasDelay()) {
    query["Delay"] = request.getDelay();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasExpirTime()) {
    query["ExpirTime"] = request.getExpirTime();
  }

  if (!!request.hasIvrId()) {
    query["IvrId"] = request.getIvrId();
  }

  if (!!request.hasMultiTelDelay()) {
    query["MultiTelDelay"] = request.getMultiTelDelay();
  }

  if (!!request.hasMultiTelPush()) {
    query["MultiTelPush"] = request.getMultiTelPush();
  }

  if (!!request.hasRequestUniqueId()) {
    query["RequestUniqueId"] = request.getRequestUniqueId();
  }

  if (!!request.hasRetry()) {
    query["Retry"] = request.getRetry();
  }

  if (!!request.hasRetryInterval()) {
    query["RetryInterval"] = request.getRetryInterval();
  }

  if (!!request.hasTel()) {
    query["Tel"] = request.getTel();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasUserField()) {
    query["UserField"] = request.getUserField();
  }

  if (!!request.hasVid()) {
    query["Vid"] = request.getVid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudWebcall"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudWebcallResponse>();
}

/**
 * @summary webcall
 *
 * @param request CloudWebcallRequest
 * @return CloudWebcallResponse
 */
CloudWebcallResponse Client::cloudWebcall(const CloudWebcallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloudWebcallWithOptions(request, runtime);
}

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
CreateCallTaskResponse Client::createCallTaskWithOptions(const CreateCallTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasData()) {
    query["Data"] = request.getData();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasFireTime()) {
    query["FireTime"] = request.getFireTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.getResource();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasScheduleType()) {
    query["ScheduleType"] = request.getScheduleType();
  }

  if (!!request.hasStopTime()) {
    query["StopTime"] = request.getStopTime();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
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
 * @summary Uses a service instance to create a text-to-speech (TTS) task, a voice notification task, or a voice verification code task for multiple called numbers.
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
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasCorpName()) {
    query["CorpName"] = request.getCorpName();
  }

  if (!!request.hasDialogId()) {
    query["DialogId"] = request.getDialogId();
  }

  if (!!request.hasIsSelfLine()) {
    query["IsSelfLine"] = request.getIsSelfLine();
  }

  if (!!request.hasNumberStatusIdent()) {
    query["NumberStatusIdent"] = request.getNumberStatusIdent();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRecallInterval()) {
    query["RecallInterval"] = request.getRecallInterval();
  }

  if (!!request.hasRecallStateCodes()) {
    query["RecallStateCodes"] = request.getRecallStateCodes();
  }

  if (!!request.hasRecallTimes()) {
    query["RecallTimes"] = request.getRecallTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRetryType()) {
    query["RetryType"] = request.getRetryType();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
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
 * @summary Downgrades from a video call to a voice call.
 *
 * @param request DegradeVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DegradeVideoFileResponse
 */
DegradeVideoFileResponse Client::degradeVideoFileWithOptions(const DegradeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Downgrades from a video call to a voice call.
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
    query["FireTime"] = request.getFireTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Obtains the call type during a call.
 *
 * @param request GetCallMediaTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallMediaTypeResponse
 */
GetCallMediaTypeResponse Client::getCallMediaTypeWithOptions(const GetCallMediaTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Obtains the call type during a call.
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
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNum()) {
    query["CalledNum"] = request.getCalledNum();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Obtains a temporary URL of a video or audio file. You can view the video or audio file immediately by using this temporary URL.
 *
 * @param request GetTemporaryFileUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemporaryFileUrlResponse
 */
GetTemporaryFileUrlResponse Client::getTemporaryFileUrlWithOptions(const GetTemporaryFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Obtains a temporary URL of a video or audio file. You can view the video or audio file immediately by using this temporary URL.
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTokenType()) {
    query["TokenType"] = request.getTokenType();
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVideoFile()) {
    query["VideoFile"] = request.getVideoFile();
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
    query["ByeCode"] = request.getByeCode();
  }

  if (!!request.hasByeTtsParams()) {
    query["ByeTtsParams"] = request.getByeTtsParams();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.getCalledShowNumber();
  }

  if (!!request.hasMenuKeyMap()) {
    query["MenuKeyMap"] = request.getMenuKeyMap();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.getPlayTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartCode()) {
    query["StartCode"] = request.getStartCode();
  }

  if (!!request.hasStartTtsParams()) {
    query["StartTtsParams"] = request.getStartTtsParams();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
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
 * @summary Queries the information about a voice call task after the task is created, including the task ID, task status, and templates used by the task.
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
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
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
 * @summary Queries the information about a voice call task after the task is created, including the task ID, task status, and templates used by the task.
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
 * @summary Queries the details of call tasks based on task IDs after call tasks are complete.
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
    query["CalledNum"] = request.getCalledNum();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Queries the details of call tasks based on task IDs after call tasks are complete.
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
    query["HotlineNumber"] = request.getHotlineNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary 分页查询服务实例列表
 *
 * @param tmpReq ListServiceInstanceForPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceInstanceForPageResponse
 */
ListServiceInstanceForPageResponse Client::listServiceInstanceForPageWithOptions(const ListServiceInstanceForPageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListServiceInstanceForPageShrinkRequest request = ListServiceInstanceForPageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPager()) {
    request.setPagerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPager(), "Pager", "json"));
  }

  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPagerShrink()) {
    query["Pager"] = request.getPagerShrink();
  }

  if (!!request.hasRelationNumber()) {
    query["RelationNumber"] = request.getRelationNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasUsageId()) {
    query["UsageId"] = request.getUsageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceInstanceForPage"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceInstanceForPageResponse>();
}

/**
 * @summary 分页查询服务实例列表
 *
 * @param request ListServiceInstanceForPageRequest
 * @return ListServiceInstanceForPageResponse
 */
ListServiceInstanceForPageResponse Client::listServiceInstanceForPage(const ListServiceInstanceForPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listServiceInstanceForPageWithOptions(request, runtime);
}

/**
 * @summary Pauses video playback when a video file is played back during a voice call.
 *
 * @param request PauseVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseVideoFileResponse
 */
PauseVideoFileResponse Client::pauseVideoFileWithOptions(const PauseVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Pauses video playback when a video file is played back during a voice call.
 *
 * @param request PauseVideoFileRequest
 * @return PauseVideoFileResponse
 */
PauseVideoFileResponse Client::pauseVideoFile(const PauseVideoFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseVideoFileWithOptions(request, runtime);
}

/**
 * @summary Plays back a video file during a voice call.
 *
 * @param request PlayVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PlayVideoFileResponse
 */
PlayVideoFileResponse Client::playVideoFileWithOptions(const PlayVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasOnlyPhone()) {
    query["OnlyPhone"] = request.getOnlyPhone();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Plays back a video file during a voice call.
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
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdId()) {
    query["ProdId"] = request.getProdId();
  }

  if (!!request.hasQueryDate()) {
    query["QueryDate"] = request.getQueryDate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
    query["Callee"] = request.getCallee();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQueryDate()) {
    query["QueryDate"] = request.getQueryDate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
    query["CallInCaller"] = request.getCallInCaller();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasQueryDate()) {
    query["QueryDate"] = request.getQueryDate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Queries a list of robots to obtain their details.
 *
 * @param request QueryRobotInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRobotInfoListResponse
 */
QueryRobotInfoListResponse Client::queryRobotInfoListWithOptions(const QueryRobotInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Queries a list of robots to obtain their details.
 *
 * @param request QueryRobotInfoListRequest
 * @return QueryRobotInfoListResponse
 */
QueryRobotInfoListResponse Client::queryRobotInfoList(const QueryRobotInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRobotInfoListWithOptions(request, runtime);
}

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
QueryRobotTaskCallDetailResponse Client::queryRobotTaskCallDetailWithOptions(const QueryRobotTaskCallDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.getCallee();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQueryDate()) {
    query["QueryDate"] = request.getQueryDate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Queries the call details of a called number.
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
    query["CallResult"] = request.getCallResult();
  }

  if (!!request.hasCalled()) {
    query["Called"] = request.getCalled();
  }

  if (!!request.hasDialogCountFrom()) {
    query["DialogCountFrom"] = request.getDialogCountFrom();
  }

  if (!!request.hasDialogCountTo()) {
    query["DialogCountTo"] = request.getDialogCountTo();
  }

  if (!!request.hasDurationFrom()) {
    query["DurationFrom"] = request.getDurationFrom();
  }

  if (!!request.hasDurationTo()) {
    query["DurationTo"] = request.getDurationTo();
  }

  if (!!request.hasHangupDirection()) {
    query["HangupDirection"] = request.getHangupDirection();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.getTime();
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Queries the video playback progress after you play a video file during a voice call.
 *
 * @param request QueryVideoPlayProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVideoPlayProgressResponse
 */
QueryVideoPlayProgressResponse Client::queryVideoPlayProgressWithOptions(const QueryVideoPlayProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Queries the video playback progress after you play a video file during a voice call.
 *
 * @param request QueryVideoPlayProgressRequest
 * @return QueryVideoPlayProgressResponse
 */
QueryVideoPlayProgressResponse Client::queryVideoPlayProgress(const QueryVideoPlayProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVideoPlayProgressWithOptions(request, runtime);
}

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
QueryVirtualNumberRelationResponse Client::queryVirtualNumberRelationWithOptions(const QueryVirtualNumberRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhoneNum()) {
    query["PhoneNum"] = request.getPhoneNum();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasRegionNameCity()) {
    query["RegionNameCity"] = request.getRegionNameCity();
  }

  if (!!request.hasRelatedNum()) {
    query["RelatedNum"] = request.getRelatedNum();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRouteType()) {
    query["RouteType"] = request.getRouteType();
  }

  if (!!request.hasSpecId()) {
    query["SpecId"] = request.getSpecId();
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
 * @summary Lists real numbers bound to service instances. The returned data includes the binding time, the number activation time, and the number of real numbers bound to a service instance.
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
 * @summary 查询真实号接通率
 *
 * @param request QueryVmsRealNumberCallConnectionRateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVmsRealNumberCallConnectionRateInfoResponse
 */
QueryVmsRealNumberCallConnectionRateInfoResponse Client::queryVmsRealNumberCallConnectionRateInfoWithOptions(const QueryVmsRealNumberCallConnectionRateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRealNumber()) {
    query["RealNumber"] = request.getRealNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTimePeriod()) {
    query["TimePeriod"] = request.getTimePeriod();
  }

  if (!!request.hasVirtualNumber()) {
    query["VirtualNumber"] = request.getVirtualNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVmsRealNumberCallConnectionRateInfo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVmsRealNumberCallConnectionRateInfoResponse>();
}

/**
 * @summary 查询真实号接通率
 *
 * @param request QueryVmsRealNumberCallConnectionRateInfoRequest
 * @return QueryVmsRealNumberCallConnectionRateInfoResponse
 */
QueryVmsRealNumberCallConnectionRateInfoResponse Client::queryVmsRealNumberCallConnectionRateInfo(const QueryVmsRealNumberCallConnectionRateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVmsRealNumberCallConnectionRateInfoWithOptions(request, runtime);
}

/**
 * @summary 查询虚拟号码与真实号码绑定关系列表
 *
 * @param request QueryVmsVirtualNumberRelationByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVmsVirtualNumberRelationByPageResponse
 */
QueryVmsVirtualNumberRelationByPageResponse Client::queryVmsVirtualNumberRelationByPageWithOptions(const QueryVmsVirtualNumberRelationByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNumberCity()) {
    query["NumberCity"] = request.getNumberCity();
  }

  if (!!request.hasNumberProvince()) {
    query["NumberProvince"] = request.getNumberProvince();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRealNumber()) {
    query["RealNumber"] = request.getRealNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasVirtualNumber()) {
    query["VirtualNumber"] = request.getVirtualNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVmsVirtualNumberRelationByPage"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVmsVirtualNumberRelationByPageResponse>();
}

/**
 * @summary 查询虚拟号码与真实号码绑定关系列表
 *
 * @param request QueryVmsVirtualNumberRelationByPageRequest
 * @return QueryVmsVirtualNumberRelationByPageResponse
 */
QueryVmsVirtualNumberRelationByPageResponse Client::queryVmsVirtualNumberRelationByPage(const QueryVmsVirtualNumberRelationByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVmsVirtualNumberRelationByPageWithOptions(request, runtime);
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
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVoiceCodes()) {
    query["VoiceCodes"] = request.getVoiceCodes();
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
    query["Number"] = request.getNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Resumes video playback after you pause video playback during a voice call.
 *
 * @param request ResumeVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeVideoFileResponse
 */
ResumeVideoFileResponse Client::resumeVideoFileWithOptions(const ResumeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Resumes video playback after you pause video playback during a voice call.
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
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSeekTimes()) {
    query["SeekTimes"] = request.getSeekTimes();
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
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.getVerifyType();
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
    query["CalledRouteMode"] = request.getCalledRouteMode();
  }

  if (!!request.hasDetails()) {
    query["Details"] = request.getDetails();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.getCalledShowNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.getPlayTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.getSpeed();
  }

  if (!!request.hasTtsCode()) {
    query["TtsCode"] = request.getTtsCode();
  }

  if (!!request.hasTtsParam()) {
    query["TtsParam"] = request.getTtsParam();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
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
 * @summary Sends voice file notifications or video file notifications to a single called number.
 *
 * @param request SingleCallByVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SingleCallByVideoResponse
 */
SingleCallByVideoResponse Client::singleCallByVideoWithOptions(const SingleCallByVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.getCalledShowNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.getPlayTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.getSpeed();
  }

  if (!!request.hasVideoCode()) {
    query["VideoCode"] = request.getVideoCode();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.getVoiceCode();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
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
 * @summary Sends voice file notifications or video file notifications to a single called number.
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
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.getCalledShowNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.getPlayTimes();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.getSpeed();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.getVoiceCode();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
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
 * @summary Fast forwards or rewinds a video when you play the video.
 *
 * @param request SkipVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SkipVideoFileResponse
 */
SkipVideoFileResponse Client::skipVideoFileWithOptions(const SkipVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSkipTimes()) {
    query["SkipTimes"] = request.getSkipTimes();
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
 * @summary Fast forwards or rewinds a video when you play the video.
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
    query["ActionCodeBreak"] = request.getActionCodeBreak();
  }

  if (!!request.hasActionCodeTimeBreak()) {
    query["ActionCodeTimeBreak"] = request.getActionCodeTimeBreak();
  }

  if (!!request.hasAsrBaseId()) {
    query["AsrBaseId"] = request.getAsrBaseId();
  }

  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.getAsrModelId();
  }

  if (!!request.hasBackgroundFileCode()) {
    query["BackgroundFileCode"] = request.getBackgroundFileCode();
  }

  if (!!request.hasBackgroundSpeed()) {
    query["BackgroundSpeed"] = request.getBackgroundSpeed();
  }

  if (!!request.hasBackgroundVolume()) {
    query["BackgroundVolume"] = request.getBackgroundVolume();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCalledShowNumber()) {
    query["CalledShowNumber"] = request.getCalledShowNumber();
  }

  if (!!request.hasDynamicId()) {
    query["DynamicId"] = request.getDynamicId();
  }

  if (!!request.hasEarlyMediaAsr()) {
    query["EarlyMediaAsr"] = request.getEarlyMediaAsr();
  }

  if (!!request.hasEnableITN()) {
    query["EnableITN"] = request.getEnableITN();
  }

  if (!!request.hasMuteTime()) {
    query["MuteTime"] = request.getMuteTime();
  }

  if (!!request.hasNoiseThreshold()) {
    query["NoiseThreshold"] = request.getNoiseThreshold();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPauseTime()) {
    query["PauseTime"] = request.getPauseTime();
  }

  if (!!request.hasRecordFlag()) {
    query["RecordFlag"] = request.getRecordFlag();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSessionTimeout()) {
    query["SessionTimeout"] = request.getSessionTimeout();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.getSpeed();
  }

  if (!!request.hasStreamAsr()) {
    query["StreamAsr"] = request.getStreamAsr();
  }

  if (!!request.hasTtsConf()) {
    query["TtsConf"] = request.getTtsConf();
  }

  if (!!request.hasTtsSpeed()) {
    query["TtsSpeed"] = request.getTtsSpeed();
  }

  if (!!request.hasTtsStyle()) {
    query["TtsStyle"] = request.getTtsStyle();
  }

  if (!!request.hasTtsVolume()) {
    query["TtsVolume"] = request.getTtsVolume();
  }

  if (!!request.hasVoiceCode()) {
    query["VoiceCode"] = request.getVoiceCode();
  }

  if (!!request.hasVoiceCodeParam()) {
    query["VoiceCodeParam"] = request.getVoiceCodeParam();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
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
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.getCommand();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParam()) {
    query["Param"] = request.getParam();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasScheduleTime()) {
    query["ScheduleTime"] = request.getScheduleTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
    query["Number"] = request.getNumber();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Submits a 400 number for registration.
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
    query["Agreement"] = request.getAgreement();
  }

  if (!!request.hasHotlineNumber()) {
    query["HotlineNumber"] = request.getHotlineNumber();
  }

  if (!!request.hasOperatorIdentityCard()) {
    query["OperatorIdentityCard"] = request.getOperatorIdentityCard();
  }

  if (!!request.hasOperatorMail()) {
    query["OperatorMail"] = request.getOperatorMail();
  }

  if (!!request.hasOperatorMailVerifyCode()) {
    query["OperatorMailVerifyCode"] = request.getOperatorMailVerifyCode();
  }

  if (!!request.hasOperatorMobile()) {
    query["OperatorMobile"] = request.getOperatorMobile();
  }

  if (!!request.hasOperatorMobileVerifyCode()) {
    query["OperatorMobileVerifyCode"] = request.getOperatorMobileVerifyCode();
  }

  if (!!request.hasOperatorName()) {
    query["OperatorName"] = request.getOperatorName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTransferPhoneNumberInfos()) {
    query["TransferPhoneNumberInfos"] = request.getTransferPhoneNumberInfos();
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
 * @summary Submits a 400 number for registration.
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
 * @summary Upgrades from a voice call to a video call.
 *
 * @param request UpgradeVideoFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeVideoFileResponse
 */
UpgradeVideoFileResponse Client::upgradeVideoFileWithOptions(const UpgradeVideoFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Upgrades from a voice call to a video call.
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
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTtsParam()) {
    query["TtsParam"] = request.getTtsParam();
  }

  if (!!request.hasTtsParamHead()) {
    query["TtsParamHead"] = request.getTtsParamHead();
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