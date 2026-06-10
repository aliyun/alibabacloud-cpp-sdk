#include <darabonba/Core.hpp>
#include <alibabacloud/OutboundBot20191226.hpp>
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
using namespace AlibabaCloud::OutboundBot20191226::Models;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{

AlibabaCloud::OutboundBot20191226::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("outboundbot", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates outbound call jobs in batches.
 *
 * @param request AssignJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignJobsResponse
 */
AssignJobsResponse Client::assignJobsWithOptions(const AssignJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsAsynchrony()) {
    query["IsAsynchrony"] = request.getIsAsynchrony();
  }

  if (!!request.hasJobDataParsingTaskId()) {
    query["JobDataParsingTaskId"] = request.getJobDataParsingTaskId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasJobsJson()) {
    query["JobsJson"] = request.getJobsJson();
  }

  if (!!request.hasRosterType()) {
    query["RosterType"] = request.getRosterType();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.getStrategyJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssignJobs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignJobsResponse>();
}

/**
 * @summary Creates outbound call jobs in batches.
 *
 * @param request AssignJobsRequest
 * @return AssignJobsResponse
 */
AssignJobsResponse Client::assignJobs(const AssignJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignJobsWithOptions(request, runtime);
}

/**
 * @summary Asynchronously creates outbound jobs.
 *
 * @param tmpReq AssignJobsAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignJobsAsyncResponse
 */
AssignJobsAsyncResponse Client::assignJobsAsyncWithOptions(const AssignJobsAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AssignJobsAsyncShrinkRequest request = AssignJobsAsyncShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallingNumber()) {
    request.setCallingNumberShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallingNumber(), "CallingNumber", "json"));
  }

  if (!!tmpReq.hasJobsJson()) {
    request.setJobsJsonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobsJson(), "JobsJson", "json"));
  }

  json body = {};
  if (!!request.hasCallingNumberShrink()) {
    body["CallingNumber"] = request.getCallingNumberShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    body["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasJobsJsonShrink()) {
    body["JobsJson"] = request.getJobsJsonShrink();
  }

  if (!!request.hasStrategyJson()) {
    body["StrategyJson"] = request.getStrategyJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssignJobsAsync"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignJobsAsyncResponse>();
}

/**
 * @summary Asynchronously creates outbound jobs.
 *
 * @param request AssignJobsAsyncRequest
 * @return AssignJobsAsyncResponse
 */
AssignJobsAsyncResponse Client::assignJobsAsync(const AssignJobsAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignJobsAsyncWithOptions(request, runtime);
}

/**
 * @summary Cancels jobs that are pending or in progress. This operation cannot cancel jobs that are already in a call.
 *
 * @param request CancelJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelJobsResponse
 */
CancelJobsResponse Client::cancelJobsWithOptions(const CancelJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasJobReferenceId()) {
    query["JobReferenceId"] = request.getJobReferenceId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelJobs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelJobsResponse>();
}

/**
 * @summary Cancels jobs that are pending or in progress. This operation cannot cancel jobs that are already in a call.
 *
 * @param request CancelJobsRequest
 * @return CancelJobsResponse
 */
CancelJobsResponse Client::cancelJobs(const CancelJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelJobsWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group of a resource.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group of a resource.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary You can create an intelligent configuration.
 *
 * @param request CreateAgentProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentProfileResponse
 */
CreateAgentProfileResponse Client::createAgentProfileWithOptions(const CreateAgentProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentProfileTemplateId()) {
    body["AgentProfileTemplateId"] = request.getAgentProfileTemplateId();
  }

  if (!!request.hasAppIp()) {
    body["AppIp"] = request.getAppIp();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFaqCategoryIds()) {
    body["FaqCategoryIds"] = request.getFaqCategoryIds();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstructionJson()) {
    body["InstructionJson"] = request.getInstructionJson();
  }

  if (!!request.hasLabelsJson()) {
    body["LabelsJson"] = request.getLabelsJson();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasModelConfig()) {
    body["ModelConfig"] = request.getModelConfig();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptJson()) {
    body["PromptJson"] = request.getPromptJson();
  }

  if (!!request.hasScenario()) {
    body["Scenario"] = request.getScenario();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasVariablesJson()) {
    body["VariablesJson"] = request.getVariablesJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAgentProfile"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentProfileResponse>();
}

/**
 * @summary You can create an intelligent configuration.
 *
 * @param request CreateAgentProfileRequest
 * @return CreateAgentProfileResponse
 */
CreateAgentProfileResponse Client::createAgentProfile(const CreateAgentProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentProfileWithOptions(request, runtime);
}

/**
 * @summary Creates an annotation task.
 *
 * @param tmpReq CreateAnnotationMissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnnotationMissionResponse
 */
CreateAnnotationMissionResponse Client::createAnnotationMissionWithOptions(const CreateAnnotationMissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAnnotationMissionShrinkRequest request = CreateAnnotationMissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAnnotationMissionDebugDataSourceList()) {
    request.setAnnotationMissionDebugDataSourceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAnnotationMissionDebugDataSourceList(), "AnnotationMissionDebugDataSourceList", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasAnnotationMissionDataSourceType()) {
    query["AnnotationMissionDataSourceType"] = request.getAnnotationMissionDataSourceType();
  }

  if (!!request.hasAnnotationMissionDebugDataSourceListShrink()) {
    query["AnnotationMissionDebugDataSourceList"] = request.getAnnotationMissionDebugDataSourceListShrink();
  }

  if (!!request.hasAnnotationMissionDebugDataSourceListJsonString()) {
    query["AnnotationMissionDebugDataSourceListJsonString"] = request.getAnnotationMissionDebugDataSourceListJsonString();
  }

  if (!!request.hasAnnotationMissionName()) {
    query["AnnotationMissionName"] = request.getAnnotationMissionName();
  }

  if (!!request.hasChatbotId()) {
    query["ChatbotId"] = request.getChatbotId();
  }

  if (!!request.hasConversationTimeEndFilter()) {
    query["ConversationTimeEndFilter"] = request.getConversationTimeEndFilter();
  }

  if (!!request.hasConversationTimeStartFilter()) {
    query["ConversationTimeStartFilter"] = request.getConversationTimeStartFilter();
  }

  if (!!request.hasExcludeOtherSession()) {
    query["ExcludeOtherSession"] = request.getExcludeOtherSession();
  }

  if (!!request.hasFinished()) {
    query["Finished"] = request.getFinished();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSamplingCount()) {
    query["SamplingCount"] = request.getSamplingCount();
  }

  if (!!request.hasSamplingRate()) {
    query["SamplingRate"] = request.getSamplingRate();
  }

  if (!!request.hasSamplingType()) {
    query["SamplingType"] = request.getSamplingType();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionEndReasonFilterList()) {
    query["SessionEndReasonFilterList"] = request.getSessionEndReasonFilterList();
  }

  if (!!request.hasSessionEndReasonFilterListJsonString()) {
    query["SessionEndReasonFilterListJsonString"] = request.getSessionEndReasonFilterListJsonString();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAnnotationMission"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnnotationMissionResponse>();
}

/**
 * @summary Creates an annotation task.
 *
 * @param request CreateAnnotationMissionRequest
 * @return CreateAnnotationMissionResponse
 */
CreateAnnotationMissionResponse Client::createAnnotationMission(const CreateAnnotationMissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAnnotationMissionWithOptions(request, runtime);
}

/**
 * @summary Deprecated. Do not use this operation to batch-create outbound calling jobs.
 *
 * @param request CreateBatchJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBatchJobsResponse
 */
CreateBatchJobsResponse Client::createBatchJobsWithOptions(const CreateBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchJobDescription()) {
    query["BatchJobDescription"] = request.getBatchJobDescription();
  }

  if (!!request.hasBatchJobName()) {
    query["BatchJobName"] = request.getBatchJobName();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobFilePath()) {
    query["JobFilePath"] = request.getJobFilePath();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.getStrategyJson();
  }

  if (!!request.hasSubmitted()) {
    query["Submitted"] = request.getSubmitted();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBatchJobs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBatchJobsResponse>();
}

/**
 * @summary Deprecated. Do not use this operation to batch-create outbound calling jobs.
 *
 * @param request CreateBatchJobsRequest
 * @return CreateBatchJobsResponse
 */
CreateBatchJobsResponse Client::createBatchJobs(const CreateBatchJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchJobsWithOptions(request, runtime);
}

/**
 * @summary Copy an existing task group to reinitiate an outbound task.
 *
 * @param request CreateBatchRepeatJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBatchRepeatJobResponse
 */
CreateBatchRepeatJobResponse Client::createBatchRepeatJobWithOptions(const CreateBatchRepeatJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFilterStatus()) {
    query["FilterStatus"] = request.getFilterStatus();
  }

  if (!!request.hasFlashSmsExtras()) {
    query["FlashSmsExtras"] = request.getFlashSmsExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMinConcurrency()) {
    query["MinConcurrency"] = request.getMinConcurrency();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRecallCallingNumber()) {
    query["RecallCallingNumber"] = request.getRecallCallingNumber();
  }

  if (!!request.hasRecallStrategyJson()) {
    query["RecallStrategyJson"] = request.getRecallStrategyJson();
  }

  if (!!request.hasRingingDuration()) {
    query["RingingDuration"] = request.getRingingDuration();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSourceGroupId()) {
    query["SourceGroupId"] = request.getSourceGroupId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.getStrategyJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBatchRepeatJob"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBatchRepeatJobResponse>();
}

/**
 * @summary Copy an existing task group to reinitiate an outbound task.
 *
 * @param request CreateBatchRepeatJobRequest
 * @return CreateBatchRepeatJobResponse
 */
CreateBatchRepeatJobResponse Client::createBatchRepeatJob(const CreateBatchRepeatJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchRepeatJobWithOptions(request, runtime);
}

/**
 * @summary Creates an intent for a small-model scenario.
 *
 * @param tmpReq CreateBeebotIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBeebotIntentResponse
 */
CreateBeebotIntentResponse Client::createBeebotIntentWithOptions(const CreateBeebotIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBeebotIntentShrinkRequest request = CreateBeebotIntentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIntentDefinition()) {
    request.setIntentDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIntentDefinition(), "IntentDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentDefinitionShrink()) {
    query["IntentDefinition"] = request.getIntentDefinitionShrink();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBeebotIntent"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBeebotIntentResponse>();
}

/**
 * @summary Creates an intent for a small-model scenario.
 *
 * @param request CreateBeebotIntentRequest
 * @return CreateBeebotIntentResponse
 */
CreateBeebotIntentResponse Client::createBeebotIntent(const CreateBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBeebotIntentWithOptions(request, runtime);
}

/**
 * @summary Creates a user utterance template for an intent in a small model scenario.
 *
 * @param tmpReq CreateBeebotIntentLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBeebotIntentLgfResponse
 */
CreateBeebotIntentLgfResponse Client::createBeebotIntentLgfWithOptions(const CreateBeebotIntentLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBeebotIntentLgfShrinkRequest request = CreateBeebotIntentLgfShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLgfDefinition()) {
    request.setLgfDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLgfDefinition(), "LgfDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLgfDefinitionShrink()) {
    query["LgfDefinition"] = request.getLgfDefinitionShrink();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBeebotIntentLgf"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBeebotIntentLgfResponse>();
}

/**
 * @summary Creates a user utterance template for an intent in a small model scenario.
 *
 * @param request CreateBeebotIntentLgfRequest
 * @return CreateBeebotIntentLgfResponse
 */
CreateBeebotIntentLgfResponse Client::createBeebotIntentLgf(const CreateBeebotIntentLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBeebotIntentLgfWithOptions(request, runtime);
}

/**
 * @summary Creates a user utterance for an intent in a small model scenario.
 *
 * @param tmpReq CreateBeebotIntentUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBeebotIntentUserSayResponse
 */
CreateBeebotIntentUserSayResponse Client::createBeebotIntentUserSayWithOptions(const CreateBeebotIntentUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBeebotIntentUserSayShrinkRequest request = CreateBeebotIntentUserSayShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserSayDefinition()) {
    request.setUserSayDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserSayDefinition(), "UserSayDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasUserSayDefinitionShrink()) {
    query["UserSayDefinition"] = request.getUserSayDefinitionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBeebotIntentUserSay"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBeebotIntentUserSayResponse>();
}

/**
 * @summary Creates a user utterance for an intent in a small model scenario.
 *
 * @param request CreateBeebotIntentUserSayRequest
 * @return CreateBeebotIntentUserSayResponse
 */
CreateBeebotIntentUserSayResponse Client::createBeebotIntentUserSay(const CreateBeebotIntentUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBeebotIntentUserSayWithOptions(request, runtime);
}

/**
 * @summary This legacy canvas API creates a dialogue flow.
 *
 * @param request CreateDialogueFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDialogueFlowResponse
 */
CreateDialogueFlowResponse Client::createDialogueFlowWithOptions(const CreateDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDialogueFlowType()) {
    query["DialogueFlowType"] = request.getDialogueFlowType();
  }

  if (!!request.hasDialogueName()) {
    query["DialogueName"] = request.getDialogueName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDialogueFlow"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDialogueFlowResponse>();
}

/**
 * @summary This legacy canvas API creates a dialogue flow.
 *
 * @param request CreateDialogueFlowRequest
 * @return CreateDialogueFlowResponse
 */
CreateDialogueFlowResponse Client::createDialogueFlow(const CreateDialogueFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDialogueFlowWithOptions(request, runtime);
}

/**
 * @summary Creates a URL for a Download Hub task.
 *
 * @param request CreateDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDownloadUrlResponse
 */
CreateDownloadUrlResponse Client::createDownloadUrlWithOptions(const CreateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDownloadUrl"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDownloadUrlResponse>();
}

/**
 * @summary Creates a URL for a Download Hub task.
 *
 * @param request CreateDownloadUrlRequest
 * @return CreateDownloadUrlResponse
 */
CreateDownloadUrlResponse Client::createDownloadUrl(const CreateDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Creates a global question in a legacy canvas.
 *
 * @param request CreateGlobalQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGlobalQuestionResponse
 */
CreateGlobalQuestionResponse Client::createGlobalQuestionWithOptions(const CreateGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnswers()) {
    query["Answers"] = request.getAnswers();
  }

  if (!!request.hasGlobalQuestionName()) {
    query["GlobalQuestionName"] = request.getGlobalQuestionName();
  }

  if (!!request.hasGlobalQuestionType()) {
    query["GlobalQuestionType"] = request.getGlobalQuestionType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQuestions()) {
    query["Questions"] = request.getQuestions();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGlobalQuestion"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGlobalQuestionResponse>();
}

/**
 * @summary Creates a global question in a legacy canvas.
 *
 * @param request CreateGlobalQuestionRequest
 * @return CreateGlobalQuestionResponse
 */
CreateGlobalQuestionResponse Client::createGlobalQuestion(const CreateGlobalQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalQuestionWithOptions(request, runtime);
}

/**
 * @summary Creates an outbound call instance.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasInstanceDescription()) {
    query["InstanceDescription"] = request.getInstanceDescription();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasMaxConcurrentConversation()) {
    query["MaxConcurrentConversation"] = request.getMaxConcurrentConversation();
  }

  if (!!request.hasNluServiceType()) {
    query["NluServiceType"] = request.getNluServiceType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2019-12-26"},
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
 * @summary Creates an outbound call instance.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Binds a number to a business instance.
 *
 * @param request CreateInstanceBindNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceBindNumberResponse
 */
CreateInstanceBindNumberResponse Client::createInstanceBindNumberWithOptions(const CreateInstanceBindNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.getInstanceList();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstanceBindNumber"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceBindNumberResponse>();
}

/**
 * @summary Binds a number to a business instance.
 *
 * @param request CreateInstanceBindNumberRequest
 * @return CreateInstanceBindNumberResponse
 */
CreateInstanceBindNumberResponse Client::createInstanceBindNumber(const CreateInstanceBindNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceBindNumberWithOptions(request, runtime);
}

/**
 * @summary Creates an intent in a legacy canvas script.
 *
 * @param request CreateIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIntentResponse
 */
CreateIntentResponse Client::createIntentWithOptions(const CreateIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentDescription()) {
    query["IntentDescription"] = request.getIntentDescription();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.getIntentName();
  }

  if (!!request.hasKeywords()) {
    query["Keywords"] = request.getKeywords();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasUtterances()) {
    query["Utterances"] = request.getUtterances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateIntent"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIntentResponse>();
}

/**
 * @summary Creates an intent in a legacy canvas script.
 *
 * @param request CreateIntentRequest
 * @return CreateIntentResponse
 */
CreateIntentResponse Client::createIntent(const CreateIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIntentWithOptions(request, runtime);
}

/**
 * @summary Creates a job data parsing task.
 *
 * @param request CreateJobDataParsingTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobDataParsingTaskResponse
 */
CreateJobDataParsingTaskResponse Client::createJobDataParsingTaskWithOptions(const CreateJobDataParsingTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobFilePath()) {
    query["JobFilePath"] = request.getJobFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateJobDataParsingTask"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobDataParsingTaskResponse>();
}

/**
 * @summary Creates a job data parsing task.
 *
 * @param request CreateJobDataParsingTaskRequest
 * @return CreateJobDataParsingTaskResponse
 */
CreateJobDataParsingTaskResponse Client::createJobDataParsingTask(const CreateJobDataParsingTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobDataParsingTaskWithOptions(request, runtime);
}

/**
 * @summary Create a job group.
 *
 * @param request CreateJobGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobGroupResponse
 */
CreateJobGroupResponse Client::createJobGroupWithOptions(const CreateJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasFlashSmsExtras()) {
    query["FlashSmsExtras"] = request.getFlashSmsExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupDescription()) {
    query["JobGroupDescription"] = request.getJobGroupDescription();
  }

  if (!!request.hasJobGroupName()) {
    query["JobGroupName"] = request.getJobGroupName();
  }

  if (!!request.hasMinConcurrency()) {
    query["MinConcurrency"] = request.getMinConcurrency();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRecallCallingNumber()) {
    query["RecallCallingNumber"] = request.getRecallCallingNumber();
  }

  if (!!request.hasRecallStrategyJson()) {
    query["RecallStrategyJson"] = request.getRecallStrategyJson();
  }

  if (!!request.hasRingingDuration()) {
    query["RingingDuration"] = request.getRingingDuration();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.getStrategyJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateJobGroup"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobGroupResponse>();
}

/**
 * @summary Create a job group.
 *
 * @param request CreateJobGroupRequest
 * @return CreateJobGroupResponse
 */
CreateJobGroupResponse Client::createJobGroup(const CreateJobGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an export task for an outbound job group.
 *
 * @param request CreateJobGroupExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobGroupExportTaskResponse
 */
CreateJobGroupExportTaskResponse Client::createJobGroupExportTaskWithOptions(const CreateJobGroupExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.getOption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateJobGroupExportTask"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobGroupExportTaskResponse>();
}

/**
 * @summary Creates an export task for an outbound job group.
 *
 * @param request CreateJobGroupExportTaskRequest
 * @return CreateJobGroupExportTaskResponse
 */
CreateJobGroupExportTaskResponse Client::createJobGroupExportTask(const CreateJobGroupExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobGroupExportTaskWithOptions(request, runtime);
}

/**
 * @summary Create a scenario.
 *
 * @param request CreateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScriptWithOptions(const CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasAgentLlm()) {
    query["AgentLlm"] = request.getAgentLlm();
  }

  if (!!request.hasAsrConfig()) {
    query["AsrConfig"] = request.getAsrConfig();
  }

  if (!!request.hasChatbotId()) {
    query["ChatbotId"] = request.getChatbotId();
  }

  if (!!request.hasEmotionEnable()) {
    query["EmotionEnable"] = request.getEmotionEnable();
  }

  if (!!request.hasIndustry()) {
    query["Industry"] = request.getIndustry();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLongWaitEnable()) {
    query["LongWaitEnable"] = request.getLongWaitEnable();
  }

  if (!!request.hasMiniPlaybackEnable()) {
    query["MiniPlaybackEnable"] = request.getMiniPlaybackEnable();
  }

  if (!!request.hasNewBargeInEnable()) {
    query["NewBargeInEnable"] = request.getNewBargeInEnable();
  }

  if (!!request.hasNluAccessType()) {
    query["NluAccessType"] = request.getNluAccessType();
  }

  if (!!request.hasNluEngine()) {
    query["NluEngine"] = request.getNluEngine();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  if (!!request.hasScriptContent()) {
    query["ScriptContent"] = request.getScriptContent();
  }

  if (!!request.hasScriptDescription()) {
    query["ScriptDescription"] = request.getScriptDescription();
  }

  if (!!request.hasScriptName()) {
    query["ScriptName"] = request.getScriptName();
  }

  if (!!request.hasScriptNluProfileJsonString()) {
    query["ScriptNluProfileJsonString"] = request.getScriptNluProfileJsonString();
  }

  if (!!request.hasScriptWaveform()) {
    query["ScriptWaveform"] = request.getScriptWaveform();
  }

  if (!!request.hasTtsConfig()) {
    query["TtsConfig"] = request.getTtsConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScript"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScriptResponse>();
}

/**
 * @summary Create a scenario.
 *
 * @param request CreateScriptRequest
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScript(const CreateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptWithOptions(request, runtime);
}

/**
 * @summary Creates a recording for the broadcast script.
 *
 * @description ***
 *
 * @param request CreateScriptWaveformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptWaveformResponse
 */
CreateScriptWaveformResponse Client::createScriptWaveformWithOptions(const CreateScriptWaveformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptContent()) {
    query["ScriptContent"] = request.getScriptContent();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScriptWaveform"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScriptWaveformResponse>();
}

/**
 * @summary Creates a recording for the broadcast script.
 *
 * @description ***
 *
 * @param request CreateScriptWaveformRequest
 * @return CreateScriptWaveformResponse
 */
CreateScriptWaveformResponse Client::createScriptWaveform(const CreateScriptWaveformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptWaveformWithOptions(request, runtime);
}

/**
 * @summary Creates a tag for use in the legacy canvas.
 *
 * @param request CreateTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTagWithOptions(const CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasTagGroup()) {
    query["TagGroup"] = request.getTagGroup();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.getTagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTag"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTagResponse>();
}

/**
 * @summary Creates a tag for use in the legacy canvas.
 *
 * @param request CreateTagRequest
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTag(const CreateTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTagWithOptions(request, runtime);
}

/**
 * @summary Create an asynchronous task to export outbound call history.
 *
 * @param request CreateTaskExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskExportTaskResponse
 */
CreateTaskExportTaskResponse Client::createTaskExportTaskWithOptions(const CreateTaskExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTaskExportTask"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskExportTaskResponse>();
}

/**
 * @summary Create an asynchronous task to export outbound call history.
 *
 * @param request CreateTaskExportTaskRequest
 * @return CreateTaskExportTaskResponse
 */
CreateTaskExportTaskResponse Client::createTaskExportTask(const CreateTaskExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskExportTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a key.
 *
 * @param request CreateTenantKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTenantKeyResponse
 */
CreateTenantKeyResponse Client::createTenantKeyWithOptions(const CreateTenantKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CreateTenantKey"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTenantKeyResponse>();
}

/**
 * @summary Creates a key.
 *
 * @param request CreateTenantKeyRequest
 * @return CreateTenantKeyResponse
 */
CreateTenantKeyResponse Client::createTenantKey(const CreateTenantKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTenantKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes Large Language Model (LLM) agents.
 *
 * @param tmpReq DeleteAgentProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentProfilesResponse
 */
DeleteAgentProfilesResponse Client::deleteAgentProfilesWithOptions(const DeleteAgentProfilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAgentProfilesShrinkRequest request = DeleteAgentProfilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentProfileIds()) {
    request.setAgentProfileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentProfileIds(), "AgentProfileIds", "json"));
  }

  json body = {};
  if (!!request.hasAgentProfileIdsShrink()) {
    body["AgentProfileIds"] = request.getAgentProfileIdsShrink();
  }

  if (!!request.hasAppIp()) {
    body["AppIp"] = request.getAppIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAgentProfiles"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentProfilesResponse>();
}

/**
 * @summary Deletes Large Language Model (LLM) agents.
 *
 * @param request DeleteAgentProfilesRequest
 * @return DeleteAgentProfilesResponse
 */
DeleteAgentProfilesResponse Client::deleteAgentProfiles(const DeleteAgentProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgentProfilesWithOptions(request, runtime);
}

/**
 * @summary Deletes all entries from the number district database. This operation is deprecated.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAllNumberDistrictInfoResponse
 */
DeleteAllNumberDistrictInfoResponse Client::deleteAllNumberDistrictInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DeleteAllNumberDistrictInfo"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAllNumberDistrictInfoResponse>();
}

/**
 * @summary Deletes all entries from the number district database. This operation is deprecated.
 *
 * @return DeleteAllNumberDistrictInfoResponse
 */
DeleteAllNumberDistrictInfoResponse Client::deleteAllNumberDistrictInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAllNumberDistrictInfoWithOptions(runtime);
}

/**
 * @summary Delete an intent in a small-model scenario.
 *
 * @param request DeleteBeebotIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBeebotIntentResponse
 */
DeleteBeebotIntentResponse Client::deleteBeebotIntentWithOptions(const DeleteBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBeebotIntent"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBeebotIntentResponse>();
}

/**
 * @summary Delete an intent in a small-model scenario.
 *
 * @param request DeleteBeebotIntentRequest
 * @return DeleteBeebotIntentResponse
 */
DeleteBeebotIntentResponse Client::deleteBeebotIntent(const DeleteBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBeebotIntentWithOptions(request, runtime);
}

/**
 * @summary Deletes utterance templates for intents in small model scenarios.
 *
 * @param request DeleteBeebotIntentLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBeebotIntentLgfResponse
 */
DeleteBeebotIntentLgfResponse Client::deleteBeebotIntentLgfWithOptions(const DeleteBeebotIntentLgfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasLgfId()) {
    query["LgfId"] = request.getLgfId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBeebotIntentLgf"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBeebotIntentLgfResponse>();
}

/**
 * @summary Deletes utterance templates for intents in small model scenarios.
 *
 * @param request DeleteBeebotIntentLgfRequest
 * @return DeleteBeebotIntentLgfResponse
 */
DeleteBeebotIntentLgfResponse Client::deleteBeebotIntentLgf(const DeleteBeebotIntentLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBeebotIntentLgfWithOptions(request, runtime);
}

/**
 * @summary Delete user queries for intents in the small-model scenario.
 *
 * @param request DeleteBeebotIntentUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBeebotIntentUserSayResponse
 */
DeleteBeebotIntentUserSayResponse Client::deleteBeebotIntentUserSayWithOptions(const DeleteBeebotIntentUserSayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasUserSayId()) {
    query["UserSayId"] = request.getUserSayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBeebotIntentUserSay"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBeebotIntentUserSayResponse>();
}

/**
 * @summary Delete user queries for intents in the small-model scenario.
 *
 * @param request DeleteBeebotIntentUserSayRequest
 * @return DeleteBeebotIntentUserSayResponse
 */
DeleteBeebotIntentUserSayResponse Client::deleteBeebotIntentUserSay(const DeleteBeebotIntentUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBeebotIntentUserSayWithOptions(request, runtime);
}

/**
 * @summary You can delete a do-not-call list.
 *
 * @param request DeleteContactBlockListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactBlockListResponse
 */
DeleteContactBlockListResponse Client::deleteContactBlockListWithOptions(const DeleteContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactBlockListId()) {
    query["ContactBlockListId"] = request.getContactBlockListId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperator()) {
    query["Operator"] = request.getOperator();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContactBlockList"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactBlockListResponse>();
}

/**
 * @summary You can delete a do-not-call list.
 *
 * @param request DeleteContactBlockListRequest
 * @return DeleteContactBlockListResponse
 */
DeleteContactBlockListResponse Client::deleteContactBlockList(const DeleteContactBlockListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactBlockListWithOptions(request, runtime);
}

/**
 * @summary Deletes the global outbound calling policy whitelist.
 *
 * @param request DeleteContactWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactWhiteListResponse
 */
DeleteContactWhiteListResponse Client::deleteContactWhiteListWithOptions(const DeleteContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactWhiteListId()) {
    query["ContactWhiteListId"] = request.getContactWhiteListId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperator()) {
    query["Operator"] = request.getOperator();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContactWhiteList"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactWhiteListResponse>();
}

/**
 * @summary Deletes the global outbound calling policy whitelist.
 *
 * @param request DeleteContactWhiteListRequest
 * @return DeleteContactWhiteListResponse
 */
DeleteContactWhiteListResponse Client::deleteContactWhiteList(const DeleteContactWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactWhiteListWithOptions(request, runtime);
}

/**
 * @summary Deletes a dialogue flow. This is a legacy canvas API.
 *
 * @param request DeleteDialogueFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDialogueFlowResponse
 */
DeleteDialogueFlowResponse Client::deleteDialogueFlowWithOptions(const DeleteDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDialogueFlowId()) {
    query["DialogueFlowId"] = request.getDialogueFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDialogueFlow"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDialogueFlowResponse>();
}

/**
 * @summary Deletes a dialogue flow. This is a legacy canvas API.
 *
 * @param request DeleteDialogueFlowRequest
 * @return DeleteDialogueFlowResponse
 */
DeleteDialogueFlowResponse Client::deleteDialogueFlow(const DeleteDialogueFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDialogueFlowWithOptions(request, runtime);
}

/**
 * @summary Deletes a global question from a legacy canvas script.
 *
 * @param request DeleteGlobalQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGlobalQuestionResponse
 */
DeleteGlobalQuestionResponse Client::deleteGlobalQuestionWithOptions(const DeleteGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalQuestionId()) {
    query["GlobalQuestionId"] = request.getGlobalQuestionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGlobalQuestion"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGlobalQuestionResponse>();
}

/**
 * @summary Deletes a global question from a legacy canvas script.
 *
 * @param request DeleteGlobalQuestionRequest
 * @return DeleteGlobalQuestionResponse
 */
DeleteGlobalQuestionResponse Client::deleteGlobalQuestion(const DeleteGlobalQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGlobalQuestionWithOptions(request, runtime);
}

/**
 * @summary Deletes an Intelligent Outbound Calling instance.
 *
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
    {"version" , "2019-12-26"},
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
 * @summary Deletes an Intelligent Outbound Calling instance.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes an intent. This is a legacy API.
 *
 * @param request DeleteIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIntentResponse
 */
DeleteIntentResponse Client::deleteIntentWithOptions(const DeleteIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIntent"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIntentResponse>();
}

/**
 * @summary Deletes an intent. This is a legacy API.
 *
 * @param request DeleteIntentRequest
 * @return DeleteIntentResponse
 */
DeleteIntentResponse Client::deleteIntent(const DeleteIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIntentWithOptions(request, runtime);
}

/**
 * @summary Deletes a job group.
 *
 * @param request DeleteJobGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobGroupResponse
 */
DeleteJobGroupResponse Client::deleteJobGroupWithOptions(const DeleteJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteJobGroup"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteJobGroupResponse>();
}

/**
 * @summary Deletes a job group.
 *
 * @param request DeleteJobGroupRequest
 * @return DeleteJobGroupResponse
 */
DeleteJobGroupResponse Client::deleteJobGroup(const DeleteJobGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteJobGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an outbound call number. This API is deprecated.
 *
 * @param request DeleteOutboundCallNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOutboundCallNumberResponse
 */
DeleteOutboundCallNumberResponse Client::deleteOutboundCallNumberWithOptions(const DeleteOutboundCallNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOutboundCallNumberId()) {
    query["OutboundCallNumberId"] = request.getOutboundCallNumberId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOutboundCallNumber"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOutboundCallNumberResponse>();
}

/**
 * @summary Deletes an outbound call number. This API is deprecated.
 *
 * @param request DeleteOutboundCallNumberRequest
 * @return DeleteOutboundCallNumberResponse
 */
DeleteOutboundCallNumberResponse Client::deleteOutboundCallNumber(const DeleteOutboundCallNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOutboundCallNumberWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified script.
 *
 * @param request DeleteScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScriptWithOptions(const DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScript"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScriptResponse>();
}

/**
 * @summary Deletes a specified script.
 *
 * @param request DeleteScriptRequest
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScript(const DeleteScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScriptWithOptions(request, runtime);
}

/**
 * @summary Deletes uploaded recordings for a small-model scenario.
 *
 * @param request DeleteScriptRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScriptRecordingResponse
 */
DeleteScriptRecordingResponse Client::deleteScriptRecordingWithOptions(const DeleteScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasUuidsJson()) {
    query["UuidsJson"] = request.getUuidsJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScriptRecording"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScriptRecordingResponse>();
}

/**
 * @summary Deletes uploaded recordings for a small-model scenario.
 *
 * @param request DeleteScriptRecordingRequest
 * @return DeleteScriptRecordingResponse
 */
DeleteScriptRecordingResponse Client::deleteScriptRecording(const DeleteScriptRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScriptRecordingWithOptions(request, runtime);
}

/**
 * @summary Delete a script recording.
 *
 * @param request DeleteScriptWaveformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScriptWaveformResponse
 */
DeleteScriptWaveformResponse Client::deleteScriptWaveformWithOptions(const DeleteScriptWaveformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptWaveformId()) {
    query["ScriptWaveformId"] = request.getScriptWaveformId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScriptWaveform"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScriptWaveformResponse>();
}

/**
 * @summary Delete a script recording.
 *
 * @param request DeleteScriptWaveformRequest
 * @return DeleteScriptWaveformResponse
 */
DeleteScriptWaveformResponse Client::deleteScriptWaveform(const DeleteScriptWaveformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScriptWaveformWithOptions(request, runtime);
}

/**
 * @summary Retrieves the intent in the small model scenario.
 *
 * @description ***
 *
 * @param request DescribeBeebotIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBeebotIntentResponse
 */
DescribeBeebotIntentResponse Client::describeBeebotIntentWithOptions(const DescribeBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBeebotIntent"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBeebotIntentResponse>();
}

/**
 * @summary Retrieves the intent in the small model scenario.
 *
 * @description ***
 *
 * @param request DescribeBeebotIntentRequest
 * @return DescribeBeebotIntentResponse
 */
DescribeBeebotIntentResponse Client::describeBeebotIntent(const DescribeBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBeebotIntentWithOptions(request, runtime);
}

/**
 * @summary Retrieves performance statistics for task labels.
 *
 * @param request DescribeDialogueNodeStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDialogueNodeStatisticsResponse
 */
DescribeDialogueNodeStatisticsResponse Client::describeDialogueNodeStatisticsWithOptions(const DescribeDialogueNodeStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDialogueNodeStatistics"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDialogueNodeStatisticsResponse>();
}

/**
 * @summary Retrieves performance statistics for task labels.
 *
 * @param request DescribeDialogueNodeStatisticsRequest
 * @return DescribeDialogueNodeStatisticsResponse
 */
DescribeDialogueNodeStatisticsResponse Client::describeDialogueNodeStatistics(const DescribeDialogueNodeStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDialogueNodeStatisticsWithOptions(request, runtime);
}

/**
 * @summary Describes DS reports.
 *
 * @param request DescribeDsReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDsReportsResponse
 */
DescribeDsReportsResponse Client::describeDsReportsWithOptions(const DescribeDsReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDsReports"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDsReportsResponse>();
}

/**
 * @summary Describes DS reports.
 *
 * @param request DescribeDsReportsRequest
 * @return DescribeDsReportsResponse
 */
DescribeDsReportsResponse Client::describeDsReports(const DescribeDsReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDsReportsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a global question in a legacy canvas script.
 *
 * @description ***
 *
 * @param request DescribeGlobalQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalQuestionResponse
 */
DescribeGlobalQuestionResponse Client::describeGlobalQuestionWithOptions(const DescribeGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalQuestionId()) {
    query["GlobalQuestionId"] = request.getGlobalQuestionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGlobalQuestion"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGlobalQuestionResponse>();
}

/**
 * @summary Retrieves the details of a global question in a legacy canvas script.
 *
 * @description ***
 *
 * @param request DescribeGlobalQuestionRequest
 * @return DescribeGlobalQuestionResponse
 */
DescribeGlobalQuestionResponse Client::describeGlobalQuestion(const DescribeGlobalQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalQuestionWithOptions(request, runtime);
}

/**
 * @summary Returns the execution status of tasks in a task group.
 *
 * @param request DescribeGroupExecutingInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupExecutingInfoResponse
 */
DescribeGroupExecutingInfoResponse Client::describeGroupExecutingInfoWithOptions(const DescribeGroupExecutingInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupExecutingInfo"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupExecutingInfoResponse>();
}

/**
 * @summary Returns the execution status of tasks in a task group.
 *
 * @param request DescribeGroupExecutingInfoRequest
 * @return DescribeGroupExecutingInfoResponse
 */
DescribeGroupExecutingInfoResponse Client::describeGroupExecutingInfo(const DescribeGroupExecutingInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupExecutingInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an Outbound Calling instance.
 *
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstance"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary Queries the details of an Outbound Calling instance.
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an intent. This is a legacy Canvas API.
 *
 * @param request DescribeIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIntentResponse
 */
DescribeIntentResponse Client::describeIntentWithOptions(const DescribeIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIntent"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIntentResponse>();
}

/**
 * @summary Retrieves the details of an intent. This is a legacy Canvas API.
 *
 * @param request DescribeIntentRequest
 * @return DescribeIntentResponse
 */
DescribeIntentResponse Client::describeIntent(const DescribeIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntentWithOptions(request, runtime);
}

/**
 * @summary Queries the performance statistics of intents for a task group.
 *
 * @param request DescribeIntentStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIntentStatisticsResponse
 */
DescribeIntentStatisticsResponse Client::describeIntentStatisticsWithOptions(const DescribeIntentStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIntentStatistics"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIntentStatisticsResponse>();
}

/**
 * @summary Queries the performance statistics of intents for a task group.
 *
 * @param request DescribeIntentStatisticsRequest
 * @return DescribeIntentStatisticsResponse
 */
DescribeIntentStatisticsResponse Client::describeIntentStatistics(const DescribeIntentStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntentStatisticsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the conversation data for a specific job.
 *
 * @param request DescribeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobResponse
 */
DescribeJobResponse Client::describeJobWithOptions(const DescribeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasWithScript()) {
    query["WithScript"] = request.getWithScript();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJob"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobResponse>();
}

/**
 * @summary Retrieves the conversation data for a specific job.
 *
 * @param request DescribeJobRequest
 * @return DescribeJobResponse
 */
DescribeJobResponse Client::describeJob(const DescribeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobWithOptions(request, runtime);
}

/**
 * @summary Retrieve the parsing progress of an uploaded job file.
 *
 * @param request DescribeJobDataParsingTaskProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobDataParsingTaskProgressResponse
 */
DescribeJobDataParsingTaskProgressResponse Client::describeJobDataParsingTaskProgressWithOptions(const DescribeJobDataParsingTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobDataParsingTaskId()) {
    query["JobDataParsingTaskId"] = request.getJobDataParsingTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJobDataParsingTaskProgress"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobDataParsingTaskProgressResponse>();
}

/**
 * @summary Retrieve the parsing progress of an uploaded job file.
 *
 * @param request DescribeJobDataParsingTaskProgressRequest
 * @return DescribeJobDataParsingTaskProgressResponse
 */
DescribeJobDataParsingTaskProgressResponse Client::describeJobDataParsingTaskProgress(const DescribeJobDataParsingTaskProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobDataParsingTaskProgressWithOptions(request, runtime);
}

/**
 * @summary Retrieves data for intelligent outbound call job groups.
 *
 * @param request DescribeJobGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobGroupResponse
 */
DescribeJobGroupResponse Client::describeJobGroupWithOptions(const DescribeJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBriefTypes()) {
    query["BriefTypes"] = request.getBriefTypes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJobGroup"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobGroupResponse>();
}

/**
 * @summary Retrieves data for intelligent outbound call job groups.
 *
 * @param request DescribeJobGroupRequest
 * @return DescribeJobGroupResponse
 */
DescribeJobGroupResponse Client::describeJobGroup(const DescribeJobGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves the progress of a task group export task. This operation is deprecated. Use ListDownloadTasks instead.
 *
 * @param request DescribeJobGroupExportTaskProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobGroupExportTaskProgressResponse
 */
DescribeJobGroupExportTaskProgressResponse Client::describeJobGroupExportTaskProgressWithOptions(const DescribeJobGroupExportTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJobGroupExportTaskProgress"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobGroupExportTaskProgressResponse>();
}

/**
 * @summary Retrieves the progress of a task group export task. This operation is deprecated. Use ListDownloadTasks instead.
 *
 * @param request DescribeJobGroupExportTaskProgressRequest
 * @return DescribeJobGroupExportTaskProgressResponse
 */
DescribeJobGroupExportTaskProgressResponse Client::describeJobGroupExportTaskProgress(const DescribeJobGroupExportTaskProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobGroupExportTaskProgressWithOptions(request, runtime);
}

/**
 * @summary Returns information about a script.
 *
 * @param request DescribeScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScriptResponse
 */
DescribeScriptResponse Client::describeScriptWithOptions(const DescribeScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScript"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScriptResponse>();
}

/**
 * @summary Returns information about a script.
 *
 * @param request DescribeScriptRequest
 * @return DescribeScriptResponse
 */
DescribeScriptResponse Client::describeScript(const DescribeScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScriptWithOptions(request, runtime);
}

/**
 * @summary Describes the voice configuration of a script created in the legacy canvas.
 *
 * @param request DescribeScriptVoiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScriptVoiceConfigResponse
 */
DescribeScriptVoiceConfigResponse Client::describeScriptVoiceConfigWithOptions(const DescribeScriptVoiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptVoiceConfigId()) {
    query["ScriptVoiceConfigId"] = request.getScriptVoiceConfigId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScriptVoiceConfig"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScriptVoiceConfigResponse>();
}

/**
 * @summary Describes the voice configuration of a script created in the legacy canvas.
 *
 * @param request DescribeScriptVoiceConfigRequest
 * @return DescribeScriptVoiceConfigResponse
 */
DescribeScriptVoiceConfigResponse Client::describeScriptVoiceConfig(const DescribeScriptVoiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScriptVoiceConfigWithOptions(request, runtime);
}

/**
 * @summary Query the text-to-speech (TTS) configuration information.
 *
 * @param request DescribeTTSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTTSConfigResponse
 */
DescribeTTSConfigResponse Client::describeTTSConfigWithOptions(const DescribeTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTTSConfig"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTTSConfigResponse>();
}

/**
 * @summary Query the text-to-speech (TTS) configuration information.
 *
 * @param request DescribeTTSConfigRequest
 * @return DescribeTTSConfigResponse
 */
DescribeTTSConfigResponse Client::describeTTSConfig(const DescribeTTSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTTSConfigWithOptions(request, runtime);
}

/**
 * @summary Preview text-to-speech (TTS) audio.
 *
 * @param request DescribeTTSDemoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTTSDemoResponse
 */
DescribeTTSDemoResponse Client::describeTTSDemoWithOptions(const DescribeTTSDemoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessKey()) {
    query["AccessKey"] = request.getAccessKey();
  }

  if (!!request.hasAliCustomizedVoice()) {
    query["AliCustomizedVoice"] = request.getAliCustomizedVoice();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNlsServiceType()) {
    query["NlsServiceType"] = request.getNlsServiceType();
  }

  if (!!request.hasPitchRate()) {
    query["PitchRate"] = request.getPitchRate();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSecretKey()) {
    query["SecretKey"] = request.getSecretKey();
  }

  if (!!request.hasSpeechRate()) {
    query["SpeechRate"] = request.getSpeechRate();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
  }

  if (!!request.hasVoice()) {
    query["Voice"] = request.getVoice();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTTSDemo"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTTSDemoResponse>();
}

/**
 * @summary Preview text-to-speech (TTS) audio.
 *
 * @param request DescribeTTSDemoRequest
 * @return DescribeTTSDemoResponse
 */
DescribeTTSDemoResponse Client::describeTTSDemo(const DescribeTTSDemoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTTSDemoWithOptions(request, runtime);
}

/**
 * @summary Queries statistics about tag hits. This is a legacy canvas API.
 *
 * @param request DescribeTagHitsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagHitsSummaryResponse
 */
DescribeTagHitsSummaryResponse Client::describeTagHitsSummaryWithOptions(const DescribeTagHitsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagHitsSummary"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagHitsSummaryResponse>();
}

/**
 * @summary Queries statistics about tag hits. This is a legacy canvas API.
 *
 * @param request DescribeTagHitsSummaryRequest
 * @return DescribeTagHitsSummaryResponse
 */
DescribeTagHitsSummaryResponse Client::describeTagHitsSummary(const DescribeTagHitsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagHitsSummaryWithOptions(request, runtime);
}

/**
 * @summary Lists the instances to which a phone number is bound in a tenant.
 *
 * @param request DescribeTenantBindNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTenantBindNumberResponse
 */
DescribeTenantBindNumberResponse Client::describeTenantBindNumberWithOptions(const DescribeTenantBindNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTenantBindNumber"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTenantBindNumberResponse>();
}

/**
 * @summary Lists the instances to which a phone number is bound in a tenant.
 *
 * @param request DescribeTenantBindNumberRequest
 * @return DescribeTenantBindNumberResponse
 */
DescribeTenantBindNumberResponse Client::describeTenantBindNumber(const DescribeTenantBindNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTenantBindNumberWithOptions(request, runtime);
}

/**
 * @summary This robot dialogue interface handles CC callback outbound calls. (Deprecated)
 *
 * @param request DialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DialogueResponse
 */
DialogueResponse Client::dialogueWithOptions(const DialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionKey()) {
    query["ActionKey"] = request.getActionKey();
  }

  if (!!request.hasActionParams()) {
    query["ActionParams"] = request.getActionParams();
  }

  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCallType()) {
    query["CallType"] = request.getCallType();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Dialogue"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DialogueResponse>();
}

/**
 * @summary This robot dialogue interface handles CC callback outbound calls. (Deprecated)
 *
 * @param request DialogueRequest
 * @return DialogueResponse
 */
DialogueResponse Client::dialogue(const DialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dialogueWithOptions(request, runtime);
}

/**
 * @summary Downloads a call recording.
 *
 * @param request DownloadRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadRecordingResponse
 */
DownloadRecordingResponse Client::downloadRecordingWithOptions(const DownloadRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNeedVoiceSliceRecording()) {
    query["NeedVoiceSliceRecording"] = request.getNeedVoiceSliceRecording();
  }

  if (!!request.hasSwapChannels()) {
    query["SwapChannels"] = request.getSwapChannels();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadRecording"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadRecordingResponse>();
}

/**
 * @summary Downloads a call recording.
 *
 * @param request DownloadRecordingRequest
 * @return DownloadRecordingResponse
 */
DownloadRecordingResponse Client::downloadRecording(const DownloadRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadRecordingWithOptions(request, runtime);
}

/**
 * @summary Download script recordings by retrieving their URLs. This operation is intended for small model scenarios.
 *
 * @param request DownloadScriptRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadScriptRecordingResponse
 */
DownloadScriptRecordingResponse Client::downloadScriptRecordingWithOptions(const DownloadScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadScriptRecording"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadScriptRecordingResponse>();
}

/**
 * @summary Download script recordings by retrieving their URLs. This operation is intended for small model scenarios.
 *
 * @param request DownloadScriptRecordingRequest
 * @return DownloadScriptRecordingResponse
 */
DownloadScriptRecordingResponse Client::downloadScriptRecording(const DownloadScriptRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadScriptRecordingWithOptions(request, runtime);
}

/**
 * @summary Duplicates an existing script. This operation applies only to the legacy canvas.
 *
 * @param request DuplicateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DuplicateScriptResponse
 */
DuplicateScriptResponse Client::duplicateScriptWithOptions(const DuplicateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSourceScriptId()) {
    query["SourceScriptId"] = request.getSourceScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DuplicateScript"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DuplicateScriptResponse>();
}

/**
 * @summary Duplicates an existing script. This operation applies only to the legacy canvas.
 *
 * @param request DuplicateScriptRequest
 * @return DuplicateScriptResponse
 */
DuplicateScriptResponse Client::duplicateScript(const DuplicateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return duplicateScriptWithOptions(request, runtime);
}

/**
 * @summary Exports a scenario.
 *
 * @param request ExportScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportScriptResponse
 */
ExportScriptResponse Client::exportScriptWithOptions(const ExportScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportScript"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportScriptResponse>();
}

/**
 * @summary Exports a scenario.
 *
 * @param request ExportScriptRequest
 * @return ExportScriptResponse
 */
ExportScriptResponse Client::exportScript(const ExportScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportScriptWithOptions(request, runtime);
}

/**
 * @summary Upload a hotword list file.
 *
 * @param request GenerateUploadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUploadUrlResponse
 */
GenerateUploadUrlResponse Client::generateUploadUrlWithOptions(const GenerateUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateUploadUrl"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateUploadUrlResponse>();
}

/**
 * @summary Upload a hotword list file.
 *
 * @param request GenerateUploadUrlRequest
 * @return GenerateUploadUrlResponse
 */
GenerateUploadUrlResponse Client::generateUploadUrl(const GenerateUploadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUploadUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieve the delay before audio playback begins after a call is answered.
 *
 * @param request GetAfterAnswerDelayPlaybackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAfterAnswerDelayPlaybackResponse
 */
GetAfterAnswerDelayPlaybackResponse Client::getAfterAnswerDelayPlaybackWithOptions(const GetAfterAnswerDelayPlaybackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAfterAnswerDelayPlayback"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAfterAnswerDelayPlaybackResponse>();
}

/**
 * @summary Retrieve the delay before audio playback begins after a call is answered.
 *
 * @param request GetAfterAnswerDelayPlaybackRequest
 * @return GetAfterAnswerDelayPlaybackResponse
 */
GetAfterAnswerDelayPlaybackResponse Client::getAfterAnswerDelayPlayback(const GetAfterAnswerDelayPlaybackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAfterAnswerDelayPlaybackWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configuration of an agent.
 *
 * @param request GetAgentProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentProfileResponse
 */
GetAgentProfileResponse Client::getAgentProfileWithOptions(const GetAgentProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentProfileId()) {
    body["AgentProfileId"] = request.getAgentProfileId();
  }

  if (!!request.hasAppIp()) {
    body["AppIp"] = request.getAppIp();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAgentProfile"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentProfileResponse>();
}

/**
 * @summary Retrieves the configuration of an agent.
 *
 * @param request GetAgentProfileRequest
 * @return GetAgentProfileResponse
 */
GetAgentProfileResponse Client::getAgentProfile(const GetAgentProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentProfileWithOptions(request, runtime);
}

/**
 * @summary Retrieves an agent profile template.
 *
 * @param request GetAgentProfileTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentProfileTemplateResponse
 */
GetAgentProfileTemplateResponse Client::getAgentProfileTemplateWithOptions(const GetAgentProfileTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentProfileTemplateId()) {
    body["AgentProfileTemplateId"] = request.getAgentProfileTemplateId();
  }

  if (!!request.hasAppIp()) {
    body["AppIp"] = request.getAppIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAgentProfileTemplate"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentProfileTemplateResponse>();
}

/**
 * @summary Retrieves an agent profile template.
 *
 * @param request GetAgentProfileTemplateRequest
 * @return GetAgentProfileTemplateResponse
 */
GetAgentProfileTemplateResponse Client::getAgentProfileTemplate(const GetAgentProfileTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentProfileTemplateWithOptions(request, runtime);
}

/**
 * @summary null
 *
 * @param request GetAnnotationMissionSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAnnotationMissionSummaryResponse
 */
GetAnnotationMissionSummaryResponse Client::getAnnotationMissionSummaryWithOptions(const GetAnnotationMissionSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionId()) {
    query["AnnotationMissionId"] = request.getAnnotationMissionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAnnotationMissionSummary"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAnnotationMissionSummaryResponse>();
}

/**
 * @summary null
 *
 * @param request GetAnnotationMissionSummaryRequest
 * @return GetAnnotationMissionSummaryResponse
 */
GetAnnotationMissionSummaryResponse Client::getAnnotationMissionSummary(const GetAnnotationMissionSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAnnotationMissionSummaryWithOptions(request, runtime);
}

/**
 * @param request GetAnnotationMissionTagInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAnnotationMissionTagInfoListResponse
 */
GetAnnotationMissionTagInfoListResponse Client::getAnnotationMissionTagInfoListWithOptions(const GetAnnotationMissionTagInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAnnotationMissionTagInfoList"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAnnotationMissionTagInfoListResponse>();
}

/**
 * @param request GetAnnotationMissionTagInfoListRequest
 * @return GetAnnotationMissionTagInfoListResponse
 */
GetAnnotationMissionTagInfoListResponse Client::getAnnotationMissionTagInfoList(const GetAnnotationMissionTagInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAnnotationMissionTagInfoListWithOptions(request, runtime);
}

/**
 * @summary Retrieves information such as the Automatic Speech Recognition (ASR) model list and hotword list. This operation is deprecated.
 *
 * @param request GetAsrServerInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsrServerInfoResponse
 */
GetAsrServerInfoResponse Client::getAsrServerInfoWithOptions(const GetAsrServerInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsrServerInfo"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsrServerInfoResponse>();
}

/**
 * @summary Retrieves information such as the Automatic Speech Recognition (ASR) model list and hotword list. This operation is deprecated.
 *
 * @param request GetAsrServerInfoRequest
 * @return GetAsrServerInfoResponse
 */
GetAsrServerInfoResponse Client::getAsrServerInfo(const GetAsrServerInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsrServerInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the result of an asynchronous outbound call task upload.
 *
 * @param request GetAssignJobsAsyncResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAssignJobsAsyncResultResponse
 */
GetAssignJobsAsyncResultResponse Client::getAssignJobsAsyncResultWithOptions(const GetAssignJobsAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsyncTaskId()) {
    query["AsyncTaskId"] = request.getAsyncTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAssignJobsAsyncResult"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAssignJobsAsyncResultResponse>();
}

/**
 * @summary Retrieves the result of an asynchronous outbound call task upload.
 *
 * @param request GetAssignJobsAsyncResultRequest
 * @return GetAssignJobsAsyncResultResponse
 */
GetAssignJobsAsyncResultResponse Client::getAssignJobsAsyncResult(const GetAssignJobsAsyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAssignJobsAsyncResultWithOptions(request, runtime);
}

/**
 * @summary Retrieve the global outbound time periods for the outbound calling system.
 *
 * @param request GetBaseStrategyPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBaseStrategyPeriodResponse
 */
GetBaseStrategyPeriodResponse Client::getBaseStrategyPeriodWithOptions(const GetBaseStrategyPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBaseStrategyPeriod"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBaseStrategyPeriodResponse>();
}

/**
 * @summary Retrieve the global outbound time periods for the outbound calling system.
 *
 * @param request GetBaseStrategyPeriodRequest
 * @return GetBaseStrategyPeriodResponse
 */
GetBaseStrategyPeriodResponse Client::getBaseStrategyPeriod(const GetBaseStrategyPeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBaseStrategyPeriodWithOptions(request, runtime);
}

/**
 * @summary Retrieves the remaining concurrency for the caller\\"s account.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConcurrentConversationQuotaResponse
 */
GetConcurrentConversationQuotaResponse Client::getConcurrentConversationQuotaWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetConcurrentConversationQuota"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConcurrentConversationQuotaResponse>();
}

/**
 * @summary Retrieves the remaining concurrency for the caller\\"s account.
 *
 * @return GetConcurrentConversationQuotaResponse
 */
GetConcurrentConversationQuotaResponse Client::getConcurrentConversationQuota() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConcurrentConversationQuotaWithOptions(runtime);
}

/**
 * @summary Retrieves the list of contacts blocked for outbound calls.
 *
 * @param request GetContactBlockListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContactBlockListResponse
 */
GetContactBlockListResponse Client::getContactBlockListWithOptions(const GetContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCountTotalRow()) {
    query["CountTotalRow"] = request.getCountTotalRow();
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
    {"action" , "GetContactBlockList"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContactBlockListResponse>();
}

/**
 * @summary Retrieves the list of contacts blocked for outbound calls.
 *
 * @param request GetContactBlockListRequest
 * @return GetContactBlockListResponse
 */
GetContactBlockListResponse Client::getContactBlockList(const GetContactBlockListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContactBlockListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the global outbound call policy whitelist.
 *
 * @param request GetContactWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContactWhiteListResponse
 */
GetContactWhiteListResponse Client::getContactWhiteListWithOptions(const GetContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCountTotalRow()) {
    query["CountTotalRow"] = request.getCountTotalRow();
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
    {"action" , "GetContactWhiteList"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContactWhiteListResponse>();
}

/**
 * @summary Retrieves the global outbound call policy whitelist.
 *
 * @param request GetContactWhiteListRequest
 * @return GetContactWhiteListResponse
 */
GetContactWhiteListResponse Client::getContactWhiteList(const GetContactWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContactWhiteListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the current concurrency of an instance.
 *
 * @param request GetCurrentConcurrencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCurrentConcurrencyResponse
 */
GetCurrentConcurrencyResponse Client::getCurrentConcurrencyWithOptions(const GetCurrentConcurrencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCurrentConcurrency"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCurrentConcurrencyResponse>();
}

/**
 * @summary Retrieves the current concurrency of an instance.
 *
 * @param request GetCurrentConcurrencyRequest
 * @return GetCurrentConcurrencyResponse
 */
GetCurrentConcurrencyResponse Client::getCurrentConcurrency(const GetCurrentConcurrencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCurrentConcurrencyWithOptions(request, runtime);
}

/**
 * @summary A query-based feature toggle that disables outbound calls to nonexistent numbers in the global dimension.
 *
 * @param request GetEmptyNumberNoMoreCallsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEmptyNumberNoMoreCallsInfoResponse
 */
GetEmptyNumberNoMoreCallsInfoResponse Client::getEmptyNumberNoMoreCallsInfoWithOptions(const GetEmptyNumberNoMoreCallsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEmptyNumberNoMoreCallsInfo"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEmptyNumberNoMoreCallsInfoResponse>();
}

/**
 * @summary A query-based feature toggle that disables outbound calls to nonexistent numbers in the global dimension.
 *
 * @param request GetEmptyNumberNoMoreCallsInfoRequest
 * @return GetEmptyNumberNoMoreCallsInfoResponse
 */
GetEmptyNumberNoMoreCallsInfoResponse Client::getEmptyNumberNoMoreCallsInfo(const GetEmptyNumberNoMoreCallsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEmptyNumberNoMoreCallsInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the parameters for uploading job data.
 *
 * @param request GetJobDataUploadParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobDataUploadParamsResponse
 */
GetJobDataUploadParamsResponse Client::getJobDataUploadParamsWithOptions(const GetJobDataUploadParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusiType()) {
    query["BusiType"] = request.getBusiType();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.getUniqueId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobDataUploadParams"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobDataUploadParamsResponse>();
}

/**
 * @summary Retrieves the parameters for uploading job data.
 *
 * @param request GetJobDataUploadParamsRequest
 * @return GetJobDataUploadParamsResponse
 */
GetJobDataUploadParamsResponse Client::getJobDataUploadParams(const GetJobDataUploadParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobDataUploadParamsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the maximum number of daily call attempts allowed for a specified called number.
 *
 * @param request GetMaxAttemptsPerDayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMaxAttemptsPerDayResponse
 */
GetMaxAttemptsPerDayResponse Client::getMaxAttemptsPerDayWithOptions(const GetMaxAttemptsPerDayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMaxAttemptsPerDay"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMaxAttemptsPerDayResponse>();
}

/**
 * @summary Retrieves the maximum number of daily call attempts allowed for a specified called number.
 *
 * @param request GetMaxAttemptsPerDayRequest
 * @return GetMaxAttemptsPerDayResponse
 */
GetMaxAttemptsPerDayResponse Client::getMaxAttemptsPerDay(const GetMaxAttemptsPerDayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMaxAttemptsPerDayWithOptions(request, runtime);
}

/**
 * @summary Retrieves the download URL for the number library template. This API is deprecated.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNumberDistrictInfoTemplateDownloadUrlResponse
 */
GetNumberDistrictInfoTemplateDownloadUrlResponse Client::getNumberDistrictInfoTemplateDownloadUrlWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetNumberDistrictInfoTemplateDownloadUrl"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNumberDistrictInfoTemplateDownloadUrlResponse>();
}

/**
 * @summary Retrieves the download URL for the number library template. This API is deprecated.
 *
 * @return GetNumberDistrictInfoTemplateDownloadUrlResponse
 */
GetNumberDistrictInfoTemplateDownloadUrlResponse Client::getNumberDistrictInfoTemplateDownloadUrl() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNumberDistrictInfoTemplateDownloadUrlWithOptions(runtime);
}

/**
 * @summary Retrieves the public key for an asymmetric encryption algorithm.
 *
 * @param request GetPublicKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPublicKeyResponse
 */
GetPublicKeyResponse Client::getPublicKeyWithOptions(const GetPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetPublicKey"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPublicKeyResponse>();
}

/**
 * @summary Retrieves the public key for an asymmetric encryption algorithm.
 *
 * @param request GetPublicKeyRequest
 * @return GetPublicKeyResponse
 */
GetPublicKeyResponse Client::getPublicKey(const GetPublicKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPublicKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the current concurrency list.
 *
 * @param request GetRealtimeConcurrencyReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRealtimeConcurrencyReportResponse
 */
GetRealtimeConcurrencyReportResponse Client::getRealtimeConcurrencyReportWithOptions(const GetRealtimeConcurrencyReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRealtimeConcurrencyReport"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRealtimeConcurrencyReportResponse>();
}

/**
 * @summary Queries the current concurrency list.
 *
 * @param request GetRealtimeConcurrencyReportRequest
 * @return GetRealtimeConcurrencyReportResponse
 */
GetRealtimeConcurrencyReportResponse Client::getRealtimeConcurrencyReport(const GetRealtimeConcurrencyReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRealtimeConcurrencyReportWithOptions(request, runtime);
}

/**
 * @summary Summary information for outbound call instances.
 *
 * @param request GetSummaryInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSummaryInfoResponse
 */
GetSummaryInfoResponse Client::getSummaryInfoWithOptions(const GetSummaryInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSummaryInfo"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSummaryInfoResponse>();
}

/**
 * @summary Summary information for outbound call instances.
 *
 * @param request GetSummaryInfoRequest
 * @return GetSummaryInfoResponse
 */
GetSummaryInfoResponse Client::getSummaryInfo(const GetSummaryInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSummaryInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieve a task by its UUID.
 *
 * @param request GetTaskByUuidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskByUuidResponse
 */
GetTaskByUuidResponse Client::getTaskByUuidWithOptions(const GetTaskByUuidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskByUuid"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskByUuidResponse>();
}

/**
 * @summary Retrieve a task by its UUID.
 *
 * @param request GetTaskByUuidRequest
 * @return GetTaskByUuidResponse
 */
GetTaskByUuidResponse Client::getTaskByUuid(const GetTaskByUuidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskByUuidWithOptions(request, runtime);
}

/**
 * @summary Retrieve the application version information.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVersionResponse
 */
GetVersionResponse Client::getVersionWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetVersion"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVersionResponse>();
}

/**
 * @summary Retrieve the application version information.
 *
 * @return GetVersionResponse
 */
GetVersionResponse Client::getVersion() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVersionWithOptions(runtime);
}

/**
 * @summary Import a scenario.
 *
 * @param request ImportScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportScriptResponse
 */
ImportScriptResponse Client::importScriptWithOptions(const ImportScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNluEngine()) {
    query["NluEngine"] = request.getNluEngine();
  }

  if (!!request.hasSignatureUrl()) {
    query["SignatureUrl"] = request.getSignatureUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportScript"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportScriptResponse>();
}

/**
 * @summary Import a scenario.
 *
 * @param request ImportScriptRequest
 * @return ImportScriptResponse
 */
ImportScriptResponse Client::importScript(const ImportScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importScriptWithOptions(request, runtime);
}

/**
 * @summary InflightTaskTimeout
 *
 * @param request InflightTaskTimeoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InflightTaskTimeoutResponse
 */
InflightTaskTimeoutResponse Client::inflightTaskTimeoutWithOptions(const InflightTaskTimeoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.getInstanceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InflightTaskTimeout"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InflightTaskTimeoutResponse>();
}

/**
 * @summary InflightTaskTimeout
 *
 * @param request InflightTaskTimeoutRequest
 * @return InflightTaskTimeoutResponse
 */
InflightTaskTimeoutResponse Client::inflightTaskTimeout(const InflightTaskTimeoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return inflightTaskTimeoutWithOptions(request, runtime);
}

/**
 * @summary Retrieves the publication history of an agent configuration in a Large Language Model (LLM) scenario.
 *
 * @param request ListAgentProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentProfilesResponse
 */
ListAgentProfilesResponse Client::listAgentProfilesWithOptions(const ListAgentProfilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppIp()) {
    body["AppIp"] = request.getAppIp();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAgentProfiles"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentProfilesResponse>();
}

/**
 * @summary Retrieves the publication history of an agent configuration in a Large Language Model (LLM) scenario.
 *
 * @param request ListAgentProfilesRequest
 * @return ListAgentProfilesResponse
 */
ListAgentProfilesResponse Client::listAgentProfiles(const ListAgentProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentProfilesWithOptions(request, runtime);
}

/**
 * @summary Lists the phone numbers bound to the tenant.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllTenantBindNumberBindingResponse
 */
ListAllTenantBindNumberBindingResponse Client::listAllTenantBindNumberBindingWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListAllTenantBindNumberBinding"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllTenantBindNumberBindingResponse>();
}

/**
 * @summary Lists the phone numbers bound to the tenant.
 *
 * @return ListAllTenantBindNumberBindingResponse
 */
ListAllTenantBindNumberBindingResponse Client::listAllTenantBindNumberBinding() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllTenantBindNumberBindingWithOptions(runtime);
}

/**
 * @summary Lists annotation missions.
 *
 * @param request ListAnnotationMissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnnotationMissionResponse
 */
ListAnnotationMissionResponse Client::listAnnotationMissionWithOptions(const ListAnnotationMissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionId()) {
    query["AnnotationMissionId"] = request.getAnnotationMissionId();
  }

  if (!!request.hasAnnotationMissionName()) {
    query["AnnotationMissionName"] = request.getAnnotationMissionName();
  }

  if (!!request.hasAnnotationStatusListFilter()) {
    query["AnnotationStatusListFilter"] = request.getAnnotationStatusListFilter();
  }

  if (!!request.hasAnnotationStatusListStringFilter()) {
    query["AnnotationStatusListStringFilter"] = request.getAnnotationStatusListStringFilter();
  }

  if (!!request.hasCreateTimeEndFilter()) {
    query["CreateTimeEndFilter"] = request.getCreateTimeEndFilter();
  }

  if (!!request.hasCreateTimeStartFilter()) {
    query["CreateTimeStartFilter"] = request.getCreateTimeStartFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAnnotationMission"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnnotationMissionResponse>();
}

/**
 * @summary Lists annotation missions.
 *
 * @param request ListAnnotationMissionRequest
 * @return ListAnnotationMissionResponse
 */
ListAnnotationMissionResponse Client::listAnnotationMission(const ListAnnotationMissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnnotationMissionWithOptions(request, runtime);
}

/**
 * @summary ListAnnotationMissionSession
 *
 * @param request ListAnnotationMissionSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnnotationMissionSessionResponse
 */
ListAnnotationMissionSessionResponse Client::listAnnotationMissionSessionWithOptions(const ListAnnotationMissionSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionId()) {
    query["AnnotationMissionId"] = request.getAnnotationMissionId();
  }

  if (!!request.hasAnnotationMissionSessionId()) {
    query["AnnotationMissionSessionId"] = request.getAnnotationMissionSessionId();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasIncludeStatusListJsonString()) {
    query["IncludeStatusListJsonString"] = request.getIncludeStatusListJsonString();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAnnotationMissionSession"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAnnotationMissionSessionResponse>();
}

/**
 * @summary ListAnnotationMissionSession
 *
 * @param request ListAnnotationMissionSessionRequest
 * @return ListAnnotationMissionSessionResponse
 */
ListAnnotationMissionSessionResponse Client::listAnnotationMissionSession(const ListAnnotationMissionSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAnnotationMissionSessionWithOptions(request, runtime);
}

/**
 * @summary Lists API plugins.
 *
 * @param request ListApiPluginsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiPluginsResponse
 */
ListApiPluginsResponse Client::listApiPluginsWithOptions(const ListApiPluginsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasUuidsJson()) {
    query["UuidsJson"] = request.getUuidsJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiPlugins"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiPluginsResponse>();
}

/**
 * @summary Lists API plugins.
 *
 * @param request ListApiPluginsRequest
 * @return ListApiPluginsResponse
 */
ListApiPluginsResponse Client::listApiPlugins(const ListApiPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApiPluginsWithOptions(request, runtime);
}

/**
 * @summary Lists intents for small-model scenarios.
 *
 * @param request ListBeebotIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBeebotIntentResponse
 */
ListBeebotIntentResponse Client::listBeebotIntentWithOptions(const ListBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.getIntentName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBeebotIntent"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBeebotIntentResponse>();
}

/**
 * @summary Lists intents for small-model scenarios.
 *
 * @param request ListBeebotIntentRequest
 * @return ListBeebotIntentResponse
 */
ListBeebotIntentResponse Client::listBeebotIntent(const ListBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBeebotIntentWithOptions(request, runtime);
}

/**
 * @summary Lists the utterance templates for a specified intent in a scenario.
 *
 * @param request ListBeebotIntentLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBeebotIntentLgfResponse
 */
ListBeebotIntentLgfResponse Client::listBeebotIntentLgfWithOptions(const ListBeebotIntentLgfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasLgfText()) {
    query["LgfText"] = request.getLgfText();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBeebotIntentLgf"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBeebotIntentLgfResponse>();
}

/**
 * @summary Lists the utterance templates for a specified intent in a scenario.
 *
 * @param request ListBeebotIntentLgfRequest
 * @return ListBeebotIntentLgfResponse
 */
ListBeebotIntentLgfResponse Client::listBeebotIntentLgf(const ListBeebotIntentLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBeebotIntentLgfWithOptions(request, runtime);
}

/**
 * @summary Lists user utterances for intents in small model scenarios.
 *
 * @param request ListBeebotIntentUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBeebotIntentUserSayResponse
 */
ListBeebotIntentUserSayResponse Client::listBeebotIntentUserSayWithOptions(const ListBeebotIntentUserSayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBeebotIntentUserSay"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBeebotIntentUserSayResponse>();
}

/**
 * @summary Lists user utterances for intents in small model scenarios.
 *
 * @param request ListBeebotIntentUserSayRequest
 * @return ListBeebotIntentUserSayResponse
 */
ListBeebotIntentUserSayResponse Client::listBeebotIntentUserSay(const ListBeebotIntentUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBeebotIntentUserSayWithOptions(request, runtime);
}

/**
 * @summary Lists the instances of the Yunxiao Mi chatbot service in Alibaba Cloud.
 *
 * @param request ListChatbotInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatbotInstancesResponse
 */
ListChatbotInstancesResponse Client::listChatbotInstancesWithOptions(const ListChatbotInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
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
    {"action" , "ListChatbotInstances"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatbotInstancesResponse>();
}

/**
 * @summary Lists the instances of the Yunxiao Mi chatbot service in Alibaba Cloud.
 *
 * @param request ListChatbotInstancesRequest
 * @return ListChatbotInstancesResponse
 */
ListChatbotInstancesResponse Client::listChatbotInstances(const ListChatbotInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatbotInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the dialogue flows of a script in the legacy canvas.
 *
 * @param request ListDialogueFlowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDialogueFlowsResponse
 */
ListDialogueFlowsResponse Client::listDialogueFlowsWithOptions(const ListDialogueFlowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDialogueFlows"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDialogueFlowsResponse>();
}

/**
 * @summary Queries the dialogue flows of a script in the legacy canvas.
 *
 * @param request ListDialogueFlowsRequest
 * @return ListDialogueFlowsResponse
 */
ListDialogueFlowsResponse Client::listDialogueFlows(const ListDialogueFlowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDialogueFlowsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of download tasks in Download Hub.
 *
 * @param request ListDownloadTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDownloadTasksResponse
 */
ListDownloadTasksResponse Client::listDownloadTasksWithOptions(const ListDownloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDownloadTasks"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDownloadTasksResponse>();
}

/**
 * @summary Queries the list of download tasks in Download Hub.
 *
 * @param request ListDownloadTasksRequest
 * @return ListDownloadTasksResponse
 */
ListDownloadTasksResponse Client::listDownloadTasks(const ListDownloadTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDownloadTasksWithOptions(request, runtime);
}

/**
 * @summary You can call the ListFlashSmsTemplates operation to query flash SMS templates.
 *
 * @param request ListFlashSmsTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFlashSmsTemplatesResponse
 */
ListFlashSmsTemplatesResponse Client::listFlashSmsTemplatesWithOptions(const ListFlashSmsTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFlashSmsTemplates"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFlashSmsTemplatesResponse>();
}

/**
 * @summary You can call the ListFlashSmsTemplates operation to query flash SMS templates.
 *
 * @param request ListFlashSmsTemplatesRequest
 * @return ListFlashSmsTemplatesResponse
 */
ListFlashSmsTemplatesResponse Client::listFlashSmsTemplates(const ListFlashSmsTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of key questions. This is a legacy canvas interface.
 *
 * @param request ListGlobalQuestionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGlobalQuestionsResponse
 */
ListGlobalQuestionsResponse Client::listGlobalQuestionsWithOptions(const ListGlobalQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGlobalQuestions"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGlobalQuestionsResponse>();
}

/**
 * @summary Queries the list of key questions. This is a legacy canvas interface.
 *
 * @param request ListGlobalQuestionsRequest
 * @return ListGlobalQuestionsResponse
 */
ListGlobalQuestionsResponse Client::listGlobalQuestions(const ListGlobalQuestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGlobalQuestionsWithOptions(request, runtime);
}

/**
 * @summary Lists Outbound Calling Bot service instances.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2019-12-26"},
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
 * @summary Lists Outbound Calling Bot service instances.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Query intent for the Annotation Center list.
 *
 * @param request ListIntentionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntentionsResponse
 */
ListIntentionsResponse Client::listIntentionsWithOptions(const ListIntentionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionDataSourceType()) {
    query["AnnotationMissionDataSourceType"] = request.getAnnotationMissionDataSourceType();
  }

  if (!!request.hasBotId()) {
    query["BotId"] = request.getBotId();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasUserNick()) {
    query["UserNick"] = request.getUserNick();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntentions"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntentionsResponse>();
}

/**
 * @summary Query intent for the Annotation Center list.
 *
 * @param request ListIntentionsRequest
 * @return ListIntentionsResponse
 */
ListIntentionsResponse Client::listIntentions(const ListIntentionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntentionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves intents from the legacy canvas interface.
 *
 * @param request ListIntentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntentsResponse
 */
ListIntentsResponse Client::listIntentsWithOptions(const ListIntentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntents"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntentsResponse>();
}

/**
 * @summary Retrieves intents from the legacy canvas interface.
 *
 * @param request ListIntentsRequest
 * @return ListIntentsResponse
 */
ListIntentsResponse Client::listIntents(const ListIntentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntentsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of outbound call task groups.
 *
 * @param request ListJobGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobGroupsResponse
 */
ListJobGroupsResponse Client::listJobGroupsWithOptions(const ListJobGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsyncQuery()) {
    query["AsyncQuery"] = request.getAsyncQuery();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupStatusFilter()) {
    query["JobGroupStatusFilter"] = request.getJobGroupStatusFilter();
  }

  if (!!request.hasOnlyMinConcurrencyEnabled()) {
    query["OnlyMinConcurrencyEnabled"] = request.getOnlyMinConcurrencyEnabled();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchText()) {
    query["SearchText"] = request.getSearchText();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobGroups"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobGroupsResponse>();
}

/**
 * @summary Retrieves the list of outbound call task groups.
 *
 * @param request ListJobGroupsRequest
 * @return ListJobGroupsResponse
 */
ListJobGroupsResponse Client::listJobGroups(const ListJobGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobGroupsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of outbound call tasks asynchronously. Call this operation to retrieve the results of a `ListJobGroup` call that included the `Async` parameter.
 *
 * @param request ListJobGroupsAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobGroupsAsyncResponse
 */
ListJobGroupsAsyncResponse Client::listJobGroupsAsyncWithOptions(const ListJobGroupsAsyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobGroupsAsync"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobGroupsAsyncResponse>();
}

/**
 * @summary Retrieves the list of outbound call tasks asynchronously. Call this operation to retrieve the results of a `ListJobGroup` call that included the `Async` parameter.
 *
 * @param request ListJobGroupsAsyncRequest
 * @return ListJobGroupsAsyncResponse
 */
ListJobGroupsAsyncResponse Client::listJobGroupsAsync(const ListJobGroupsAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobGroupsAsyncWithOptions(request, runtime);
}

/**
 * @summary Query multiple jobs.
 *
 * @param request ListJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const ListJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListJobs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsResponse>();
}

/**
 * @summary Query multiple jobs.
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobsWithOptions(request, runtime);
}

/**
 * @summary Lists jobs by job group.
 *
 * @param request ListJobsByGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsByGroupResponse
 */
ListJobsByGroupResponse Client::listJobsByGroupWithOptions(const ListJobsByGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobFailureReason()) {
    query["JobFailureReason"] = request.getJobFailureReason();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasJobStatus()) {
    query["JobStatus"] = request.getJobStatus();
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
    {"action" , "ListJobsByGroup"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobsByGroupResponse>();
}

/**
 * @summary Lists jobs by job group.
 *
 * @param request ListJobsByGroupRequest
 * @return ListJobsByGroupResponse
 */
ListJobsByGroupResponse Client::listJobsByGroup(const ListJobsByGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobsByGroupWithOptions(request, runtime);
}

/**
 * @summary List outbound call numbers.
 *
 * @param request ListOutboundCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOutboundCallNumbersResponse
 */
ListOutboundCallNumbersResponse Client::listOutboundCallNumbersWithOptions(const ListOutboundCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListOutboundCallNumbers"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOutboundCallNumbersResponse>();
}

/**
 * @summary List outbound call numbers.
 *
 * @param request ListOutboundCallNumbersRequest
 * @return ListOutboundCallNumbersResponse
 */
ListOutboundCallNumbersResponse Client::listOutboundCallNumbers(const ListOutboundCallNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOutboundCallNumbersWithOptions(request, runtime);
}

/**
 * @summary Lists tags for business resources.
 *
 * @param request ListResourceTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceTagsResponse
 */
ListResourceTagsResponse Client::listResourceTagsWithOptions(const ListResourceTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceTags"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceTagsResponse>();
}

/**
 * @summary Lists tags for business resources.
 *
 * @param request ListResourceTagsRequest
 * @return ListResourceTagsResponse
 */
ListResourceTagsResponse Client::listResourceTags(const ListResourceTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceTagsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the publication history of the small model for outbound calls.
 *
 * @param request ListScriptPublishHistoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptPublishHistoriesResponse
 */
ListScriptPublishHistoriesResponse Client::listScriptPublishHistoriesWithOptions(const ListScriptPublishHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScriptPublishHistories"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptPublishHistoriesResponse>();
}

/**
 * @summary Retrieves the publication history of the small model for outbound calls.
 *
 * @param request ListScriptPublishHistoriesRequest
 * @return ListScriptPublishHistoriesResponse
 */
ListScriptPublishHistoriesResponse Client::listScriptPublishHistories(const ListScriptPublishHistoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptPublishHistoriesWithOptions(request, runtime);
}

/**
 * @summary Query the list of recording files. Use this operation in small model scenarios.
 *
 * @param request ListScriptRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptRecordingResponse
 */
ListScriptRecordingResponse Client::listScriptRecordingWithOptions(const ListScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRefIdsJson()) {
    query["RefIdsJson"] = request.getRefIdsJson();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSearch()) {
    query["Search"] = request.getSearch();
  }

  if (!!request.hasStatesJson()) {
    query["StatesJson"] = request.getStatesJson();
  }

  if (!!request.hasUuidsJson()) {
    query["UuidsJson"] = request.getUuidsJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScriptRecording"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptRecordingResponse>();
}

/**
 * @summary Query the list of recording files. Use this operation in small model scenarios.
 *
 * @param request ListScriptRecordingRequest
 * @return ListScriptRecordingResponse
 */
ListScriptRecordingResponse Client::listScriptRecording(const ListScriptRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptRecordingWithOptions(request, runtime);
}

/**
 * @summary Queries the variables used in a script.
 *
 * @param request ListScriptVariablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptVariablesResponse
 */
ListScriptVariablesResponse Client::listScriptVariablesWithOptions(const ListScriptVariablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSandbox()) {
    query["Sandbox"] = request.getSandbox();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScriptVariables"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptVariablesResponse>();
}

/**
 * @summary Queries the variables used in a script.
 *
 * @param request ListScriptVariablesRequest
 * @return ListScriptVariablesResponse
 */
ListScriptVariablesResponse Client::listScriptVariables(const ListScriptVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptVariablesWithOptions(request, runtime);
}

/**
 * @summary Lists the audio in a legacy canvas scene.
 *
 * @description ***
 *
 * @param request ListScriptVoiceConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptVoiceConfigsResponse
 */
ListScriptVoiceConfigsResponse Client::listScriptVoiceConfigsWithOptions(const ListScriptVoiceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScriptVoiceConfigs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptVoiceConfigsResponse>();
}

/**
 * @summary Lists the audio in a legacy canvas scene.
 *
 * @description ***
 *
 * @param request ListScriptVoiceConfigsRequest
 * @return ListScriptVoiceConfigsResponse
 */
ListScriptVoiceConfigsResponse Client::listScriptVoiceConfigs(const ListScriptVoiceConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptVoiceConfigsWithOptions(request, runtime);
}

/**
 * @summary View the script list.
 *
 * @param request ListScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScriptsWithOptions(const ListScriptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNluEngine()) {
    query["NluEngine"] = request.getNluEngine();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScriptName()) {
    query["ScriptName"] = request.getScriptName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScripts"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptsResponse>();
}

/**
 * @summary View the script list.
 *
 * @param request ListScriptsRequest
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScripts(const ListScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptsWithOptions(request, runtime);
}

/**
 * @summary Query the tag relationships for resources.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Query the tag relationships for resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the tags of a script. This is a legacy canvas API.
 *
 * @param request ListTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTagsWithOptions(const ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTags"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagsResponse>();
}

/**
 * @summary Queries the tags of a script. This is a legacy canvas API.
 *
 * @param request ListTagsRequest
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTags(const ListTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsWithOptions(request, runtime);
}

/**
 * @summary Modify the agent configuration.
 *
 * @param tmpReq ModifyAgentProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAgentProfileResponse
 */
ModifyAgentProfileResponse Client::modifyAgentProfileWithOptions(const ModifyAgentProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAgentProfileShrinkRequest request = ModifyAgentProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFaqCategoryIds()) {
    request.setFaqCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFaqCategoryIds(), "FaqCategoryIds", "json"));
  }

  json body = {};
  if (!!request.hasAgentProfileId()) {
    body["AgentProfileId"] = request.getAgentProfileId();
  }

  if (!!request.hasApiPluginJson()) {
    body["ApiPluginJson"] = request.getApiPluginJson();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFaqCategoryIdsShrink()) {
    body["FaqCategoryIds"] = request.getFaqCategoryIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstructionJson()) {
    body["InstructionJson"] = request.getInstructionJson();
  }

  if (!!request.hasLabelsJson()) {
    body["LabelsJson"] = request.getLabelsJson();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasModelConfig()) {
    body["ModelConfig"] = request.getModelConfig();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasPromptJson()) {
    body["PromptJson"] = request.getPromptJson();
  }

  if (!!request.hasScenario()) {
    body["Scenario"] = request.getScenario();
  }

  if (!!request.hasVariablesJson()) {
    body["VariablesJson"] = request.getVariablesJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyAgentProfile"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAgentProfileResponse>();
}

/**
 * @summary Modify the agent configuration.
 *
 * @param request ModifyAgentProfileRequest
 * @return ModifyAgentProfileResponse
 */
ModifyAgentProfileResponse Client::modifyAgentProfile(const ModifyAgentProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAgentProfileWithOptions(request, runtime);
}

/**
 * @summary Updates the status and name of an annotation task.
 *
 * @param request ModifyAnnotationMissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAnnotationMissionResponse
 */
ModifyAnnotationMissionResponse Client::modifyAnnotationMissionWithOptions(const ModifyAnnotationMissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionId()) {
    query["AnnotationMissionId"] = request.getAnnotationMissionId();
  }

  if (!!request.hasAnnotationMissionName()) {
    query["AnnotationMissionName"] = request.getAnnotationMissionName();
  }

  if (!!request.hasAnnotationStatus()) {
    query["AnnotationStatus"] = request.getAnnotationStatus();
  }

  if (!!request.hasDelete()) {
    query["Delete"] = request.getDelete();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAnnotationMission"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAnnotationMissionResponse>();
}

/**
 * @summary Updates the status and name of an annotation task.
 *
 * @param request ModifyAnnotationMissionRequest
 * @return ModifyAnnotationMissionResponse
 */
ModifyAnnotationMissionResponse Client::modifyAnnotationMission(const ModifyAnnotationMissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAnnotationMissionWithOptions(request, runtime);
}

/**
 * @summary Modifies batch jobs. This operation is deprecated.
 *
 * @param request ModifyBatchJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBatchJobsResponse
 */
ModifyBatchJobsResponse Client::modifyBatchJobsWithOptions(const ModifyBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchJobName()) {
    query["BatchJobName"] = request.getBatchJobName();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobFilePath()) {
    query["JobFilePath"] = request.getJobFilePath();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.getStrategyJson();
  }

  if (!!request.hasSubmitted()) {
    query["Submitted"] = request.getSubmitted();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBatchJobs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBatchJobsResponse>();
}

/**
 * @summary Modifies batch jobs. This operation is deprecated.
 *
 * @param request ModifyBatchJobsRequest
 * @return ModifyBatchJobsResponse
 */
ModifyBatchJobsResponse Client::modifyBatchJobs(const ModifyBatchJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBatchJobsWithOptions(request, runtime);
}

/**
 * @summary Modify the intent for a small-model scenario.
 *
 * @param tmpReq ModifyBeebotIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBeebotIntentResponse
 */
ModifyBeebotIntentResponse Client::modifyBeebotIntentWithOptions(const ModifyBeebotIntentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyBeebotIntentShrinkRequest request = ModifyBeebotIntentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIntentDefinition()) {
    request.setIntentDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIntentDefinition(), "IntentDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentDefinitionShrink()) {
    query["IntentDefinition"] = request.getIntentDefinitionShrink();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBeebotIntent"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBeebotIntentResponse>();
}

/**
 * @summary Modify the intent for a small-model scenario.
 *
 * @param request ModifyBeebotIntentRequest
 * @return ModifyBeebotIntentResponse
 */
ModifyBeebotIntentResponse Client::modifyBeebotIntent(const ModifyBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBeebotIntentWithOptions(request, runtime);
}

/**
 * @summary Modifies the intent utterance template for a small model scenario.
 *
 * @param tmpReq ModifyBeebotIntentLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBeebotIntentLgfResponse
 */
ModifyBeebotIntentLgfResponse Client::modifyBeebotIntentLgfWithOptions(const ModifyBeebotIntentLgfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyBeebotIntentLgfShrinkRequest request = ModifyBeebotIntentLgfShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLgfDefinition()) {
    request.setLgfDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLgfDefinition(), "LgfDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLgfDefinitionShrink()) {
    query["LgfDefinition"] = request.getLgfDefinitionShrink();
  }

  if (!!request.hasLgfId()) {
    query["LgfId"] = request.getLgfId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBeebotIntentLgf"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBeebotIntentLgfResponse>();
}

/**
 * @summary Modifies the intent utterance template for a small model scenario.
 *
 * @param request ModifyBeebotIntentLgfRequest
 * @return ModifyBeebotIntentLgfResponse
 */
ModifyBeebotIntentLgfResponse Client::modifyBeebotIntentLgf(const ModifyBeebotIntentLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBeebotIntentLgfWithOptions(request, runtime);
}

/**
 * @summary Modifies a user utterance for an intent in a Beebot scenario.
 *
 * @param tmpReq ModifyBeebotIntentUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBeebotIntentUserSayResponse
 */
ModifyBeebotIntentUserSayResponse Client::modifyBeebotIntentUserSayWithOptions(const ModifyBeebotIntentUserSayRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyBeebotIntentUserSayShrinkRequest request = ModifyBeebotIntentUserSayShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserSayDefinition()) {
    request.setUserSayDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserSayDefinition(), "UserSayDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasUserSayDefinitionShrink()) {
    query["UserSayDefinition"] = request.getUserSayDefinitionShrink();
  }

  if (!!request.hasUserSayId()) {
    query["UserSayId"] = request.getUserSayId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBeebotIntentUserSay"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBeebotIntentUserSayResponse>();
}

/**
 * @summary Modifies a user utterance for an intent in a Beebot scenario.
 *
 * @param request ModifyBeebotIntentUserSayRequest
 * @return ModifyBeebotIntentUserSayResponse
 */
ModifyBeebotIntentUserSayResponse Client::modifyBeebotIntentUserSay(const ModifyBeebotIntentUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBeebotIntentUserSayWithOptions(request, runtime);
}

/**
 * @summary Modifies a dialogue flow. This is a legacy API for the canvas.
 *
 * @param request ModifyDialogueFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDialogueFlowResponse
 */
ModifyDialogueFlowResponse Client::modifyDialogueFlowWithOptions(const ModifyDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDialogueFlowDefinition()) {
    query["DialogueFlowDefinition"] = request.getDialogueFlowDefinition();
  }

  if (!!request.hasDialogueFlowId()) {
    query["DialogueFlowId"] = request.getDialogueFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsDrafted()) {
    query["IsDrafted"] = request.getIsDrafted();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDialogueFlow"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDialogueFlowResponse>();
}

/**
 * @summary Modifies a dialogue flow. This is a legacy API for the canvas.
 *
 * @param request ModifyDialogueFlowRequest
 * @return ModifyDialogueFlowResponse
 */
ModifyDialogueFlowResponse Client::modifyDialogueFlow(const ModifyDialogueFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDialogueFlowWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the global no-call feature for nonexistent numbers.
 *
 * @param request ModifyEmptyNumberNoMoreCallsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEmptyNumberNoMoreCallsInfoResponse
 */
ModifyEmptyNumberNoMoreCallsInfoResponse Client::modifyEmptyNumberNoMoreCallsInfoWithOptions(const ModifyEmptyNumberNoMoreCallsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmptyNumberNoMoreCalls()) {
    query["EmptyNumberNoMoreCalls"] = request.getEmptyNumberNoMoreCalls();
  }

  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEmptyNumberNoMoreCallsInfo"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEmptyNumberNoMoreCallsInfoResponse>();
}

/**
 * @summary Enables or disables the global no-call feature for nonexistent numbers.
 *
 * @param request ModifyEmptyNumberNoMoreCallsInfoRequest
 * @return ModifyEmptyNumberNoMoreCallsInfoResponse
 */
ModifyEmptyNumberNoMoreCallsInfoResponse Client::modifyEmptyNumberNoMoreCallsInfo(const ModifyEmptyNumberNoMoreCallsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEmptyNumberNoMoreCallsInfoWithOptions(request, runtime);
}

/**
 * @summary Modifies a global question in the legacy canvas.
 *
 * @param request ModifyGlobalQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGlobalQuestionResponse
 */
ModifyGlobalQuestionResponse Client::modifyGlobalQuestionWithOptions(const ModifyGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnswers()) {
    query["Answers"] = request.getAnswers();
  }

  if (!!request.hasGlobalQuestionId()) {
    query["GlobalQuestionId"] = request.getGlobalQuestionId();
  }

  if (!!request.hasGlobalQuestionName()) {
    query["GlobalQuestionName"] = request.getGlobalQuestionName();
  }

  if (!!request.hasGlobalQuestionType()) {
    query["GlobalQuestionType"] = request.getGlobalQuestionType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasQuestions()) {
    query["Questions"] = request.getQuestions();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGlobalQuestion"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGlobalQuestionResponse>();
}

/**
 * @summary Modifies a global question in the legacy canvas.
 *
 * @param request ModifyGlobalQuestionRequest
 * @return ModifyGlobalQuestionResponse
 */
ModifyGlobalQuestionResponse Client::modifyGlobalQuestion(const ModifyGlobalQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalQuestionWithOptions(request, runtime);
}

/**
 * @summary Modifies an Outbound Bot instance.
 *
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasInstanceDescription()) {
    query["InstanceDescription"] = request.getInstanceDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasMaxConcurrentConversation()) {
    query["MaxConcurrentConversation"] = request.getMaxConcurrentConversation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstance"},
    {"version" , "2019-12-26"},
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
 * @summary Modifies an Outbound Bot instance.
 *
 * @param request ModifyInstanceRequest
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstance(const ModifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies an intent in the legacy canvas. This is a legacy API.
 *
 * @param request ModifyIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIntentResponse
 */
ModifyIntentResponse Client::modifyIntentWithOptions(const ModifyIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentDescription()) {
    query["IntentDescription"] = request.getIntentDescription();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.getIntentId();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.getIntentName();
  }

  if (!!request.hasKeywords()) {
    query["Keywords"] = request.getKeywords();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasUtterances()) {
    query["Utterances"] = request.getUtterances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyIntent"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyIntentResponse>();
}

/**
 * @summary Modifies an intent in the legacy canvas. This is a legacy API.
 *
 * @param request ModifyIntentRequest
 * @return ModifyIntentResponse
 */
ModifyIntentResponse Client::modifyIntent(const ModifyIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIntentWithOptions(request, runtime);
}

/**
 * @summary Modify an intelligent outbound call task group.
 *
 * @param request ModifyJobGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyJobGroupResponse
 */
ModifyJobGroupResponse Client::modifyJobGroupWithOptions(const ModifyJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFlashSmsExtras()) {
    query["FlashSmsExtras"] = request.getFlashSmsExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasJobGroupStatus()) {
    query["JobGroupStatus"] = request.getJobGroupStatus();
  }

  if (!!request.hasMinConcurrency()) {
    query["MinConcurrency"] = request.getMinConcurrency();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRecallCallingNumber()) {
    query["RecallCallingNumber"] = request.getRecallCallingNumber();
  }

  if (!!request.hasRecallStrategyJson()) {
    query["RecallStrategyJson"] = request.getRecallStrategyJson();
  }

  if (!!request.hasRingingDuration()) {
    query["RingingDuration"] = request.getRingingDuration();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.getStrategyJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyJobGroup"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyJobGroupResponse>();
}

/**
 * @summary Modify an intelligent outbound call task group.
 *
 * @param request ModifyJobGroupRequest
 * @return ModifyJobGroupResponse
 */
ModifyJobGroupResponse Client::modifyJobGroup(const ModifyJobGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyJobGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies an outbound call number. This API is deprecated.
 *
 * @param request ModifyOutboundCallNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOutboundCallNumberResponse
 */
ModifyOutboundCallNumberResponse Client::modifyOutboundCallNumberWithOptions(const ModifyOutboundCallNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  if (!!request.hasOutboundCallNumberId()) {
    query["OutboundCallNumberId"] = request.getOutboundCallNumberId();
  }

  if (!!request.hasRateLimitCount()) {
    query["RateLimitCount"] = request.getRateLimitCount();
  }

  if (!!request.hasRateLimitPeriod()) {
    query["RateLimitPeriod"] = request.getRateLimitPeriod();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyOutboundCallNumber"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyOutboundCallNumberResponse>();
}

/**
 * @summary Modifies an outbound call number. This API is deprecated.
 *
 * @param request ModifyOutboundCallNumberRequest
 * @return ModifyOutboundCallNumberResponse
 */
ModifyOutboundCallNumberResponse Client::modifyOutboundCallNumber(const ModifyOutboundCallNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOutboundCallNumberWithOptions(request, runtime);
}

/**
 * @summary Modify script information.
 *
 * @param request ModifyScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScriptResponse
 */
ModifyScriptResponse Client::modifyScriptWithOptions(const ModifyScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasAgentLlm()) {
    query["AgentLlm"] = request.getAgentLlm();
  }

  if (!!request.hasAsrConfig()) {
    query["AsrConfig"] = request.getAsrConfig();
  }

  if (!!request.hasChatConfig()) {
    query["ChatConfig"] = request.getChatConfig();
  }

  if (!!request.hasChatbotId()) {
    query["ChatbotId"] = request.getChatbotId();
  }

  if (!!request.hasEmotionEnable()) {
    query["EmotionEnable"] = request.getEmotionEnable();
  }

  if (!!request.hasIndustry()) {
    query["Industry"] = request.getIndustry();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLabelConfig()) {
    query["LabelConfig"] = request.getLabelConfig();
  }

  if (!!request.hasLongWaitEnable()) {
    query["LongWaitEnable"] = request.getLongWaitEnable();
  }

  if (!!request.hasMiniPlaybackConfigListJsonString()) {
    query["MiniPlaybackConfigListJsonString"] = request.getMiniPlaybackConfigListJsonString();
  }

  if (!!request.hasMiniPlaybackEnable()) {
    query["MiniPlaybackEnable"] = request.getMiniPlaybackEnable();
  }

  if (!!request.hasNewBargeInEnable()) {
    query["NewBargeInEnable"] = request.getNewBargeInEnable();
  }

  if (!!request.hasNlsConfig()) {
    query["NlsConfig"] = request.getNlsConfig();
  }

  if (!!request.hasNluAccessType()) {
    query["NluAccessType"] = request.getNluAccessType();
  }

  if (!!request.hasNluEngine()) {
    query["NluEngine"] = request.getNluEngine();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  if (!!request.hasScriptContent()) {
    query["ScriptContent"] = request.getScriptContent();
  }

  if (!!request.hasScriptDescription()) {
    query["ScriptDescription"] = request.getScriptDescription();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptName()) {
    query["ScriptName"] = request.getScriptName();
  }

  if (!!request.hasScriptWaveform()) {
    query["ScriptWaveform"] = request.getScriptWaveform();
  }

  if (!!request.hasTtsConfig()) {
    query["TtsConfig"] = request.getTtsConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScript"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScriptResponse>();
}

/**
 * @summary Modify script information.
 *
 * @param request ModifyScriptRequest
 * @return ModifyScriptResponse
 */
ModifyScriptResponse Client::modifyScript(const ModifyScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScriptWithOptions(request, runtime);
}

/**
 * @summary Modifies the voice configuration of a script in a legacy canvas.
 *
 * @description ***
 *
 * @param request ModifyScriptVoiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScriptVoiceConfigResponse
 */
ModifyScriptVoiceConfigResponse Client::modifyScriptVoiceConfigWithOptions(const ModifyScriptVoiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptVoiceConfigId()) {
    query["ScriptVoiceConfigId"] = request.getScriptVoiceConfigId();
  }

  if (!!request.hasScriptWaveformRelation()) {
    query["ScriptWaveformRelation"] = request.getScriptWaveformRelation();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScriptVoiceConfig"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScriptVoiceConfigResponse>();
}

/**
 * @summary Modifies the voice configuration of a script in a legacy canvas.
 *
 * @description ***
 *
 * @param request ModifyScriptVoiceConfigRequest
 * @return ModifyScriptVoiceConfigResponse
 */
ModifyScriptVoiceConfigResponse Client::modifyScriptVoiceConfig(const ModifyScriptVoiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScriptVoiceConfigWithOptions(request, runtime);
}

/**
 * @summary Update the text-to-speech (TTS) configuration for an existing canvas scenario.
 *
 * @param request ModifyTTSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTTSConfigResponse
 */
ModifyTTSConfigResponse Client::modifyTTSConfigWithOptions(const ModifyTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNlsServiceType()) {
    query["NlsServiceType"] = request.getNlsServiceType();
  }

  if (!!request.hasPitchRate()) {
    query["PitchRate"] = request.getPitchRate();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSpeechRate()) {
    query["SpeechRate"] = request.getSpeechRate();
  }

  if (!!request.hasVoice()) {
    query["Voice"] = request.getVoice();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTTSConfig"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTTSConfigResponse>();
}

/**
 * @summary Update the text-to-speech (TTS) configuration for an existing canvas scenario.
 *
 * @param request ModifyTTSConfigRequest
 * @return ModifyTTSConfigResponse
 */
ModifyTTSConfigResponse Client::modifyTTSConfig(const ModifyTTSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTTSConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies tag groups for the legacy canvas interface.
 *
 * @param request ModifyTagGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTagGroupsResponse
 */
ModifyTagGroupsResponse Client::modifyTagGroupsWithOptions(const ModifyTagGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasTagGroups()) {
    query["TagGroups"] = request.getTagGroups();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTagGroups"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTagGroupsResponse>();
}

/**
 * @summary Modifies tag groups for the legacy canvas interface.
 *
 * @param request ModifyTagGroupsRequest
 * @return ModifyTagGroupsResponse
 */
ModifyTagGroupsResponse Client::modifyTagGroups(const ModifyTagGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTagGroupsWithOptions(request, runtime);
}

/**
 * @summary Publishing a scenario
 *
 * @param request PublishScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishScriptResponse
 */
PublishScriptResponse Client::publishScriptWithOptions(const PublishScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishScript"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishScriptResponse>();
}

/**
 * @summary Publishing a scenario
 *
 * @param request PublishScriptRequest
 * @return PublishScriptResponse
 */
PublishScriptResponse Client::publishScript(const PublishScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishScriptWithOptions(request, runtime);
}

/**
 * @summary Publishes the debug version of a script.
 *
 * @param request PublishScriptForDebugRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishScriptForDebugResponse
 */
PublishScriptForDebugResponse Client::publishScriptForDebugWithOptions(const PublishScriptForDebugRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishScriptForDebug"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishScriptForDebugResponse>();
}

/**
 * @summary Publishes the debug version of a script.
 *
 * @param request PublishScriptForDebugRequest
 * @return PublishScriptForDebugResponse
 */
PublishScriptForDebugResponse Client::publishScriptForDebug(const PublishScriptForDebugRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishScriptForDebugWithOptions(request, runtime);
}

/**
 * @summary You can query the list of jobs.
 *
 * @param request QueryJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryJobsResponse
 */
QueryJobsResponse Client::queryJobsWithOptions(const QueryJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
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

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeAlignment()) {
    query["TimeAlignment"] = request.getTimeAlignment();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryJobs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryJobsResponse>();
}

/**
 * @summary You can query the list of jobs.
 *
 * @param request QueryJobsRequest
 * @return QueryJobsResponse
 */
QueryJobsResponse Client::queryJobs(const QueryJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryJobsWithOptions(request, runtime);
}

/**
 * @summary Find tasks by result.
 *
 * @param request QueryJobsWithResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryJobsWithResultResponse
 */
QueryJobsWithResultResponse Client::queryJobsWithResultWithOptions(const QueryJobsWithResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndActualTimeFilter()) {
    query["EndActualTimeFilter"] = request.getEndActualTimeFilter();
  }

  if (!!request.hasHasAnsweredFilter()) {
    query["HasAnsweredFilter"] = request.getHasAnsweredFilter();
  }

  if (!!request.hasHasHangUpByRejectionFilter()) {
    query["HasHangUpByRejectionFilter"] = request.getHasHangUpByRejectionFilter();
  }

  if (!!request.hasHasReachedEndOfFlowFilter()) {
    query["HasReachedEndOfFlowFilter"] = request.getHasReachedEndOfFlowFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobFailureReasonsFilter()) {
    query["JobFailureReasonsFilter"] = request.getJobFailureReasonsFilter();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasJobStatusFilter()) {
    query["JobStatusFilter"] = request.getJobStatusFilter();
  }

  if (!!request.hasLabelsJson()) {
    query["LabelsJson"] = request.getLabelsJson();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryText()) {
    query["QueryText"] = request.getQueryText();
  }

  if (!!request.hasStartActualTimeFilter()) {
    query["StartActualTimeFilter"] = request.getStartActualTimeFilter();
  }

  if (!!request.hasTaskStatusFilter()) {
    query["TaskStatusFilter"] = request.getTaskStatusFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryJobsWithResult"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryJobsWithResultResponse>();
}

/**
 * @summary Find tasks by result.
 *
 * @param request QueryJobsWithResultRequest
 * @return QueryJobsWithResultResponse
 */
QueryJobsWithResultResponse Client::queryJobsWithResult(const QueryJobsWithResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryJobsWithResultWithOptions(request, runtime);
}

/**
 * @summary This legacy canvas interface retrieves the list of recorded speech transcripts.
 *
 * @param request QueryScriptWaveformsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryScriptWaveformsResponse
 */
QueryScriptWaveformsResponse Client::queryScriptWaveformsWithOptions(const QueryScriptWaveformsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptContent()) {
    query["ScriptContent"] = request.getScriptContent();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryScriptWaveforms"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryScriptWaveformsResponse>();
}

/**
 * @summary This legacy canvas interface retrieves the list of recorded speech transcripts.
 *
 * @param request QueryScriptWaveformsRequest
 * @return QueryScriptWaveformsResponse
 */
QueryScriptWaveformsResponse Client::queryScriptWaveforms(const QueryScriptWaveformsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryScriptWaveformsWithOptions(request, runtime);
}

/**
 * @summary Queries scenario information by status.
 *
 * @param request QueryScriptsByStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryScriptsByStatusResponse
 */
QueryScriptsByStatusResponse Client::queryScriptsByStatusWithOptions(const QueryScriptsByStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.getStatusList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryScriptsByStatus"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryScriptsByStatusResponse>();
}

/**
 * @summary Queries scenario information by status.
 *
 * @param request QueryScriptsByStatusRequest
 * @return QueryScriptsByStatusResponse
 */
QueryScriptsByStatusResponse Client::queryScriptsByStatus(const QueryScriptsByStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryScriptsByStatusWithOptions(request, runtime);
}

/**
 * @summary CC sends the call failure reason to the outbound calling system. This operation is deprecated.
 *
 * @param request RecordFailureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecordFailureResponse
 */
RecordFailureResponse Client::recordFailureWithOptions(const RecordFailureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActualTime()) {
    query["ActualTime"] = request.getActualTime();
  }

  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasDispositionCode()) {
    query["DispositionCode"] = request.getDispositionCode();
  }

  if (!!request.hasExceptionCodes()) {
    query["ExceptionCodes"] = request.getExceptionCodes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecordFailure"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecordFailureResponse>();
}

/**
 * @summary CC sends the call failure reason to the outbound calling system. This operation is deprecated.
 *
 * @param request RecordFailureRequest
 * @return RecordFailureResponse
 */
RecordFailureResponse Client::recordFailure(const RecordFailureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recordFailureWithOptions(request, runtime);
}

/**
 * @summary Resumes paused jobs.
 *
 * @param request ResumeJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeJobsResponse
 */
ResumeJobsResponse Client::resumeJobsWithOptions(const ResumeJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasJobReferenceId()) {
    query["JobReferenceId"] = request.getJobReferenceId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeJobs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeJobsResponse>();
}

/**
 * @summary Resumes paused jobs.
 *
 * @param request ResumeJobsRequest
 * @return ResumeJobsResponse
 */
ResumeJobsResponse Client::resumeJobs(const ResumeJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeJobsWithOptions(request, runtime);
}

/**
 * @summary Roll back a published small model scenario.
 *
 * @param request RollbackScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackScriptResponse
 */
RollbackScriptResponse Client::rollbackScriptWithOptions(const RollbackScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRollbackVersion()) {
    query["RollbackVersion"] = request.getRollbackVersion();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackScript"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackScriptResponse>();
}

/**
 * @summary Roll back a published small model scenario.
 *
 * @param request RollbackScriptRequest
 * @return RollbackScriptResponse
 */
RollbackScriptResponse Client::rollbackScript(const RollbackScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackScriptWithOptions(request, runtime);
}

/**
 * @summary Sets the delay before playback starts after the call is answered.
 *
 * @param request SaveAfterAnswerDelayPlaybackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAfterAnswerDelayPlaybackResponse
 */
SaveAfterAnswerDelayPlaybackResponse Client::saveAfterAnswerDelayPlaybackWithOptions(const SaveAfterAnswerDelayPlaybackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterAnswerDelayPlayback()) {
    query["AfterAnswerDelayPlayback"] = request.getAfterAnswerDelayPlayback();
  }

  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveAfterAnswerDelayPlayback"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveAfterAnswerDelayPlaybackResponse>();
}

/**
 * @summary Sets the delay before playback starts after the call is answered.
 *
 * @param request SaveAfterAnswerDelayPlaybackRequest
 * @return SaveAfterAnswerDelayPlaybackResponse
 */
SaveAfterAnswerDelayPlaybackResponse Client::saveAfterAnswerDelayPlayback(const SaveAfterAnswerDelayPlaybackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAfterAnswerDelayPlaybackWithOptions(request, runtime);
}

/**
 * @summary You can save a list of annotation chat instances.
 *
 * @param request SaveAnnotationMissionSessionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAnnotationMissionSessionListResponse
 */
SaveAnnotationMissionSessionListResponse Client::saveAnnotationMissionSessionListWithOptions(const SaveAnnotationMissionSessionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.getAgentKey();
  }

  if (!!request.hasAnnotationMissionDataSourceType()) {
    query["AnnotationMissionDataSourceType"] = request.getAnnotationMissionDataSourceType();
  }

  if (!!request.hasAnnotationMissionSessionList()) {
    query["AnnotationMissionSessionList"] = request.getAnnotationMissionSessionList();
  }

  if (!!request.hasAnnotationMissionSessionListJsonString()) {
    query["AnnotationMissionSessionListJsonString"] = request.getAnnotationMissionSessionListJsonString();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.getEnvironment();
  }

  if (!!request.hasUserNick()) {
    query["UserNick"] = request.getUserNick();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveAnnotationMissionSessionList"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveAnnotationMissionSessionListResponse>();
}

/**
 * @summary You can save a list of annotation chat instances.
 *
 * @param request SaveAnnotationMissionSessionListRequest
 * @return SaveAnnotationMissionSessionListResponse
 */
SaveAnnotationMissionSessionListResponse Client::saveAnnotationMissionSessionList(const SaveAnnotationMissionSessionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAnnotationMissionSessionListWithOptions(request, runtime);
}

/**
 * @summary Saves instance tags in a batch.
 *
 * @param request SaveAnnotationMissionTagInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAnnotationMissionTagInfoListResponse
 */
SaveAnnotationMissionTagInfoListResponse Client::saveAnnotationMissionTagInfoListWithOptions(const SaveAnnotationMissionTagInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionTagInfoList()) {
    query["AnnotationMissionTagInfoList"] = request.getAnnotationMissionTagInfoList();
  }

  if (!!request.hasAnnotationMissionTagInfoListJsonString()) {
    query["AnnotationMissionTagInfoListJsonString"] = request.getAnnotationMissionTagInfoListJsonString();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasReset()) {
    query["Reset"] = request.getReset();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveAnnotationMissionTagInfoList"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveAnnotationMissionTagInfoListResponse>();
}

/**
 * @summary Saves instance tags in a batch.
 *
 * @param request SaveAnnotationMissionTagInfoListRequest
 * @return SaveAnnotationMissionTagInfoListResponse
 */
SaveAnnotationMissionTagInfoListResponse Client::saveAnnotationMissionTagInfoList(const SaveAnnotationMissionTagInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAnnotationMissionTagInfoListWithOptions(request, runtime);
}

/**
 * @summary Modifies the global outbound call time window in system administration.
 *
 * @param request SaveBaseStrategyPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBaseStrategyPeriodResponse
 */
SaveBaseStrategyPeriodResponse Client::saveBaseStrategyPeriodWithOptions(const SaveBaseStrategyPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasOnlyWeekdays()) {
    query["OnlyWeekdays"] = request.getOnlyWeekdays();
  }

  if (!!request.hasOnlyWorkdays()) {
    query["OnlyWorkdays"] = request.getOnlyWorkdays();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  if (!!request.hasWorkingTime()) {
    query["WorkingTime"] = request.getWorkingTime();
  }

  if (!!request.hasWorkingTimeFramesJson()) {
    query["WorkingTimeFramesJson"] = request.getWorkingTimeFramesJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveBaseStrategyPeriod"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveBaseStrategyPeriodResponse>();
}

/**
 * @summary Modifies the global outbound call time window in system administration.
 *
 * @param request SaveBaseStrategyPeriodRequest
 * @return SaveBaseStrategyPeriodResponse
 */
SaveBaseStrategyPeriodResponse Client::saveBaseStrategyPeriod(const SaveBaseStrategyPeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBaseStrategyPeriodWithOptions(request, runtime);
}

/**
 * @summary Adds contacts to the instance\\"s blocklist.
 *
 * @param request SaveContactBlockListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveContactBlockListResponse
 */
SaveContactBlockListResponse Client::saveContactBlockListWithOptions(const SaveContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactBlockListList()) {
    query["ContactBlockListList"] = request.getContactBlockListList();
  }

  if (!!request.hasContactBlockListsJson()) {
    query["ContactBlockListsJson"] = request.getContactBlockListsJson();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveContactBlockList"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveContactBlockListResponse>();
}

/**
 * @summary Adds contacts to the instance\\"s blocklist.
 *
 * @param request SaveContactBlockListRequest
 * @return SaveContactBlockListResponse
 */
SaveContactBlockListResponse Client::saveContactBlockList(const SaveContactBlockListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveContactBlockListWithOptions(request, runtime);
}

/**
 * @summary Saves an outbound call whitelist.
 *
 * @param request SaveContactWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveContactWhiteListResponse
 */
SaveContactWhiteListResponse Client::saveContactWhiteListWithOptions(const SaveContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactWhiteListList()) {
    query["ContactWhiteListList"] = request.getContactWhiteListList();
  }

  if (!!request.hasContactWhiteListsJson()) {
    query["ContactWhiteListsJson"] = request.getContactWhiteListsJson();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveContactWhiteList"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveContactWhiteListResponse>();
}

/**
 * @summary Saves an outbound call whitelist.
 *
 * @param request SaveContactWhiteListRequest
 * @return SaveContactWhiteListResponse
 */
SaveContactWhiteListResponse Client::saveContactWhiteList(const SaveContactWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveContactWhiteListWithOptions(request, runtime);
}

/**
 * @summary Saves the validity period of a basic policy. This operation is deprecated.
 *
 * @param request SaveEffectiveDaysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveEffectiveDaysResponse
 */
SaveEffectiveDaysResponse Client::saveEffectiveDaysWithOptions(const SaveEffectiveDaysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveDays()) {
    query["EffectiveDays"] = request.getEffectiveDays();
  }

  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveEffectiveDays"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveEffectiveDaysResponse>();
}

/**
 * @summary Saves the validity period of a basic policy. This operation is deprecated.
 *
 * @param request SaveEffectiveDaysRequest
 * @return SaveEffectiveDaysResponse
 */
SaveEffectiveDaysResponse Client::saveEffectiveDays(const SaveEffectiveDaysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveEffectiveDaysWithOptions(request, runtime);
}

/**
 * @summary Sets the maximum number of daily outbound call attempts to a specific number.
 *
 * @param request SaveMaxAttemptsPerDayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveMaxAttemptsPerDayResponse
 */
SaveMaxAttemptsPerDayResponse Client::saveMaxAttemptsPerDayWithOptions(const SaveMaxAttemptsPerDayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasMaxAttemptsPerDay()) {
    query["MaxAttemptsPerDay"] = request.getMaxAttemptsPerDay();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.getStrategyLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveMaxAttemptsPerDay"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveMaxAttemptsPerDayResponse>();
}

/**
 * @summary Sets the maximum number of daily outbound call attempts to a specific number.
 *
 * @param request SaveMaxAttemptsPerDayRequest
 * @return SaveMaxAttemptsPerDayResponse
 */
SaveMaxAttemptsPerDayResponse Client::saveMaxAttemptsPerDay(const SaveMaxAttemptsPerDayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveMaxAttemptsPerDayWithOptions(request, runtime);
}

/**
 * @summary Search for tasks.
 *
 * @param request SearchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTaskResponse
 */
SearchTaskResponse Client::searchTaskWithOptions(const SearchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTask"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTaskResponse>();
}

/**
 * @summary Search for tasks.
 *
 * @param request SearchTaskRequest
 * @return SearchTaskResponse
 */
SearchTaskResponse Client::searchTask(const SearchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTaskWithOptions(request, runtime);
}

/**
 * @summary This API initiates a call directly, bypassing the outbound call scheduling system. It is available only to users on the whitelist.
 *
 * @param request StartJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartJobResponse
 */
StartJobResponse Client::startJobWithOptions(const StartJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasJobJson()) {
    query["JobJson"] = request.getJobJson();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartJob"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartJobResponse>();
}

/**
 * @summary This API initiates a call directly, bypassing the outbound call scheduling system. It is available only to users on the whitelist.
 *
 * @param request StartJobRequest
 * @return StartJobResponse
 */
StartJobResponse Client::startJob(const StartJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startJobWithOptions(request, runtime);
}

/**
 * @summary Submits a draft job group. This operation is deprecated.
 *
 * @param request SubmitBatchJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitBatchJobsResponse
 */
SubmitBatchJobsResponse Client::submitBatchJobsWithOptions(const SubmitBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitBatchJobs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitBatchJobsResponse>();
}

/**
 * @summary Submits a draft job group. This operation is deprecated.
 *
 * @param request SubmitBatchJobsRequest
 * @return SubmitBatchJobsResponse
 */
SubmitBatchJobsResponse Client::submitBatchJobs(const SubmitBatchJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitBatchJobsWithOptions(request, runtime);
}

/**
 * @summary Submits a recording of an outbound call. This operation is deprecated.
 *
 * @param request SubmitRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitRecordingResponse
 */
SubmitRecordingResponse Client::submitRecordingWithOptions(const SubmitRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMergedRecording()) {
    query["MergedRecording"] = request.getMergedRecording();
  }

  if (!!request.hasResourceRecording()) {
    query["ResourceRecording"] = request.getResourceRecording();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitRecording"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitRecordingResponse>();
}

/**
 * @summary Submits a recording of an outbound call. This operation is deprecated.
 *
 * @param request SubmitRecordingRequest
 * @return SubmitRecordingResponse
 */
SubmitRecordingResponse Client::submitRecording(const SubmitRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitRecordingWithOptions(request, runtime);
}

/**
 * @summary Submit the scenario for release review.
 *
 * @param request SubmitScriptReviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitScriptReviewResponse
 */
SubmitScriptReviewResponse Client::submitScriptReviewWithOptions(const SubmitScriptReviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.getFrom();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitScriptReview"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitScriptReviewResponse>();
}

/**
 * @summary Submit the scenario for release review.
 *
 * @param request SubmitScriptReviewRequest
 * @return SubmitScriptReviewResponse
 */
SubmitScriptReviewResponse Client::submitScriptReview(const SubmitScriptReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitScriptReviewWithOptions(request, runtime);
}

/**
 * @summary Suspends outbound calls for a list of phone numbers.
 *
 * @param request SuspendCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendCallResponse
 */
SuspendCallResponse Client::suspendCallWithOptions(const SuspendCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumbers()) {
    query["CalledNumbers"] = request.getCalledNumbers();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendCall"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendCallResponse>();
}

/**
 * @summary Suspends outbound calls for a list of phone numbers.
 *
 * @param request SuspendCallRequest
 * @return SuspendCallResponse
 */
SuspendCallResponse Client::suspendCall(const SuspendCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendCallWithOptions(request, runtime);
}

/**
 * @summary Suspends outbound calls using data from a file.
 *
 * @param request SuspendCallWithFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendCallWithFileResponse
 */
SuspendCallWithFileResponse Client::suspendCallWithFileWithOptions(const SuspendCallWithFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendCallWithFile"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendCallWithFileResponse>();
}

/**
 * @summary Suspends outbound calls using data from a file.
 *
 * @param request SuspendCallWithFileRequest
 * @return SuspendCallWithFileResponse
 */
SuspendCallWithFileResponse Client::suspendCallWithFile(const SuspendCallWithFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendCallWithFileWithOptions(request, runtime);
}

/**
 * @summary You can pause the job.
 *
 * @param request SuspendJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendJobsResponse
 */
SuspendJobsResponse Client::suspendJobsWithOptions(const SuspendJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.getJobGroupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasJobReferenceId()) {
    query["JobReferenceId"] = request.getJobReferenceId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.getScenarioId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendJobs"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendJobsResponse>();
}

/**
 * @summary You can pause the job.
 *
 * @param request SuspendJobsRequest
 * @return SuspendJobsResponse
 */
SuspendJobsResponse Client::suspendJobs(const SuspendJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendJobsWithOptions(request, runtime);
}

/**
 * @summary Adds tags to instance resources.
 *
 * @description \\*\\*
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to instance resources.
 *
 * @description \\*\\*
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Prepares a task for execution.
 *
 * @param request TaskPreparingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskPreparingResponse
 */
TaskPreparingResponse Client::taskPreparingWithOptions(const TaskPreparingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.getInstanceOwnerId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TaskPreparing"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TaskPreparingResponse>();
}

/**
 * @summary Prepares a task for execution.
 *
 * @param request TaskPreparingRequest
 * @return TaskPreparingResponse
 */
TaskPreparingResponse Client::taskPreparing(const TaskPreparingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskPreparingWithOptions(request, runtime);
}

/**
 * @summary Terminates a call during an active session.
 *
 * @param request TerminateCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateCallResponse
 */
TerminateCallResponse Client::terminateCallWithOptions(const TerminateCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TerminateCall"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateCallResponse>();
}

/**
 * @summary Terminates a call during an active session.
 *
 * @param request TerminateCallRequest
 * @return TerminateCallResponse
 */
TerminateCallResponse Client::terminateCall(const TerminateCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return terminateCallWithOptions(request, runtime);
}

/**
 * @summary Remove tags from resources.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Remove tags from resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Upload recording files.
 *
 * @param request UploadScriptRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadScriptRecordingResponse
 */
UploadScriptRecordingResponse Client::uploadScriptRecordingWithOptions(const UploadScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadScriptRecording"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadScriptRecordingResponse>();
}

/**
 * @summary Upload recording files.
 *
 * @param request UploadScriptRecordingRequest
 * @return UploadScriptRecordingResponse
 */
UploadScriptRecordingResponse Client::uploadScriptRecording(const UploadScriptRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadScriptRecordingWithOptions(request, runtime);
}

/**
 * @summary Revoke script review.
 *
 * @description ***
 *
 * @param request WithdrawScriptReviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawScriptReviewResponse
 */
WithdrawScriptReviewResponse Client::withdrawScriptReviewWithOptions(const WithdrawScriptReviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WithdrawScriptReview"},
    {"version" , "2019-12-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WithdrawScriptReviewResponse>();
}

/**
 * @summary Revoke script review.
 *
 * @description ***
 *
 * @param request WithdrawScriptReviewRequest
 * @return WithdrawScriptReviewResponse
 */
WithdrawScriptReviewResponse Client::withdrawScriptReview(const WithdrawScriptReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return withdrawScriptReviewWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace OutboundBot20191226