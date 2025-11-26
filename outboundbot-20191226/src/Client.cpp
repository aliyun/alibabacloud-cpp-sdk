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
 * @summary 创建外呼任务
 *
 * @param request AssignJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignJobsResponse
 */
AssignJobsResponse Client::assignJobsWithOptions(const AssignJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsAsynchrony()) {
    query["IsAsynchrony"] = request.isAsynchrony();
  }

  if (!!request.hasJobDataParsingTaskId()) {
    query["JobDataParsingTaskId"] = request.jobDataParsingTaskId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasJobsJson()) {
    query["JobsJson"] = request.jobsJson();
  }

  if (!!request.hasRosterType()) {
    query["RosterType"] = request.rosterType();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.strategyJson();
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
 * @summary 创建外呼任务
 *
 * @param request AssignJobsRequest
 * @return AssignJobsResponse
 */
AssignJobsResponse Client::assignJobs(const AssignJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignJobsWithOptions(request, runtime);
}

/**
 * @summary 异步创建外呼任务
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
    request.setCallingNumberShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callingNumber(), "CallingNumber", "json"));
  }

  if (!!tmpReq.hasJobsJson()) {
    request.setJobsJsonShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobsJson(), "JobsJson", "json"));
  }

  json body = {};
  if (!!request.hasCallingNumberShrink()) {
    body["CallingNumber"] = request.callingNumberShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    body["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasJobsJsonShrink()) {
    body["JobsJson"] = request.jobsJsonShrink();
  }

  if (!!request.hasStrategyJson()) {
    body["StrategyJson"] = request.strategyJson();
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
 * @summary 异步创建外呼任务
 *
 * @param request AssignJobsAsyncRequest
 * @return AssignJobsAsyncResponse
 */
AssignJobsAsyncResponse Client::assignJobsAsync(const AssignJobsAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignJobsAsyncWithOptions(request, runtime);
}

/**
 * @param request CancelJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelJobsResponse
 */
CancelJobsResponse Client::cancelJobsWithOptions(const CancelJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasJobReferenceId()) {
    query["JobReferenceId"] = request.jobReferenceId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
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
 * @param request CancelJobsRequest
 * @return CancelJobsResponse
 */
CancelJobsResponse Client::cancelJobs(const CancelJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelJobsWithOptions(request, runtime);
}

/**
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
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
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @param request CreateAgentProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentProfileResponse
 */
CreateAgentProfileResponse Client::createAgentProfileWithOptions(const CreateAgentProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentProfileTemplateId()) {
    body["AgentProfileTemplateId"] = request.agentProfileTemplateId();
  }

  if (!!request.hasAppIp()) {
    body["AppIp"] = request.appIp();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFaqCategoryIds()) {
    body["FaqCategoryIds"] = request.faqCategoryIds();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstructionJson()) {
    body["InstructionJson"] = request.instructionJson();
  }

  if (!!request.hasLabelsJson()) {
    body["LabelsJson"] = request.labelsJson();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.model();
  }

  if (!!request.hasModelConfig()) {
    body["ModelConfig"] = request.modelConfig();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.prompt();
  }

  if (!!request.hasPromptJson()) {
    body["PromptJson"] = request.promptJson();
  }

  if (!!request.hasScenario()) {
    body["Scenario"] = request.scenario();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.scriptId();
  }

  if (!!request.hasVariablesJson()) {
    body["VariablesJson"] = request.variablesJson();
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
 * @param request CreateAgentProfileRequest
 * @return CreateAgentProfileResponse
 */
CreateAgentProfileResponse Client::createAgentProfile(const CreateAgentProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentProfileWithOptions(request, runtime);
}

/**
 * @summary 创建标注任务
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
    request.setAnnotationMissionDebugDataSourceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.annotationMissionDebugDataSourceList(), "AnnotationMissionDebugDataSourceList", "json"));
  }

  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasAnnotationMissionDataSourceType()) {
    query["AnnotationMissionDataSourceType"] = request.annotationMissionDataSourceType();
  }

  if (!!request.hasAnnotationMissionDebugDataSourceListShrink()) {
    query["AnnotationMissionDebugDataSourceList"] = request.annotationMissionDebugDataSourceListShrink();
  }

  if (!!request.hasAnnotationMissionDebugDataSourceListJsonString()) {
    query["AnnotationMissionDebugDataSourceListJsonString"] = request.annotationMissionDebugDataSourceListJsonString();
  }

  if (!!request.hasAnnotationMissionName()) {
    query["AnnotationMissionName"] = request.annotationMissionName();
  }

  if (!!request.hasChatbotId()) {
    query["ChatbotId"] = request.chatbotId();
  }

  if (!!request.hasConversationTimeEndFilter()) {
    query["ConversationTimeEndFilter"] = request.conversationTimeEndFilter();
  }

  if (!!request.hasConversationTimeStartFilter()) {
    query["ConversationTimeStartFilter"] = request.conversationTimeStartFilter();
  }

  if (!!request.hasExcludeOtherSession()) {
    query["ExcludeOtherSession"] = request.excludeOtherSession();
  }

  if (!!request.hasFinished()) {
    query["Finished"] = request.finished();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasSamplingCount()) {
    query["SamplingCount"] = request.samplingCount();
  }

  if (!!request.hasSamplingRate()) {
    query["SamplingRate"] = request.samplingRate();
  }

  if (!!request.hasSamplingType()) {
    query["SamplingType"] = request.samplingType();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasSessionEndReasonFilterList()) {
    query["SessionEndReasonFilterList"] = request.sessionEndReasonFilterList();
  }

  if (!!request.hasSessionEndReasonFilterListJsonString()) {
    query["SessionEndReasonFilterListJsonString"] = request.sessionEndReasonFilterListJsonString();
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
 * @summary 创建标注任务
 *
 * @param request CreateAnnotationMissionRequest
 * @return CreateAnnotationMissionResponse
 */
CreateAnnotationMissionResponse Client::createAnnotationMission(const CreateAnnotationMissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAnnotationMissionWithOptions(request, runtime);
}

/**
 * @summary 创建任务
 *
 * @param request CreateBatchJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBatchJobsResponse
 */
CreateBatchJobsResponse Client::createBatchJobsWithOptions(const CreateBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchJobDescription()) {
    query["BatchJobDescription"] = request.batchJobDescription();
  }

  if (!!request.hasBatchJobName()) {
    query["BatchJobName"] = request.batchJobName();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobFilePath()) {
    query["JobFilePath"] = request.jobFilePath();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.strategyJson();
  }

  if (!!request.hasSubmitted()) {
    query["Submitted"] = request.submitted();
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
 * @summary 创建任务
 *
 * @param request CreateBatchJobsRequest
 * @return CreateBatchJobsResponse
 */
CreateBatchJobsResponse Client::createBatchJobs(const CreateBatchJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchJobsWithOptions(request, runtime);
}

/**
 * @summary CreateBatchRepeatJob
 *
 * @param request CreateBatchRepeatJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBatchRepeatJobResponse
 */
CreateBatchRepeatJobResponse Client::createBatchRepeatJobWithOptions(const CreateBatchRepeatJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFilterStatus()) {
    query["FilterStatus"] = request.filterStatus();
  }

  if (!!request.hasFlashSmsExtras()) {
    query["FlashSmsExtras"] = request.flashSmsExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMinConcurrency()) {
    query["MinConcurrency"] = request.minConcurrency();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRecallCallingNumber()) {
    query["RecallCallingNumber"] = request.recallCallingNumber();
  }

  if (!!request.hasRecallStrategyJson()) {
    query["RecallStrategyJson"] = request.recallStrategyJson();
  }

  if (!!request.hasRingingDuration()) {
    query["RingingDuration"] = request.ringingDuration();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasSourceGroupId()) {
    query["SourceGroupId"] = request.sourceGroupId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.strategyJson();
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
 * @summary CreateBatchRepeatJob
 *
 * @param request CreateBatchRepeatJobRequest
 * @return CreateBatchRepeatJobResponse
 */
CreateBatchRepeatJobResponse Client::createBatchRepeatJob(const CreateBatchRepeatJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchRepeatJobWithOptions(request, runtime);
}

/**
 * @summary CreateBeebotIntent
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
    request.setIntentDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.intentDefinition(), "IntentDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentDefinitionShrink()) {
    query["IntentDefinition"] = request.intentDefinitionShrink();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary CreateBeebotIntent
 *
 * @param request CreateBeebotIntentRequest
 * @return CreateBeebotIntentResponse
 */
CreateBeebotIntentResponse Client::createBeebotIntent(const CreateBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBeebotIntentWithOptions(request, runtime);
}

/**
 * @summary CreateBeebotIntentLgf
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
    request.setLgfDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.lgfDefinition(), "LgfDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLgfDefinitionShrink()) {
    query["LgfDefinition"] = request.lgfDefinitionShrink();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary CreateBeebotIntentLgf
 *
 * @param request CreateBeebotIntentLgfRequest
 * @return CreateBeebotIntentLgfResponse
 */
CreateBeebotIntentLgfResponse Client::createBeebotIntentLgf(const CreateBeebotIntentLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBeebotIntentLgfWithOptions(request, runtime);
}

/**
 * @summary CreateBeebotIntentUserSay
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
    request.setUserSayDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userSayDefinition(), "UserSayDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasUserSayDefinitionShrink()) {
    query["UserSayDefinition"] = request.userSayDefinitionShrink();
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
 * @summary CreateBeebotIntentUserSay
 *
 * @param request CreateBeebotIntentUserSayRequest
 * @return CreateBeebotIntentUserSayResponse
 */
CreateBeebotIntentUserSayResponse Client::createBeebotIntentUserSay(const CreateBeebotIntentUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBeebotIntentUserSayWithOptions(request, runtime);
}

/**
 * @param request CreateDialogueFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDialogueFlowResponse
 */
CreateDialogueFlowResponse Client::createDialogueFlowWithOptions(const CreateDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDialogueFlowType()) {
    query["DialogueFlowType"] = request.dialogueFlowType();
  }

  if (!!request.hasDialogueName()) {
    query["DialogueName"] = request.dialogueName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request CreateDialogueFlowRequest
 * @return CreateDialogueFlowResponse
 */
CreateDialogueFlowResponse Client::createDialogueFlow(const CreateDialogueFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDialogueFlowWithOptions(request, runtime);
}

/**
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
 * @param request CreateDownloadUrlRequest
 * @return CreateDownloadUrlResponse
 */
CreateDownloadUrlResponse Client::createDownloadUrl(const CreateDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDownloadUrlWithOptions(request, runtime);
}

/**
 * @param request CreateGlobalQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGlobalQuestionResponse
 */
CreateGlobalQuestionResponse Client::createGlobalQuestionWithOptions(const CreateGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnswers()) {
    query["Answers"] = request.answers();
  }

  if (!!request.hasGlobalQuestionName()) {
    query["GlobalQuestionName"] = request.globalQuestionName();
  }

  if (!!request.hasGlobalQuestionType()) {
    query["GlobalQuestionType"] = request.globalQuestionType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQuestions()) {
    query["Questions"] = request.questions();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request CreateGlobalQuestionRequest
 * @return CreateGlobalQuestionResponse
 */
CreateGlobalQuestionResponse Client::createGlobalQuestion(const CreateGlobalQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGlobalQuestionWithOptions(request, runtime);
}

/**
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasInstanceDescription()) {
    query["InstanceDescription"] = request.instanceDescription();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasMaxConcurrentConversation()) {
    query["MaxConcurrentConversation"] = request.maxConcurrentConversation();
  }

  if (!!request.hasNluServiceType()) {
    query["NluServiceType"] = request.nluServiceType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建实例绑定号码
 *
 * @param request CreateInstanceBindNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceBindNumberResponse
 */
CreateInstanceBindNumberResponse Client::createInstanceBindNumberWithOptions(const CreateInstanceBindNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceList()) {
    query["InstanceList"] = request.instanceList();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
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
 * @summary 创建实例绑定号码
 *
 * @param request CreateInstanceBindNumberRequest
 * @return CreateInstanceBindNumberResponse
 */
CreateInstanceBindNumberResponse Client::createInstanceBindNumber(const CreateInstanceBindNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceBindNumberWithOptions(request, runtime);
}

/**
 * @param request CreateIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIntentResponse
 */
CreateIntentResponse Client::createIntentWithOptions(const CreateIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentDescription()) {
    query["IntentDescription"] = request.intentDescription();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.intentName();
  }

  if (!!request.hasKeywords()) {
    query["Keywords"] = request.keywords();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasUtterances()) {
    query["Utterances"] = request.utterances();
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
 * @param request CreateIntentRequest
 * @return CreateIntentResponse
 */
CreateIntentResponse Client::createIntent(const CreateIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIntentWithOptions(request, runtime);
}

/**
 * @param request CreateJobDataParsingTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobDataParsingTaskResponse
 */
CreateJobDataParsingTaskResponse Client::createJobDataParsingTaskWithOptions(const CreateJobDataParsingTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobFilePath()) {
    query["JobFilePath"] = request.jobFilePath();
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
 * @param request CreateJobDataParsingTaskRequest
 * @return CreateJobDataParsingTaskResponse
 */
CreateJobDataParsingTaskResponse Client::createJobDataParsingTask(const CreateJobDataParsingTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobDataParsingTaskWithOptions(request, runtime);
}

/**
 * @summary 创建任务组
 *
 * @param request CreateJobGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobGroupResponse
 */
CreateJobGroupResponse Client::createJobGroupWithOptions(const CreateJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasFlashSmsExtras()) {
    query["FlashSmsExtras"] = request.flashSmsExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupDescription()) {
    query["JobGroupDescription"] = request.jobGroupDescription();
  }

  if (!!request.hasJobGroupName()) {
    query["JobGroupName"] = request.jobGroupName();
  }

  if (!!request.hasMinConcurrency()) {
    query["MinConcurrency"] = request.minConcurrency();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRecallCallingNumber()) {
    query["RecallCallingNumber"] = request.recallCallingNumber();
  }

  if (!!request.hasRecallStrategyJson()) {
    query["RecallStrategyJson"] = request.recallStrategyJson();
  }

  if (!!request.hasRingingDuration()) {
    query["RingingDuration"] = request.ringingDuration();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.strategyJson();
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
 * @summary 创建任务组
 *
 * @param request CreateJobGroupRequest
 * @return CreateJobGroupResponse
 */
CreateJobGroupResponse Client::createJobGroup(const CreateJobGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobGroupWithOptions(request, runtime);
}

/**
 * @summary 创建任务组到处任务
 *
 * @param request CreateJobGroupExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobGroupExportTaskResponse
 */
CreateJobGroupExportTaskResponse Client::createJobGroupExportTaskWithOptions(const CreateJobGroupExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.option();
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
 * @summary 创建任务组到处任务
 *
 * @param request CreateJobGroupExportTaskRequest
 * @return CreateJobGroupExportTaskResponse
 */
CreateJobGroupExportTaskResponse Client::createJobGroupExportTask(const CreateJobGroupExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobGroupExportTaskWithOptions(request, runtime);
}

/**
 * @summary 新建场景
 *
 * @param request CreateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScriptWithOptions(const CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasAgentLlm()) {
    query["AgentLlm"] = request.agentLlm();
  }

  if (!!request.hasAsrConfig()) {
    query["AsrConfig"] = request.asrConfig();
  }

  if (!!request.hasChatbotId()) {
    query["ChatbotId"] = request.chatbotId();
  }

  if (!!request.hasEmotionEnable()) {
    query["EmotionEnable"] = request.emotionEnable();
  }

  if (!!request.hasIndustry()) {
    query["Industry"] = request.industry();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLongWaitEnable()) {
    query["LongWaitEnable"] = request.longWaitEnable();
  }

  if (!!request.hasMiniPlaybackEnable()) {
    query["MiniPlaybackEnable"] = request.miniPlaybackEnable();
  }

  if (!!request.hasNewBargeInEnable()) {
    query["NewBargeInEnable"] = request.newBargeInEnable();
  }

  if (!!request.hasNluAccessType()) {
    query["NluAccessType"] = request.nluAccessType();
  }

  if (!!request.hasNluEngine()) {
    query["NluEngine"] = request.nluEngine();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.scene();
  }

  if (!!request.hasScriptContent()) {
    query["ScriptContent"] = request.scriptContent();
  }

  if (!!request.hasScriptDescription()) {
    query["ScriptDescription"] = request.scriptDescription();
  }

  if (!!request.hasScriptName()) {
    query["ScriptName"] = request.scriptName();
  }

  if (!!request.hasScriptNluProfileJsonString()) {
    query["ScriptNluProfileJsonString"] = request.scriptNluProfileJsonString();
  }

  if (!!request.hasScriptWaveform()) {
    query["ScriptWaveform"] = request.scriptWaveform();
  }

  if (!!request.hasTtsConfig()) {
    query["TtsConfig"] = request.ttsConfig();
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
 * @summary 新建场景
 *
 * @param request CreateScriptRequest
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScript(const CreateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptWithOptions(request, runtime);
}

/**
 * @param request CreateScriptWaveformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptWaveformResponse
 */
CreateScriptWaveformResponse Client::createScriptWaveformWithOptions(const CreateScriptWaveformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptContent()) {
    query["ScriptContent"] = request.scriptContent();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request CreateScriptWaveformRequest
 * @return CreateScriptWaveformResponse
 */
CreateScriptWaveformResponse Client::createScriptWaveform(const CreateScriptWaveformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptWaveformWithOptions(request, runtime);
}

/**
 * @param request CreateTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTagWithOptions(const CreateTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasTagGroup()) {
    query["TagGroup"] = request.tagGroup();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
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
 * @param request CreateTagRequest
 * @return CreateTagResponse
 */
CreateTagResponse Client::createTag(const CreateTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTagWithOptions(request, runtime);
}

/**
 * @summary 外呼历史导出
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
 * @summary 外呼历史导出
 *
 * @param request CreateTaskExportTaskRequest
 * @return CreateTaskExportTaskResponse
 */
CreateTaskExportTaskResponse Client::createTaskExportTask(const CreateTaskExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskExportTaskWithOptions(request, runtime);
}

/**
 * @param tmpReq DeleteAgentProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentProfilesResponse
 */
DeleteAgentProfilesResponse Client::deleteAgentProfilesWithOptions(const DeleteAgentProfilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAgentProfilesShrinkRequest request = DeleteAgentProfilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentProfileIds()) {
    request.setAgentProfileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentProfileIds(), "AgentProfileIds", "json"));
  }

  json body = {};
  if (!!request.hasAgentProfileIdsShrink()) {
    body["AgentProfileIds"] = request.agentProfileIdsShrink();
  }

  if (!!request.hasAppIp()) {
    body["AppIp"] = request.appIp();
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
 * @param request DeleteAgentProfilesRequest
 * @return DeleteAgentProfilesResponse
 */
DeleteAgentProfilesResponse Client::deleteAgentProfiles(const DeleteAgentProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgentProfilesWithOptions(request, runtime);
}

/**
 * @summary 清空归属地号码库
 *
 * @param request DeleteAllNumberDistrictInfoRequest
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
 * @summary 清空归属地号码库
 *
 * @return DeleteAllNumberDistrictInfoResponse
 */
DeleteAllNumberDistrictInfoResponse Client::deleteAllNumberDistrictInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAllNumberDistrictInfoWithOptions(runtime);
}

/**
 * @summary DeleteBeebotIntent
 *
 * @param request DeleteBeebotIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBeebotIntentResponse
 */
DeleteBeebotIntentResponse Client::deleteBeebotIntentWithOptions(const DeleteBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary DeleteBeebotIntent
 *
 * @param request DeleteBeebotIntentRequest
 * @return DeleteBeebotIntentResponse
 */
DeleteBeebotIntentResponse Client::deleteBeebotIntent(const DeleteBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBeebotIntentWithOptions(request, runtime);
}

/**
 * @summary DeleteBeebotIntentLgf
 *
 * @param request DeleteBeebotIntentLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBeebotIntentLgfResponse
 */
DeleteBeebotIntentLgfResponse Client::deleteBeebotIntentLgfWithOptions(const DeleteBeebotIntentLgfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasLgfId()) {
    query["LgfId"] = request.lgfId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary DeleteBeebotIntentLgf
 *
 * @param request DeleteBeebotIntentLgfRequest
 * @return DeleteBeebotIntentLgfResponse
 */
DeleteBeebotIntentLgfResponse Client::deleteBeebotIntentLgf(const DeleteBeebotIntentLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBeebotIntentLgfWithOptions(request, runtime);
}

/**
 * @summary DeleteBeebotIntentUserSay
 *
 * @param request DeleteBeebotIntentUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBeebotIntentUserSayResponse
 */
DeleteBeebotIntentUserSayResponse Client::deleteBeebotIntentUserSayWithOptions(const DeleteBeebotIntentUserSayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasUserSayId()) {
    query["UserSayId"] = request.userSayId();
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
 * @summary DeleteBeebotIntentUserSay
 *
 * @param request DeleteBeebotIntentUserSayRequest
 * @return DeleteBeebotIntentUserSayResponse
 */
DeleteBeebotIntentUserSayResponse Client::deleteBeebotIntentUserSay(const DeleteBeebotIntentUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBeebotIntentUserSayWithOptions(request, runtime);
}

/**
 * @param request DeleteContactBlockListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactBlockListResponse
 */
DeleteContactBlockListResponse Client::deleteContactBlockListWithOptions(const DeleteContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactBlockListId()) {
    query["ContactBlockListId"] = request.contactBlockListId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOperator()) {
    query["Operator"] = request._operator();
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
 * @param request DeleteContactBlockListRequest
 * @return DeleteContactBlockListResponse
 */
DeleteContactBlockListResponse Client::deleteContactBlockList(const DeleteContactBlockListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactBlockListWithOptions(request, runtime);
}

/**
 * @param request DeleteContactWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactWhiteListResponse
 */
DeleteContactWhiteListResponse Client::deleteContactWhiteListWithOptions(const DeleteContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactWhiteListId()) {
    query["ContactWhiteListId"] = request.contactWhiteListId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOperator()) {
    query["Operator"] = request._operator();
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
 * @param request DeleteContactWhiteListRequest
 * @return DeleteContactWhiteListResponse
 */
DeleteContactWhiteListResponse Client::deleteContactWhiteList(const DeleteContactWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactWhiteListWithOptions(request, runtime);
}

/**
 * @param request DeleteDialogueFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDialogueFlowResponse
 */
DeleteDialogueFlowResponse Client::deleteDialogueFlowWithOptions(const DeleteDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDialogueFlowId()) {
    query["DialogueFlowId"] = request.dialogueFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request DeleteDialogueFlowRequest
 * @return DeleteDialogueFlowResponse
 */
DeleteDialogueFlowResponse Client::deleteDialogueFlow(const DeleteDialogueFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDialogueFlowWithOptions(request, runtime);
}

/**
 * @param request DeleteGlobalQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGlobalQuestionResponse
 */
DeleteGlobalQuestionResponse Client::deleteGlobalQuestionWithOptions(const DeleteGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalQuestionId()) {
    query["GlobalQuestionId"] = request.globalQuestionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request DeleteGlobalQuestionRequest
 * @return DeleteGlobalQuestionResponse
 */
DeleteGlobalQuestionResponse Client::deleteGlobalQuestion(const DeleteGlobalQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGlobalQuestionWithOptions(request, runtime);
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
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @param request DeleteIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIntentResponse
 */
DeleteIntentResponse Client::deleteIntentWithOptions(const DeleteIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request DeleteIntentRequest
 * @return DeleteIntentResponse
 */
DeleteIntentResponse Client::deleteIntent(const DeleteIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteIntentWithOptions(request, runtime);
}

/**
 * @param request DeleteJobGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteJobGroupResponse
 */
DeleteJobGroupResponse Client::deleteJobGroupWithOptions(const DeleteJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
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
 * @param request DeleteJobGroupRequest
 * @return DeleteJobGroupResponse
 */
DeleteJobGroupResponse Client::deleteJobGroup(const DeleteJobGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteJobGroupWithOptions(request, runtime);
}

/**
 * @param request DeleteOutboundCallNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOutboundCallNumberResponse
 */
DeleteOutboundCallNumberResponse Client::deleteOutboundCallNumberWithOptions(const DeleteOutboundCallNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOutboundCallNumberId()) {
    query["OutboundCallNumberId"] = request.outboundCallNumberId();
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
 * @param request DeleteOutboundCallNumberRequest
 * @return DeleteOutboundCallNumberResponse
 */
DeleteOutboundCallNumberResponse Client::deleteOutboundCallNumber(const DeleteOutboundCallNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOutboundCallNumberWithOptions(request, runtime);
}

/**
 * @param request DeleteScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScriptWithOptions(const DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request DeleteScriptRequest
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScript(const DeleteScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScriptWithOptions(request, runtime);
}

/**
 * @param request DeleteScriptRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScriptRecordingResponse
 */
DeleteScriptRecordingResponse Client::deleteScriptRecordingWithOptions(const DeleteScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasUuidsJson()) {
    query["UuidsJson"] = request.uuidsJson();
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
 * @param request DeleteScriptRecordingRequest
 * @return DeleteScriptRecordingResponse
 */
DeleteScriptRecordingResponse Client::deleteScriptRecording(const DeleteScriptRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScriptRecordingWithOptions(request, runtime);
}

/**
 * @param request DeleteScriptWaveformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScriptWaveformResponse
 */
DeleteScriptWaveformResponse Client::deleteScriptWaveformWithOptions(const DeleteScriptWaveformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasScriptWaveformId()) {
    query["ScriptWaveformId"] = request.scriptWaveformId();
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
 * @param request DeleteScriptWaveformRequest
 * @return DeleteScriptWaveformResponse
 */
DeleteScriptWaveformResponse Client::deleteScriptWaveform(const DeleteScriptWaveformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScriptWaveformWithOptions(request, runtime);
}

/**
 * @summary DescribeBeebotIntent
 *
 * @description ****
 *
 * @param request DescribeBeebotIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBeebotIntentResponse
 */
DescribeBeebotIntentResponse Client::describeBeebotIntentWithOptions(const DescribeBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary DescribeBeebotIntent
 *
 * @description ****
 *
 * @param request DescribeBeebotIntentRequest
 * @return DescribeBeebotIntentResponse
 */
DescribeBeebotIntentResponse Client::describeBeebotIntent(const DescribeBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBeebotIntentWithOptions(request, runtime);
}

/**
 * @param request DescribeDialogueNodeStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDialogueNodeStatisticsResponse
 */
DescribeDialogueNodeStatisticsResponse Client::describeDialogueNodeStatisticsWithOptions(const DescribeDialogueNodeStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
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
 * @param request DescribeDialogueNodeStatisticsRequest
 * @return DescribeDialogueNodeStatisticsResponse
 */
DescribeDialogueNodeStatisticsResponse Client::describeDialogueNodeStatistics(const DescribeDialogueNodeStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDialogueNodeStatisticsWithOptions(request, runtime);
}

/**
 * @summary DescribeDsReports
 *
 * @param request DescribeDsReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDsReportsResponse
 */
DescribeDsReportsResponse Client::describeDsReportsWithOptions(const DescribeDsReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
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
 * @summary DescribeDsReports
 *
 * @param request DescribeDsReportsRequest
 * @return DescribeDsReportsResponse
 */
DescribeDsReportsResponse Client::describeDsReports(const DescribeDsReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDsReportsWithOptions(request, runtime);
}

/**
 * @param request DescribeGlobalQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGlobalQuestionResponse
 */
DescribeGlobalQuestionResponse Client::describeGlobalQuestionWithOptions(const DescribeGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalQuestionId()) {
    query["GlobalQuestionId"] = request.globalQuestionId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request DescribeGlobalQuestionRequest
 * @return DescribeGlobalQuestionResponse
 */
DescribeGlobalQuestionResponse Client::describeGlobalQuestion(const DescribeGlobalQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGlobalQuestionWithOptions(request, runtime);
}

/**
 * @param request DescribeGroupExecutingInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupExecutingInfoResponse
 */
DescribeGroupExecutingInfoResponse Client::describeGroupExecutingInfoWithOptions(const DescribeGroupExecutingInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
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
 * @param request DescribeGroupExecutingInfoRequest
 * @return DescribeGroupExecutingInfoResponse
 */
DescribeGroupExecutingInfoResponse Client::describeGroupExecutingInfo(const DescribeGroupExecutingInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupExecutingInfoWithOptions(request, runtime);
}

/**
 * @summary DescribeInstance
 *
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary DescribeInstance
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @param request DescribeIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIntentResponse
 */
DescribeIntentResponse Client::describeIntentWithOptions(const DescribeIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request DescribeIntentRequest
 * @return DescribeIntentResponse
 */
DescribeIntentResponse Client::describeIntent(const DescribeIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntentWithOptions(request, runtime);
}

/**
 * @summary DescribeIntentStatistics
 *
 * @param request DescribeIntentStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIntentStatisticsResponse
 */
DescribeIntentStatisticsResponse Client::describeIntentStatisticsWithOptions(const DescribeIntentStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
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
 * @summary DescribeIntentStatistics
 *
 * @param request DescribeIntentStatisticsRequest
 * @return DescribeIntentStatisticsResponse
 */
DescribeIntentStatisticsResponse Client::describeIntentStatistics(const DescribeIntentStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIntentStatisticsWithOptions(request, runtime);
}

/**
 * @summary 获取job信息
 *
 * @param request DescribeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobResponse
 */
DescribeJobResponse Client::describeJobWithOptions(const DescribeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasWithScript()) {
    query["WithScript"] = request.withScript();
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
 * @summary 获取job信息
 *
 * @param request DescribeJobRequest
 * @return DescribeJobResponse
 */
DescribeJobResponse Client::describeJob(const DescribeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobWithOptions(request, runtime);
}

/**
 * @param request DescribeJobDataParsingTaskProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobDataParsingTaskProgressResponse
 */
DescribeJobDataParsingTaskProgressResponse Client::describeJobDataParsingTaskProgressWithOptions(const DescribeJobDataParsingTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobDataParsingTaskId()) {
    query["JobDataParsingTaskId"] = request.jobDataParsingTaskId();
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
 * @param request DescribeJobDataParsingTaskProgressRequest
 * @return DescribeJobDataParsingTaskProgressResponse
 */
DescribeJobDataParsingTaskProgressResponse Client::describeJobDataParsingTaskProgress(const DescribeJobDataParsingTaskProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobDataParsingTaskProgressWithOptions(request, runtime);
}

/**
 * @summary DescribeJobGroup
 *
 * @param request DescribeJobGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobGroupResponse
 */
DescribeJobGroupResponse Client::describeJobGroupWithOptions(const DescribeJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBriefTypes()) {
    query["BriefTypes"] = request.briefTypes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
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
 * @summary DescribeJobGroup
 *
 * @param request DescribeJobGroupRequest
 * @return DescribeJobGroupResponse
 */
DescribeJobGroupResponse Client::describeJobGroup(const DescribeJobGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobGroupWithOptions(request, runtime);
}

/**
 * @param request DescribeJobGroupExportTaskProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobGroupExportTaskProgressResponse
 */
DescribeJobGroupExportTaskProgressResponse Client::describeJobGroupExportTaskProgressWithOptions(const DescribeJobGroupExportTaskProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
 * @param request DescribeJobGroupExportTaskProgressRequest
 * @return DescribeJobGroupExportTaskProgressResponse
 */
DescribeJobGroupExportTaskProgressResponse Client::describeJobGroupExportTaskProgress(const DescribeJobGroupExportTaskProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobGroupExportTaskProgressWithOptions(request, runtime);
}

/**
 * @summary 获取场景信息
 *
 * @param request DescribeScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScriptResponse
 */
DescribeScriptResponse Client::describeScriptWithOptions(const DescribeScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary 获取场景信息
 *
 * @param request DescribeScriptRequest
 * @return DescribeScriptResponse
 */
DescribeScriptResponse Client::describeScript(const DescribeScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScriptWithOptions(request, runtime);
}

/**
 * @param request DescribeScriptVoiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScriptVoiceConfigResponse
 */
DescribeScriptVoiceConfigResponse Client::describeScriptVoiceConfigWithOptions(const DescribeScriptVoiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasScriptVoiceConfigId()) {
    query["ScriptVoiceConfigId"] = request.scriptVoiceConfigId();
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
 * @param request DescribeScriptVoiceConfigRequest
 * @return DescribeScriptVoiceConfigResponse
 */
DescribeScriptVoiceConfigResponse Client::describeScriptVoiceConfig(const DescribeScriptVoiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScriptVoiceConfigWithOptions(request, runtime);
}

/**
 * @param request DescribeTTSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTTSConfigResponse
 */
DescribeTTSConfigResponse Client::describeTTSConfigWithOptions(const DescribeTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request DescribeTTSConfigRequest
 * @return DescribeTTSConfigResponse
 */
DescribeTTSConfigResponse Client::describeTTSConfig(const DescribeTTSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTTSConfigWithOptions(request, runtime);
}

/**
 * @param request DescribeTTSDemoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTTSDemoResponse
 */
DescribeTTSDemoResponse Client::describeTTSDemoWithOptions(const DescribeTTSDemoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessKey()) {
    query["AccessKey"] = request.accessKey();
  }

  if (!!request.hasAliCustomizedVoice()) {
    query["AliCustomizedVoice"] = request.aliCustomizedVoice();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNlsServiceType()) {
    query["NlsServiceType"] = request.nlsServiceType();
  }

  if (!!request.hasPitchRate()) {
    query["PitchRate"] = request.pitchRate();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasSecretKey()) {
    query["SecretKey"] = request.secretKey();
  }

  if (!!request.hasSpeechRate()) {
    query["SpeechRate"] = request.speechRate();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasVoice()) {
    query["Voice"] = request.voice();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.volume();
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
 * @param request DescribeTTSDemoRequest
 * @return DescribeTTSDemoResponse
 */
DescribeTTSDemoResponse Client::describeTTSDemo(const DescribeTTSDemoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTTSDemoWithOptions(request, runtime);
}

/**
 * @param request DescribeTagHitsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagHitsSummaryResponse
 */
DescribeTagHitsSummaryResponse Client::describeTagHitsSummaryWithOptions(const DescribeTagHitsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
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
 * @param request DescribeTagHitsSummaryRequest
 * @return DescribeTagHitsSummaryResponse
 */
DescribeTagHitsSummaryResponse Client::describeTagHitsSummary(const DescribeTagHitsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagHitsSummaryWithOptions(request, runtime);
}

/**
 * @summary 号码绑定实例列表
 *
 * @param request DescribeTenantBindNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTenantBindNumberResponse
 */
DescribeTenantBindNumberResponse Client::describeTenantBindNumberWithOptions(const DescribeTenantBindNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNumber()) {
    query["Number"] = request.number();
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
 * @summary 号码绑定实例列表
 *
 * @param request DescribeTenantBindNumberRequest
 * @return DescribeTenantBindNumberResponse
 */
DescribeTenantBindNumberResponse Client::describeTenantBindNumber(const DescribeTenantBindNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTenantBindNumberWithOptions(request, runtime);
}

/**
 * @param request DialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DialogueResponse
 */
DialogueResponse Client::dialogueWithOptions(const DialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionKey()) {
    query["ActionKey"] = request.actionKey();
  }

  if (!!request.hasActionParams()) {
    query["ActionParams"] = request.actionParams();
  }

  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCallType()) {
    query["CallType"] = request.callType();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.utterance();
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
 * @param request DialogueRequest
 * @return DialogueResponse
 */
DialogueResponse Client::dialogue(const DialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dialogueWithOptions(request, runtime);
}

/**
 * @summary DownloadRecording
 *
 * @param request DownloadRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadRecordingResponse
 */
DownloadRecordingResponse Client::downloadRecordingWithOptions(const DownloadRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNeedVoiceSliceRecording()) {
    query["NeedVoiceSliceRecording"] = request.needVoiceSliceRecording();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
 * @summary DownloadRecording
 *
 * @param request DownloadRecordingRequest
 * @return DownloadRecordingResponse
 */
DownloadRecordingResponse Client::downloadRecording(const DownloadRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadRecordingWithOptions(request, runtime);
}

/**
 * @param request DownloadScriptRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadScriptRecordingResponse
 */
DownloadScriptRecordingResponse Client::downloadScriptRecordingWithOptions(const DownloadScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.uuid();
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
 * @param request DownloadScriptRecordingRequest
 * @return DownloadScriptRecordingResponse
 */
DownloadScriptRecordingResponse Client::downloadScriptRecording(const DownloadScriptRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadScriptRecordingWithOptions(request, runtime);
}

/**
 * @param request DuplicateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DuplicateScriptResponse
 */
DuplicateScriptResponse Client::duplicateScriptWithOptions(const DuplicateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasSourceScriptId()) {
    query["SourceScriptId"] = request.sourceScriptId();
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
 * @param request DuplicateScriptRequest
 * @return DuplicateScriptResponse
 */
DuplicateScriptResponse Client::duplicateScript(const DuplicateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return duplicateScriptWithOptions(request, runtime);
}

/**
 * @param request ExportScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportScriptResponse
 */
ExportScriptResponse Client::exportScriptWithOptions(const ExportScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request ExportScriptRequest
 * @return ExportScriptResponse
 */
ExportScriptResponse Client::exportScript(const ExportScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportScriptWithOptions(request, runtime);
}

/**
 * @param request GenerateUploadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUploadUrlResponse
 */
GenerateUploadUrlResponse Client::generateUploadUrlWithOptions(const GenerateUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
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
 * @param request GenerateUploadUrlRequest
 * @return GenerateUploadUrlResponse
 */
GenerateUploadUrlResponse Client::generateUploadUrl(const GenerateUploadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUploadUrlWithOptions(request, runtime);
}

/**
 * @param request GetAfterAnswerDelayPlaybackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAfterAnswerDelayPlaybackResponse
 */
GetAfterAnswerDelayPlaybackResponse Client::getAfterAnswerDelayPlaybackWithOptions(const GetAfterAnswerDelayPlaybackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
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
 * @param request GetAfterAnswerDelayPlaybackRequest
 * @return GetAfterAnswerDelayPlaybackResponse
 */
GetAfterAnswerDelayPlaybackResponse Client::getAfterAnswerDelayPlayback(const GetAfterAnswerDelayPlaybackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAfterAnswerDelayPlaybackWithOptions(request, runtime);
}

/**
 * @param request GetAgentProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentProfileResponse
 */
GetAgentProfileResponse Client::getAgentProfileWithOptions(const GetAgentProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentProfileId()) {
    body["AgentProfileId"] = request.agentProfileId();
  }

  if (!!request.hasAppIp()) {
    body["AppIp"] = request.appIp();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
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
 * @param request GetAgentProfileRequest
 * @return GetAgentProfileResponse
 */
GetAgentProfileResponse Client::getAgentProfile(const GetAgentProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentProfileWithOptions(request, runtime);
}

/**
 * @param request GetAgentProfileTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentProfileTemplateResponse
 */
GetAgentProfileTemplateResponse Client::getAgentProfileTemplateWithOptions(const GetAgentProfileTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentProfileTemplateId()) {
    body["AgentProfileTemplateId"] = request.agentProfileTemplateId();
  }

  if (!!request.hasAppIp()) {
    body["AppIp"] = request.appIp();
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
 * @param request GetAgentProfileTemplateRequest
 * @return GetAgentProfileTemplateResponse
 */
GetAgentProfileTemplateResponse Client::getAgentProfileTemplate(const GetAgentProfileTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentProfileTemplateWithOptions(request, runtime);
}

/**
 * @param request GetAnnotationMissionSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAnnotationMissionSummaryResponse
 */
GetAnnotationMissionSummaryResponse Client::getAnnotationMissionSummaryWithOptions(const GetAnnotationMissionSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionId()) {
    query["AnnotationMissionId"] = request.annotationMissionId();
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @param request GetAsrServerInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsrServerInfoResponse
 */
GetAsrServerInfoResponse Client::getAsrServerInfoWithOptions(const GetAsrServerInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
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
 * @param request GetAsrServerInfoRequest
 * @return GetAsrServerInfoResponse
 */
GetAsrServerInfoResponse Client::getAsrServerInfo(const GetAsrServerInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsrServerInfoWithOptions(request, runtime);
}

/**
 * @summary 获取异步外呼任务上传结果
 *
 * @param request GetAssignJobsAsyncResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAssignJobsAsyncResultResponse
 */
GetAssignJobsAsyncResultResponse Client::getAssignJobsAsyncResultWithOptions(const GetAssignJobsAsyncResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsyncTaskId()) {
    query["AsyncTaskId"] = request.asyncTaskId();
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
 * @summary 获取异步外呼任务上传结果
 *
 * @param request GetAssignJobsAsyncResultRequest
 * @return GetAssignJobsAsyncResultResponse
 */
GetAssignJobsAsyncResultResponse Client::getAssignJobsAsyncResult(const GetAssignJobsAsyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAssignJobsAsyncResultWithOptions(request, runtime);
}

/**
 * @summary 获取系统策略配置
 *
 * @param request GetBaseStrategyPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBaseStrategyPeriodResponse
 */
GetBaseStrategyPeriodResponse Client::getBaseStrategyPeriodWithOptions(const GetBaseStrategyPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
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
 * @summary 获取系统策略配置
 *
 * @param request GetBaseStrategyPeriodRequest
 * @return GetBaseStrategyPeriodResponse
 */
GetBaseStrategyPeriodResponse Client::getBaseStrategyPeriod(const GetBaseStrategyPeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBaseStrategyPeriodWithOptions(request, runtime);
}

/**
 * @param request GetConcurrentConversationQuotaRequest
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
 * @return GetConcurrentConversationQuotaResponse
 */
GetConcurrentConversationQuotaResponse Client::getConcurrentConversationQuota() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConcurrentConversationQuotaWithOptions(runtime);
}

/**
 * @summary GetContactBlockList
 *
 * @param request GetContactBlockListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContactBlockListResponse
 */
GetContactBlockListResponse Client::getContactBlockListWithOptions(const GetContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCountTotalRow()) {
    query["CountTotalRow"] = request.countTotalRow();
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
 * @summary GetContactBlockList
 *
 * @param request GetContactBlockListRequest
 * @return GetContactBlockListResponse
 */
GetContactBlockListResponse Client::getContactBlockList(const GetContactBlockListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContactBlockListWithOptions(request, runtime);
}

/**
 * @summary GetContactWhiteList
 *
 * @param request GetContactWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContactWhiteListResponse
 */
GetContactWhiteListResponse Client::getContactWhiteListWithOptions(const GetContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCountTotalRow()) {
    query["CountTotalRow"] = request.countTotalRow();
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
 * @summary GetContactWhiteList
 *
 * @param request GetContactWhiteListRequest
 * @return GetContactWhiteListResponse
 */
GetContactWhiteListResponse Client::getContactWhiteList(const GetContactWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContactWhiteListWithOptions(request, runtime);
}

/**
 * @param request GetCurrentConcurrencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCurrentConcurrencyResponse
 */
GetCurrentConcurrencyResponse Client::getCurrentConcurrencyWithOptions(const GetCurrentConcurrencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @param request GetCurrentConcurrencyRequest
 * @return GetCurrentConcurrencyResponse
 */
GetCurrentConcurrencyResponse Client::getCurrentConcurrency(const GetCurrentConcurrencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCurrentConcurrencyWithOptions(request, runtime);
}

/**
 * @summary GetEmptyNumberNoMoreCallsInfo
 *
 * @param request GetEmptyNumberNoMoreCallsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEmptyNumberNoMoreCallsInfoResponse
 */
GetEmptyNumberNoMoreCallsInfoResponse Client::getEmptyNumberNoMoreCallsInfoWithOptions(const GetEmptyNumberNoMoreCallsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
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
 * @summary GetEmptyNumberNoMoreCallsInfo
 *
 * @param request GetEmptyNumberNoMoreCallsInfoRequest
 * @return GetEmptyNumberNoMoreCallsInfoResponse
 */
GetEmptyNumberNoMoreCallsInfoResponse Client::getEmptyNumberNoMoreCallsInfo(const GetEmptyNumberNoMoreCallsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEmptyNumberNoMoreCallsInfoWithOptions(request, runtime);
}

/**
 * @summary 获取上传信息
 *
 * @param request GetJobDataUploadParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobDataUploadParamsResponse
 */
GetJobDataUploadParamsResponse Client::getJobDataUploadParamsWithOptions(const GetJobDataUploadParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusiType()) {
    query["BusiType"] = request.busiType();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasUniqueId()) {
    query["UniqueId"] = request.uniqueId();
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
 * @summary 获取上传信息
 *
 * @param request GetJobDataUploadParamsRequest
 * @return GetJobDataUploadParamsResponse
 */
GetJobDataUploadParamsResponse Client::getJobDataUploadParams(const GetJobDataUploadParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobDataUploadParamsWithOptions(request, runtime);
}

/**
 * @summary GetMaxAttemptsPerDay
 *
 * @param request GetMaxAttemptsPerDayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMaxAttemptsPerDayResponse
 */
GetMaxAttemptsPerDayResponse Client::getMaxAttemptsPerDayWithOptions(const GetMaxAttemptsPerDayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
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
 * @summary GetMaxAttemptsPerDay
 *
 * @param request GetMaxAttemptsPerDayRequest
 * @return GetMaxAttemptsPerDayResponse
 */
GetMaxAttemptsPerDayResponse Client::getMaxAttemptsPerDay(const GetMaxAttemptsPerDayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMaxAttemptsPerDayWithOptions(request, runtime);
}

/**
 * @summary 获取号码库模板下载链接
 *
 * @param request GetNumberDistrictInfoTemplateDownloadUrlRequest
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
 * @summary 获取号码库模板下载链接
 *
 * @return GetNumberDistrictInfoTemplateDownloadUrlResponse
 */
GetNumberDistrictInfoTemplateDownloadUrlResponse Client::getNumberDistrictInfoTemplateDownloadUrl() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNumberDistrictInfoTemplateDownloadUrlWithOptions(runtime);
}

/**
 * @summary GetRealtimeConcurrencyReport
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
 * @summary GetRealtimeConcurrencyReport
 *
 * @param request GetRealtimeConcurrencyReportRequest
 * @return GetRealtimeConcurrencyReportResponse
 */
GetRealtimeConcurrencyReportResponse Client::getRealtimeConcurrencyReport(const GetRealtimeConcurrencyReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRealtimeConcurrencyReportWithOptions(request, runtime);
}

/**
 * @summary GetSummaryInfo
 *
 * @param request GetSummaryInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSummaryInfoResponse
 */
GetSummaryInfoResponse Client::getSummaryInfoWithOptions(const GetSummaryInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.instanceIdList();
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
 * @summary GetSummaryInfo
 *
 * @param request GetSummaryInfoRequest
 * @return GetSummaryInfoResponse
 */
GetSummaryInfoResponse Client::getSummaryInfo(const GetSummaryInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSummaryInfoWithOptions(request, runtime);
}

/**
 * @summary 根据TaskId获取Task信息
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
 * @summary 根据TaskId获取Task信息
 *
 * @param request GetTaskByUuidRequest
 * @return GetTaskByUuidResponse
 */
GetTaskByUuidResponse Client::getTaskByUuid(const GetTaskByUuidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskByUuidWithOptions(request, runtime);
}

/**
 * @summary GetVersion
 *
 * @param request GetVersionRequest
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
 * @summary GetVersion
 *
 * @return GetVersionResponse
 */
GetVersionResponse Client::getVersion() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVersionWithOptions(runtime);
}

/**
 * @param request ImportScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportScriptResponse
 */
ImportScriptResponse Client::importScriptWithOptions(const ImportScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNluEngine()) {
    query["NluEngine"] = request.nluEngine();
  }

  if (!!request.hasSignatureUrl()) {
    query["SignatureUrl"] = request.signatureUrl();
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
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.instanceOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
 * @param request ListAgentProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentProfilesResponse
 */
ListAgentProfilesResponse Client::listAgentProfilesWithOptions(const ListAgentProfilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppIp()) {
    body["AppIp"] = request.appIp();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.scriptId();
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
 * @param request ListAgentProfilesRequest
 * @return ListAgentProfilesResponse
 */
ListAgentProfilesResponse Client::listAgentProfiles(const ListAgentProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentProfilesWithOptions(request, runtime);
}

/**
 * @summary 租户绑定号码列表
 *
 * @param request ListAllTenantBindNumberBindingRequest
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
 * @summary 租户绑定号码列表
 *
 * @return ListAllTenantBindNumberBindingResponse
 */
ListAllTenantBindNumberBindingResponse Client::listAllTenantBindNumberBinding() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllTenantBindNumberBindingWithOptions(runtime);
}

/**
 * @summary 标注中心
 *
 * @param request ListAnnotationMissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAnnotationMissionResponse
 */
ListAnnotationMissionResponse Client::listAnnotationMissionWithOptions(const ListAnnotationMissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionId()) {
    query["AnnotationMissionId"] = request.annotationMissionId();
  }

  if (!!request.hasAnnotationMissionName()) {
    query["AnnotationMissionName"] = request.annotationMissionName();
  }

  if (!!request.hasAnnotationStatusListFilter()) {
    query["AnnotationStatusListFilter"] = request.annotationStatusListFilter();
  }

  if (!!request.hasAnnotationStatusListStringFilter()) {
    query["AnnotationStatusListStringFilter"] = request.annotationStatusListStringFilter();
  }

  if (!!request.hasCreateTimeEndFilter()) {
    query["CreateTimeEndFilter"] = request.createTimeEndFilter();
  }

  if (!!request.hasCreateTimeStartFilter()) {
    query["CreateTimeStartFilter"] = request.createTimeStartFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @summary 标注中心
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
    query["AnnotationMissionId"] = request.annotationMissionId();
  }

  if (!!request.hasAnnotationMissionSessionId()) {
    query["AnnotationMissionSessionId"] = request.annotationMissionSessionId();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.environment();
  }

  if (!!request.hasIncludeStatusListJsonString()) {
    query["IncludeStatusListJsonString"] = request.includeStatusListJsonString();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
 * @param request ListApiPluginsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiPluginsResponse
 */
ListApiPluginsResponse Client::listApiPluginsWithOptions(const ListApiPluginsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasUuidsJson()) {
    query["UuidsJson"] = request.uuidsJson();
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
 * @param request ListApiPluginsRequest
 * @return ListApiPluginsResponse
 */
ListApiPluginsResponse Client::listApiPlugins(const ListApiPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApiPluginsWithOptions(request, runtime);
}

/**
 * @summary ListBeebotIntent
 *
 * @param request ListBeebotIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBeebotIntentResponse
 */
ListBeebotIntentResponse Client::listBeebotIntentWithOptions(const ListBeebotIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.intentName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary ListBeebotIntent
 *
 * @param request ListBeebotIntentRequest
 * @return ListBeebotIntentResponse
 */
ListBeebotIntentResponse Client::listBeebotIntent(const ListBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBeebotIntentWithOptions(request, runtime);
}

/**
 * @summary ListBeebotIntentLgf
 *
 * @param request ListBeebotIntentLgfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBeebotIntentLgfResponse
 */
ListBeebotIntentLgfResponse Client::listBeebotIntentLgfWithOptions(const ListBeebotIntentLgfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasLgfText()) {
    query["LgfText"] = request.lgfText();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary ListBeebotIntentLgf
 *
 * @param request ListBeebotIntentLgfRequest
 * @return ListBeebotIntentLgfResponse
 */
ListBeebotIntentLgfResponse Client::listBeebotIntentLgf(const ListBeebotIntentLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBeebotIntentLgfWithOptions(request, runtime);
}

/**
 * @summary ListBeebotIntentUserSay
 *
 * @param request ListBeebotIntentUserSayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBeebotIntentUserSayResponse
 */
ListBeebotIntentUserSayResponse Client::listBeebotIntentUserSayWithOptions(const ListBeebotIntentUserSayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary ListBeebotIntentUserSay
 *
 * @param request ListBeebotIntentUserSayRequest
 * @return ListBeebotIntentUserSayResponse
 */
ListBeebotIntentUserSayResponse Client::listBeebotIntentUserSay(const ListBeebotIntentUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBeebotIntentUserSayWithOptions(request, runtime);
}

/**
 * @param request ListChatbotInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatbotInstancesResponse
 */
ListChatbotInstancesResponse Client::listChatbotInstancesWithOptions(const ListChatbotInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
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
 * @param request ListChatbotInstancesRequest
 * @return ListChatbotInstancesResponse
 */
ListChatbotInstancesResponse Client::listChatbotInstances(const ListChatbotInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatbotInstancesWithOptions(request, runtime);
}

/**
 * @param request ListDialogueFlowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDialogueFlowsResponse
 */
ListDialogueFlowsResponse Client::listDialogueFlowsWithOptions(const ListDialogueFlowsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request ListDialogueFlowsRequest
 * @return ListDialogueFlowsResponse
 */
ListDialogueFlowsResponse Client::listDialogueFlows(const ListDialogueFlowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDialogueFlowsWithOptions(request, runtime);
}

/**
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
 * @param request ListDownloadTasksRequest
 * @return ListDownloadTasksResponse
 */
ListDownloadTasksResponse Client::listDownloadTasks(const ListDownloadTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDownloadTasksWithOptions(request, runtime);
}

/**
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
 * @param request ListFlashSmsTemplatesRequest
 * @return ListFlashSmsTemplatesResponse
 */
ListFlashSmsTemplatesResponse Client::listFlashSmsTemplates(const ListFlashSmsTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsTemplatesWithOptions(request, runtime);
}

/**
 * @param request ListGlobalQuestionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGlobalQuestionsResponse
 */
ListGlobalQuestionsResponse Client::listGlobalQuestionsWithOptions(const ListGlobalQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request ListGlobalQuestionsRequest
 * @return ListGlobalQuestionsResponse
 */
ListGlobalQuestionsResponse Client::listGlobalQuestions(const ListGlobalQuestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGlobalQuestionsWithOptions(request, runtime);
}

/**
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary 意图列表
 *
 * @param request ListIntentionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntentionsResponse
 */
ListIntentionsResponse Client::listIntentionsWithOptions(const ListIntentionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionDataSourceType()) {
    query["AnnotationMissionDataSourceType"] = request.annotationMissionDataSourceType();
  }

  if (!!request.hasBotId()) {
    query["BotId"] = request.botId();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.environment();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasUserNick()) {
    query["UserNick"] = request.userNick();
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
 * @summary 意图列表
 *
 * @param request ListIntentionsRequest
 * @return ListIntentionsResponse
 */
ListIntentionsResponse Client::listIntentions(const ListIntentionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntentionsWithOptions(request, runtime);
}

/**
 * @param request ListIntentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntentsResponse
 */
ListIntentsResponse Client::listIntentsWithOptions(const ListIntentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request ListIntentsRequest
 * @return ListIntentsResponse
 */
ListIntentsResponse Client::listIntents(const ListIntentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntentsWithOptions(request, runtime);
}

/**
 * @param request ListJobGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobGroupsResponse
 */
ListJobGroupsResponse Client::listJobGroupsWithOptions(const ListJobGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsyncQuery()) {
    query["AsyncQuery"] = request.asyncQuery();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupStatusFilter()) {
    query["JobGroupStatusFilter"] = request.jobGroupStatusFilter();
  }

  if (!!request.hasOnlyMinConcurrencyEnabled()) {
    query["OnlyMinConcurrencyEnabled"] = request.onlyMinConcurrencyEnabled();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchText()) {
    query["SearchText"] = request.searchText();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
 * @param request ListJobGroupsRequest
 * @return ListJobGroupsResponse
 */
ListJobGroupsResponse Client::listJobGroups(const ListJobGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobGroupsWithOptions(request, runtime);
}

/**
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
 * @param request ListJobGroupsAsyncRequest
 * @return ListJobGroupsAsyncResponse
 */
ListJobGroupsAsyncResponse Client::listJobGroupsAsync(const ListJobGroupsAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobGroupsAsyncWithOptions(request, runtime);
}

/**
 * @summary ListJobs
 *
 * @param request ListJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobsWithOptions(const ListJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary ListJobs
 *
 * @param request ListJobsRequest
 * @return ListJobsResponse
 */
ListJobsResponse Client::listJobs(const ListJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobsWithOptions(request, runtime);
}

/**
 * @param request ListJobsByGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobsByGroupResponse
 */
ListJobsByGroupResponse Client::listJobsByGroupWithOptions(const ListJobsByGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobFailureReason()) {
    query["JobFailureReason"] = request.jobFailureReason();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasJobStatus()) {
    query["JobStatus"] = request.jobStatus();
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
 * @param request ListJobsByGroupRequest
 * @return ListJobsByGroupResponse
 */
ListJobsByGroupResponse Client::listJobsByGroup(const ListJobsByGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobsByGroupWithOptions(request, runtime);
}

/**
 * @param request ListOutboundCallNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOutboundCallNumbersResponse
 */
ListOutboundCallNumbersResponse Client::listOutboundCallNumbersWithOptions(const ListOutboundCallNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @param request ListOutboundCallNumbersRequest
 * @return ListOutboundCallNumbersResponse
 */
ListOutboundCallNumbersResponse Client::listOutboundCallNumbers(const ListOutboundCallNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOutboundCallNumbersWithOptions(request, runtime);
}

/**
 * @param request ListResourceTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceTagsResponse
 */
ListResourceTagsResponse Client::listResourceTagsWithOptions(const ListResourceTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
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
 * @param request ListResourceTagsRequest
 * @return ListResourceTagsResponse
 */
ListResourceTagsResponse Client::listResourceTags(const ListResourceTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceTagsWithOptions(request, runtime);
}

/**
 * @param request ListScriptPublishHistoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptPublishHistoriesResponse
 */
ListScriptPublishHistoriesResponse Client::listScriptPublishHistoriesWithOptions(const ListScriptPublishHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request ListScriptPublishHistoriesRequest
 * @return ListScriptPublishHistoriesResponse
 */
ListScriptPublishHistoriesResponse Client::listScriptPublishHistories(const ListScriptPublishHistoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptPublishHistoriesWithOptions(request, runtime);
}

/**
 * @param request ListScriptRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptRecordingResponse
 */
ListScriptRecordingResponse Client::listScriptRecordingWithOptions(const ListScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasRefIdsJson()) {
    query["RefIdsJson"] = request.refIdsJson();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasSearch()) {
    query["Search"] = request.search();
  }

  if (!!request.hasStatesJson()) {
    query["StatesJson"] = request.statesJson();
  }

  if (!!request.hasUuidsJson()) {
    query["UuidsJson"] = request.uuidsJson();
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
 * @param request ListScriptRecordingRequest
 * @return ListScriptRecordingResponse
 */
ListScriptRecordingResponse Client::listScriptRecording(const ListScriptRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptRecordingWithOptions(request, runtime);
}

/**
 * @param request ListScriptVoiceConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptVoiceConfigsResponse
 */
ListScriptVoiceConfigsResponse Client::listScriptVoiceConfigsWithOptions(const ListScriptVoiceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request ListScriptVoiceConfigsRequest
 * @return ListScriptVoiceConfigsResponse
 */
ListScriptVoiceConfigsResponse Client::listScriptVoiceConfigs(const ListScriptVoiceConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptVoiceConfigsWithOptions(request, runtime);
}

/**
 * @summary -
 *
 * @param request ListScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScriptsWithOptions(const ListScriptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNluEngine()) {
    query["NluEngine"] = request.nluEngine();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScriptName()) {
    query["ScriptName"] = request.scriptName();
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
 * @summary -
 *
 * @param request ListScriptsRequest
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScripts(const ListScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptsWithOptions(request, runtime);
}

/**
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @param request ListTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTagsWithOptions(const ListTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request ListTagsRequest
 * @return ListTagsResponse
 */
ListTagsResponse Client::listTags(const ListTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagsWithOptions(request, runtime);
}

/**
 * @param tmpReq ModifyAgentProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAgentProfileResponse
 */
ModifyAgentProfileResponse Client::modifyAgentProfileWithOptions(const ModifyAgentProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAgentProfileShrinkRequest request = ModifyAgentProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFaqCategoryIds()) {
    request.setFaqCategoryIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.faqCategoryIds(), "FaqCategoryIds", "json"));
  }

  json body = {};
  if (!!request.hasAgentProfileId()) {
    body["AgentProfileId"] = request.agentProfileId();
  }

  if (!!request.hasApiPluginJson()) {
    body["ApiPluginJson"] = request.apiPluginJson();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasFaqCategoryIdsShrink()) {
    body["FaqCategoryIds"] = request.faqCategoryIdsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstructionJson()) {
    body["InstructionJson"] = request.instructionJson();
  }

  if (!!request.hasLabelsJson()) {
    body["LabelsJson"] = request.labelsJson();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.model();
  }

  if (!!request.hasModelConfig()) {
    body["ModelConfig"] = request.modelConfig();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.prompt();
  }

  if (!!request.hasPromptJson()) {
    body["PromptJson"] = request.promptJson();
  }

  if (!!request.hasScenario()) {
    body["Scenario"] = request.scenario();
  }

  if (!!request.hasVariablesJson()) {
    body["VariablesJson"] = request.variablesJson();
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
 * @param request ModifyAgentProfileRequest
 * @return ModifyAgentProfileResponse
 */
ModifyAgentProfileResponse Client::modifyAgentProfile(const ModifyAgentProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAgentProfileWithOptions(request, runtime);
}

/**
 * @param request ModifyAnnotationMissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAnnotationMissionResponse
 */
ModifyAnnotationMissionResponse Client::modifyAnnotationMissionWithOptions(const ModifyAnnotationMissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionId()) {
    query["AnnotationMissionId"] = request.annotationMissionId();
  }

  if (!!request.hasAnnotationMissionName()) {
    query["AnnotationMissionName"] = request.annotationMissionName();
  }

  if (!!request.hasAnnotationStatus()) {
    query["AnnotationStatus"] = request.annotationStatus();
  }

  if (!!request.hasDelete()) {
    query["Delete"] = request._delete();
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
 * @param request ModifyAnnotationMissionRequest
 * @return ModifyAnnotationMissionResponse
 */
ModifyAnnotationMissionResponse Client::modifyAnnotationMission(const ModifyAnnotationMissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAnnotationMissionWithOptions(request, runtime);
}

/**
 * @param request ModifyBatchJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBatchJobsResponse
 */
ModifyBatchJobsResponse Client::modifyBatchJobsWithOptions(const ModifyBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchJobName()) {
    query["BatchJobName"] = request.batchJobName();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobFilePath()) {
    query["JobFilePath"] = request.jobFilePath();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.strategyJson();
  }

  if (!!request.hasSubmitted()) {
    query["Submitted"] = request.submitted();
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
 * @param request ModifyBatchJobsRequest
 * @return ModifyBatchJobsResponse
 */
ModifyBatchJobsResponse Client::modifyBatchJobs(const ModifyBatchJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBatchJobsWithOptions(request, runtime);
}

/**
 * @summary ModifyBeebotIntent
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
    request.setIntentDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.intentDefinition(), "IntentDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentDefinitionShrink()) {
    query["IntentDefinition"] = request.intentDefinitionShrink();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary ModifyBeebotIntent
 *
 * @param request ModifyBeebotIntentRequest
 * @return ModifyBeebotIntentResponse
 */
ModifyBeebotIntentResponse Client::modifyBeebotIntent(const ModifyBeebotIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBeebotIntentWithOptions(request, runtime);
}

/**
 * @summary ModifyBeebotIntentLgf
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
    request.setLgfDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.lgfDefinition(), "LgfDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLgfDefinitionShrink()) {
    query["LgfDefinition"] = request.lgfDefinitionShrink();
  }

  if (!!request.hasLgfId()) {
    query["LgfId"] = request.lgfId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary ModifyBeebotIntentLgf
 *
 * @param request ModifyBeebotIntentLgfRequest
 * @return ModifyBeebotIntentLgfResponse
 */
ModifyBeebotIntentLgfResponse Client::modifyBeebotIntentLgf(const ModifyBeebotIntentLgfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBeebotIntentLgfWithOptions(request, runtime);
}

/**
 * @summary ModifyBeebotIntentUserSay
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
    request.setUserSayDefinitionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userSayDefinition(), "UserSayDefinition", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasUserSayDefinitionShrink()) {
    query["UserSayDefinition"] = request.userSayDefinitionShrink();
  }

  if (!!request.hasUserSayId()) {
    query["UserSayId"] = request.userSayId();
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
 * @summary ModifyBeebotIntentUserSay
 *
 * @param request ModifyBeebotIntentUserSayRequest
 * @return ModifyBeebotIntentUserSayResponse
 */
ModifyBeebotIntentUserSayResponse Client::modifyBeebotIntentUserSay(const ModifyBeebotIntentUserSayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBeebotIntentUserSayWithOptions(request, runtime);
}

/**
 * @param request ModifyDialogueFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDialogueFlowResponse
 */
ModifyDialogueFlowResponse Client::modifyDialogueFlowWithOptions(const ModifyDialogueFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDialogueFlowDefinition()) {
    query["DialogueFlowDefinition"] = request.dialogueFlowDefinition();
  }

  if (!!request.hasDialogueFlowId()) {
    query["DialogueFlowId"] = request.dialogueFlowId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIsDrafted()) {
    query["IsDrafted"] = request.isDrafted();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request ModifyDialogueFlowRequest
 * @return ModifyDialogueFlowResponse
 */
ModifyDialogueFlowResponse Client::modifyDialogueFlow(const ModifyDialogueFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDialogueFlowWithOptions(request, runtime);
}

/**
 * @param request ModifyEmptyNumberNoMoreCallsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEmptyNumberNoMoreCallsInfoResponse
 */
ModifyEmptyNumberNoMoreCallsInfoResponse Client::modifyEmptyNumberNoMoreCallsInfoWithOptions(const ModifyEmptyNumberNoMoreCallsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmptyNumberNoMoreCalls()) {
    query["EmptyNumberNoMoreCalls"] = request.emptyNumberNoMoreCalls();
  }

  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
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
 * @param request ModifyEmptyNumberNoMoreCallsInfoRequest
 * @return ModifyEmptyNumberNoMoreCallsInfoResponse
 */
ModifyEmptyNumberNoMoreCallsInfoResponse Client::modifyEmptyNumberNoMoreCallsInfo(const ModifyEmptyNumberNoMoreCallsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEmptyNumberNoMoreCallsInfoWithOptions(request, runtime);
}

/**
 * @param request ModifyGlobalQuestionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGlobalQuestionResponse
 */
ModifyGlobalQuestionResponse Client::modifyGlobalQuestionWithOptions(const ModifyGlobalQuestionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnswers()) {
    query["Answers"] = request.answers();
  }

  if (!!request.hasGlobalQuestionId()) {
    query["GlobalQuestionId"] = request.globalQuestionId();
  }

  if (!!request.hasGlobalQuestionName()) {
    query["GlobalQuestionName"] = request.globalQuestionName();
  }

  if (!!request.hasGlobalQuestionType()) {
    query["GlobalQuestionType"] = request.globalQuestionType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasQuestions()) {
    query["Questions"] = request.questions();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request ModifyGlobalQuestionRequest
 * @return ModifyGlobalQuestionResponse
 */
ModifyGlobalQuestionResponse Client::modifyGlobalQuestion(const ModifyGlobalQuestionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGlobalQuestionWithOptions(request, runtime);
}

/**
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasInstanceDescription()) {
    query["InstanceDescription"] = request.instanceDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasMaxConcurrentConversation()) {
    query["MaxConcurrentConversation"] = request.maxConcurrentConversation();
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
 * @param request ModifyInstanceRequest
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstance(const ModifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceWithOptions(request, runtime);
}

/**
 * @param request ModifyIntentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyIntentResponse
 */
ModifyIntentResponse Client::modifyIntentWithOptions(const ModifyIntentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasIntentDescription()) {
    query["IntentDescription"] = request.intentDescription();
  }

  if (!!request.hasIntentId()) {
    query["IntentId"] = request.intentId();
  }

  if (!!request.hasIntentName()) {
    query["IntentName"] = request.intentName();
  }

  if (!!request.hasKeywords()) {
    query["Keywords"] = request.keywords();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasUtterances()) {
    query["Utterances"] = request.utterances();
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
 * @param request ModifyIntentRequest
 * @return ModifyIntentResponse
 */
ModifyIntentResponse Client::modifyIntent(const ModifyIntentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyIntentWithOptions(request, runtime);
}

/**
 * @summary 修改任务组
 *
 * @param request ModifyJobGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyJobGroupResponse
 */
ModifyJobGroupResponse Client::modifyJobGroupWithOptions(const ModifyJobGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFlashSmsExtras()) {
    query["FlashSmsExtras"] = request.flashSmsExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasJobGroupStatus()) {
    query["JobGroupStatus"] = request.jobGroupStatus();
  }

  if (!!request.hasMinConcurrency()) {
    query["MinConcurrency"] = request.minConcurrency();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasRecallCallingNumber()) {
    query["RecallCallingNumber"] = request.recallCallingNumber();
  }

  if (!!request.hasRecallStrategyJson()) {
    query["RecallStrategyJson"] = request.recallStrategyJson();
  }

  if (!!request.hasRingingDuration()) {
    query["RingingDuration"] = request.ringingDuration();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasStrategyJson()) {
    query["StrategyJson"] = request.strategyJson();
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
 * @summary 修改任务组
 *
 * @param request ModifyJobGroupRequest
 * @return ModifyJobGroupResponse
 */
ModifyJobGroupResponse Client::modifyJobGroup(const ModifyJobGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyJobGroupWithOptions(request, runtime);
}

/**
 * @summary ModifyOutboundCallNumber
 *
 * @param request ModifyOutboundCallNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyOutboundCallNumberResponse
 */
ModifyOutboundCallNumberResponse Client::modifyOutboundCallNumberWithOptions(const ModifyOutboundCallNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  if (!!request.hasOutboundCallNumberId()) {
    query["OutboundCallNumberId"] = request.outboundCallNumberId();
  }

  if (!!request.hasRateLimitCount()) {
    query["RateLimitCount"] = request.rateLimitCount();
  }

  if (!!request.hasRateLimitPeriod()) {
    query["RateLimitPeriod"] = request.rateLimitPeriod();
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
 * @summary ModifyOutboundCallNumber
 *
 * @param request ModifyOutboundCallNumberRequest
 * @return ModifyOutboundCallNumberResponse
 */
ModifyOutboundCallNumberResponse Client::modifyOutboundCallNumber(const ModifyOutboundCallNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyOutboundCallNumberWithOptions(request, runtime);
}

/**
 * @summary 修改场景
 *
 * @param request ModifyScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScriptResponse
 */
ModifyScriptResponse Client::modifyScriptWithOptions(const ModifyScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasAgentLlm()) {
    query["AgentLlm"] = request.agentLlm();
  }

  if (!!request.hasAsrConfig()) {
    query["AsrConfig"] = request.asrConfig();
  }

  if (!!request.hasChatConfig()) {
    query["ChatConfig"] = request.chatConfig();
  }

  if (!!request.hasChatbotId()) {
    query["ChatbotId"] = request.chatbotId();
  }

  if (!!request.hasEmotionEnable()) {
    query["EmotionEnable"] = request.emotionEnable();
  }

  if (!!request.hasIndustry()) {
    query["Industry"] = request.industry();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasLabelConfig()) {
    query["LabelConfig"] = request.labelConfig();
  }

  if (!!request.hasLongWaitEnable()) {
    query["LongWaitEnable"] = request.longWaitEnable();
  }

  if (!!request.hasMiniPlaybackConfigListJsonString()) {
    query["MiniPlaybackConfigListJsonString"] = request.miniPlaybackConfigListJsonString();
  }

  if (!!request.hasMiniPlaybackEnable()) {
    query["MiniPlaybackEnable"] = request.miniPlaybackEnable();
  }

  if (!!request.hasNewBargeInEnable()) {
    query["NewBargeInEnable"] = request.newBargeInEnable();
  }

  if (!!request.hasNlsConfig()) {
    query["NlsConfig"] = request.nlsConfig();
  }

  if (!!request.hasNluAccessType()) {
    query["NluAccessType"] = request.nluAccessType();
  }

  if (!!request.hasNluEngine()) {
    query["NluEngine"] = request.nluEngine();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.scene();
  }

  if (!!request.hasScriptContent()) {
    query["ScriptContent"] = request.scriptContent();
  }

  if (!!request.hasScriptDescription()) {
    query["ScriptDescription"] = request.scriptDescription();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasScriptName()) {
    query["ScriptName"] = request.scriptName();
  }

  if (!!request.hasScriptWaveform()) {
    query["ScriptWaveform"] = request.scriptWaveform();
  }

  if (!!request.hasTtsConfig()) {
    query["TtsConfig"] = request.ttsConfig();
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
 * @summary 修改场景
 *
 * @param request ModifyScriptRequest
 * @return ModifyScriptResponse
 */
ModifyScriptResponse Client::modifyScript(const ModifyScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScriptWithOptions(request, runtime);
}

/**
 * @param request ModifyScriptVoiceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScriptVoiceConfigResponse
 */
ModifyScriptVoiceConfigResponse Client::modifyScriptVoiceConfigWithOptions(const ModifyScriptVoiceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasScriptVoiceConfigId()) {
    query["ScriptVoiceConfigId"] = request.scriptVoiceConfigId();
  }

  if (!!request.hasScriptWaveformRelation()) {
    query["ScriptWaveformRelation"] = request.scriptWaveformRelation();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @param request ModifyScriptVoiceConfigRequest
 * @return ModifyScriptVoiceConfigResponse
 */
ModifyScriptVoiceConfigResponse Client::modifyScriptVoiceConfig(const ModifyScriptVoiceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScriptVoiceConfigWithOptions(request, runtime);
}

/**
 * @param request ModifyTTSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTTSConfigResponse
 */
ModifyTTSConfigResponse Client::modifyTTSConfigWithOptions(const ModifyTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.appKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNlsServiceType()) {
    query["NlsServiceType"] = request.nlsServiceType();
  }

  if (!!request.hasPitchRate()) {
    query["PitchRate"] = request.pitchRate();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasSpeechRate()) {
    query["SpeechRate"] = request.speechRate();
  }

  if (!!request.hasVoice()) {
    query["Voice"] = request.voice();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.volume();
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
 * @param request ModifyTTSConfigRequest
 * @return ModifyTTSConfigResponse
 */
ModifyTTSConfigResponse Client::modifyTTSConfig(const ModifyTTSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTTSConfigWithOptions(request, runtime);
}

/**
 * @param request ModifyTagGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTagGroupsResponse
 */
ModifyTagGroupsResponse Client::modifyTagGroupsWithOptions(const ModifyTagGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasTagGroups()) {
    query["TagGroups"] = request.tagGroups();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
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
 * @param request ModifyTagGroupsRequest
 * @return ModifyTagGroupsResponse
 */
ModifyTagGroupsResponse Client::modifyTagGroups(const ModifyTagGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTagGroupsWithOptions(request, runtime);
}

/**
 * @param request PublishScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishScriptResponse
 */
PublishScriptResponse Client::publishScriptWithOptions(const PublishScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request PublishScriptRequest
 * @return PublishScriptResponse
 */
PublishScriptResponse Client::publishScript(const PublishScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishScriptWithOptions(request, runtime);
}

/**
 * @param request PublishScriptForDebugRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishScriptForDebugResponse
 */
PublishScriptForDebugResponse Client::publishScriptForDebugWithOptions(const PublishScriptForDebugRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request PublishScriptForDebugRequest
 * @return PublishScriptForDebugResponse
 */
PublishScriptForDebugResponse Client::publishScriptForDebug(const PublishScriptForDebugRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishScriptForDebugWithOptions(request, runtime);
}

/**
 * @summary QueryJobs
 *
 * @param request QueryJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryJobsResponse
 */
QueryJobsResponse Client::queryJobsWithOptions(const QueryJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactName()) {
    query["ContactName"] = request.contactName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
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

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTimeAlignment()) {
    query["TimeAlignment"] = request.timeAlignment();
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
 * @summary QueryJobs
 *
 * @param request QueryJobsRequest
 * @return QueryJobsResponse
 */
QueryJobsResponse Client::queryJobs(const QueryJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryJobsWithOptions(request, runtime);
}

/**
 * @summary 获取外呼任务结果信息
 *
 * @param request QueryJobsWithResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryJobsWithResultResponse
 */
QueryJobsWithResultResponse Client::queryJobsWithResultWithOptions(const QueryJobsWithResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndActualTimeFilter()) {
    query["EndActualTimeFilter"] = request.endActualTimeFilter();
  }

  if (!!request.hasHasAnsweredFilter()) {
    query["HasAnsweredFilter"] = request.hasAnsweredFilter();
  }

  if (!!request.hasHasHangUpByRejectionFilter()) {
    query["HasHangUpByRejectionFilter"] = request.hasHangUpByRejectionFilter();
  }

  if (!!request.hasHasReachedEndOfFlowFilter()) {
    query["HasReachedEndOfFlowFilter"] = request.hasReachedEndOfFlowFilter();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobFailureReasonsFilter()) {
    query["JobFailureReasonsFilter"] = request.jobFailureReasonsFilter();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasJobStatusFilter()) {
    query["JobStatusFilter"] = request.jobStatusFilter();
  }

  if (!!request.hasLabelsJson()) {
    query["LabelsJson"] = request.labelsJson();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryText()) {
    query["QueryText"] = request.queryText();
  }

  if (!!request.hasStartActualTimeFilter()) {
    query["StartActualTimeFilter"] = request.startActualTimeFilter();
  }

  if (!!request.hasTaskStatusFilter()) {
    query["TaskStatusFilter"] = request.taskStatusFilter();
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
 * @summary 获取外呼任务结果信息
 *
 * @param request QueryJobsWithResultRequest
 * @return QueryJobsWithResultResponse
 */
QueryJobsWithResultResponse Client::queryJobsWithResult(const QueryJobsWithResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryJobsWithResultWithOptions(request, runtime);
}

/**
 * @param request QueryScriptWaveformsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryScriptWaveformsResponse
 */
QueryScriptWaveformsResponse Client::queryScriptWaveformsWithOptions(const QueryScriptWaveformsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptContent()) {
    query["ScriptContent"] = request.scriptContent();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request QueryScriptWaveformsRequest
 * @return QueryScriptWaveformsResponse
 */
QueryScriptWaveformsResponse Client::queryScriptWaveforms(const QueryScriptWaveformsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryScriptWaveformsWithOptions(request, runtime);
}

/**
 * @param request QueryScriptsByStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryScriptsByStatusResponse
 */
QueryScriptsByStatusResponse Client::queryScriptsByStatusWithOptions(const QueryScriptsByStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.statusList();
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
 * @param request QueryScriptsByStatusRequest
 * @return QueryScriptsByStatusResponse
 */
QueryScriptsByStatusResponse Client::queryScriptsByStatus(const QueryScriptsByStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryScriptsByStatusWithOptions(request, runtime);
}

/**
 * @param request RecordFailureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecordFailureResponse
 */
RecordFailureResponse Client::recordFailureWithOptions(const RecordFailureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActualTime()) {
    query["ActualTime"] = request.actualTime();
  }

  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasDispositionCode()) {
    query["DispositionCode"] = request.dispositionCode();
  }

  if (!!request.hasExceptionCodes()) {
    query["ExceptionCodes"] = request.exceptionCodes();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
 * @param request RecordFailureRequest
 * @return RecordFailureResponse
 */
RecordFailureResponse Client::recordFailure(const RecordFailureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recordFailureWithOptions(request, runtime);
}

/**
 * @param request ResumeJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeJobsResponse
 */
ResumeJobsResponse Client::resumeJobsWithOptions(const ResumeJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasJobReferenceId()) {
    query["JobReferenceId"] = request.jobReferenceId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
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
 * @param request ResumeJobsRequest
 * @return ResumeJobsResponse
 */
ResumeJobsResponse Client::resumeJobs(const ResumeJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeJobsWithOptions(request, runtime);
}

/**
 * @param request RollbackScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackScriptResponse
 */
RollbackScriptResponse Client::rollbackScriptWithOptions(const RollbackScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRollbackVersion()) {
    query["RollbackVersion"] = request.rollbackVersion();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request RollbackScriptRequest
 * @return RollbackScriptResponse
 */
RollbackScriptResponse Client::rollbackScript(const RollbackScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackScriptWithOptions(request, runtime);
}

/**
 * @summary 保存接听后延迟播报时间
 *
 * @param request SaveAfterAnswerDelayPlaybackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAfterAnswerDelayPlaybackResponse
 */
SaveAfterAnswerDelayPlaybackResponse Client::saveAfterAnswerDelayPlaybackWithOptions(const SaveAfterAnswerDelayPlaybackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterAnswerDelayPlayback()) {
    query["AfterAnswerDelayPlayback"] = request.afterAnswerDelayPlayback();
  }

  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
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
 * @summary 保存接听后延迟播报时间
 *
 * @param request SaveAfterAnswerDelayPlaybackRequest
 * @return SaveAfterAnswerDelayPlaybackResponse
 */
SaveAfterAnswerDelayPlaybackResponse Client::saveAfterAnswerDelayPlayback(const SaveAfterAnswerDelayPlaybackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAfterAnswerDelayPlaybackWithOptions(request, runtime);
}

/**
 * @param request SaveAnnotationMissionSessionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAnnotationMissionSessionListResponse
 */
SaveAnnotationMissionSessionListResponse Client::saveAnnotationMissionSessionListWithOptions(const SaveAnnotationMissionSessionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.agentId();
  }

  if (!!request.hasAgentKey()) {
    query["AgentKey"] = request.agentKey();
  }

  if (!!request.hasAnnotationMissionDataSourceType()) {
    query["AnnotationMissionDataSourceType"] = request.annotationMissionDataSourceType();
  }

  if (!!request.hasAnnotationMissionSessionList()) {
    query["AnnotationMissionSessionList"] = request.annotationMissionSessionList();
  }

  if (!!request.hasAnnotationMissionSessionListJsonString()) {
    query["AnnotationMissionSessionListJsonString"] = request.annotationMissionSessionListJsonString();
  }

  if (!!request.hasEnvironment()) {
    query["Environment"] = request.environment();
  }

  if (!!request.hasUserNick()) {
    query["UserNick"] = request.userNick();
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
 * @param request SaveAnnotationMissionSessionListRequest
 * @return SaveAnnotationMissionSessionListResponse
 */
SaveAnnotationMissionSessionListResponse Client::saveAnnotationMissionSessionList(const SaveAnnotationMissionSessionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAnnotationMissionSessionListWithOptions(request, runtime);
}

/**
 * @param request SaveAnnotationMissionTagInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAnnotationMissionTagInfoListResponse
 */
SaveAnnotationMissionTagInfoListResponse Client::saveAnnotationMissionTagInfoListWithOptions(const SaveAnnotationMissionTagInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnnotationMissionTagInfoList()) {
    query["AnnotationMissionTagInfoList"] = request.annotationMissionTagInfoList();
  }

  if (!!request.hasAnnotationMissionTagInfoListJsonString()) {
    query["AnnotationMissionTagInfoListJsonString"] = request.annotationMissionTagInfoListJsonString();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasReset()) {
    query["Reset"] = request.reset();
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
 * @param request SaveAnnotationMissionTagInfoListRequest
 * @return SaveAnnotationMissionTagInfoListResponse
 */
SaveAnnotationMissionTagInfoListResponse Client::saveAnnotationMissionTagInfoList(const SaveAnnotationMissionTagInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAnnotationMissionTagInfoListWithOptions(request, runtime);
}

/**
 * @summary 编辑基础策略有效时间窗口
 *
 * @param request SaveBaseStrategyPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveBaseStrategyPeriodResponse
 */
SaveBaseStrategyPeriodResponse Client::saveBaseStrategyPeriodWithOptions(const SaveBaseStrategyPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasOnlyWeekdays()) {
    query["OnlyWeekdays"] = request.onlyWeekdays();
  }

  if (!!request.hasOnlyWorkdays()) {
    query["OnlyWorkdays"] = request.onlyWorkdays();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
  }

  if (!!request.hasWorkingTime()) {
    query["WorkingTime"] = request.workingTime();
  }

  if (!!request.hasWorkingTimeFramesJson()) {
    query["WorkingTimeFramesJson"] = request.workingTimeFramesJson();
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
 * @summary 编辑基础策略有效时间窗口
 *
 * @param request SaveBaseStrategyPeriodRequest
 * @return SaveBaseStrategyPeriodResponse
 */
SaveBaseStrategyPeriodResponse Client::saveBaseStrategyPeriod(const SaveBaseStrategyPeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveBaseStrategyPeriodWithOptions(request, runtime);
}

/**
 * @summary 保存外呼黑名单列表
 *
 * @param request SaveContactBlockListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveContactBlockListResponse
 */
SaveContactBlockListResponse Client::saveContactBlockListWithOptions(const SaveContactBlockListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactBlockListList()) {
    query["ContactBlockListList"] = request.contactBlockListList();
  }

  if (!!request.hasContactBlockListsJson()) {
    query["ContactBlockListsJson"] = request.contactBlockListsJson();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 保存外呼黑名单列表
 *
 * @param request SaveContactBlockListRequest
 * @return SaveContactBlockListResponse
 */
SaveContactBlockListResponse Client::saveContactBlockList(const SaveContactBlockListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveContactBlockListWithOptions(request, runtime);
}

/**
 * @summary 保存外呼白名单
 *
 * @param request SaveContactWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveContactWhiteListResponse
 */
SaveContactWhiteListResponse Client::saveContactWhiteListWithOptions(const SaveContactWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactWhiteListList()) {
    query["ContactWhiteListList"] = request.contactWhiteListList();
  }

  if (!!request.hasContactWhiteListsJson()) {
    query["ContactWhiteListsJson"] = request.contactWhiteListsJson();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 保存外呼白名单
 *
 * @param request SaveContactWhiteListRequest
 * @return SaveContactWhiteListResponse
 */
SaveContactWhiteListResponse Client::saveContactWhiteList(const SaveContactWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveContactWhiteListWithOptions(request, runtime);
}

/**
 * @param request SaveEffectiveDaysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveEffectiveDaysResponse
 */
SaveEffectiveDaysResponse Client::saveEffectiveDaysWithOptions(const SaveEffectiveDaysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEffectiveDays()) {
    query["EffectiveDays"] = request.effectiveDays();
  }

  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
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
 * @param request SaveEffectiveDaysRequest
 * @return SaveEffectiveDaysResponse
 */
SaveEffectiveDaysResponse Client::saveEffectiveDays(const SaveEffectiveDaysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveEffectiveDaysWithOptions(request, runtime);
}

/**
 * @summary 保存每日最大外呼量
 *
 * @param request SaveMaxAttemptsPerDayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveMaxAttemptsPerDayResponse
 */
SaveMaxAttemptsPerDayResponse Client::saveMaxAttemptsPerDayWithOptions(const SaveMaxAttemptsPerDayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntryId()) {
    query["EntryId"] = request.entryId();
  }

  if (!!request.hasMaxAttemptsPerDay()) {
    query["MaxAttemptsPerDay"] = request.maxAttemptsPerDay();
  }

  if (!!request.hasStrategyLevel()) {
    query["StrategyLevel"] = request.strategyLevel();
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
 * @summary 保存每日最大外呼量
 *
 * @param request SaveMaxAttemptsPerDayRequest
 * @return SaveMaxAttemptsPerDayResponse
 */
SaveMaxAttemptsPerDayResponse Client::saveMaxAttemptsPerDay(const SaveMaxAttemptsPerDayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveMaxAttemptsPerDayWithOptions(request, runtime);
}

/**
 * @summary 外呼历史查询
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
 * @summary 外呼历史查询
 *
 * @param request SearchTaskRequest
 * @return SearchTaskResponse
 */
SearchTaskResponse Client::searchTask(const SearchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTaskWithOptions(request, runtime);
}

/**
 * @summary 开启一个任务
 *
 * @param request StartJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartJobResponse
 */
StartJobResponse Client::startJobWithOptions(const StartJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.callingNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasJobJson()) {
    query["JobJson"] = request.jobJson();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary 开启一个任务
 *
 * @param request StartJobRequest
 * @return StartJobResponse
 */
StartJobResponse Client::startJob(const StartJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startJobWithOptions(request, runtime);
}

/**
 * @param request SubmitBatchJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitBatchJobsResponse
 */
SubmitBatchJobsResponse Client::submitBatchJobsWithOptions(const SubmitBatchJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
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
 * @param request SubmitBatchJobsRequest
 * @return SubmitBatchJobsResponse
 */
SubmitBatchJobsResponse Client::submitBatchJobs(const SubmitBatchJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitBatchJobsWithOptions(request, runtime);
}

/**
 * @param request SubmitRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitRecordingResponse
 */
SubmitRecordingResponse Client::submitRecordingWithOptions(const SubmitRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMergedRecording()) {
    query["MergedRecording"] = request.mergedRecording();
  }

  if (!!request.hasResourceRecording()) {
    query["ResourceRecording"] = request.resourceRecording();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
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
 * @param request SubmitRecordingRequest
 * @return SubmitRecordingResponse
 */
SubmitRecordingResponse Client::submitRecording(const SubmitRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitRecordingWithOptions(request, runtime);
}

/**
 * @param request SubmitScriptReviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitScriptReviewResponse
 */
SubmitScriptReviewResponse Client::submitScriptReviewWithOptions(const SubmitScriptReviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.from();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request SubmitScriptReviewRequest
 * @return SubmitScriptReviewResponse
 */
SubmitScriptReviewResponse Client::submitScriptReview(const SubmitScriptReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitScriptReviewWithOptions(request, runtime);
}

/**
 * @summary 止呼
 *
 * @param request SuspendCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendCallResponse
 */
SuspendCallResponse Client::suspendCallWithOptions(const SuspendCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumbers()) {
    query["CalledNumbers"] = request.calledNumbers();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary 止呼
 *
 * @param request SuspendCallRequest
 * @return SuspendCallResponse
 */
SuspendCallResponse Client::suspendCall(const SuspendCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendCallWithOptions(request, runtime);
}

/**
 * @summary SuspendCallWithFile
 *
 * @param request SuspendCallWithFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendCallWithFileResponse
 */
SuspendCallWithFileResponse Client::suspendCallWithFileWithOptions(const SuspendCallWithFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilePath()) {
    query["FilePath"] = request.filePath();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @summary SuspendCallWithFile
 *
 * @param request SuspendCallWithFileRequest
 * @return SuspendCallWithFileResponse
 */
SuspendCallWithFileResponse Client::suspendCallWithFile(const SuspendCallWithFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendCallWithFileWithOptions(request, runtime);
}

/**
 * @param request SuspendJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendJobsResponse
 */
SuspendJobsResponse Client::suspendJobsWithOptions(const SuspendJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobGroupId()) {
    query["JobGroupId"] = request.jobGroupId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasJobReferenceId()) {
    query["JobReferenceId"] = request.jobReferenceId();
  }

  if (!!request.hasScenarioId()) {
    query["ScenarioId"] = request.scenarioId();
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
 * @param request SuspendJobsRequest
 * @return SuspendJobsResponse
 */
SuspendJobsResponse Client::suspendJobs(const SuspendJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendJobsWithOptions(request, runtime);
}

/**
 * @description **
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
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
 * @description **
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary TaskPreparing
 *
 * @param request TaskPreparingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskPreparingResponse
 */
TaskPreparingResponse Client::taskPreparingWithOptions(const TaskPreparingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.instanceOwnerId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
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
 * @summary TaskPreparing
 *
 * @param request TaskPreparingRequest
 * @return TaskPreparingResponse
 */
TaskPreparingResponse Client::taskPreparing(const TaskPreparingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskPreparingWithOptions(request, runtime);
}

/**
 * @param request TerminateCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateCallResponse
 */
TerminateCallResponse Client::terminateCallWithOptions(const TerminateCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
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
 * @param request TerminateCallRequest
 * @return TerminateCallResponse
 */
TerminateCallResponse Client::terminateCall(const TerminateCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return terminateCallWithOptions(request, runtime);
}

/**
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
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
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @param request UploadScriptRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadScriptRecordingResponse
 */
UploadScriptRecordingResponse Client::uploadScriptRecordingWithOptions(const UploadScriptRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @param request UploadScriptRecordingRequest
 * @return UploadScriptRecordingResponse
 */
UploadScriptRecordingResponse Client::uploadScriptRecording(const UploadScriptRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadScriptRecordingWithOptions(request, runtime);
}

/**
 * @summary WithdrawScriptReview
 *
 * @description ****
 *
 * @param request WithdrawScriptReviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawScriptReviewResponse
 */
WithdrawScriptReviewResponse Client::withdrawScriptReviewWithOptions(const WithdrawScriptReviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
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
 * @summary WithdrawScriptReview
 *
 * @description ****
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