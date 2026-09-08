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
 * @summary Invoke AbortCampaign to stop the predictive outbound calling Activity corresponding to the specified Activity ID under the specified instance.
 *
 * @param request AbortCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortCampaignResponse
 */
AbortCampaignResponse Client::abortCampaignWithOptions(const AbortCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke AbortCampaign to stop the predictive outbound calling Activity corresponding to the specified Activity ID under the specified instance.
 *
 * @param request AbortCampaignRequest
 * @return AbortCampaignResponse
 */
AbortCampaignResponse Client::abortCampaign(const AbortCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abortCampaignWithOptions(request, runtime);
}

/**
 * @summary Call this operation to accept a chat.
 *
 * @param request AcceptChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptChatResponse
 */
AcceptChatResponse Client::acceptChatWithOptions(const AcceptChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Call this operation to accept a chat.
 *
 * @param request AcceptChatRequest
 * @return AcceptChatResponse
 */
AcceptChatResponse Client::acceptChat(const AcceptChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptChatWithOptions(request, runtime);
}

/**
 * @summary Adds a blacklist tag to a specified phone number. You can use this feature with your Interactive Voice Response (IVR) settings to block frequent harassing calls.
 *
 * @param request AddBlacklistCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddBlacklistCallTaggingResponse
 */
AddBlacklistCallTaggingResponse Client::addBlacklistCallTaggingWithOptions(const AddBlacklistCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
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
 * @summary Adds a blacklist tag to a specified phone number. You can use this feature with your Interactive Voice Response (IVR) settings to block frequent harassing calls.
 *
 * @param request AddBlacklistCallTaggingRequest
 * @return AddBlacklistCallTaggingResponse
 */
AddBlacklistCallTaggingResponse Client::addBlacklistCallTagging(const AddBlacklistCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addBlacklistCallTaggingWithOptions(request, runtime);
}

/**
 * @summary Invoke AddCases to add an outbound call list to a predictive dialing activity identified by a specified ID under a specified instance.
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
    request.setCaseListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCaseList(), "CaseList", "json"));
  }

  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasCaseListShrink()) {
    query["CaseList"] = request.getCaseListShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke AddCases to add an outbound call list to a predictive dialing activity identified by a specified ID under a specified instance.
 *
 * @param request AddCasesRequest
 * @return AddCasesResponse
 */
AddCasesResponse Client::addCases(const AddCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCasesWithOptions(request, runtime);
}

/**
 * @summary You can use the AddFeedback API to evaluate and rate AI features.
 *
 * @param request AddFeedbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFeedbackResponse
 */
AddFeedbackResponse Client::addFeedbackWithOptions(const AddFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFeedback()) {
    query["Feedback"] = request.getFeedback();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRating()) {
    query["Rating"] = request.getRating();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
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
 * @summary You can use the AddFeedback API to evaluate and rate AI features.
 *
 * @param request AddFeedbackRequest
 * @return AddFeedbackResponse
 */
AddFeedbackResponse Client::addFeedback(const AddFeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFeedbackWithOptions(request, runtime);
}

/**
 * @summary Adds one or more phone numbers to a skill group by calling AddNumbersToSkillGroup.
 *
 * @param request AddNumbersToSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddNumbersToSkillGroupResponse
 */
AddNumbersToSkillGroupResponse Client::addNumbersToSkillGroupWithOptions(const AddNumbersToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstNumberGroupIdList()) {
    query["InstNumberGroupIdList"] = request.getInstNumberGroupIdList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary Adds one or more phone numbers to a skill group by calling AddNumbersToSkillGroup.
 *
 * @param request AddNumbersToSkillGroupRequest
 * @return AddNumbersToSkillGroupResponse
 */
AddNumbersToSkillGroupResponse Client::addNumbersToSkillGroup(const AddNumbersToSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addNumbersToSkillGroupWithOptions(request, runtime);
}

/**
 * @summary You can invoke AddPersonalNumbersToUser to add one or more personal outbound numbers to a specified agent under a specified instance.
 *
 * @param request AddPersonalNumbersToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPersonalNumbersToUserResponse
 */
AddPersonalNumbersToUserResponse Client::addPersonalNumbersToUserWithOptions(const AddPersonalNumbersToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke AddPersonalNumbersToUser to add one or more personal outbound numbers to a specified agent under a specified instance.
 *
 * @param request AddPersonalNumbersToUserRequest
 * @return AddPersonalNumbersToUserResponse
 */
AddPersonalNumbersToUserResponse Client::addPersonalNumbersToUser(const AddPersonalNumbersToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPersonalNumbersToUserWithOptions(request, runtime);
}

/**
 * @summary You can invoke AddPhoneNumberToSkillGroups to associate a phone number with one or more skill groups under a specified instance.
 *
 * @param request AddPhoneNumberToSkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPhoneNumberToSkillGroupsResponse
 */
AddPhoneNumberToSkillGroupsResponse Client::addPhoneNumberToSkillGroupsWithOptions(const AddPhoneNumberToSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.getSkillGroupIdList();
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
 * @summary You can invoke AddPhoneNumberToSkillGroups to associate a phone number with one or more skill groups under a specified instance.
 *
 * @param request AddPhoneNumberToSkillGroupsRequest
 * @return AddPhoneNumberToSkillGroupsResponse
 */
AddPhoneNumberToSkillGroupsResponse Client::addPhoneNumberToSkillGroups(const AddPhoneNumberToSkillGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPhoneNumberToSkillGroupsWithOptions(request, runtime);
}

/**
 * @summary You can invoke AddPhoneNumbers to add one or more phone numbers to a specified instance.
 *
 * @param request AddPhoneNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPhoneNumbersResponse
 */
AddPhoneNumbersResponse Client::addPhoneNumbersWithOptions(const AddPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberGroupId()) {
    query["NumberGroupId"] = request.getNumberGroupId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.getUsage();
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
 * @summary You can invoke AddPhoneNumbers to add one or more phone numbers to a specified instance.
 *
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
    request.setPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProperty(), "Property", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPropertyShrink()) {
    body["Property"] = request.getPropertyShrink();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
 * @summary You can invoke AddSkillGroupsToUser to add one or more skill groups to a specified agent under a specified instance.
 *
 * @param request AddSkillGroupsToUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSkillGroupsToUserResponse
 */
AddSkillGroupsToUserResponse Client::addSkillGroupsToUserWithOptions(const AddSkillGroupsToUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.getSkillLevelList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke AddSkillGroupsToUser to add one or more skill groups to a specified agent under a specified instance.
 *
 * @param request AddSkillGroupsToUserRequest
 * @return AddSkillGroupsToUserResponse
 */
AddSkillGroupsToUserResponse Client::addSkillGroupsToUser(const AddSkillGroupsToUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSkillGroupsToUserWithOptions(request, runtime);
}

/**
 * @summary Use AddTicketTask to add a signature and assign an assignee.
 *
 * @param request AddTicketTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTicketTaskResponse
 */
AddTicketTaskResponse Client::addTicketTaskWithOptions(const AddTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignee()) {
    query["Assignee"] = request.getAssignee();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPosition()) {
    query["Position"] = request.getPosition();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary Use AddTicketTask to add a signature and assign an assignee.
 *
 * @param request AddTicketTaskRequest
 * @return AddTicketTaskResponse
 */
AddTicketTaskResponse Client::addTicketTask(const AddTicketTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTicketTaskWithOptions(request, runtime);
}

/**
 * @summary You can invoke AddUsersToSkillGroup to add one or more agents to the same skill group.
 *
 * @param request AddUsersToSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUsersToSkillGroupResponse
 */
AddUsersToSkillGroupResponse Client::addUsersToSkillGroupWithOptions(const AddUsersToSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasUserSkillLevelList()) {
    query["UserSkillLevelList"] = request.getUserSkillLevelList();
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
 * @summary You can invoke AddUsersToSkillGroup to add one or more agents to the same skill group.
 *
 * @param request AddUsersToSkillGroupRequest
 * @return AddUsersToSkillGroupResponse
 */
AddUsersToSkillGroupResponse Client::addUsersToSkillGroup(const AddUsersToSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUsersToSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Analyze the specified text-based conversation content and extract summary-related information, such as the title, keywords, summary, and other specified details.
 *
 * @description This API can be used for both online chat sessions and voice sessions. When used for voice sessions, the real-time speech-to-text transcription feature must be enabled.
 *
 * @param request AnalyzeConversationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnalyzeConversationResponse
 */
AnalyzeConversationResponse Client::analyzeConversationWithOptions(const AnalyzeConversationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasFieldListJson()) {
    query["FieldListJson"] = request.getFieldListJson();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskListJson()) {
    query["TaskListJson"] = request.getTaskListJson();
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
 * @summary Analyze the specified text-based conversation content and extract summary-related information, such as the title, keywords, summary, and other specified details.
 *
 * @description This API can be used for both online chat sessions and voice sessions. When used for voice sessions, the real-time speech-to-text transcription feature must be enabled.
 *
 * @param request AnalyzeConversationRequest
 * @return AnalyzeConversationResponse
 */
AnalyzeConversationResponse Client::analyzeConversation(const AnalyzeConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return analyzeConversationWithOptions(request, runtime);
}

/**
 * @summary You can invoke AnswerCall to answer the call associated with a specified call ID under a specified instance.
 *
 * @param request AnswerCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AnswerCallResponse
 */
AnswerCallResponse Client::answerCallWithOptions(const AnswerCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke AnswerCall to answer the call associated with a specified call ID under a specified instance.
 *
 * @param request AnswerCallRequest
 * @return AnswerCallResponse
 */
AnswerCallResponse Client::answerCall(const AnswerCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return answerCallWithOptions(request, runtime);
}

/**
 * @summary Adds cases to a predictive campaign in a specified instance.
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
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
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
 * @summary Adds cases to a predictive campaign in a specified instance.
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
 * @summary Call AssignUsers to import one or more RAM users into a specified instance. After the import, the RAM users become agents in the instance.
 *
 * @description Accounts with RAM permissions can view all RAM users under an Alibaba Cloud account in the RAM console. You can access the RAM console at https\\://ram.console.aliyun.com/users.
 *
 * @param request AssignUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignUsersResponse
 */
AssignUsersResponse Client::assignUsersWithOptions(const AssignUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsync()) {
    query["Async"] = request.getAsync();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRamIdList()) {
    query["RamIdList"] = request.getRamIdList();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.getSkillLevelList();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.getWorkMode();
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
 * @summary Call AssignUsers to import one or more RAM users into a specified instance. After the import, the RAM users become agents in the instance.
 *
 * @description Accounts with RAM permissions can view all RAM users under an Alibaba Cloud account in the RAM console. You can access the RAM console at https\\://ram.console.aliyun.com/users.
 *
 * @param request AssignUsersRequest
 * @return AssignUsersResponse
 */
AssignUsersResponse Client::assignUsers(const AssignUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignUsersWithOptions(request, runtime);
}

/**
 * @summary You can invoke BargeInCall to forcibly insert into an ongoing call associated with a specified call ID under a specified instance. After the forced insertion succeeds, the original two-party call becomes a three-party conference call.
 *
 * @param request BargeInCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BargeInCallResponse
 */
BargeInCallResponse Client::bargeInCallWithOptions(const BargeInCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBargedUserId()) {
    query["BargedUserId"] = request.getBargedUserId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke BargeInCall to forcibly insert into an ongoing call associated with a specified call ID under a specified instance. After the forced insertion succeeds, the original two-party call becomes a three-party conference call.
 *
 * @param request BargeInCallRequest
 * @return BargeInCallResponse
 */
BargeInCallResponse Client::bargeInCall(const BargeInCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bargeInCallWithOptions(request, runtime);
}

/**
 * @summary Directly transfer a call to another agent, a skill group queue, or an external number. Direct transfer is also known as blind transfer or single-step transfer.
 *
 * @param request BlindTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BlindTransferResponse
 */
BlindTransferResponse Client::blindTransferWithOptions(const BlindTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallPriority()) {
    query["CallPriority"] = request.getCallPriority();
  }

  if (!!request.hasContactFlowVariables()) {
    query["ContactFlowVariables"] = request.getContactFlowVariables();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasQueuingOverflowThreshold()) {
    query["QueuingOverflowThreshold"] = request.getQueuingOverflowThreshold();
  }

  if (!!request.hasQueuingTimeoutSeconds()) {
    query["QueuingTimeoutSeconds"] = request.getQueuingTimeoutSeconds();
  }

  if (!!request.hasRoutingType()) {
    query["RoutingType"] = request.getRoutingType();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasStrategyName()) {
    query["StrategyName"] = request.getStrategyName();
  }

  if (!!request.hasStrategyParams()) {
    query["StrategyParams"] = request.getStrategyParams();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasTransferee()) {
    query["Transferee"] = request.getTransferee();
  }

  if (!!request.hasTransfereeType()) {
    query["TransfereeType"] = request.getTransfereeType();
  }

  if (!!request.hasTransferor()) {
    query["Transferor"] = request.getTransferor();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Directly transfer a call to another agent, a skill group queue, or an external number. Direct transfer is also known as blind transfer or single-step transfer.
 *
 * @param request BlindTransferRequest
 * @return BlindTransferResponse
 */
BlindTransferResponse Client::blindTransfer(const BlindTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return blindTransferWithOptions(request, runtime);
}

/**
 * @summary BridgeRtcCall
 *
 * @param request BridgeRtcCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BridgeRtcCallResponse
 */
BridgeRtcCallResponse Client::bridgeRtcCallWithOptions(const BridgeRtcCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.getCallee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasServiceProvider()) {
    query["ServiceProvider"] = request.getServiceProvider();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasVideoEnabled()) {
    query["VideoEnabled"] = request.getVideoEnabled();
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
 * @summary BridgeRtcCall
 *
 * @param request BridgeRtcCallRequest
 * @return BridgeRtcCallResponse
 */
BridgeRtcCallResponse Client::bridgeRtcCall(const BridgeRtcCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bridgeRtcCallWithOptions(request, runtime);
}

/**
 * @summary You can invoke the CancelAttendedTransfer API to cancel an attended transfer. You can call this API at any time after initiating the attended transfer and before completing it, even if the transferee has already answered the call.
 *
 * @param request CancelAttendedTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAttendedTransferResponse
 */
CancelAttendedTransferResponse Client::cancelAttendedTransferWithOptions(const CancelAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke the CancelAttendedTransfer API to cancel an attended transfer. You can call this API at any time after initiating the attended transfer and before completing it, even if the transferee has already answered the call.
 *
 * @param request CancelAttendedTransferRequest
 * @return CancelAttendedTransferResponse
 */
CancelAttendedTransferResponse Client::cancelAttendedTransfer(const CancelAttendedTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAttendedTransferWithOptions(request, runtime);
}

/**
 * @summary Changes an agent\\"s status to invisible. This is equivalent to the outbound-only mode.
 *
 * @param request ChangeVisibilityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeVisibilityResponse
 */
ChangeVisibilityResponse Client::changeVisibilityWithOptions(const ChangeVisibilityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInvisible()) {
    query["Invisible"] = request.getInvisible();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Changes an agent\\"s status to invisible. This is equivalent to the outbound-only mode.
 *
 * @param request ChangeVisibilityRequest
 * @return ChangeVisibilityResponse
 */
ChangeVisibilityResponse Client::changeVisibility(const ChangeVisibilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeVisibilityWithOptions(request, runtime);
}

/**
 * @summary You can invoke ChangeWorkMode to change the agent\\"s work mode.
 *
 * @param request ChangeWorkModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeWorkModeResponse
 */
ChangeWorkModeResponse Client::changeWorkModeWithOptions(const ChangeWorkModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasSignedSkillGroupIdList()) {
    query["SignedSkillGroupIdList"] = request.getSignedSkillGroupIdList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.getWorkMode();
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
 * @summary You can invoke ChangeWorkMode to change the agent\\"s work mode.
 *
 * @param request ChangeWorkModeRequest
 * @return ChangeWorkModeResponse
 */
ChangeWorkModeResponse Client::changeWorkMode(const ChangeWorkModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeWorkModeWithOptions(request, runtime);
}

/**
 * @summary Call the `ClaimCall` API to assign a call to an agent.
 *
 * @param request ClaimCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClaimCallResponse
 */
ClaimCallResponse Client::claimCallWithOptions(const ClaimCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCandidateUserListJson()) {
    query["CandidateUserListJson"] = request.getCandidateUserListJson();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClaimCall"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClaimCallResponse>();
}

/**
 * @summary Call the `ClaimCall` API to assign a call to an agent.
 *
 * @param request ClaimCallRequest
 * @return ClaimCallResponse
 */
ClaimCallResponse Client::claimCall(const ClaimCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return claimCallWithOptions(request, runtime);
}

/**
 * @summary You can call ClaimChat to claim the chat for a specified Job ID in a specified instance.
 *
 * @param request ClaimChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClaimChatResponse
 */
ClaimChatResponse Client::claimChatWithOptions(const ClaimChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary You can call ClaimChat to claim the chat for a specified Job ID in a specified instance.
 *
 * @param request ClaimChatRequest
 * @return ClaimChatResponse
 */
ClaimChatResponse Client::claimChat(const ClaimChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return claimChatWithOptions(request, runtime);
}

/**
 * @summary You can invoke CoachCall to coach a specified agent in a specified call (identified by a call ID) under a specified instance. During the coaching session, the coached agent can hear the coach\\"s voice, but the customer cannot hear the coach\\"s voice.
 *
 * @param request CoachCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CoachCallResponse
 */
CoachCallResponse Client::coachCallWithOptions(const CoachCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoachedUserId()) {
    query["CoachedUserId"] = request.getCoachedUserId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke CoachCall to coach a specified agent in a specified call (identified by a call ID) under a specified instance. During the coaching session, the coached agent can hear the coach\\"s voice, but the customer cannot hear the coach\\"s voice.
 *
 * @param request CoachCallRequest
 * @return CoachCallResponse
 */
CoachCallResponse Client::coachCall(const CoachCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return coachCallWithOptions(request, runtime);
}

/**
 * @summary Commits a contact flow.
 *
 * @param request CommitContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommitContactFlowResponse
 */
CommitContactFlowResponse Client::commitContactFlowWithOptions(const CommitContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasDefinition()) {
    query["Definition"] = request.getDefinition();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDraftId()) {
    query["DraftId"] = request.getDraftId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Commits a contact flow.
 *
 * @param request CommitContactFlowRequest
 * @return CommitContactFlowResponse
 */
CommitContactFlowResponse Client::commitContactFlow(const CommitContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return commitContactFlowWithOptions(request, runtime);
}

/**
 * @summary You can invoke CompleteAttendedTransfer to complete a consultative transfer.
 *
 * @param request CompleteAttendedTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteAttendedTransferResponse
 */
CompleteAttendedTransferResponse Client::completeAttendedTransferWithOptions(const CompleteAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke CompleteAttendedTransfer to complete a consultative transfer.
 *
 * @param request CompleteAttendedTransferRequest
 * @return CompleteAttendedTransferResponse
 */
CompleteAttendedTransferResponse Client::completeAttendedTransfer(const CompleteAttendedTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return completeAttendedTransferWithOptions(request, runtime);
}

/**
 * @summary You can invoke CreateAudioFile to create an audio resource under a specified instance. The created audio resource can be used in the instance, such as selecting the audio file for playback during IVR.
 *
 * @param request CreateAudioFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAudioFileResponse
 */
CreateAudioFileResponse Client::createAudioFileWithOptions(const CreateAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioFileName()) {
    query["AudioFileName"] = request.getAudioFileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOssFileKey()) {
    query["OssFileKey"] = request.getOssFileKey();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.getUsage();
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
 * @summary You can invoke CreateAudioFile to create an audio resource under a specified instance. The created audio resource can be used in the instance, such as selecting the audio file for playback during IVR.
 *
 * @param request CreateAudioFileRequest
 * @return CreateAudioFileResponse
 */
CreateAudioFileResponse Client::createAudioFile(const CreateAudioFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAudioFileWithOptions(request, runtime);
}

/**
 * @summary Use the CreateCallSummary operation to create a call summary.
 *
 * @param request CreateCallSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCallSummaryResponse
 */
CreateCallSummaryResponse Client::createCallSummaryWithOptions(const CreateCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasContext()) {
    query["Context"] = request.getContext();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Use the CreateCallSummary operation to create a call summary.
 *
 * @param request CreateCallSummaryRequest
 * @return CreateCallSummaryResponse
 */
CreateCallSummaryResponse Client::createCallSummary(const CreateCallSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCallSummaryWithOptions(request, runtime);
}

/**
 * @summary You can invoke CreateCallTags to create multiple call tags under a specified instance.
 *
 * @param request CreateCallTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCallTagsResponse
 */
CreateCallTagsResponse Client::createCallTagsWithOptions(const CreateCallTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallTagNameList()) {
    query["CallTagNameList"] = request.getCallTagNameList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke CreateCallTags to create multiple call tags under a specified instance.
 *
 * @param request CreateCallTagsRequest
 * @return CreateCallTagsResponse
 */
CreateCallTagsResponse Client::createCallTags(const CreateCallTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCallTagsWithOptions(request, runtime);
}

/**
 * @summary You can invoke CreateCampaign to create a predictive outbound calling activity under a specified instance.
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
    request.setCaseListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCaseList(), "CaseList", "json"));
  }

  if (!!tmpReq.hasNumberList()) {
    request.setNumberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumberList(), "NumberList", "json"));
  }

  json query = {};
  if (!!request.hasCallableTime()) {
    query["CallableTime"] = request.getCallableTime();
  }

  if (!!request.hasCaseFileKey()) {
    query["CaseFileKey"] = request.getCaseFileKey();
  }

  if (!!request.hasCaseListShrink()) {
    query["CaseList"] = request.getCaseListShrink();
  }

  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasExecutingUntilTimeout()) {
    query["ExecutingUntilTimeout"] = request.getExecutingUntilTimeout();
  }

  if (!!request.hasFlashSmsParameters()) {
    query["FlashSmsParameters"] = request.getFlashSmsParameters();
  }

  if (!!request.hasInstGroupId()) {
    query["InstGroupId"] = request.getInstGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxAttemptCount()) {
    query["MaxAttemptCount"] = request.getMaxAttemptCount();
  }

  if (!!request.hasMinAttemptInterval()) {
    query["MinAttemptInterval"] = request.getMinAttemptInterval();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNumberListShrink()) {
    query["NumberList"] = request.getNumberListShrink();
  }

  if (!!request.hasQueueId()) {
    query["QueueId"] = request.getQueueId();
  }

  if (!!request.hasSimulation()) {
    query["Simulation"] = request.getSimulation();
  }

  if (!!request.hasSimulationParameters()) {
    query["SimulationParameters"] = request.getSimulationParameters();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStrategyParameters()) {
    query["StrategyParameters"] = request.getStrategyParameters();
  }

  if (!!request.hasStrategyType()) {
    query["StrategyType"] = request.getStrategyType();
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
 * @summary You can invoke CreateCampaign to create a predictive outbound calling activity under a specified instance.
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMimeType()) {
    body["MimeType"] = request.getMimeType();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
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
 * @summary Creates an IVR flow.
 *
 * @param request CreateContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContactFlowResponse
 */
CreateContactFlowResponse Client::createContactFlowWithOptions(const CreateContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefinition()) {
    query["Definition"] = request.getDefinition();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Creates an IVR flow.
 *
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
 * @summary You can invoke CreateCustomCallTagging to create one or more inbound number tags under a specified instance.
 *
 * @param request CreateCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomCallTaggingResponse
 */
CreateCustomCallTaggingResponse Client::createCustomCallTaggingWithOptions(const CreateCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomNumberList()) {
    query["CustomNumberList"] = request.getCustomNumberList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke CreateCustomCallTagging to create one or more inbound number tags under a specified instance.
 *
 * @param request CreateCustomCallTaggingRequest
 * @return CreateCustomCallTaggingResponse
 */
CreateCustomCallTaggingResponse Client::createCustomCallTagging(const CreateCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @summary Invoke CreateInstance to create a Cloud Contact Center instance.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdminRamIdList()) {
    query["AdminRamIdList"] = request.getAdminRamIdList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
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
 * @summary Invoke CreateInstance to create a Cloud Contact Center instance.
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
    request.setPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProperties(), "Properties", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPropertiesShrink()) {
    body["Properties"] = request.getPropertiesShrink();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
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
 * @summary You can call CreateSkillGroup to create a skill group under a specified instance.
 *
 * @param request CreateSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillGroupResponse
 */
CreateSkillGroupResponse Client::createSkillGroupWithOptions(const CreateSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
 * @summary You can call CreateSkillGroup to create a skill group under a specified instance.
 *
 * @param request CreateSkillGroupRequest
 * @return CreateSkillGroupResponse
 */
CreateSkillGroupResponse Client::createSkillGroup(const CreateSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Use CreateTicket to create a ticket.
 *
 * @param request CreateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicketWithOptions(const CreateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasContext()) {
    query["Context"] = request.getContext();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
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
 * @summary Use CreateTicket to create a ticket.
 *
 * @param request CreateTicketRequest
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicket(const CreateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTicketWithOptions(request, runtime);
}

/**
 * @summary Call the CreateUser operation to create a new agent in a specified instance.
 *
 * @description Creating an agent is equivalent to creating a Resource Access Management (RAM) sub-account. Agents in Cloud Contact Center are mapped to RAM sub-accounts. Therefore, the parameters for creating an agent are similar to those for creating a RAM account. For example, LoginName is the logon name for the RAM account. Email is the email address associated with the RAM account. This email address receives an email containing the initial logon password for the RAM account.
 *
 * @param request CreateUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUserWithOptions(const CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarUrl()) {
    query["AvatarUrl"] = request.getAvatarUrl();
  }

  if (!!request.hasDisplayId()) {
    query["DisplayId"] = request.getDisplayId();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLoginName()) {
    query["LoginName"] = request.getLoginName();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasNeedEmailNotification()) {
    query["NeedEmailNotification"] = request.getNeedEmailNotification();
  }

  if (!!request.hasNickname()) {
    query["Nickname"] = request.getNickname();
  }

  if (!!request.hasResetPassword()) {
    query["ResetPassword"] = request.getResetPassword();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.getSkillLevelList();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.getWorkMode();
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
 * @summary Call the CreateUser operation to create a new agent in a specified instance.
 *
 * @description Creating an agent is equivalent to creating a Resource Access Management (RAM) sub-account. Agents in Cloud Contact Center are mapped to RAM sub-accounts. Therefore, the parameters for creating an agent are similar to those for creating a RAM account. For example, LoginName is the logon name for the RAM account. Email is the email address associated with the RAM account. This email address receives an email containing the initial logon password for the RAM account.
 *
 * @param request CreateUserRequest
 * @return CreateUserResponse
 */
CreateUserResponse Client::createUser(const CreateUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWithOptions(request, runtime);
}

/**
 * @summary You can invoke DeleteAudioFile to delete the audio file associated with a specified audio resource ID under a specified instance.
 *
 * @param request DeleteAudioFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAudioFileResponse
 */
DeleteAudioFileResponse Client::deleteAudioFileWithOptions(const DeleteAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioResourceId()) {
    query["AudioResourceId"] = request.getAudioResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke DeleteAudioFile to delete the audio file associated with a specified audio resource ID under a specified instance.
 *
 * @param request DeleteAudioFileRequest
 * @return DeleteAudioFileResponse
 */
DeleteAudioFileResponse Client::deleteAudioFile(const DeleteAudioFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAudioFileWithOptions(request, runtime);
}

/**
 * @summary You can invoke DeleteCallTag to delete a phone number tag under a specified instance.
 *
 * @param request DeleteCallTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCallTagResponse
 */
DeleteCallTagResponse Client::deleteCallTagWithOptions(const DeleteCallTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.getTagName();
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
 * @summary You can invoke DeleteCallTag to delete a phone number tag under a specified instance.
 *
 * @param request DeleteCallTagRequest
 * @return DeleteCallTagResponse
 */
DeleteCallTagResponse Client::deleteCallTag(const DeleteCallTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCallTagWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified contact flow.
 *
 * @param request DeleteContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactFlowResponse
 */
DeleteContactFlowResponse Client::deleteContactFlowWithOptions(const DeleteContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Deletes the specified contact flow.
 *
 * @param request DeleteContactFlowRequest
 * @return DeleteContactFlowResponse
 */
DeleteContactFlowResponse Client::deleteContactFlow(const DeleteContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactFlowWithOptions(request, runtime);
}

/**
 * @summary You can invoke DeleteCustomCallTagging to delete the inbound number tag associated with a specified number under a specified instance.
 *
 * @param request DeleteCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomCallTaggingResponse
 */
DeleteCustomCallTaggingResponse Client::deleteCustomCallTaggingWithOptions(const DeleteCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
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
 * @summary You can invoke DeleteCustomCallTagging to delete the inbound number tag associated with a specified number under a specified instance.
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
    body["DocumentId"] = request.getDocumentId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
    request.setDocumentIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDocumentIds(), "DocumentIds", "json"));
  }

  json body = {};
  if (!!request.hasDocumentIdsShrink()) {
    body["DocumentIds"] = request.getDocumentIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
    query["InstanceId"] = request.getInstanceId();
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPropertyName()) {
    body["PropertyName"] = request.getPropertyName();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
 * @summary Invoke DeleteSkillGroup to delete the skill group associated with the specified skill group ID under the specified instance.
 *
 * @param request DeleteSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillGroupResponse
 */
DeleteSkillGroupResponse Client::deleteSkillGroupWithOptions(const DeleteSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary Invoke DeleteSkillGroup to delete the skill group associated with the specified skill group ID under the specified instance.
 *
 * @param request DeleteSkillGroupRequest
 * @return DeleteSkillGroupResponse
 */
DeleteSkillGroupResponse Client::deleteSkillGroup(const DeleteSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified ticket.
 *
 * @param request DeleteTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTicketResponse
 */
DeleteTicketResponse Client::deleteTicketWithOptions(const DeleteTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary Deletes a specified ticket.
 *
 * @param request DeleteTicketRequest
 * @return DeleteTicketResponse
 */
DeleteTicketResponse Client::deleteTicket(const DeleteTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTicketWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified ticket template.
 *
 * @param request DeleteTicketTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTicketTemplateResponse
 */
DeleteTicketTemplateResponse Client::deleteTicketTemplateWithOptions(const DeleteTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Deletes a specified ticket template.
 *
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPropertyName()) {
    body["PropertyName"] = request.getPropertyName();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
 * @summary Use the DisableTicketTemplate operation to disable a ticket template. A disabled template cannot be selected when you create a new ticket.
 *
 * @param request DisableTicketTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableTicketTemplateResponse
 */
DisableTicketTemplateResponse Client::disableTicketTemplateWithOptions(const DisableTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Use the DisableTicketTemplate operation to disable a ticket template. A disabled template cannot be selected when you create a new ticket.
 *
 * @param request DisableTicketTemplateRequest
 * @return DisableTicketTemplateResponse
 */
DisableTicketTemplateResponse Client::disableTicketTemplate(const DisableTicketTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableTicketTemplateWithOptions(request, runtime);
}

/**
 * @summary Revoke contact flow editing and discard the associated draft.
 *
 * @param request DiscardEditingContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DiscardEditingContactFlowResponse
 */
DiscardEditingContactFlowResponse Client::discardEditingContactFlowWithOptions(const DiscardEditingContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasDraftId()) {
    query["DraftId"] = request.getDraftId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Revoke contact flow editing and discard the associated draft.
 *
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPropertyName()) {
    body["PropertyName"] = request.getPropertyName();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
 * @summary The EnableTicketTemplate operation publishes a ticket template. Published ticket templates can be used to create tickets.
 *
 * @param request EnableTicketTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableTicketTemplateResponse
 */
EnableTicketTemplateResponse Client::enableTicketTemplateWithOptions(const EnableTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary The EnableTicketTemplate operation publishes a ticket template. Published ticket templates can be used to create tickets.
 *
 * @param request EnableTicketTemplateRequest
 * @return EnableTicketTemplateResponse
 */
EnableTicketTemplateResponse Client::enableTicketTemplate(const EnableTicketTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableTicketTemplateWithOptions(request, runtime);
}

/**
 * @summary You can invoke EndConference to make the specified agent exit the call associated with the specified call ID under the specified instance. The call must be in a conference state.
 *
 * @param request EndConferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndConferenceResponse
 */
EndConferenceResponse Client::endConferenceWithOptions(const EndConferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke EndConference to make the specified agent exit the call associated with the specified call ID under the specified instance. The call must be in a conference state.
 *
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
    body["FlowId"] = request.getFlowId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
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
 * @summary You can invoke ExportCustomCallTagging to export all inbound number tags under a specified instance.
 *
 * @param request ExportCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportCustomCallTaggingResponse
 */
ExportCustomCallTaggingResponse Client::exportCustomCallTaggingWithOptions(const ExportCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke ExportCustomCallTagging to export all inbound number tags under a specified instance.
 *
 * @param request ExportCustomCallTaggingRequest
 * @return ExportCustomCallTaggingResponse
 */
ExportCustomCallTaggingResponse Client::exportCustomCallTagging(const ExportCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @summary The ExportDoNotCallNumbers operation exports a filtered list of do-not-call numbers from a specified instance.
 *
 * @param request ExportDoNotCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportDoNotCallNumbersResponse
 */
ExportDoNotCallNumbersResponse Client::exportDoNotCallNumbersWithOptions(const ExportDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
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
 * @summary The ExportDoNotCallNumbers operation exports a filtered list of do-not-call numbers from a specified instance.
 *
 * @param request ExportDoNotCallNumbersRequest
 * @return ExportDoNotCallNumbersResponse
 */
ExportDoNotCallNumbersResponse Client::exportDoNotCallNumbers(const ExportDoNotCallNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportDoNotCallNumbersWithOptions(request, runtime);
}

/**
 * @summary Use the FinishTicketTask operation to process tickets.
 *
 * @param request FinishTicketTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishTicketTaskResponse
 */
FinishTicketTaskResponse Client::finishTicketTaskWithOptions(const FinishTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary Use the FinishTicketTask operation to process tickets.
 *
 * @param request FinishTicketTaskRequest
 * @return FinishTicketTaskResponse
 */
FinishTicketTaskResponse Client::finishTicketTask(const FinishTicketTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return finishTicketTaskWithOptions(request, runtime);
}

/**
 * @summary 获取指定Chat渠道配置
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
 * @summary 获取指定Chat渠道配置
 *
 * @param request GetAccessChannelOfStagingRequest
 * @return GetAccessChannelOfStagingResponse
 */
GetAccessChannelOfStagingResponse Client::getAccessChannelOfStaging(const GetAccessChannelOfStagingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessChannelOfStagingWithOptions(request, runtime);
}

/**
 * @summary Invoke GetAudioFile to obtain the audio file information corresponding to a specified audio resource ID under a specified instance.
 *
 * @param request GetAudioFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAudioFileResponse
 */
GetAudioFileResponse Client::getAudioFileWithOptions(const GetAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioResourceId()) {
    query["AudioResourceId"] = request.getAudioResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke GetAudioFile to obtain the audio file information corresponding to a specified audio resource ID under a specified instance.
 *
 * @param request GetAudioFileRequest
 * @return GetAudioFileResponse
 */
GetAudioFileResponse Client::getAudioFile(const GetAudioFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAudioFileWithOptions(request, runtime);
}

/**
 * @summary Invoke GetAudioFileDownloadUrl to obtain the OSS download link for a specified audio resource under a specified instance.
 *
 * @param request GetAudioFileDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAudioFileDownloadUrlResponse
 */
GetAudioFileDownloadUrlResponse Client::getAudioFileDownloadUrlWithOptions(const GetAudioFileDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioResourceId()) {
    query["AudioResourceId"] = request.getAudioResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke GetAudioFileDownloadUrl to obtain the OSS download link for a specified audio resource under a specified instance.
 *
 * @param request GetAudioFileDownloadUrlRequest
 * @return GetAudioFileDownloadUrlResponse
 */
GetAudioFileDownloadUrlResponse Client::getAudioFileDownloadUrl(const GetAudioFileDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAudioFileDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Invoke the GetAudioFileUploadParameters API to obtain audio file upload parameters. Before creating an audio file, you must first call this API to retrieve the upload parameters and then call CreateAudioFile to create the audio file. This API is typically invoked by the default public cloud CRM system provided by Cloud Contact Center. It is not recommended for integration customers to call this API directly, because file upload must be performed through a Page operation first; only after the upload is complete can the GetAudioFileUploadParameters API be called.
 *
 * @param request GetAudioFileUploadParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAudioFileUploadParametersResponse
 */
GetAudioFileUploadParametersResponse Client::getAudioFileUploadParametersWithOptions(const GetAudioFileUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioFileName()) {
    query["AudioFileName"] = request.getAudioFileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke the GetAudioFileUploadParameters API to obtain audio file upload parameters. Before creating an audio file, you must first call this API to retrieve the upload parameters and then call CreateAudioFile to create the audio file. This API is typically invoked by the default public cloud CRM system provided by Cloud Contact Center. It is not recommended for integration customers to call this API directly, because file upload must be performed through a Page operation first; only after the upload is complete can the GetAudioFileUploadParameters API be called.
 *
 * @param request GetAudioFileUploadParametersRequest
 * @return GetAudioFileUploadParametersResponse
 */
GetAudioFileUploadParametersResponse Client::getAudioFileUploadParameters(const GetAudioFileUploadParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAudioFileUploadParametersWithOptions(request, runtime);
}

/**
 * @summary You can invoke the GetCallDetailRecord operation to retrieve call details for a specific call ID within a specific instance.
 *
 * @param request GetCallDetailRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallDetailRecordResponse
 */
GetCallDetailRecordResponse Client::getCallDetailRecordWithOptions(const GetCallDetailRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke the GetCallDetailRecord operation to retrieve call details for a specific call ID within a specific instance.
 *
 * @param request GetCallDetailRecordRequest
 * @return GetCallDetailRecordResponse
 */
GetCallDetailRecordResponse Client::getCallDetailRecord(const GetCallDetailRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallDetailRecordWithOptions(request, runtime);
}

/**
 * @summary Gets a predictive outbound campaign by its ID from a specified instance.
 *
 * @param request GetCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCampaignResponse
 */
GetCampaignResponse Client::getCampaignWithOptions(const GetCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Gets a predictive outbound campaign by its ID from a specified instance.
 *
 * @param request GetCampaignRequest
 * @return GetCampaignResponse
 */
GetCampaignResponse Client::getCampaign(const GetCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCampaignWithOptions(request, runtime);
}

/**
 * @summary Invoke GetCaseFileUploadUrl to obtain the OSS upload parameters for a predictive outbound calling list file under a specified instance. When creating a predictive outbound calling Activity by importing a file, you must first invoke this API to retrieve the file upload parameters and then invoke the CreateCampaign API.
 *
 * @param request GetCaseFileUploadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCaseFileUploadUrlResponse
 */
GetCaseFileUploadUrlResponse Client::getCaseFileUploadUrlWithOptions(const GetCaseFileUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke GetCaseFileUploadUrl to obtain the OSS upload parameters for a predictive outbound calling list file under a specified instance. When creating a predictive outbound calling Activity by importing a file, you must first invoke this API to retrieve the file upload parameters and then invoke the CreateCampaign API.
 *
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaId()) {
    body["MediaId"] = request.getMediaId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
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
 * @summary Use GetChatRoutingProfile to retrieve the chat routing configuration.
 *
 * @param request GetChatRoutingProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatRoutingProfileResponse
 */
GetChatRoutingProfileResponse Client::getChatRoutingProfileWithOptions(const GetChatRoutingProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Use GetChatRoutingProfile to retrieve the chat routing configuration.
 *
 * @param request GetChatRoutingProfileRequest
 * @return GetChatRoutingProfileResponse
 */
GetChatRoutingProfileResponse Client::getChatRoutingProfile(const GetChatRoutingProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatRoutingProfileWithOptions(request, runtime);
}

/**
 * @summary Retrieve a specified contact flow.
 *
 * @param request GetContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContactFlowResponse
 */
GetContactFlowResponse Client::getContactFlowWithOptions(const GetContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasDraftId()) {
    query["DraftId"] = request.getDraftId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieve a specified contact flow.
 *
 * @param request GetContactFlowRequest
 * @return GetContactFlowResponse
 */
GetContactFlowResponse Client::getContactFlow(const GetContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContactFlowWithOptions(request, runtime);
}

/**
 * @summary Call GetConversationDetail to obtain the conversation details for the call corresponding to the specified contact ID within the specified instance. The instance and skill group must have quality inspection push enabled to obtain these details.
 *
 * @param request GetConversationDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConversationDetailResponse
 */
GetConversationDetailResponse Client::getConversationDetailWithOptions(const GetConversationDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Call GetConversationDetail to obtain the conversation details for the call corresponding to the specified contact ID within the specified instance. The instance and skill group must have quality inspection push enabled to obtain these details.
 *
 * @param request GetConversationDetailRequest
 * @return GetConversationDetailResponse
 */
GetConversationDetailResponse Client::getConversationDetail(const GetConversationDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConversationDetailWithOptions(request, runtime);
}

/**
 * @summary 获取DataChannel通道的Token信息
 *
 * @param request GetDataChannelCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataChannelCredentialsResponse
 */
GetDataChannelCredentialsResponse Client::getDataChannelCredentialsWithOptions(const GetDataChannelCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary 获取DataChannel通道的Token信息
 *
 * @param request GetDataChannelCredentialsRequest
 * @return GetDataChannelCredentialsResponse
 */
GetDataChannelCredentialsResponse Client::getDataChannelCredentials(const GetDataChannelCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataChannelCredentialsWithOptions(request, runtime);
}

/**
 * @summary Invoke GetDoNotCallFileUploadParameters to obtain the upload parameters for a do-not-call file. When importing prohibited outbound call numbers through a file, you must first invoke this API to upload the do-not-call number file to the public OSS space of Cloud Contact Center, and then invoke ImportDoNotCallNumbers to execute the import.
 *
 * @param request GetDoNotCallFileUploadParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoNotCallFileUploadParametersResponse
 */
GetDoNotCallFileUploadParametersResponse Client::getDoNotCallFileUploadParametersWithOptions(const GetDoNotCallFileUploadParametersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke GetDoNotCallFileUploadParameters to obtain the upload parameters for a do-not-call file. When importing prohibited outbound call numbers through a file, you must first invoke this API to upload the do-not-call number file to the public OSS space of Cloud Contact Center, and then invoke ImportDoNotCallNumbers to execute the import.
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
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
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
 * @summary Retrieve early-media audio recordings for a call in a specified Cloud Contact Center instance.
 *
 * @param request GetEarlyMediaRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEarlyMediaRecordingResponse
 */
GetEarlyMediaRecordingResponse Client::getEarlyMediaRecordingWithOptions(const GetEarlyMediaRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieve early-media audio recordings for a call in a specified Cloud Contact Center instance.
 *
 * @param request GetEarlyMediaRecordingRequest
 * @return GetEarlyMediaRecordingResponse
 */
GetEarlyMediaRecordingResponse Client::getEarlyMediaRecording(const GetEarlyMediaRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEarlyMediaRecordingWithOptions(request, runtime);
}

/**
 * @summary Invoke GetHistoricalCallerReport to retrieve the historical inbound call report for a specified calling number under a specified instance.
 *
 * @param request GetHistoricalCallerReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHistoricalCallerReportResponse
 */
GetHistoricalCallerReportResponse Client::getHistoricalCallerReportWithOptions(const GetHistoricalCallerReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStopTime()) {
    query["StopTime"] = request.getStopTime();
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
 * @summary Invoke GetHistoricalCallerReport to retrieve the historical inbound call report for a specified calling number under a specified instance.
 *
 * @param request GetHistoricalCallerReportRequest
 * @return GetHistoricalCallerReportResponse
 */
GetHistoricalCallerReportResponse Client::getHistoricalCallerReport(const GetHistoricalCallerReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHistoricalCallerReportWithOptions(request, runtime);
}

/**
 * @summary You can invoke the GetHistoricalCampaignReport API to retrieve the historical data report of a predictive outbound calling activity corresponding to a specified ID under a specified instance.
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
 * @summary You can invoke the GetHistoricalCampaignReport API to retrieve the historical data report of a predictive outbound calling activity corresponding to a specified ID under a specified instance.
 *
 * @param request GetHistoricalCampaignReportRequest
 * @return GetHistoricalCampaignReportResponse
 */
GetHistoricalCampaignReportResponse Client::getHistoricalCampaignReport(const GetHistoricalCampaignReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHistoricalCampaignReportWithOptions(request, runtime);
}

/**
 * @summary You can invoke GetHistoricalInstanceReport to obtain the historical data report for a specified instance.
 *
 * @param request GetHistoricalInstanceReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHistoricalInstanceReportResponse
 */
GetHistoricalInstanceReportResponse Client::getHistoricalInstanceReportWithOptions(const GetHistoricalInstanceReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can invoke GetHistoricalInstanceReport to obtain the historical data report for a specified instance.
 *
 * @param request GetHistoricalInstanceReportRequest
 * @return GetHistoricalInstanceReportResponse
 */
GetHistoricalInstanceReportResponse Client::getHistoricalInstanceReport(const GetHistoricalInstanceReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHistoricalInstanceReportWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a Cloud Contact Center instance.
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieves the details of a Cloud Contact Center instance.
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @summary You can call GetInstanceTrendingReport to retrieve the trend report for a specified instance.
 *
 * @param request GetInstanceTrendingReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceTrendingReportResponse
 */
GetInstanceTrendingReportResponse Client::getInstanceTrendingReportWithOptions(const GetInstanceTrendingReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can call GetInstanceTrendingReport to retrieve the trend report for a specified instance.
 *
 * @param request GetInstanceTrendingReportRequest
 * @return GetInstanceTrendingReportResponse
 */
GetInstanceTrendingReportResponse Client::getInstanceTrendingReport(const GetInstanceTrendingReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceTrendingReportWithOptions(request, runtime);
}

/**
 * @summary Retrieve the IVR tracking summary.
 *
 * @param request GetIvrTrackingSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIvrTrackingSummaryResponse
 */
GetIvrTrackingSummaryResponse Client::getIvrTrackingSummaryWithOptions(const GetIvrTrackingSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieve the IVR tracking summary.
 *
 * @param request GetIvrTrackingSummaryRequest
 * @return GetIvrTrackingSummaryResponse
 */
GetIvrTrackingSummaryResponse Client::getIvrTrackingSummary(const GetIvrTrackingSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIvrTrackingSummaryWithOptions(request, runtime);
}

/**
 * @summary Invoke GetLoginDetails to obtain the agent\\"s logon information, including basic agent information, server address information, authentication information, and more. This API can only be invoked by the agent themselves; administrators are not permitted to invoke it on behalf of others.
 *
 * @param request GetLoginDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginDetailsResponse
 */
GetLoginDetailsResponse Client::getLoginDetailsWithOptions(const GetLoginDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChatDeviceId()) {
    query["ChatDeviceId"] = request.getChatDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Invoke GetLoginDetails to obtain the agent\\"s logon information, including basic agent information, server address information, authentication information, and more. This API can only be invoked by the agent themselves; administrators are not permitted to invoke it on behalf of others.
 *
 * @param request GetLoginDetailsRequest
 * @return GetLoginDetailsResponse
 */
GetLoginDetailsResponse Client::getLoginDetails(const GetLoginDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoginDetailsWithOptions(request, runtime);
}

/**
 * @summary You can invoke GetMonoRecording to obtain the single-track recording of a specified call under a specified instance. A single-track recording contains only one audio track, with both the agent-side and customer-side recordings merged into the same track in WAV format.
 *
 * @param request GetMonoRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonoRecordingResponse
 */
GetMonoRecordingResponse Client::getMonoRecordingWithOptions(const GetMonoRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasExpireSeconds()) {
    query["ExpireSeconds"] = request.getExpireSeconds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke GetMonoRecording to obtain the single-track recording of a specified call under a specified instance. A single-track recording contains only one audio track, with both the agent-side and customer-side recordings merged into the same track in WAV format.
 *
 * @param request GetMonoRecordingRequest
 * @return GetMonoRecordingResponse
 */
GetMonoRecordingResponse Client::getMonoRecording(const GetMonoRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMonoRecordingWithOptions(request, runtime);
}

/**
 * @summary You can invoke GetMultiChannelRecording to obtain the multi-track recording of a specified call under a specified instance. In the multi-track recording, the agent\\"s and customer\\"s audio are distributed across different sound channels. During each playback, only one sound channel can be played, meaning you can hear only one party\\"s voice. The format is MKV.
 *
 * @param request GetMultiChannelRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiChannelRecordingResponse
 */
GetMultiChannelRecordingResponse Client::getMultiChannelRecordingWithOptions(const GetMultiChannelRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke GetMultiChannelRecording to obtain the multi-track recording of a specified call under a specified instance. In the multi-track recording, the agent\\"s and customer\\"s audio are distributed across different sound channels. During each playback, only one sound channel can be played, meaning you can hear only one party\\"s voice. The format is MKV.
 *
 * @param request GetMultiChannelRecordingRequest
 * @return GetMultiChannelRecordingResponse
 */
GetMultiChannelRecordingResponse Client::getMultiChannelRecording(const GetMultiChannelRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMultiChannelRecordingWithOptions(request, runtime);
}

/**
 * @summary Invoke the GetNumberLocation API to obtain number location information.
 *
 * @param request GetNumberLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNumberLocationResponse
 */
GetNumberLocationResponse Client::getNumberLocationWithOptions(const GetNumberLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
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
 * @summary Invoke the GetNumberLocation API to obtain number location information.
 *
 * @param request GetNumberLocationRequest
 * @return GetNumberLocationResponse
 */
GetNumberLocationResponse Client::getNumberLocation(const GetNumberLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNumberLocationWithOptions(request, runtime);
}

/**
 * @summary You can invoke GetRealtimeCampaignStats to retrieve real-time agent status data for a predictive outbound calling Activity with a specified ID under a specified instance.
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
 * @summary You can invoke GetRealtimeCampaignStats to retrieve real-time agent status data for a predictive outbound calling Activity with a specified ID under a specified instance.
 *
 * @param request GetRealtimeCampaignStatsRequest
 * @return GetRealtimeCampaignStatsResponse
 */
GetRealtimeCampaignStatsResponse Client::getRealtimeCampaignStats(const GetRealtimeCampaignStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRealtimeCampaignStatsWithOptions(request, runtime);
}

/**
 * @summary You can invoke GetRealtimeInstanceStates to obtain the real-time status of a specified instance.
 *
 * @param request GetRealtimeInstanceStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRealtimeInstanceStatesResponse
 */
GetRealtimeInstanceStatesResponse Client::getRealtimeInstanceStatesWithOptions(const GetRealtimeInstanceStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
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
 * @summary You can invoke GetRealtimeInstanceStates to obtain the real-time status of a specified instance.
 *
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
 * @summary You can invoke GetSkillGroup to obtain information about the skill group corresponding to a specified skill group ID under a specified instance.
 *
 * @param request GetSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillGroupResponse
 */
GetSkillGroupResponse Client::getSkillGroupWithOptions(const GetSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary You can invoke GetSkillGroup to obtain information about the skill group corresponding to a specified skill group ID under a specified instance.
 *
 * @param request GetSkillGroupRequest
 * @return GetSkillGroupResponse
 */
GetSkillGroupResponse Client::getSkillGroup(const GetSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves the content of a session summary template.
 *
 * @param request GetSummaryTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSummaryTemplateResponse
 */
GetSummaryTemplateResponse Client::getSummaryTemplateWithOptions(const GetSummaryTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Retrieves the content of a session summary template.
 *
 * @param request GetSummaryTemplateRequest
 * @return GetSummaryTemplateResponse
 */
GetSummaryTemplateResponse Client::getSummaryTemplate(const GetSummaryTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSummaryTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a specific ticket.
 *
 * @param request GetTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicketWithOptions(const GetTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary Retrieves information about a specific ticket.
 *
 * @param request GetTicketRequest
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicket(const GetTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTicketWithOptions(request, runtime);
}

/**
 * @summary You can call GetTicketSummaryReport to retrieve a summary of ticket statuses.
 *
 * @param request GetTicketSummaryReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTicketSummaryReportResponse
 */
GetTicketSummaryReportResponse Client::getTicketSummaryReportWithOptions(const GetTicketSummaryReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignee()) {
    query["Assignee"] = request.getAssignee();
  }

  if (!!request.hasAssigneeType()) {
    query["AssigneeType"] = request.getAssigneeType();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParticipant()) {
    query["Participant"] = request.getParticipant();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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
 * @summary You can call GetTicketSummaryReport to retrieve a summary of ticket statuses.
 *
 * @param request GetTicketSummaryReportRequest
 * @return GetTicketSummaryReportResponse
 */
GetTicketSummaryReportResponse Client::getTicketSummaryReport(const GetTicketSummaryReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTicketSummaryReportWithOptions(request, runtime);
}

/**
 * @summary Call GetTicketTemplate to retrieve ticket template definitions.
 *
 * @param request GetTicketTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTicketTemplateResponse
 */
GetTicketTemplateResponse Client::getTicketTemplateWithOptions(const GetTicketTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateVersion()) {
    query["TemplateVersion"] = request.getTemplateVersion();
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
 * @summary Call GetTicketTemplate to retrieve ticket template definitions.
 *
 * @param request GetTicketTemplateRequest
 * @return GetTicketTemplateResponse
 */
GetTicketTemplateResponse Client::getTicketTemplate(const GetTicketTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTicketTemplateWithOptions(request, runtime);
}

/**
 * @summary Call GetTurnCredentials to get the connection credentials for a Cloud Contact Center Point of Presence (PoP). These credentials include a username and password for authentication. Connecting to Cloud Contact Center through a PoP improves network quality and stability.
 *
 * @param request GetTurnCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTurnCredentialsResponse
 */
GetTurnCredentialsResponse Client::getTurnCredentialsWithOptions(const GetTurnCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Call GetTurnCredentials to get the connection credentials for a Cloud Contact Center Point of Presence (PoP). These credentials include a username and password for authentication. Connecting to Cloud Contact Center through a PoP improves network quality and stability.
 *
 * @param request GetTurnCredentialsRequest
 * @return GetTurnCredentialsResponse
 */
GetTurnCredentialsResponse Client::getTurnCredentials(const GetTurnCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTurnCredentialsWithOptions(request, runtime);
}

/**
 * @summary Call GetTurnServerList to get a list of front-end access points for Alibaba Cloud Contact Center. Connecting through these access points improves network quality and stability.
 *
 * @param request GetTurnServerListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTurnServerListResponse
 */
GetTurnServerListResponse Client::getTurnServerListWithOptions(const GetTurnServerListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Call GetTurnServerList to get a list of front-end access points for Alibaba Cloud Contact Center. Connecting through these access points improves network quality and stability.
 *
 * @param request GetTurnServerListRequest
 * @return GetTurnServerListResponse
 */
GetTurnServerListResponse Client::getTurnServerList(const GetTurnServerListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTurnServerListWithOptions(request, runtime);
}

/**
 * @summary Obtain the parameters related to offline quality inspection audio files. Normally, if the Customer has configured the quality inspection feature in Cloud Contact Center, the audio files requiring offline quality inspection and their corresponding parameters are automatically passed to Intelligent Quality Inspection. You only need to invoke this API to obtain the parameters for pushing quality inspection recordings when the Customer has not configured the quality inspection feature in Cloud Contact Center and wishes to manually push Cloud Contact Center call recordings to the quality inspection system.
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
 * @summary Obtain the parameters related to offline quality inspection audio files. Normally, if the Customer has configured the quality inspection feature in Cloud Contact Center, the audio files requiring offline quality inspection and their corresponding parameters are automatically passed to Intelligent Quality Inspection. You only need to invoke this API to obtain the parameters for pushing quality inspection recordings when the Customer has not configured the quality inspection feature in Cloud Contact Center and wishes to manually push Cloud Contact Center call recordings to the quality inspection system.
 *
 * @param request GetUploadAudioDataParamsRequest
 * @return GetUploadAudioDataParamsResponse
 */
GetUploadAudioDataParamsResponse Client::getUploadAudioDataParams(const GetUploadAudioDataParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadAudioDataParamsWithOptions(request, runtime);
}

/**
 * @summary You can invoke GetUser to obtain the agent information corresponding to a specified agent ID under a specified instance.
 *
 * @param request GetUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtension()) {
    query["Extension"] = request.getExtension();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke GetUser to obtain the agent information corresponding to a specified agent ID under a specified instance.
 *
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
 * @summary Call GetVisitorLoginDetails to retrieve login, server address, and authentication information for network service visitors.
 *
 * @param request GetVisitorLoginDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVisitorLoginDetailsResponse
 */
GetVisitorLoginDetailsResponse Client::getVisitorLoginDetailsWithOptions(const GetVisitorLoginDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChatDeviceId()) {
    query["ChatDeviceId"] = request.getChatDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasVisitorId()) {
    query["VisitorId"] = request.getVisitorId();
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
 * @summary Call GetVisitorLoginDetails to retrieve login, server address, and authentication information for network service visitors.
 *
 * @param request GetVisitorLoginDetailsRequest
 * @return GetVisitorLoginDetailsResponse
 */
GetVisitorLoginDetailsResponse Client::getVisitorLoginDetails(const GetVisitorLoginDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVisitorLoginDetailsWithOptions(request, runtime);
}

/**
 * @summary You can invoke GetVoicemailRecording to obtain the voicemail recording of a specified call under a specified instance. The recording is single-track and in WAV format.
 *
 * @param request GetVoicemailRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVoicemailRecordingResponse
 */
GetVoicemailRecordingResponse Client::getVoicemailRecordingWithOptions(const GetVoicemailRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke GetVoicemailRecording to obtain the voicemail recording of a specified call under a specified instance. The recording is single-track and in WAV format.
 *
 * @param request GetVoicemailRecordingRequest
 * @return GetVoicemailRecordingResponse
 */
GetVoicemailRecordingResponse Client::getVoicemailRecording(const GetVoicemailRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVoicemailRecordingWithOptions(request, runtime);
}

/**
 * @summary You can invoke HoldCall to hold the call associated with a specified call ID under a specified instance. After the call is held, it will be temporarily suspended, and the held party will hear hold music.
 *
 * @param request HoldCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return HoldCallResponse
 */
HoldCallResponse Client::holdCallWithOptions(const HoldCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasMusic()) {
    query["Music"] = request.getMusic();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke HoldCall to hold the call associated with a specified call ID under a specified instance. After the call is held, it will be temporarily suspended, and the held party will hear hold music.
 *
 * @param request HoldCallRequest
 * @return HoldCallResponse
 */
HoldCallResponse Client::holdCall(const HoldCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return holdCallWithOptions(request, runtime);
}

/**
 * @summary Imports one or more admins to a specified instance. The caller must have the `AliyunCCCFullAccess` permission, which you can grant in the RAM console.
 *
 * @param request ImportAdminsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportAdminsResponse
 */
ImportAdminsResponse Client::importAdminsWithOptions(const ImportAdminsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRamIdList()) {
    query["RamIdList"] = request.getRamIdList();
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
 * @summary Imports one or more admins to a specified instance. The caller must have the `AliyunCCCFullAccess` permission, which you can grant in the RAM console.
 *
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
    body["FlowPackageData"] = request.getFlowPackageData();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
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
 * @summary Imports your organization’s telephone line numbers. Before performing the first import, contact Cloud Contact Center technical support to add the numbers to the allowlist.
 *
 * @param request ImportCorpNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportCorpNumbersResponse
 */
ImportCorpNumbersResponse Client::importCorpNumbersWithOptions(const ImportCorpNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasCorpName()) {
    query["CorpName"] = request.getCorpName();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.getProvider();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasTagList()) {
    query["TagList"] = request.getTagList();
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
 * @summary Imports your organization’s telephone line numbers. Before performing the first import, contact Cloud Contact Center technical support to add the numbers to the allowlist.
 *
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
 * @summary You can invoke ImportCustomCallTagging to import multiple inbound number tags into a specified instance.
 *
 * @param request ImportCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportCustomCallTaggingResponse
 */
ImportCustomCallTaggingResponse Client::importCustomCallTaggingWithOptions(const ImportCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke ImportCustomCallTagging to import multiple inbound number tags into a specified instance.
 *
 * @param request ImportCustomCallTaggingRequest
 * @return ImportCustomCallTaggingResponse
 */
ImportCustomCallTaggingResponse Client::importCustomCallTagging(const ImportCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @summary Imports one or more do-not-call numbers to a specified instance. You can import numbers by manual entry or file upload.
 *
 * @param request ImportDoNotCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportDoNotCallNumbersResponse
 */
ImportDoNotCallNumbersResponse Client::importDoNotCallNumbersWithOptions(const ImportDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
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
 * @summary Imports one or more do-not-call numbers to a specified instance. You can import numbers by manual entry or file upload.
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
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOssFileKey()) {
    body["OssFileKey"] = request.getOssFileKey();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
 * @summary Import existing RAM users as contact center agents.
 *
 * @param request ImportRamUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportRamUsersResponse
 */
ImportRamUsersResponse Client::importRamUsersWithOptions(const ImportRamUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRamIdList()) {
    query["RamIdList"] = request.getRamIdList();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.getSkillLevelList();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.getWorkMode();
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
 * @summary Import existing RAM users as contact center agents.
 *
 * @param request ImportRamUsersRequest
 * @return ImportRamUsersResponse
 */
ImportRamUsersResponse Client::importRamUsers(const ImportRamUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importRamUsersWithOptions(request, runtime);
}

/**
 * @summary Consultation transfer refers to transferring a call to another agent, a skill group queue, or an external number. It is also known as follow transfer or two-step transfer.
 *
 * @param request InitiateAttendedTransferRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitiateAttendedTransferResponse
 */
InitiateAttendedTransferResponse Client::initiateAttendedTransferWithOptions(const InitiateAttendedTransferRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallPriority()) {
    query["CallPriority"] = request.getCallPriority();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasQueuingOverflowThreshold()) {
    query["QueuingOverflowThreshold"] = request.getQueuingOverflowThreshold();
  }

  if (!!request.hasQueuingTimeoutSeconds()) {
    query["QueuingTimeoutSeconds"] = request.getQueuingTimeoutSeconds();
  }

  if (!!request.hasRoutingType()) {
    query["RoutingType"] = request.getRoutingType();
  }

  if (!!request.hasStrategyName()) {
    query["StrategyName"] = request.getStrategyName();
  }

  if (!!request.hasStrategyParams()) {
    query["StrategyParams"] = request.getStrategyParams();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasTransferee()) {
    query["Transferee"] = request.getTransferee();
  }

  if (!!request.hasTransfereeType()) {
    query["TransfereeType"] = request.getTransfereeType();
  }

  if (!!request.hasTransferor()) {
    query["Transferor"] = request.getTransferor();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Consultation transfer refers to transferring a call to another agent, a skill group queue, or an external number. It is also known as follow transfer or two-step transfer.
 *
 * @param request InitiateAttendedTransferRequest
 * @return InitiateAttendedTransferResponse
 */
InitiateAttendedTransferResponse Client::initiateAttendedTransfer(const InitiateAttendedTransferRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initiateAttendedTransferWithOptions(request, runtime);
}

/**
 * @summary You can invoke InterceptCall to forcibly disconnect the call associated with a specified call ID under a given instance. The call must be in the listener state, and the forced disconnection must be initiated by the listener. After the forced disconnection succeeds, the agent who was originally talking with the customer will be disconnected, and the agent who initiated the forced disconnection will replace the original agent and continue the conversation with the customer.
 *
 * @param request InterceptCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InterceptCallResponse
 */
InterceptCallResponse Client::interceptCallWithOptions(const InterceptCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterceptedUserId()) {
    query["InterceptedUserId"] = request.getInterceptedUserId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke InterceptCall to forcibly disconnect the call associated with a specified call ID under a given instance. The call must be in the listener state, and the forced disconnection must be initiated by the listener. After the forced disconnection succeeds, the agent who was originally talking with the customer will be disconnected, and the agent who initiated the forced disconnection will replace the original agent and continue the conversation with the customer.
 *
 * @param request InterceptCallRequest
 * @return InterceptCallResponse
 */
InterceptCallResponse Client::interceptCall(const InterceptCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return interceptCallWithOptions(request, runtime);
}

/**
 * @summary You can invoke LaunchAuthentication to temporarily transfer a call into a specified IVR flow. After invoking this API, the call enters an IVR interaction phase, which is commonly used for identity verification operations.
 *
 * @param request LaunchAuthenticationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LaunchAuthenticationResponse
 */
LaunchAuthenticationResponse Client::launchAuthenticationWithOptions(const LaunchAuthenticationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasContactFlowVariables()) {
    query["ContactFlowVariables"] = request.getContactFlowVariables();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke LaunchAuthentication to temporarily transfer a call into a specified IVR flow. After invoking this API, the call enters an IVR interaction phase, which is commonly used for identity verification operations.
 *
 * @param request LaunchAuthenticationRequest
 * @return LaunchAuthenticationResponse
 */
LaunchAuthenticationResponse Client::launchAuthentication(const LaunchAuthenticationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return launchAuthenticationWithOptions(request, runtime);
}

/**
 * @summary Invoke LaunchSurvey to send a satisfaction survey. This operation causes the agent to hang up. If it is a voice-based satisfaction survey, the customer enters the IVR satisfaction survey flow after the agent hangs up and completes the satisfaction collection within the IVR flow. If it is an SMS-based satisfaction survey, the call ends and the customer receives a satisfaction survey text message.
 *
 * @param request LaunchSurveyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LaunchSurveyResponse
 */
LaunchSurveyResponse Client::launchSurveyWithOptions(const LaunchSurveyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasContactFlowVariables()) {
    query["ContactFlowVariables"] = request.getContactFlowVariables();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasSmsMetadataId()) {
    query["SmsMetadataId"] = request.getSmsMetadataId();
  }

  if (!!request.hasSurveyChannel()) {
    query["SurveyChannel"] = request.getSurveyChannel();
  }

  if (!!request.hasSurveyTemplateId()) {
    query["SurveyTemplateId"] = request.getSurveyTemplateId();
  }

  if (!!request.hasSurveyTemplateVariables()) {
    query["SurveyTemplateVariables"] = request.getSurveyTemplateVariables();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Invoke LaunchSurvey to send a satisfaction survey. This operation causes the agent to hang up. If it is a voice-based satisfaction survey, the customer enters the IVR satisfaction survey flow after the agent hangs up and completes the satisfaction collection within the IVR flow. If it is an SMS-based satisfaction survey, the call ends and the customer receives a satisfaction survey text message.
 *
 * @param request LaunchSurveyRequest
 * @return LaunchSurveyResponse
 */
LaunchSurveyResponse Client::launchSurvey(const LaunchSurveyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return launchSurveyWithOptions(request, runtime);
}

/**
 * @summary Invoke ListAgentStateLogs to obtain the status log list of a specified agent under a specified instance. Note that this API will soon expire. Use the override API ListRealtimeAgentStates instead.
 *
 * @param request ListAgentStateLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentStateLogsResponse
 */
ListAgentStateLogsResponse Client::listAgentStateLogsWithOptions(const ListAgentStateLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Invoke ListAgentStateLogs to obtain the status log list of a specified agent under a specified instance. Note that this API will soon expire. Use the override API ListRealtimeAgentStates instead.
 *
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
 * @summary You can invoke the ListAgentStates API to retrieve a list of agent statuses under a specified instance, filtered by specified conditions. This API is available only to specific Users. Other Customers are not recommended to invoke it.
 *
 * @param request ListAgentStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentStatesResponse
 */
ListAgentStatesResponse Client::listAgentStatesWithOptions(const ListAgentStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentIds()) {
    query["AgentIds"] = request.getAgentIds();
  }

  if (!!request.hasExcludeOfflineUsers()) {
    query["ExcludeOfflineUsers"] = request.getExcludeOfflineUsers();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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
 * @summary You can invoke the ListAgentStates API to retrieve a list of agent statuses under a specified instance, filtered by specified conditions. This API is available only to specific Users. Other Customers are not recommended to invoke it.
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
 * @summary You can invoke the ListAgentSummaryReportsSinceMidnight API to retrieve agent historical data reports under a specified instance, filtered by given conditions. The statistics cover data from 00:00 of the current day up to the current time. This API is available only to specific users; other customers are not recommended to invoke it.
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
 * @summary You can invoke the ListAgentSummaryReportsSinceMidnight API to retrieve agent historical data reports under a specified instance, filtered by given conditions. The statistics cover data from 00:00 of the current day up to the current time. This API is available only to specific users; other customers are not recommended to invoke it.
 *
 * @param request ListAgentSummaryReportsSinceMidnightRequest
 * @return ListAgentSummaryReportsSinceMidnightResponse
 */
ListAgentSummaryReportsSinceMidnightResponse Client::listAgentSummaryReportsSinceMidnight(const ListAgentSummaryReportsSinceMidnightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentSummaryReportsSinceMidnightWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListAttempts to obtain the list of contact dialing records for a specified predictive outbound calling Activity under a specified instance.
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
 * @summary You can invoke ListAttempts to obtain the list of contact dialing records for a specified predictive outbound calling Activity under a specified instance.
 *
 * @param request ListAttemptsRequest
 * @return ListAttemptsResponse
 */
ListAttemptsResponse Client::listAttempts(const ListAttemptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAttemptsWithOptions(request, runtime);
}

/**
 * @summary Invoke ListAudioFiles to obtain the list of audio files under a specified instance.
 *
 * @param request ListAudioFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAudioFilesResponse
 */
ListAudioFilesResponse Client::listAudioFilesWithOptions(const ListAudioFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.getUsage();
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
 * @summary Invoke ListAudioFiles to obtain the list of audio files under a specified instance.
 *
 * @param request ListAudioFilesRequest
 * @return ListAudioFilesResponse
 */
ListAudioFilesResponse Client::listAudioFiles(const ListAudioFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAudioFilesWithOptions(request, runtime);
}

/**
 * @summary Queries the blacklist tag status of specified numbers in a batch.
 *
 * @param request ListBlacklistCallTaggingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBlacklistCallTaggingsResponse
 */
ListBlacklistCallTaggingsResponse Client::listBlacklistCallTaggingsWithOptions(const ListBlacklistCallTaggingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
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
 * @summary Queries the blacklist tag status of specified numbers in a batch.
 *
 * @param request ListBlacklistCallTaggingsRequest
 * @return ListBlacklistCallTaggingsResponse
 */
ListBlacklistCallTaggingsResponse Client::listBlacklistCallTaggings(const ListBlacklistCallTaggingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBlacklistCallTaggingsWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListBriefSkillGroups to obtain the list of skill group summary information under a specified instance.
 *
 * @param request ListBriefSkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBriefSkillGroupsResponse
 */
ListBriefSkillGroupsResponse Client::listBriefSkillGroupsWithOptions(const ListBriefSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
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
 * @summary You can invoke ListBriefSkillGroups to obtain the list of skill group summary information under a specified instance.
 *
 * @param request ListBriefSkillGroupsRequest
 * @return ListBriefSkillGroupsResponse
 */
ListBriefSkillGroupsResponse Client::listBriefSkillGroups(const ListBriefSkillGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBriefSkillGroupsWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListCallDetailRecords to obtain a list of call details filtered by specified search conditions under a specified instance. This API is no longer iteratively updated. We recommend that you use the ListCallDetailRecordsV2 API instead.
 *
 * @description To ensure query efficiency, the TotalCount field in the response data is populated only when the first page is queried. For other pages, this field returns 0.
 *
 * @param request ListCallDetailRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallDetailRecordsResponse
 */
ListCallDetailRecordsResponse Client::listCallDetailRecordsWithOptions(const ListCallDetailRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasContactDisposition()) {
    query["ContactDisposition"] = request.getContactDisposition();
  }

  if (!!request.hasContactDispositionList()) {
    query["ContactDispositionList"] = request.getContactDispositionList();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactType()) {
    query["ContactType"] = request.getContactType();
  }

  if (!!request.hasContactTypeList()) {
    query["ContactTypeList"] = request.getContactTypeList();
  }

  if (!!request.hasCriteria()) {
    query["Criteria"] = request.getCriteria();
  }

  if (!!request.hasEarlyMediaStateList()) {
    query["EarlyMediaStateList"] = request.getEarlyMediaStateList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderByField()) {
    query["OrderByField"] = request.getOrderByField();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSatisfactionDescriptionList()) {
    query["SatisfactionDescriptionList"] = request.getSatisfactionDescriptionList();
  }

  if (!!request.hasSatisfactionList()) {
    query["SatisfactionList"] = request.getSatisfactionList();
  }

  if (!!request.hasSatisfactionSurveyChannel()) {
    query["SatisfactionSurveyChannel"] = request.getSatisfactionSurveyChannel();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can invoke ListCallDetailRecords to obtain a list of call details filtered by specified search conditions under a specified instance. This API is no longer iteratively updated. We recommend that you use the ListCallDetailRecordsV2 API instead.
 *
 * @description To ensure query efficiency, the TotalCount field in the response data is populated only when the first page is queried. For other pages, this field returns 0.
 *
 * @param request ListCallDetailRecordsRequest
 * @return ListCallDetailRecordsResponse
 */
ListCallDetailRecordsResponse Client::listCallDetailRecords(const ListCallDetailRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallDetailRecordsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of call detail records that match the specified filter criteria for a specified instance.
 *
 * @description ListCallDetailRecordsV2 is used to override the ListCallDetailRecords operation. New fields and query conditions will undergo continuous optimization in ListCallDetailRecordsV2. To ensure query efficiency, the TotalCount field in the response is populated only when you query the first page. For other pages, the value 0 is returned.
 *
 * @param request ListCallDetailRecordsV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallDetailRecordsV2Response
 */
ListCallDetailRecordsV2Response Client::listCallDetailRecordsV2WithOptions(const ListCallDetailRecordsV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessChannelTypeList()) {
    query["AccessChannelTypeList"] = request.getAccessChannelTypeList();
  }

  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAnalyticsReportReady()) {
    query["AnalyticsReportReady"] = request.getAnalyticsReportReady();
  }

  if (!!request.hasBroker()) {
    query["Broker"] = request.getBroker();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasContactDispositionList()) {
    query["ContactDispositionList"] = request.getContactDispositionList();
  }

  if (!!request.hasContactIdList()) {
    query["ContactIdList"] = request.getContactIdList();
  }

  if (!!request.hasContactTypeList()) {
    query["ContactTypeList"] = request.getContactTypeList();
  }

  if (!!request.hasEarlyMediaStateList()) {
    query["EarlyMediaStateList"] = request.getEarlyMediaStateList();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFirstAgentId()) {
    query["FirstAgentId"] = request.getFirstAgentId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  if (!!request.hasOrderByField()) {
    query["OrderByField"] = request.getOrderByField();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReleaseInitiatorList()) {
    query["ReleaseInitiatorList"] = request.getReleaseInitiatorList();
  }

  if (!!request.hasReleaseReasonList()) {
    query["ReleaseReasonList"] = request.getReleaseReasonList();
  }

  if (!!request.hasSatisfactionDescriptionList()) {
    query["SatisfactionDescriptionList"] = request.getSatisfactionDescriptionList();
  }

  if (!!request.hasSatisfactionRateList()) {
    query["SatisfactionRateList"] = request.getSatisfactionRateList();
  }

  if (!!request.hasSatisfactionSurveyChannel()) {
    query["SatisfactionSurveyChannel"] = request.getSatisfactionSurveyChannel();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.getSkillGroupIdList();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves a list of call detail records that match the specified filter criteria for a specified instance.
 *
 * @description ListCallDetailRecordsV2 is used to override the ListCallDetailRecords operation. New fields and query conditions will undergo continuous optimization in ListCallDetailRecordsV2. To ensure query efficiency, the TotalCount field in the response is populated only when you query the first page. For other pages, the value 0 is returned.
 *
 * @param request ListCallDetailRecordsV2Request
 * @return ListCallDetailRecordsV2Response
 */
ListCallDetailRecordsV2Response Client::listCallDetailRecordsV2(const ListCallDetailRecordsV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallDetailRecordsV2WithOptions(request, runtime);
}

/**
 * @summary Use the ListCallSummaries operation to retrieve call summaries.
 *
 * @param tmpReq ListCallSummariesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallSummariesResponse
 */
ListCallSummariesResponse Client::listCallSummariesWithOptions(const ListCallSummariesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCallSummariesShrinkRequest request = ListCallSummariesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactIdList()) {
    request.setContactIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContactIdList(), "ContactIdList", "json"));
  }

  json query = {};
  if (!!request.hasContactIdListShrink()) {
    query["ContactIdList"] = request.getContactIdListShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Use the ListCallSummaries operation to retrieve call summaries.
 *
 * @param request ListCallSummariesRequest
 * @return ListCallSummariesResponse
 */
ListCallSummariesResponse Client::listCallSummaries(const ListCallSummariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallSummariesWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListCallTags to obtain all number tags under a specified instance.
 *
 * @param request ListCallTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallTagsResponse
 */
ListCallTagsResponse Client::listCallTagsWithOptions(const ListCallTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary You can invoke ListCallTags to obtain all number tags under a specified instance.
 *
 * @param request ListCallTagsRequest
 * @return ListCallTagsResponse
 */
ListCallTagsResponse Client::listCallTags(const ListCallTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallTagsWithOptions(request, runtime);
}

/**
 * @summary Obtain the trend report of the predictive outbound calling activity with the specified ID under the specified instance.
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
 * @summary Obtain the trend report of the predictive outbound calling activity with the specified ID under the specified instance.
 *
 * @param request ListCampaignTrendingReportRequest
 * @return ListCampaignTrendingReportResponse
 */
ListCampaignTrendingReportResponse Client::listCampaignTrendingReport(const ListCampaignTrendingReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCampaignTrendingReportWithOptions(request, runtime);
}

/**
 * @summary Calls ListCampaigns to obtain the list of predictive dialing campaigns under a specified instance.
 *
 * @param request ListCampaignsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCampaignsResponse
 */
ListCampaignsResponse Client::listCampaignsWithOptions(const ListCampaignsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActualStartTimeFrom()) {
    query["ActualStartTimeFrom"] = request.getActualStartTimeFrom();
  }

  if (!!request.hasActualStartTimeTo()) {
    query["ActualStartTimeTo"] = request.getActualStartTimeTo();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlanedStartTimeFrom()) {
    query["PlanedStartTimeFrom"] = request.getPlanedStartTimeFrom();
  }

  if (!!request.hasPlanedStartTimeTo()) {
    query["PlanedStartTimeTo"] = request.getPlanedStartTimeTo();
  }

  if (!!request.hasQueueId()) {
    query["QueueId"] = request.getQueueId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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
 * @summary Calls ListCampaigns to obtain the list of predictive dialing campaigns under a specified instance.
 *
 * @param request ListCampaignsRequest
 * @return ListCampaignsResponse
 */
ListCampaignsResponse Client::listCampaigns(const ListCampaignsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCampaignsWithOptions(request, runtime);
}

/**
 * @summary Invoke ListCases to obtain the execution details list of the outbound contact list for the predictive dialing Activity corresponding to the specified ID under the specified instance.
 *
 * @param request ListCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCasesResponse
 */
ListCasesResponse Client::listCasesWithOptions(const ListCasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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
 * @summary Invoke ListCases to obtain the execution details list of the outbound contact list for the predictive dialing Activity corresponding to the specified ID under the specified instance.
 *
 * @param request ListCasesRequest
 * @return ListCasesResponse
 */
ListCasesResponse Client::listCases(const ListCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCasesWithOptions(request, runtime);
}

/**
 * @summary You can use ListCategories to retrieve category information.
 *
 * @param request ListCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategoriesWithOptions(const ListCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary You can use ListCategories to retrieve category information.
 *
 * @param request ListCategoriesRequest
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategories(const ListCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCategoriesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the ticket field types that are defined for an instance.
 *
 * @param request ListCommonTicketFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCommonTicketFieldsResponse
 */
ListCommonTicketFieldsResponse Client::listCommonTicketFieldsWithOptions(const ListCommonTicketFieldsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Retrieves the ticket field types that are defined for an instance.
 *
 * @param request ListCommonTicketFieldsRequest
 * @return ListCommonTicketFieldsResponse
 */
ListCommonTicketFieldsResponse Client::listCommonTicketFields(const ListCommonTicketFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCommonTicketFieldsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the config items for a specified instance.
 *
 * @param request ListConfigItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigItemsResponse
 */
ListConfigItemsResponse Client::listConfigItemsWithOptions(const ListConfigItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
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
 * @summary Retrieves the config items for a specified instance.
 *
 * @param request ListConfigItemsRequest
 * @return ListConfigItemsResponse
 */
ListConfigItemsResponse Client::listConfigItems(const ListConfigItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConfigItemsWithOptions(request, runtime);
}

/**
 * @summary Call ListContactFlows to retrieve the IVR contact flows for a specified instance.
 *
 * @param request ListContactFlowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContactFlowsResponse
 */
ListContactFlowsResponse Client::listContactFlowsWithOptions(const ListContactFlowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderByField()) {
    query["OrderByField"] = request.getOrderByField();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Call ListContactFlows to retrieve the IVR contact flows for a specified instance.
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
 * @summary You can invoke ListCustomCallTagging to obtain the list of inbound number marks under a specified instance.
 *
 * @param request ListCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomCallTaggingResponse
 */
ListCustomCallTaggingResponse Client::listCustomCallTaggingWithOptions(const ListCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallTagNameList()) {
    query["CallTagNameList"] = request.getCallTagNameList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
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
 * @summary You can invoke ListCustomCallTagging to obtain the list of inbound number marks under a specified instance.
 *
 * @param request ListCustomCallTaggingRequest
 * @return ListCustomCallTaggingResponse
 */
ListCustomCallTaggingResponse Client::listCustomCallTagging(const ListCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @summary Obtain the device list of a specified agent under a specified instance.
 *
 * @param request ListDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDevicesResponse
 */
ListDevicesResponse Client::listDevicesWithOptions(const ListDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Obtain the device list of a specified agent under a specified instance.
 *
 * @param request ListDevicesRequest
 * @return ListDevicesResponse
 */
ListDevicesResponse Client::listDevices(const ListDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDevicesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of prohibited outbound call numbers under a specified instance, filtered by specified search conditions.
 *
 * @param request ListDoNotCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoNotCallNumbersResponse
 */
ListDoNotCallNumbersResponse Client::listDoNotCallNumbersWithOptions(const ListDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
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
 * @summary Retrieves the list of prohibited outbound call numbers under a specified instance, filtered by specified search conditions.
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
    request.setSortsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSorts(), "Sorts", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNextPageToken()) {
    body["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
  }

  if (!!request.hasSearchPattern()) {
    body["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasSortsShrink()) {
    body["Sorts"] = request.getSortsShrink();
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
 * @summary Queries feedback records.
 *
 * @param request ListFeedbacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeedbacksResponse
 */
ListFeedbacksResponse Client::listFeedbacksWithOptions(const ListFeedbacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskIdList()) {
    query["TaskIdList"] = request.getTaskIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeedbacks"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeedbacksResponse>();
}

/**
 * @summary Queries feedback records.
 *
 * @param request ListFeedbacksRequest
 * @return ListFeedbacksResponse
 */
ListFeedbacksResponse Client::listFeedbacks(const ListFeedbacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFeedbacksWithOptions(request, runtime);
}

/**
 * @summary You can use ListFlashSmsApplication to obtain third-party flash SMS configuration information.
 *
 * @param request ListFlashSmsApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsApplicationsResponse
 */
ListFlashSmsApplicationsResponse Client::listFlashSmsApplicationsWithOptions(const ListFlashSmsApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProviderId()) {
    query["ProviderId"] = request.getProviderId();
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
 * @summary You can use ListFlashSmsApplication to obtain third-party flash SMS configuration information.
 *
 * @param request ListFlashSmsApplicationsRequest
 * @return ListFlashSmsApplicationsResponse
 */
ListFlashSmsApplicationsResponse Client::listFlashSmsApplications(const ListFlashSmsApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsApplicationsWithOptions(request, runtime);
}

/**
 * @summary Call the ListFlashSmsSettings operation to retrieve the flash SMS configurations for a specified skill group.
 *
 * @param tmpReq ListFlashSmsSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsSettingsResponse
 */
ListFlashSmsSettingsResponse Client::listFlashSmsSettingsWithOptions(const ListFlashSmsSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFlashSmsSettingsShrinkRequest request = ListFlashSmsSettingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSkillGroupIdList()) {
    request.setSkillGroupIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSkillGroupIdList(), "SkillGroupIdList", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillGroupIdListShrink()) {
    query["SkillGroupIdList"] = request.getSkillGroupIdListShrink();
  }

  if (!!request.hasSkillGroupName()) {
    query["SkillGroupName"] = request.getSkillGroupName();
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
 * @summary Call the ListFlashSmsSettings operation to retrieve the flash SMS configurations for a specified skill group.
 *
 * @param request ListFlashSmsSettingsRequest
 * @return ListFlashSmsSettingsResponse
 */
ListFlashSmsSettingsResponse Client::listFlashSmsSettings(const ListFlashSmsSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsSettingsWithOptions(request, runtime);
}

/**
 * @summary Use ListFlashSmsTemplates to retrieve flash SMS template information.
 *
 * @param request ListFlashSmsTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsTemplatesResponse
 */
ListFlashSmsTemplatesResponse Client::listFlashSmsTemplatesWithOptions(const ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProviderId()) {
    query["ProviderId"] = request.getProviderId();
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
 * @summary Use ListFlashSmsTemplates to retrieve flash SMS template information.
 *
 * @param request ListFlashSmsTemplatesRequest
 * @return ListFlashSmsTemplatesResponse
 */
ListFlashSmsTemplatesResponse Client::listFlashSmsTemplates(const ListFlashSmsTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the records of group chat messages.
 *
 * @param request ListGroupChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGroupChatMessagesResponse
 */
ListGroupChatMessagesResponse Client::listGroupChatMessagesWithOptions(const ListGroupChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
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
 * @summary Retrieves the records of group chat messages.
 *
 * @param request ListGroupChatMessagesRequest
 * @return ListGroupChatMessagesResponse
 */
ListGroupChatMessagesResponse Client::listGroupChatMessages(const ListGroupChatMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGroupChatMessagesWithOptions(request, runtime);
}

/**
 * @summary Retrieves historical data reports for one or more agents in a specified instance.
 *
 * @param request ListHistoricalAgentReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHistoricalAgentReportResponse
 */
ListHistoricalAgentReportResponse Client::listHistoricalAgentReportWithOptions(const ListHistoricalAgentReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStopTime()) {
    query["StopTime"] = request.getStopTime();
  }

  json body = {};
  if (!!request.hasAgentIdList()) {
    body["AgentIdList"] = request.getAgentIdList();
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
 * @summary Retrieves historical data reports for one or more agents in a specified instance.
 *
 * @param request ListHistoricalAgentReportRequest
 * @return ListHistoricalAgentReportResponse
 */
ListHistoricalAgentReportResponse Client::listHistoricalAgentReport(const ListHistoricalAgentReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHistoricalAgentReportWithOptions(request, runtime);
}

/**
 * @summary You can call ListHistoricalAgentSkillGroupReport to retrieve historical skill group reports for one or more agents in a specified instance.
 *
 * @param request ListHistoricalAgentSkillGroupReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHistoricalAgentSkillGroupReportResponse
 */
ListHistoricalAgentSkillGroupReportResponse Client::listHistoricalAgentSkillGroupReportWithOptions(const ListHistoricalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.getSkillGroupIdList();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  json body = {};
  if (!!request.hasAgentIdList()) {
    body["AgentIdList"] = request.getAgentIdList();
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
 * @summary You can call ListHistoricalAgentSkillGroupReport to retrieve historical skill group reports for one or more agents in a specified instance.
 *
 * @param request ListHistoricalAgentSkillGroupReportRequest
 * @return ListHistoricalAgentSkillGroupReportResponse
 */
ListHistoricalAgentSkillGroupReportResponse Client::listHistoricalAgentSkillGroupReport(const ListHistoricalAgentSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHistoricalAgentSkillGroupReportWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListHistoricalSkillGroupReport to obtain historical data reports for one or more skill groups under a specified instance.
 *
 * @param request ListHistoricalSkillGroupReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHistoricalSkillGroupReportResponse
 */
ListHistoricalSkillGroupReportResponse Client::listHistoricalSkillGroupReportWithOptions(const ListHistoricalSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  json body = {};
  if (!!request.hasSkillGroupIdList()) {
    body["SkillGroupIdList"] = request.getSkillGroupIdList();
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
 * @summary You can invoke ListHistoricalSkillGroupReport to obtain historical data reports for one or more skill groups under a specified instance.
 *
 * @param request ListHistoricalSkillGroupReportRequest
 * @return ListHistoricalSkillGroupReportResponse
 */
ListHistoricalSkillGroupReportResponse Client::listHistoricalSkillGroupReport(const ListHistoricalSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHistoricalSkillGroupReportWithOptions(request, runtime);
}

/**
 * @summary Invoke the ListInstances API to obtain the list of Cloud Contact Center instances under the current Alibaba Cloud account.
 *
 * @description If a RAM user needs to invoke this API, the RAM user must have the "Manage Cloud Call Center (CCC)" permission (AliyunCCCFullAccess).
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Invoke the ListInstances API to obtain the list of Cloud Contact Center instances under the current Alibaba Cloud account.
 *
 * @description If a RAM user needs to invoke this API, the RAM user must have the "Manage Cloud Call Center (CCC)" permission (AliyunCCCFullAccess).
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListInstancesOfUser to obtain the list of Cloud Contact Center instances to which the User belongs.
 *
 * @param request ListInstancesOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesOfUserResponse
 */
ListInstancesOfUserResponse Client::listInstancesOfUserWithOptions(const ListInstancesOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary You can invoke ListInstancesOfUser to obtain the list of Cloud Contact Center instances to which the User belongs.
 *
 * @param request ListInstancesOfUserRequest
 * @return ListInstancesOfUserResponse
 */
ListInstancesOfUserResponse Client::listInstancesOfUser(const ListInstancesOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesOfUserWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListIntervalAgentReport to obtain the segment statistical report of a specified agent under a specified instance.
 *
 * @param request ListIntervalAgentReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntervalAgentReportResponse
 */
ListIntervalAgentReportResponse Client::listIntervalAgentReportWithOptions(const ListIntervalAgentReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can invoke ListIntervalAgentReport to obtain the segment statistical report of a specified agent under a specified instance.
 *
 * @param request ListIntervalAgentReportRequest
 * @return ListIntervalAgentReportResponse
 */
ListIntervalAgentReportResponse Client::listIntervalAgentReport(const ListIntervalAgentReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervalAgentReportWithOptions(request, runtime);
}

/**
 * @summary Retrieves the interval-based statistical report for a specified agent in a specified instance.
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
 * @summary Retrieves the interval-based statistical report for a specified agent in a specified instance.
 *
 * @param request ListIntervalAgentSkillGroupReportRequest
 * @return ListIntervalAgentSkillGroupReportResponse
 */
ListIntervalAgentSkillGroupReportResponse Client::listIntervalAgentSkillGroupReport(const ListIntervalAgentSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervalAgentSkillGroupReportWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListIntervalInstanceReport to obtain the segment statistical report for a specified instance.
 *
 * @param request ListIntervalInstanceReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntervalInstanceReportResponse
 */
ListIntervalInstanceReportResponse Client::listIntervalInstanceReportWithOptions(const ListIntervalInstanceReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can invoke ListIntervalInstanceReport to obtain the segment statistical report for a specified instance.
 *
 * @param request ListIntervalInstanceReportRequest
 * @return ListIntervalInstanceReportResponse
 */
ListIntervalInstanceReportResponse Client::listIntervalInstanceReport(const ListIntervalInstanceReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervalInstanceReportWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListIntervalSkillGroupReport to obtain the segment-based statistical report of a specified skill group under a specified instance.
 *
 * @param request ListIntervalSkillGroupReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntervalSkillGroupReportResponse
 */
ListIntervalSkillGroupReportResponse Client::listIntervalSkillGroupReportWithOptions(const ListIntervalSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can invoke ListIntervalSkillGroupReport to obtain the segment-based statistical report of a specified skill group under a specified instance.
 *
 * @param request ListIntervalSkillGroupReportRequest
 * @return ListIntervalSkillGroupReportResponse
 */
ListIntervalSkillGroupReportResponse Client::listIntervalSkillGroupReport(const ListIntervalSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervalSkillGroupReportWithOptions(request, runtime);
}

/**
 * @summary Invoke ListIvrTrackingDetails to obtain the IVR tracking details of a specified call under a specified instance.
 *
 * @param request ListIvrTrackingDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIvrTrackingDetailsResponse
 */
ListIvrTrackingDetailsResponse Client::listIvrTrackingDetailsWithOptions(const ListIvrTrackingDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Invoke ListIvrTrackingDetails to obtain the IVR tracking details of a specified call under a specified instance.
 *
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
 * @summary You can invoke ListLegacyAgentEventLogs to obtain the list of 1.0 legacy agent event logs. This API is available only to specific Users, and other Customers are not recommended to invoke it.
 *
 * @param request ListLegacyAgentEventLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLegacyAgentEventLogsResponse
 */
ListLegacyAgentEventLogsResponse Client::listLegacyAgentEventLogsWithOptions(const ListLegacyAgentEventLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can invoke ListLegacyAgentEventLogs to obtain the list of 1.0 legacy agent event logs. This API is available only to specific Users, and other Customers are not recommended to invoke it.
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
 * @summary You can invoke ListLegacyAgentStatusLogs to obtain the list of legacy agent status logs for version 1.0. This API is available only to specific Users, and other Customers are not recommended to invoke it.
 *
 * @param request ListLegacyAgentStatusLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLegacyAgentStatusLogsResponse
 */
ListLegacyAgentStatusLogsResponse Client::listLegacyAgentStatusLogsWithOptions(const ListLegacyAgentStatusLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can invoke ListLegacyAgentStatusLogs to obtain the list of legacy agent status logs for version 1.0. This API is available only to specific Users, and other Customers are not recommended to invoke it.
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can invoke ListLegacyQueueEventLogs to obtain the list of 1.0 legacy queue event logs. This API is available only to specific Users, and other Customers are not recommended to invoke it.
 *
 * @param request ListLegacyQueueEventLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLegacyQueueEventLogsResponse
 */
ListLegacyQueueEventLogsResponse Client::listLegacyQueueEventLogsWithOptions(const ListLegacyQueueEventLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can invoke ListLegacyQueueEventLogs to obtain the list of 1.0 legacy queue event logs. This API is available only to specific Users, and other Customers are not recommended to invoke it.
 *
 * @param request ListLegacyQueueEventLogsRequest
 * @return ListLegacyQueueEventLogsResponse
 */
ListLegacyQueueEventLogsResponse Client::listLegacyQueueEventLogs(const ListLegacyQueueEventLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLegacyQueueEventLogsWithOptions(request, runtime);
}

/**
 * @summary Call ListMonoRecordings to retrieve single-track recordings for each party in a specified call under a specified instance. During a call, each party has a channel, and each channel generates a combined track recording in WAV format.
 *
 * @param request ListMonoRecordingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMonoRecordingsResponse
 */
ListMonoRecordingsResponse Client::listMonoRecordingsWithOptions(const ListMonoRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentChannelId()) {
    query["AgentChannelId"] = request.getAgentChannelId();
  }

  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Call ListMonoRecordings to retrieve single-track recordings for each party in a specified call under a specified instance. During a call, each party has a channel, and each channel generates a combined track recording in WAV format.
 *
 * @param request ListMonoRecordingsRequest
 * @return ListMonoRecordingsResponse
 */
ListMonoRecordingsResponse Client::listMonoRecordings(const ListMonoRecordingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMonoRecordingsWithOptions(request, runtime);
}

/**
 * @summary Call ListMultiChannelRecordings to retrieve the multi-channel recordings for each party in a specified call and instance. Each party has a call channel that corresponds to a multi-channel recording in MKV format.
 *
 * @param request ListMultiChannelRecordingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultiChannelRecordingsResponse
 */
ListMultiChannelRecordingsResponse Client::listMultiChannelRecordingsWithOptions(const ListMultiChannelRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentChannelId()) {
    query["AgentChannelId"] = request.getAgentChannelId();
  }

  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Call ListMultiChannelRecordings to retrieve the multi-channel recordings for each party in a specified call and instance. Each party has a call channel that corresponds to a multi-channel recording in MKV format.
 *
 * @param request ListMultiChannelRecordingsRequest
 * @return ListMultiChannelRecordingsResponse
 */
ListMultiChannelRecordingsResponse Client::listMultiChannelRecordings(const ListMultiChannelRecordingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMultiChannelRecordingsWithOptions(request, runtime);
}

/**
 * @summary Query notification records that were not sent using Message Queue (MQ).
 *
 * @param request ListNotificationRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNotificationRecordsResponse
 */
ListNotificationRecordsResponse Client::listNotificationRecordsWithOptions(const ListNotificationRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNotificationKeys()) {
    query["NotificationKeys"] = request.getNotificationKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNotificationRecords"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNotificationRecordsResponse>();
}

/**
 * @summary Query notification records that were not sent using Message Queue (MQ).
 *
 * @param request ListNotificationRecordsRequest
 * @return ListNotificationRecordsResponse
 */
ListNotificationRecordsResponse Client::listNotificationRecords(const ListNotificationRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNotificationRecordsWithOptions(request, runtime);
}

/**
 * @summary `ListOutboundNumbersOfUser` retrieves the outbound numbers for a specified agent in a specified instance.
 *
 * @param request ListOutboundNumbersOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOutboundNumbersOfUserResponse
 */
ListOutboundNumbersOfUserResponse Client::listOutboundNumbersOfUserWithOptions(const ListOutboundNumbersOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.getSkillGroupIdList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary `ListOutboundNumbersOfUser` retrieves the outbound numbers for a specified agent in a specified instance.
 *
 * @param request ListOutboundNumbersOfUserRequest
 * @return ListOutboundNumbersOfUserResponse
 */
ListOutboundNumbersOfUserResponse Client::listOutboundNumbersOfUser(const ListOutboundNumbersOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOutboundNumbersOfUserWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListPersonalNumbersOfUser to obtain the list of personal outbound numbers for a specified agent under a specified instance. You can also use this API to retrieve the list of numbers that can be added as personal outbound numbers for an agent.
 *
 * @description Note: If a number is already attached to a skill group, it will not appear in the list of numbers available as personal outbound numbers.
 *
 * @param request ListPersonalNumbersOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPersonalNumbersOfUserResponse
 */
ListPersonalNumbersOfUserResponse Client::listPersonalNumbersOfUserWithOptions(const ListPersonalNumbersOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsMember()) {
    query["IsMember"] = request.getIsMember();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke ListPersonalNumbersOfUser to obtain the list of personal outbound numbers for a specified agent under a specified instance. You can also use this API to retrieve the list of numbers that can be added as personal outbound numbers for an agent.
 *
 * @description Note: If a number is already attached to a skill group, it will not appear in the list of numbers available as personal outbound numbers.
 *
 * @param request ListPersonalNumbersOfUserRequest
 * @return ListPersonalNumbersOfUserResponse
 */
ListPersonalNumbersOfUserResponse Client::listPersonalNumbersOfUser(const ListPersonalNumbersOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPersonalNumbersOfUserWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListPhoneNumbers to obtain the phone number list under a specified instance.
 *
 * @param request ListPhoneNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPhoneNumbersResponse
 */
ListPhoneNumbersResponse Client::listPhoneNumbersWithOptions(const ListPhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.getActive();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.getUsage();
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
 * @summary You can invoke ListPhoneNumbers to obtain the phone number list under a specified instance.
 *
 * @param request ListPhoneNumbersRequest
 * @return ListPhoneNumbersResponse
 */
ListPhoneNumbersResponse Client::listPhoneNumbers(const ListPhoneNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPhoneNumbersWithOptions(request, runtime);
}

/**
 * @summary You can invoke the ListPhoneNumbersOfSkillGroup API to obtain the list of phone numbers associated with a specified skill group under a specified instance. You can also use this API to query phone numbers that are not currently associated with the skill group but can be associated with it.
 *
 * @description Note: If a phone number is already used as a personal outbound number, it will not appear in the list of numbers available for association with a skill group.
 *
 * @param request ListPhoneNumbersOfSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPhoneNumbersOfSkillGroupResponse
 */
ListPhoneNumbersOfSkillGroupResponse Client::listPhoneNumbersOfSkillGroupWithOptions(const ListPhoneNumbersOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.getActive();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsMember()) {
    query["IsMember"] = request.getIsMember();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary You can invoke the ListPhoneNumbersOfSkillGroup API to obtain the list of phone numbers associated with a specified skill group under a specified instance. You can also use this API to query phone numbers that are not currently associated with the skill group but can be associated with it.
 *
 * @description Note: If a phone number is already used as a personal outbound number, it will not appear in the list of numbers available for association with a skill group.
 *
 * @param request ListPhoneNumbersOfSkillGroupRequest
 * @return ListPhoneNumbersOfSkillGroupResponse
 */
ListPhoneNumbersOfSkillGroupResponse Client::listPhoneNumbersOfSkillGroup(const ListPhoneNumbersOfSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPhoneNumbersOfSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Invoke ListPrivilegesOfUser to obtain the permissions owned by the current User.
 *
 * @param request ListPrivilegesOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivilegesOfUserResponse
 */
ListPrivilegesOfUserResponse Client::listPrivilegesOfUserWithOptions(const ListPrivilegesOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke ListPrivilegesOfUser to obtain the permissions owned by the current User.
 *
 * @param request ListPrivilegesOfUserRequest
 * @return ListPrivilegesOfUserResponse
 */
ListPrivilegesOfUserResponse Client::listPrivilegesOfUser(const ListPrivilegesOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPrivilegesOfUserWithOptions(request, runtime);
}

/**
 * @summary Lists RAM users that have not been imported into a specified instance.
 *
 * @description A Resource Access Management (RAM) user can be imported as an agent into multiple Cloud Contact Center (CCC) instances. However, an agent can be associated with only one RAM account. When you create an agent in a CCC instance, a corresponding RAM account is also created. To avoid creating redundant RAM accounts when you set up a new instance, you can call the ListRamUsers operation to list RAM users that have not been imported into the instance. You can then call the operation that imports RAM users to add them to the new instance. This prevents creating unnecessary RAM accounts and conserves resources.
 *
 * @param request ListRamUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRamUsersResponse
 */
ListRamUsersResponse Client::listRamUsersWithOptions(const ListRamUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
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
 * @summary Lists RAM users that have not been imported into a specified instance.
 *
 * @description A Resource Access Management (RAM) user can be imported as an agent into multiple Cloud Contact Center (CCC) instances. However, an agent can be associated with only one RAM account. When you create an agent in a CCC instance, a corresponding RAM account is also created. To avoid creating redundant RAM accounts when you set up a new instance, you can call the ListRamUsers operation to list RAM users that have not been imported into the instance. You can then call the operation that imports RAM users to add them to the new instance. This prevents creating unnecessary RAM accounts and conserves resources.
 *
 * @param request ListRamUsersRequest
 * @return ListRamUsersResponse
 */
ListRamUsersResponse Client::listRamUsers(const ListRamUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRamUsersWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListRealtimeAgentStates to obtain a real-time status data report for one or more specified agents in a specified instance.
 *
 * @param request ListRealtimeAgentStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRealtimeAgentStatesResponse
 */
ListRealtimeAgentStatesResponse Client::listRealtimeAgentStatesWithOptions(const ListRealtimeAgentStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentName()) {
    query["AgentName"] = request.getAgentName();
  }

  if (!!request.hasCallTypeList()) {
    query["CallTypeList"] = request.getCallTypeList();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasOutboundScenario()) {
    query["OutboundScenario"] = request.getOutboundScenario();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasWorkModeList()) {
    query["WorkModeList"] = request.getWorkModeList();
  }

  json body = {};
  if (!!request.hasAgentIdList()) {
    body["AgentIdList"] = request.getAgentIdList();
  }

  if (!!request.hasStateList()) {
    body["StateList"] = request.getStateList();
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
 * @summary You can invoke ListRealtimeAgentStates to obtain a real-time status data report for one or more specified agents in a specified instance.
 *
 * @param request ListRealtimeAgentStatesRequest
 * @return ListRealtimeAgentStatesResponse
 */
ListRealtimeAgentStatesResponse Client::listRealtimeAgentStates(const ListRealtimeAgentStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRealtimeAgentStatesWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListRealtimeSkillGroupStates to obtain the real-time skill group status report for a specified instance.
 *
 * @param request ListRealtimeSkillGroupStatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRealtimeSkillGroupStatesResponse
 */
ListRealtimeSkillGroupStatesResponse Client::listRealtimeSkillGroupStatesWithOptions(const ListRealtimeSkillGroupStatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  json body = {};
  if (!!request.hasSkillGroupIdList()) {
    body["SkillGroupIdList"] = request.getSkillGroupIdList();
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
 * @summary You can invoke ListRealtimeSkillGroupStates to obtain the real-time skill group status report for a specified instance.
 *
 * @param request ListRealtimeSkillGroupStatesRequest
 * @return ListRealtimeSkillGroupStatesResponse
 */
ListRealtimeSkillGroupStatesResponse Client::listRealtimeSkillGroupStates(const ListRealtimeSkillGroupStatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRealtimeSkillGroupStatesWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListRecentCallDetailRecords to obtain the list of recent call detail records for agents mapped to the current Resource Access Management (RAM) user under the specified instance.
 *
 * @param request ListRecentCallDetailRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecentCallDetailRecordsResponse
 */
ListRecentCallDetailRecordsResponse Client::listRecentCallDetailRecordsWithOptions(const ListRecentCallDetailRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCriteria()) {
    query["Criteria"] = request.getCriteria();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  json body = {};
  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary You can invoke ListRecentCallDetailRecords to obtain the list of recent call detail records for agents mapped to the current Resource Access Management (RAM) user under the specified instance.
 *
 * @param request ListRecentCallDetailRecordsRequest
 * @return ListRecentCallDetailRecordsResponse
 */
ListRecentCallDetailRecordsResponse Client::listRecentCallDetailRecords(const ListRecentCallDetailRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecentCallDetailRecordsWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListRoles to obtain all roles under a specified instance.
 *
 * @param request ListRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke ListRoles to obtain all roles under a specified instance.
 *
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
 * @summary You can invoke the ListSkillgroupStates API to obtain the status list of specified skill groups under a specified instance. This API is only available to specific Users, and other Customers are not recommended to invoke it.
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
 * @summary You can invoke the ListSkillgroupStates API to obtain the status list of specified skill groups under a specified instance. This API is only available to specific Users, and other Customers are not recommended to invoke it.
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
 * @summary The `ListSkillgroupSummaryReportsSinceMidnight` operation retrieves historical summary reports, filtered by specified conditions, for skill groups in a specified instance. The report contains data from 00:00 (midnight) today to the time of the request. This operation is available to specific users only.
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
 * @summary The `ListSkillgroupSummaryReportsSinceMidnight` operation retrieves historical summary reports, filtered by specified conditions, for skill groups in a specified instance. The report contains data from 00:00 (midnight) today to the time of the request. This operation is available to specific users only.
 *
 * @param request ListSkillGroupSummaryReportsSinceMidnightRequest
 * @return ListSkillGroupSummaryReportsSinceMidnightResponse
 */
ListSkillGroupSummaryReportsSinceMidnightResponse Client::listSkillGroupSummaryReportsSinceMidnight(const ListSkillGroupSummaryReportsSinceMidnightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillGroupSummaryReportsSinceMidnightWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListSkillGroups to obtain the list of skill groups under a specified instance.
 *
 * @param request ListSkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillGroupsResponse
 */
ListSkillGroupsResponse Client::listSkillGroupsWithOptions(const ListSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
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
 * @summary You can invoke ListSkillGroups to obtain the list of skill groups under a specified instance.
 *
 * @param request ListSkillGroupsRequest
 * @return ListSkillGroupsResponse
 */
ListSkillGroupsResponse Client::listSkillGroups(const ListSkillGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillGroupsWithOptions(request, runtime);
}

/**
 * @summary You can use this API to retrieve the list of skill levels for skill groups associated with a specified agent under a specified instance. You can also use this API to query the list of skill groups that the agent can be associated with but is not currently associated with.
 *
 * @param request ListSkillLevelsOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillLevelsOfUserResponse
 */
ListSkillLevelsOfUserResponse Client::listSkillLevelsOfUserWithOptions(const ListSkillLevelsOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsMember()) {
    query["IsMember"] = request.getIsMember();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can use this API to retrieve the list of skill levels for skill groups associated with a specified agent under a specified instance. You can also use this API to query the list of skill groups that the agent can be associated with but is not currently associated with.
 *
 * @param request ListSkillLevelsOfUserRequest
 * @return ListSkillLevelsOfUserResponse
 */
ListSkillLevelsOfUserResponse Client::listSkillLevelsOfUser(const ListSkillLevelsOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillLevelsOfUserWithOptions(request, runtime);
}

/**
 * @summary Queries the details of SMS configurations.
 *
 * @param request ListSmsMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmsMetadataResponse
 */
ListSmsMetadataResponse Client::listSmsMetadataWithOptions(const ListSmsMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScenarioListJson()) {
    query["ScenarioListJson"] = request.getScenarioListJson();
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
 * @summary Queries the details of SMS configurations.
 *
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
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary Retrieves a list of ticket templates.
 *
 * @param request ListTicketTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketTemplatesResponse
 */
ListTicketTemplatesResponse Client::listTicketTemplatesWithOptions(const ListTicketTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
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
 * @summary Retrieves a list of ticket templates.
 *
 * @param request ListTicketTemplatesRequest
 * @return ListTicketTemplatesResponse
 */
ListTicketTemplatesResponse Client::listTicketTemplates(const ListTicketTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTicketTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of tickets for an instance.
 *
 * @param request ListTicketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTicketsWithOptions(const ListTicketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignee()) {
    query["Assignee"] = request.getAssignee();
  }

  if (!!request.hasAssigneeType()) {
    query["AssigneeType"] = request.getAssigneeType();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.getCategoryId();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.getCreator();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobIdList()) {
    query["JobIdList"] = request.getJobIdList();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParticipant()) {
    query["Participant"] = request.getParticipant();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
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
 * @summary Retrieves a list of tickets for an instance.
 *
 * @param request ListTicketsRequest
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTickets(const ListTicketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTicketsWithOptions(request, runtime);
}

/**
 * @summary You can invoke ListUnassignedNumbers to obtain the list of numbers under your Alibaba Cloud account that have not been assigned to an instance.
 *
 * @param request ListUnassignedNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUnassignedNumbersResponse
 */
ListUnassignedNumbersResponse Client::listUnassignedNumbersWithOptions(const ListUnassignedNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
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
 * @summary You can invoke ListUnassignedNumbers to obtain the list of numbers under your Alibaba Cloud account that have not been assigned to an instance.
 *
 * @param request ListUnassignedNumbersRequest
 * @return ListUnassignedNumbersResponse
 */
ListUnassignedNumbersResponse Client::listUnassignedNumbers(const ListUnassignedNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUnassignedNumbersWithOptions(request, runtime);
}

/**
 * @summary You can invoke the ListUserLevelsOfSkillGroup API to retrieve the list of agent skill levels under a specified skill group in a given instance. You can also use this API to retrieve the list of agents who can be associated with but are not currently associated with the specified skill group.
 *
 * @param request ListUserLevelsOfSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserLevelsOfSkillGroupResponse
 */
ListUserLevelsOfSkillGroupResponse Client::listUserLevelsOfSkillGroupWithOptions(const ListUserLevelsOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsMember()) {
    query["IsMember"] = request.getIsMember();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary You can invoke the ListUserLevelsOfSkillGroup API to retrieve the list of agent skill levels under a specified skill group in a given instance. You can also use this API to retrieve the list of agents who can be associated with but are not currently associated with the specified skill group.
 *
 * @param request ListUserLevelsOfSkillGroupRequest
 * @return ListUserLevelsOfSkillGroupResponse
 */
ListUserLevelsOfSkillGroupResponse Client::listUserLevelsOfSkillGroup(const ListUserLevelsOfSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserLevelsOfSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Invoke ListUsers to obtain the agent list under a specified instance.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    query["SearchPattern"] = request.getSearchPattern();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary Invoke ListUsers to obtain the agent list under a specified instance.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary You can use ListVisitorChatMessages to retrieve visitor chat records.
 *
 * @param request ListVisitorChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVisitorChatMessagesResponse
 */
ListVisitorChatMessagesResponse Client::listVisitorChatMessagesWithOptions(const ListVisitorChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessChannelId()) {
    query["AccessChannelId"] = request.getAccessChannelId();
  }

  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.getAccessToken();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.getNextPageToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVisitorId()) {
    query["VisitorId"] = request.getVisitorId();
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
 * @summary You can use ListVisitorChatMessages to retrieve visitor chat records.
 *
 * @param request ListVisitorChatMessagesRequest
 * @return ListVisitorChatMessagesResponse
 */
ListVisitorChatMessagesResponse Client::listVisitorChatMessages(const ListVisitorChatMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVisitorChatMessagesWithOptions(request, runtime);
}

/**
 * @summary You can call the ListVoicemails operation to retrieve a list of voicemails for a specified instance.
 *
 * @param request ListVoicemailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoicemailsResponse
 */
ListVoicemailsResponse Client::listVoicemailsWithOptions(const ListVoicemailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary You can call the ListVoicemails operation to retrieve a list of voicemails for a specified instance.
 *
 * @param request ListVoicemailsRequest
 * @return ListVoicemailsResponse
 */
ListVoicemailsResponse Client::listVoicemails(const ListVoicemailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVoicemailsWithOptions(request, runtime);
}

/**
 * @summary The ListWaitingChats operation allows agents to retrieve chats that are waiting in a queue to be assigned or claimed.
 *
 * @param request ListWaitingChatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWaitingChatsResponse
 */
ListWaitingChatsResponse Client::listWaitingChatsWithOptions(const ListWaitingChatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.getSkillGroupIdList();
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
 * @summary The ListWaitingChats operation allows agents to retrieve chats that are waiting in a queue to be assigned or claimed.
 *
 * @param request ListWaitingChatsRequest
 * @return ListWaitingChatsResponse
 */
ListWaitingChatsResponse Client::listWaitingChats(const ListWaitingChatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWaitingChatsWithOptions(request, runtime);
}

/**
 * @summary You can invoke MakeCall to initiate a call. The callee can be an internal agent or an external customer.
 *
 * @param request MakeCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MakeCallResponse
 */
MakeCallResponse Client::makeCallWithOptions(const MakeCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.getCallee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasFlashSmsVariables()) {
    query["FlashSmsVariables"] = request.getFlashSmsVariables();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaskedCallee()) {
    query["MaskedCallee"] = request.getMaskedCallee();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke MakeCall to initiate a call. The callee can be an internal agent or an external customer.
 *
 * @param request MakeCallRequest
 * @return MakeCallResponse
 */
MakeCallResponse Client::makeCall(const MakeCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return makeCallWithOptions(request, runtime);
}

/**
 * @summary You can invoke ModifyAudioFile to modify the audio file associated with a specified audio resource ID under a given instance. You can update the audio file name, display name, and the OSS key of the audio file.
 *
 * @param request ModifyAudioFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAudioFileResponse
 */
ModifyAudioFileResponse Client::modifyAudioFileWithOptions(const ModifyAudioFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioFileName()) {
    query["AudioFileName"] = request.getAudioFileName();
  }

  if (!!request.hasAudioResourceId()) {
    query["AudioResourceId"] = request.getAudioResourceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOssFileKey()) {
    query["OssFileKey"] = request.getOssFileKey();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.getUsage();
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
 * @summary You can invoke ModifyAudioFile to modify the audio file associated with a specified audio resource ID under a given instance. You can update the audio file name, display name, and the OSS key of the audio file.
 *
 * @param request ModifyAudioFileRequest
 * @return ModifyAudioFileResponse
 */
ModifyAudioFileResponse Client::modifyAudioFile(const ModifyAudioFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAudioFileWithOptions(request, runtime);
}

/**
 * @summary Modifies the calling numbers for a batch prediction outbound campaign.
 *
 * @param tmpReq ModifyCampaignNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCampaignNumbersResponse
 */
ModifyCampaignNumbersResponse Client::modifyCampaignNumbersWithOptions(const ModifyCampaignNumbersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyCampaignNumbersShrinkRequest request = ModifyCampaignNumbersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNumberList()) {
    request.setNumberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNumberList(), "NumberList", "json"));
  }

  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstGroupId()) {
    query["InstGroupId"] = request.getInstGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberListShrink()) {
    query["NumberList"] = request.getNumberListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCampaignNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCampaignNumbersResponse>();
}

/**
 * @summary Modifies the calling numbers for a batch prediction outbound campaign.
 *
 * @param request ModifyCampaignNumbersRequest
 * @return ModifyCampaignNumbersResponse
 */
ModifyCampaignNumbersResponse Client::modifyCampaignNumbers(const ModifyCampaignNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCampaignNumbersWithOptions(request, runtime);
}

/**
 * @summary You can invoke ModifyCustomCallTagging to modify the description and attached number tags of an inbound number mark for a specified number under a specified instance.
 *
 * @param request ModifyCustomCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomCallTaggingResponse
 */
ModifyCustomCallTaggingResponse Client::modifyCustomCallTaggingWithOptions(const ModifyCustomCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallTagNameList()) {
    query["CallTagNameList"] = request.getCallTagNameList();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
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
 * @summary You can invoke ModifyCustomCallTagging to modify the description and attached number tags of an inbound number mark for a specified number under a specified instance.
 *
 * @param request ModifyCustomCallTaggingRequest
 * @return ModifyCustomCallTaggingResponse
 */
ModifyCustomCallTaggingResponse Client::modifyCustomCallTagging(const ModifyCustomCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomCallTaggingWithOptions(request, runtime);
}

/**
 * @summary You can invoke ModifyInstance to modify a Cloud Contact Center instance.
 *
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary You can invoke ModifyInstance to modify a Cloud Contact Center instance.
 *
 * @param request ModifyInstanceRequest
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstance(const ModifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceWithOptions(request, runtime);
}

/**
 * @summary You can invoke ModifyPhoneNumber to modify the information of a specified phone number under a specified instance, primarily to update the number\\"s usage and the attached contact flow ID.
 *
 * @param request ModifyPhoneNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPhoneNumberResponse
 */
ModifyPhoneNumberResponse Client::modifyPhoneNumberWithOptions(const ModifyPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  if (!!request.hasUsage()) {
    query["Usage"] = request.getUsage();
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
 * @summary You can invoke ModifyPhoneNumber to modify the information of a specified phone number under a specified instance, primarily to update the number\\"s usage and the attached contact flow ID.
 *
 * @param request ModifyPhoneNumberRequest
 * @return ModifyPhoneNumberResponse
 */
ModifyPhoneNumberResponse Client::modifyPhoneNumber(const ModifyPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPhoneNumberWithOptions(request, runtime);
}

/**
 * @summary You can invoke ModifySkillGroup to modify the information of a skill group associated with a specified skill group ID under a specified instance, primarily updating the skill group\\"s display name and description.
 *
 * @param request ModifySkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySkillGroupResponse
 */
ModifySkillGroupResponse Client::modifySkillGroupWithOptions(const ModifySkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary You can invoke ModifySkillGroup to modify the information of a skill group associated with a specified skill group ID under a specified instance, primarily updating the skill group\\"s display name and description.
 *
 * @param request ModifySkillGroupRequest
 * @return ModifySkillGroupResponse
 */
ModifySkillGroupResponse Client::modifySkillGroup(const ModifySkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySkillGroupWithOptions(request, runtime);
}

/**
 * @summary Modify the skill level of a specified agent in one or more skill groups under a specified instance.
 *
 * @param request ModifySkillLevelsOfUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySkillLevelsOfUserResponse
 */
ModifySkillLevelsOfUserResponse Client::modifySkillLevelsOfUserWithOptions(const ModifySkillLevelsOfUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillLevelList()) {
    query["SkillLevelList"] = request.getSkillLevelList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Modify the skill level of a specified agent in one or more skill groups under a specified instance.
 *
 * @param request ModifySkillLevelsOfUserRequest
 * @return ModifySkillLevelsOfUserResponse
 */
ModifySkillLevelsOfUserResponse Client::modifySkillLevelsOfUser(const ModifySkillLevelsOfUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySkillLevelsOfUserWithOptions(request, runtime);
}

/**
 * @summary You can invoke ModifyUser to modify the information of a specified agent under a specified instance. You can modify the phone number, work mode, role, and agent ID.
 *
 * @param request ModifyUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUserWithOptions(const ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarUrl()) {
    query["AvatarUrl"] = request.getAvatarUrl();
  }

  if (!!request.hasDisplayId()) {
    query["DisplayId"] = request.getDisplayId();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasNickname()) {
    query["Nickname"] = request.getNickname();
  }

  if (!!request.hasRoleId()) {
    query["RoleId"] = request.getRoleId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasWorkMode()) {
    query["WorkMode"] = request.getWorkMode();
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
 * @summary You can invoke ModifyUser to modify the information of a specified agent under a specified instance. You can modify the phone number, work mode, role, and agent ID.
 *
 * @param request ModifyUserRequest
 * @return ModifyUserResponse
 */
ModifyUserResponse Client::modifyUser(const ModifyUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserWithOptions(request, runtime);
}

/**
 * @summary You can invoke ModifyUserLevelsOfSkillGroup to modify the skill levels of one or more agents under a specified skill group in a specified instance.
 *
 * @param request ModifyUserLevelsOfSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserLevelsOfSkillGroupResponse
 */
ModifyUserLevelsOfSkillGroupResponse Client::modifyUserLevelsOfSkillGroupWithOptions(const ModifyUserLevelsOfSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasUserLevelList()) {
    query["UserLevelList"] = request.getUserLevelList();
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
 * @summary You can invoke ModifyUserLevelsOfSkillGroup to modify the skill levels of one or more agents under a specified skill group in a specified instance.
 *
 * @param request ModifyUserLevelsOfSkillGroupRequest
 * @return ModifyUserLevelsOfSkillGroupResponse
 */
ModifyUserLevelsOfSkillGroupResponse Client::modifyUserLevelsOfSkillGroup(const ModifyUserLevelsOfSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserLevelsOfSkillGroupWithOptions(request, runtime);
}

/**
 * @summary You can invoke MonitorCall to listen to a call associated with a specified call ID under a specified instance. The call must be in a state where both the agent and the customer are normally connected, and the agent initiating the listening must have permission to monitor the target agent.
 *
 * @param request MonitorCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MonitorCallResponse
 */
MonitorCallResponse Client::monitorCallWithOptions(const MonitorCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMonitoredUserId()) {
    query["MonitoredUserId"] = request.getMonitoredUserId();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke MonitorCall to listen to a call associated with a specified call ID under a specified instance. The call must be in a state where both the agent and the customer are normally connected, and the agent initiating the listening must have permission to monitor the target agent.
 *
 * @param request MonitorCallRequest
 * @return MonitorCallResponse
 */
MonitorCallResponse Client::monitorCall(const MonitorCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return monitorCallWithOptions(request, runtime);
}

/**
 * @summary You can invoke MuteCall to mute the call associated with a specified call ID under a specified instance. This operation can only be invoked by an agent who is in a talking state, and the agent can only mute themselves. After the agent mutes themselves, the customer will no longer hear the agent\\"s voice.
 *
 * @param request MuteCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MuteCallResponse
 */
MuteCallResponse Client::muteCallWithOptions(const MuteCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke MuteCall to mute the call associated with a specified call ID under a specified instance. This operation can only be invoked by an agent who is in a talking state, and the agent can only mute themselves. After the agent mutes themselves, the customer will no longer hear the agent\\"s voice.
 *
 * @param request MuteCallRequest
 * @return MuteCallResponse
 */
MuteCallResponse Client::muteCall(const MuteCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return muteCallWithOptions(request, runtime);
}

/**
 * @summary Invoke PauseCampaign to pause the predictive outbound calling Activity corresponding to the specified ID under the specified instance.
 *
 * @param request PauseCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseCampaignResponse
 */
PauseCampaignResponse Client::pauseCampaignWithOptions(const PauseCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke PauseCampaign to pause the predictive outbound calling Activity corresponding to the specified ID under the specified instance.
 *
 * @param request PauseCampaignRequest
 * @return PauseCampaignResponse
 */
PauseCampaignResponse Client::pauseCampaign(const PauseCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseCampaignWithOptions(request, runtime);
}

/**
 * @summary You can invoke PickOutboundNumbers to select an appropriate caller number based on the provided callee number. The number selection logic is controlled by an Intelligent algorithm.
 *
 * @param request PickOutboundNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PickOutboundNumbersResponse
 */
PickOutboundNumbersResponse Client::pickOutboundNumbersWithOptions(const PickOutboundNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.getCount();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.getSkillGroupIdList();
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
 * @summary You can invoke PickOutboundNumbers to select an appropriate caller number based on the provided callee number. The number selection logic is controlled by an Intelligent algorithm.
 *
 * @param request PickOutboundNumbersRequest
 * @return PickOutboundNumbersResponse
 */
PickOutboundNumbersResponse Client::pickOutboundNumbers(const PickOutboundNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pickOutboundNumbersWithOptions(request, runtime);
}

/**
 * @summary Polls the agent status of a specified agent under a specified instance. This operation is typically invoked by the frontend agent Workbench to synchronize agent status.
 *
 * @param request PollUserStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PollUserStatusResponse
 */
PollUserStatusResponse Client::pollUserStatusWithOptions(const PollUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Polls the agent status of a specified agent under a specified instance. This operation is typically invoked by the frontend agent Workbench to synchronize agent status.
 *
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
    query["Data"] = request.getData();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
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
    body["AccessChannelId"] = request.getAccessChannelId();
  }

  if (!!request.hasConversationId()) {
    body["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMessageContent()) {
    body["MessageContent"] = request.getMessageContent();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSenderAvatarMediaId()) {
    body["SenderAvatarMediaId"] = request.getSenderAvatarMediaId();
  }

  if (!!request.hasSenderId()) {
    body["SenderId"] = request.getSenderId();
  }

  if (!!request.hasSenderName()) {
    body["SenderName"] = request.getSenderName();
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
 * @summary Publishes a contact flow.
 *
 * @param request PublishContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishContactFlowResponse
 */
PublishContactFlowResponse Client::publishContactFlowWithOptions(const PublishContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasDraftId()) {
    query["DraftId"] = request.getDraftId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Publishes a contact flow.
 *
 * @param request PublishContactFlowRequest
 * @return PublishContactFlowResponse
 */
PublishContactFlowResponse Client::publishContactFlow(const PublishContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishContactFlowWithOptions(request, runtime);
}

/**
 * @summary You can invoke ReadyForService to make a specified agent under a specified instance ready. After becoming ready, the agent enters the idle status.
 *
 * @param request ReadyForServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadyForServiceResponse
 */
ReadyForServiceResponse Client::readyForServiceWithOptions(const ReadyForServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundScenario()) {
    query["OutboundScenario"] = request.getOutboundScenario();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke ReadyForService to make a specified agent under a specified instance ready. After becoming ready, the agent enters the idle status.
 *
 * @param request ReadyForServiceRequest
 * @return ReadyForServiceResponse
 */
ReadyForServiceResponse Client::readyForService(const ReadyForServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return readyForServiceWithOptions(request, runtime);
}

/**
 * @summary Redial the number in the desensitized call record
 *
 * @param request RedialCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RedialCallResponse
 */
RedialCallResponse Client::redialCallWithOptions(const RedialCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.getCallee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Redial the number in the desensitized call record
 *
 * @param request RedialCallRequest
 * @return RedialCallResponse
 */
RedialCallResponse Client::redialCall(const RedialCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return redialCallWithOptions(request, runtime);
}

/**
 * @summary Registers a Session Initiation Protocol (SIP) device with a specified agent in an instance. A SIP device can be a physical SIP phone or a softphone.
 *
 * @param request RegisterDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterDeviceResponse
 */
RegisterDeviceResponse Client::registerDeviceWithOptions(const RegisterDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Registers a Session Initiation Protocol (SIP) device with a specified agent in an instance. A SIP device can be a physical SIP phone or a softphone.
 *
 * @param request RegisterDeviceRequest
 * @return RegisterDeviceResponse
 */
RegisterDeviceResponse Client::registerDevice(const RegisterDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerDeviceWithOptions(request, runtime);
}

/**
 * @summary Registers one or more SIP devices to specified agents in an instance. A SIP device can be a SIP phone or a SIP softphone.
 *
 * @param request RegisterDevicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterDevicesResponse
 */
RegisterDevicesResponse Client::registerDevicesWithOptions(const RegisterDevicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasUserIdListJson()) {
    query["UserIdListJson"] = request.getUserIdListJson();
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
 * @summary Registers one or more SIP devices to specified agents in an instance. A SIP device can be a SIP phone or a SIP softphone.
 *
 * @param request RegisterDevicesRequest
 * @return RegisterDevicesResponse
 */
RegisterDevicesResponse Client::registerDevices(const RegisterDevicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerDevicesWithOptions(request, runtime);
}

/**
 * @summary Rejects a chat assigned to an agent.
 *
 * @param request RejectChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectChatResponse
 */
RejectChatResponse Client::rejectChatWithOptions(const RejectChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Rejects a chat assigned to an agent.
 *
 * @param request RejectChatRequest
 * @return RejectChatResponse
 */
RejectChatResponse Client::rejectChat(const RejectChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectChatWithOptions(request, runtime);
}

/**
 * @summary Use the RejectTicket operation to reject a ticket. The ticket creator can add information to a rejected ticket and then resubmit it.
 *
 * @param request RejectTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RejectTicketResponse
 */
RejectTicketResponse Client::rejectTicketWithOptions(const RejectTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary Use the RejectTicket operation to reject a ticket. The ticket creator can add information to a rejected ticket and then resubmit it.
 *
 * @param request RejectTicketRequest
 * @return RejectTicketResponse
 */
RejectTicketResponse Client::rejectTicket(const RejectTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rejectTicketWithOptions(request, runtime);
}

/**
 * @summary You can invoke ReleaseCall to hang up the call associated with a specified call ID under a specified instance. The invoker must be an agent and currently in a call.
 *
 * @param request ReleaseCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseCallResponse
 */
ReleaseCallResponse Client::releaseCallWithOptions(const ReleaseCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke ReleaseCall to hang up the call associated with a specified call ID under a specified instance. The invoker must be an agent and currently in a call.
 *
 * @param request ReleaseCallRequest
 * @return ReleaseCallResponse
 */
ReleaseCallResponse Client::releaseCall(const ReleaseCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseCallWithOptions(request, runtime);
}

/**
 * @summary The ReleaseChat operation ends the current chat.
 *
 * @param request ReleaseChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseChatResponse
 */
ReleaseChatResponse Client::releaseChatWithOptions(const ReleaseChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserType()) {
    query["UserType"] = request.getUserType();
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
 * @summary The ReleaseChat operation ends the current chat.
 *
 * @param request ReleaseChatRequest
 * @return ReleaseChatResponse
 */
ReleaseChatResponse Client::releaseChat(const ReleaseChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseChatWithOptions(request, runtime);
}

/**
 * @summary Removes the blacklist tag from a specified phone number.
 *
 * @param request RemoveBlacklistCallTaggingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveBlacklistCallTaggingResponse
 */
RemoveBlacklistCallTaggingResponse Client::removeBlacklistCallTaggingWithOptions(const RemoveBlacklistCallTaggingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
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
 * @summary Removes the blacklist tag from a specified phone number.
 *
 * @param request RemoveBlacklistCallTaggingRequest
 * @return RemoveBlacklistCallTaggingResponse
 */
RemoveBlacklistCallTaggingResponse Client::removeBlacklistCallTagging(const RemoveBlacklistCallTaggingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeBlacklistCallTaggingWithOptions(request, runtime);
}

/**
 * @summary You can invoke RemoveDoNotCallNumbers to delete one or more Do Not Call number configuration items under a specified instance.
 *
 * @param request RemoveDoNotCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDoNotCallNumbersResponse
 */
RemoveDoNotCallNumbersResponse Client::removeDoNotCallNumbersWithOptions(const RemoveDoNotCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
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
 * @summary You can invoke RemoveDoNotCallNumbers to delete one or more Do Not Call number configuration items under a specified instance.
 *
 * @param request RemoveDoNotCallNumbersRequest
 * @return RemoveDoNotCallNumbersResponse
 */
RemoveDoNotCallNumbersResponse Client::removeDoNotCallNumbers(const RemoveDoNotCallNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDoNotCallNumbersWithOptions(request, runtime);
}

/**
 * @summary You can invoke RemovePersonalNumbersFromUser to delete one or more personal outbound numbers associated with a specified agent under a specified instance.
 *
 * @param request RemovePersonalNumbersFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePersonalNumbersFromUserResponse
 */
RemovePersonalNumbersFromUserResponse Client::removePersonalNumbersFromUserWithOptions(const RemovePersonalNumbersFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke RemovePersonalNumbersFromUser to delete one or more personal outbound numbers associated with a specified agent under a specified instance.
 *
 * @param request RemovePersonalNumbersFromUserRequest
 * @return RemovePersonalNumbersFromUserResponse
 */
RemovePersonalNumbersFromUserResponse Client::removePersonalNumbersFromUser(const RemovePersonalNumbersFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePersonalNumbersFromUserWithOptions(request, runtime);
}

/**
 * @summary You can invoke RemovePhoneNumberFromSkillGroups to delete the binding relationship between a specified phone number and one or more skill groups under a given instance. This operation removes only the association between the phone number and the skill groups, not the actual phone number itself.
 *
 * @param request RemovePhoneNumberFromSkillGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePhoneNumberFromSkillGroupsResponse
 */
RemovePhoneNumberFromSkillGroupsResponse Client::removePhoneNumberFromSkillGroupsWithOptions(const RemovePhoneNumberFromSkillGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.getSkillGroupIdList();
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
 * @summary You can invoke RemovePhoneNumberFromSkillGroups to delete the binding relationship between a specified phone number and one or more skill groups under a given instance. This operation removes only the association between the phone number and the skill groups, not the actual phone number itself.
 *
 * @param request RemovePhoneNumberFromSkillGroupsRequest
 * @return RemovePhoneNumberFromSkillGroupsResponse
 */
RemovePhoneNumberFromSkillGroupsResponse Client::removePhoneNumberFromSkillGroups(const RemovePhoneNumberFromSkillGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePhoneNumberFromSkillGroupsWithOptions(request, runtime);
}

/**
 * @summary Removes one or more numbers from an instance. This action disassociates the numbers from the instance but does not permanently delete them. It also disassociates all associated resources, such as skill groups, contact flows, and agents.
 *
 * @param request RemovePhoneNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePhoneNumbersResponse
 */
RemovePhoneNumbersResponse Client::removePhoneNumbersWithOptions(const RemovePhoneNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
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
 * @summary Removes one or more numbers from an instance. This action disassociates the numbers from the instance but does not permanently delete them. It also disassociates all associated resources, such as skill groups, contact flows, and agents.
 *
 * @param request RemovePhoneNumbersRequest
 * @return RemovePhoneNumbersResponse
 */
RemovePhoneNumbersResponse Client::removePhoneNumbers(const RemovePhoneNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePhoneNumbersWithOptions(request, runtime);
}

/**
 * @summary You can invoke RemovePhoneNumbersFromSkillGroup to delete the association between one or more phone numbers and a specified skill group under a given instance.
 *
 * @param request RemovePhoneNumbersFromSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePhoneNumbersFromSkillGroupResponse
 */
RemovePhoneNumbersFromSkillGroupResponse Client::removePhoneNumbersFromSkillGroupWithOptions(const RemovePhoneNumbersFromSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
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
 * @summary You can invoke RemovePhoneNumbersFromSkillGroup to delete the association between one or more phone numbers and a specified skill group under a given instance.
 *
 * @param request RemovePhoneNumbersFromSkillGroupRequest
 * @return RemovePhoneNumbersFromSkillGroupResponse
 */
RemovePhoneNumbersFromSkillGroupResponse Client::removePhoneNumbersFromSkillGroup(const RemovePhoneNumbersFromSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePhoneNumbersFromSkillGroupWithOptions(request, runtime);
}

/**
 * @summary You can invoke RemoveSkillGroupsFromUser to delete the association between one or more skill groups and a specified agent under a specified instance.
 *
 * @param request RemoveSkillGroupsFromUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveSkillGroupsFromUserResponse
 */
RemoveSkillGroupsFromUserResponse Client::removeSkillGroupsFromUserWithOptions(const RemoveSkillGroupsFromUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupIdList()) {
    query["SkillGroupIdList"] = request.getSkillGroupIdList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke RemoveSkillGroupsFromUser to delete the association between one or more skill groups and a specified agent under a specified instance.
 *
 * @param request RemoveSkillGroupsFromUserRequest
 * @return RemoveSkillGroupsFromUserResponse
 */
RemoveSkillGroupsFromUserResponse Client::removeSkillGroupsFromUser(const RemoveSkillGroupsFromUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeSkillGroupsFromUserWithOptions(request, runtime);
}

/**
 * @summary You can invoke RemoveUsers to delete one or more agents from a specified instance. This operation only detaches the RAM accounts from the instance and removes the agents mapped to those RAM accounts from the instance. It does not delete the RAM accounts themselves.
 *
 * @param request RemoveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsersWithOptions(const RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNotificationEmail()) {
    query["NotificationEmail"] = request.getNotificationEmail();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.getUserIdList();
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
 * @summary You can invoke RemoveUsers to delete one or more agents from a specified instance. This operation only detaches the RAM accounts from the instance and removes the agents mapped to those RAM accounts from the instance. It does not delete the RAM accounts themselves.
 *
 * @param request RemoveUsersRequest
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsers(const RemoveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersWithOptions(request, runtime);
}

/**
 * @summary You can invoke RemoveUsersFromSkillGroup to delete the association between one or more agents and a specified skill group under a specified instance. This operation only removes the association between the skill group and the agents and does not delete the agents themselves.
 *
 * @param request RemoveUsersFromSkillGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersFromSkillGroupResponse
 */
RemoveUsersFromSkillGroupResponse Client::removeUsersFromSkillGroupWithOptions(const RemoveUsersFromSkillGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.getUserIdList();
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
 * @summary You can invoke RemoveUsersFromSkillGroup to delete the association between one or more agents and a specified skill group under a specified instance. This operation only removes the association between the skill group and the agents and does not delete the agents themselves.
 *
 * @param request RemoveUsersFromSkillGroupRequest
 * @return RemoveUsersFromSkillGroupResponse
 */
RemoveUsersFromSkillGroupResponse Client::removeUsersFromSkillGroup(const RemoveUsersFromSkillGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersFromSkillGroupWithOptions(request, runtime);
}

/**
 * @summary Resets the state of a specific agent in a specific instance.
 *
 * @param request ResetAgentStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAgentStateResponse
 */
ResetAgentStateResponse Client::resetAgentStateWithOptions(const ResetAgentStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Resets the state of a specific agent in a specific instance.
 *
 * @param request ResetAgentStateRequest
 * @return ResetAgentStateResponse
 */
ResetAgentStateResponse Client::resetAgentState(const ResetAgentStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAgentStateWithOptions(request, runtime);
}

/**
 * @summary Invoke ResetUserPassword to reset the logon password of a specified agent under a specified instance. In practice, agents do not have logon passwords; this operation actually modifies the logon password of the RAM account associated with the agent. This is typically used in scenarios where a customer service representative forgets the logon password of their RAM account.
 *
 * @param request ResetUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPasswordWithOptions(const ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Invoke ResetUserPassword to reset the logon password of a specified agent under a specified instance. In practice, agents do not have logon passwords; this operation actually modifies the logon password of the RAM account associated with the agent. This is typically used in scenarios where a customer service representative forgets the logon password of their RAM account.
 *
 * @param request ResetUserPasswordRequest
 * @return ResetUserPasswordResponse
 */
ResetUserPasswordResponse Client::resetUserPassword(const ResetUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Restores call recordings for the specified instance.
 *
 * @param request RestoreArchivedRecordingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreArchivedRecordingsResponse
 */
RestoreArchivedRecordingsResponse Client::restoreArchivedRecordingsWithOptions(const RestoreArchivedRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.getContactIds();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Restores call recordings for the specified instance.
 *
 * @param request RestoreArchivedRecordingsRequest
 * @return RestoreArchivedRecordingsResponse
 */
RestoreArchivedRecordingsResponse Client::restoreArchivedRecordings(const RestoreArchivedRecordingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreArchivedRecordingsWithOptions(request, runtime);
}

/**
 * @summary You can use the ResubmitTicket API to resubmit a rejected or returned ticket.
 *
 * @param request ResubmitTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResubmitTicketResponse
 */
ResubmitTicketResponse Client::resubmitTicketWithOptions(const ResubmitTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary You can use the ResubmitTicket API to resubmit a rejected or returned ticket.
 *
 * @param request ResubmitTicketRequest
 * @return ResubmitTicketResponse
 */
ResubmitTicketResponse Client::resubmitTicket(const ResubmitTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resubmitTicketWithOptions(request, runtime);
}

/**
 * @summary Invoke ResumeCampaign to recover the predictive outbound calling Activity corresponding to the specified ID under the specified instance.
 *
 * @param request ResumeCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeCampaignResponse
 */
ResumeCampaignResponse Client::resumeCampaignWithOptions(const ResumeCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke ResumeCampaign to recover the predictive outbound calling Activity corresponding to the specified ID under the specified instance.
 *
 * @param request ResumeCampaignRequest
 * @return ResumeCampaignResponse
 */
ResumeCampaignResponse Client::resumeCampaign(const ResumeCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeCampaignWithOptions(request, runtime);
}

/**
 * @summary You can invoke RetrieveCall to retrieve a call associated with a specified call ID under a specified instance. The call must be on hold for the retrieve operation to be performed.
 *
 * @param request RetrieveCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetrieveCallResponse
 */
RetrieveCallResponse Client::retrieveCallWithOptions(const RetrieveCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke RetrieveCall to retrieve a call associated with a specified call ID under a specified instance. The call must be on hold for the retrieve operation to be performed.
 *
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
    body["DocumentId"] = request.getDocumentId();
  }

  if (!!request.hasDocumentJson()) {
    body["DocumentJson"] = request.getDocumentJson();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
 * @summary Invoke SaveRTCStatsV2 to report Web Real-Time Communication (WebRTC) voice transmission statistics information from the agent side. This API is not relevant for regular customers.
 *
 * @param request SaveRTCStatsV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveRTCStatsV2Response
 */
SaveRTCStatsV2Response Client::saveRTCStatsV2WithOptions(const SaveRTCStatsV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasGeneralInfo()) {
    query["GeneralInfo"] = request.getGeneralInfo();
  }

  if (!!request.hasGoogAddress()) {
    query["GoogAddress"] = request.getGoogAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasReceiverReport()) {
    query["ReceiverReport"] = request.getReceiverReport();
  }

  if (!!request.hasSenderReport()) {
    query["SenderReport"] = request.getSenderReport();
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
 * @summary Invoke SaveRTCStatsV2 to report Web Real-Time Communication (WebRTC) voice transmission statistics information from the agent side. This API is not relevant for regular customers.
 *
 * @param request SaveRTCStatsV2Request
 * @return SaveRTCStatsV2Response
 */
SaveRTCStatsV2Response Client::saveRTCStatsV2(const SaveRTCStatsV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveRTCStatsV2WithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveTerminalLog API to report agent-side log information. Regular customers do not need to be concerned with this API.
 *
 * @param request SaveTerminalLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveTerminalLogResponse
 */
SaveTerminalLogResponse Client::saveTerminalLogWithOptions(const SaveTerminalLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasMethodName()) {
    query["MethodName"] = request.getMethodName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUniqueRequestId()) {
    query["UniqueRequestId"] = request.getUniqueRequestId();
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
 * @summary Invoke the SaveTerminalLog API to report agent-side log information. Regular customers do not need to be concerned with this API.
 *
 * @param request SaveTerminalLogRequest
 * @return SaveTerminalLogResponse
 */
SaveTerminalLogResponse Client::saveTerminalLog(const SaveTerminalLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTerminalLogWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveWebRTCStats API to report Web Real-Time Communication (WebRTC) voice transmission statistics information from the agent side. Regular customers do not need to concern themselves with this API.
 *
 * @param request SaveWebRTCStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveWebRTCStatsResponse
 */
SaveWebRTCStatsResponse Client::saveWebRTCStatsWithOptions(const SaveWebRTCStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasGeneralInfo()) {
    query["GeneralInfo"] = request.getGeneralInfo();
  }

  if (!!request.hasGoogAddress()) {
    query["GoogAddress"] = request.getGoogAddress();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasReceiverReport()) {
    query["ReceiverReport"] = request.getReceiverReport();
  }

  if (!!request.hasSenderReport()) {
    query["SenderReport"] = request.getSenderReport();
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
 * @summary Invoke the SaveWebRTCStats API to report Web Real-Time Communication (WebRTC) voice transmission statistics information from the agent side. Regular customers do not need to concern themselves with this API.
 *
 * @param request SaveWebRTCStatsRequest
 * @return SaveWebRTCStatsResponse
 */
SaveWebRTCStatsResponse Client::saveWebRTCStats(const SaveWebRTCStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveWebRTCStatsWithOptions(request, runtime);
}

/**
 * @summary Invoke the SaveWebRtcInfo API to report WebRTC call status information from the agent side, including call quality monitoring data, for backend statistics and monitoring. Customers do not need to concern themselves with this API.
 *
 * @param request SaveWebRtcInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveWebRtcInfoResponse
 */
SaveWebRtcInfoResponse Client::saveWebRtcInfoWithOptions(const SaveWebRtcInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.getContentType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Invoke the SaveWebRtcInfo API to report WebRTC call status information from the agent side, including call quality monitoring data, for backend statistics and monitoring. Customers do not need to concern themselves with this API.
 *
 * @param request SaveWebRtcInfoRequest
 * @return SaveWebRtcInfoResponse
 */
SaveWebRtcInfoResponse Client::saveWebRtcInfo(const SaveWebRtcInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveWebRtcInfoWithOptions(request, runtime);
}

/**
 * @summary You can invoke SendDtmfSignaling to send DTMF keypress information during a call.
 *
 * @param request SendDtmfSignalingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendDtmfSignalingResponse
 */
SendDtmfSignalingResponse Client::sendDtmfSignalingWithOptions(const SendDtmfSignalingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDtmf()) {
    query["Dtmf"] = request.getDtmf();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke SendDtmfSignaling to send DTMF keypress information during a call.
 *
 * @param request SendDtmfSignalingRequest
 * @return SendDtmfSignalingResponse
 */
SendDtmfSignalingResponse Client::sendDtmfSignaling(const SendDtmfSignalingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendDtmfSignalingWithOptions(request, runtime);
}

/**
 * @summary 推送消息
 *
 * @param request SendNotificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendNotificationResponse
 */
SendNotificationResponse Client::sendNotificationWithOptions(const SendNotificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMessageBody()) {
    query["MessageBody"] = request.getMessageBody();
  }

  if (!!request.hasNotificationTarget()) {
    query["NotificationTarget"] = request.getNotificationTarget();
  }

  if (!!request.hasNotificationType()) {
    query["NotificationType"] = request.getNotificationType();
  }

  if (!!request.hasShardingKey()) {
    query["ShardingKey"] = request.getShardingKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendNotification"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendNotificationResponse>();
}

/**
 * @summary 推送消息
 *
 * @param request SendNotificationRequest
 * @return SendNotificationResponse
 */
SendNotificationResponse Client::sendNotification(const SendNotificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendNotificationWithOptions(request, runtime);
}

/**
 * @summary You can invoke SignInGroup to sign an agent into a specified skill group under a specified instance, which is the operation for publishing the agent online.
 *
 * @param request SignInGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SignInGroupResponse
 */
SignInGroupResponse Client::signInGroupWithOptions(const SignInGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditivity()) {
    query["Additivity"] = request.getAdditivity();
  }

  if (!!request.hasChatDeviceId()) {
    query["ChatDeviceId"] = request.getChatDeviceId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSignedSkillGroupIdList()) {
    query["SignedSkillGroupIdList"] = request.getSignedSkillGroupIdList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke SignInGroup to sign an agent into a specified skill group under a specified instance, which is the operation for publishing the agent online.
 *
 * @param request SignInGroupRequest
 * @return SignInGroupResponse
 */
SignInGroupResponse Client::signInGroup(const SignInGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return signInGroupWithOptions(request, runtime);
}

/**
 * @summary You can call SignOutGroup to check out an agent from the skill group they are currently signed into, which is equivalent to performing an unpublish operation for the agent.
 *
 * @param request SignOutGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SignOutGroupResponse
 */
SignOutGroupResponse Client::signOutGroupWithOptions(const SignOutGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can call SignOutGroup to check out an agent from the skill group they are currently signed into, which is equivalent to performing an unpublish operation for the agent.
 *
 * @param request SignOutGroupRequest
 * @return SignOutGroupResponse
 */
SignOutGroupResponse Client::signOutGroup(const SignOutGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return signOutGroupWithOptions(request, runtime);
}

/**
 * @summary You can invoke StartBack2BackCall to initiate a back-to-back call.
 *
 * @description A back-to-back call differs from a traditional two-party call in that the caller does not directly call the callee. Instead, a Back-to-Back Agent is used. The Back-to-Back Agent first calls the caller, and after the connection is established, it calls the callee and then joins both parties into a single conference. In this mode, because all message streams of each call pass through the Back-to-Back Agent, the service provider (SP) can offer value-added services such as call timing, call recording, and number masking.
 *
 * @param request StartBack2BackCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartBack2BackCallResponse
 */
StartBack2BackCallResponse Client::startBack2BackCallWithOptions(const StartBack2BackCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalBroker()) {
    query["AdditionalBroker"] = request.getAdditionalBroker();
  }

  if (!!request.hasBroker()) {
    query["Broker"] = request.getBroker();
  }

  if (!!request.hasCallee()) {
    query["Callee"] = request.getCallee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
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
 * @summary You can invoke StartBack2BackCall to initiate a back-to-back call.
 *
 * @description A back-to-back call differs from a traditional two-party call in that the caller does not directly call the callee. Instead, a Back-to-Back Agent is used. The Back-to-Back Agent first calls the caller, and after the connection is established, it calls the callee and then joins both parties into a single conference. In this mode, because all message streams of each call pass through the Back-to-Back Agent, the service provider (SP) can offer value-added services such as call timing, call recording, and number masking.
 *
 * @param request StartBack2BackCallRequest
 * @return StartBack2BackCallResponse
 */
StartBack2BackCallResponse Client::startBack2BackCall(const StartBack2BackCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startBack2BackCallWithOptions(request, runtime);
}

/**
 * @summary Starts a chat session.
 *
 * @param tmpReq StartChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartChatResponse
 */
StartChatResponse Client::startChatWithOptions(const StartChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartChatShrinkRequest request = StartChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserList()) {
    request.setUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserList(), "UserList", "json"));
  }

  json query = {};
  if (!!request.hasAccessChannelId()) {
    query["AccessChannelId"] = request.getAccessChannelId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserListShrink()) {
    query["UserList"] = request.getUserListShrink();
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
 * @summary Starts a chat session.
 *
 * @param request StartChatRequest
 * @return StartChatResponse
 */
StartChatResponse Client::startChat(const StartChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startChatWithOptions(request, runtime);
}

/**
 * @summary You can invoke StartConference to initiate a conference.
 *
 * @param request StartConferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartConferenceResponse
 */
StartConferenceResponse Client::startConferenceWithOptions(const StartConferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasParticipantListJson()) {
    query["ParticipantListJson"] = request.getParticipantListJson();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke StartConference to initiate a conference.
 *
 * @param request StartConferenceRequest
 * @return StartConferenceResponse
 */
StartConferenceResponse Client::startConference(const StartConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startConferenceWithOptions(request, runtime);
}

/**
 * @summary Start editing a contact flow and generate a draft version.
 *
 * @param request StartEditContactFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartEditContactFlowResponse
 */
StartEditContactFlowResponse Client::startEditContactFlowWithOptions(const StartEditContactFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Start editing a contact flow and generate a draft version.
 *
 * @param request StartEditContactFlowRequest
 * @return StartEditContactFlowResponse
 */
StartEditContactFlowResponse Client::startEditContactFlow(const StartEditContactFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startEditContactFlowWithOptions(request, runtime);
}

/**
 * @summary Invoke StartPredictiveCall to initiate predictive outbound calling.
 *
 * @description In addition to supporting agents initiating outbound calls from the agent Workbench, Cloud Call Center also enables your Operational System backend to initiate outbound calls and transfer the call to an agent after it is answered. This allows you to seamlessly embed Cloud Call Center features into your Business Process.
 * For example, your Customer can enter their phone number on your WeChat Official Account and click a button to inquire about a product. Your backend system then invokes this API to call the Customer’s Phone. After the call is connected, the system plays back the message: “We have received your inquiry about our product via the Official Account. We are now connecting you to an advisor. Please wait.” The call is then transferred to an appropriate agent.
 * Compared with the DialEX API in version 1.0, this API offers greater flexibility in configuration. In addition to customizing the IVR for transfer-in, you can also pass custom parameters, which can be played back by voice within the IVR to support notification scenarios.
 *
 * @param request StartPredictiveCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPredictiveCallResponse
 */
StartPredictiveCallResponse Client::startPredictiveCallWithOptions(const StartPredictiveCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallee()) {
    query["Callee"] = request.getCallee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasContactFlowVariables()) {
    query["ContactFlowVariables"] = request.getContactFlowVariables();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaskedCallee()) {
    query["MaskedCallee"] = request.getMaskedCallee();
  }

  if (!!request.hasSkillGroupId()) {
    query["SkillGroupId"] = request.getSkillGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
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
 * @summary Invoke StartPredictiveCall to initiate predictive outbound calling.
 *
 * @description In addition to supporting agents initiating outbound calls from the agent Workbench, Cloud Call Center also enables your Operational System backend to initiate outbound calls and transfer the call to an agent after it is answered. This allows you to seamlessly embed Cloud Call Center features into your Business Process.
 * For example, your Customer can enter their phone number on your WeChat Official Account and click a button to inquire about a product. Your backend system then invokes this API to call the Customer’s Phone. After the call is connected, the system plays back the message: “We have received your inquiry about our product via the Official Account. We are now connecting you to an advisor. Please wait.” The call is then transferred to an appropriate agent.
 * Compared with the DialEX API in version 1.0, this API offers greater flexibility in configuration. In addition to customizing the IVR for transfer-in, you can also pass custom parameters, which can be played back by voice within the IVR to support notification scenarios.
 *
 * @param request StartPredictiveCallRequest
 * @return StartPredictiveCallResponse
 */
StartPredictiveCallResponse Client::startPredictiveCall(const StartPredictiveCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startPredictiveCallWithOptions(request, runtime);
}

/**
 * @summary Starts a privacy call.
 *
 * @param request StartPrivacyCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPrivacyCallResponse
 */
StartPrivacyCallResponse Client::startPrivacyCallWithOptions(const StartPrivacyCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCallee()) {
    query["Callee"] = request.getCallee();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Starts a privacy call.
 *
 * @param request StartPrivacyCallRequest
 * @return StartPrivacyCallResponse
 */
StartPrivacyCallResponse Client::startPrivacyCall(const StartPrivacyCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startPrivacyCallWithOptions(request, runtime);
}

/**
 * @summary Invoke SubmitCampaign to start the predictive outbound calling activity corresponding to the specified ID under the specified instance.
 *
 * @param request SubmitCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCampaignResponse
 */
SubmitCampaignResponse Client::submitCampaignWithOptions(const SubmitCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Invoke SubmitCampaign to start the predictive outbound calling activity corresponding to the specified ID under the specified instance.
 *
 * @param request SubmitCampaignRequest
 * @return SubmitCampaignResponse
 */
SubmitCampaignResponse Client::submitCampaign(const SubmitCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCampaignWithOptions(request, runtime);
}

/**
 * @summary You can invoke SwitchToConference to switch the status of a specified call under a specified instance to a three-party conference. This is typically used in scenarios where a consultation is converted into a conference.
 *
 * @param request SwitchToConferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchToConferenceResponse
 */
SwitchToConferenceResponse Client::switchToConferenceWithOptions(const SwitchToConferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke SwitchToConference to switch the status of a specified call under a specified instance to a three-party conference. This is typically used in scenarios where a consultation is converted into a conference.
 *
 * @param request SwitchToConferenceRequest
 * @return SwitchToConferenceResponse
 */
SwitchToConferenceResponse Client::switchToConference(const SwitchToConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchToConferenceWithOptions(request, runtime);
}

/**
 * @summary You can invoke TakeBreak to set a specified agent in a specified instance to the break state.
 *
 * @param request TakeBreakRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TakeBreakResponse
 */
TakeBreakResponse Client::takeBreakWithOptions(const TakeBreakRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke TakeBreak to set a specified agent in a specified instance to the break state.
 *
 * @param request TakeBreakRequest
 * @return TakeBreakResponse
 */
TakeBreakResponse Client::takeBreak(const TakeBreakRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return takeBreakWithOptions(request, runtime);
}

/**
 * @summary Closes a ticket.
 *
 * @param request TerminateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateTicketResponse
 */
TerminateTicketResponse Client::terminateTicketWithOptions(const TerminateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary Closes a ticket.
 *
 * @param request TerminateTicketRequest
 * @return TerminateTicketResponse
 */
TerminateTicketResponse Client::terminateTicket(const TerminateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return terminateTicketWithOptions(request, runtime);
}

/**
 * @summary You can call TransferTicketTask to transfer a ticket to another user.
 *
 * @param request TransferTicketTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferTicketTaskResponse
 */
TransferTicketTaskResponse Client::transferTicketTaskWithOptions(const TransferTicketTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssignee()) {
    query["Assignee"] = request.getAssignee();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary You can call TransferTicketTask to transfer a ticket to another user.
 *
 * @param request TransferTicketTaskRequest
 * @return TransferTicketTaskResponse
 */
TransferTicketTaskResponse Client::transferTicketTask(const TransferTicketTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferTicketTaskWithOptions(request, runtime);
}

/**
 * @summary [responses_200_schema_properties_Data_properties_UserContext_properties_UserState_type]string
 *
 * @param request UnmuteCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnmuteCallResponse
 */
UnmuteCallResponse Client::unmuteCallWithOptions(const UnmuteCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary [responses_200_schema_properties_Data_properties_UserContext_properties_UserState_type]string
 *
 * @param request UnmuteCallRequest
 * @return UnmuteCallResponse
 */
UnmuteCallResponse Client::unmuteCall(const UnmuteCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unmuteCallWithOptions(request, runtime);
}

/**
 * @summary You can invoke UnregisterDevice to delete the device registration record of a specified agent under a specified instance. After deletion, the SIP phone or SIP softphone associated with the agent becomes inactive.
 *
 * @param request UnregisterDeviceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnregisterDeviceResponse
 */
UnregisterDeviceResponse Client::unregisterDeviceWithOptions(const UnregisterDeviceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary You can invoke UnregisterDevice to delete the device registration record of a specified agent under a specified instance. After deletion, the SIP phone or SIP softphone associated with the agent becomes inactive.
 *
 * @param request UnregisterDeviceRequest
 * @return UnregisterDeviceResponse
 */
UnregisterDeviceResponse Client::unregisterDevice(const UnregisterDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unregisterDeviceWithOptions(request, runtime);
}

/**
 * @summary Updates a call summary.
 *
 * @param request UpdateCallSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCallSummaryResponse
 */
UpdateCallSummaryResponse Client::updateCallSummaryWithOptions(const UpdateCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContext()) {
    query["Context"] = request.getContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary Updates a call summary.
 *
 * @param request UpdateCallSummaryRequest
 * @return UpdateCallSummaryResponse
 */
UpdateCallSummaryResponse Client::updateCallSummary(const UpdateCallSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCallSummaryWithOptions(request, runtime);
}

/**
 * @summary Updates outbound campaign parameters.
 *
 * @param request UpdateCampaignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCampaignResponse
 */
UpdateCampaignResponse Client::updateCampaignWithOptions(const UpdateCampaignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallableTime()) {
    query["CallableTime"] = request.getCallableTime();
  }

  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasContactFlowId()) {
    query["ContactFlowId"] = request.getContactFlowId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStrategyParameters()) {
    query["StrategyParameters"] = request.getStrategyParameters();
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
 * @summary Updates outbound campaign parameters.
 *
 * @param request UpdateCampaignRequest
 * @return UpdateCampaignResponse
 */
UpdateCampaignResponse Client::updateCampaign(const UpdateCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCampaignWithOptions(request, runtime);
}

/**
 * @summary You can use UpdateChatRoutingProfile to configure session transfers.
 *
 * @param request UpdateChatRoutingProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChatRoutingProfileResponse
 */
UpdateChatRoutingProfileResponse Client::updateChatRoutingProfileWithOptions(const UpdateChatRoutingProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRoutingProfiles()) {
    query["RoutingProfiles"] = request.getRoutingProfiles();
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
 * @summary You can use UpdateChatRoutingProfile to configure session transfers.
 *
 * @param request UpdateChatRoutingProfileRequest
 * @return UpdateChatRoutingProfileResponse
 */
UpdateChatRoutingProfileResponse Client::updateChatRoutingProfile(const UpdateChatRoutingProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateChatRoutingProfileWithOptions(request, runtime);
}

/**
 * @summary Use the UpdateConfigItems operation to add or modify configuration items for an instance, such as hiding the caller ID for inbound calls or allowing agents to hang up.
 *
 * @param request UpdateConfigItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigItemsResponse
 */
UpdateConfigItemsResponse Client::updateConfigItemsWithOptions(const UpdateConfigItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigItems()) {
    query["ConfigItems"] = request.getConfigItems();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
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
 * @summary Use the UpdateConfigItems operation to add or modify configuration items for an instance, such as hiding the caller ID for inbound calls or allowing agents to hang up.
 *
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
    request.setPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProperty(), "Property", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPropertyShrink()) {
    body["Property"] = request.getPropertyShrink();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSchemaId()) {
    body["SchemaId"] = request.getSchemaId();
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
 * @summary Use the UpdateSubscription operation to configure message subscriptions.
 *
 * @param request UpdateSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscriptionWithOptions(const UpdateSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPoint()) {
    query["AccessPoint"] = request.getAccessPoint();
  }

  if (!!request.hasAliyunUid()) {
    query["AliyunUid"] = request.getAliyunUid();
  }

  if (!!request.hasDefaultTopic()) {
    query["DefaultTopic"] = request.getDefaultTopic();
  }

  if (!!request.hasEventSubscriptionsJson()) {
    query["EventSubscriptionsJson"] = request.getEventSubscriptionsJson();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMqInstanceId()) {
    query["MqInstanceId"] = request.getMqInstanceId();
  }

  if (!!request.hasMqType()) {
    query["MqType"] = request.getMqType();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProducerId()) {
    query["ProducerId"] = request.getProducerId();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSubscription"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubscriptionResponse>();
}

/**
 * @summary Use the UpdateSubscription operation to configure message subscriptions.
 *
 * @param request UpdateSubscriptionRequest
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscription(const UpdateSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSubscriptionWithOptions(request, runtime);
}

/**
 * @summary UpdateTicket updates the content of a ticket.
 *
 * @param request UpdateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTicketResponse
 */
UpdateTicketResponse Client::updateTicketWithOptions(const UpdateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContext()) {
    query["Context"] = request.getContext();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
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
 * @summary UpdateTicket updates the content of a ticket.
 *
 * @param request UpdateTicketRequest
 * @return UpdateTicketResponse
 */
UpdateTicketResponse Client::updateTicket(const UpdateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTicketWithOptions(request, runtime);
}

/**
 * @summary You can use WithdrawTicket to withdraw a ticket.
 *
 * @param request WithdrawTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawTicketResponse
 */
WithdrawTicketResponse Client::withdrawTicketWithOptions(const WithdrawTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
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
 * @summary You can use WithdrawTicket to withdraw a ticket.
 *
 * @param request WithdrawTicketRequest
 * @return WithdrawTicketResponse
 */
WithdrawTicketResponse Client::withdrawTicket(const WithdrawTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return withdrawTicketWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CCC20200701