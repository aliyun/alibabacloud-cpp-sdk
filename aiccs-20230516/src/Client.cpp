#include <darabonba/Core.hpp>
#include <alibabacloud/Aiccs20230516.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::Aiccs20230516::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Aiccs20230516
{

AlibabaCloud::Aiccs20230516::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("aiccs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 创建坐席
 *
 * @param request AddAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAgentResponse
 */
AddAgentResponse Client::addAgentWithOptions(const AddAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasAgentTag()) {
    query["AgentTag"] = request.getAgentTag();
  }

  if (!!request.hasExtensionPwd()) {
    query["ExtensionPwd"] = request.getExtensionPwd();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
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
    {"action" , "AddAgent"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAgentResponse>();
}

/**
 * @summary 创建坐席
 *
 * @param request AddAgentRequest
 * @return AddAgentResponse
 */
AddAgentResponse Client::addAgent(const AddAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAgentWithOptions(request, runtime);
}

/**
 * @summary 创建坐席组接口
 *
 * @param request AddAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAgentGroupResponse
 */
AddAgentGroupResponse Client::addAgentGroupWithOptions(const AddAgentGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentGroupName()) {
    query["AgentGroupName"] = request.getAgentGroupName();
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
    {"action" , "AddAgentGroup"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAgentGroupResponse>();
}

/**
 * @summary 创建坐席组接口
 *
 * @param request AddAgentGroupRequest
 * @return AddAgentGroupResponse
 */
AddAgentGroupResponse Client::addAgentGroup(const AddAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAgentGroupWithOptions(request, runtime);
}

/**
 * @summary 添加黑名单接口
 *
 * @param tmpReq AddBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBlacklistResponse
 */
AddBlacklistResponse Client::addBlacklistWithOptions(const AddBlacklistRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddBlacklistShrinkRequest request = AddBlacklistShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  json query = {};
  if (!!request.hasExpiredDay()) {
    query["ExpiredDay"] = request.getExpiredDay();
  }

  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
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
    {"action" , "AddBlacklist"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBlacklistResponse>();
}

/**
 * @summary 添加黑名单接口
 *
 * @param request AddBlacklistRequest
 * @return AddBlacklistResponse
 */
AddBlacklistResponse Client::addBlacklist(const AddBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBlacklistWithOptions(request, runtime);
}

/**
 * @summary 创建任务接口
 *
 * @param tmpReq AddTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTaskResponse
 */
AddTaskResponse Client::addTaskWithOptions(const AddTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddTaskShrinkRequest request = AddTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallTimeList()) {
    request.setCallTimeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallTimeList(), "CallTimeList", "json"));
  }

  if (!!tmpReq.hasRepeatReason()) {
    request.setRepeatReasonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRepeatReason(), "RepeatReason", "json"));
  }

  if (!!tmpReq.hasRepeatTimes()) {
    request.setRepeatTimesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRepeatTimes(), "RepeatTimes", "json"));
  }

  if (!!tmpReq.hasSendSmsPlan()) {
    request.setSendSmsPlanShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSendSmsPlan(), "SendSmsPlan", "json"));
  }

  json query = {};
  if (!!request.hasCallTimeListShrink()) {
    query["CallTimeList"] = request.getCallTimeListShrink();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasFlashSmsTemplateId()) {
    query["FlashSmsTemplateId"] = request.getFlashSmsTemplateId();
  }

  if (!!request.hasFlashSmsType()) {
    query["FlashSmsType"] = request.getFlashSmsType();
  }

  if (!!request.hasMaxConcurrency()) {
    query["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlaySleepVal()) {
    query["PlaySleepVal"] = request.getPlaySleepVal();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.getPlayTimes();
  }

  if (!!request.hasRecallType()) {
    query["RecallType"] = request.getRecallType();
  }

  if (!!request.hasRecordPath()) {
    query["RecordPath"] = request.getRecordPath();
  }

  if (!!request.hasRepeatCount()) {
    query["RepeatCount"] = request.getRepeatCount();
  }

  if (!!request.hasRepeatInterval()) {
    query["RepeatInterval"] = request.getRepeatInterval();
  }

  if (!!request.hasRepeatReasonShrink()) {
    query["RepeatReason"] = request.getRepeatReasonShrink();
  }

  if (!!request.hasRepeatTimesShrink()) {
    query["RepeatTimes"] = request.getRepeatTimesShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSendSmsPlanShrink()) {
    query["SendSmsPlan"] = request.getSendSmsPlanShrink();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTask"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTaskResponse>();
}

/**
 * @summary 创建任务接口
 *
 * @param request AddTaskRequest
 * @return AddTaskResponse
 */
AddTaskResponse Client::addTask(const AddTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTaskWithOptions(request, runtime);
}

/**
 * @summary 坐席外呼查询外呼记录
 *
 * @param tmpReq AgentCallListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AgentCallListResponse
 */
AgentCallListResponse Client::agentCallListWithOptions(const AgentCallListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AgentCallListShrinkRequest request = AgentCallListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumberMD5s()) {
    request.setNumberMD5sShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumberMD5s(), "NumberMD5s", "json"));
  }

  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentTag()) {
    query["AgentTag"] = request.getAgentTag();
  }

  if (!!request.hasCallDate()) {
    query["CallDate"] = request.getCallDate();
  }

  if (!!request.hasEndCallDate()) {
    query["EndCallDate"] = request.getEndCallDate();
  }

  if (!!request.hasNumberMD5sShrink()) {
    query["NumberMD5s"] = request.getNumberMD5sShrink();
  }

  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
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

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AgentCallList"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AgentCallListResponse>();
}

/**
 * @summary 坐席外呼查询外呼记录
 *
 * @param request AgentCallListRequest
 * @return AgentCallListResponse
 */
AgentCallListResponse Client::agentCallList(const AgentCallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return agentCallListWithOptions(request, runtime);
}

/**
 * @summary 坐席取消号码外呼
 *
 * @param tmpReq AgentCancelCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AgentCancelCallResponse
 */
AgentCancelCallResponse Client::agentCancelCallWithOptions(const AgentCancelCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AgentCancelCallShrinkRequest request = AgentCancelCallShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentTag()) {
    query["AgentTag"] = request.getAgentTag();
  }

  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
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

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AgentCancelCall"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AgentCancelCallResponse>();
}

/**
 * @summary 坐席取消号码外呼
 *
 * @param request AgentCancelCallRequest
 * @return AgentCancelCallResponse
 */
AgentCancelCallResponse Client::agentCancelCall(const AgentCancelCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return agentCancelCallWithOptions(request, runtime);
}

/**
 * @summary 坐席组分页查询
 *
 * @param request AgentGroupPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AgentGroupPageResponse
 */
AgentGroupPageResponse Client::agentGroupPageWithOptions(const AgentGroupPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentGroupId()) {
    query["AgentGroupId"] = request.getAgentGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AgentGroupPage"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AgentGroupPageResponse>();
}

/**
 * @summary 坐席组分页查询
 *
 * @param request AgentGroupPageRequest
 * @return AgentGroupPageResponse
 */
AgentGroupPageResponse Client::agentGroupPage(const AgentGroupPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return agentGroupPageWithOptions(request, runtime);
}

/**
 * @summary 坐席外呼导入号码
 *
 * @param tmpReq AgentImportNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AgentImportNumberResponse
 */
AgentImportNumberResponse Client::agentImportNumberWithOptions(const AgentImportNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AgentImportNumberShrinkRequest request = AgentImportNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomers()) {
    request.setCustomersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomers(), "Customers", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentTag()) {
    query["AgentTag"] = request.getAgentTag();
  }

  if (!!request.hasCallType()) {
    query["CallType"] = request.getCallType();
  }

  if (!!request.hasCustomersShrink()) {
    query["Customers"] = request.getCustomersShrink();
  }

  if (!!request.hasGatewayId()) {
    query["GatewayId"] = request.getGatewayId();
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AgentImportNumber"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AgentImportNumberResponse>();
}

/**
 * @summary 坐席外呼导入号码
 *
 * @param request AgentImportNumberRequest
 * @return AgentImportNumberResponse
 */
AgentImportNumberResponse Client::agentImportNumber(const AgentImportNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return agentImportNumberWithOptions(request, runtime);
}

/**
 * @summary 坐席任务恢复号码
 *
 * @param tmpReq AgentRecoverCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AgentRecoverCallResponse
 */
AgentRecoverCallResponse Client::agentRecoverCallWithOptions(const AgentRecoverCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AgentRecoverCallShrinkRequest request = AgentRecoverCallShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentTag()) {
    query["AgentTag"] = request.getAgentTag();
  }

  if (!!request.hasBeginImportTime()) {
    query["BeginImportTime"] = request.getBeginImportTime();
  }

  if (!!request.hasEndImportTime()) {
    query["EndImportTime"] = request.getEndImportTime();
  }

  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
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

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AgentRecoverCall"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AgentRecoverCallResponse>();
}

/**
 * @summary 坐席任务恢复号码
 *
 * @param request AgentRecoverCallRequest
 * @return AgentRecoverCallResponse
 */
AgentRecoverCallResponse Client::agentRecoverCall(const AgentRecoverCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return agentRecoverCallWithOptions(request, runtime);
}

/**
 * @summary 获取聊天内容
 *
 * @param request CallChatListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CallChatListResponse
 */
CallChatListResponse Client::callChatListWithOptions(const CallChatListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CallChatList"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CallChatListResponse>();
}

/**
 * @summary 获取聊天内容
 *
 * @param request CallChatListRequest
 * @return CallChatListResponse
 */
CallChatListResponse Client::callChatList(const CallChatListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return callChatListWithOptions(request, runtime);
}

/**
 * @summary 获取号码外呼详情
 *
 * @param request CallNumberDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CallNumberDetailResponse
 */
CallNumberDetailResponse Client::callNumberDetailWithOptions(const CallNumberDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CallNumberDetail"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CallNumberDetailResponse>();
}

/**
 * @summary 获取号码外呼详情
 *
 * @param request CallNumberDetailRequest
 * @return CallNumberDetailResponse
 */
CallNumberDetailResponse Client::callNumberDetail(const CallNumberDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return callNumberDetailWithOptions(request, runtime);
}

/**
 * @summary AI批量任务查询号码状态接口
 *
 * @param tmpReq DetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetailsResponse
 */
DetailsResponse Client::detailsWithOptions(const DetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetailsShrinkRequest request = DetailsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.getBatchId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasNumberStatus()) {
    query["NumberStatus"] = request.getNumberStatus();
  }

  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Details"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetailsResponse>();
}

/**
 * @summary AI批量任务查询号码状态接口
 *
 * @param request DetailsRequest
 * @return DetailsResponse
 */
DetailsResponse Client::details(const DetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detailsWithOptions(request, runtime);
}

/**
 * @summary 编辑任务接口
 *
 * @param tmpReq EditTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditTaskResponse
 */
EditTaskResponse Client::editTaskWithOptions(const EditTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EditTaskShrinkRequest request = EditTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallTimeList()) {
    request.setCallTimeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallTimeList(), "CallTimeList", "json"));
  }

  if (!!tmpReq.hasRepeatReason()) {
    request.setRepeatReasonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRepeatReason(), "RepeatReason", "json"));
  }

  if (!!tmpReq.hasRepeatTimes()) {
    request.setRepeatTimesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRepeatTimes(), "RepeatTimes", "json"));
  }

  if (!!tmpReq.hasSendSmsPlan()) {
    request.setSendSmsPlanShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSendSmsPlan(), "SendSmsPlan", "json"));
  }

  json query = {};
  if (!!request.hasCallTimeListShrink()) {
    query["CallTimeList"] = request.getCallTimeListShrink();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasFlashSmsTemplateId()) {
    query["FlashSmsTemplateId"] = request.getFlashSmsTemplateId();
  }

  if (!!request.hasFlashSmsType()) {
    query["FlashSmsType"] = request.getFlashSmsType();
  }

  if (!!request.hasMaxConcurrency()) {
    query["MaxConcurrency"] = request.getMaxConcurrency();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlaySleepVal()) {
    query["PlaySleepVal"] = request.getPlaySleepVal();
  }

  if (!!request.hasPlayTimes()) {
    query["PlayTimes"] = request.getPlayTimes();
  }

  if (!!request.hasRecallType()) {
    query["RecallType"] = request.getRecallType();
  }

  if (!!request.hasRecordPath()) {
    query["RecordPath"] = request.getRecordPath();
  }

  if (!!request.hasRepeatCount()) {
    query["RepeatCount"] = request.getRepeatCount();
  }

  if (!!request.hasRepeatInterval()) {
    query["RepeatInterval"] = request.getRepeatInterval();
  }

  if (!!request.hasRepeatReasonShrink()) {
    query["RepeatReason"] = request.getRepeatReasonShrink();
  }

  if (!!request.hasRepeatTimesShrink()) {
    query["RepeatTimes"] = request.getRepeatTimesShrink();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSendSmsPlanShrink()) {
    query["SendSmsPlan"] = request.getSendSmsPlanShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EditTask"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditTaskResponse>();
}

/**
 * @summary 编辑任务接口
 *
 * @param request EditTaskRequest
 * @return EditTaskResponse
 */
EditTaskResponse Client::editTask(const EditTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editTaskWithOptions(request, runtime);
}

/**
 * @summary 导入号码
 *
 * @param tmpReq ImportNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportNumberResponse
 */
ImportNumberResponse Client::importNumberWithOptions(const ImportNumberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportNumberShrinkRequest request = ImportNumberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomers()) {
    request.setCustomersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomers(), "Customers", "json"));
  }

  json query = {};
  if (!!request.hasCustomersShrink()) {
    query["Customers"] = request.getCustomersShrink();
  }

  if (!!request.hasFailReturn()) {
    query["FailReturn"] = request.getFailReturn();
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

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportNumber"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportNumberResponse>();
}

/**
 * @summary 导入号码
 *
 * @param request ImportNumberRequest
 * @return ImportNumberResponse
 */
ImportNumberResponse Client::importNumber(const ImportNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importNumberWithOptions(request, runtime);
}

/**
 * @summary 导入号码
 *
 * @param tmpReq ImportNumberV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportNumberV2Response
 */
ImportNumberV2Response Client::importNumberV2WithOptions(const ImportNumberV2Request &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportNumberV2ShrinkRequest request = ImportNumberV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomers()) {
    request.setCustomersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomers(), "Customers", "json"));
  }

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

  json body = {};
  if (!!request.hasCustomersShrink()) {
    body["Customers"] = request.getCustomersShrink();
  }

  if (!!request.hasFailReturn()) {
    body["FailReturn"] = request.getFailReturn();
  }

  if (!!request.hasOutId()) {
    body["OutId"] = request.getOutId();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportNumberV2"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportNumberV2Response>();
}

/**
 * @summary 导入号码
 *
 * @param request ImportNumberV2Request
 * @return ImportNumberV2Response
 */
ImportNumberV2Response Client::importNumberV2(const ImportNumberV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importNumberV2WithOptions(request, runtime);
}

/**
 * @summary 绑定坐席组
 *
 * @param tmpReq JoinAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JoinAgentGroupResponse
 */
JoinAgentGroupResponse Client::joinAgentGroupWithOptions(const JoinAgentGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  JoinAgentGroupShrinkRequest request = JoinAgentGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentGroupId()) {
    query["AgentGroupId"] = request.getAgentGroupId();
  }

  if (!!request.hasAgentIdsShrink()) {
    query["AgentIds"] = request.getAgentIdsShrink();
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
    {"action" , "JoinAgentGroup"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JoinAgentGroupResponse>();
}

/**
 * @summary 绑定坐席组
 *
 * @param request JoinAgentGroupRequest
 * @return JoinAgentGroupResponse
 */
JoinAgentGroupResponse Client::joinAgentGroup(const JoinAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return joinAgentGroupWithOptions(request, runtime);
}

/**
 * @summary 查询企业黑名单
 *
 * @param tmpReq PageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PageResponse
 */
PageResponse Client::pageWithOptions(const PageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PageShrinkRequest request = PageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  json query = {};
  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Page"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PageResponse>();
}

/**
 * @summary 查询企业黑名单
 *
 * @param request PageRequest
 * @return PageResponse
 */
PageResponse Client::page(const PageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pageWithOptions(request, runtime);
}

/**
 * @summary 查询坐席具体信息
 *
 * @param request QueryAgentInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAgentInfoResponse
 */
QueryAgentInfoResponse Client::queryAgentInfoWithOptions(const QueryAgentInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentTag()) {
    query["AgentTag"] = request.getAgentTag();
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
    {"action" , "QueryAgentInfo"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAgentInfoResponse>();
}

/**
 * @summary 查询坐席具体信息
 *
 * @param request QueryAgentInfoRequest
 * @return QueryAgentInfoResponse
 */
QueryAgentInfoResponse Client::queryAgentInfo(const QueryAgentInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAgentInfoWithOptions(request, runtime);
}

/**
 * @summary 快速创建任务接口
 *
 * @param tmpReq QuickAddTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuickAddTaskResponse
 */
QuickAddTaskResponse Client::quickAddTaskWithOptions(const QuickAddTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuickAddTaskShrinkRequest request = QuickAddTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallTimeList()) {
    request.setCallTimeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallTimeList(), "CallTimeList", "json"));
  }

  json query = {};
  if (!!request.hasAgentGroupId()) {
    query["AgentGroupId"] = request.getAgentGroupId();
  }

  if (!!request.hasCallTimeListShrink()) {
    query["CallTimeList"] = request.getCallTimeListShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReferenceTaskId()) {
    query["ReferenceTaskId"] = request.getReferenceTaskId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmsTemplateId()) {
    query["SmsTemplateId"] = request.getSmsTemplateId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuickAddTask"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuickAddTaskResponse>();
}

/**
 * @summary 快速创建任务接口
 *
 * @param request QuickAddTaskRequest
 * @return QuickAddTaskResponse
 */
QuickAddTaskResponse Client::quickAddTask(const QuickAddTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return quickAddTaskWithOptions(request, runtime);
}

/**
 * @summary 解绑坐席组
 *
 * @param tmpReq QuitAgentGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuitAgentGroupResponse
 */
QuitAgentGroupResponse Client::quitAgentGroupWithOptions(const QuitAgentGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuitAgentGroupShrinkRequest request = QuitAgentGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentIds()) {
    request.setAgentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentIds(), "AgentIds", "json"));
  }

  json query = {};
  if (!!request.hasAgentGroupId()) {
    query["AgentGroupId"] = request.getAgentGroupId();
  }

  if (!!request.hasAgentIdsShrink()) {
    query["AgentIds"] = request.getAgentIdsShrink();
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
    {"action" , "QuitAgentGroup"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuitAgentGroupResponse>();
}

/**
 * @summary 解绑坐席组
 *
 * @param request QuitAgentGroupRequest
 * @return QuitAgentGroupResponse
 */
QuitAgentGroupResponse Client::quitAgentGroup(const QuitAgentGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return quitAgentGroupWithOptions(request, runtime);
}

/**
 * @summary 短信模板创建
 *
 * @param request SmsTemplateCreateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SmsTemplateCreateResponse
 */
SmsTemplateCreateResponse Client::smsTemplateCreateWithOptions(const SmsTemplateCreateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
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

  if (!!request.hasSign()) {
    query["Sign"] = request.getSign();
  }

  if (!!request.hasSmsType()) {
    query["SmsType"] = request.getSmsType();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SmsTemplateCreate"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SmsTemplateCreateResponse>();
}

/**
 * @summary 短信模板创建
 *
 * @param request SmsTemplateCreateRequest
 * @return SmsTemplateCreateResponse
 */
SmsTemplateCreateResponse Client::smsTemplateCreate(const SmsTemplateCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smsTemplateCreateWithOptions(request, runtime);
}

/**
 * @summary 短信模板列表查询
 *
 * @param request SmsTemplatePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SmsTemplatePageListResponse
 */
SmsTemplatePageListResponse Client::smsTemplatePageListWithOptions(const SmsTemplatePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasSign()) {
    query["Sign"] = request.getSign();
  }

  if (!!request.hasSmsType()) {
    query["SmsType"] = request.getSmsType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SmsTemplatePageList"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SmsTemplatePageListResponse>();
}

/**
 * @summary 短信模板列表查询
 *
 * @param request SmsTemplatePageListRequest
 * @return SmsTemplatePageListResponse
 */
SmsTemplatePageListResponse Client::smsTemplatePageList(const SmsTemplatePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smsTemplatePageListWithOptions(request, runtime);
}

/**
 * @summary 查询聊天记录接口
 *
 * @param request TaskCallChatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskCallChatsResponse
 */
TaskCallChatsResponse Client::taskCallChatsWithOptions(const TaskCallChatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentTag()) {
    query["AgentTag"] = request.getAgentTag();
  }

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

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TaskCallChats"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TaskCallChatsResponse>();
}

/**
 * @summary 查询聊天记录接口
 *
 * @param request TaskCallChatsRequest
 * @return TaskCallChatsResponse
 */
TaskCallChatsResponse Client::taskCallChats(const TaskCallChatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskCallChatsWithOptions(request, runtime);
}

/**
 * @summary 获取任务外呼情况接口
 *
 * @param request TaskCallInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskCallInfoResponse
 */
TaskCallInfoResponse Client::taskCallInfoWithOptions(const TaskCallInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "TaskCallInfo"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TaskCallInfoResponse>();
}

/**
 * @summary 获取任务外呼情况接口
 *
 * @param request TaskCallInfoRequest
 * @return TaskCallInfoResponse
 */
TaskCallInfoResponse Client::taskCallInfo(const TaskCallInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskCallInfoWithOptions(request, runtime);
}

/**
 * @summary AI批量任务查询外呼记录接口
 *
 * @param tmpReq TaskCallListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskCallListResponse
 */
TaskCallListResponse Client::taskCallListWithOptions(const TaskCallListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TaskCallListShrinkRequest request = TaskCallListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIntentTags()) {
    request.setIntentTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIntentTags(), "IntentTags", "json"));
  }

  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  json query = {};
  if (!!request.hasBatchId()) {
    query["BatchId"] = request.getBatchId();
  }

  if (!!request.hasCallDate()) {
    query["CallDate"] = request.getCallDate();
  }

  if (!!request.hasEndCallDate()) {
    query["EndCallDate"] = request.getEndCallDate();
  }

  if (!!request.hasIntentTagsShrink()) {
    query["IntentTags"] = request.getIntentTagsShrink();
  }

  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
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
    {"action" , "TaskCallList"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TaskCallListResponse>();
}

/**
 * @summary AI批量任务查询外呼记录接口
 *
 * @param request TaskCallListRequest
 * @return TaskCallListResponse
 */
TaskCallListResponse Client::taskCallList(const TaskCallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskCallListWithOptions(request, runtime);
}

/**
 * @summary 批量任务取消号码外呼
 *
 * @param tmpReq TaskCancelCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskCancelCallResponse
 */
TaskCancelCallResponse Client::taskCancelCallWithOptions(const TaskCancelCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TaskCancelCallShrinkRequest request = TaskCancelCallShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
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

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TaskCancelCall"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TaskCancelCallResponse>();
}

/**
 * @summary 批量任务取消号码外呼
 *
 * @param request TaskCancelCallRequest
 * @return TaskCancelCallResponse
 */
TaskCancelCallResponse Client::taskCancelCall(const TaskCancelCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskCancelCallWithOptions(request, runtime);
}

/**
 * @summary 查询任务列表接口
 *
 * @param request TaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskListResponse
 */
TaskListResponse Client::taskListWithOptions(const TaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTime()) {
    query["CreateTime"] = request.getCreateTime();
  }

  if (!!request.hasLastCallTime()) {
    query["LastCallTime"] = request.getLastCallTime();
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
    {"action" , "TaskList"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TaskListResponse>();
}

/**
 * @summary 查询任务列表接口
 *
 * @param request TaskListRequest
 * @return TaskListResponse
 */
TaskListResponse Client::taskList(const TaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskListWithOptions(request, runtime);
}

/**
 * @summary 批量任务恢复号码
 *
 * @param tmpReq TaskRecoverCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskRecoverCallResponse
 */
TaskRecoverCallResponse Client::taskRecoverCallWithOptions(const TaskRecoverCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TaskRecoverCallShrinkRequest request = TaskRecoverCallShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumbers()) {
    request.setNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumbers(), "Numbers", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasBeginImportTime()) {
    query["BeginImportTime"] = request.getBeginImportTime();
  }

  if (!!request.hasEndImportTime()) {
    query["EndImportTime"] = request.getEndImportTime();
  }

  if (!!request.hasNumbersShrink()) {
    query["Numbers"] = request.getNumbersShrink();
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

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TaskRecoverCall"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TaskRecoverCallResponse>();
}

/**
 * @summary 批量任务恢复号码
 *
 * @param request TaskRecoverCallRequest
 * @return TaskRecoverCallResponse
 */
TaskRecoverCallResponse Client::taskRecoverCall(const TaskRecoverCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskRecoverCallWithOptions(request, runtime);
}

/**
 * @summary 话术模板列表查询接口
 *
 * @param request TemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TemplateListResponse
 */
TemplateListResponse Client::templateListWithOptions(const TemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TemplateList"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TemplateListResponse>();
}

/**
 * @summary 话术模板列表查询接口
 *
 * @param request TemplateListRequest
 * @return TemplateListResponse
 */
TemplateListResponse Client::templateList(const TemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return templateListWithOptions(request, runtime);
}

/**
 * @summary 修改坐席状态
 *
 * @param request UpdateAgentStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentStatusResponse
 */
UpdateAgentStatusResponse Client::updateAgentStatusWithOptions(const UpdateAgentStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentStatus()) {
    query["AgentStatus"] = request.getAgentStatus();
  }

  if (!!request.hasAgentTag()) {
    query["AgentTag"] = request.getAgentTag();
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
    {"action" , "UpdateAgentStatus"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentStatusResponse>();
}

/**
 * @summary 修改坐席状态
 *
 * @param request UpdateAgentStatusRequest
 * @return UpdateAgentStatusResponse
 */
UpdateAgentStatusResponse Client::updateAgentStatus(const UpdateAgentStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgentStatusWithOptions(request, runtime);
}

/**
 * @summary 更新当天导入的号码
 *
 * @param tmpReq UpdateTaskCustomerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskCustomerResponse
 */
UpdateTaskCustomerResponse Client::updateTaskCustomerWithOptions(const UpdateTaskCustomerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTaskCustomerShrinkRequest request = UpdateTaskCustomerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomers()) {
    request.setCustomersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomers(), "Customers", "json"));
  }

  json query = {};
  if (!!request.hasCustomersShrink()) {
    query["Customers"] = request.getCustomersShrink();
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
    {"action" , "UpdateTaskCustomer"},
    {"version" , "2023-05-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskCustomerResponse>();
}

/**
 * @summary 更新当天导入的号码
 *
 * @param request UpdateTaskCustomerRequest
 * @return UpdateTaskCustomerResponse
 */
UpdateTaskCustomerResponse Client::updateTaskCustomer(const UpdateTaskCustomerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskCustomerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Aiccs20230516