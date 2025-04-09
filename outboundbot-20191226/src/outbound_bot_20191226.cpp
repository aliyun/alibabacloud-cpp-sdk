// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/outbound_bot_20191226.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_OutboundBot20191226;

Alibabacloud_OutboundBot20191226::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("outboundbot"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_OutboundBot20191226::Client::getEndpoint(shared_ptr<string> productId,
                                                             shared_ptr<string> regionId,
                                                             shared_ptr<string> endpointRule,
                                                             shared_ptr<string> network,
                                                             shared_ptr<string> suffix,
                                                             shared_ptr<map<string, string>> endpointMap,
                                                             shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

ApplyNumberDistrictInfoParsingResultResponse Alibabacloud_OutboundBot20191226::Client::applyNumberDistrictInfoParsingResultWithOptions(shared_ptr<ApplyNumberDistrictInfoParsingResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyNumberDistrictInfoParsingResult"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ApplyNumberDistrictInfoParsingResultResponse(callApi(params, req, runtime));
  }
  else {
    return ApplyNumberDistrictInfoParsingResultResponse(execute(params, req, runtime));
  }
}

ApplyNumberDistrictInfoParsingResultResponse Alibabacloud_OutboundBot20191226::Client::applyNumberDistrictInfoParsingResult(shared_ptr<ApplyNumberDistrictInfoParsingResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyNumberDistrictInfoParsingResultWithOptions(request, runtime);
}

AssignJobsResponse Alibabacloud_OutboundBot20191226::Client::assignJobsWithOptions(shared_ptr<AssignJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumber)) {
    query->insert(pair<string, vector<string>>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAsynchrony)) {
    query->insert(pair<string, bool>("IsAsynchrony", *request->isAsynchrony));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobDataParsingTaskId)) {
    query->insert(pair<string, string>("JobDataParsingTaskId", *request->jobDataParsingTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobsJson)) {
    query->insert(pair<string, vector<string>>("JobsJson", *request->jobsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rosterType)) {
    query->insert(pair<string, string>("RosterType", *request->rosterType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyJson)) {
    query->insert(pair<string, string>("StrategyJson", *request->strategyJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AssignJobs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AssignJobsResponse(callApi(params, req, runtime));
  }
  else {
    return AssignJobsResponse(execute(params, req, runtime));
  }
}

AssignJobsResponse Alibabacloud_OutboundBot20191226::Client::assignJobs(shared_ptr<AssignJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignJobsWithOptions(request, runtime);
}

CancelJobsResponse Alibabacloud_OutboundBot20191226::Client::cancelJobsWithOptions(shared_ptr<CancelJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobId)) {
    query->insert(pair<string, vector<string>>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobReferenceId)) {
    query->insert(pair<string, vector<string>>("JobReferenceId", *request->jobReferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelJobs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelJobsResponse(callApi(params, req, runtime));
  }
  else {
    return CancelJobsResponse(execute(params, req, runtime));
  }
}

CancelJobsResponse Alibabacloud_OutboundBot20191226::Client::cancelJobs(shared_ptr<CancelJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelJobsWithOptions(request, runtime);
}

ChangeResourceGroupResponse Alibabacloud_OutboundBot20191226::Client::changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeResourceGroup"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ChangeResourceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ChangeResourceGroupResponse(execute(params, req, runtime));
  }
}

ChangeResourceGroupResponse Alibabacloud_OutboundBot20191226::Client::changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResourceGroupWithOptions(request, runtime);
}

CreateAgentProfileResponse Alibabacloud_OutboundBot20191226::Client::createAgentProfileWithOptions(shared_ptr<CreateAgentProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentProfileTemplateId)) {
    body->insert(pair<string, string>("AgentProfileTemplateId", *request->agentProfileTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIp)) {
    body->insert(pair<string, string>("AppIp", *request->appIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faqCategoryIds)) {
    body->insert(pair<string, string>("FaqCategoryIds", *request->faqCategoryIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instructionJson)) {
    body->insert(pair<string, string>("InstructionJson", *request->instructionJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelsJson)) {
    body->insert(pair<string, string>("LabelsJson", *request->labelsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelConfig)) {
    body->insert(pair<string, string>("ModelConfig", *request->modelConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promptJson)) {
    body->insert(pair<string, string>("PromptJson", *request->promptJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("Scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    body->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variablesJson)) {
    body->insert(pair<string, string>("VariablesJson", *request->variablesJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAgentProfile"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAgentProfileResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAgentProfileResponse(execute(params, req, runtime));
  }
}

CreateAgentProfileResponse Alibabacloud_OutboundBot20191226::Client::createAgentProfile(shared_ptr<CreateAgentProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAgentProfileWithOptions(request, runtime);
}

CreateAnnotationMissionResponse Alibabacloud_OutboundBot20191226::Client::createAnnotationMissionWithOptions(shared_ptr<CreateAnnotationMissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAnnotationMissionShrinkRequest> request = make_shared<CreateAnnotationMissionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->annotationMissionDebugDataSourceList)) {
    request->annotationMissionDebugDataSourceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->annotationMissionDebugDataSourceList, make_shared<string>("AnnotationMissionDebugDataSourceList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    query->insert(pair<string, string>("AgentId", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->annotationMissionDataSourceType)) {
    query->insert(pair<string, long>("AnnotationMissionDataSourceType", *request->annotationMissionDataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionDebugDataSourceListShrink)) {
    query->insert(pair<string, string>("AnnotationMissionDebugDataSourceList", *request->annotationMissionDebugDataSourceListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionDebugDataSourceListJsonString)) {
    query->insert(pair<string, string>("AnnotationMissionDebugDataSourceListJsonString", *request->annotationMissionDebugDataSourceListJsonString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionName)) {
    query->insert(pair<string, string>("AnnotationMissionName", *request->annotationMissionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatbotId)) {
    query->insert(pair<string, string>("ChatbotId", *request->chatbotId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->conversationTimeEndFilter)) {
    query->insert(pair<string, long>("ConversationTimeEndFilter", *request->conversationTimeEndFilter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->conversationTimeStartFilter)) {
    query->insert(pair<string, long>("ConversationTimeStartFilter", *request->conversationTimeStartFilter));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->excludeOtherSession)) {
    query->insert(pair<string, bool>("ExcludeOtherSession", *request->excludeOtherSession));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->finished)) {
    query->insert(pair<string, bool>("Finished", *request->finished));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->samplingCount)) {
    query->insert(pair<string, long>("SamplingCount", *request->samplingCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->samplingRate)) {
    query->insert(pair<string, long>("SamplingRate", *request->samplingRate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->samplingType)) {
    query->insert(pair<string, long>("SamplingType", *request->samplingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->sessionEndReasonFilterList)) {
    query->insert(pair<string, vector<long>>("SessionEndReasonFilterList", *request->sessionEndReasonFilterList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionEndReasonFilterListJsonString)) {
    query->insert(pair<string, string>("SessionEndReasonFilterListJsonString", *request->sessionEndReasonFilterListJsonString));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAnnotationMission"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAnnotationMissionResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAnnotationMissionResponse(execute(params, req, runtime));
  }
}

CreateAnnotationMissionResponse Alibabacloud_OutboundBot20191226::Client::createAnnotationMission(shared_ptr<CreateAnnotationMissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAnnotationMissionWithOptions(request, runtime);
}

CreateBatchJobsResponse Alibabacloud_OutboundBot20191226::Client::createBatchJobsWithOptions(shared_ptr<CreateBatchJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchJobDescription)) {
    query->insert(pair<string, string>("BatchJobDescription", *request->batchJobDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->batchJobName)) {
    query->insert(pair<string, string>("BatchJobName", *request->batchJobName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumber)) {
    query->insert(pair<string, vector<string>>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobFilePath)) {
    query->insert(pair<string, string>("JobFilePath", *request->jobFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyJson)) {
    query->insert(pair<string, string>("StrategyJson", *request->strategyJson));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->submitted)) {
    query->insert(pair<string, bool>("Submitted", *request->submitted));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBatchJobs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateBatchJobsResponse(callApi(params, req, runtime));
  }
  else {
    return CreateBatchJobsResponse(execute(params, req, runtime));
  }
}

CreateBatchJobsResponse Alibabacloud_OutboundBot20191226::Client::createBatchJobs(shared_ptr<CreateBatchJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBatchJobsWithOptions(request, runtime);
}

CreateBatchRepeatJobResponse Alibabacloud_OutboundBot20191226::Client::createBatchRepeatJobWithOptions(shared_ptr<CreateBatchRepeatJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumber)) {
    query->insert(pair<string, vector<string>>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterStatus)) {
    query->insert(pair<string, string>("FilterStatus", *request->filterStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flashSmsExtras)) {
    query->insert(pair<string, string>("FlashSmsExtras", *request->flashSmsExtras));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minConcurrency)) {
    query->insert(pair<string, long>("MinConcurrency", *request->minConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    query->insert(pair<string, string>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->recallCallingNumber)) {
    query->insert(pair<string, vector<string>>("RecallCallingNumber", *request->recallCallingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recallStrategyJson)) {
    query->insert(pair<string, string>("RecallStrategyJson", *request->recallStrategyJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ringingDuration)) {
    query->insert(pair<string, long>("RingingDuration", *request->ringingDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceGroupId)) {
    query->insert(pair<string, string>("SourceGroupId", *request->sourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyJson)) {
    query->insert(pair<string, string>("StrategyJson", *request->strategyJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBatchRepeatJob"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateBatchRepeatJobResponse(callApi(params, req, runtime));
  }
  else {
    return CreateBatchRepeatJobResponse(execute(params, req, runtime));
  }
}

CreateBatchRepeatJobResponse Alibabacloud_OutboundBot20191226::Client::createBatchRepeatJob(shared_ptr<CreateBatchRepeatJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBatchRepeatJobWithOptions(request, runtime);
}

CreateDialogueFlowResponse Alibabacloud_OutboundBot20191226::Client::createDialogueFlowWithOptions(shared_ptr<CreateDialogueFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogueFlowType)) {
    query->insert(pair<string, string>("DialogueFlowType", *request->dialogueFlowType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogueName)) {
    query->insert(pair<string, string>("DialogueName", *request->dialogueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDialogueFlow"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateDialogueFlowResponse(callApi(params, req, runtime));
  }
  else {
    return CreateDialogueFlowResponse(execute(params, req, runtime));
  }
}

CreateDialogueFlowResponse Alibabacloud_OutboundBot20191226::Client::createDialogueFlow(shared_ptr<CreateDialogueFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDialogueFlowWithOptions(request, runtime);
}

CreateDownloadUrlResponse Alibabacloud_OutboundBot20191226::Client::createDownloadUrlWithOptions(shared_ptr<CreateDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDownloadUrl"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateDownloadUrlResponse(callApi(params, req, runtime));
  }
  else {
    return CreateDownloadUrlResponse(execute(params, req, runtime));
  }
}

CreateDownloadUrlResponse Alibabacloud_OutboundBot20191226::Client::createDownloadUrl(shared_ptr<CreateDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDownloadUrlWithOptions(request, runtime);
}

CreateGlobalQuestionResponse Alibabacloud_OutboundBot20191226::Client::createGlobalQuestionWithOptions(shared_ptr<CreateGlobalQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->answers)) {
    query->insert(pair<string, string>("Answers", *request->answers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalQuestionName)) {
    query->insert(pair<string, string>("GlobalQuestionName", *request->globalQuestionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalQuestionType)) {
    query->insert(pair<string, string>("GlobalQuestionType", *request->globalQuestionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->questions)) {
    query->insert(pair<string, string>("Questions", *request->questions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGlobalQuestion"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateGlobalQuestionResponse(callApi(params, req, runtime));
  }
  else {
    return CreateGlobalQuestionResponse(execute(params, req, runtime));
  }
}

CreateGlobalQuestionResponse Alibabacloud_OutboundBot20191226::Client::createGlobalQuestion(shared_ptr<CreateGlobalQuestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGlobalQuestionWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_OutboundBot20191226::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumber)) {
    query->insert(pair<string, vector<string>>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceDescription)) {
    query->insert(pair<string, string>("InstanceDescription", *request->instanceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxConcurrentConversation)) {
    query->insert(pair<string, long>("MaxConcurrentConversation", *request->maxConcurrentConversation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nluServiceType)) {
    query->insert(pair<string, string>("NluServiceType", *request->nluServiceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateInstanceResponse(execute(params, req, runtime));
  }
}

CreateInstanceResponse Alibabacloud_OutboundBot20191226::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateInstanceBindNumberResponse Alibabacloud_OutboundBot20191226::Client::createInstanceBindNumberWithOptions(shared_ptr<CreateInstanceBindNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceList)) {
    query->insert(pair<string, string>("InstanceList", *request->instanceList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    query->insert(pair<string, string>("Number", *request->number));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstanceBindNumber"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateInstanceBindNumberResponse(callApi(params, req, runtime));
  }
  else {
    return CreateInstanceBindNumberResponse(execute(params, req, runtime));
  }
}

CreateInstanceBindNumberResponse Alibabacloud_OutboundBot20191226::Client::createInstanceBindNumber(shared_ptr<CreateInstanceBindNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceBindNumberWithOptions(request, runtime);
}

CreateIntentResponse Alibabacloud_OutboundBot20191226::Client::createIntentWithOptions(shared_ptr<CreateIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentDescription)) {
    query->insert(pair<string, string>("IntentDescription", *request->intentDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentName)) {
    query->insert(pair<string, string>("IntentName", *request->intentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    query->insert(pair<string, string>("Keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utterances)) {
    query->insert(pair<string, string>("Utterances", *request->utterances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateIntent"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateIntentResponse(callApi(params, req, runtime));
  }
  else {
    return CreateIntentResponse(execute(params, req, runtime));
  }
}

CreateIntentResponse Alibabacloud_OutboundBot20191226::Client::createIntent(shared_ptr<CreateIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createIntentWithOptions(request, runtime);
}

CreateJobDataParsingTaskResponse Alibabacloud_OutboundBot20191226::Client::createJobDataParsingTaskWithOptions(shared_ptr<CreateJobDataParsingTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobFilePath)) {
    query->insert(pair<string, string>("JobFilePath", *request->jobFilePath));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJobDataParsingTask"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateJobDataParsingTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateJobDataParsingTaskResponse(execute(params, req, runtime));
  }
}

CreateJobDataParsingTaskResponse Alibabacloud_OutboundBot20191226::Client::createJobDataParsingTask(shared_ptr<CreateJobDataParsingTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobDataParsingTaskWithOptions(request, runtime);
}

CreateJobGroupResponse Alibabacloud_OutboundBot20191226::Client::createJobGroupWithOptions(shared_ptr<CreateJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumber)) {
    query->insert(pair<string, vector<string>>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flashSmsExtras)) {
    query->insert(pair<string, string>("FlashSmsExtras", *request->flashSmsExtras));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupDescription)) {
    query->insert(pair<string, string>("JobGroupDescription", *request->jobGroupDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupName)) {
    query->insert(pair<string, string>("JobGroupName", *request->jobGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minConcurrency)) {
    query->insert(pair<string, long>("MinConcurrency", *request->minConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    query->insert(pair<string, string>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->recallCallingNumber)) {
    query->insert(pair<string, vector<string>>("RecallCallingNumber", *request->recallCallingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recallStrategyJson)) {
    query->insert(pair<string, string>("RecallStrategyJson", *request->recallStrategyJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ringingDuration)) {
    query->insert(pair<string, long>("RingingDuration", *request->ringingDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyJson)) {
    query->insert(pair<string, string>("StrategyJson", *request->strategyJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJobGroup"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateJobGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateJobGroupResponse(execute(params, req, runtime));
  }
}

CreateJobGroupResponse Alibabacloud_OutboundBot20191226::Client::createJobGroup(shared_ptr<CreateJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobGroupWithOptions(request, runtime);
}

CreateJobGroupExportTaskResponse Alibabacloud_OutboundBot20191226::Client::createJobGroupExportTaskWithOptions(shared_ptr<CreateJobGroupExportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->option)) {
    query->insert(pair<string, vector<string>>("Option", *request->option));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJobGroupExportTask"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateJobGroupExportTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateJobGroupExportTaskResponse(execute(params, req, runtime));
  }
}

CreateJobGroupExportTaskResponse Alibabacloud_OutboundBot20191226::Client::createJobGroupExportTask(shared_ptr<CreateJobGroupExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobGroupExportTaskWithOptions(request, runtime);
}

CreateNumberDistrictInfoDownloadUrlResponse Alibabacloud_OutboundBot20191226::Client::createNumberDistrictInfoDownloadUrlWithOptions(shared_ptr<CreateNumberDistrictInfoDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNumberDistrictInfoDownloadUrl"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateNumberDistrictInfoDownloadUrlResponse(callApi(params, req, runtime));
  }
  else {
    return CreateNumberDistrictInfoDownloadUrlResponse(execute(params, req, runtime));
  }
}

CreateNumberDistrictInfoDownloadUrlResponse Alibabacloud_OutboundBot20191226::Client::createNumberDistrictInfoDownloadUrl(shared_ptr<CreateNumberDistrictInfoDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNumberDistrictInfoDownloadUrlWithOptions(request, runtime);
}

CreateNumberDistrictInfoParsingTaskResponse Alibabacloud_OutboundBot20191226::Client::createNumberDistrictInfoParsingTaskWithOptions(shared_ptr<CreateNumberDistrictInfoParsingTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileSize)) {
    query->insert(pair<string, long>("FileSize", *request->fileSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNumberDistrictInfoParsingTask"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateNumberDistrictInfoParsingTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateNumberDistrictInfoParsingTaskResponse(execute(params, req, runtime));
  }
}

CreateNumberDistrictInfoParsingTaskResponse Alibabacloud_OutboundBot20191226::Client::createNumberDistrictInfoParsingTask(shared_ptr<CreateNumberDistrictInfoParsingTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNumberDistrictInfoParsingTaskWithOptions(request, runtime);
}

CreateOutboundCallNumberResponse Alibabacloud_OutboundBot20191226::Client::createOutboundCallNumberWithOptions(shared_ptr<CreateOutboundCallNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    query->insert(pair<string, string>("Number", *request->number));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rateLimitCount)) {
    query->insert(pair<string, long>("RateLimitCount", *request->rateLimitCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rateLimitPeriod)) {
    query->insert(pair<string, long>("RateLimitPeriod", *request->rateLimitPeriod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOutboundCallNumber"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateOutboundCallNumberResponse(callApi(params, req, runtime));
  }
  else {
    return CreateOutboundCallNumberResponse(execute(params, req, runtime));
  }
}

CreateOutboundCallNumberResponse Alibabacloud_OutboundBot20191226::Client::createOutboundCallNumber(shared_ptr<CreateOutboundCallNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOutboundCallNumberWithOptions(request, runtime);
}

CreateScriptResponse Alibabacloud_OutboundBot20191226::Client::createScriptWithOptions(shared_ptr<CreateScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->agentId)) {
    query->insert(pair<string, long>("AgentId", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->agentLlm)) {
    query->insert(pair<string, bool>("AgentLlm", *request->agentLlm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrConfig)) {
    query->insert(pair<string, string>("AsrConfig", *request->asrConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatbotId)) {
    query->insert(pair<string, string>("ChatbotId", *request->chatbotId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->emotionEnable)) {
    query->insert(pair<string, bool>("EmotionEnable", *request->emotionEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->industry)) {
    query->insert(pair<string, string>("Industry", *request->industry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->longWaitEnable)) {
    query->insert(pair<string, bool>("LongWaitEnable", *request->longWaitEnable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->miniPlaybackEnable)) {
    query->insert(pair<string, bool>("MiniPlaybackEnable", *request->miniPlaybackEnable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->newBargeInEnable)) {
    query->insert(pair<string, bool>("NewBargeInEnable", *request->newBargeInEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nluAccessType)) {
    query->insert(pair<string, string>("NluAccessType", *request->nluAccessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nluEngine)) {
    query->insert(pair<string, string>("NluEngine", *request->nluEngine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scriptContent)) {
    query->insert(pair<string, vector<string>>("ScriptContent", *request->scriptContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptDescription)) {
    query->insert(pair<string, string>("ScriptDescription", *request->scriptDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptName)) {
    query->insert(pair<string, string>("ScriptName", *request->scriptName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scriptWaveform)) {
    query->insert(pair<string, vector<string>>("ScriptWaveform", *request->scriptWaveform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsConfig)) {
    query->insert(pair<string, string>("TtsConfig", *request->ttsConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScript"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateScriptResponse(callApi(params, req, runtime));
  }
  else {
    return CreateScriptResponse(execute(params, req, runtime));
  }
}

CreateScriptResponse Alibabacloud_OutboundBot20191226::Client::createScript(shared_ptr<CreateScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScriptWithOptions(request, runtime);
}

CreateScriptWaveformResponse Alibabacloud_OutboundBot20191226::Client::createScriptWaveformWithOptions(shared_ptr<CreateScriptWaveformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptContent)) {
    query->insert(pair<string, string>("ScriptContent", *request->scriptContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScriptWaveform"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateScriptWaveformResponse(callApi(params, req, runtime));
  }
  else {
    return CreateScriptWaveformResponse(execute(params, req, runtime));
  }
}

CreateScriptWaveformResponse Alibabacloud_OutboundBot20191226::Client::createScriptWaveform(shared_ptr<CreateScriptWaveformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScriptWaveformWithOptions(request, runtime);
}

CreateTagResponse Alibabacloud_OutboundBot20191226::Client::createTagWithOptions(shared_ptr<CreateTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagGroup)) {
    query->insert(pair<string, string>("TagGroup", *request->tagGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTag"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateTagResponse(callApi(params, req, runtime));
  }
  else {
    return CreateTagResponse(execute(params, req, runtime));
  }
}

CreateTagResponse Alibabacloud_OutboundBot20191226::Client::createTag(shared_ptr<CreateTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTagWithOptions(request, runtime);
}

CreateTaskExportTaskResponse Alibabacloud_OutboundBot20191226::Client::createTaskExportTaskWithOptions(shared_ptr<CreateTaskExportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTaskExportTask"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateTaskExportTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateTaskExportTaskResponse(execute(params, req, runtime));
  }
}

CreateTaskExportTaskResponse Alibabacloud_OutboundBot20191226::Client::createTaskExportTask(shared_ptr<CreateTaskExportTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTaskExportTaskWithOptions(request, runtime);
}

DeleteAgentProfilesResponse Alibabacloud_OutboundBot20191226::Client::deleteAgentProfilesWithOptions(shared_ptr<DeleteAgentProfilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteAgentProfilesShrinkRequest> request = make_shared<DeleteAgentProfilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->agentProfileIds)) {
    request->agentProfileIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentProfileIds, make_shared<string>("AgentProfileIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentProfileIdsShrink)) {
    body->insert(pair<string, string>("AgentProfileIds", *request->agentProfileIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIp)) {
    body->insert(pair<string, string>("AppIp", *request->appIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAgentProfiles"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAgentProfilesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAgentProfilesResponse(execute(params, req, runtime));
  }
}

DeleteAgentProfilesResponse Alibabacloud_OutboundBot20191226::Client::deleteAgentProfiles(shared_ptr<DeleteAgentProfilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAgentProfilesWithOptions(request, runtime);
}

DeleteAllNumberDistrictInfoResponse Alibabacloud_OutboundBot20191226::Client::deleteAllNumberDistrictInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAllNumberDistrictInfo"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAllNumberDistrictInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAllNumberDistrictInfoResponse(execute(params, req, runtime));
  }
}

DeleteAllNumberDistrictInfoResponse Alibabacloud_OutboundBot20191226::Client::deleteAllNumberDistrictInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAllNumberDistrictInfoWithOptions(runtime);
}

DeleteContactBlockListResponse Alibabacloud_OutboundBot20191226::Client::deleteContactBlockListWithOptions(shared_ptr<DeleteContactBlockListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactBlockListId)) {
    query->insert(pair<string, string>("ContactBlockListId", *request->contactBlockListId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    query->insert(pair<string, string>("Operator_", *request->operator_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteContactBlockList"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteContactBlockListResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteContactBlockListResponse(execute(params, req, runtime));
  }
}

DeleteContactBlockListResponse Alibabacloud_OutboundBot20191226::Client::deleteContactBlockList(shared_ptr<DeleteContactBlockListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteContactBlockListWithOptions(request, runtime);
}

DeleteContactWhiteListResponse Alibabacloud_OutboundBot20191226::Client::deleteContactWhiteListWithOptions(shared_ptr<DeleteContactWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactWhiteListId)) {
    query->insert(pair<string, string>("ContactWhiteListId", *request->contactWhiteListId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operator_)) {
    query->insert(pair<string, string>("Operator_", *request->operator_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteContactWhiteList"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteContactWhiteListResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteContactWhiteListResponse(execute(params, req, runtime));
  }
}

DeleteContactWhiteListResponse Alibabacloud_OutboundBot20191226::Client::deleteContactWhiteList(shared_ptr<DeleteContactWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteContactWhiteListWithOptions(request, runtime);
}

DeleteDialogueFlowResponse Alibabacloud_OutboundBot20191226::Client::deleteDialogueFlowWithOptions(shared_ptr<DeleteDialogueFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogueFlowId)) {
    query->insert(pair<string, string>("DialogueFlowId", *request->dialogueFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDialogueFlow"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteDialogueFlowResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteDialogueFlowResponse(execute(params, req, runtime));
  }
}

DeleteDialogueFlowResponse Alibabacloud_OutboundBot20191226::Client::deleteDialogueFlow(shared_ptr<DeleteDialogueFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDialogueFlowWithOptions(request, runtime);
}

DeleteGlobalQuestionResponse Alibabacloud_OutboundBot20191226::Client::deleteGlobalQuestionWithOptions(shared_ptr<DeleteGlobalQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->globalQuestionId)) {
    query->insert(pair<string, string>("GlobalQuestionId", *request->globalQuestionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGlobalQuestion"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteGlobalQuestionResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteGlobalQuestionResponse(execute(params, req, runtime));
  }
}

DeleteGlobalQuestionResponse Alibabacloud_OutboundBot20191226::Client::deleteGlobalQuestion(shared_ptr<DeleteGlobalQuestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGlobalQuestionWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_OutboundBot20191226::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteInstanceResponse(execute(params, req, runtime));
  }
}

DeleteInstanceResponse Alibabacloud_OutboundBot20191226::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteIntentResponse Alibabacloud_OutboundBot20191226::Client::deleteIntentWithOptions(shared_ptr<DeleteIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentId)) {
    query->insert(pair<string, string>("IntentId", *request->intentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteIntent"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteIntentResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteIntentResponse(execute(params, req, runtime));
  }
}

DeleteIntentResponse Alibabacloud_OutboundBot20191226::Client::deleteIntent(shared_ptr<DeleteIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteIntentWithOptions(request, runtime);
}

DeleteJobGroupResponse Alibabacloud_OutboundBot20191226::Client::deleteJobGroupWithOptions(shared_ptr<DeleteJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteJobGroup"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteJobGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteJobGroupResponse(execute(params, req, runtime));
  }
}

DeleteJobGroupResponse Alibabacloud_OutboundBot20191226::Client::deleteJobGroup(shared_ptr<DeleteJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteJobGroupWithOptions(request, runtime);
}

DeleteOutboundCallNumberResponse Alibabacloud_OutboundBot20191226::Client::deleteOutboundCallNumberWithOptions(shared_ptr<DeleteOutboundCallNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundCallNumberId)) {
    query->insert(pair<string, string>("OutboundCallNumberId", *request->outboundCallNumberId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOutboundCallNumber"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteOutboundCallNumberResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteOutboundCallNumberResponse(execute(params, req, runtime));
  }
}

DeleteOutboundCallNumberResponse Alibabacloud_OutboundBot20191226::Client::deleteOutboundCallNumber(shared_ptr<DeleteOutboundCallNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOutboundCallNumberWithOptions(request, runtime);
}

DeleteScriptResponse Alibabacloud_OutboundBot20191226::Client::deleteScriptWithOptions(shared_ptr<DeleteScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScript"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteScriptResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteScriptResponse(execute(params, req, runtime));
  }
}

DeleteScriptResponse Alibabacloud_OutboundBot20191226::Client::deleteScript(shared_ptr<DeleteScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScriptWithOptions(request, runtime);
}

DeleteScriptRecordingResponse Alibabacloud_OutboundBot20191226::Client::deleteScriptRecordingWithOptions(shared_ptr<DeleteScriptRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuidsJson)) {
    query->insert(pair<string, string>("UuidsJson", *request->uuidsJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScriptRecording"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteScriptRecordingResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteScriptRecordingResponse(execute(params, req, runtime));
  }
}

DeleteScriptRecordingResponse Alibabacloud_OutboundBot20191226::Client::deleteScriptRecording(shared_ptr<DeleteScriptRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScriptRecordingWithOptions(request, runtime);
}

DeleteScriptWaveformResponse Alibabacloud_OutboundBot20191226::Client::deleteScriptWaveformWithOptions(shared_ptr<DeleteScriptWaveformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptWaveformId)) {
    query->insert(pair<string, string>("ScriptWaveformId", *request->scriptWaveformId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScriptWaveform"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteScriptWaveformResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteScriptWaveformResponse(execute(params, req, runtime));
  }
}

DeleteScriptWaveformResponse Alibabacloud_OutboundBot20191226::Client::deleteScriptWaveform(shared_ptr<DeleteScriptWaveformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScriptWaveformWithOptions(request, runtime);
}

DescribeDialogueNodeStatisticsResponse Alibabacloud_OutboundBot20191226::Client::describeDialogueNodeStatisticsWithOptions(shared_ptr<DescribeDialogueNodeStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDialogueNodeStatistics"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDialogueNodeStatisticsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDialogueNodeStatisticsResponse(execute(params, req, runtime));
  }
}

DescribeDialogueNodeStatisticsResponse Alibabacloud_OutboundBot20191226::Client::describeDialogueNodeStatistics(shared_ptr<DescribeDialogueNodeStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDialogueNodeStatisticsWithOptions(request, runtime);
}

DescribeDsReportsResponse Alibabacloud_OutboundBot20191226::Client::describeDsReportsWithOptions(shared_ptr<DescribeDsReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDsReports"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDsReportsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDsReportsResponse(execute(params, req, runtime));
  }
}

DescribeDsReportsResponse Alibabacloud_OutboundBot20191226::Client::describeDsReports(shared_ptr<DescribeDsReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDsReportsWithOptions(request, runtime);
}

DescribeGlobalQuestionResponse Alibabacloud_OutboundBot20191226::Client::describeGlobalQuestionWithOptions(shared_ptr<DescribeGlobalQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->globalQuestionId)) {
    query->insert(pair<string, string>("GlobalQuestionId", *request->globalQuestionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGlobalQuestion"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeGlobalQuestionResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeGlobalQuestionResponse(execute(params, req, runtime));
  }
}

DescribeGlobalQuestionResponse Alibabacloud_OutboundBot20191226::Client::describeGlobalQuestion(shared_ptr<DescribeGlobalQuestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGlobalQuestionWithOptions(request, runtime);
}

DescribeGroupExecutingInfoResponse Alibabacloud_OutboundBot20191226::Client::describeGroupExecutingInfoWithOptions(shared_ptr<DescribeGroupExecutingInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGroupExecutingInfo"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeGroupExecutingInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeGroupExecutingInfoResponse(execute(params, req, runtime));
  }
}

DescribeGroupExecutingInfoResponse Alibabacloud_OutboundBot20191226::Client::describeGroupExecutingInfo(shared_ptr<DescribeGroupExecutingInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGroupExecutingInfoWithOptions(request, runtime);
}

DescribeInstanceResponse Alibabacloud_OutboundBot20191226::Client::describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstance"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceResponse(execute(params, req, runtime));
  }
}

DescribeInstanceResponse Alibabacloud_OutboundBot20191226::Client::describeInstance(shared_ptr<DescribeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceWithOptions(request, runtime);
}

DescribeIntentResponse Alibabacloud_OutboundBot20191226::Client::describeIntentWithOptions(shared_ptr<DescribeIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentId)) {
    query->insert(pair<string, string>("IntentId", *request->intentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIntent"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeIntentResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeIntentResponse(execute(params, req, runtime));
  }
}

DescribeIntentResponse Alibabacloud_OutboundBot20191226::Client::describeIntent(shared_ptr<DescribeIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIntentWithOptions(request, runtime);
}

DescribeIntentStatisticsResponse Alibabacloud_OutboundBot20191226::Client::describeIntentStatisticsWithOptions(shared_ptr<DescribeIntentStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIntentStatistics"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeIntentStatisticsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeIntentStatisticsResponse(execute(params, req, runtime));
  }
}

DescribeIntentStatisticsResponse Alibabacloud_OutboundBot20191226::Client::describeIntentStatistics(shared_ptr<DescribeIntentStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIntentStatisticsWithOptions(request, runtime);
}

DescribeJobResponse Alibabacloud_OutboundBot20191226::Client::describeJobWithOptions(shared_ptr<DescribeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withScript)) {
    query->insert(pair<string, bool>("WithScript", *request->withScript));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJob"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeJobResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeJobResponse(execute(params, req, runtime));
  }
}

DescribeJobResponse Alibabacloud_OutboundBot20191226::Client::describeJob(shared_ptr<DescribeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobWithOptions(request, runtime);
}

DescribeJobDataParsingTaskProgressResponse Alibabacloud_OutboundBot20191226::Client::describeJobDataParsingTaskProgressWithOptions(shared_ptr<DescribeJobDataParsingTaskProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobDataParsingTaskId)) {
    query->insert(pair<string, string>("JobDataParsingTaskId", *request->jobDataParsingTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobDataParsingTaskProgress"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeJobDataParsingTaskProgressResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeJobDataParsingTaskProgressResponse(execute(params, req, runtime));
  }
}

DescribeJobDataParsingTaskProgressResponse Alibabacloud_OutboundBot20191226::Client::describeJobDataParsingTaskProgress(shared_ptr<DescribeJobDataParsingTaskProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobDataParsingTaskProgressWithOptions(request, runtime);
}

DescribeJobGroupResponse Alibabacloud_OutboundBot20191226::Client::describeJobGroupWithOptions(shared_ptr<DescribeJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->briefTypes)) {
    query->insert(pair<string, vector<string>>("BriefTypes", *request->briefTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobGroup"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeJobGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeJobGroupResponse(execute(params, req, runtime));
  }
}

DescribeJobGroupResponse Alibabacloud_OutboundBot20191226::Client::describeJobGroup(shared_ptr<DescribeJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobGroupWithOptions(request, runtime);
}

DescribeJobGroupExportTaskProgressResponse Alibabacloud_OutboundBot20191226::Client::describeJobGroupExportTaskProgressWithOptions(shared_ptr<DescribeJobGroupExportTaskProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobGroupExportTaskProgress"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeJobGroupExportTaskProgressResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeJobGroupExportTaskProgressResponse(execute(params, req, runtime));
  }
}

DescribeJobGroupExportTaskProgressResponse Alibabacloud_OutboundBot20191226::Client::describeJobGroupExportTaskProgress(shared_ptr<DescribeJobGroupExportTaskProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobGroupExportTaskProgressWithOptions(request, runtime);
}

DescribeNumberDistrictInfoStatusResponse Alibabacloud_OutboundBot20191226::Client::describeNumberDistrictInfoStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNumberDistrictInfoStatus"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNumberDistrictInfoStatusResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNumberDistrictInfoStatusResponse(execute(params, req, runtime));
  }
}

DescribeNumberDistrictInfoStatusResponse Alibabacloud_OutboundBot20191226::Client::describeNumberDistrictInfoStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNumberDistrictInfoStatusWithOptions(runtime);
}

DescribeScriptResponse Alibabacloud_OutboundBot20191226::Client::describeScriptWithOptions(shared_ptr<DescribeScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScript"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScriptResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScriptResponse(execute(params, req, runtime));
  }
}

DescribeScriptResponse Alibabacloud_OutboundBot20191226::Client::describeScript(shared_ptr<DescribeScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScriptWithOptions(request, runtime);
}

DescribeScriptVoiceConfigResponse Alibabacloud_OutboundBot20191226::Client::describeScriptVoiceConfigWithOptions(shared_ptr<DescribeScriptVoiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptVoiceConfigId)) {
    query->insert(pair<string, string>("ScriptVoiceConfigId", *request->scriptVoiceConfigId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScriptVoiceConfig"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeScriptVoiceConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeScriptVoiceConfigResponse(execute(params, req, runtime));
  }
}

DescribeScriptVoiceConfigResponse Alibabacloud_OutboundBot20191226::Client::describeScriptVoiceConfig(shared_ptr<DescribeScriptVoiceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScriptVoiceConfigWithOptions(request, runtime);
}

DescribeTTSConfigResponse Alibabacloud_OutboundBot20191226::Client::describeTTSConfigWithOptions(shared_ptr<DescribeTTSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTTSConfig"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeTTSConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeTTSConfigResponse(execute(params, req, runtime));
  }
}

DescribeTTSConfigResponse Alibabacloud_OutboundBot20191226::Client::describeTTSConfig(shared_ptr<DescribeTTSConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTTSConfigWithOptions(request, runtime);
}

DescribeTTSDemoResponse Alibabacloud_OutboundBot20191226::Client::describeTTSDemoWithOptions(shared_ptr<DescribeTTSDemoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessKey)) {
    query->insert(pair<string, string>("AccessKey", *request->accessKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliCustomizedVoice)) {
    query->insert(pair<string, string>("AliCustomizedVoice", *request->aliCustomizedVoice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->engine)) {
    query->insert(pair<string, string>("Engine", *request->engine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nlsServiceType)) {
    query->insert(pair<string, string>("NlsServiceType", *request->nlsServiceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pitchRate)) {
    query->insert(pair<string, long>("PitchRate", *request->pitchRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretKey)) {
    query->insert(pair<string, string>("SecretKey", *request->secretKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speechRate)) {
    query->insert(pair<string, long>("SpeechRate", *request->speechRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voice)) {
    query->insert(pair<string, string>("Voice", *request->voice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    query->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTTSDemo"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeTTSDemoResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeTTSDemoResponse(execute(params, req, runtime));
  }
}

DescribeTTSDemoResponse Alibabacloud_OutboundBot20191226::Client::describeTTSDemo(shared_ptr<DescribeTTSDemoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTTSDemoWithOptions(request, runtime);
}

DescribeTagHitsSummaryResponse Alibabacloud_OutboundBot20191226::Client::describeTagHitsSummaryWithOptions(shared_ptr<DescribeTagHitsSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagHitsSummary"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeTagHitsSummaryResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeTagHitsSummaryResponse(execute(params, req, runtime));
  }
}

DescribeTagHitsSummaryResponse Alibabacloud_OutboundBot20191226::Client::describeTagHitsSummary(shared_ptr<DescribeTagHitsSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagHitsSummaryWithOptions(request, runtime);
}

DescribeTenantBindNumberResponse Alibabacloud_OutboundBot20191226::Client::describeTenantBindNumberWithOptions(shared_ptr<DescribeTenantBindNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    query->insert(pair<string, string>("Number", *request->number));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTenantBindNumber"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeTenantBindNumberResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeTenantBindNumberResponse(execute(params, req, runtime));
  }
}

DescribeTenantBindNumberResponse Alibabacloud_OutboundBot20191226::Client::describeTenantBindNumber(shared_ptr<DescribeTenantBindNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTenantBindNumberWithOptions(request, runtime);
}

DialogueResponse Alibabacloud_OutboundBot20191226::Client::dialogueWithOptions(shared_ptr<DialogueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionKey)) {
    query->insert(pair<string, string>("ActionKey", *request->actionKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->actionParams)) {
    query->insert(pair<string, string>("ActionParams", *request->actionParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callType)) {
    query->insert(pair<string, string>("CallType", *request->callType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callingNumber)) {
    query->insert(pair<string, string>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utterance)) {
    query->insert(pair<string, string>("Utterance", *request->utterance));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Dialogue"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DialogueResponse(callApi(params, req, runtime));
  }
  else {
    return DialogueResponse(execute(params, req, runtime));
  }
}

DialogueResponse Alibabacloud_OutboundBot20191226::Client::dialogue(shared_ptr<DialogueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dialogueWithOptions(request, runtime);
}

DismissNumberDistrictInfoParsingResultResponse Alibabacloud_OutboundBot20191226::Client::dismissNumberDistrictInfoParsingResultWithOptions(shared_ptr<DismissNumberDistrictInfoParsingResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DismissNumberDistrictInfoParsingResult"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DismissNumberDistrictInfoParsingResultResponse(callApi(params, req, runtime));
  }
  else {
    return DismissNumberDistrictInfoParsingResultResponse(execute(params, req, runtime));
  }
}

DismissNumberDistrictInfoParsingResultResponse Alibabacloud_OutboundBot20191226::Client::dismissNumberDistrictInfoParsingResult(shared_ptr<DismissNumberDistrictInfoParsingResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dismissNumberDistrictInfoParsingResultWithOptions(request, runtime);
}

DownloadRecordingResponse Alibabacloud_OutboundBot20191226::Client::downloadRecordingWithOptions(shared_ptr<DownloadRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needVoiceSliceRecording)) {
    query->insert(pair<string, bool>("NeedVoiceSliceRecording", *request->needVoiceSliceRecording));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadRecording"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DownloadRecordingResponse(callApi(params, req, runtime));
  }
  else {
    return DownloadRecordingResponse(execute(params, req, runtime));
  }
}

DownloadRecordingResponse Alibabacloud_OutboundBot20191226::Client::downloadRecording(shared_ptr<DownloadRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadRecordingWithOptions(request, runtime);
}

DownloadScriptRecordingResponse Alibabacloud_OutboundBot20191226::Client::downloadScriptRecordingWithOptions(shared_ptr<DownloadScriptRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    query->insert(pair<string, string>("Uuid", *request->uuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadScriptRecording"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DownloadScriptRecordingResponse(callApi(params, req, runtime));
  }
  else {
    return DownloadScriptRecordingResponse(execute(params, req, runtime));
  }
}

DownloadScriptRecordingResponse Alibabacloud_OutboundBot20191226::Client::downloadScriptRecording(shared_ptr<DownloadScriptRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadScriptRecordingWithOptions(request, runtime);
}

DuplicateScriptResponse Alibabacloud_OutboundBot20191226::Client::duplicateScriptWithOptions(shared_ptr<DuplicateScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceScriptId)) {
    query->insert(pair<string, string>("SourceScriptId", *request->sourceScriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DuplicateScript"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DuplicateScriptResponse(callApi(params, req, runtime));
  }
  else {
    return DuplicateScriptResponse(execute(params, req, runtime));
  }
}

DuplicateScriptResponse Alibabacloud_OutboundBot20191226::Client::duplicateScript(shared_ptr<DuplicateScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return duplicateScriptWithOptions(request, runtime);
}

ExportScriptResponse Alibabacloud_OutboundBot20191226::Client::exportScriptWithOptions(shared_ptr<ExportScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportScript"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportScriptResponse(callApi(params, req, runtime));
  }
  else {
    return ExportScriptResponse(execute(params, req, runtime));
  }
}

ExportScriptResponse Alibabacloud_OutboundBot20191226::Client::exportScript(shared_ptr<ExportScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportScriptWithOptions(request, runtime);
}

GenerateUploadUrlResponse Alibabacloud_OutboundBot20191226::Client::generateUploadUrlWithOptions(shared_ptr<GenerateUploadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateUploadUrl"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GenerateUploadUrlResponse(callApi(params, req, runtime));
  }
  else {
    return GenerateUploadUrlResponse(execute(params, req, runtime));
  }
}

GenerateUploadUrlResponse Alibabacloud_OutboundBot20191226::Client::generateUploadUrl(shared_ptr<GenerateUploadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateUploadUrlWithOptions(request, runtime);
}

GetAfterAnswerDelayPlaybackResponse Alibabacloud_OutboundBot20191226::Client::getAfterAnswerDelayPlaybackWithOptions(shared_ptr<GetAfterAnswerDelayPlaybackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAfterAnswerDelayPlayback"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAfterAnswerDelayPlaybackResponse(callApi(params, req, runtime));
  }
  else {
    return GetAfterAnswerDelayPlaybackResponse(execute(params, req, runtime));
  }
}

GetAfterAnswerDelayPlaybackResponse Alibabacloud_OutboundBot20191226::Client::getAfterAnswerDelayPlayback(shared_ptr<GetAfterAnswerDelayPlaybackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAfterAnswerDelayPlaybackWithOptions(request, runtime);
}

GetAgentProfileResponse Alibabacloud_OutboundBot20191226::Client::getAgentProfileWithOptions(shared_ptr<GetAgentProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentProfileId)) {
    body->insert(pair<string, string>("AgentProfileId", *request->agentProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIp)) {
    body->insert(pair<string, string>("AppIp", *request->appIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentProfile"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAgentProfileResponse(callApi(params, req, runtime));
  }
  else {
    return GetAgentProfileResponse(execute(params, req, runtime));
  }
}

GetAgentProfileResponse Alibabacloud_OutboundBot20191226::Client::getAgentProfile(shared_ptr<GetAgentProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentProfileWithOptions(request, runtime);
}

GetAgentProfileTemplateResponse Alibabacloud_OutboundBot20191226::Client::getAgentProfileTemplateWithOptions(shared_ptr<GetAgentProfileTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentProfileTemplateId)) {
    body->insert(pair<string, string>("AgentProfileTemplateId", *request->agentProfileTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIp)) {
    body->insert(pair<string, string>("AppIp", *request->appIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAgentProfileTemplate"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAgentProfileTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return GetAgentProfileTemplateResponse(execute(params, req, runtime));
  }
}

GetAgentProfileTemplateResponse Alibabacloud_OutboundBot20191226::Client::getAgentProfileTemplate(shared_ptr<GetAgentProfileTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentProfileTemplateWithOptions(request, runtime);
}

GetAnnotationMissionSummaryResponse Alibabacloud_OutboundBot20191226::Client::getAnnotationMissionSummaryWithOptions(shared_ptr<GetAnnotationMissionSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionId)) {
    query->insert(pair<string, string>("AnnotationMissionId", *request->annotationMissionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAnnotationMissionSummary"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAnnotationMissionSummaryResponse(callApi(params, req, runtime));
  }
  else {
    return GetAnnotationMissionSummaryResponse(execute(params, req, runtime));
  }
}

GetAnnotationMissionSummaryResponse Alibabacloud_OutboundBot20191226::Client::getAnnotationMissionSummary(shared_ptr<GetAnnotationMissionSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAnnotationMissionSummaryWithOptions(request, runtime);
}

GetAnnotationMissionTagInfoListResponse Alibabacloud_OutboundBot20191226::Client::getAnnotationMissionTagInfoListWithOptions(shared_ptr<GetAnnotationMissionTagInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAnnotationMissionTagInfoList"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAnnotationMissionTagInfoListResponse(callApi(params, req, runtime));
  }
  else {
    return GetAnnotationMissionTagInfoListResponse(execute(params, req, runtime));
  }
}

GetAnnotationMissionTagInfoListResponse Alibabacloud_OutboundBot20191226::Client::getAnnotationMissionTagInfoList(shared_ptr<GetAnnotationMissionTagInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAnnotationMissionTagInfoListWithOptions(request, runtime);
}

GetAsrServerInfoResponse Alibabacloud_OutboundBot20191226::Client::getAsrServerInfoWithOptions(shared_ptr<GetAsrServerInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsrServerInfo"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAsrServerInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetAsrServerInfoResponse(execute(params, req, runtime));
  }
}

GetAsrServerInfoResponse Alibabacloud_OutboundBot20191226::Client::getAsrServerInfo(shared_ptr<GetAsrServerInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsrServerInfoWithOptions(request, runtime);
}

GetBaseStrategyPeriodResponse Alibabacloud_OutboundBot20191226::Client::getBaseStrategyPeriodWithOptions(shared_ptr<GetBaseStrategyPeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBaseStrategyPeriod"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetBaseStrategyPeriodResponse(callApi(params, req, runtime));
  }
  else {
    return GetBaseStrategyPeriodResponse(execute(params, req, runtime));
  }
}

GetBaseStrategyPeriodResponse Alibabacloud_OutboundBot20191226::Client::getBaseStrategyPeriod(shared_ptr<GetBaseStrategyPeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBaseStrategyPeriodWithOptions(request, runtime);
}

GetConcurrentConversationQuotaResponse Alibabacloud_OutboundBot20191226::Client::getConcurrentConversationQuotaWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConcurrentConversationQuota"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetConcurrentConversationQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return GetConcurrentConversationQuotaResponse(execute(params, req, runtime));
  }
}

GetConcurrentConversationQuotaResponse Alibabacloud_OutboundBot20191226::Client::getConcurrentConversationQuota() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConcurrentConversationQuotaWithOptions(runtime);
}

GetContactBlockListResponse Alibabacloud_OutboundBot20191226::Client::getContactBlockListWithOptions(shared_ptr<GetContactBlockListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->countTotalRow)) {
    query->insert(pair<string, bool>("CountTotalRow", *request->countTotalRow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetContactBlockList"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetContactBlockListResponse(callApi(params, req, runtime));
  }
  else {
    return GetContactBlockListResponse(execute(params, req, runtime));
  }
}

GetContactBlockListResponse Alibabacloud_OutboundBot20191226::Client::getContactBlockList(shared_ptr<GetContactBlockListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getContactBlockListWithOptions(request, runtime);
}

GetContactWhiteListResponse Alibabacloud_OutboundBot20191226::Client::getContactWhiteListWithOptions(shared_ptr<GetContactWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->countTotalRow)) {
    query->insert(pair<string, bool>("CountTotalRow", *request->countTotalRow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetContactWhiteList"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetContactWhiteListResponse(callApi(params, req, runtime));
  }
  else {
    return GetContactWhiteListResponse(execute(params, req, runtime));
  }
}

GetContactWhiteListResponse Alibabacloud_OutboundBot20191226::Client::getContactWhiteList(shared_ptr<GetContactWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getContactWhiteListWithOptions(request, runtime);
}

GetCurrentConcurrencyResponse Alibabacloud_OutboundBot20191226::Client::getCurrentConcurrencyWithOptions(shared_ptr<GetCurrentConcurrencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCurrentConcurrency"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCurrentConcurrencyResponse(callApi(params, req, runtime));
  }
  else {
    return GetCurrentConcurrencyResponse(execute(params, req, runtime));
  }
}

GetCurrentConcurrencyResponse Alibabacloud_OutboundBot20191226::Client::getCurrentConcurrency(shared_ptr<GetCurrentConcurrencyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCurrentConcurrencyWithOptions(request, runtime);
}

GetEffectiveDaysResponse Alibabacloud_OutboundBot20191226::Client::getEffectiveDaysWithOptions(shared_ptr<GetEffectiveDaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEffectiveDays"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEffectiveDaysResponse(callApi(params, req, runtime));
  }
  else {
    return GetEffectiveDaysResponse(execute(params, req, runtime));
  }
}

GetEffectiveDaysResponse Alibabacloud_OutboundBot20191226::Client::getEffectiveDays(shared_ptr<GetEffectiveDaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEffectiveDaysWithOptions(request, runtime);
}

GetEmptyNumberNoMoreCallsInfoResponse Alibabacloud_OutboundBot20191226::Client::getEmptyNumberNoMoreCallsInfoWithOptions(shared_ptr<GetEmptyNumberNoMoreCallsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEmptyNumberNoMoreCallsInfo"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEmptyNumberNoMoreCallsInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetEmptyNumberNoMoreCallsInfoResponse(execute(params, req, runtime));
  }
}

GetEmptyNumberNoMoreCallsInfoResponse Alibabacloud_OutboundBot20191226::Client::getEmptyNumberNoMoreCallsInfo(shared_ptr<GetEmptyNumberNoMoreCallsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEmptyNumberNoMoreCallsInfoWithOptions(request, runtime);
}

GetJobDataUploadParamsResponse Alibabacloud_OutboundBot20191226::Client::getJobDataUploadParamsWithOptions(shared_ptr<GetJobDataUploadParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->busiType)) {
    query->insert(pair<string, string>("BusiType", *request->busiType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueId)) {
    query->insert(pair<string, string>("UniqueId", *request->uniqueId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetJobDataUploadParams"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetJobDataUploadParamsResponse(callApi(params, req, runtime));
  }
  else {
    return GetJobDataUploadParamsResponse(execute(params, req, runtime));
  }
}

GetJobDataUploadParamsResponse Alibabacloud_OutboundBot20191226::Client::getJobDataUploadParams(shared_ptr<GetJobDataUploadParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getJobDataUploadParamsWithOptions(request, runtime);
}

GetMaxAttemptsPerDayResponse Alibabacloud_OutboundBot20191226::Client::getMaxAttemptsPerDayWithOptions(shared_ptr<GetMaxAttemptsPerDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMaxAttemptsPerDay"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMaxAttemptsPerDayResponse(callApi(params, req, runtime));
  }
  else {
    return GetMaxAttemptsPerDayResponse(execute(params, req, runtime));
  }
}

GetMaxAttemptsPerDayResponse Alibabacloud_OutboundBot20191226::Client::getMaxAttemptsPerDay(shared_ptr<GetMaxAttemptsPerDayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMaxAttemptsPerDayWithOptions(request, runtime);
}

GetNumberDistrictInfoTemplateDownloadUrlResponse Alibabacloud_OutboundBot20191226::Client::getNumberDistrictInfoTemplateDownloadUrlWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNumberDistrictInfoTemplateDownloadUrl"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetNumberDistrictInfoTemplateDownloadUrlResponse(callApi(params, req, runtime));
  }
  else {
    return GetNumberDistrictInfoTemplateDownloadUrlResponse(execute(params, req, runtime));
  }
}

GetNumberDistrictInfoTemplateDownloadUrlResponse Alibabacloud_OutboundBot20191226::Client::getNumberDistrictInfoTemplateDownloadUrl() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNumberDistrictInfoTemplateDownloadUrlWithOptions(runtime);
}

GetRealtimeConcurrencyReportResponse Alibabacloud_OutboundBot20191226::Client::getRealtimeConcurrencyReportWithOptions(shared_ptr<GetRealtimeConcurrencyReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRealtimeConcurrencyReport"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRealtimeConcurrencyReportResponse(callApi(params, req, runtime));
  }
  else {
    return GetRealtimeConcurrencyReportResponse(execute(params, req, runtime));
  }
}

GetRealtimeConcurrencyReportResponse Alibabacloud_OutboundBot20191226::Client::getRealtimeConcurrencyReport(shared_ptr<GetRealtimeConcurrencyReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRealtimeConcurrencyReportWithOptions(request, runtime);
}

GetSummaryInfoResponse Alibabacloud_OutboundBot20191226::Client::getSummaryInfoWithOptions(shared_ptr<GetSummaryInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIdList)) {
    query->insert(pair<string, vector<string>>("InstanceIdList", *request->instanceIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSummaryInfo"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSummaryInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetSummaryInfoResponse(execute(params, req, runtime));
  }
}

GetSummaryInfoResponse Alibabacloud_OutboundBot20191226::Client::getSummaryInfo(shared_ptr<GetSummaryInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSummaryInfoWithOptions(request, runtime);
}

GetTaskByUuidResponse Alibabacloud_OutboundBot20191226::Client::getTaskByUuidWithOptions(shared_ptr<GetTaskByUuidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskByUuid"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTaskByUuidResponse(callApi(params, req, runtime));
  }
  else {
    return GetTaskByUuidResponse(execute(params, req, runtime));
  }
}

GetTaskByUuidResponse Alibabacloud_OutboundBot20191226::Client::getTaskByUuid(shared_ptr<GetTaskByUuidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskByUuidWithOptions(request, runtime);
}

GetVersionResponse Alibabacloud_OutboundBot20191226::Client::getVersionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVersion"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetVersionResponse(callApi(params, req, runtime));
  }
  else {
    return GetVersionResponse(execute(params, req, runtime));
  }
}

GetVersionResponse Alibabacloud_OutboundBot20191226::Client::getVersion() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVersionWithOptions(runtime);
}

ImportScriptResponse Alibabacloud_OutboundBot20191226::Client::importScriptWithOptions(shared_ptr<ImportScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nluEngine)) {
    query->insert(pair<string, string>("NluEngine", *request->nluEngine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureUrl)) {
    query->insert(pair<string, string>("SignatureUrl", *request->signatureUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportScript"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ImportScriptResponse(callApi(params, req, runtime));
  }
  else {
    return ImportScriptResponse(execute(params, req, runtime));
  }
}

ImportScriptResponse Alibabacloud_OutboundBot20191226::Client::importScript(shared_ptr<ImportScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importScriptWithOptions(request, runtime);
}

InflightTaskTimeoutResponse Alibabacloud_OutboundBot20191226::Client::inflightTaskTimeoutWithOptions(shared_ptr<InflightTaskTimeoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceOwnerId)) {
    query->insert(pair<string, long>("InstanceOwnerId", *request->instanceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InflightTaskTimeout"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return InflightTaskTimeoutResponse(callApi(params, req, runtime));
  }
  else {
    return InflightTaskTimeoutResponse(execute(params, req, runtime));
  }
}

InflightTaskTimeoutResponse Alibabacloud_OutboundBot20191226::Client::inflightTaskTimeout(shared_ptr<InflightTaskTimeoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return inflightTaskTimeoutWithOptions(request, runtime);
}

ListAgentProfilesResponse Alibabacloud_OutboundBot20191226::Client::listAgentProfilesWithOptions(shared_ptr<ListAgentProfilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appIp)) {
    body->insert(pair<string, string>("AppIp", *request->appIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    body->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAgentProfiles"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAgentProfilesResponse(callApi(params, req, runtime));
  }
  else {
    return ListAgentProfilesResponse(execute(params, req, runtime));
  }
}

ListAgentProfilesResponse Alibabacloud_OutboundBot20191226::Client::listAgentProfiles(shared_ptr<ListAgentProfilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentProfilesWithOptions(request, runtime);
}

ListAllTenantBindNumberBindingResponse Alibabacloud_OutboundBot20191226::Client::listAllTenantBindNumberBindingWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllTenantBindNumberBinding"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAllTenantBindNumberBindingResponse(callApi(params, req, runtime));
  }
  else {
    return ListAllTenantBindNumberBindingResponse(execute(params, req, runtime));
  }
}

ListAllTenantBindNumberBindingResponse Alibabacloud_OutboundBot20191226::Client::listAllTenantBindNumberBinding() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllTenantBindNumberBindingWithOptions(runtime);
}

ListAnnotationMissionResponse Alibabacloud_OutboundBot20191226::Client::listAnnotationMissionWithOptions(shared_ptr<ListAnnotationMissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionId)) {
    query->insert(pair<string, string>("AnnotationMissionId", *request->annotationMissionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionName)) {
    query->insert(pair<string, string>("AnnotationMissionName", *request->annotationMissionName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->annotationStatusListFilter)) {
    query->insert(pair<string, vector<long>>("AnnotationStatusListFilter", *request->annotationStatusListFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationStatusListStringFilter)) {
    query->insert(pair<string, string>("AnnotationStatusListStringFilter", *request->annotationStatusListStringFilter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeEndFilter)) {
    query->insert(pair<string, long>("CreateTimeEndFilter", *request->createTimeEndFilter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStartFilter)) {
    query->insert(pair<string, long>("CreateTimeStartFilter", *request->createTimeStartFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnnotationMission"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAnnotationMissionResponse(callApi(params, req, runtime));
  }
  else {
    return ListAnnotationMissionResponse(execute(params, req, runtime));
  }
}

ListAnnotationMissionResponse Alibabacloud_OutboundBot20191226::Client::listAnnotationMission(shared_ptr<ListAnnotationMissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnnotationMissionWithOptions(request, runtime);
}

ListAnnotationMissionSessionResponse Alibabacloud_OutboundBot20191226::Client::listAnnotationMissionSessionWithOptions(shared_ptr<ListAnnotationMissionSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionId)) {
    query->insert(pair<string, string>("AnnotationMissionId", *request->annotationMissionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionSessionId)) {
    query->insert(pair<string, string>("AnnotationMissionSessionId", *request->annotationMissionSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->environment)) {
    query->insert(pair<string, long>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeStatusListJsonString)) {
    query->insert(pair<string, string>("IncludeStatusListJsonString", *request->includeStatusListJsonString));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageIndex)) {
    query->insert(pair<string, long>("PageIndex", *request->pageIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnnotationMissionSession"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAnnotationMissionSessionResponse(callApi(params, req, runtime));
  }
  else {
    return ListAnnotationMissionSessionResponse(execute(params, req, runtime));
  }
}

ListAnnotationMissionSessionResponse Alibabacloud_OutboundBot20191226::Client::listAnnotationMissionSession(shared_ptr<ListAnnotationMissionSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnnotationMissionSessionWithOptions(request, runtime);
}

ListApiPluginsResponse Alibabacloud_OutboundBot20191226::Client::listApiPluginsWithOptions(shared_ptr<ListApiPluginsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuidsJson)) {
    query->insert(pair<string, string>("UuidsJson", *request->uuidsJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApiPlugins"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListApiPluginsResponse(callApi(params, req, runtime));
  }
  else {
    return ListApiPluginsResponse(execute(params, req, runtime));
  }
}

ListApiPluginsResponse Alibabacloud_OutboundBot20191226::Client::listApiPlugins(shared_ptr<ListApiPluginsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApiPluginsWithOptions(request, runtime);
}

ListChatbotInstancesResponse Alibabacloud_OutboundBot20191226::Client::listChatbotInstancesWithOptions(shared_ptr<ListChatbotInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChatbotInstances"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListChatbotInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ListChatbotInstancesResponse(execute(params, req, runtime));
  }
}

ListChatbotInstancesResponse Alibabacloud_OutboundBot20191226::Client::listChatbotInstances(shared_ptr<ListChatbotInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChatbotInstancesWithOptions(request, runtime);
}

ListDialogueFlowsResponse Alibabacloud_OutboundBot20191226::Client::listDialogueFlowsWithOptions(shared_ptr<ListDialogueFlowsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDialogueFlows"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDialogueFlowsResponse(callApi(params, req, runtime));
  }
  else {
    return ListDialogueFlowsResponse(execute(params, req, runtime));
  }
}

ListDialogueFlowsResponse Alibabacloud_OutboundBot20191226::Client::listDialogueFlows(shared_ptr<ListDialogueFlowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDialogueFlowsWithOptions(request, runtime);
}

ListDownloadTasksResponse Alibabacloud_OutboundBot20191226::Client::listDownloadTasksWithOptions(shared_ptr<ListDownloadTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDownloadTasks"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDownloadTasksResponse(callApi(params, req, runtime));
  }
  else {
    return ListDownloadTasksResponse(execute(params, req, runtime));
  }
}

ListDownloadTasksResponse Alibabacloud_OutboundBot20191226::Client::listDownloadTasks(shared_ptr<ListDownloadTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDownloadTasksWithOptions(request, runtime);
}

ListFlashSmsTemplatesResponse Alibabacloud_OutboundBot20191226::Client::listFlashSmsTemplatesWithOptions(shared_ptr<ListFlashSmsTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFlashSmsTemplates"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListFlashSmsTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListFlashSmsTemplatesResponse(execute(params, req, runtime));
  }
}

ListFlashSmsTemplatesResponse Alibabacloud_OutboundBot20191226::Client::listFlashSmsTemplates(shared_ptr<ListFlashSmsTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFlashSmsTemplatesWithOptions(request, runtime);
}

ListGlobalQuestionsResponse Alibabacloud_OutboundBot20191226::Client::listGlobalQuestionsWithOptions(shared_ptr<ListGlobalQuestionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListGlobalQuestions"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListGlobalQuestionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListGlobalQuestionsResponse(execute(params, req, runtime));
  }
}

ListGlobalQuestionsResponse Alibabacloud_OutboundBot20191226::Client::listGlobalQuestions(shared_ptr<ListGlobalQuestionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGlobalQuestionsWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_OutboundBot20191226::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListInstancesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListInstancesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ListInstancesResponse(execute(params, req, runtime));
  }
}

ListInstancesResponse Alibabacloud_OutboundBot20191226::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(request, runtime);
}

ListIntentsResponse Alibabacloud_OutboundBot20191226::Client::listIntentsWithOptions(shared_ptr<ListIntentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIntents"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListIntentsResponse(callApi(params, req, runtime));
  }
  else {
    return ListIntentsResponse(execute(params, req, runtime));
  }
}

ListIntentsResponse Alibabacloud_OutboundBot20191226::Client::listIntents(shared_ptr<ListIntentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIntentsWithOptions(request, runtime);
}

ListJobGroupsResponse Alibabacloud_OutboundBot20191226::Client::listJobGroupsWithOptions(shared_ptr<ListJobGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->asyncQuery)) {
    query->insert(pair<string, bool>("AsyncQuery", *request->asyncQuery));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupStatusFilter)) {
    query->insert(pair<string, string>("JobGroupStatusFilter", *request->jobGroupStatusFilter));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyMinConcurrencyEnabled)) {
    query->insert(pair<string, bool>("OnlyMinConcurrencyEnabled", *request->onlyMinConcurrencyEnabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchText)) {
    query->insert(pair<string, string>("SearchText", *request->searchText));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobGroups"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListJobGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListJobGroupsResponse(execute(params, req, runtime));
  }
}

ListJobGroupsResponse Alibabacloud_OutboundBot20191226::Client::listJobGroups(shared_ptr<ListJobGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobGroupsWithOptions(request, runtime);
}

ListJobGroupsAsyncResponse Alibabacloud_OutboundBot20191226::Client::listJobGroupsAsyncWithOptions(shared_ptr<ListJobGroupsAsyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobGroupsAsync"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListJobGroupsAsyncResponse(callApi(params, req, runtime));
  }
  else {
    return ListJobGroupsAsyncResponse(execute(params, req, runtime));
  }
}

ListJobGroupsAsyncResponse Alibabacloud_OutboundBot20191226::Client::listJobGroupsAsync(shared_ptr<ListJobGroupsAsyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobGroupsAsyncWithOptions(request, runtime);
}

ListJobsResponse Alibabacloud_OutboundBot20191226::Client::listJobsWithOptions(shared_ptr<ListJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobId)) {
    query->insert(pair<string, vector<string>>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListJobsResponse(execute(params, req, runtime));
  }
}

ListJobsResponse Alibabacloud_OutboundBot20191226::Client::listJobs(shared_ptr<ListJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobsWithOptions(request, runtime);
}

ListJobsByGroupResponse Alibabacloud_OutboundBot20191226::Client::listJobsByGroupWithOptions(shared_ptr<ListJobsByGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobFailureReason)) {
    query->insert(pair<string, string>("JobFailureReason", *request->jobFailureReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobStatus)) {
    query->insert(pair<string, string>("JobStatus", *request->jobStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJobsByGroup"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListJobsByGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ListJobsByGroupResponse(execute(params, req, runtime));
  }
}

ListJobsByGroupResponse Alibabacloud_OutboundBot20191226::Client::listJobsByGroup(shared_ptr<ListJobsByGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobsByGroupWithOptions(request, runtime);
}

ListOutboundCallNumbersResponse Alibabacloud_OutboundBot20191226::Client::listOutboundCallNumbersWithOptions(shared_ptr<ListOutboundCallNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOutboundCallNumbers"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListOutboundCallNumbersResponse(callApi(params, req, runtime));
  }
  else {
    return ListOutboundCallNumbersResponse(execute(params, req, runtime));
  }
}

ListOutboundCallNumbersResponse Alibabacloud_OutboundBot20191226::Client::listOutboundCallNumbers(shared_ptr<ListOutboundCallNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOutboundCallNumbersWithOptions(request, runtime);
}

ListResourceTagsResponse Alibabacloud_OutboundBot20191226::Client::listResourceTagsWithOptions(shared_ptr<ListResourceTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListResourceTags"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListResourceTagsResponse(callApi(params, req, runtime));
  }
  else {
    return ListResourceTagsResponse(execute(params, req, runtime));
  }
}

ListResourceTagsResponse Alibabacloud_OutboundBot20191226::Client::listResourceTags(shared_ptr<ListResourceTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listResourceTagsWithOptions(request, runtime);
}

ListSchedulerInstancesResponse Alibabacloud_OutboundBot20191226::Client::listSchedulerInstancesWithOptions(shared_ptr<ListSchedulerInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceOwnerId)) {
    query->insert(pair<string, long>("InstanceOwnerId", *request->instanceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSchedulerInstances"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSchedulerInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSchedulerInstancesResponse(execute(params, req, runtime));
  }
}

ListSchedulerInstancesResponse Alibabacloud_OutboundBot20191226::Client::listSchedulerInstances(shared_ptr<ListSchedulerInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSchedulerInstancesWithOptions(request, runtime);
}

ListScriptPublishHistoriesResponse Alibabacloud_OutboundBot20191226::Client::listScriptPublishHistoriesWithOptions(shared_ptr<ListScriptPublishHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScriptPublishHistories"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListScriptPublishHistoriesResponse(callApi(params, req, runtime));
  }
  else {
    return ListScriptPublishHistoriesResponse(execute(params, req, runtime));
  }
}

ListScriptPublishHistoriesResponse Alibabacloud_OutboundBot20191226::Client::listScriptPublishHistories(shared_ptr<ListScriptPublishHistoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScriptPublishHistoriesWithOptions(request, runtime);
}

ListScriptRecordingResponse Alibabacloud_OutboundBot20191226::Client::listScriptRecordingWithOptions(shared_ptr<ListScriptRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refIdsJson)) {
    query->insert(pair<string, string>("RefIdsJson", *request->refIdsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->search)) {
    query->insert(pair<string, string>("Search", *request->search));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statesJson)) {
    query->insert(pair<string, string>("StatesJson", *request->statesJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuidsJson)) {
    query->insert(pair<string, string>("UuidsJson", *request->uuidsJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScriptRecording"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListScriptRecordingResponse(callApi(params, req, runtime));
  }
  else {
    return ListScriptRecordingResponse(execute(params, req, runtime));
  }
}

ListScriptRecordingResponse Alibabacloud_OutboundBot20191226::Client::listScriptRecording(shared_ptr<ListScriptRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScriptRecordingWithOptions(request, runtime);
}

ListScriptVoiceConfigsResponse Alibabacloud_OutboundBot20191226::Client::listScriptVoiceConfigsWithOptions(shared_ptr<ListScriptVoiceConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScriptVoiceConfigs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListScriptVoiceConfigsResponse(callApi(params, req, runtime));
  }
  else {
    return ListScriptVoiceConfigsResponse(execute(params, req, runtime));
  }
}

ListScriptVoiceConfigsResponse Alibabacloud_OutboundBot20191226::Client::listScriptVoiceConfigs(shared_ptr<ListScriptVoiceConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScriptVoiceConfigsWithOptions(request, runtime);
}

ListScriptsResponse Alibabacloud_OutboundBot20191226::Client::listScriptsWithOptions(shared_ptr<ListScriptsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nluEngine)) {
    query->insert(pair<string, string>("NluEngine", *request->nluEngine));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptName)) {
    query->insert(pair<string, string>("ScriptName", *request->scriptName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScripts"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListScriptsResponse(callApi(params, req, runtime));
  }
  else {
    return ListScriptsResponse(execute(params, req, runtime));
  }
}

ListScriptsResponse Alibabacloud_OutboundBot20191226::Client::listScripts(shared_ptr<ListScriptsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScriptsWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_OutboundBot20191226::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagResourcesResponse(execute(params, req, runtime));
  }
}

ListTagResourcesResponse Alibabacloud_OutboundBot20191226::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListTagsResponse Alibabacloud_OutboundBot20191226::Client::listTagsWithOptions(shared_ptr<ListTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTags"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagsResponse(execute(params, req, runtime));
  }
}

ListTagsResponse Alibabacloud_OutboundBot20191226::Client::listTags(shared_ptr<ListTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagsWithOptions(request, runtime);
}

ModifyAgentProfileResponse Alibabacloud_OutboundBot20191226::Client::modifyAgentProfileWithOptions(shared_ptr<ModifyAgentProfileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyAgentProfileShrinkRequest> request = make_shared<ModifyAgentProfileShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->faqCategoryIds)) {
    request->faqCategoryIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->faqCategoryIds, make_shared<string>("FaqCategoryIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentProfileId)) {
    body->insert(pair<string, string>("AgentProfileId", *request->agentProfileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiPluginJson)) {
    body->insert(pair<string, string>("ApiPluginJson", *request->apiPluginJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faqCategoryIdsShrink)) {
    body->insert(pair<string, string>("FaqCategoryIds", *request->faqCategoryIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    body->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instructionJson)) {
    body->insert(pair<string, string>("InstructionJson", *request->instructionJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelsJson)) {
    body->insert(pair<string, string>("LabelsJson", *request->labelsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelConfig)) {
    body->insert(pair<string, string>("ModelConfig", *request->modelConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promptJson)) {
    body->insert(pair<string, string>("PromptJson", *request->promptJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    body->insert(pair<string, string>("Scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->variablesJson)) {
    body->insert(pair<string, string>("VariablesJson", *request->variablesJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAgentProfile"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyAgentProfileResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyAgentProfileResponse(execute(params, req, runtime));
  }
}

ModifyAgentProfileResponse Alibabacloud_OutboundBot20191226::Client::modifyAgentProfile(shared_ptr<ModifyAgentProfileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAgentProfileWithOptions(request, runtime);
}

ModifyAnnotationMissionResponse Alibabacloud_OutboundBot20191226::Client::modifyAnnotationMissionWithOptions(shared_ptr<ModifyAnnotationMissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionId)) {
    query->insert(pair<string, string>("AnnotationMissionId", *request->annotationMissionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionName)) {
    query->insert(pair<string, string>("AnnotationMissionName", *request->annotationMissionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->annotationStatus)) {
    query->insert(pair<string, long>("AnnotationStatus", *request->annotationStatus));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->delete_)) {
    query->insert(pair<string, bool>("Delete_", *request->delete_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAnnotationMission"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyAnnotationMissionResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyAnnotationMissionResponse(execute(params, req, runtime));
  }
}

ModifyAnnotationMissionResponse Alibabacloud_OutboundBot20191226::Client::modifyAnnotationMission(shared_ptr<ModifyAnnotationMissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAnnotationMissionWithOptions(request, runtime);
}

ModifyBatchJobsResponse Alibabacloud_OutboundBot20191226::Client::modifyBatchJobsWithOptions(shared_ptr<ModifyBatchJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchJobName)) {
    query->insert(pair<string, string>("BatchJobName", *request->batchJobName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumber)) {
    query->insert(pair<string, vector<string>>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobFilePath)) {
    query->insert(pair<string, string>("JobFilePath", *request->jobFilePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyJson)) {
    query->insert(pair<string, string>("StrategyJson", *request->strategyJson));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->submitted)) {
    query->insert(pair<string, bool>("Submitted", *request->submitted));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyBatchJobs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyBatchJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyBatchJobsResponse(execute(params, req, runtime));
  }
}

ModifyBatchJobsResponse Alibabacloud_OutboundBot20191226::Client::modifyBatchJobs(shared_ptr<ModifyBatchJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBatchJobsWithOptions(request, runtime);
}

ModifyDialogueFlowResponse Alibabacloud_OutboundBot20191226::Client::modifyDialogueFlowWithOptions(shared_ptr<ModifyDialogueFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogueFlowDefinition)) {
    query->insert(pair<string, string>("DialogueFlowDefinition", *request->dialogueFlowDefinition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogueFlowId)) {
    query->insert(pair<string, string>("DialogueFlowId", *request->dialogueFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDrafted)) {
    query->insert(pair<string, bool>("IsDrafted", *request->isDrafted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDialogueFlow"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyDialogueFlowResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyDialogueFlowResponse(execute(params, req, runtime));
  }
}

ModifyDialogueFlowResponse Alibabacloud_OutboundBot20191226::Client::modifyDialogueFlow(shared_ptr<ModifyDialogueFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDialogueFlowWithOptions(request, runtime);
}

ModifyEmptyNumberNoMoreCallsInfoResponse Alibabacloud_OutboundBot20191226::Client::modifyEmptyNumberNoMoreCallsInfoWithOptions(shared_ptr<ModifyEmptyNumberNoMoreCallsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->emptyNumberNoMoreCalls)) {
    query->insert(pair<string, bool>("EmptyNumberNoMoreCalls", *request->emptyNumberNoMoreCalls));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyEmptyNumberNoMoreCallsInfo"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyEmptyNumberNoMoreCallsInfoResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyEmptyNumberNoMoreCallsInfoResponse(execute(params, req, runtime));
  }
}

ModifyEmptyNumberNoMoreCallsInfoResponse Alibabacloud_OutboundBot20191226::Client::modifyEmptyNumberNoMoreCallsInfo(shared_ptr<ModifyEmptyNumberNoMoreCallsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyEmptyNumberNoMoreCallsInfoWithOptions(request, runtime);
}

ModifyGlobalQuestionResponse Alibabacloud_OutboundBot20191226::Client::modifyGlobalQuestionWithOptions(shared_ptr<ModifyGlobalQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->answers)) {
    query->insert(pair<string, string>("Answers", *request->answers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalQuestionId)) {
    query->insert(pair<string, string>("GlobalQuestionId", *request->globalQuestionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalQuestionName)) {
    query->insert(pair<string, string>("GlobalQuestionName", *request->globalQuestionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->globalQuestionType)) {
    query->insert(pair<string, string>("GlobalQuestionType", *request->globalQuestionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->questions)) {
    query->insert(pair<string, string>("Questions", *request->questions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGlobalQuestion"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyGlobalQuestionResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyGlobalQuestionResponse(execute(params, req, runtime));
  }
}

ModifyGlobalQuestionResponse Alibabacloud_OutboundBot20191226::Client::modifyGlobalQuestion(shared_ptr<ModifyGlobalQuestionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGlobalQuestionWithOptions(request, runtime);
}

ModifyInstanceResponse Alibabacloud_OutboundBot20191226::Client::modifyInstanceWithOptions(shared_ptr<ModifyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumber)) {
    query->insert(pair<string, vector<string>>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceDescription)) {
    query->insert(pair<string, string>("InstanceDescription", *request->instanceDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxConcurrentConversation)) {
    query->insert(pair<string, long>("MaxConcurrentConversation", *request->maxConcurrentConversation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyInstance"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyInstanceResponse(execute(params, req, runtime));
  }
}

ModifyInstanceResponse Alibabacloud_OutboundBot20191226::Client::modifyInstance(shared_ptr<ModifyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceWithOptions(request, runtime);
}

ModifyIntentResponse Alibabacloud_OutboundBot20191226::Client::modifyIntentWithOptions(shared_ptr<ModifyIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentDescription)) {
    query->insert(pair<string, string>("IntentDescription", *request->intentDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentId)) {
    query->insert(pair<string, string>("IntentId", *request->intentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intentName)) {
    query->insert(pair<string, string>("IntentName", *request->intentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    query->insert(pair<string, string>("Keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->utterances)) {
    query->insert(pair<string, string>("Utterances", *request->utterances));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyIntent"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyIntentResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyIntentResponse(execute(params, req, runtime));
  }
}

ModifyIntentResponse Alibabacloud_OutboundBot20191226::Client::modifyIntent(shared_ptr<ModifyIntentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyIntentWithOptions(request, runtime);
}

ModifyJobGroupResponse Alibabacloud_OutboundBot20191226::Client::modifyJobGroupWithOptions(shared_ptr<ModifyJobGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumber)) {
    query->insert(pair<string, vector<string>>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flashSmsExtras)) {
    query->insert(pair<string, string>("FlashSmsExtras", *request->flashSmsExtras));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupStatus)) {
    query->insert(pair<string, string>("JobGroupStatus", *request->jobGroupStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minConcurrency)) {
    query->insert(pair<string, long>("MinConcurrency", *request->minConcurrency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->priority)) {
    query->insert(pair<string, string>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->recallCallingNumber)) {
    query->insert(pair<string, vector<string>>("RecallCallingNumber", *request->recallCallingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recallStrategyJson)) {
    query->insert(pair<string, string>("RecallStrategyJson", *request->recallStrategyJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ringingDuration)) {
    query->insert(pair<string, long>("RingingDuration", *request->ringingDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyJson)) {
    query->insert(pair<string, string>("StrategyJson", *request->strategyJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyJobGroup"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyJobGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyJobGroupResponse(execute(params, req, runtime));
  }
}

ModifyJobGroupResponse Alibabacloud_OutboundBot20191226::Client::modifyJobGroup(shared_ptr<ModifyJobGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyJobGroupWithOptions(request, runtime);
}

ModifyOutboundCallNumberResponse Alibabacloud_OutboundBot20191226::Client::modifyOutboundCallNumberWithOptions(shared_ptr<ModifyOutboundCallNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    query->insert(pair<string, string>("Number", *request->number));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundCallNumberId)) {
    query->insert(pair<string, string>("OutboundCallNumberId", *request->outboundCallNumberId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rateLimitCount)) {
    query->insert(pair<string, long>("RateLimitCount", *request->rateLimitCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rateLimitPeriod)) {
    query->insert(pair<string, long>("RateLimitPeriod", *request->rateLimitPeriod));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyOutboundCallNumber"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyOutboundCallNumberResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyOutboundCallNumberResponse(execute(params, req, runtime));
  }
}

ModifyOutboundCallNumberResponse Alibabacloud_OutboundBot20191226::Client::modifyOutboundCallNumber(shared_ptr<ModifyOutboundCallNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyOutboundCallNumberWithOptions(request, runtime);
}

ModifyScriptResponse Alibabacloud_OutboundBot20191226::Client::modifyScriptWithOptions(shared_ptr<ModifyScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->agentId)) {
    query->insert(pair<string, long>("AgentId", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->agentLlm)) {
    query->insert(pair<string, bool>("AgentLlm", *request->agentLlm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asrConfig)) {
    query->insert(pair<string, string>("AsrConfig", *request->asrConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatConfig)) {
    query->insert(pair<string, string>("ChatConfig", *request->chatConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatbotId)) {
    query->insert(pair<string, string>("ChatbotId", *request->chatbotId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->emotionEnable)) {
    query->insert(pair<string, bool>("EmotionEnable", *request->emotionEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->industry)) {
    query->insert(pair<string, string>("Industry", *request->industry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->longWaitEnable)) {
    query->insert(pair<string, bool>("LongWaitEnable", *request->longWaitEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->miniPlaybackConfigListJsonString)) {
    query->insert(pair<string, string>("MiniPlaybackConfigListJsonString", *request->miniPlaybackConfigListJsonString));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->miniPlaybackEnable)) {
    query->insert(pair<string, bool>("MiniPlaybackEnable", *request->miniPlaybackEnable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->newBargeInEnable)) {
    query->insert(pair<string, bool>("NewBargeInEnable", *request->newBargeInEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nlsConfig)) {
    query->insert(pair<string, string>("NlsConfig", *request->nlsConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nluAccessType)) {
    query->insert(pair<string, string>("NluAccessType", *request->nluAccessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nluEngine)) {
    query->insert(pair<string, string>("NluEngine", *request->nluEngine));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scriptContent)) {
    query->insert(pair<string, vector<string>>("ScriptContent", *request->scriptContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptDescription)) {
    query->insert(pair<string, string>("ScriptDescription", *request->scriptDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptName)) {
    query->insert(pair<string, string>("ScriptName", *request->scriptName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scriptWaveform)) {
    query->insert(pair<string, vector<string>>("ScriptWaveform", *request->scriptWaveform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsConfig)) {
    query->insert(pair<string, string>("TtsConfig", *request->ttsConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScript"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyScriptResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyScriptResponse(execute(params, req, runtime));
  }
}

ModifyScriptResponse Alibabacloud_OutboundBot20191226::Client::modifyScript(shared_ptr<ModifyScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScriptWithOptions(request, runtime);
}

ModifyScriptVoiceConfigResponse Alibabacloud_OutboundBot20191226::Client::modifyScriptVoiceConfigWithOptions(shared_ptr<ModifyScriptVoiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptVoiceConfigId)) {
    query->insert(pair<string, string>("ScriptVoiceConfigId", *request->scriptVoiceConfigId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptWaveformRelation)) {
    query->insert(pair<string, string>("ScriptWaveformRelation", *request->scriptWaveformRelation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyScriptVoiceConfig"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyScriptVoiceConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyScriptVoiceConfigResponse(execute(params, req, runtime));
  }
}

ModifyScriptVoiceConfigResponse Alibabacloud_OutboundBot20191226::Client::modifyScriptVoiceConfig(shared_ptr<ModifyScriptVoiceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyScriptVoiceConfigWithOptions(request, runtime);
}

ModifyTTSConfigResponse Alibabacloud_OutboundBot20191226::Client::modifyTTSConfigWithOptions(shared_ptr<ModifyTTSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nlsServiceType)) {
    query->insert(pair<string, string>("NlsServiceType", *request->nlsServiceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pitchRate)) {
    query->insert(pair<string, string>("PitchRate", *request->pitchRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speechRate)) {
    query->insert(pair<string, string>("SpeechRate", *request->speechRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voice)) {
    query->insert(pair<string, string>("Voice", *request->voice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->volume)) {
    query->insert(pair<string, string>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTTSConfig"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyTTSConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyTTSConfigResponse(execute(params, req, runtime));
  }
}

ModifyTTSConfigResponse Alibabacloud_OutboundBot20191226::Client::modifyTTSConfig(shared_ptr<ModifyTTSConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTTSConfigWithOptions(request, runtime);
}

ModifyTagGroupsResponse Alibabacloud_OutboundBot20191226::Client::modifyTagGroupsWithOptions(shared_ptr<ModifyTagGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagGroups)) {
    query->insert(pair<string, string>("TagGroups", *request->tagGroups));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTagGroups"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyTagGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyTagGroupsResponse(execute(params, req, runtime));
  }
}

ModifyTagGroupsResponse Alibabacloud_OutboundBot20191226::Client::modifyTagGroups(shared_ptr<ModifyTagGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTagGroupsWithOptions(request, runtime);
}

PublishScriptResponse Alibabacloud_OutboundBot20191226::Client::publishScriptWithOptions(shared_ptr<PublishScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishScript"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PublishScriptResponse(callApi(params, req, runtime));
  }
  else {
    return PublishScriptResponse(execute(params, req, runtime));
  }
}

PublishScriptResponse Alibabacloud_OutboundBot20191226::Client::publishScript(shared_ptr<PublishScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishScriptWithOptions(request, runtime);
}

PublishScriptForDebugResponse Alibabacloud_OutboundBot20191226::Client::publishScriptForDebugWithOptions(shared_ptr<PublishScriptForDebugRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishScriptForDebug"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PublishScriptForDebugResponse(callApi(params, req, runtime));
  }
  else {
    return PublishScriptForDebugResponse(execute(params, req, runtime));
  }
}

PublishScriptForDebugResponse Alibabacloud_OutboundBot20191226::Client::publishScriptForDebug(shared_ptr<PublishScriptForDebugRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishScriptForDebugWithOptions(request, runtime);
}

QueryJobsResponse Alibabacloud_OutboundBot20191226::Client::queryJobsWithOptions(shared_ptr<QueryJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactName)) {
    query->insert(pair<string, string>("ContactName", *request->contactName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeAlignment)) {
    query->insert(pair<string, string>("TimeAlignment", *request->timeAlignment));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryJobs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryJobsResponse(callApi(params, req, runtime));
  }
  else {
    return QueryJobsResponse(execute(params, req, runtime));
  }
}

QueryJobsResponse Alibabacloud_OutboundBot20191226::Client::queryJobs(shared_ptr<QueryJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryJobsWithOptions(request, runtime);
}

QueryJobsWithResultResponse Alibabacloud_OutboundBot20191226::Client::queryJobsWithResultWithOptions(shared_ptr<QueryJobsWithResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endActualTimeFilter)) {
    query->insert(pair<string, long>("EndActualTimeFilter", *request->endActualTimeFilter));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hasAnsweredFilter)) {
    query->insert(pair<string, bool>("HasAnsweredFilter", *request->hasAnsweredFilter));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hasHangUpByRejectionFilter)) {
    query->insert(pair<string, bool>("HasHangUpByRejectionFilter", *request->hasHangUpByRejectionFilter));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->hasReachedEndOfFlowFilter)) {
    query->insert(pair<string, bool>("HasReachedEndOfFlowFilter", *request->hasReachedEndOfFlowFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobFailureReasonsFilter)) {
    query->insert(pair<string, string>("JobFailureReasonsFilter", *request->jobFailureReasonsFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobStatusFilter)) {
    query->insert(pair<string, string>("JobStatusFilter", *request->jobStatusFilter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryText)) {
    query->insert(pair<string, string>("QueryText", *request->queryText));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startActualTimeFilter)) {
    query->insert(pair<string, long>("StartActualTimeFilter", *request->startActualTimeFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatusFilter)) {
    query->insert(pair<string, string>("TaskStatusFilter", *request->taskStatusFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryJobsWithResult"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryJobsWithResultResponse(callApi(params, req, runtime));
  }
  else {
    return QueryJobsWithResultResponse(execute(params, req, runtime));
  }
}

QueryJobsWithResultResponse Alibabacloud_OutboundBot20191226::Client::queryJobsWithResult(shared_ptr<QueryJobsWithResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryJobsWithResultWithOptions(request, runtime);
}

QueryScriptWaveformsResponse Alibabacloud_OutboundBot20191226::Client::queryScriptWaveformsWithOptions(shared_ptr<QueryScriptWaveformsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptContent)) {
    query->insert(pair<string, string>("ScriptContent", *request->scriptContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryScriptWaveforms"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryScriptWaveformsResponse(callApi(params, req, runtime));
  }
  else {
    return QueryScriptWaveformsResponse(execute(params, req, runtime));
  }
}

QueryScriptWaveformsResponse Alibabacloud_OutboundBot20191226::Client::queryScriptWaveforms(shared_ptr<QueryScriptWaveformsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryScriptWaveformsWithOptions(request, runtime);
}

QueryScriptsByStatusResponse Alibabacloud_OutboundBot20191226::Client::queryScriptsByStatusWithOptions(shared_ptr<QueryScriptsByStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->statusList)) {
    query->insert(pair<string, vector<string>>("StatusList", *request->statusList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryScriptsByStatus"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryScriptsByStatusResponse(callApi(params, req, runtime));
  }
  else {
    return QueryScriptsByStatusResponse(execute(params, req, runtime));
  }
}

QueryScriptsByStatusResponse Alibabacloud_OutboundBot20191226::Client::queryScriptsByStatus(shared_ptr<QueryScriptsByStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryScriptsByStatusWithOptions(request, runtime);
}

RecordFailureResponse Alibabacloud_OutboundBot20191226::Client::recordFailureWithOptions(shared_ptr<RecordFailureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actualTime)) {
    query->insert(pair<string, long>("ActualTime", *request->actualTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calledNumber)) {
    query->insert(pair<string, string>("CalledNumber", *request->calledNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callingNumber)) {
    query->insert(pair<string, string>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dispositionCode)) {
    query->insert(pair<string, string>("DispositionCode", *request->dispositionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exceptionCodes)) {
    query->insert(pair<string, string>("ExceptionCodes", *request->exceptionCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecordFailure"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RecordFailureResponse(callApi(params, req, runtime));
  }
  else {
    return RecordFailureResponse(execute(params, req, runtime));
  }
}

RecordFailureResponse Alibabacloud_OutboundBot20191226::Client::recordFailure(shared_ptr<RecordFailureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recordFailureWithOptions(request, runtime);
}

ResumeJobsResponse Alibabacloud_OutboundBot20191226::Client::resumeJobsWithOptions(shared_ptr<ResumeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobId)) {
    query->insert(pair<string, vector<string>>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobReferenceId)) {
    query->insert(pair<string, vector<string>>("JobReferenceId", *request->jobReferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeJobs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResumeJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ResumeJobsResponse(execute(params, req, runtime));
  }
}

ResumeJobsResponse Alibabacloud_OutboundBot20191226::Client::resumeJobs(shared_ptr<ResumeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeJobsWithOptions(request, runtime);
}

RollbackScriptResponse Alibabacloud_OutboundBot20191226::Client::rollbackScriptWithOptions(shared_ptr<RollbackScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rollbackVersion)) {
    query->insert(pair<string, string>("RollbackVersion", *request->rollbackVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackScript"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RollbackScriptResponse(callApi(params, req, runtime));
  }
  else {
    return RollbackScriptResponse(execute(params, req, runtime));
  }
}

RollbackScriptResponse Alibabacloud_OutboundBot20191226::Client::rollbackScript(shared_ptr<RollbackScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackScriptWithOptions(request, runtime);
}

SaveAfterAnswerDelayPlaybackResponse Alibabacloud_OutboundBot20191226::Client::saveAfterAnswerDelayPlaybackWithOptions(shared_ptr<SaveAfterAnswerDelayPlaybackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->afterAnswerDelayPlayback)) {
    query->insert(pair<string, long>("AfterAnswerDelayPlayback", *request->afterAnswerDelayPlayback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveAfterAnswerDelayPlayback"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveAfterAnswerDelayPlaybackResponse(callApi(params, req, runtime));
  }
  else {
    return SaveAfterAnswerDelayPlaybackResponse(execute(params, req, runtime));
  }
}

SaveAfterAnswerDelayPlaybackResponse Alibabacloud_OutboundBot20191226::Client::saveAfterAnswerDelayPlayback(shared_ptr<SaveAfterAnswerDelayPlaybackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveAfterAnswerDelayPlaybackWithOptions(request, runtime);
}

SaveAnnotationMissionSessionListResponse Alibabacloud_OutboundBot20191226::Client::saveAnnotationMissionSessionListWithOptions(shared_ptr<SaveAnnotationMissionSessionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    query->insert(pair<string, string>("AgentId", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->agentKey)) {
    query->insert(pair<string, string>("AgentKey", *request->agentKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->annotationMissionDataSourceType)) {
    query->insert(pair<string, long>("AnnotationMissionDataSourceType", *request->annotationMissionDataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList>>(request->annotationMissionSessionList)) {
    query->insert(pair<string, vector<SaveAnnotationMissionSessionListRequestAnnotationMissionSessionList>>("AnnotationMissionSessionList", *request->annotationMissionSessionList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionSessionListJsonString)) {
    query->insert(pair<string, string>("AnnotationMissionSessionListJsonString", *request->annotationMissionSessionListJsonString));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->environment)) {
    query->insert(pair<string, long>("Environment", *request->environment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userNick)) {
    query->insert(pair<string, string>("UserNick", *request->userNick));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveAnnotationMissionSessionList"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveAnnotationMissionSessionListResponse(callApi(params, req, runtime));
  }
  else {
    return SaveAnnotationMissionSessionListResponse(execute(params, req, runtime));
  }
}

SaveAnnotationMissionSessionListResponse Alibabacloud_OutboundBot20191226::Client::saveAnnotationMissionSessionList(shared_ptr<SaveAnnotationMissionSessionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveAnnotationMissionSessionListWithOptions(request, runtime);
}

SaveAnnotationMissionTagInfoListResponse Alibabacloud_OutboundBot20191226::Client::saveAnnotationMissionTagInfoListWithOptions(shared_ptr<SaveAnnotationMissionTagInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList>>(request->annotationMissionTagInfoList)) {
    query->insert(pair<string, vector<SaveAnnotationMissionTagInfoListRequestAnnotationMissionTagInfoList>>("AnnotationMissionTagInfoList", *request->annotationMissionTagInfoList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->annotationMissionTagInfoListJsonString)) {
    query->insert(pair<string, string>("AnnotationMissionTagInfoListJsonString", *request->annotationMissionTagInfoListJsonString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->reset)) {
    query->insert(pair<string, bool>("Reset", *request->reset));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveAnnotationMissionTagInfoList"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveAnnotationMissionTagInfoListResponse(callApi(params, req, runtime));
  }
  else {
    return SaveAnnotationMissionTagInfoListResponse(execute(params, req, runtime));
  }
}

SaveAnnotationMissionTagInfoListResponse Alibabacloud_OutboundBot20191226::Client::saveAnnotationMissionTagInfoList(shared_ptr<SaveAnnotationMissionTagInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveAnnotationMissionTagInfoListWithOptions(request, runtime);
}

SaveBaseStrategyPeriodResponse Alibabacloud_OutboundBot20191226::Client::saveBaseStrategyPeriodWithOptions(shared_ptr<SaveBaseStrategyPeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyWeekdays)) {
    query->insert(pair<string, bool>("OnlyWeekdays", *request->onlyWeekdays));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyWorkdays)) {
    query->insert(pair<string, bool>("OnlyWorkdays", *request->onlyWorkdays));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->workingTime)) {
    query->insert(pair<string, vector<string>>("WorkingTime", *request->workingTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workingTimeFramesJson)) {
    query->insert(pair<string, string>("WorkingTimeFramesJson", *request->workingTimeFramesJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveBaseStrategyPeriod"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveBaseStrategyPeriodResponse(callApi(params, req, runtime));
  }
  else {
    return SaveBaseStrategyPeriodResponse(execute(params, req, runtime));
  }
}

SaveBaseStrategyPeriodResponse Alibabacloud_OutboundBot20191226::Client::saveBaseStrategyPeriod(shared_ptr<SaveBaseStrategyPeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveBaseStrategyPeriodWithOptions(request, runtime);
}

SaveContactBlockListResponse Alibabacloud_OutboundBot20191226::Client::saveContactBlockListWithOptions(shared_ptr<SaveContactBlockListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->contactBlockListList)) {
    query->insert(pair<string, vector<string>>("ContactBlockListList", *request->contactBlockListList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactBlockListsJson)) {
    query->insert(pair<string, string>("ContactBlockListsJson", *request->contactBlockListsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveContactBlockList"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveContactBlockListResponse(callApi(params, req, runtime));
  }
  else {
    return SaveContactBlockListResponse(execute(params, req, runtime));
  }
}

SaveContactBlockListResponse Alibabacloud_OutboundBot20191226::Client::saveContactBlockList(shared_ptr<SaveContactBlockListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveContactBlockListWithOptions(request, runtime);
}

SaveContactWhiteListResponse Alibabacloud_OutboundBot20191226::Client::saveContactWhiteListWithOptions(shared_ptr<SaveContactWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->contactWhiteListList)) {
    query->insert(pair<string, vector<string>>("ContactWhiteListList", *request->contactWhiteListList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactWhiteListsJson)) {
    query->insert(pair<string, string>("ContactWhiteListsJson", *request->contactWhiteListsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveContactWhiteList"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveContactWhiteListResponse(callApi(params, req, runtime));
  }
  else {
    return SaveContactWhiteListResponse(execute(params, req, runtime));
  }
}

SaveContactWhiteListResponse Alibabacloud_OutboundBot20191226::Client::saveContactWhiteList(shared_ptr<SaveContactWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveContactWhiteListWithOptions(request, runtime);
}

SaveEffectiveDaysResponse Alibabacloud_OutboundBot20191226::Client::saveEffectiveDaysWithOptions(shared_ptr<SaveEffectiveDaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->effectiveDays)) {
    query->insert(pair<string, long>("EffectiveDays", *request->effectiveDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveEffectiveDays"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveEffectiveDaysResponse(callApi(params, req, runtime));
  }
  else {
    return SaveEffectiveDaysResponse(execute(params, req, runtime));
  }
}

SaveEffectiveDaysResponse Alibabacloud_OutboundBot20191226::Client::saveEffectiveDays(shared_ptr<SaveEffectiveDaysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveEffectiveDaysWithOptions(request, runtime);
}

SaveMaxAttemptsPerDayResponse Alibabacloud_OutboundBot20191226::Client::saveMaxAttemptsPerDayWithOptions(shared_ptr<SaveMaxAttemptsPerDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entryId)) {
    query->insert(pair<string, string>("EntryId", *request->entryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAttemptsPerDay)) {
    query->insert(pair<string, long>("MaxAttemptsPerDay", *request->maxAttemptsPerDay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategyLevel)) {
    query->insert(pair<string, long>("StrategyLevel", *request->strategyLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveMaxAttemptsPerDay"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SaveMaxAttemptsPerDayResponse(callApi(params, req, runtime));
  }
  else {
    return SaveMaxAttemptsPerDayResponse(execute(params, req, runtime));
  }
}

SaveMaxAttemptsPerDayResponse Alibabacloud_OutboundBot20191226::Client::saveMaxAttemptsPerDay(shared_ptr<SaveMaxAttemptsPerDayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveMaxAttemptsPerDayWithOptions(request, runtime);
}

SearchTaskResponse Alibabacloud_OutboundBot20191226::Client::searchTaskWithOptions(shared_ptr<SearchTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchTask"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchTaskResponse(callApi(params, req, runtime));
  }
  else {
    return SearchTaskResponse(execute(params, req, runtime));
  }
}

SearchTaskResponse Alibabacloud_OutboundBot20191226::Client::searchTask(shared_ptr<SearchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTaskWithOptions(request, runtime);
}

StartJobResponse Alibabacloud_OutboundBot20191226::Client::startJobWithOptions(shared_ptr<StartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->callingNumber)) {
    query->insert(pair<string, vector<string>>("CallingNumber", *request->callingNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobJson)) {
    query->insert(pair<string, string>("JobJson", *request->jobJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartJob"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartJobResponse(callApi(params, req, runtime));
  }
  else {
    return StartJobResponse(execute(params, req, runtime));
  }
}

StartJobResponse Alibabacloud_OutboundBot20191226::Client::startJob(shared_ptr<StartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startJobWithOptions(request, runtime);
}

SubmitBatchJobsResponse Alibabacloud_OutboundBot20191226::Client::submitBatchJobsWithOptions(shared_ptr<SubmitBatchJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitBatchJobs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitBatchJobsResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitBatchJobsResponse(execute(params, req, runtime));
  }
}

SubmitBatchJobsResponse Alibabacloud_OutboundBot20191226::Client::submitBatchJobs(shared_ptr<SubmitBatchJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitBatchJobsWithOptions(request, runtime);
}

SubmitRecordingResponse Alibabacloud_OutboundBot20191226::Client::submitRecordingWithOptions(shared_ptr<SubmitRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mergedRecording)) {
    query->insert(pair<string, string>("MergedRecording", *request->mergedRecording));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceRecording)) {
    query->insert(pair<string, string>("ResourceRecording", *request->resourceRecording));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitRecording"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitRecordingResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitRecordingResponse(execute(params, req, runtime));
  }
}

SubmitRecordingResponse Alibabacloud_OutboundBot20191226::Client::submitRecording(shared_ptr<SubmitRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitRecordingWithOptions(request, runtime);
}

SubmitScriptReviewResponse Alibabacloud_OutboundBot20191226::Client::submitScriptReviewWithOptions(shared_ptr<SubmitScriptReviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->from)) {
    query->insert(pair<string, string>("From", *request->from));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitScriptReview"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitScriptReviewResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitScriptReviewResponse(execute(params, req, runtime));
  }
}

SubmitScriptReviewResponse Alibabacloud_OutboundBot20191226::Client::submitScriptReview(shared_ptr<SubmitScriptReviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitScriptReviewWithOptions(request, runtime);
}

SuspendCallResponse Alibabacloud_OutboundBot20191226::Client::suspendCallWithOptions(shared_ptr<SuspendCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->calledNumbers)) {
    query->insert(pair<string, vector<string>>("CalledNumbers", *request->calledNumbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendCall"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SuspendCallResponse(callApi(params, req, runtime));
  }
  else {
    return SuspendCallResponse(execute(params, req, runtime));
  }
}

SuspendCallResponse Alibabacloud_OutboundBot20191226::Client::suspendCall(shared_ptr<SuspendCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendCallWithOptions(request, runtime);
}

SuspendCallWithFileResponse Alibabacloud_OutboundBot20191226::Client::suspendCallWithFileWithOptions(shared_ptr<SuspendCallWithFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->filePath)) {
    query->insert(pair<string, string>("FilePath", *request->filePath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendCallWithFile"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SuspendCallWithFileResponse(callApi(params, req, runtime));
  }
  else {
    return SuspendCallWithFileResponse(execute(params, req, runtime));
  }
}

SuspendCallWithFileResponse Alibabacloud_OutboundBot20191226::Client::suspendCallWithFile(shared_ptr<SuspendCallWithFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendCallWithFileWithOptions(request, runtime);
}

SuspendJobsResponse Alibabacloud_OutboundBot20191226::Client::suspendJobsWithOptions(shared_ptr<SuspendJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobGroupId)) {
    query->insert(pair<string, string>("JobGroupId", *request->jobGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobId)) {
    query->insert(pair<string, vector<string>>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->jobReferenceId)) {
    query->insert(pair<string, vector<string>>("JobReferenceId", *request->jobReferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioId)) {
    query->insert(pair<string, string>("ScenarioId", *request->scenarioId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendJobs"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SuspendJobsResponse(callApi(params, req, runtime));
  }
  else {
    return SuspendJobsResponse(execute(params, req, runtime));
  }
}

SuspendJobsResponse Alibabacloud_OutboundBot20191226::Client::suspendJobs(shared_ptr<SuspendJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendJobsWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_OutboundBot20191226::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return TagResourcesResponse(execute(params, req, runtime));
  }
}

TagResourcesResponse Alibabacloud_OutboundBot20191226::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

TaskPreparingResponse Alibabacloud_OutboundBot20191226::Client::taskPreparingWithOptions(shared_ptr<TaskPreparingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceOwnerId)) {
    query->insert(pair<string, long>("InstanceOwnerId", *request->instanceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TaskPreparing"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TaskPreparingResponse(callApi(params, req, runtime));
  }
  else {
    return TaskPreparingResponse(execute(params, req, runtime));
  }
}

TaskPreparingResponse Alibabacloud_OutboundBot20191226::Client::taskPreparing(shared_ptr<TaskPreparingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return taskPreparingWithOptions(request, runtime);
}

TerminateCallResponse Alibabacloud_OutboundBot20191226::Client::terminateCallWithOptions(shared_ptr<TerminateCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TerminateCall"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TerminateCallResponse(callApi(params, req, runtime));
  }
  else {
    return TerminateCallResponse(execute(params, req, runtime));
  }
}

TerminateCallResponse Alibabacloud_OutboundBot20191226::Client::terminateCall(shared_ptr<TerminateCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return terminateCallWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_OutboundBot20191226::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UntagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return UntagResourcesResponse(execute(params, req, runtime));
  }
}

UntagResourcesResponse Alibabacloud_OutboundBot20191226::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UploadScriptRecordingResponse Alibabacloud_OutboundBot20191226::Client::uploadScriptRecordingWithOptions(shared_ptr<UploadScriptRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadScriptRecording"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadScriptRecordingResponse(callApi(params, req, runtime));
  }
  else {
    return UploadScriptRecordingResponse(execute(params, req, runtime));
  }
}

UploadScriptRecordingResponse Alibabacloud_OutboundBot20191226::Client::uploadScriptRecording(shared_ptr<UploadScriptRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadScriptRecordingWithOptions(request, runtime);
}

WithdrawScriptReviewResponse Alibabacloud_OutboundBot20191226::Client::withdrawScriptReviewWithOptions(shared_ptr<WithdrawScriptReviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptId)) {
    query->insert(pair<string, string>("ScriptId", *request->scriptId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WithdrawScriptReview"))},
    {"version", boost::any(string("2019-12-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return WithdrawScriptReviewResponse(callApi(params, req, runtime));
  }
  else {
    return WithdrawScriptReviewResponse(execute(params, req, runtime));
  }
}

WithdrawScriptReviewResponse Alibabacloud_OutboundBot20191226::Client::withdrawScriptReview(shared_ptr<WithdrawScriptReviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return withdrawScriptReviewWithOptions(request, runtime);
}

