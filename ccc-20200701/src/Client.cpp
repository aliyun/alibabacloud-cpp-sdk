#include <darabonba/Core.hpp>
#include <alibabacloud/CCC20200701.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::CCC20200701::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace CCC20200701
{

AlibabaCloud::CCC20200701::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "ccc.aliyuncs.com"},
    {"ap-south-1" , "ccc.aliyuncs.com"},
    {"ap-southeast-1" , "ccc.aliyuncs.com"},
    {"ap-southeast-2" , "ccc.aliyuncs.com"},
    {"ap-southeast-3" , "ccc.aliyuncs.com"},
    {"ap-southeast-5" , "ccc.aliyuncs.com"},
    {"cn-beijing" , "ccc.aliyuncs.com"},
    {"cn-chengdu" , "ccc.aliyuncs.com"},
    {"cn-hongkong" , "ccc.aliyuncs.com"},
    {"cn-huhehaote" , "ccc.aliyuncs.com"},
    {"cn-qingdao" , "ccc.aliyuncs.com"},
    {"cn-shenzhen" , "ccc.aliyuncs.com"},
    {"cn-zhangjiakou" , "ccc.aliyuncs.com"},
    {"eu-central-1" , "ccc.aliyuncs.com"},
    {"eu-west-1" , "ccc.aliyuncs.com"},
    {"me-east-1" , "ccc.aliyuncs.com"},
    {"us-east-1" , "ccc.aliyuncs.com"},
    {"us-west-1" , "ccc.aliyuncs.com"},
    {"cn-hangzhou-finance" , "ccc.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "ccc.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "ccc.aliyuncs.com"},
    {"cn-north-2-gov-1" , "ccc.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("ccc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 废弃预测式外呼活动
 *
 * @param request AbortCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortCampaignResponse
 */
AbortCampaignResponse Client::abortCampaignWithOptions(const AbortCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.campaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortCampaign"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortCampaignResponse>();
}

/**
 * @summary 废弃预测式外呼活动
 *
 * @param request AbortCampaignRequest
 * @return AbortCampaignResponse
 */
AbortCampaignResponse Client::abortCampaign(const AbortCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abortCampaignWithOptions(request, runtime);
}

/**
 * @param request AcceptChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptChatResponse
 */
AcceptChatResponse Client::acceptChatWithOptions(const AcceptChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptChat"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptChatResponse>();
}

/**
 * @param request AcceptChatRequest
 * @return AcceptChatResponse
 */
AcceptChatResponse Client::acceptChat(const AcceptChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptChatWithOptions(request, runtime);
}

/**
 * @summary 编辑呼入控制号码
 *
 * @param request AddBlacklistCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBlacklistCallTaggingResponse
 */
AddBlacklistCallTaggingResponse Client::addBlacklistCallTaggingWithOptions(const AddBlacklistCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddBlacklistCallTagging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddBlacklistCallTaggingResponse>();
}

/**
 * @summary 编辑呼入控制号码
 *
 * @param request AddBlacklistCallTaggingRequest
 * @return AddBlacklistCallTaggingResponse
 */
AddBlacklistCallTaggingResponse Client::addBlacklistCallTagging(const AddBlacklistCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBlacklistCallTaggingWithOptions(request, runtime);
}

/**
 * @summary 追加联系人
 *
 * @param tmpReq AddCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCasesResponse
 */
AddCasesResponse Client::addCasesWithOptions(const AddCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddCasesShrinkRequest request = AddCasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCaseList()) {
    request.setCaseListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.caseList(), "CaseList", "json"));
  }

  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.campaignId();
  }

  if (!!request.hasCaseListShrink()) {
    query["CaseList"] = request.caseListShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCases"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCasesResponse>();
}

/**
 * @summary 追加联系人
 *
 * @param request AddCasesRequest
 * @return AddCasesResponse
 */
AddCasesResponse Client::addCases(const AddCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCasesWithOptions(request, runtime);
}

/**
 * @param request AddFeedbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFeedbackResponse
 */
AddFeedbackResponse Client::addFeedbackWithOptions(const AddFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeedback()) {
    query["Feedback"] = request.feedback();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRating()) {
    query["Rating"] = request.rating();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFeedback"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFeedbackResponse>();
}

/**
 * @param request AddFeedbackRequest
 * @return AddFeedbackResponse
 */
AddFeedbackResponse Client::addFeedback(const AddFeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFeedbackWithOptions(request, runtime);
}

/**
 * @param request AddNumbersToSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddNumbersToSkillGroupResponse
 */
AddNumbersToSkillGroupResponse Client::addNumbersToSkillGroupWithOptions(const AddNumbersToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstNumberGroupIdList()) {
    query["InstNumberGroupIdList"] = request.instNumberGroupIdList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddNumbersToSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddNumbersToSkillGroupResponse>();
}

/**
 * @param request AddNumbersToSkillGroupRequest
 * @return AddNumbersToSkillGroupResponse
 */
AddNumbersToSkillGroupResponse Client::addNumbersToSkillGroup(const AddNumbersToSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addNumbersToSkillGroupWithOptions(request, runtime);
}

/**
 * @param request AddPersonalNumbersToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPersonalNumbersToUserResponse
 */
AddPersonalNumbersToUserResponse Client::addPersonalNumbersToUserWithOptions(const AddPersonalNumbersToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPersonalNumbersToUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPersonalNumbersToUserResponse>();
}

/**
 * @param request AddPersonalNumbersToUserRequest
 * @return AddPersonalNumbersToUserResponse
 */
AddPersonalNumbersToUserResponse Client::addPersonalNumbersToUser(const AddPersonalNumbersToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPersonalNumbersToUserWithOptions(request, runtime);
}

/**
 * @param request AddPhoneNumberToSkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPhoneNumberToSkillGroupsResponse
 */
AddPhoneNumberToSkillGroupsResponse Client::addPhoneNumberToSkillGroupsWithOptions(const AddPhoneNumberToSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.skillGroupIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPhoneNumberToSkillGroups"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPhoneNumberToSkillGroupsResponse>();
}

/**
 * @param request AddPhoneNumberToSkillGroupsRequest
 * @return AddPhoneNumberToSkillGroupsResponse
 */
AddPhoneNumberToSkillGroupsResponse Client::addPhoneNumberToSkillGroups(const AddPhoneNumberToSkillGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPhoneNumberToSkillGroupsWithOptions(request, runtime);
}

/**
 * @param request AddPhoneNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPhoneNumbersResponse
 */
AddPhoneNumbersResponse Client::addPhoneNumbersWithOptions(const AddPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumberGroupId()) {
    query["NumberGroupId"] = request.numberGroupId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.usage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPhoneNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPhoneNumbersResponse>();
}

/**
 * @param request AddPhoneNumbersRequest
 * @return AddPhoneNumbersResponse
 */
AddPhoneNumbersResponse Client::addPhoneNumbers(const AddPhoneNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPhoneNumbersWithOptions(request, runtime);
}

/**
 * @param tmpReq AddSchemaPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSchemaPropertyResponse
 */
AddSchemaPropertyResponse Client::addSchemaPropertyWithOptions(const AddSchemaPropertyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddSchemaPropertyShrinkRequest request = AddSchemaPropertyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProperty()) {
    request.setPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.property(), "Property", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPropertyShrink()) {
    body["Property"] = request.propertyShrink();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddSchemaProperty"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSchemaPropertyResponse>();
}

/**
 * @param request AddSchemaPropertyRequest
 * @return AddSchemaPropertyResponse
 */
AddSchemaPropertyResponse Client::addSchemaProperty(const AddSchemaPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSchemaPropertyWithOptions(request, runtime);
}

/**
 * @param request AddSkillGroupsToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSkillGroupsToUserResponse
 */
AddSkillGroupsToUserResponse Client::addSkillGroupsToUserWithOptions(const AddSkillGroupsToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.skillLevelList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSkillGroupsToUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSkillGroupsToUserResponse>();
}

/**
 * @param request AddSkillGroupsToUserRequest
 * @return AddSkillGroupsToUserResponse
 */
AddSkillGroupsToUserResponse Client::addSkillGroupsToUser(const AddSkillGroupsToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSkillGroupsToUserWithOptions(request, runtime);
}

/**
 * @param request AddTicketTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTicketTaskResponse
 */
AddTicketTaskResponse Client::addTicketTaskWithOptions(const AddTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignee()) {
    query["Assignee"] = request.assignee();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPosition()) {
    query["Position"] = request.position();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTicketTask"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTicketTaskResponse>();
}

/**
 * @param request AddTicketTaskRequest
 * @return AddTicketTaskResponse
 */
AddTicketTaskResponse Client::addTicketTask(const AddTicketTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTicketTaskWithOptions(request, runtime);
}

/**
 * @param request AddUsersToSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUsersToSkillGroupResponse
 */
AddUsersToSkillGroupResponse Client::addUsersToSkillGroupWithOptions(const AddUsersToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasUserSkillLevelList()) {
    query["UserSkillLevelList"] = request.userSkillLevelList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddUsersToSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUsersToSkillGroupResponse>();
}

/**
 * @param request AddUsersToSkillGroupRequest
 * @return AddUsersToSkillGroupResponse
 */
AddUsersToSkillGroupResponse Client::addUsersToSkillGroup(const AddUsersToSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUsersToSkillGroupWithOptions(request, runtime);
}

/**
 * @param request AnalyzeConversationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeConversationResponse
 */
AnalyzeConversationResponse Client::analyzeConversationWithOptions(const AnalyzeConversationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasFieldListJson()) {
    query["FieldListJson"] = request.fieldListJson();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskListJson()) {
    query["TaskListJson"] = request.taskListJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AnalyzeConversation"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnalyzeConversationResponse>();
}

/**
 * @param request AnalyzeConversationRequest
 * @return AnalyzeConversationResponse
 */
AnalyzeConversationResponse Client::analyzeConversation(const AnalyzeConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return analyzeConversationWithOptions(request, runtime);
}

/**
 * @param request AnswerCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnswerCallResponse
 */
AnswerCallResponse Client::answerCallWithOptions(const AnswerCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AnswerCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AnswerCallResponse>();
}

/**
 * @param request AnswerCallRequest
 * @return AnswerCallResponse
 */
AnswerCallResponse Client::answerCall(const AnswerCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return answerCallWithOptions(request, runtime);
}

/**
 * @summary 追加联系人
 *
 * @param tmpReq AppendCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AppendCasesResponse
 */
AppendCasesResponse Client::appendCasesWithOptions(const AppendCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AppendCasesShrinkRequest request = AppendCasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.body(), "body", "json"));
  }

  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.campaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.bodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AppendCases"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AppendCasesResponse>();
}

/**
 * @summary 追加联系人
 *
 * @param request AppendCasesRequest
 * @return AppendCasesResponse
 */
AppendCasesResponse Client::appendCases(const AppendCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return appendCasesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AssignUsers is deprecated, please use CCC::2020-07-01::ImportRamUsers instead.
 *
 * @param request AssignUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignUsersResponse
 */
AssignUsersResponse Client::assignUsersWithOptions(const AssignUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRamIdList()) {
    query["RamIdList"] = request.ramIdList();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.skillLevelList();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.workMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssignUsers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignUsersResponse>();
}

/**
 * @deprecated OpenAPI AssignUsers is deprecated, please use CCC::2020-07-01::ImportRamUsers instead.
 *
 * @param request AssignUsersRequest
 * @return AssignUsersResponse
 */
AssignUsersResponse Client::assignUsers(const AssignUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignUsersWithOptions(request, runtime);
}

/**
 * @param request BargeInCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BargeInCallResponse
 */
BargeInCallResponse Client::bargeInCallWithOptions(const BargeInCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBargedUserId()) {
    query["BargedUserId"] = request.bargedUserId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BargeInCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BargeInCallResponse>();
}

/**
 * @param request BargeInCallRequest
 * @return BargeInCallResponse
 */
BargeInCallResponse Client::bargeInCall(const BargeInCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bargeInCallWithOptions(request, runtime);
}

/**
 * @param request BlindTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BlindTransferResponse
 */
BlindTransferResponse Client::blindTransferWithOptions(const BlindTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallPriority()) {
    query["CallPriority"] = request.callPriority();
  }

  if (!!request.hasContactFlowVariables()) {
    query["ContactFlowVariables"] = request.contactFlowVariables();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasQueuingOverflowThreshold()) {
    query["QueuingOverflowThreshold"] = request.queuingOverflowThreshold();
  }

  if (!!request.hasQueuingTimeoutSeconds()) {
    query["QueuingTimeoutSeconds"] = request.queuingTimeoutSeconds();
  }

  if (!!request.hasRoutingType()) {
    query["RoutingType"] = request.routingType();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasStrategyName()) {
    query["StrategyName"] = request.strategyName();
  }

  if (!!request.hasStrategyParams()) {
    query["StrategyParams"] = request.strategyParams();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasTransferee()) {
    query["Transferee"] = request.transferee();
  }

  if (!!request.hasTransfereeType()) {
    query["TransfereeType"] = request.transfereeType();
  }

  if (!!request.hasTransferor()) {
    query["Transferor"] = request.transferor();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BlindTransfer"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BlindTransferResponse>();
}

/**
 * @param request BlindTransferRequest
 * @return BlindTransferResponse
 */
BlindTransferResponse Client::blindTransfer(const BlindTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return blindTransferWithOptions(request, runtime);
}

/**
 * @param request BridgeRtcCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BridgeRtcCallResponse
 */
BridgeRtcCallResponse Client::bridgeRtcCallWithOptions(const BridgeRtcCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.callee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasServiceProvider()) {
    query["ServiceProvider"] = request.serviceProvider();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasVideoEnabled()) {
    query["VideoEnabled"] = request.videoEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BridgeRtcCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BridgeRtcCallResponse>();
}

/**
 * @param request BridgeRtcCallRequest
 * @return BridgeRtcCallResponse
 */
BridgeRtcCallResponse Client::bridgeRtcCall(const BridgeRtcCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bridgeRtcCallWithOptions(request, runtime);
}

/**
 * @param request CancelAttendedTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAttendedTransferResponse
 */
CancelAttendedTransferResponse Client::cancelAttendedTransferWithOptions(const CancelAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelAttendedTransfer"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAttendedTransferResponse>();
}

/**
 * @param request CancelAttendedTransferRequest
 * @return CancelAttendedTransferResponse
 */
CancelAttendedTransferResponse Client::cancelAttendedTransfer(const CancelAttendedTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAttendedTransferWithOptions(request, runtime);
}

/**
 * @param request ChangeVisibilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeVisibilityResponse
 */
ChangeVisibilityResponse Client::changeVisibilityWithOptions(const ChangeVisibilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInvisible()) {
    query["Invisible"] = request.invisible();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeVisibility"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeVisibilityResponse>();
}

/**
 * @param request ChangeVisibilityRequest
 * @return ChangeVisibilityResponse
 */
ChangeVisibilityResponse Client::changeVisibility(const ChangeVisibilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeVisibilityWithOptions(request, runtime);
}

/**
 * @param request ChangeWorkModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeWorkModeResponse
 */
ChangeWorkModeResponse Client::changeWorkModeWithOptions(const ChangeWorkModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasSignedSkillGroupIdList()) {
    query["SignedSkillGroupIdList"] = request.signedSkillGroupIdList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.workMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeWorkMode"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeWorkModeResponse>();
}

/**
 * @param request ChangeWorkModeRequest
 * @return ChangeWorkModeResponse
 */
ChangeWorkModeResponse Client::changeWorkMode(const ChangeWorkModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeWorkModeWithOptions(request, runtime);
}

/**
 * @param request ClaimChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClaimChatResponse
 */
ClaimChatResponse Client::claimChatWithOptions(const ClaimChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClaimChat"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClaimChatResponse>();
}

/**
 * @param request ClaimChatRequest
 * @return ClaimChatResponse
 */
ClaimChatResponse Client::claimChat(const ClaimChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return claimChatWithOptions(request, runtime);
}

/**
 * @param request CoachCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CoachCallResponse
 */
CoachCallResponse Client::coachCallWithOptions(const CoachCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoachedUserId()) {
    query["CoachedUserId"] = request.coachedUserId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CoachCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CoachCallResponse>();
}

/**
 * @param request CoachCallRequest
 * @return CoachCallResponse
 */
CoachCallResponse Client::coachCall(const CoachCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return coachCallWithOptions(request, runtime);
}

/**
 * @param request CommitContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommitContactFlowResponse
 */
CommitContactFlowResponse Client::commitContactFlowWithOptions(const CommitContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasDefinition()) {
    query["Definition"] = request.definition();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDraftId()) {
    query["DraftId"] = request.draftId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CommitContactFlow"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommitContactFlowResponse>();
}

/**
 * @param request CommitContactFlowRequest
 * @return CommitContactFlowResponse
 */
CommitContactFlowResponse Client::commitContactFlow(const CommitContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return commitContactFlowWithOptions(request, runtime);
}

/**
 * @param request CompleteAttendedTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteAttendedTransferResponse
 */
CompleteAttendedTransferResponse Client::completeAttendedTransferWithOptions(const CompleteAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompleteAttendedTransfer"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompleteAttendedTransferResponse>();
}

/**
 * @param request CompleteAttendedTransferRequest
 * @return CompleteAttendedTransferResponse
 */
CompleteAttendedTransferResponse Client::completeAttendedTransfer(const CompleteAttendedTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return completeAttendedTransferWithOptions(request, runtime);
}

/**
 * @param request CreateAudioFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAudioFileResponse
 */
CreateAudioFileResponse Client::createAudioFileWithOptions(const CreateAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioFileName()) {
    query["AudioFileName"] = request.audioFileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOssFileKey()) {
    query["OssFileKey"] = request.ossFileKey();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.usage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAudioFile"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAudioFileResponse>();
}

/**
 * @param request CreateAudioFileRequest
 * @return CreateAudioFileResponse
 */
CreateAudioFileResponse Client::createAudioFile(const CreateAudioFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAudioFileWithOptions(request, runtime);
}

/**
 * @param request CreateCallSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCallSummaryResponse
 */
CreateCallSummaryResponse Client::createCallSummaryWithOptions(const CreateCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasContext()) {
    query["Context"] = request.context();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.customerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCallSummary"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCallSummaryResponse>();
}

/**
 * @param request CreateCallSummaryRequest
 * @return CreateCallSummaryResponse
 */
CreateCallSummaryResponse Client::createCallSummary(const CreateCallSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCallSummaryWithOptions(request, runtime);
}

/**
 * @summary 批量创建号码标签
 *
 * @param request CreateCallTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCallTagsResponse
 */
CreateCallTagsResponse Client::createCallTagsWithOptions(const CreateCallTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallTagNameList()) {
    query["CallTagNameList"] = request.callTagNameList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCallTags"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCallTagsResponse>();
}

/**
 * @summary 批量创建号码标签
 *
 * @param request CreateCallTagsRequest
 * @return CreateCallTagsResponse
 */
CreateCallTagsResponse Client::createCallTags(const CreateCallTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCallTagsWithOptions(request, runtime);
}

/**
 * @summary 创建预测式外呼活动
 *
 * @param tmpReq CreateCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCampaignResponse
 */
CreateCampaignResponse Client::createCampaignWithOptions(const CreateCampaignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCampaignShrinkRequest request = CreateCampaignShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCaseList()) {
    request.setCaseListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.caseList(), "CaseList", "json"));
  }

  if (!!tmpReq.hasNumberList()) {
    request.setNumberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.numberList(), "NumberList", "json"));
  }

  json query = {};
  if (!!request.hasCallableTime()) {
    query["CallableTime"] = request.callableTime();
  }

  if (!!request.hasCaseFileKey()) {
    query["CaseFileKey"] = request.caseFileKey();
  }

  if (!!request.hasCaseListShrink()) {
    query["CaseList"] = request.caseListShrink();
  }

  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasExecutingUntilTimeout()) {
    query["ExecutingUntilTimeout"] = request.executingUntilTimeout();
  }

  if (!!request.hasFlashSmsParameters()) {
    query["FlashSmsParameters"] = request.flashSmsParameters();
  }

  if (!!request.hasInstGroupId()) {
    query["InstGroupId"] = request.instGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaxAttemptCount()) {
    query["MaxAttemptCount"] = request.maxAttemptCount();
  }

  if (!!request.hasMinAttemptInterval()) {
    query["MinAttemptInterval"] = request.minAttemptInterval();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNumberListShrink()) {
    query["NumberList"] = request.numberListShrink();
  }

  if (!!request.hasQueueId()) {
    query["QueueId"] = request.queueId();
  }

  if (!!request.hasSimulation()) {
    query["Simulation"] = request.simulation();
  }

  if (!!request.hasSimulationParameters()) {
    query["SimulationParameters"] = request.simulationParameters();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStrategyParameters()) {
    query["StrategyParameters"] = request.strategyParameters();
  }

  if (!!request.hasStrategyType()) {
    query["StrategyType"] = request.strategyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCampaign"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCampaignResponse>();
}

/**
 * @summary 创建预测式外呼活动
 *
 * @param request CreateCampaignRequest
 * @return CreateCampaignResponse
 */
CreateCampaignResponse Client::createCampaign(const CreateCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCampaignWithOptions(request, runtime);
}

/**
 * @param request CreateChatMediaUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatMediaUrlResponse
 */
CreateChatMediaUrlResponse Client::createChatMediaUrlWithOptions(const CreateChatMediaUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMimeType()) {
    body["MimeType"] = request.mimeType();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateChatMediaUrl"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatMediaUrlResponse>();
}

/**
 * @param request CreateChatMediaUrlRequest
 * @return CreateChatMediaUrlResponse
 */
CreateChatMediaUrlResponse Client::createChatMediaUrl(const CreateChatMediaUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChatMediaUrlWithOptions(request, runtime);
}

/**
 * @param request CreateContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContactFlowResponse
 */
CreateContactFlowResponse Client::createContactFlowWithOptions(const CreateContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefinition()) {
    query["Definition"] = request.definition();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateContactFlow"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContactFlowResponse>();
}

/**
 * @param request CreateContactFlowRequest
 * @return CreateContactFlowResponse
 */
CreateContactFlowResponse Client::createContactFlow(const CreateContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createContactFlowWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateCustomCallTagging is deprecated, please use CCC::2020-07-01::CreateCustomCallTaggings instead.
 *
 * @summary 创建呼入控制号码
 *
 * @param request CreateCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomCallTaggingResponse
 */
CreateCustomCallTaggingResponse Client::createCustomCallTaggingWithOptions(const CreateCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomNumberList()) {
    query["CustomNumberList"] = request.customNumberList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomCallTagging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomCallTaggingResponse>();
}

/**
 * @deprecated OpenAPI CreateCustomCallTagging is deprecated, please use CCC::2020-07-01::CreateCustomCallTaggings instead.
 *
 * @summary 创建呼入控制号码
 *
 * @param request CreateCustomCallTaggingRequest
 * @return CreateCustomCallTaggingResponse
 */
CreateCustomCallTaggingResponse Client::createCustomCallTagging(const CreateCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdminRamIdList()) {
    query["AdminRamIdList"] = request.adminRamIdList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @param tmpReq CreateSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSchemaResponse
 */
CreateSchemaResponse Client::createSchemaWithOptions(const CreateSchemaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSchemaShrinkRequest request = CreateSchemaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProperties()) {
    request.setPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.properties(), "Properties", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPropertiesShrink()) {
    body["Properties"] = request.propertiesShrink();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSchema"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSchemaResponse>();
}

/**
 * @param request CreateSchemaRequest
 * @return CreateSchemaResponse
 */
CreateSchemaResponse Client::createSchema(const CreateSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSchemaWithOptions(request, runtime);
}

/**
 * @param request CreateSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillGroupResponse
 */
CreateSkillGroupResponse Client::createSkillGroupWithOptions(const CreateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillGroupResponse>();
}

/**
 * @param request CreateSkillGroupRequest
 * @return CreateSkillGroupResponse
 */
CreateSkillGroupResponse Client::createSkillGroup(const CreateSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillGroupWithOptions(request, runtime);
}

/**
 * @param request CreateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicketWithOptions(const CreateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasContext()) {
    query["Context"] = request.context();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.customerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTicket"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTicketResponse>();
}

/**
 * @param request CreateTicketRequest
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicket(const CreateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTicketWithOptions(request, runtime);
}

/**
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarUrl()) {
    query["AvatarUrl"] = request.avatarUrl();
  }

  if (!!request.hasDisplayId()) {
    query["DisplayId"] = request.displayId();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLoginName()) {
    query["LoginName"] = request.loginName();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasNickname()) {
    query["Nickname"] = request.nickname();
  }

  if (!!request.hasResetPassword()) {
    query["ResetPassword"] = request.resetPassword();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.skillLevelList();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.workMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserResponse>();
}

/**
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @param request DeleteAudioFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAudioFileResponse
 */
DeleteAudioFileResponse Client::deleteAudioFileWithOptions(const DeleteAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioResourceId()) {
    query["AudioResourceId"] = request.audioResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAudioFile"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAudioFileResponse>();
}

/**
 * @param request DeleteAudioFileRequest
 * @return DeleteAudioFileResponse
 */
DeleteAudioFileResponse Client::deleteAudioFile(const DeleteAudioFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAudioFileWithOptions(request, runtime);
}

/**
 * @summary 删除号码标签
 *
 * @param request DeleteCallTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCallTagResponse
 */
DeleteCallTagResponse Client::deleteCallTagWithOptions(const DeleteCallTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCallTag"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCallTagResponse>();
}

/**
 * @summary 删除号码标签
 *
 * @param request DeleteCallTagRequest
 * @return DeleteCallTagResponse
 */
DeleteCallTagResponse Client::deleteCallTag(const DeleteCallTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCallTagWithOptions(request, runtime);
}

/**
 * @summary -
 *
 * @param request DeleteContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactFlowResponse
 */
DeleteContactFlowResponse Client::deleteContactFlowWithOptions(const DeleteContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContactFlow"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactFlowResponse>();
}

/**
 * @summary -
 *
 * @param request DeleteContactFlowRequest
 * @return DeleteContactFlowResponse
 */
DeleteContactFlowResponse Client::deleteContactFlow(const DeleteContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactFlowWithOptions(request, runtime);
}

/**
 * @summary 删除呼入控制号码
 *
 * @param request DeleteCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomCallTaggingResponse
 */
DeleteCustomCallTaggingResponse Client::deleteCustomCallTaggingWithOptions(const DeleteCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomCallTagging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomCallTaggingResponse>();
}

/**
 * @summary 删除呼入控制号码
 *
 * @param request DeleteCustomCallTaggingRequest
 * @return DeleteCustomCallTaggingResponse
 */
DeleteCustomCallTaggingResponse Client::deleteCustomCallTagging(const DeleteCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @param request DeleteDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocumentWithOptions(const DeleteDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentId()) {
    body["DocumentId"] = request.documentId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDocument"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocumentResponse>();
}

/**
 * @param request DeleteDocumentRequest
 * @return DeleteDocumentResponse
 */
DeleteDocumentResponse Client::deleteDocument(const DeleteDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocumentWithOptions(request, runtime);
}

/**
 * @param tmpReq DeleteDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDocumentsResponse
 */
DeleteDocumentsResponse Client::deleteDocumentsWithOptions(const DeleteDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDocumentsShrinkRequest request = DeleteDocumentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDocumentIds()) {
    request.setDocumentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.documentIds(), "DocumentIds", "json"));
  }

  json body = {};
  if (!!request.hasDocumentIdsShrink()) {
    body["DocumentIds"] = request.documentIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDocuments"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDocumentsResponse>();
}

/**
 * @param request DeleteDocumentsRequest
 * @return DeleteDocumentsResponse
 */
DeleteDocumentsResponse Client::deleteDocuments(const DeleteDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDocumentsWithOptions(request, runtime);
}

/**
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @param request DeleteSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSchemaResponse
 */
DeleteSchemaResponse Client::deleteSchemaWithOptions(const DeleteSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSchema"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSchemaResponse>();
}

/**
 * @param request DeleteSchemaRequest
 * @return DeleteSchemaResponse
 */
DeleteSchemaResponse Client::deleteSchema(const DeleteSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSchemaWithOptions(request, runtime);
}

/**
 * @param request DeleteSchemaPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSchemaPropertyResponse
 */
DeleteSchemaPropertyResponse Client::deleteSchemaPropertyWithOptions(const DeleteSchemaPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPropertyName()) {
    body["PropertyName"] = request.propertyName();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSchemaProperty"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSchemaPropertyResponse>();
}

/**
 * @param request DeleteSchemaPropertyRequest
 * @return DeleteSchemaPropertyResponse
 */
DeleteSchemaPropertyResponse Client::deleteSchemaProperty(const DeleteSchemaPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSchemaPropertyWithOptions(request, runtime);
}

/**
 * @param request DeleteSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillGroupResponse
 */
DeleteSkillGroupResponse Client::deleteSkillGroupWithOptions(const DeleteSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillGroupResponse>();
}

/**
 * @param request DeleteSkillGroupRequest
 * @return DeleteSkillGroupResponse
 */
DeleteSkillGroupResponse Client::deleteSkillGroup(const DeleteSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillGroupWithOptions(request, runtime);
}

/**
 * @param request DeleteTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTicketResponse
 */
DeleteTicketResponse Client::deleteTicketWithOptions(const DeleteTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTicket"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTicketResponse>();
}

/**
 * @param request DeleteTicketRequest
 * @return DeleteTicketResponse
 */
DeleteTicketResponse Client::deleteTicket(const DeleteTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTicketWithOptions(request, runtime);
}

/**
 * @param request DeleteTicketTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTicketTemplateResponse
 */
DeleteTicketTemplateResponse Client::deleteTicketTemplateWithOptions(const DeleteTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTicketTemplate"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTicketTemplateResponse>();
}

/**
 * @param request DeleteTicketTemplateRequest
 * @return DeleteTicketTemplateResponse
 */
DeleteTicketTemplateResponse Client::deleteTicketTemplate(const DeleteTicketTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTicketTemplateWithOptions(request, runtime);
}

/**
 * @param request DisableSchemaPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSchemaPropertyResponse
 */
DisableSchemaPropertyResponse Client::disableSchemaPropertyWithOptions(const DisableSchemaPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPropertyName()) {
    body["PropertyName"] = request.propertyName();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisableSchemaProperty"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSchemaPropertyResponse>();
}

/**
 * @param request DisableSchemaPropertyRequest
 * @return DisableSchemaPropertyResponse
 */
DisableSchemaPropertyResponse Client::disableSchemaProperty(const DisableSchemaPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSchemaPropertyWithOptions(request, runtime);
}

/**
 * @param request DisableTicketTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableTicketTemplateResponse
 */
DisableTicketTemplateResponse Client::disableTicketTemplateWithOptions(const DisableTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableTicketTemplate"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableTicketTemplateResponse>();
}

/**
 * @param request DisableTicketTemplateRequest
 * @return DisableTicketTemplateResponse
 */
DisableTicketTemplateResponse Client::disableTicketTemplate(const DisableTicketTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableTicketTemplateWithOptions(request, runtime);
}

/**
 * @param request DiscardEditingContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DiscardEditingContactFlowResponse
 */
DiscardEditingContactFlowResponse Client::discardEditingContactFlowWithOptions(const DiscardEditingContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasDraftId()) {
    query["DraftId"] = request.draftId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DiscardEditingContactFlow"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DiscardEditingContactFlowResponse>();
}

/**
 * @param request DiscardEditingContactFlowRequest
 * @return DiscardEditingContactFlowResponse
 */
DiscardEditingContactFlowResponse Client::discardEditingContactFlow(const DiscardEditingContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return discardEditingContactFlowWithOptions(request, runtime);
}

/**
 * @param request EnableSchemaPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableSchemaPropertyResponse
 */
EnableSchemaPropertyResponse Client::enableSchemaPropertyWithOptions(const EnableSchemaPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPropertyName()) {
    body["PropertyName"] = request.propertyName();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnableSchemaProperty"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableSchemaPropertyResponse>();
}

/**
 * @param request EnableSchemaPropertyRequest
 * @return EnableSchemaPropertyResponse
 */
EnableSchemaPropertyResponse Client::enableSchemaProperty(const EnableSchemaPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableSchemaPropertyWithOptions(request, runtime);
}

/**
 * @param request EnableTicketTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableTicketTemplateResponse
 */
EnableTicketTemplateResponse Client::enableTicketTemplateWithOptions(const EnableTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableTicketTemplate"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableTicketTemplateResponse>();
}

/**
 * @param request EnableTicketTemplateRequest
 * @return EnableTicketTemplateResponse
 */
EnableTicketTemplateResponse Client::enableTicketTemplate(const EnableTicketTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableTicketTemplateWithOptions(request, runtime);
}

/**
 * @param request EndConferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndConferenceResponse
 */
EndConferenceResponse Client::endConferenceWithOptions(const EndConferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EndConference"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EndConferenceResponse>();
}

/**
 * @param request EndConferenceRequest
 * @return EndConferenceResponse
 */
EndConferenceResponse Client::endConference(const EndConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return endConferenceWithOptions(request, runtime);
}

/**
 * @param request ExportContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportContactFlowResponse
 */
ExportContactFlowResponse Client::exportContactFlowWithOptions(const ExportContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFlowId()) {
    body["FlowId"] = request.flowId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportContactFlow"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportContactFlowResponse>();
}

/**
 * @param request ExportContactFlowRequest
 * @return ExportContactFlowResponse
 */
ExportContactFlowResponse Client::exportContactFlow(const ExportContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportContactFlowWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ExportCustomCallTagging is deprecated, please use CCC::2020-07-01::ExportCustomCallTaggings instead.
 *
 * @summary 导出全部呼入号码标签
 *
 * @param request ExportCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportCustomCallTaggingResponse
 */
ExportCustomCallTaggingResponse Client::exportCustomCallTaggingWithOptions(const ExportCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportCustomCallTagging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportCustomCallTaggingResponse>();
}

/**
 * @deprecated OpenAPI ExportCustomCallTagging is deprecated, please use CCC::2020-07-01::ExportCustomCallTaggings instead.
 *
 * @summary 导出全部呼入号码标签
 *
 * @param request ExportCustomCallTaggingRequest
 * @return ExportCustomCallTaggingResponse
 */
ExportCustomCallTaggingResponse Client::exportCustomCallTagging(const ExportCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @summary 导出黑名单号码
 *
 * @param request ExportDoNotCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportDoNotCallNumbersResponse
 */
ExportDoNotCallNumbersResponse Client::exportDoNotCallNumbersWithOptions(const ExportDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportDoNotCallNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportDoNotCallNumbersResponse>();
}

/**
 * @summary 导出黑名单号码
 *
 * @param request ExportDoNotCallNumbersRequest
 * @return ExportDoNotCallNumbersResponse
 */
ExportDoNotCallNumbersResponse Client::exportDoNotCallNumbers(const ExportDoNotCallNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportDoNotCallNumbersWithOptions(request, runtime);
}

/**
 * @param request FinishTicketTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishTicketTaskResponse
 */
FinishTicketTaskResponse Client::finishTicketTaskWithOptions(const FinishTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FinishTicketTask"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FinishTicketTaskResponse>();
}

/**
 * @param request FinishTicketTaskRequest
 * @return FinishTicketTaskResponse
 */
FinishTicketTaskResponse Client::finishTicketTask(const FinishTicketTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return finishTicketTaskWithOptions(request, runtime);
}

/**
 * @summary GetAccessChannelOfStaging
 *
 * @param request GetAccessChannelOfStagingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessChannelOfStagingResponse
 */
GetAccessChannelOfStagingResponse Client::getAccessChannelOfStagingWithOptions(const GetAccessChannelOfStagingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessChannelOfStaging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessChannelOfStagingResponse>();
}

/**
 * @summary GetAccessChannelOfStaging
 *
 * @param request GetAccessChannelOfStagingRequest
 * @return GetAccessChannelOfStagingResponse
 */
GetAccessChannelOfStagingResponse Client::getAccessChannelOfStaging(const GetAccessChannelOfStagingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessChannelOfStagingWithOptions(request, runtime);
}

/**
 * @summary 获取音频文件
 *
 * @param request GetAudioFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAudioFileResponse
 */
GetAudioFileResponse Client::getAudioFileWithOptions(const GetAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioResourceId()) {
    query["AudioResourceId"] = request.audioResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAudioFile"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAudioFileResponse>();
}

/**
 * @summary 获取音频文件
 *
 * @param request GetAudioFileRequest
 * @return GetAudioFileResponse
 */
GetAudioFileResponse Client::getAudioFile(const GetAudioFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAudioFileWithOptions(request, runtime);
}

/**
 * @param request GetAudioFileDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAudioFileDownloadUrlResponse
 */
GetAudioFileDownloadUrlResponse Client::getAudioFileDownloadUrlWithOptions(const GetAudioFileDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioResourceId()) {
    query["AudioResourceId"] = request.audioResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAudioFileDownloadUrl"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAudioFileDownloadUrlResponse>();
}

/**
 * @param request GetAudioFileDownloadUrlRequest
 * @return GetAudioFileDownloadUrlResponse
 */
GetAudioFileDownloadUrlResponse Client::getAudioFileDownloadUrl(const GetAudioFileDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAudioFileDownloadUrlWithOptions(request, runtime);
}

/**
 * @param request GetAudioFileUploadParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAudioFileUploadParametersResponse
 */
GetAudioFileUploadParametersResponse Client::getAudioFileUploadParametersWithOptions(const GetAudioFileUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioFileName()) {
    query["AudioFileName"] = request.audioFileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAudioFileUploadParameters"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAudioFileUploadParametersResponse>();
}

/**
 * @param request GetAudioFileUploadParametersRequest
 * @return GetAudioFileUploadParametersResponse
 */
GetAudioFileUploadParametersResponse Client::getAudioFileUploadParameters(const GetAudioFileUploadParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAudioFileUploadParametersWithOptions(request, runtime);
}

/**
 * @summary 通话记录详情
 *
 * @param request GetCallDetailRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallDetailRecordResponse
 */
GetCallDetailRecordResponse Client::getCallDetailRecordWithOptions(const GetCallDetailRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCallDetailRecord"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCallDetailRecordResponse>();
}

/**
 * @summary 通话记录详情
 *
 * @param request GetCallDetailRecordRequest
 * @return GetCallDetailRecordResponse
 */
GetCallDetailRecordResponse Client::getCallDetailRecord(const GetCallDetailRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallDetailRecordWithOptions(request, runtime);
}

/**
 * @summary 获取预测式外呼活动信息
 *
 * @param request GetCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCampaignResponse
 */
GetCampaignResponse Client::getCampaignWithOptions(const GetCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.campaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCampaign"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCampaignResponse>();
}

/**
 * @summary 获取预测式外呼活动信息
 *
 * @param request GetCampaignRequest
 * @return GetCampaignResponse
 */
GetCampaignResponse Client::getCampaign(const GetCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCampaignWithOptions(request, runtime);
}

/**
 * @param request GetCaseFileUploadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCaseFileUploadUrlResponse
 */
GetCaseFileUploadUrlResponse Client::getCaseFileUploadUrlWithOptions(const GetCaseFileUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCaseFileUploadUrl"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCaseFileUploadUrlResponse>();
}

/**
 * @param request GetCaseFileUploadUrlRequest
 * @return GetCaseFileUploadUrlResponse
 */
GetCaseFileUploadUrlResponse Client::getCaseFileUploadUrl(const GetCaseFileUploadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCaseFileUploadUrlWithOptions(request, runtime);
}

/**
 * @param request GetChatMediaUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatMediaUrlResponse
 */
GetChatMediaUrlResponse Client::getChatMediaUrlWithOptions(const GetChatMediaUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaId()) {
    body["MediaId"] = request.mediaId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetChatMediaUrl"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatMediaUrlResponse>();
}

/**
 * @param request GetChatMediaUrlRequest
 * @return GetChatMediaUrlResponse
 */
GetChatMediaUrlResponse Client::getChatMediaUrl(const GetChatMediaUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatMediaUrlWithOptions(request, runtime);
}

/**
 * @param request GetChatRoutingProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatRoutingProfileResponse
 */
GetChatRoutingProfileResponse Client::getChatRoutingProfileWithOptions(const GetChatRoutingProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChatRoutingProfile"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatRoutingProfileResponse>();
}

/**
 * @param request GetChatRoutingProfileRequest
 * @return GetChatRoutingProfileResponse
 */
GetChatRoutingProfileResponse Client::getChatRoutingProfile(const GetChatRoutingProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatRoutingProfileWithOptions(request, runtime);
}

/**
 * @param request GetContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContactFlowResponse
 */
GetContactFlowResponse Client::getContactFlowWithOptions(const GetContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasDraftId()) {
    query["DraftId"] = request.draftId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContactFlow"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContactFlowResponse>();
}

/**
 * @param request GetContactFlowRequest
 * @return GetContactFlowResponse
 */
GetContactFlowResponse Client::getContactFlow(const GetContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContactFlowWithOptions(request, runtime);
}

/**
 * @summary 获取通话文本信息
 *
 * @param request GetConversationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConversationDetailResponse
 */
GetConversationDetailResponse Client::getConversationDetailWithOptions(const GetConversationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConversationDetail"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConversationDetailResponse>();
}

/**
 * @summary 获取通话文本信息
 *
 * @param request GetConversationDetailRequest
 * @return GetConversationDetailResponse
 */
GetConversationDetailResponse Client::getConversationDetail(const GetConversationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConversationDetailWithOptions(request, runtime);
}

/**
 * @param request GetDataChannelCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataChannelCredentialsResponse
 */
GetDataChannelCredentialsResponse Client::getDataChannelCredentialsWithOptions(const GetDataChannelCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataChannelCredentials"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataChannelCredentialsResponse>();
}

/**
 * @param request GetDataChannelCredentialsRequest
 * @return GetDataChannelCredentialsResponse
 */
GetDataChannelCredentialsResponse Client::getDataChannelCredentials(const GetDataChannelCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataChannelCredentialsWithOptions(request, runtime);
}

/**
 * @summary 获取黑名单文件上传地址
 *
 * @param request GetDoNotCallFileUploadParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoNotCallFileUploadParametersResponse
 */
GetDoNotCallFileUploadParametersResponse Client::getDoNotCallFileUploadParametersWithOptions(const GetDoNotCallFileUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoNotCallFileUploadParameters"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoNotCallFileUploadParametersResponse>();
}

/**
 * @summary 获取黑名单文件上传地址
 *
 * @param request GetDoNotCallFileUploadParametersRequest
 * @return GetDoNotCallFileUploadParametersResponse
 */
GetDoNotCallFileUploadParametersResponse Client::getDoNotCallFileUploadParameters(const GetDoNotCallFileUploadParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoNotCallFileUploadParametersWithOptions(request, runtime);
}

/**
 * @param request GetDocumentUploadParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentUploadParametersResponse
 */
GetDocumentUploadParametersResponse Client::getDocumentUploadParametersWithOptions(const GetDocumentUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDocumentUploadParameters"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentUploadParametersResponse>();
}

/**
 * @param request GetDocumentUploadParametersRequest
 * @return GetDocumentUploadParametersResponse
 */
GetDocumentUploadParametersResponse Client::getDocumentUploadParameters(const GetDocumentUploadParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocumentUploadParametersWithOptions(request, runtime);
}

/**
 * @summary 获取早媒体音频
 *
 * @param request GetEarlyMediaRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEarlyMediaRecordingResponse
 */
GetEarlyMediaRecordingResponse Client::getEarlyMediaRecordingWithOptions(const GetEarlyMediaRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEarlyMediaRecording"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEarlyMediaRecordingResponse>();
}

/**
 * @summary 获取早媒体音频
 *
 * @param request GetEarlyMediaRecordingRequest
 * @return GetEarlyMediaRecordingResponse
 */
GetEarlyMediaRecordingResponse Client::getEarlyMediaRecording(const GetEarlyMediaRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEarlyMediaRecordingWithOptions(request, runtime);
}

/**
 * @param request GetHistoricalCallerReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHistoricalCallerReportResponse
 */
GetHistoricalCallerReportResponse Client::getHistoricalCallerReportWithOptions(const GetHistoricalCallerReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStopTime()) {
    query["StopTime"] = request.stopTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHistoricalCallerReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHistoricalCallerReportResponse>();
}

/**
 * @param request GetHistoricalCallerReportRequest
 * @return GetHistoricalCallerReportResponse
 */
GetHistoricalCallerReportResponse Client::getHistoricalCallerReport(const GetHistoricalCallerReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHistoricalCallerReportWithOptions(request, runtime);
}

/**
 * @summary 获取预测式外呼活动历史报表
 *
 * @param request GetHistoricalCampaignReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHistoricalCampaignReportResponse
 */
GetHistoricalCampaignReportResponse Client::getHistoricalCampaignReportWithOptions(const GetHistoricalCampaignReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHistoricalCampaignReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHistoricalCampaignReportResponse>();
}

/**
 * @summary 获取预测式外呼活动历史报表
 *
 * @param request GetHistoricalCampaignReportRequest
 * @return GetHistoricalCampaignReportResponse
 */
GetHistoricalCampaignReportResponse Client::getHistoricalCampaignReport(const GetHistoricalCampaignReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHistoricalCampaignReportWithOptions(request, runtime);
}

/**
 * @param request GetHistoricalInstanceReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHistoricalInstanceReportResponse
 */
GetHistoricalInstanceReportResponse Client::getHistoricalInstanceReportWithOptions(const GetHistoricalInstanceReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHistoricalInstanceReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHistoricalInstanceReportResponse>();
}

/**
 * @param request GetHistoricalInstanceReportRequest
 * @return GetHistoricalInstanceReportResponse
 */
GetHistoricalInstanceReportResponse Client::getHistoricalInstanceReport(const GetHistoricalInstanceReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHistoricalInstanceReportWithOptions(request, runtime);
}

/**
 * @summary 获取实例信息
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary 获取实例信息
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @param request GetInstanceTrendingReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceTrendingReportResponse
 */
GetInstanceTrendingReportResponse Client::getInstanceTrendingReportWithOptions(const GetInstanceTrendingReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceTrendingReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceTrendingReportResponse>();
}

/**
 * @param request GetInstanceTrendingReportRequest
 * @return GetInstanceTrendingReportResponse
 */
GetInstanceTrendingReportResponse Client::getInstanceTrendingReport(const GetInstanceTrendingReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceTrendingReportWithOptions(request, runtime);
}

/**
 * @summary 获取IVR轨迹小结
 *
 * @param request GetIvrTrackingSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIvrTrackingSummaryResponse
 */
GetIvrTrackingSummaryResponse Client::getIvrTrackingSummaryWithOptions(const GetIvrTrackingSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIvrTrackingSummary"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIvrTrackingSummaryResponse>();
}

/**
 * @summary 获取IVR轨迹小结
 *
 * @param request GetIvrTrackingSummaryRequest
 * @return GetIvrTrackingSummaryResponse
 */
GetIvrTrackingSummaryResponse Client::getIvrTrackingSummary(const GetIvrTrackingSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIvrTrackingSummaryWithOptions(request, runtime);
}

/**
 * @param request GetLoginDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginDetailsResponse
 */
GetLoginDetailsResponse Client::getLoginDetailsWithOptions(const GetLoginDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChatDeviceId()) {
    query["ChatDeviceId"] = request.chatDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoginDetails"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoginDetailsResponse>();
}

/**
 * @param request GetLoginDetailsRequest
 * @return GetLoginDetailsResponse
 */
GetLoginDetailsResponse Client::getLoginDetails(const GetLoginDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginDetailsWithOptions(request, runtime);
}

/**
 * @param request GetMonoRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonoRecordingResponse
 */
GetMonoRecordingResponse Client::getMonoRecordingWithOptions(const GetMonoRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasExpireSeconds()) {
    query["ExpireSeconds"] = request.expireSeconds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMonoRecording"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMonoRecordingResponse>();
}

/**
 * @param request GetMonoRecordingRequest
 * @return GetMonoRecordingResponse
 */
GetMonoRecordingResponse Client::getMonoRecording(const GetMonoRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMonoRecordingWithOptions(request, runtime);
}

/**
 * @param request GetMultiChannelRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiChannelRecordingResponse
 */
GetMultiChannelRecordingResponse Client::getMultiChannelRecordingWithOptions(const GetMultiChannelRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMultiChannelRecording"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiChannelRecordingResponse>();
}

/**
 * @param request GetMultiChannelRecordingRequest
 * @return GetMultiChannelRecordingResponse
 */
GetMultiChannelRecordingResponse Client::getMultiChannelRecording(const GetMultiChannelRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultiChannelRecordingWithOptions(request, runtime);
}

/**
 * @param request GetNumberLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNumberLocationResponse
 */
GetNumberLocationResponse Client::getNumberLocationWithOptions(const GetNumberLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNumberLocation"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNumberLocationResponse>();
}

/**
 * @param request GetNumberLocationRequest
 * @return GetNumberLocationResponse
 */
GetNumberLocationResponse Client::getNumberLocation(const GetNumberLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNumberLocationWithOptions(request, runtime);
}

/**
 * @summary 获取预测式外呼实时状态
 *
 * @param request GetRealtimeCampaignStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRealtimeCampaignStatsResponse
 */
GetRealtimeCampaignStatsResponse Client::getRealtimeCampaignStatsWithOptions(const GetRealtimeCampaignStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRealtimeCampaignStats"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRealtimeCampaignStatsResponse>();
}

/**
 * @summary 获取预测式外呼实时状态
 *
 * @param request GetRealtimeCampaignStatsRequest
 * @return GetRealtimeCampaignStatsResponse
 */
GetRealtimeCampaignStatsResponse Client::getRealtimeCampaignStats(const GetRealtimeCampaignStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRealtimeCampaignStatsWithOptions(request, runtime);
}

/**
 * @param request GetRealtimeInstanceStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRealtimeInstanceStatesResponse
 */
GetRealtimeInstanceStatesResponse Client::getRealtimeInstanceStatesWithOptions(const GetRealtimeInstanceStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRealtimeInstanceStates"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRealtimeInstanceStatesResponse>();
}

/**
 * @param request GetRealtimeInstanceStatesRequest
 * @return GetRealtimeInstanceStatesResponse
 */
GetRealtimeInstanceStatesResponse Client::getRealtimeInstanceStates(const GetRealtimeInstanceStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRealtimeInstanceStatesWithOptions(request, runtime);
}

/**
 * @param request GetSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSchemaResponse
 */
GetSchemaResponse Client::getSchemaWithOptions(const GetSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSchema"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSchemaResponse>();
}

/**
 * @param request GetSchemaRequest
 * @return GetSchemaResponse
 */
GetSchemaResponse Client::getSchema(const GetSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSchemaWithOptions(request, runtime);
}

/**
 * @summary 查询技能组
 *
 * @param request GetSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupResponse
 */
GetSkillGroupResponse Client::getSkillGroupWithOptions(const GetSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillGroupResponse>();
}

/**
 * @summary 查询技能组
 *
 * @param request GetSkillGroupRequest
 * @return GetSkillGroupResponse
 */
GetSkillGroupResponse Client::getSkillGroup(const GetSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupWithOptions(request, runtime);
}

/**
 * @param request GetSummaryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSummaryTemplateResponse
 */
GetSummaryTemplateResponse Client::getSummaryTemplateWithOptions(const GetSummaryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSummaryTemplate"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSummaryTemplateResponse>();
}

/**
 * @param request GetSummaryTemplateRequest
 * @return GetSummaryTemplateResponse
 */
GetSummaryTemplateResponse Client::getSummaryTemplate(const GetSummaryTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSummaryTemplateWithOptions(request, runtime);
}

/**
 * @param request GetTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicketWithOptions(const GetTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTicket"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTicketResponse>();
}

/**
 * @param request GetTicketRequest
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicket(const GetTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTicketWithOptions(request, runtime);
}

/**
 * @param request GetTicketSummaryReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTicketSummaryReportResponse
 */
GetTicketSummaryReportResponse Client::getTicketSummaryReportWithOptions(const GetTicketSummaryReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignee()) {
    query["Assignee"] = request.assignee();
  }

  if (!!request.hasAssigneeType()) {
    query["AssigneeType"] = request.assigneeType();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.creator();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParticipant()) {
    query["Participant"] = request.participant();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTicketSummaryReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTicketSummaryReportResponse>();
}

/**
 * @param request GetTicketSummaryReportRequest
 * @return GetTicketSummaryReportResponse
 */
GetTicketSummaryReportResponse Client::getTicketSummaryReport(const GetTicketSummaryReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTicketSummaryReportWithOptions(request, runtime);
}

/**
 * @param request GetTicketTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTicketTemplateResponse
 */
GetTicketTemplateResponse Client::getTicketTemplateWithOptions(const GetTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.templateVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTicketTemplate"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTicketTemplateResponse>();
}

/**
 * @param request GetTicketTemplateRequest
 * @return GetTicketTemplateResponse
 */
GetTicketTemplateResponse Client::getTicketTemplate(const GetTicketTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTicketTemplateWithOptions(request, runtime);
}

/**
 * @param request GetTurnCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTurnCredentialsResponse
 */
GetTurnCredentialsResponse Client::getTurnCredentialsWithOptions(const GetTurnCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTurnCredentials"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTurnCredentialsResponse>();
}

/**
 * @param request GetTurnCredentialsRequest
 * @return GetTurnCredentialsResponse
 */
GetTurnCredentialsResponse Client::getTurnCredentials(const GetTurnCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTurnCredentialsWithOptions(request, runtime);
}

/**
 * @param request GetTurnServerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTurnServerListResponse
 */
GetTurnServerListResponse Client::getTurnServerListWithOptions(const GetTurnServerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTurnServerList"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTurnServerListResponse>();
}

/**
 * @param request GetTurnServerListRequest
 * @return GetTurnServerListResponse
 */
GetTurnServerListResponse Client::getTurnServerList(const GetTurnServerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTurnServerListWithOptions(request, runtime);
}

/**
 * @summary 获取质检参数
 *
 * @param request GetUploadAudioDataParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadAudioDataParamsResponse
 */
GetUploadAudioDataParamsResponse Client::getUploadAudioDataParamsWithOptions(const GetUploadAudioDataParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUploadAudioDataParams"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUploadAudioDataParamsResponse>();
}

/**
 * @summary 获取质检参数
 *
 * @param request GetUploadAudioDataParamsRequest
 * @return GetUploadAudioDataParamsResponse
 */
GetUploadAudioDataParamsResponse Client::getUploadAudioDataParams(const GetUploadAudioDataParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadAudioDataParamsWithOptions(request, runtime);
}

/**
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtension()) {
    query["Extension"] = request.extension();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWithOptions(request, runtime);
}

/**
 * @summary 获取视频
 *
 * @param request GetVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoResponse
 */
GetVideoResponse Client::getVideoWithOptions(const GetVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideo"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoResponse>();
}

/**
 * @summary 获取视频
 *
 * @param request GetVideoRequest
 * @return GetVideoResponse
 */
GetVideoResponse Client::getVideo(const GetVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoWithOptions(request, runtime);
}

/**
 * @param request GetVisitorLoginDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVisitorLoginDetailsResponse
 */
GetVisitorLoginDetailsResponse Client::getVisitorLoginDetailsWithOptions(const GetVisitorLoginDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChatDeviceId()) {
    query["ChatDeviceId"] = request.chatDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasVisitorId()) {
    query["VisitorId"] = request.visitorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVisitorLoginDetails"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVisitorLoginDetailsResponse>();
}

/**
 * @param request GetVisitorLoginDetailsRequest
 * @return GetVisitorLoginDetailsResponse
 */
GetVisitorLoginDetailsResponse Client::getVisitorLoginDetails(const GetVisitorLoginDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVisitorLoginDetailsWithOptions(request, runtime);
}

/**
 * @param request GetVoicemailRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVoicemailRecordingResponse
 */
GetVoicemailRecordingResponse Client::getVoicemailRecordingWithOptions(const GetVoicemailRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVoicemailRecording"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVoicemailRecordingResponse>();
}

/**
 * @param request GetVoicemailRecordingRequest
 * @return GetVoicemailRecordingResponse
 */
GetVoicemailRecordingResponse Client::getVoicemailRecording(const GetVoicemailRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVoicemailRecordingWithOptions(request, runtime);
}

/**
 * @param request HoldCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HoldCallResponse
 */
HoldCallResponse Client::holdCallWithOptions(const HoldCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasMusic()) {
    query["Music"] = request.music();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HoldCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HoldCallResponse>();
}

/**
 * @param request HoldCallRequest
 * @return HoldCallResponse
 */
HoldCallResponse Client::holdCall(const HoldCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return holdCallWithOptions(request, runtime);
}

/**
 * @param request ImportAdminsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportAdminsResponse
 */
ImportAdminsResponse Client::importAdminsWithOptions(const ImportAdminsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRamIdList()) {
    query["RamIdList"] = request.ramIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportAdmins"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportAdminsResponse>();
}

/**
 * @param request ImportAdminsRequest
 * @return ImportAdminsResponse
 */
ImportAdminsResponse Client::importAdmins(const ImportAdminsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importAdminsWithOptions(request, runtime);
}

/**
 * @param request ImportContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportContactFlowResponse
 */
ImportContactFlowResponse Client::importContactFlowWithOptions(const ImportContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFlowPackageData()) {
    body["FlowPackageData"] = request.flowPackageData();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImportContactFlow"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportContactFlowResponse>();
}

/**
 * @param request ImportContactFlowRequest
 * @return ImportContactFlowResponse
 */
ImportContactFlowResponse Client::importContactFlow(const ImportContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importContactFlowWithOptions(request, runtime);
}

/**
 * @param request ImportCorpNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportCorpNumbersResponse
 */
ImportCorpNumbersResponse Client::importCorpNumbersWithOptions(const ImportCorpNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.city();
  }

  if (!!request.hasCorpName()) {
    query["CorpName"] = request.corpName();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.provider();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.province();
  }

  if (!!request.hasTagList()) {
    query["TagList"] = request.tagList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportCorpNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportCorpNumbersResponse>();
}

/**
 * @param request ImportCorpNumbersRequest
 * @return ImportCorpNumbersResponse
 */
ImportCorpNumbersResponse Client::importCorpNumbers(const ImportCorpNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importCorpNumbersWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ImportCustomCallTagging is deprecated, please use CCC::2020-07-01::ImportCustomCallTaggings instead.
 *
 * @summary 文件导入呼入控制号码
 *
 * @param request ImportCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportCustomCallTaggingResponse
 */
ImportCustomCallTaggingResponse Client::importCustomCallTaggingWithOptions(const ImportCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.filePath();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportCustomCallTagging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportCustomCallTaggingResponse>();
}

/**
 * @deprecated OpenAPI ImportCustomCallTagging is deprecated, please use CCC::2020-07-01::ImportCustomCallTaggings instead.
 *
 * @summary 文件导入呼入控制号码
 *
 * @param request ImportCustomCallTaggingRequest
 * @return ImportCustomCallTaggingResponse
 */
ImportCustomCallTaggingResponse Client::importCustomCallTagging(const ImportCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @summary 添加黑名单号码
 *
 * @param request ImportDoNotCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportDoNotCallNumbersResponse
 */
ImportDoNotCallNumbersResponse Client::importDoNotCallNumbersWithOptions(const ImportDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.filePath();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportDoNotCallNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportDoNotCallNumbersResponse>();
}

/**
 * @summary 添加黑名单号码
 *
 * @param request ImportDoNotCallNumbersRequest
 * @return ImportDoNotCallNumbersResponse
 */
ImportDoNotCallNumbersResponse Client::importDoNotCallNumbers(const ImportDoNotCallNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importDoNotCallNumbersWithOptions(request, runtime);
}

/**
 * @param request ImportDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportDocumentsResponse
 */
ImportDocumentsResponse Client::importDocumentsWithOptions(const ImportDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOssFileKey()) {
    body["OssFileKey"] = request.ossFileKey();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImportDocuments"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportDocumentsResponse>();
}

/**
 * @param request ImportDocumentsRequest
 * @return ImportDocumentsResponse
 */
ImportDocumentsResponse Client::importDocuments(const ImportDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importDocumentsWithOptions(request, runtime);
}

/**
 * @param request ImportRamUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportRamUsersResponse
 */
ImportRamUsersResponse Client::importRamUsersWithOptions(const ImportRamUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRamIdList()) {
    query["RamIdList"] = request.ramIdList();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.skillLevelList();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.workMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportRamUsers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportRamUsersResponse>();
}

/**
 * @param request ImportRamUsersRequest
 * @return ImportRamUsersResponse
 */
ImportRamUsersResponse Client::importRamUsers(const ImportRamUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importRamUsersWithOptions(request, runtime);
}

/**
 * @param request InitiateAttendedTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitiateAttendedTransferResponse
 */
InitiateAttendedTransferResponse Client::initiateAttendedTransferWithOptions(const InitiateAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallPriority()) {
    query["CallPriority"] = request.callPriority();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasQueuingOverflowThreshold()) {
    query["QueuingOverflowThreshold"] = request.queuingOverflowThreshold();
  }

  if (!!request.hasQueuingTimeoutSeconds()) {
    query["QueuingTimeoutSeconds"] = request.queuingTimeoutSeconds();
  }

  if (!!request.hasRoutingType()) {
    query["RoutingType"] = request.routingType();
  }

  if (!!request.hasStrategyName()) {
    query["StrategyName"] = request.strategyName();
  }

  if (!!request.hasStrategyParams()) {
    query["StrategyParams"] = request.strategyParams();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasTransferee()) {
    query["Transferee"] = request.transferee();
  }

  if (!!request.hasTransfereeType()) {
    query["TransfereeType"] = request.transfereeType();
  }

  if (!!request.hasTransferor()) {
    query["Transferor"] = request.transferor();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InitiateAttendedTransfer"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitiateAttendedTransferResponse>();
}

/**
 * @param request InitiateAttendedTransferRequest
 * @return InitiateAttendedTransferResponse
 */
InitiateAttendedTransferResponse Client::initiateAttendedTransfer(const InitiateAttendedTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initiateAttendedTransferWithOptions(request, runtime);
}

/**
 * @param request InterceptCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InterceptCallResponse
 */
InterceptCallResponse Client::interceptCallWithOptions(const InterceptCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInterceptedUserId()) {
    query["InterceptedUserId"] = request.interceptedUserId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InterceptCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InterceptCallResponse>();
}

/**
 * @param request InterceptCallRequest
 * @return InterceptCallResponse
 */
InterceptCallResponse Client::interceptCall(const InterceptCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return interceptCallWithOptions(request, runtime);
}

/**
 * @param request LaunchAuthenticationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LaunchAuthenticationResponse
 */
LaunchAuthenticationResponse Client::launchAuthenticationWithOptions(const LaunchAuthenticationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasContactFlowVariables()) {
    query["ContactFlowVariables"] = request.contactFlowVariables();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LaunchAuthentication"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LaunchAuthenticationResponse>();
}

/**
 * @param request LaunchAuthenticationRequest
 * @return LaunchAuthenticationResponse
 */
LaunchAuthenticationResponse Client::launchAuthentication(const LaunchAuthenticationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return launchAuthenticationWithOptions(request, runtime);
}

/**
 * @param request LaunchSurveyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LaunchSurveyResponse
 */
LaunchSurveyResponse Client::launchSurveyWithOptions(const LaunchSurveyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasContactFlowVariables()) {
    query["ContactFlowVariables"] = request.contactFlowVariables();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasSmsMetadataId()) {
    query["SmsMetadataId"] = request.smsMetadataId();
  }

  if (!!request.hasSurveyChannel()) {
    query["SurveyChannel"] = request.surveyChannel();
  }

  if (!!request.hasSurveyTemplateId()) {
    query["SurveyTemplateId"] = request.surveyTemplateId();
  }

  if (!!request.hasSurveyTemplateVariables()) {
    query["SurveyTemplateVariables"] = request.surveyTemplateVariables();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LaunchSurvey"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LaunchSurveyResponse>();
}

/**
 * @param request LaunchSurveyRequest
 * @return LaunchSurveyResponse
 */
LaunchSurveyResponse Client::launchSurvey(const LaunchSurveyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return launchSurveyWithOptions(request, runtime);
}

/**
 * @param request ListAgentStateLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentStateLogsResponse
 */
ListAgentStateLogsResponse Client::listAgentStateLogsWithOptions(const ListAgentStateLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentStateLogs"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentStateLogsResponse>();
}

/**
 * @param request ListAgentStateLogsRequest
 * @return ListAgentStateLogsResponse
 */
ListAgentStateLogsResponse Client::listAgentStateLogs(const ListAgentStateLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentStateLogsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListAgentStates is deprecated, please use CCC::2020-07-01::ListRealtimeAgentStates instead.
 *
 * @summary ListAgentStates for ACC
 *
 * @param request ListAgentStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentStatesResponse
 */
ListAgentStatesResponse Client::listAgentStatesWithOptions(const ListAgentStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentIds()) {
    query["AgentIds"] = request.agentIds();
  }

  if (!!request.hasExcludeOfflineUsers()) {
    query["ExcludeOfflineUsers"] = request.excludeOfflineUsers();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentStates"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentStatesResponse>();
}

/**
 * @deprecated OpenAPI ListAgentStates is deprecated, please use CCC::2020-07-01::ListRealtimeAgentStates instead.
 *
 * @summary ListAgentStates for ACC
 *
 * @param request ListAgentStatesRequest
 * @return ListAgentStatesResponse
 */
ListAgentStatesResponse Client::listAgentStates(const ListAgentStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentStatesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListAgentSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalAgentReport instead.
 *
 * @summary ListAgentSummaryReportsSinceMidnight for acc
 *
 * @param request ListAgentSummaryReportsSinceMidnightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentSummaryReportsSinceMidnightResponse
 */
ListAgentSummaryReportsSinceMidnightResponse Client::listAgentSummaryReportsSinceMidnightWithOptions(const ListAgentSummaryReportsSinceMidnightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAgentSummaryReportsSinceMidnight"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentSummaryReportsSinceMidnightResponse>();
}

/**
 * @deprecated OpenAPI ListAgentSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalAgentReport instead.
 *
 * @summary ListAgentSummaryReportsSinceMidnight for acc
 *
 * @param request ListAgentSummaryReportsSinceMidnightRequest
 * @return ListAgentSummaryReportsSinceMidnightResponse
 */
ListAgentSummaryReportsSinceMidnightResponse Client::listAgentSummaryReportsSinceMidnight(const ListAgentSummaryReportsSinceMidnightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentSummaryReportsSinceMidnightWithOptions(request, runtime);
}

/**
 * @summary 获取预测式外呼呼叫记录
 *
 * @param request ListAttemptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAttemptsResponse
 */
ListAttemptsResponse Client::listAttemptsWithOptions(const ListAttemptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAttempts"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAttemptsResponse>();
}

/**
 * @summary 获取预测式外呼呼叫记录
 *
 * @param request ListAttemptsRequest
 * @return ListAttemptsResponse
 */
ListAttemptsResponse Client::listAttempts(const ListAttemptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAttemptsWithOptions(request, runtime);
}

/**
 * @summary 获取音频文件列表
 *
 * @param request ListAudioFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAudioFilesResponse
 */
ListAudioFilesResponse Client::listAudioFilesWithOptions(const ListAudioFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.usage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAudioFiles"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAudioFilesResponse>();
}

/**
 * @summary 获取音频文件列表
 *
 * @param request ListAudioFilesRequest
 * @return ListAudioFilesResponse
 */
ListAudioFilesResponse Client::listAudioFiles(const ListAudioFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAudioFilesWithOptions(request, runtime);
}

/**
 * @summary 编辑呼入控制号码
 *
 * @param request ListBlacklistCallTaggingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBlacklistCallTaggingsResponse
 */
ListBlacklistCallTaggingsResponse Client::listBlacklistCallTaggingsWithOptions(const ListBlacklistCallTaggingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBlacklistCallTaggings"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBlacklistCallTaggingsResponse>();
}

/**
 * @summary 编辑呼入控制号码
 *
 * @param request ListBlacklistCallTaggingsRequest
 * @return ListBlacklistCallTaggingsResponse
 */
ListBlacklistCallTaggingsResponse Client::listBlacklistCallTaggings(const ListBlacklistCallTaggingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBlacklistCallTaggingsWithOptions(request, runtime);
}

/**
 * @param request ListBriefSkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBriefSkillGroupsResponse
 */
ListBriefSkillGroupsResponse Client::listBriefSkillGroupsWithOptions(const ListBriefSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBriefSkillGroups"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBriefSkillGroupsResponse>();
}

/**
 * @param request ListBriefSkillGroupsRequest
 * @return ListBriefSkillGroupsResponse
 */
ListBriefSkillGroupsResponse Client::listBriefSkillGroups(const ListBriefSkillGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBriefSkillGroupsWithOptions(request, runtime);
}

/**
 * @param request ListCallDetailRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallDetailRecordsResponse
 */
ListCallDetailRecordsResponse Client::listCallDetailRecordsWithOptions(const ListCallDetailRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasContactDisposition()) {
    query["ContactDisposition"] = request.contactDisposition();
  }

  if (!!request.hasContactDispositionList()) {
    query["ContactDispositionList"] = request.contactDispositionList();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasContactType()) {
    query["ContactType"] = request.contactType();
  }

  if (!!request.hasContactTypeList()) {
    query["ContactTypeList"] = request.contactTypeList();
  }

  if (!!request.hasCriteria()) {
    query["Criteria"] = request.criteria();
  }

  if (!!request.hasEarlyMediaStateList()) {
    query["EarlyMediaStateList"] = request.earlyMediaStateList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderByField()) {
    query["OrderByField"] = request.orderByField();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSatisfactionDescriptionList()) {
    query["SatisfactionDescriptionList"] = request.satisfactionDescriptionList();
  }

  if (!!request.hasSatisfactionList()) {
    query["SatisfactionList"] = request.satisfactionList();
  }

  if (!!request.hasSatisfactionSurveyChannel()) {
    query["SatisfactionSurveyChannel"] = request.satisfactionSurveyChannel();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCallDetailRecords"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCallDetailRecordsResponse>();
}

/**
 * @param request ListCallDetailRecordsRequest
 * @return ListCallDetailRecordsResponse
 */
ListCallDetailRecordsResponse Client::listCallDetailRecords(const ListCallDetailRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallDetailRecordsWithOptions(request, runtime);
}

/**
 * @summary 通话记录列表
 *
 * @param request ListCallDetailRecordsV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallDetailRecordsV2Response
 */
ListCallDetailRecordsV2Response Client::listCallDetailRecordsV2WithOptions(const ListCallDetailRecordsV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessChannelTypeList()) {
    query["AccessChannelTypeList"] = request.accessChannelTypeList();
  }

  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasAnalyticsReportReady()) {
    query["AnalyticsReportReady"] = request.analyticsReportReady();
  }

  if (!!request.hasBroker()) {
    query["Broker"] = request.broker();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasContactDispositionList()) {
    query["ContactDispositionList"] = request.contactDispositionList();
  }

  if (!!request.hasContactIdList()) {
    query["ContactIdList"] = request.contactIdList();
  }

  if (!!request.hasContactTypeList()) {
    query["ContactTypeList"] = request.contactTypeList();
  }

  if (!!request.hasEarlyMediaStateList()) {
    query["EarlyMediaStateList"] = request.earlyMediaStateList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFirstAgentId()) {
    query["FirstAgentId"] = request.firstAgentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  if (!!request.hasOrderByField()) {
    query["OrderByField"] = request.orderByField();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReleaseInitiatorList()) {
    query["ReleaseInitiatorList"] = request.releaseInitiatorList();
  }

  if (!!request.hasReleaseReasonList()) {
    query["ReleaseReasonList"] = request.releaseReasonList();
  }

  if (!!request.hasSatisfactionDescriptionList()) {
    query["SatisfactionDescriptionList"] = request.satisfactionDescriptionList();
  }

  if (!!request.hasSatisfactionRateList()) {
    query["SatisfactionRateList"] = request.satisfactionRateList();
  }

  if (!!request.hasSatisfactionSurveyChannel()) {
    query["SatisfactionSurveyChannel"] = request.satisfactionSurveyChannel();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.skillGroupIdList();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCallDetailRecordsV2"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCallDetailRecordsV2Response>();
}

/**
 * @summary 通话记录列表
 *
 * @param request ListCallDetailRecordsV2Request
 * @return ListCallDetailRecordsV2Response
 */
ListCallDetailRecordsV2Response Client::listCallDetailRecordsV2(const ListCallDetailRecordsV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallDetailRecordsV2WithOptions(request, runtime);
}

/**
 * @param tmpReq ListCallSummariesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallSummariesResponse
 */
ListCallSummariesResponse Client::listCallSummariesWithOptions(const ListCallSummariesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCallSummariesShrinkRequest request = ListCallSummariesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactIdList()) {
    request.setContactIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contactIdList(), "ContactIdList", "json"));
  }

  json query = {};
  if (!!request.hasContactIdListShrink()) {
    query["ContactIdList"] = request.contactIdListShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCallSummaries"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCallSummariesResponse>();
}

/**
 * @param request ListCallSummariesRequest
 * @return ListCallSummariesResponse
 */
ListCallSummariesResponse Client::listCallSummaries(const ListCallSummariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallSummariesWithOptions(request, runtime);
}

/**
 * @summary 列出号码标签
 *
 * @param request ListCallTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallTagsResponse
 */
ListCallTagsResponse Client::listCallTagsWithOptions(const ListCallTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCallTags"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCallTagsResponse>();
}

/**
 * @summary 列出号码标签
 *
 * @param request ListCallTagsRequest
 * @return ListCallTagsResponse
 */
ListCallTagsResponse Client::listCallTags(const ListCallTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallTagsWithOptions(request, runtime);
}

/**
 * @summary 获取预测式外呼活动趋势报表
 *
 * @param request ListCampaignTrendingReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCampaignTrendingReportResponse
 */
ListCampaignTrendingReportResponse Client::listCampaignTrendingReportWithOptions(const ListCampaignTrendingReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCampaignTrendingReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCampaignTrendingReportResponse>();
}

/**
 * @summary 获取预测式外呼活动趋势报表
 *
 * @param request ListCampaignTrendingReportRequest
 * @return ListCampaignTrendingReportResponse
 */
ListCampaignTrendingReportResponse Client::listCampaignTrendingReport(const ListCampaignTrendingReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCampaignTrendingReportWithOptions(request, runtime);
}

/**
 * @summary 获取预测式外呼活动列表
 *
 * @param request ListCampaignsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCampaignsResponse
 */
ListCampaignsResponse Client::listCampaignsWithOptions(const ListCampaignsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActualStartTimeFrom()) {
    query["ActualStartTimeFrom"] = request.actualStartTimeFrom();
  }

  if (!!request.hasActualStartTimeTo()) {
    query["ActualStartTimeTo"] = request.actualStartTimeTo();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlanedStartTimeFrom()) {
    query["PlanedStartTimeFrom"] = request.planedStartTimeFrom();
  }

  if (!!request.hasPlanedStartTimeTo()) {
    query["PlanedStartTimeTo"] = request.planedStartTimeTo();
  }

  if (!!request.hasQueueId()) {
    query["QueueId"] = request.queueId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCampaigns"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCampaignsResponse>();
}

/**
 * @summary 获取预测式外呼活动列表
 *
 * @param request ListCampaignsRequest
 * @return ListCampaignsResponse
 */
ListCampaignsResponse Client::listCampaigns(const ListCampaignsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCampaignsWithOptions(request, runtime);
}

/**
 * @summary 获取预测式外呼活动的联系人呼叫详情
 *
 * @param request ListCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCasesResponse
 */
ListCasesResponse Client::listCasesWithOptions(const ListCasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.campaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCases"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCasesResponse>();
}

/**
 * @summary 获取预测式外呼活动的联系人呼叫详情
 *
 * @param request ListCasesRequest
 * @return ListCasesResponse
 */
ListCasesResponse Client::listCases(const ListCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCasesWithOptions(request, runtime);
}

/**
 * @param request ListCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategoriesWithOptions(const ListCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCategories"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCategoriesResponse>();
}

/**
 * @param request ListCategoriesRequest
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategories(const ListCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCategoriesWithOptions(request, runtime);
}

/**
 * @param request ListCommonTicketFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCommonTicketFieldsResponse
 */
ListCommonTicketFieldsResponse Client::listCommonTicketFieldsWithOptions(const ListCommonTicketFieldsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCommonTicketFields"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCommonTicketFieldsResponse>();
}

/**
 * @param request ListCommonTicketFieldsRequest
 * @return ListCommonTicketFieldsResponse
 */
ListCommonTicketFieldsResponse Client::listCommonTicketFields(const ListCommonTicketFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCommonTicketFieldsWithOptions(request, runtime);
}

/**
 * @param request ListConfigItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigItemsResponse
 */
ListConfigItemsResponse Client::listConfigItemsWithOptions(const ListConfigItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.objectId();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConfigItems"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigItemsResponse>();
}

/**
 * @param request ListConfigItemsRequest
 * @return ListConfigItemsResponse
 */
ListConfigItemsResponse Client::listConfigItems(const ListConfigItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigItemsWithOptions(request, runtime);
}

/**
 * @summary -
 *
 * @param request ListContactFlowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContactFlowsResponse
 */
ListContactFlowsResponse Client::listContactFlowsWithOptions(const ListContactFlowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderByField()) {
    query["OrderByField"] = request.orderByField();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContactFlows"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContactFlowsResponse>();
}

/**
 * @summary -
 *
 * @param request ListContactFlowsRequest
 * @return ListContactFlowsResponse
 */
ListContactFlowsResponse Client::listContactFlows(const ListContactFlowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContactFlowsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListCustomCallTagging is deprecated, please use CCC::2020-07-01::ListCustomCallTaggings instead.
 *
 * @summary 列出呼入控制号码
 *
 * @param request ListCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomCallTaggingResponse
 */
ListCustomCallTaggingResponse Client::listCustomCallTaggingWithOptions(const ListCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallTagNameList()) {
    query["CallTagNameList"] = request.callTagNameList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomCallTagging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomCallTaggingResponse>();
}

/**
 * @deprecated OpenAPI ListCustomCallTagging is deprecated, please use CCC::2020-07-01::ListCustomCallTaggings instead.
 *
 * @summary 列出呼入控制号码
 *
 * @param request ListCustomCallTaggingRequest
 * @return ListCustomCallTaggingResponse
 */
ListCustomCallTaggingResponse Client::listCustomCallTagging(const ListCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @param request ListDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDevicesResponse
 */
ListDevicesResponse Client::listDevicesWithOptions(const ListDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDevices"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDevicesResponse>();
}

/**
 * @param request ListDevicesRequest
 * @return ListDevicesResponse
 */
ListDevicesResponse Client::listDevices(const ListDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDevicesWithOptions(request, runtime);
}

/**
 * @summary 查询黑名单号码
 *
 * @param request ListDoNotCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoNotCallNumbersResponse
 */
ListDoNotCallNumbersResponse Client::listDoNotCallNumbersWithOptions(const ListDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoNotCallNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoNotCallNumbersResponse>();
}

/**
 * @summary 查询黑名单号码
 *
 * @param request ListDoNotCallNumbersRequest
 * @return ListDoNotCallNumbersResponse
 */
ListDoNotCallNumbersResponse Client::listDoNotCallNumbers(const ListDoNotCallNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoNotCallNumbersWithOptions(request, runtime);
}

/**
 * @param tmpReq ListDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDocumentsResponse
 */
ListDocumentsResponse Client::listDocumentsWithOptions(const ListDocumentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDocumentsShrinkRequest request = ListDocumentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSorts()) {
    request.setSortsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sorts(), "Sorts", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNextPageToken()) {
    body["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  if (!!request.hasSearchPattern()) {
    body["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasSortsShrink()) {
    body["Sorts"] = request.sortsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDocuments"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDocumentsResponse>();
}

/**
 * @param request ListDocumentsRequest
 * @return ListDocumentsResponse
 */
ListDocumentsResponse Client::listDocuments(const ListDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDocumentsWithOptions(request, runtime);
}

/**
 * @param request ListFlashSmsApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsApplicationsResponse
 */
ListFlashSmsApplicationsResponse Client::listFlashSmsApplicationsWithOptions(const ListFlashSmsApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProviderId()) {
    query["ProviderId"] = request.providerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlashSmsApplications"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlashSmsApplicationsResponse>();
}

/**
 * @param request ListFlashSmsApplicationsRequest
 * @return ListFlashSmsApplicationsResponse
 */
ListFlashSmsApplicationsResponse Client::listFlashSmsApplications(const ListFlashSmsApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsApplicationsWithOptions(request, runtime);
}

/**
 * @param tmpReq ListFlashSmsSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsSettingsResponse
 */
ListFlashSmsSettingsResponse Client::listFlashSmsSettingsWithOptions(const ListFlashSmsSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFlashSmsSettingsShrinkRequest request = ListFlashSmsSettingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSkillGroupIdList()) {
    request.setSkillGroupIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.skillGroupIdList(), "SkillGroupIdList", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSkillGroupIdListShrink()) {
    query["SkillGroupIdList"] = request.skillGroupIdListShrink();
  }

  if (!!request.hasSkillGroupName()) {
    query["SkillGroupName"] = request.skillGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlashSmsSettings"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlashSmsSettingsResponse>();
}

/**
 * @param request ListFlashSmsSettingsRequest
 * @return ListFlashSmsSettingsResponse
 */
ListFlashSmsSettingsResponse Client::listFlashSmsSettings(const ListFlashSmsSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsSettingsWithOptions(request, runtime);
}

/**
 * @summary 获取闪信模板列表
 *
 * @param request ListFlashSmsTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsTemplatesResponse
 */
ListFlashSmsTemplatesResponse Client::listFlashSmsTemplatesWithOptions(const ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProviderId()) {
    query["ProviderId"] = request.providerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlashSmsTemplates"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlashSmsTemplatesResponse>();
}

/**
 * @summary 获取闪信模板列表
 *
 * @param request ListFlashSmsTemplatesRequest
 * @return ListFlashSmsTemplatesResponse
 */
ListFlashSmsTemplatesResponse Client::listFlashSmsTemplates(const ListFlashSmsTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsTemplatesWithOptions(request, runtime);
}

/**
 * @summary ListGroupChatMessages
 *
 * @param request ListGroupChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupChatMessagesResponse
 */
ListGroupChatMessagesResponse Client::listGroupChatMessagesWithOptions(const ListGroupChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGroupChatMessages"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGroupChatMessagesResponse>();
}

/**
 * @summary ListGroupChatMessages
 *
 * @param request ListGroupChatMessagesRequest
 * @return ListGroupChatMessagesResponse
 */
ListGroupChatMessagesResponse Client::listGroupChatMessages(const ListGroupChatMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupChatMessagesWithOptions(request, runtime);
}

/**
 * @param request ListHistoricalAgentReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHistoricalAgentReportResponse
 */
ListHistoricalAgentReportResponse Client::listHistoricalAgentReportWithOptions(const ListHistoricalAgentReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStopTime()) {
    query["StopTime"] = request.stopTime();
  }

  json body = {};
  if (!!request.hasAgentIdList()) {
    body["AgentIdList"] = request.agentIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHistoricalAgentReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHistoricalAgentReportResponse>();
}

/**
 * @param request ListHistoricalAgentReportRequest
 * @return ListHistoricalAgentReportResponse
 */
ListHistoricalAgentReportResponse Client::listHistoricalAgentReport(const ListHistoricalAgentReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHistoricalAgentReportWithOptions(request, runtime);
}

/**
 * @summary ListHistoricalAgentSkillGroupReport
 *
 * @param request ListHistoricalAgentSkillGroupReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHistoricalAgentSkillGroupReportResponse
 */
ListHistoricalAgentSkillGroupReportResponse Client::listHistoricalAgentSkillGroupReportWithOptions(const ListHistoricalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.skillGroupIdList();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  json body = {};
  if (!!request.hasAgentIdList()) {
    body["AgentIdList"] = request.agentIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHistoricalAgentSkillGroupReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHistoricalAgentSkillGroupReportResponse>();
}

/**
 * @summary ListHistoricalAgentSkillGroupReport
 *
 * @param request ListHistoricalAgentSkillGroupReportRequest
 * @return ListHistoricalAgentSkillGroupReportResponse
 */
ListHistoricalAgentSkillGroupReportResponse Client::listHistoricalAgentSkillGroupReport(const ListHistoricalAgentSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHistoricalAgentSkillGroupReportWithOptions(request, runtime);
}

/**
 * @summary 技能组汇总报表
 *
 * @param request ListHistoricalSkillGroupReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHistoricalSkillGroupReportResponse
 */
ListHistoricalSkillGroupReportResponse Client::listHistoricalSkillGroupReportWithOptions(const ListHistoricalSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  json body = {};
  if (!!request.hasSkillGroupIdList()) {
    body["SkillGroupIdList"] = request.skillGroupIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListHistoricalSkillGroupReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHistoricalSkillGroupReportResponse>();
}

/**
 * @summary 技能组汇总报表
 *
 * @param request ListHistoricalSkillGroupReportRequest
 * @return ListHistoricalSkillGroupReportResponse
 */
ListHistoricalSkillGroupReportResponse Client::listHistoricalSkillGroupReport(const ListHistoricalSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHistoricalSkillGroupReportWithOptions(request, runtime);
}

/**
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @param request ListInstancesOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesOfUserResponse
 */
ListInstancesOfUserResponse Client::listInstancesOfUserWithOptions(const ListInstancesOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstancesOfUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesOfUserResponse>();
}

/**
 * @param request ListInstancesOfUserRequest
 * @return ListInstancesOfUserResponse
 */
ListInstancesOfUserResponse Client::listInstancesOfUser(const ListInstancesOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesOfUserWithOptions(request, runtime);
}

/**
 * @param request ListIntervalAgentReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntervalAgentReportResponse
 */
ListIntervalAgentReportResponse Client::listIntervalAgentReportWithOptions(const ListIntervalAgentReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntervalAgentReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntervalAgentReportResponse>();
}

/**
 * @param request ListIntervalAgentReportRequest
 * @return ListIntervalAgentReportResponse
 */
ListIntervalAgentReportResponse Client::listIntervalAgentReport(const ListIntervalAgentReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervalAgentReportWithOptions(request, runtime);
}

/**
 * @summary ListIntervalAgentSkillGroupReport
 *
 * @param request ListIntervalAgentSkillGroupReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntervalAgentSkillGroupReportResponse
 */
ListIntervalAgentSkillGroupReportResponse Client::listIntervalAgentSkillGroupReportWithOptions(const ListIntervalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntervalAgentSkillGroupReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntervalAgentSkillGroupReportResponse>();
}

/**
 * @summary ListIntervalAgentSkillGroupReport
 *
 * @param request ListIntervalAgentSkillGroupReportRequest
 * @return ListIntervalAgentSkillGroupReportResponse
 */
ListIntervalAgentSkillGroupReportResponse Client::listIntervalAgentSkillGroupReport(const ListIntervalAgentSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervalAgentSkillGroupReportWithOptions(request, runtime);
}

/**
 * @param request ListIntervalInstanceReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntervalInstanceReportResponse
 */
ListIntervalInstanceReportResponse Client::listIntervalInstanceReportWithOptions(const ListIntervalInstanceReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntervalInstanceReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntervalInstanceReportResponse>();
}

/**
 * @param request ListIntervalInstanceReportRequest
 * @return ListIntervalInstanceReportResponse
 */
ListIntervalInstanceReportResponse Client::listIntervalInstanceReport(const ListIntervalInstanceReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervalInstanceReportWithOptions(request, runtime);
}

/**
 * @param request ListIntervalSkillGroupReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntervalSkillGroupReportResponse
 */
ListIntervalSkillGroupReportResponse Client::listIntervalSkillGroupReportWithOptions(const ListIntervalSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntervalSkillGroupReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntervalSkillGroupReportResponse>();
}

/**
 * @param request ListIntervalSkillGroupReportRequest
 * @return ListIntervalSkillGroupReportResponse
 */
ListIntervalSkillGroupReportResponse Client::listIntervalSkillGroupReport(const ListIntervalSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervalSkillGroupReportWithOptions(request, runtime);
}

/**
 * @param request ListIvrTrackingDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIvrTrackingDetailsResponse
 */
ListIvrTrackingDetailsResponse Client::listIvrTrackingDetailsWithOptions(const ListIvrTrackingDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIvrTrackingDetails"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIvrTrackingDetailsResponse>();
}

/**
 * @param request ListIvrTrackingDetailsRequest
 * @return ListIvrTrackingDetailsResponse
 */
ListIvrTrackingDetailsResponse Client::listIvrTrackingDetails(const ListIvrTrackingDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIvrTrackingDetailsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListLegacyAgentEventLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
 *
 * @summary ListLegacyAgentEventLogs
 *
 * @param request ListLegacyAgentEventLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLegacyAgentEventLogsResponse
 */
ListLegacyAgentEventLogsResponse Client::listLegacyAgentEventLogsWithOptions(const ListLegacyAgentEventLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLegacyAgentEventLogs"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLegacyAgentEventLogsResponse>();
}

/**
 * @deprecated OpenAPI ListLegacyAgentEventLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
 *
 * @summary ListLegacyAgentEventLogs
 *
 * @param request ListLegacyAgentEventLogsRequest
 * @return ListLegacyAgentEventLogsResponse
 */
ListLegacyAgentEventLogsResponse Client::listLegacyAgentEventLogs(const ListLegacyAgentEventLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLegacyAgentEventLogsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListLegacyAgentStatusLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
 *
 * @summary ListLegacyAgentStatusLogs
 *
 * @param request ListLegacyAgentStatusLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLegacyAgentStatusLogsResponse
 */
ListLegacyAgentStatusLogsResponse Client::listLegacyAgentStatusLogsWithOptions(const ListLegacyAgentStatusLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLegacyAgentStatusLogs"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLegacyAgentStatusLogsResponse>();
}

/**
 * @deprecated OpenAPI ListLegacyAgentStatusLogs is deprecated, please use CCC::2020-07-01::ListAgentStateLogs instead.
 *
 * @summary ListLegacyAgentStatusLogs
 *
 * @param request ListLegacyAgentStatusLogsRequest
 * @return ListLegacyAgentStatusLogsResponse
 */
ListLegacyAgentStatusLogsResponse Client::listLegacyAgentStatusLogs(const ListLegacyAgentStatusLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLegacyAgentStatusLogsWithOptions(request, runtime);
}

/**
 * @summary ListLegacyAppraiseLogs
 *
 * @param request ListLegacyAppraiseLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLegacyAppraiseLogsResponse
 */
ListLegacyAppraiseLogsResponse Client::listLegacyAppraiseLogsWithOptions(const ListLegacyAppraiseLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLegacyAppraiseLogs"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLegacyAppraiseLogsResponse>();
}

/**
 * @summary ListLegacyAppraiseLogs
 *
 * @param request ListLegacyAppraiseLogsRequest
 * @return ListLegacyAppraiseLogsResponse
 */
ListLegacyAppraiseLogsResponse Client::listLegacyAppraiseLogs(const ListLegacyAppraiseLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLegacyAppraiseLogsWithOptions(request, runtime);
}

/**
 * @summary ListLegacyQueueEventLogs
 *
 * @param request ListLegacyQueueEventLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLegacyQueueEventLogsResponse
 */
ListLegacyQueueEventLogsResponse Client::listLegacyQueueEventLogsWithOptions(const ListLegacyQueueEventLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLegacyQueueEventLogs"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLegacyQueueEventLogsResponse>();
}

/**
 * @summary ListLegacyQueueEventLogs
 *
 * @param request ListLegacyQueueEventLogsRequest
 * @return ListLegacyQueueEventLogsResponse
 */
ListLegacyQueueEventLogsResponse Client::listLegacyQueueEventLogs(const ListLegacyQueueEventLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLegacyQueueEventLogsWithOptions(request, runtime);
}

/**
 * @param request ListMonoRecordingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMonoRecordingsResponse
 */
ListMonoRecordingsResponse Client::listMonoRecordingsWithOptions(const ListMonoRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMonoRecordings"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMonoRecordingsResponse>();
}

/**
 * @param request ListMonoRecordingsRequest
 * @return ListMonoRecordingsResponse
 */
ListMonoRecordingsResponse Client::listMonoRecordings(const ListMonoRecordingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMonoRecordingsWithOptions(request, runtime);
}

/**
 * @param request ListMultiChannelRecordingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultiChannelRecordingsResponse
 */
ListMultiChannelRecordingsResponse Client::listMultiChannelRecordingsWithOptions(const ListMultiChannelRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMultiChannelRecordings"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultiChannelRecordingsResponse>();
}

/**
 * @param request ListMultiChannelRecordingsRequest
 * @return ListMultiChannelRecordingsResponse
 */
ListMultiChannelRecordingsResponse Client::listMultiChannelRecordings(const ListMultiChannelRecordingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultiChannelRecordingsWithOptions(request, runtime);
}

/**
 * @summary 该坐席可用的外呼号码列表
 *
 * @param request ListOutboundNumbersOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOutboundNumbersOfUserResponse
 */
ListOutboundNumbersOfUserResponse Client::listOutboundNumbersOfUserWithOptions(const ListOutboundNumbersOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.skillGroupIdList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOutboundNumbersOfUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOutboundNumbersOfUserResponse>();
}

/**
 * @summary 该坐席可用的外呼号码列表
 *
 * @param request ListOutboundNumbersOfUserRequest
 * @return ListOutboundNumbersOfUserResponse
 */
ListOutboundNumbersOfUserResponse Client::listOutboundNumbersOfUser(const ListOutboundNumbersOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOutboundNumbersOfUserWithOptions(request, runtime);
}

/**
 * @param request ListPersonalNumbersOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPersonalNumbersOfUserResponse
 */
ListPersonalNumbersOfUserResponse Client::listPersonalNumbersOfUserWithOptions(const ListPersonalNumbersOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsMember()) {
    query["IsMember"] = request.isMember();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPersonalNumbersOfUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPersonalNumbersOfUserResponse>();
}

/**
 * @param request ListPersonalNumbersOfUserRequest
 * @return ListPersonalNumbersOfUserResponse
 */
ListPersonalNumbersOfUserResponse Client::listPersonalNumbersOfUser(const ListPersonalNumbersOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPersonalNumbersOfUserWithOptions(request, runtime);
}

/**
 * @summary 获取号码列表
 *
 * @param request ListPhoneNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPhoneNumbersResponse
 */
ListPhoneNumbersResponse Client::listPhoneNumbersWithOptions(const ListPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.active();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.usage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPhoneNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPhoneNumbersResponse>();
}

/**
 * @summary 获取号码列表
 *
 * @param request ListPhoneNumbersRequest
 * @return ListPhoneNumbersResponse
 */
ListPhoneNumbersResponse Client::listPhoneNumbers(const ListPhoneNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPhoneNumbersWithOptions(request, runtime);
}

/**
 * @param request ListPhoneNumbersOfSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPhoneNumbersOfSkillGroupResponse
 */
ListPhoneNumbersOfSkillGroupResponse Client::listPhoneNumbersOfSkillGroupWithOptions(const ListPhoneNumbersOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.active();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsMember()) {
    query["IsMember"] = request.isMember();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPhoneNumbersOfSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPhoneNumbersOfSkillGroupResponse>();
}

/**
 * @param request ListPhoneNumbersOfSkillGroupRequest
 * @return ListPhoneNumbersOfSkillGroupResponse
 */
ListPhoneNumbersOfSkillGroupResponse Client::listPhoneNumbersOfSkillGroup(const ListPhoneNumbersOfSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPhoneNumbersOfSkillGroupWithOptions(request, runtime);
}

/**
 * @param request ListPrivilegesOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivilegesOfUserResponse
 */
ListPrivilegesOfUserResponse Client::listPrivilegesOfUserWithOptions(const ListPrivilegesOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivilegesOfUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivilegesOfUserResponse>();
}

/**
 * @param request ListPrivilegesOfUserRequest
 * @return ListPrivilegesOfUserResponse
 */
ListPrivilegesOfUserResponse Client::listPrivilegesOfUser(const ListPrivilegesOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivilegesOfUserWithOptions(request, runtime);
}

/**
 * @param request ListRamUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRamUsersResponse
 */
ListRamUsersResponse Client::listRamUsersWithOptions(const ListRamUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRamUsers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRamUsersResponse>();
}

/**
 * @param request ListRamUsersRequest
 * @return ListRamUsersResponse
 */
ListRamUsersResponse Client::listRamUsers(const ListRamUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRamUsersWithOptions(request, runtime);
}

/**
 * @param request ListRealtimeAgentStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRealtimeAgentStatesResponse
 */
ListRealtimeAgentStatesResponse Client::listRealtimeAgentStatesWithOptions(const ListRealtimeAgentStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.agentName();
  }

  if (!!request.hasCallTypeList()) {
    query["CallTypeList"] = request.callTypeList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasOutboundScenario()) {
    query["OutboundScenario"] = request.outboundScenario();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasWorkModeList()) {
    query["WorkModeList"] = request.workModeList();
  }

  json body = {};
  if (!!request.hasAgentIdList()) {
    body["AgentIdList"] = request.agentIdList();
  }

  if (!!request.hasStateList()) {
    body["StateList"] = request.stateList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRealtimeAgentStates"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRealtimeAgentStatesResponse>();
}

/**
 * @param request ListRealtimeAgentStatesRequest
 * @return ListRealtimeAgentStatesResponse
 */
ListRealtimeAgentStatesResponse Client::listRealtimeAgentStates(const ListRealtimeAgentStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRealtimeAgentStatesWithOptions(request, runtime);
}

/**
 * @param request ListRealtimeSkillGroupStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRealtimeSkillGroupStatesResponse
 */
ListRealtimeSkillGroupStatesResponse Client::listRealtimeSkillGroupStatesWithOptions(const ListRealtimeSkillGroupStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasSkillGroupIdList()) {
    body["SkillGroupIdList"] = request.skillGroupIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRealtimeSkillGroupStates"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRealtimeSkillGroupStatesResponse>();
}

/**
 * @param request ListRealtimeSkillGroupStatesRequest
 * @return ListRealtimeSkillGroupStatesResponse
 */
ListRealtimeSkillGroupStatesResponse Client::listRealtimeSkillGroupStates(const ListRealtimeSkillGroupStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRealtimeSkillGroupStatesWithOptions(request, runtime);
}

/**
 * @param request ListRecentCallDetailRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecentCallDetailRecordsResponse
 */
ListRecentCallDetailRecordsResponse Client::listRecentCallDetailRecordsWithOptions(const ListRecentCallDetailRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCriteria()) {
    query["Criteria"] = request.criteria();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRecentCallDetailRecords"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecentCallDetailRecordsResponse>();
}

/**
 * @param request ListRecentCallDetailRecordsRequest
 * @return ListRecentCallDetailRecordsResponse
 */
ListRecentCallDetailRecordsResponse Client::listRecentCallDetailRecords(const ListRecentCallDetailRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecentCallDetailRecordsWithOptions(request, runtime);
}

/**
 * @param request ListRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRolesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListSkillGroupStates is deprecated, please use CCC::2020-07-01::ListRealtimeSkillGroupStates instead.
 *
 * @summary ListSkillGroupStates for acc
 *
 * @param request ListSkillGroupStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillGroupStatesResponse
 */
ListSkillGroupStatesResponse Client::listSkillGroupStatesWithOptions(const ListSkillGroupStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkillGroupStates"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillGroupStatesResponse>();
}

/**
 * @deprecated OpenAPI ListSkillGroupStates is deprecated, please use CCC::2020-07-01::ListRealtimeSkillGroupStates instead.
 *
 * @summary ListSkillGroupStates for acc
 *
 * @param request ListSkillGroupStatesRequest
 * @return ListSkillGroupStatesResponse
 */
ListSkillGroupStatesResponse Client::listSkillGroupStates(const ListSkillGroupStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillGroupStatesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListSkillGroupSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalSkillGroupReport instead.
 *
 * @summary ListSkillGroupSummaryReportsSinceMidnight for acc
 *
 * @param request ListSkillGroupSummaryReportsSinceMidnightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillGroupSummaryReportsSinceMidnightResponse
 */
ListSkillGroupSummaryReportsSinceMidnightResponse Client::listSkillGroupSummaryReportsSinceMidnightWithOptions(const ListSkillGroupSummaryReportsSinceMidnightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkillGroupSummaryReportsSinceMidnight"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillGroupSummaryReportsSinceMidnightResponse>();
}

/**
 * @deprecated OpenAPI ListSkillGroupSummaryReportsSinceMidnight is deprecated, please use CCC::2020-07-01::ListHistoricalSkillGroupReport instead.
 *
 * @summary ListSkillGroupSummaryReportsSinceMidnight for acc
 *
 * @param request ListSkillGroupSummaryReportsSinceMidnightRequest
 * @return ListSkillGroupSummaryReportsSinceMidnightResponse
 */
ListSkillGroupSummaryReportsSinceMidnightResponse Client::listSkillGroupSummaryReportsSinceMidnight(const ListSkillGroupSummaryReportsSinceMidnightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillGroupSummaryReportsSinceMidnightWithOptions(request, runtime);
}

/**
 * @param request ListSkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillGroupsResponse
 */
ListSkillGroupsResponse Client::listSkillGroupsWithOptions(const ListSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkillGroups"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillGroupsResponse>();
}

/**
 * @param request ListSkillGroupsRequest
 * @return ListSkillGroupsResponse
 */
ListSkillGroupsResponse Client::listSkillGroups(const ListSkillGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillGroupsWithOptions(request, runtime);
}

/**
 * @param request ListSkillLevelsOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillLevelsOfUserResponse
 */
ListSkillLevelsOfUserResponse Client::listSkillLevelsOfUserWithOptions(const ListSkillLevelsOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsMember()) {
    query["IsMember"] = request.isMember();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkillLevelsOfUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillLevelsOfUserResponse>();
}

/**
 * @param request ListSkillLevelsOfUserRequest
 * @return ListSkillLevelsOfUserResponse
 */
ListSkillLevelsOfUserResponse Client::listSkillLevelsOfUser(const ListSkillLevelsOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillLevelsOfUserWithOptions(request, runtime);
}

/**
 * @param request ListSmsMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmsMetadataResponse
 */
ListSmsMetadataResponse Client::listSmsMetadataWithOptions(const ListSmsMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScenarioListJson()) {
    query["ScenarioListJson"] = request.scenarioListJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSmsMetadata"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSmsMetadataResponse>();
}

/**
 * @param request ListSmsMetadataRequest
 * @return ListSmsMetadataResponse
 */
ListSmsMetadataResponse Client::listSmsMetadata(const ListSmsMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSmsMetadataWithOptions(request, runtime);
}

/**
 * @param request ListTicketTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketTasksResponse
 */
ListTicketTasksResponse Client::listTicketTasksWithOptions(const ListTicketTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTicketTasks"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTicketTasksResponse>();
}

/**
 * @param request ListTicketTasksRequest
 * @return ListTicketTasksResponse
 */
ListTicketTasksResponse Client::listTicketTasks(const ListTicketTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTicketTasksWithOptions(request, runtime);
}

/**
 * @param request ListTicketTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketTemplatesResponse
 */
ListTicketTemplatesResponse Client::listTicketTemplatesWithOptions(const ListTicketTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTicketTemplates"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTicketTemplatesResponse>();
}

/**
 * @param request ListTicketTemplatesRequest
 * @return ListTicketTemplatesResponse
 */
ListTicketTemplatesResponse Client::listTicketTemplates(const ListTicketTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTicketTemplatesWithOptions(request, runtime);
}

/**
 * @param request ListTicketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTicketsWithOptions(const ListTicketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignee()) {
    query["Assignee"] = request.assignee();
  }

  if (!!request.hasAssigneeType()) {
    query["AssigneeType"] = request.assigneeType();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.creator();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.customerId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobIdList()) {
    query["JobIdList"] = request.jobIdList();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParticipant()) {
    query["Participant"] = request.participant();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTickets"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTicketsResponse>();
}

/**
 * @param request ListTicketsRequest
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTickets(const ListTicketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTicketsWithOptions(request, runtime);
}

/**
 * @summary 获取未分配号码列表
 *
 * @param request ListUnassignedNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUnassignedNumbersResponse
 */
ListUnassignedNumbersResponse Client::listUnassignedNumbersWithOptions(const ListUnassignedNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUnassignedNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUnassignedNumbersResponse>();
}

/**
 * @summary 获取未分配号码列表
 *
 * @param request ListUnassignedNumbersRequest
 * @return ListUnassignedNumbersResponse
 */
ListUnassignedNumbersResponse Client::listUnassignedNumbers(const ListUnassignedNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUnassignedNumbersWithOptions(request, runtime);
}

/**
 * @param request ListUserLevelsOfSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserLevelsOfSkillGroupResponse
 */
ListUserLevelsOfSkillGroupResponse Client::listUserLevelsOfSkillGroupWithOptions(const ListUserLevelsOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsMember()) {
    query["IsMember"] = request.isMember();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserLevelsOfSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserLevelsOfSkillGroupResponse>();
}

/**
 * @param request ListUserLevelsOfSkillGroupRequest
 * @return ListUserLevelsOfSkillGroupResponse
 */
ListUserLevelsOfSkillGroupResponse Client::listUserLevelsOfSkillGroup(const ListUserLevelsOfSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserLevelsOfSkillGroupWithOptions(request, runtime);
}

/**
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.searchPattern();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary ListVisitorChatMessages
 *
 * @param request ListVisitorChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVisitorChatMessagesResponse
 */
ListVisitorChatMessagesResponse Client::listVisitorChatMessagesWithOptions(const ListVisitorChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessChannelId()) {
    query["AccessChannelId"] = request.accessChannelId();
  }

  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.accessToken();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVisitorId()) {
    query["VisitorId"] = request.visitorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVisitorChatMessages"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVisitorChatMessagesResponse>();
}

/**
 * @summary ListVisitorChatMessages
 *
 * @param request ListVisitorChatMessagesRequest
 * @return ListVisitorChatMessagesResponse
 */
ListVisitorChatMessagesResponse Client::listVisitorChatMessages(const ListVisitorChatMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVisitorChatMessagesWithOptions(request, runtime);
}

/**
 * @param request ListVoicemailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoicemailsResponse
 */
ListVoicemailsResponse Client::listVoicemailsWithOptions(const ListVoicemailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.contactId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVoicemails"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVoicemailsResponse>();
}

/**
 * @param request ListVoicemailsRequest
 * @return ListVoicemailsResponse
 */
ListVoicemailsResponse Client::listVoicemails(const ListVoicemailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVoicemailsWithOptions(request, runtime);
}

/**
 * @param request ListWaitingChatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWaitingChatsResponse
 */
ListWaitingChatsResponse Client::listWaitingChatsWithOptions(const ListWaitingChatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.skillGroupIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWaitingChats"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWaitingChatsResponse>();
}

/**
 * @param request ListWaitingChatsRequest
 * @return ListWaitingChatsResponse
 */
ListWaitingChatsResponse Client::listWaitingChats(const ListWaitingChatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWaitingChatsWithOptions(request, runtime);
}

/**
 * @param request MakeCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MakeCallResponse
 */
MakeCallResponse Client::makeCallWithOptions(const MakeCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.callee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasFlashSmsVariables()) {
    query["FlashSmsVariables"] = request.flashSmsVariables();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaskedCallee()) {
    query["MaskedCallee"] = request.maskedCallee();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MakeCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MakeCallResponse>();
}

/**
 * @param request MakeCallRequest
 * @return MakeCallResponse
 */
MakeCallResponse Client::makeCall(const MakeCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return makeCallWithOptions(request, runtime);
}

/**
 * @param request ModifyAudioFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAudioFileResponse
 */
ModifyAudioFileResponse Client::modifyAudioFileWithOptions(const ModifyAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioFileName()) {
    query["AudioFileName"] = request.audioFileName();
  }

  if (!!request.hasAudioResourceId()) {
    query["AudioResourceId"] = request.audioResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOssFileKey()) {
    query["OssFileKey"] = request.ossFileKey();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.usage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAudioFile"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAudioFileResponse>();
}

/**
 * @param request ModifyAudioFileRequest
 * @return ModifyAudioFileResponse
 */
ModifyAudioFileResponse Client::modifyAudioFile(const ModifyAudioFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAudioFileWithOptions(request, runtime);
}

/**
 * @summary 编辑呼入控制号码
 *
 * @param request ModifyCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomCallTaggingResponse
 */
ModifyCustomCallTaggingResponse Client::modifyCustomCallTaggingWithOptions(const ModifyCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallTagNameList()) {
    query["CallTagNameList"] = request.callTagNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustomCallTagging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustomCallTaggingResponse>();
}

/**
 * @summary 编辑呼入控制号码
 *
 * @param request ModifyCustomCallTaggingRequest
 * @return ModifyCustomCallTaggingResponse
 */
ModifyCustomCallTaggingResponse Client::modifyCustomCallTagging(const ModifyCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstance"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceResponse>();
}

/**
 * @param request ModifyInstanceRequest
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstance(const ModifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceWithOptions(request, runtime);
}

/**
 * @param request ModifyPhoneNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPhoneNumberResponse
 */
ModifyPhoneNumberResponse Client::modifyPhoneNumberWithOptions(const ModifyPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.usage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPhoneNumber"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPhoneNumberResponse>();
}

/**
 * @param request ModifyPhoneNumberRequest
 * @return ModifyPhoneNumberResponse
 */
ModifyPhoneNumberResponse Client::modifyPhoneNumber(const ModifyPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPhoneNumberWithOptions(request, runtime);
}

/**
 * @param request ModifySkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySkillGroupResponse
 */
ModifySkillGroupResponse Client::modifySkillGroupWithOptions(const ModifySkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySkillGroupResponse>();
}

/**
 * @param request ModifySkillGroupRequest
 * @return ModifySkillGroupResponse
 */
ModifySkillGroupResponse Client::modifySkillGroup(const ModifySkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySkillGroupWithOptions(request, runtime);
}

/**
 * @param request ModifySkillLevelsOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySkillLevelsOfUserResponse
 */
ModifySkillLevelsOfUserResponse Client::modifySkillLevelsOfUserWithOptions(const ModifySkillLevelsOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.skillLevelList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySkillLevelsOfUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySkillLevelsOfUserResponse>();
}

/**
 * @param request ModifySkillLevelsOfUserRequest
 * @return ModifySkillLevelsOfUserResponse
 */
ModifySkillLevelsOfUserResponse Client::modifySkillLevelsOfUser(const ModifySkillLevelsOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySkillLevelsOfUserWithOptions(request, runtime);
}

/**
 * @param request ModifyUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUserWithOptions(const ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarUrl()) {
    query["AvatarUrl"] = request.avatarUrl();
  }

  if (!!request.hasDisplayId()) {
    query["DisplayId"] = request.displayId();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.mobile();
  }

  if (!!request.hasNickname()) {
    query["Nickname"] = request.nickname();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.roleId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.workMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserResponse>();
}

/**
 * @param request ModifyUserRequest
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUser(const ModifyUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserWithOptions(request, runtime);
}

/**
 * @param request ModifyUserLevelsOfSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserLevelsOfSkillGroupResponse
 */
ModifyUserLevelsOfSkillGroupResponse Client::modifyUserLevelsOfSkillGroupWithOptions(const ModifyUserLevelsOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasUserLevelList()) {
    query["UserLevelList"] = request.userLevelList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUserLevelsOfSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserLevelsOfSkillGroupResponse>();
}

/**
 * @param request ModifyUserLevelsOfSkillGroupRequest
 * @return ModifyUserLevelsOfSkillGroupResponse
 */
ModifyUserLevelsOfSkillGroupResponse Client::modifyUserLevelsOfSkillGroup(const ModifyUserLevelsOfSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserLevelsOfSkillGroupWithOptions(request, runtime);
}

/**
 * @param request MonitorCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MonitorCallResponse
 */
MonitorCallResponse Client::monitorCallWithOptions(const MonitorCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMonitoredUserId()) {
    query["MonitoredUserId"] = request.monitoredUserId();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MonitorCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MonitorCallResponse>();
}

/**
 * @param request MonitorCallRequest
 * @return MonitorCallResponse
 */
MonitorCallResponse Client::monitorCall(const MonitorCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return monitorCallWithOptions(request, runtime);
}

/**
 * @param request MuteCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MuteCallResponse
 */
MuteCallResponse Client::muteCallWithOptions(const MuteCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MuteCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MuteCallResponse>();
}

/**
 * @param request MuteCallRequest
 * @return MuteCallResponse
 */
MuteCallResponse Client::muteCall(const MuteCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return muteCallWithOptions(request, runtime);
}

/**
 * @summary 暂停预测式外呼活动
 *
 * @param request PauseCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseCampaignResponse
 */
PauseCampaignResponse Client::pauseCampaignWithOptions(const PauseCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.campaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PauseCampaign"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PauseCampaignResponse>();
}

/**
 * @summary 暂停预测式外呼活动
 *
 * @param request PauseCampaignRequest
 * @return PauseCampaignResponse
 */
PauseCampaignResponse Client::pauseCampaign(const PauseCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseCampaignWithOptions(request, runtime);
}

/**
 * @param request PickOutboundNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PickOutboundNumbersResponse
 */
PickOutboundNumbersResponse Client::pickOutboundNumbersWithOptions(const PickOutboundNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.count();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.skillGroupIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PickOutboundNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PickOutboundNumbersResponse>();
}

/**
 * @param request PickOutboundNumbersRequest
 * @return PickOutboundNumbersResponse
 */
PickOutboundNumbersResponse Client::pickOutboundNumbers(const PickOutboundNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pickOutboundNumbersWithOptions(request, runtime);
}

/**
 * @param request PollUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PollUserStatusResponse
 */
PollUserStatusResponse Client::pollUserStatusWithOptions(const PollUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PollUserStatus"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PollUserStatusResponse>();
}

/**
 * @param request PollUserStatusRequest
 * @return PollUserStatusResponse
 */
PollUserStatusResponse Client::pollUserStatus(const PollUserStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pollUserStatusWithOptions(request, runtime);
}

/**
 * @summary ProcessAliMeCallbackOfStaging
 *
 * @param request ProcessAliMeCallbackOfStagingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProcessAliMeCallbackOfStagingResponse
 */
ProcessAliMeCallbackOfStagingResponse Client::processAliMeCallbackOfStagingWithOptions(const ProcessAliMeCallbackOfStagingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ProcessAliMeCallbackOfStaging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProcessAliMeCallbackOfStagingResponse>();
}

/**
 * @summary ProcessAliMeCallbackOfStaging
 *
 * @param request ProcessAliMeCallbackOfStagingRequest
 * @return ProcessAliMeCallbackOfStagingResponse
 */
ProcessAliMeCallbackOfStagingResponse Client::processAliMeCallbackOfStaging(const ProcessAliMeCallbackOfStagingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return processAliMeCallbackOfStagingWithOptions(request, runtime);
}

/**
 * @param request ProcessCustomIMCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProcessCustomIMCallbackResponse
 */
ProcessCustomIMCallbackResponse Client::processCustomIMCallbackWithOptions(const ProcessCustomIMCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessChannelId()) {
    body["AccessChannelId"] = request.accessChannelId();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.conversationId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMessageContent()) {
    body["MessageContent"] = request.messageContent();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSenderAvatarMediaId()) {
    body["SenderAvatarMediaId"] = request.senderAvatarMediaId();
  }

  if (!!request.hasSenderId()) {
    body["SenderId"] = request.senderId();
  }

  if (!!request.hasSenderName()) {
    body["SenderName"] = request.senderName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ProcessCustomIMCallback"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProcessCustomIMCallbackResponse>();
}

/**
 * @param request ProcessCustomIMCallbackRequest
 * @return ProcessCustomIMCallbackResponse
 */
ProcessCustomIMCallbackResponse Client::processCustomIMCallback(const ProcessCustomIMCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return processCustomIMCallbackWithOptions(request, runtime);
}

/**
 * @param request PublishContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishContactFlowResponse
 */
PublishContactFlowResponse Client::publishContactFlowWithOptions(const PublishContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasDraftId()) {
    query["DraftId"] = request.draftId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishContactFlow"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishContactFlowResponse>();
}

/**
 * @param request PublishContactFlowRequest
 * @return PublishContactFlowResponse
 */
PublishContactFlowResponse Client::publishContactFlow(const PublishContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishContactFlowWithOptions(request, runtime);
}

/**
 * @param request ReadyForServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadyForServiceResponse
 */
ReadyForServiceResponse Client::readyForServiceWithOptions(const ReadyForServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOutboundScenario()) {
    query["OutboundScenario"] = request.outboundScenario();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReadyForService"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadyForServiceResponse>();
}

/**
 * @param request ReadyForServiceRequest
 * @return ReadyForServiceResponse
 */
ReadyForServiceResponse Client::readyForService(const ReadyForServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readyForServiceWithOptions(request, runtime);
}

/**
 * @param request RedialCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RedialCallResponse
 */
RedialCallResponse Client::redialCallWithOptions(const RedialCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.callee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RedialCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RedialCallResponse>();
}

/**
 * @param request RedialCallRequest
 * @return RedialCallResponse
 */
RedialCallResponse Client::redialCall(const RedialCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return redialCallWithOptions(request, runtime);
}

/**
 * @param request RegisterDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterDeviceResponse
 */
RegisterDeviceResponse Client::registerDeviceWithOptions(const RegisterDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterDevice"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterDeviceResponse>();
}

/**
 * @param request RegisterDeviceRequest
 * @return RegisterDeviceResponse
 */
RegisterDeviceResponse Client::registerDevice(const RegisterDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerDeviceWithOptions(request, runtime);
}

/**
 * @param request RegisterDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterDevicesResponse
 */
RegisterDevicesResponse Client::registerDevicesWithOptions(const RegisterDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasUserIdListJson()) {
    query["UserIdListJson"] = request.userIdListJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterDevices"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterDevicesResponse>();
}

/**
 * @param request RegisterDevicesRequest
 * @return RegisterDevicesResponse
 */
RegisterDevicesResponse Client::registerDevices(const RegisterDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerDevicesWithOptions(request, runtime);
}

/**
 * @param request RejectChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectChatResponse
 */
RejectChatResponse Client::rejectChatWithOptions(const RejectChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectChat"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectChatResponse>();
}

/**
 * @param request RejectChatRequest
 * @return RejectChatResponse
 */
RejectChatResponse Client::rejectChat(const RejectChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectChatWithOptions(request, runtime);
}

/**
 * @param request RejectTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectTicketResponse
 */
RejectTicketResponse Client::rejectTicketWithOptions(const RejectTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RejectTicket"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RejectTicketResponse>();
}

/**
 * @param request RejectTicketRequest
 * @return RejectTicketResponse
 */
RejectTicketResponse Client::rejectTicket(const RejectTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectTicketWithOptions(request, runtime);
}

/**
 * @param request ReleaseCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseCallResponse
 */
ReleaseCallResponse Client::releaseCallWithOptions(const ReleaseCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseCallResponse>();
}

/**
 * @param request ReleaseCallRequest
 * @return ReleaseCallResponse
 */
ReleaseCallResponse Client::releaseCall(const ReleaseCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseCallWithOptions(request, runtime);
}

/**
 * @param request ReleaseChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseChatResponse
 */
ReleaseChatResponse Client::releaseChatWithOptions(const ReleaseChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.userType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseChat"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseChatResponse>();
}

/**
 * @param request ReleaseChatRequest
 * @return ReleaseChatResponse
 */
ReleaseChatResponse Client::releaseChat(const ReleaseChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseChatWithOptions(request, runtime);
}

/**
 * @summary 编辑呼入控制号码
 *
 * @param request RemoveBlacklistCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveBlacklistCallTaggingResponse
 */
RemoveBlacklistCallTaggingResponse Client::removeBlacklistCallTaggingWithOptions(const RemoveBlacklistCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveBlacklistCallTagging"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveBlacklistCallTaggingResponse>();
}

/**
 * @summary 编辑呼入控制号码
 *
 * @param request RemoveBlacklistCallTaggingRequest
 * @return RemoveBlacklistCallTaggingResponse
 */
RemoveBlacklistCallTaggingResponse Client::removeBlacklistCallTagging(const RemoveBlacklistCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeBlacklistCallTaggingWithOptions(request, runtime);
}

/**
 * @summary 删除黑名单号码
 *
 * @param request RemoveDoNotCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDoNotCallNumbersResponse
 */
RemoveDoNotCallNumbersResponse Client::removeDoNotCallNumbersWithOptions(const RemoveDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDoNotCallNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDoNotCallNumbersResponse>();
}

/**
 * @summary 删除黑名单号码
 *
 * @param request RemoveDoNotCallNumbersRequest
 * @return RemoveDoNotCallNumbersResponse
 */
RemoveDoNotCallNumbersResponse Client::removeDoNotCallNumbers(const RemoveDoNotCallNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDoNotCallNumbersWithOptions(request, runtime);
}

/**
 * @param request RemovePersonalNumbersFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePersonalNumbersFromUserResponse
 */
RemovePersonalNumbersFromUserResponse Client::removePersonalNumbersFromUserWithOptions(const RemovePersonalNumbersFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePersonalNumbersFromUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePersonalNumbersFromUserResponse>();
}

/**
 * @param request RemovePersonalNumbersFromUserRequest
 * @return RemovePersonalNumbersFromUserResponse
 */
RemovePersonalNumbersFromUserResponse Client::removePersonalNumbersFromUser(const RemovePersonalNumbersFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePersonalNumbersFromUserWithOptions(request, runtime);
}

/**
 * @param request RemovePhoneNumberFromSkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePhoneNumberFromSkillGroupsResponse
 */
RemovePhoneNumberFromSkillGroupsResponse Client::removePhoneNumberFromSkillGroupsWithOptions(const RemovePhoneNumberFromSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.skillGroupIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePhoneNumberFromSkillGroups"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePhoneNumberFromSkillGroupsResponse>();
}

/**
 * @param request RemovePhoneNumberFromSkillGroupsRequest
 * @return RemovePhoneNumberFromSkillGroupsResponse
 */
RemovePhoneNumberFromSkillGroupsResponse Client::removePhoneNumberFromSkillGroups(const RemovePhoneNumberFromSkillGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePhoneNumberFromSkillGroupsWithOptions(request, runtime);
}

/**
 * @param request RemovePhoneNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePhoneNumbersResponse
 */
RemovePhoneNumbersResponse Client::removePhoneNumbersWithOptions(const RemovePhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePhoneNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePhoneNumbersResponse>();
}

/**
 * @param request RemovePhoneNumbersRequest
 * @return RemovePhoneNumbersResponse
 */
RemovePhoneNumbersResponse Client::removePhoneNumbers(const RemovePhoneNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePhoneNumbersWithOptions(request, runtime);
}

/**
 * @param request RemovePhoneNumbersFromSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePhoneNumbersFromSkillGroupResponse
 */
RemovePhoneNumbersFromSkillGroupResponse Client::removePhoneNumbersFromSkillGroupWithOptions(const RemovePhoneNumbersFromSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.numberList();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePhoneNumbersFromSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePhoneNumbersFromSkillGroupResponse>();
}

/**
 * @param request RemovePhoneNumbersFromSkillGroupRequest
 * @return RemovePhoneNumbersFromSkillGroupResponse
 */
RemovePhoneNumbersFromSkillGroupResponse Client::removePhoneNumbersFromSkillGroup(const RemovePhoneNumbersFromSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePhoneNumbersFromSkillGroupWithOptions(request, runtime);
}

/**
 * @param request RemoveSkillGroupsFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSkillGroupsFromUserResponse
 */
RemoveSkillGroupsFromUserResponse Client::removeSkillGroupsFromUserWithOptions(const RemoveSkillGroupsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.skillGroupIdList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveSkillGroupsFromUser"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveSkillGroupsFromUserResponse>();
}

/**
 * @param request RemoveSkillGroupsFromUserRequest
 * @return RemoveSkillGroupsFromUserResponse
 */
RemoveSkillGroupsFromUserResponse Client::removeSkillGroupsFromUser(const RemoveSkillGroupsFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeSkillGroupsFromUserWithOptions(request, runtime);
}

/**
 * @param request RemoveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsersWithOptions(const RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.filePath();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNotificationEmail()) {
    query["NotificationEmail"] = request.notificationEmail();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.userIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUsers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUsersResponse>();
}

/**
 * @param request RemoveUsersRequest
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsers(const RemoveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersWithOptions(request, runtime);
}

/**
 * @param request RemoveUsersFromSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersFromSkillGroupResponse
 */
RemoveUsersFromSkillGroupResponse Client::removeUsersFromSkillGroupWithOptions(const RemoveUsersFromSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.userIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUsersFromSkillGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUsersFromSkillGroupResponse>();
}

/**
 * @param request RemoveUsersFromSkillGroupRequest
 * @return RemoveUsersFromSkillGroupResponse
 */
RemoveUsersFromSkillGroupResponse Client::removeUsersFromSkillGroup(const RemoveUsersFromSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersFromSkillGroupWithOptions(request, runtime);
}

/**
 * @param request ResetAgentStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAgentStateResponse
 */
ResetAgentStateResponse Client::resetAgentStateWithOptions(const ResetAgentStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAgentState"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAgentStateResponse>();
}

/**
 * @param request ResetAgentStateRequest
 * @return ResetAgentStateResponse
 */
ResetAgentStateResponse Client::resetAgentState(const ResetAgentStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAgentStateWithOptions(request, runtime);
}

/**
 * @param request ResetUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPasswordWithOptions(const ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetUserPassword"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetUserPasswordResponse>();
}

/**
 * @param request ResetUserPasswordRequest
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPassword(const ResetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetUserPasswordWithOptions(request, runtime);
}

/**
 * @summary 录音解冻
 *
 * @param request RestoreArchivedRecordingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreArchivedRecordingsResponse
 */
RestoreArchivedRecordingsResponse Client::restoreArchivedRecordingsWithOptions(const RestoreArchivedRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.contactIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestoreArchivedRecordings"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreArchivedRecordingsResponse>();
}

/**
 * @summary 录音解冻
 *
 * @param request RestoreArchivedRecordingsRequest
 * @return RestoreArchivedRecordingsResponse
 */
RestoreArchivedRecordingsResponse Client::restoreArchivedRecordings(const RestoreArchivedRecordingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreArchivedRecordingsWithOptions(request, runtime);
}

/**
 * @param request ResubmitTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResubmitTicketResponse
 */
ResubmitTicketResponse Client::resubmitTicketWithOptions(const ResubmitTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResubmitTicket"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResubmitTicketResponse>();
}

/**
 * @param request ResubmitTicketRequest
 * @return ResubmitTicketResponse
 */
ResubmitTicketResponse Client::resubmitTicket(const ResubmitTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resubmitTicketWithOptions(request, runtime);
}

/**
 * @summary 恢复预测式外呼活动
 *
 * @param request ResumeCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeCampaignResponse
 */
ResumeCampaignResponse Client::resumeCampaignWithOptions(const ResumeCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.campaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeCampaign"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeCampaignResponse>();
}

/**
 * @summary 恢复预测式外呼活动
 *
 * @param request ResumeCampaignRequest
 * @return ResumeCampaignResponse
 */
ResumeCampaignResponse Client::resumeCampaign(const ResumeCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeCampaignWithOptions(request, runtime);
}

/**
 * @param request RetrieveCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetrieveCallResponse
 */
RetrieveCallResponse Client::retrieveCallWithOptions(const RetrieveCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetrieveCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetrieveCallResponse>();
}

/**
 * @param request RetrieveCallRequest
 * @return RetrieveCallResponse
 */
RetrieveCallResponse Client::retrieveCall(const RetrieveCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retrieveCallWithOptions(request, runtime);
}

/**
 * @param request SaveDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveDocumentResponse
 */
SaveDocumentResponse Client::saveDocumentWithOptions(const SaveDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDocumentId()) {
    body["DocumentId"] = request.documentId();
  }

  if (!!request.hasDocumentJson()) {
    body["DocumentJson"] = request.documentJson();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SaveDocument"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveDocumentResponse>();
}

/**
 * @param request SaveDocumentRequest
 * @return SaveDocumentResponse
 */
SaveDocumentResponse Client::saveDocument(const SaveDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveDocumentWithOptions(request, runtime);
}

/**
 * @param request SaveRTCStatsV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveRTCStatsV2Response
 */
SaveRTCStatsV2Response Client::saveRTCStatsV2WithOptions(const SaveRTCStatsV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasGeneralInfo()) {
    query["GeneralInfo"] = request.generalInfo();
  }

  if (!!request.hasGoogAddress()) {
    query["GoogAddress"] = request.googAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasReceiverReport()) {
    query["ReceiverReport"] = request.receiverReport();
  }

  if (!!request.hasSenderReport()) {
    query["SenderReport"] = request.senderReport();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveRTCStatsV2"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveRTCStatsV2Response>();
}

/**
 * @param request SaveRTCStatsV2Request
 * @return SaveRTCStatsV2Response
 */
SaveRTCStatsV2Response Client::saveRTCStatsV2(const SaveRTCStatsV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveRTCStatsV2WithOptions(request, runtime);
}

/**
 * @param request SaveTerminalLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTerminalLogResponse
 */
SaveTerminalLogResponse Client::saveTerminalLogWithOptions(const SaveTerminalLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.dataType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasMethodName()) {
    query["MethodName"] = request.methodName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUniqueRequestId()) {
    query["UniqueRequestId"] = request.uniqueRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveTerminalLog"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveTerminalLogResponse>();
}

/**
 * @param request SaveTerminalLogRequest
 * @return SaveTerminalLogResponse
 */
SaveTerminalLogResponse Client::saveTerminalLog(const SaveTerminalLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTerminalLogWithOptions(request, runtime);
}

/**
 * @param request SaveWebRTCStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveWebRTCStatsResponse
 */
SaveWebRTCStatsResponse Client::saveWebRTCStatsWithOptions(const SaveWebRTCStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasGeneralInfo()) {
    query["GeneralInfo"] = request.generalInfo();
  }

  if (!!request.hasGoogAddress()) {
    query["GoogAddress"] = request.googAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasReceiverReport()) {
    query["ReceiverReport"] = request.receiverReport();
  }

  if (!!request.hasSenderReport()) {
    query["SenderReport"] = request.senderReport();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveWebRTCStats"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveWebRTCStatsResponse>();
}

/**
 * @param request SaveWebRTCStatsRequest
 * @return SaveWebRTCStatsResponse
 */
SaveWebRTCStatsResponse Client::saveWebRTCStats(const SaveWebRTCStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveWebRTCStatsWithOptions(request, runtime);
}

/**
 * @param request SaveWebRtcInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveWebRtcInfoResponse
 */
SaveWebRtcInfoResponse Client::saveWebRtcInfoWithOptions(const SaveWebRtcInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.contentType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveWebRtcInfo"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveWebRtcInfoResponse>();
}

/**
 * @param request SaveWebRtcInfoRequest
 * @return SaveWebRtcInfoResponse
 */
SaveWebRtcInfoResponse Client::saveWebRtcInfo(const SaveWebRtcInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveWebRtcInfoWithOptions(request, runtime);
}

/**
 * @param request SendDtmfSignalingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendDtmfSignalingResponse
 */
SendDtmfSignalingResponse Client::sendDtmfSignalingWithOptions(const SendDtmfSignalingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasDtmf()) {
    query["Dtmf"] = request.dtmf();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendDtmfSignaling"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendDtmfSignalingResponse>();
}

/**
 * @param request SendDtmfSignalingRequest
 * @return SendDtmfSignalingResponse
 */
SendDtmfSignalingResponse Client::sendDtmfSignaling(const SendDtmfSignalingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendDtmfSignalingWithOptions(request, runtime);
}

/**
 * @param request SignInGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SignInGroupResponse
 */
SignInGroupResponse Client::signInGroupWithOptions(const SignInGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditivity()) {
    query["Additivity"] = request.additivity();
  }

  if (!!request.hasChatDeviceId()) {
    query["ChatDeviceId"] = request.chatDeviceId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSignedSkillGroupIdList()) {
    query["SignedSkillGroupIdList"] = request.signedSkillGroupIdList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SignInGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SignInGroupResponse>();
}

/**
 * @param request SignInGroupRequest
 * @return SignInGroupResponse
 */
SignInGroupResponse Client::signInGroup(const SignInGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return signInGroupWithOptions(request, runtime);
}

/**
 * @param request SignOutGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SignOutGroupResponse
 */
SignOutGroupResponse Client::signOutGroupWithOptions(const SignOutGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SignOutGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SignOutGroupResponse>();
}

/**
 * @param request SignOutGroupRequest
 * @return SignOutGroupResponse
 */
SignOutGroupResponse Client::signOutGroup(const SignOutGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return signOutGroupWithOptions(request, runtime);
}

/**
 * @param request StartBack2BackCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartBack2BackCallResponse
 */
StartBack2BackCallResponse Client::startBack2BackCallWithOptions(const StartBack2BackCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalBroker()) {
    query["AdditionalBroker"] = request.additionalBroker();
  }

  if (!!request.hasBroker()) {
    query["Broker"] = request.broker();
  }

  if (!!request.hasCallee()) {
    query["Callee"] = request.callee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartBack2BackCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartBack2BackCallResponse>();
}

/**
 * @param request StartBack2BackCallRequest
 * @return StartBack2BackCallResponse
 */
StartBack2BackCallResponse Client::startBack2BackCall(const StartBack2BackCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startBack2BackCallWithOptions(request, runtime);
}

/**
 * @param tmpReq StartChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartChatResponse
 */
StartChatResponse Client::startChatWithOptions(const StartChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartChatShrinkRequest request = StartChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserList()) {
    request.setUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userList(), "UserList", "json"));
  }

  json query = {};
  if (!!request.hasAccessChannelId()) {
    query["AccessChannelId"] = request.accessChannelId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  if (!!request.hasUserListShrink()) {
    query["UserList"] = request.userListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartChat"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartChatResponse>();
}

/**
 * @param request StartChatRequest
 * @return StartChatResponse
 */
StartChatResponse Client::startChat(const StartChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startChatWithOptions(request, runtime);
}

/**
 * @param request StartConferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartConferenceResponse
 */
StartConferenceResponse Client::startConferenceWithOptions(const StartConferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasParticipantListJson()) {
    query["ParticipantListJson"] = request.participantListJson();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartConference"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartConferenceResponse>();
}

/**
 * @param request StartConferenceRequest
 * @return StartConferenceResponse
 */
StartConferenceResponse Client::startConference(const StartConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startConferenceWithOptions(request, runtime);
}

/**
 * @param request StartEditContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartEditContactFlowResponse
 */
StartEditContactFlowResponse Client::startEditContactFlowWithOptions(const StartEditContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartEditContactFlow"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartEditContactFlowResponse>();
}

/**
 * @param request StartEditContactFlowRequest
 * @return StartEditContactFlowResponse
 */
StartEditContactFlowResponse Client::startEditContactFlow(const StartEditContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startEditContactFlowWithOptions(request, runtime);
}

/**
 * @param request StartPredictiveCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPredictiveCallResponse
 */
StartPredictiveCallResponse Client::startPredictiveCallWithOptions(const StartPredictiveCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.callee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasContactFlowVariables()) {
    query["ContactFlowVariables"] = request.contactFlowVariables();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMaskedCallee()) {
    query["MaskedCallee"] = request.maskedCallee();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.skillGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.timeoutSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartPredictiveCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartPredictiveCallResponse>();
}

/**
 * @param request StartPredictiveCallRequest
 * @return StartPredictiveCallResponse
 */
StartPredictiveCallResponse Client::startPredictiveCall(const StartPredictiveCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startPredictiveCallWithOptions(request, runtime);
}

/**
 * @summary 发起隐私呼叫
 *
 * @param request StartPrivacyCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPrivacyCallResponse
 */
StartPrivacyCallResponse Client::startPrivacyCallWithOptions(const StartPrivacyCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCallee()) {
    query["Callee"] = request.callee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.caller();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartPrivacyCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartPrivacyCallResponse>();
}

/**
 * @summary 发起隐私呼叫
 *
 * @param request StartPrivacyCallRequest
 * @return StartPrivacyCallResponse
 */
StartPrivacyCallResponse Client::startPrivacyCall(const StartPrivacyCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startPrivacyCallWithOptions(request, runtime);
}

/**
 * @summary 提交预测式外呼活动
 *
 * @param request SubmitCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCampaignResponse
 */
SubmitCampaignResponse Client::submitCampaignWithOptions(const SubmitCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.campaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitCampaign"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitCampaignResponse>();
}

/**
 * @summary 提交预测式外呼活动
 *
 * @param request SubmitCampaignRequest
 * @return SubmitCampaignResponse
 */
SubmitCampaignResponse Client::submitCampaign(const SubmitCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCampaignWithOptions(request, runtime);
}

/**
 * @param request SwitchToConferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchToConferenceResponse
 */
SwitchToConferenceResponse Client::switchToConferenceWithOptions(const SwitchToConferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchToConference"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchToConferenceResponse>();
}

/**
 * @param request SwitchToConferenceRequest
 * @return SwitchToConferenceResponse
 */
SwitchToConferenceResponse Client::switchToConference(const SwitchToConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchToConferenceWithOptions(request, runtime);
}

/**
 * @param request TakeBreakRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TakeBreakResponse
 */
TakeBreakResponse Client::takeBreakWithOptions(const TakeBreakRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TakeBreak"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TakeBreakResponse>();
}

/**
 * @param request TakeBreakRequest
 * @return TakeBreakResponse
 */
TakeBreakResponse Client::takeBreak(const TakeBreakRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return takeBreakWithOptions(request, runtime);
}

/**
 * @param request TerminateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateTicketResponse
 */
TerminateTicketResponse Client::terminateTicketWithOptions(const TerminateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TerminateTicket"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateTicketResponse>();
}

/**
 * @param request TerminateTicketRequest
 * @return TerminateTicketResponse
 */
TerminateTicketResponse Client::terminateTicket(const TerminateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return terminateTicketWithOptions(request, runtime);
}

/**
 * @param request TransferTicketTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferTicketTaskResponse
 */
TransferTicketTaskResponse Client::transferTicketTaskWithOptions(const TransferTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignee()) {
    query["Assignee"] = request.assignee();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferTicketTask"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferTicketTaskResponse>();
}

/**
 * @param request TransferTicketTaskRequest
 * @return TransferTicketTaskResponse
 */
TransferTicketTaskResponse Client::transferTicketTask(const TransferTicketTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferTicketTaskWithOptions(request, runtime);
}

/**
 * @param request UnmuteCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnmuteCallResponse
 */
UnmuteCallResponse Client::unmuteCallWithOptions(const UnmuteCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnmuteCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnmuteCallResponse>();
}

/**
 * @param request UnmuteCallRequest
 * @return UnmuteCallResponse
 */
UnmuteCallResponse Client::unmuteCall(const UnmuteCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unmuteCallWithOptions(request, runtime);
}

/**
 * @summary 删除注册设备
 *
 * @param request UnregisterDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnregisterDeviceResponse
 */
UnregisterDeviceResponse Client::unregisterDeviceWithOptions(const UnregisterDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnregisterDevice"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnregisterDeviceResponse>();
}

/**
 * @summary 删除注册设备
 *
 * @param request UnregisterDeviceRequest
 * @return UnregisterDeviceResponse
 */
UnregisterDeviceResponse Client::unregisterDevice(const UnregisterDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unregisterDeviceWithOptions(request, runtime);
}

/**
 * @param request UpdateCallSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCallSummaryResponse
 */
UpdateCallSummaryResponse Client::updateCallSummaryWithOptions(const UpdateCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContext()) {
    query["Context"] = request.context();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCallSummary"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCallSummaryResponse>();
}

/**
 * @param request UpdateCallSummaryRequest
 * @return UpdateCallSummaryResponse
 */
UpdateCallSummaryResponse Client::updateCallSummary(const UpdateCallSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCallSummaryWithOptions(request, runtime);
}

/**
 * @summary Update campaign
 *
 * @param request UpdateCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCampaignResponse
 */
UpdateCampaignResponse Client::updateCampaignWithOptions(const UpdateCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallableTime()) {
    query["CallableTime"] = request.callableTime();
  }

  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.campaignId();
  }

  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.contactFlowId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStrategyParameters()) {
    query["StrategyParameters"] = request.strategyParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCampaign"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCampaignResponse>();
}

/**
 * @summary Update campaign
 *
 * @param request UpdateCampaignRequest
 * @return UpdateCampaignResponse
 */
UpdateCampaignResponse Client::updateCampaign(const UpdateCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCampaignWithOptions(request, runtime);
}

/**
 * @param request UpdateChatRoutingProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChatRoutingProfileResponse
 */
UpdateChatRoutingProfileResponse Client::updateChatRoutingProfileWithOptions(const UpdateChatRoutingProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRoutingProfiles()) {
    query["RoutingProfiles"] = request.routingProfiles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateChatRoutingProfile"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChatRoutingProfileResponse>();
}

/**
 * @param request UpdateChatRoutingProfileRequest
 * @return UpdateChatRoutingProfileResponse
 */
UpdateChatRoutingProfileResponse Client::updateChatRoutingProfile(const UpdateChatRoutingProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateChatRoutingProfileWithOptions(request, runtime);
}

/**
 * @param request UpdateConfigItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigItemsResponse
 */
UpdateConfigItemsResponse Client::updateConfigItemsWithOptions(const UpdateConfigItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigItems()) {
    query["ConfigItems"] = request.configItems();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.objectId();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateConfigItems"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigItemsResponse>();
}

/**
 * @param request UpdateConfigItemsRequest
 * @return UpdateConfigItemsResponse
 */
UpdateConfigItemsResponse Client::updateConfigItems(const UpdateConfigItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConfigItemsWithOptions(request, runtime);
}

/**
 * @param tmpReq UpdateSchemaPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSchemaPropertyResponse
 */
UpdateSchemaPropertyResponse Client::updateSchemaPropertyWithOptions(const UpdateSchemaPropertyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSchemaPropertyShrinkRequest request = UpdateSchemaPropertyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProperty()) {
    request.setPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.property(), "Property", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPropertyShrink()) {
    body["Property"] = request.propertyShrink();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.requestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.schemaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSchemaProperty"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSchemaPropertyResponse>();
}

/**
 * @param request UpdateSchemaPropertyRequest
 * @return UpdateSchemaPropertyResponse
 */
UpdateSchemaPropertyResponse Client::updateSchemaProperty(const UpdateSchemaPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSchemaPropertyWithOptions(request, runtime);
}

/**
 * @param request UpdateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTicketResponse
 */
UpdateTicketResponse Client::updateTicketWithOptions(const UpdateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContext()) {
    query["Context"] = request.context();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.customerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTicket"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTicketResponse>();
}

/**
 * @param request UpdateTicketRequest
 * @return UpdateTicketResponse
 */
UpdateTicketResponse Client::updateTicket(const UpdateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTicketWithOptions(request, runtime);
}

/**
 * @param request WithdrawTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawTicketResponse
 */
WithdrawTicketResponse Client::withdrawTicketWithOptions(const WithdrawTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WithdrawTicket"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WithdrawTicketResponse>();
}

/**
 * @param request WithdrawTicketRequest
 * @return WithdrawTicketResponse
 */
WithdrawTicketResponse Client::withdrawTicket(const WithdrawTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return withdrawTicketWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CCC20200701