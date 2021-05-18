// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aiccs_20191015.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Aiccs20191015;

Alibabacloud_Aiccs20191015::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aiccs"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Aiccs20191015::Client::getEndpoint(shared_ptr<string> productId,
                                                       shared_ptr<string> regionId,
                                                       shared_ptr<string> endpointRule,
                                                       shared_ptr<string> network,
                                                       shared_ptr<string> suffix,
                                                       shared_ptr<map<string, string>> endpointMap,
                                                       shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

SendHotlineHeartBeatResponse Alibabacloud_Aiccs20191015::Client::sendHotlineHeartBeatWithOptions(shared_ptr<SendHotlineHeartBeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendHotlineHeartBeatResponse(doRPCRequest(make_shared<string>("SendHotlineHeartBeat"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendHotlineHeartBeatResponse Alibabacloud_Aiccs20191015::Client::sendHotlineHeartBeat(shared_ptr<SendHotlineHeartBeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendHotlineHeartBeatWithOptions(request, runtime);
}

StartChatWorkResponse Alibabacloud_Aiccs20191015::Client::startChatWorkWithOptions(shared_ptr<StartChatWorkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartChatWorkResponse(doRPCRequest(make_shared<string>("StartChatWork"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartChatWorkResponse Alibabacloud_Aiccs20191015::Client::startChatWork(shared_ptr<StartChatWorkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startChatWorkWithOptions(request, runtime);
}

HangUpDoubleCallResponse Alibabacloud_Aiccs20191015::Client::hangUpDoubleCallWithOptions(shared_ptr<HangUpDoubleCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HangUpDoubleCallResponse(doRPCRequest(make_shared<string>("HangUpDoubleCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HangUpDoubleCallResponse Alibabacloud_Aiccs20191015::Client::hangUpDoubleCall(shared_ptr<HangUpDoubleCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hangUpDoubleCallWithOptions(request, runtime);
}

UpdateAgentResponse Alibabacloud_Aiccs20191015::Client::updateAgentWithOptions(shared_ptr<UpdateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAgentResponse(doRPCRequest(make_shared<string>("UpdateAgent"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAgentResponse Alibabacloud_Aiccs20191015::Client::updateAgent(shared_ptr<UpdateAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAgentWithOptions(request, runtime);
}

EditQualityRuleTagResponse Alibabacloud_Aiccs20191015::Client::editQualityRuleTagWithOptions(shared_ptr<EditQualityRuleTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EditQualityRuleTagResponse(doRPCRequest(make_shared<string>("EditQualityRuleTag"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EditQualityRuleTagResponse Alibabacloud_Aiccs20191015::Client::editQualityRuleTag(shared_ptr<EditQualityRuleTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editQualityRuleTagWithOptions(request, runtime);
}

GetOnlineServiceVolumeResponse Alibabacloud_Aiccs20191015::Client::getOnlineServiceVolumeWithOptions(shared_ptr<GetOnlineServiceVolumeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetOnlineServiceVolumeShrinkRequest> request = make_shared<GetOnlineServiceVolumeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetOnlineServiceVolumeResponse(doRPCRequest(make_shared<string>("GetOnlineServiceVolume"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOnlineServiceVolumeResponse Alibabacloud_Aiccs20191015::Client::getOnlineServiceVolume(shared_ptr<GetOnlineServiceVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOnlineServiceVolumeWithOptions(request, runtime);
}

DeleteOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::deleteOutboundTaskWithOptions(shared_ptr<DeleteOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteOutboundTaskResponse(doRPCRequest(make_shared<string>("DeleteOutboundTask"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::deleteOutboundTask(shared_ptr<DeleteOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOutboundTaskWithOptions(request, runtime);
}

AddOuterAccountResponse Alibabacloud_Aiccs20191015::Client::addOuterAccountWithOptions(shared_ptr<AddOuterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return AddOuterAccountResponse(doRPCRequest(make_shared<string>("AddOuterAccount"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddOuterAccountResponse Alibabacloud_Aiccs20191015::Client::addOuterAccount(shared_ptr<AddOuterAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addOuterAccountWithOptions(request, runtime);
}

GetAgentByIdResponse Alibabacloud_Aiccs20191015::Client::getAgentByIdWithOptions(shared_ptr<GetAgentByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAgentByIdResponse(doRPCRequest(make_shared<string>("GetAgentById"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentByIdResponse Alibabacloud_Aiccs20191015::Client::getAgentById(shared_ptr<GetAgentByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentByIdWithOptions(request, runtime);
}

GetQualityRuleDetailResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleDetailWithOptions(shared_ptr<GetQualityRuleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityRuleDetailResponse(doRPCRequest(make_shared<string>("GetQualityRuleDetail"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityRuleDetailResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleDetail(shared_ptr<GetQualityRuleDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityRuleDetailWithOptions(request, runtime);
}

GetQualityProjectLogResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectLogWithOptions(shared_ptr<GetQualityProjectLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityProjectLogResponse(doRPCRequest(make_shared<string>("GetQualityProjectLog"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityProjectLogResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectLog(shared_ptr<GetQualityProjectLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityProjectLogWithOptions(request, runtime);
}

ListHotlineRecordDetailResponse Alibabacloud_Aiccs20191015::Client::listHotlineRecordDetailWithOptions(shared_ptr<ListHotlineRecordDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListHotlineRecordDetailResponse(doRPCRequest(make_shared<string>("ListHotlineRecordDetail"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHotlineRecordDetailResponse Alibabacloud_Aiccs20191015::Client::listHotlineRecordDetail(shared_ptr<ListHotlineRecordDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotlineRecordDetailWithOptions(request, runtime);
}

GetHotlineMessageLogResponse Alibabacloud_Aiccs20191015::Client::getHotlineMessageLogWithOptions(shared_ptr<GetHotlineMessageLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetHotlineMessageLogResponse(doRPCRequest(make_shared<string>("GetHotlineMessageLog"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineMessageLogResponse Alibabacloud_Aiccs20191015::Client::getHotlineMessageLog(shared_ptr<GetHotlineMessageLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineMessageLogWithOptions(request, runtime);
}

GetQualityProjectListResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectListWithOptions(shared_ptr<GetQualityProjectListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityProjectListResponse(doRPCRequest(make_shared<string>("GetQualityProjectList"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityProjectListResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectList(shared_ptr<GetQualityProjectListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityProjectListWithOptions(request, runtime);
}

CreateOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::createOutboundTaskWithOptions(shared_ptr<CreateOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOutboundTaskResponse(doRPCRequest(make_shared<string>("CreateOutboundTask"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::createOutboundTask(shared_ptr<CreateOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOutboundTaskWithOptions(request, runtime);
}

GetHotlineRuntimeInfoResponse Alibabacloud_Aiccs20191015::Client::getHotlineRuntimeInfoWithOptions(shared_ptr<GetHotlineRuntimeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetHotlineRuntimeInfoResponse(doRPCRequest(make_shared<string>("GetHotlineRuntimeInfo"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineRuntimeInfoResponse Alibabacloud_Aiccs20191015::Client::getHotlineRuntimeInfo(shared_ptr<GetHotlineRuntimeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineRuntimeInfoWithOptions(request, runtime);
}

MakeDoubleCallResponse Alibabacloud_Aiccs20191015::Client::makeDoubleCallWithOptions(shared_ptr<MakeDoubleCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MakeDoubleCallResponse(doRPCRequest(make_shared<string>("MakeDoubleCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MakeDoubleCallResponse Alibabacloud_Aiccs20191015::Client::makeDoubleCall(shared_ptr<MakeDoubleCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return makeDoubleCallWithOptions(request, runtime);
}

GetSkillGroupAgentStatusDetailsResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupAgentStatusDetailsWithOptions(shared_ptr<GetSkillGroupAgentStatusDetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupAgentStatusDetailsShrinkRequest> request = make_shared<GetSkillGroupAgentStatusDetailsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSkillGroupAgentStatusDetailsResponse(doRPCRequest(make_shared<string>("GetSkillGroupAgentStatusDetails"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSkillGroupAgentStatusDetailsResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupAgentStatusDetails(shared_ptr<GetSkillGroupAgentStatusDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupAgentStatusDetailsWithOptions(request, runtime);
}

GetAgentServiceStatusResponse Alibabacloud_Aiccs20191015::Client::getAgentServiceStatusWithOptions(shared_ptr<GetAgentServiceStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAgentServiceStatusShrinkRequest> request = make_shared<GetAgentServiceStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAgentServiceStatusResponse(doRPCRequest(make_shared<string>("GetAgentServiceStatus"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentServiceStatusResponse Alibabacloud_Aiccs20191015::Client::getAgentServiceStatus(shared_ptr<GetAgentServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentServiceStatusWithOptions(request, runtime);
}

GetNumLocationResponse Alibabacloud_Aiccs20191015::Client::getNumLocationWithOptions(shared_ptr<GetNumLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetNumLocationResponse(doRPCRequest(make_shared<string>("GetNumLocation"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNumLocationResponse Alibabacloud_Aiccs20191015::Client::getNumLocation(shared_ptr<GetNumLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNumLocationWithOptions(request, runtime);
}

GetQualityRuleListResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleListWithOptions(shared_ptr<GetQualityRuleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityRuleListResponse(doRPCRequest(make_shared<string>("GetQualityRuleList"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityRuleListResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleList(shared_ptr<GetQualityRuleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityRuleListWithOptions(request, runtime);
}

ListOutboundPhoneNumberResponse Alibabacloud_Aiccs20191015::Client::listOutboundPhoneNumberWithOptions(shared_ptr<ListOutboundPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListOutboundPhoneNumberResponse(doRPCRequest(make_shared<string>("ListOutboundPhoneNumber"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOutboundPhoneNumberResponse Alibabacloud_Aiccs20191015::Client::listOutboundPhoneNumber(shared_ptr<ListOutboundPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOutboundPhoneNumberWithOptions(request, runtime);
}

ListAgentBySkillGroupIdResponse Alibabacloud_Aiccs20191015::Client::listAgentBySkillGroupIdWithOptions(shared_ptr<ListAgentBySkillGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListAgentBySkillGroupIdResponse(doRPCRequest(make_shared<string>("ListAgentBySkillGroupId"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentBySkillGroupIdResponse Alibabacloud_Aiccs20191015::Client::listAgentBySkillGroupId(shared_ptr<ListAgentBySkillGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentBySkillGroupIdWithOptions(request, runtime);
}

HangupThirdCallResponse Alibabacloud_Aiccs20191015::Client::hangupThirdCallWithOptions(shared_ptr<HangupThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HangupThirdCallResponse(doRPCRequest(make_shared<string>("HangupThirdCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HangupThirdCallResponse Alibabacloud_Aiccs20191015::Client::hangupThirdCall(shared_ptr<HangupThirdCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hangupThirdCallWithOptions(request, runtime);
}

StartHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::startHotlineServiceWithOptions(shared_ptr<StartHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartHotlineServiceResponse(doRPCRequest(make_shared<string>("StartHotlineService"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::startHotlineService(shared_ptr<StartHotlineServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startHotlineServiceWithOptions(request, runtime);
}

GetAgentResponse Alibabacloud_Aiccs20191015::Client::getAgentWithOptions(shared_ptr<GetAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAgentResponse(doRPCRequest(make_shared<string>("GetAgent"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentResponse Alibabacloud_Aiccs20191015::Client::getAgent(shared_ptr<GetAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentWithOptions(request, runtime);
}

GetAgentIndexRealTimeResponse Alibabacloud_Aiccs20191015::Client::getAgentIndexRealTimeWithOptions(shared_ptr<GetAgentIndexRealTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAgentIndexRealTimeResponse(doRPCRequest(make_shared<string>("GetAgentIndexRealTime"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentIndexRealTimeResponse Alibabacloud_Aiccs20191015::Client::getAgentIndexRealTime(shared_ptr<GetAgentIndexRealTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentIndexRealTimeWithOptions(request, runtime);
}

GetHotlineGroupDetailReportResponse Alibabacloud_Aiccs20191015::Client::getHotlineGroupDetailReportWithOptions(shared_ptr<GetHotlineGroupDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHotlineGroupDetailReportResponse(doRPCRequest(make_shared<string>("GetHotlineGroupDetailReport"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineGroupDetailReportResponse Alibabacloud_Aiccs20191015::Client::getHotlineGroupDetailReport(shared_ptr<GetHotlineGroupDetailReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineGroupDetailReportWithOptions(request, runtime);
}

EncryptPhoneNumResponse Alibabacloud_Aiccs20191015::Client::encryptPhoneNumWithOptions(shared_ptr<EncryptPhoneNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return EncryptPhoneNumResponse(doRPCRequest(make_shared<string>("EncryptPhoneNum"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EncryptPhoneNumResponse Alibabacloud_Aiccs20191015::Client::encryptPhoneNum(shared_ptr<EncryptPhoneNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return encryptPhoneNumWithOptions(request, runtime);
}

GetInstanceListResponse Alibabacloud_Aiccs20191015::Client::getInstanceListWithOptions(shared_ptr<GetInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceListResponse(doRPCRequest(make_shared<string>("GetInstanceList"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceListResponse Alibabacloud_Aiccs20191015::Client::getInstanceList(shared_ptr<GetInstanceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceListWithOptions(request, runtime);
}

GetQualityProjectDetailResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectDetailWithOptions(shared_ptr<GetQualityProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityProjectDetailResponse(doRPCRequest(make_shared<string>("GetQualityProjectDetail"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityProjectDetailResponse Alibabacloud_Aiccs20191015::Client::getQualityProjectDetail(shared_ptr<GetQualityProjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityProjectDetailWithOptions(request, runtime);
}

SendCcoSmartCallOperateResponse Alibabacloud_Aiccs20191015::Client::sendCcoSmartCallOperateWithOptions(shared_ptr<SendCcoSmartCallOperateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendCcoSmartCallOperateResponse(doRPCRequest(make_shared<string>("SendCcoSmartCallOperate"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendCcoSmartCallOperateResponse Alibabacloud_Aiccs20191015::Client::sendCcoSmartCallOperate(shared_ptr<SendCcoSmartCallOperateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCcoSmartCallOperateWithOptions(request, runtime);
}

AnswerCallResponse Alibabacloud_Aiccs20191015::Client::answerCallWithOptions(shared_ptr<AnswerCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AnswerCallResponse(doRPCRequest(make_shared<string>("AnswerCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AnswerCallResponse Alibabacloud_Aiccs20191015::Client::answerCall(shared_ptr<AnswerCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return answerCallWithOptions(request, runtime);
}

StartMicroOutboundResponse Alibabacloud_Aiccs20191015::Client::startMicroOutboundWithOptions(shared_ptr<StartMicroOutboundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartMicroOutboundResponse(doRPCRequest(make_shared<string>("StartMicroOutbound"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartMicroOutboundResponse Alibabacloud_Aiccs20191015::Client::startMicroOutbound(shared_ptr<StartMicroOutboundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMicroOutboundWithOptions(request, runtime);
}

SuspendHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::suspendHotlineServiceWithOptions(shared_ptr<SuspendHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SuspendHotlineServiceResponse(doRPCRequest(make_shared<string>("SuspendHotlineService"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SuspendHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::suspendHotlineService(shared_ptr<SuspendHotlineServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendHotlineServiceWithOptions(request, runtime);
}

GetAgentStatisticsResponse Alibabacloud_Aiccs20191015::Client::getAgentStatisticsWithOptions(shared_ptr<GetAgentStatisticsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAgentStatisticsShrinkRequest> request = make_shared<GetAgentStatisticsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAgentStatisticsResponse(doRPCRequest(make_shared<string>("GetAgentStatistics"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentStatisticsResponse Alibabacloud_Aiccs20191015::Client::getAgentStatistics(shared_ptr<GetAgentStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentStatisticsWithOptions(request, runtime);
}

UpdateOuterAccountResponse Alibabacloud_Aiccs20191015::Client::updateOuterAccountWithOptions(shared_ptr<UpdateOuterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return UpdateOuterAccountResponse(doRPCRequest(make_shared<string>("UpdateOuterAccount"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateOuterAccountResponse Alibabacloud_Aiccs20191015::Client::updateOuterAccount(shared_ptr<UpdateOuterAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOuterAccountWithOptions(request, runtime);
}

GetHotlineWaitingNumberResponse Alibabacloud_Aiccs20191015::Client::getHotlineWaitingNumberWithOptions(shared_ptr<GetHotlineWaitingNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetHotlineWaitingNumberResponse(doRPCRequest(make_shared<string>("GetHotlineWaitingNumber"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineWaitingNumberResponse Alibabacloud_Aiccs20191015::Client::getHotlineWaitingNumber(shared_ptr<GetHotlineWaitingNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineWaitingNumberWithOptions(request, runtime);
}

HoldCallResponse Alibabacloud_Aiccs20191015::Client::holdCallWithOptions(shared_ptr<HoldCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HoldCallResponse(doRPCRequest(make_shared<string>("HoldCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HoldCallResponse Alibabacloud_Aiccs20191015::Client::holdCall(shared_ptr<HoldCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return holdCallWithOptions(request, runtime);
}

GetSeatInformationResponse Alibabacloud_Aiccs20191015::Client::getSeatInformationWithOptions(shared_ptr<GetSeatInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSeatInformationShrinkRequest> request = make_shared<GetSeatInformationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("depIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSeatInformationResponse(doRPCRequest(make_shared<string>("GetSeatInformation"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSeatInformationResponse Alibabacloud_Aiccs20191015::Client::getSeatInformation(shared_ptr<GetSeatInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSeatInformationWithOptions(request, runtime);
}

GetRtcTokenResponse Alibabacloud_Aiccs20191015::Client::getRtcTokenWithOptions(shared_ptr<GetRtcTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetRtcTokenResponse(doRPCRequest(make_shared<string>("GetRtcToken"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRtcTokenResponse Alibabacloud_Aiccs20191015::Client::getRtcToken(shared_ptr<GetRtcTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRtcTokenWithOptions(request, runtime);
}

GetSkillGroupAndAgentStatusSummaryResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupAndAgentStatusSummaryWithOptions(shared_ptr<GetSkillGroupAndAgentStatusSummaryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupAndAgentStatusSummaryShrinkRequest> request = make_shared<GetSkillGroupAndAgentStatusSummaryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSkillGroupAndAgentStatusSummaryResponse(doRPCRequest(make_shared<string>("GetSkillGroupAndAgentStatusSummary"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSkillGroupAndAgentStatusSummaryResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupAndAgentStatusSummary(shared_ptr<GetSkillGroupAndAgentStatusSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupAndAgentStatusSummaryWithOptions(request, runtime);
}

GetRecordDataResponse Alibabacloud_Aiccs20191015::Client::getRecordDataWithOptions(shared_ptr<GetRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRecordDataResponse(doRPCRequest(make_shared<string>("GetRecordData"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRecordDataResponse Alibabacloud_Aiccs20191015::Client::getRecordData(shared_ptr<GetRecordDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRecordDataWithOptions(request, runtime);
}

GetSkillGroupLatitudeStateResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupLatitudeStateWithOptions(shared_ptr<GetSkillGroupLatitudeStateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupLatitudeStateShrinkRequest> request = make_shared<GetSkillGroupLatitudeStateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSkillGroupLatitudeStateResponse(doRPCRequest(make_shared<string>("GetSkillGroupLatitudeState"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSkillGroupLatitudeStateResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupLatitudeState(shared_ptr<GetSkillGroupLatitudeStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupLatitudeStateWithOptions(request, runtime);
}

DeleteQualityRuleResponse Alibabacloud_Aiccs20191015::Client::deleteQualityRuleWithOptions(shared_ptr<DeleteQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteQualityRuleResponse(doRPCRequest(make_shared<string>("DeleteQualityRule"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQualityRuleResponse Alibabacloud_Aiccs20191015::Client::deleteQualityRule(shared_ptr<DeleteQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityRuleWithOptions(request, runtime);
}

SuspendOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::suspendOutboundTaskWithOptions(shared_ptr<SuspendOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SuspendOutboundTaskResponse(doRPCRequest(make_shared<string>("SuspendOutboundTask"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SuspendOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::suspendOutboundTask(shared_ptr<SuspendOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendOutboundTaskWithOptions(request, runtime);
}

GetHotlineServiceStatisticsResponse Alibabacloud_Aiccs20191015::Client::getHotlineServiceStatisticsWithOptions(shared_ptr<GetHotlineServiceStatisticsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetHotlineServiceStatisticsShrinkRequest> request = make_shared<GetHotlineServiceStatisticsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetHotlineServiceStatisticsResponse(doRPCRequest(make_shared<string>("GetHotlineServiceStatistics"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineServiceStatisticsResponse Alibabacloud_Aiccs20191015::Client::getHotlineServiceStatistics(shared_ptr<GetHotlineServiceStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineServiceStatisticsWithOptions(request, runtime);
}

EditQualityProjectResponse Alibabacloud_Aiccs20191015::Client::editQualityProjectWithOptions(shared_ptr<EditQualityProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EditQualityProjectResponse(doRPCRequest(make_shared<string>("EditQualityProject"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EditQualityProjectResponse Alibabacloud_Aiccs20191015::Client::editQualityProject(shared_ptr<EditQualityProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editQualityProjectWithOptions(request, runtime);
}

ListOuterOrderedNumbersResponse Alibabacloud_Aiccs20191015::Client::listOuterOrderedNumbersWithOptions(shared_ptr<ListOuterOrderedNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOuterOrderedNumbersResponse(doRPCRequest(make_shared<string>("ListOuterOrderedNumbers"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOuterOrderedNumbersResponse Alibabacloud_Aiccs20191015::Client::listOuterOrderedNumbers(shared_ptr<ListOuterOrderedNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOuterOrderedNumbersWithOptions(request, runtime);
}

GetAgentBasisStatusResponse Alibabacloud_Aiccs20191015::Client::getAgentBasisStatusWithOptions(shared_ptr<GetAgentBasisStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAgentBasisStatusShrinkRequest> request = make_shared<GetAgentBasisStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAgentBasisStatusResponse(doRPCRequest(make_shared<string>("GetAgentBasisStatus"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentBasisStatusResponse Alibabacloud_Aiccs20191015::Client::getAgentBasisStatus(shared_ptr<GetAgentBasisStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentBasisStatusWithOptions(request, runtime);
}

GetQualityResultResponse Alibabacloud_Aiccs20191015::Client::getQualityResultWithOptions(shared_ptr<GetQualityResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityResultResponse(doRPCRequest(make_shared<string>("GetQualityResult"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityResultResponse Alibabacloud_Aiccs20191015::Client::getQualityResult(shared_ptr<GetQualityResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityResultWithOptions(request, runtime);
}

GetIndexCurrentValueResponse Alibabacloud_Aiccs20191015::Client::getIndexCurrentValueWithOptions(shared_ptr<GetIndexCurrentValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetIndexCurrentValueResponse(doRPCRequest(make_shared<string>("GetIndexCurrentValue"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetIndexCurrentValueResponse Alibabacloud_Aiccs20191015::Client::getIndexCurrentValue(shared_ptr<GetIndexCurrentValueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIndexCurrentValueWithOptions(request, runtime);
}

GenerateWebSocketSignResponse Alibabacloud_Aiccs20191015::Client::generateWebSocketSignWithOptions(shared_ptr<GenerateWebSocketSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateWebSocketSignResponse(doRPCRequest(make_shared<string>("GenerateWebSocketSign"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateWebSocketSignResponse Alibabacloud_Aiccs20191015::Client::generateWebSocketSign(shared_ptr<GenerateWebSocketSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateWebSocketSignWithOptions(request, runtime);
}

CreateAgentResponse Alibabacloud_Aiccs20191015::Client::createAgentWithOptions(shared_ptr<CreateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAgentResponse(doRPCRequest(make_shared<string>("CreateAgent"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAgentResponse Alibabacloud_Aiccs20191015::Client::createAgent(shared_ptr<CreateAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAgentWithOptions(request, runtime);
}

QueryTaskDetailResponse Alibabacloud_Aiccs20191015::Client::queryTaskDetailWithOptions(shared_ptr<QueryTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTaskDetailResponse(doRPCRequest(make_shared<string>("QueryTaskDetail"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTaskDetailResponse Alibabacloud_Aiccs20191015::Client::queryTaskDetail(shared_ptr<QueryTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskDetailWithOptions(request, runtime);
}

EditQualityRuleResponse Alibabacloud_Aiccs20191015::Client::editQualityRuleWithOptions(shared_ptr<EditQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EditQualityRuleResponse(doRPCRequest(make_shared<string>("EditQualityRule"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EditQualityRuleResponse Alibabacloud_Aiccs20191015::Client::editQualityRule(shared_ptr<EditQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editQualityRuleWithOptions(request, runtime);
}

GetMcuLvsIpResponse Alibabacloud_Aiccs20191015::Client::getMcuLvsIpWithOptions(shared_ptr<GetMcuLvsIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetMcuLvsIpResponse(doRPCRequest(make_shared<string>("GetMcuLvsIp"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMcuLvsIpResponse Alibabacloud_Aiccs20191015::Client::getMcuLvsIp(shared_ptr<GetMcuLvsIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMcuLvsIpWithOptions(request, runtime);
}

GetDepGroupTreeDataResponse Alibabacloud_Aiccs20191015::Client::getDepGroupTreeDataWithOptions(shared_ptr<GetDepGroupTreeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetDepGroupTreeDataResponse(doRPCRequest(make_shared<string>("GetDepGroupTreeData"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDepGroupTreeDataResponse Alibabacloud_Aiccs20191015::Client::getDepGroupTreeData(shared_ptr<GetDepGroupTreeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDepGroupTreeDataWithOptions(request, runtime);
}

DeleteAgentResponse Alibabacloud_Aiccs20191015::Client::deleteAgentWithOptions(shared_ptr<DeleteAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAgentResponse(doRPCRequest(make_shared<string>("DeleteAgent"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAgentResponse Alibabacloud_Aiccs20191015::Client::deleteAgent(shared_ptr<DeleteAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAgentWithOptions(request, runtime);
}

GetCustomerInfoResponse Alibabacloud_Aiccs20191015::Client::getCustomerInfoWithOptions(shared_ptr<GetCustomerInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetCustomerInfoResponse(doRPCRequest(make_shared<string>("GetCustomerInfo"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCustomerInfoResponse Alibabacloud_Aiccs20191015::Client::getCustomerInfo(shared_ptr<GetCustomerInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomerInfoWithOptions(request, runtime);
}

GetHotlineAgentDetailReportResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentDetailReportWithOptions(shared_ptr<GetHotlineAgentDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHotlineAgentDetailReportResponse(doRPCRequest(make_shared<string>("GetHotlineAgentDetailReport"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineAgentDetailReportResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentDetailReport(shared_ptr<GetHotlineAgentDetailReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineAgentDetailReportWithOptions(request, runtime);
}

SendCcoSmartCallResponse Alibabacloud_Aiccs20191015::Client::sendCcoSmartCallWithOptions(shared_ptr<SendCcoSmartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendCcoSmartCallResponse(doRPCRequest(make_shared<string>("SendCcoSmartCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendCcoSmartCallResponse Alibabacloud_Aiccs20191015::Client::sendCcoSmartCall(shared_ptr<SendCcoSmartCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCcoSmartCallWithOptions(request, runtime);
}

ListChatRecordDetailResponse Alibabacloud_Aiccs20191015::Client::listChatRecordDetailWithOptions(shared_ptr<ListChatRecordDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListChatRecordDetailResponse(doRPCRequest(make_shared<string>("ListChatRecordDetail"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListChatRecordDetailResponse Alibabacloud_Aiccs20191015::Client::listChatRecordDetail(shared_ptr<ListChatRecordDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChatRecordDetailWithOptions(request, runtime);
}

AddSkillGroupResponse Alibabacloud_Aiccs20191015::Client::addSkillGroupWithOptions(shared_ptr<AddSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return AddSkillGroupResponse(doRPCRequest(make_shared<string>("AddSkillGroup"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSkillGroupResponse Alibabacloud_Aiccs20191015::Client::addSkillGroup(shared_ptr<AddSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSkillGroupWithOptions(request, runtime);
}

HangupCallResponse Alibabacloud_Aiccs20191015::Client::hangupCallWithOptions(shared_ptr<HangupCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HangupCallResponse(doRPCRequest(make_shared<string>("HangupCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HangupCallResponse Alibabacloud_Aiccs20191015::Client::hangupCall(shared_ptr<HangupCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hangupCallWithOptions(request, runtime);
}

DeleteSkillGroupResponse Alibabacloud_Aiccs20191015::Client::deleteSkillGroupWithOptions(shared_ptr<DeleteSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteSkillGroupResponse(doRPCRequest(make_shared<string>("DeleteSkillGroup"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSkillGroupResponse Alibabacloud_Aiccs20191015::Client::deleteSkillGroup(shared_ptr<DeleteSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSkillGroupWithOptions(request, runtime);
}

CreateQualityProjectResponse Alibabacloud_Aiccs20191015::Client::createQualityProjectWithOptions(shared_ptr<CreateQualityProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateQualityProjectResponse(doRPCRequest(make_shared<string>("CreateQualityProject"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateQualityProjectResponse Alibabacloud_Aiccs20191015::Client::createQualityProject(shared_ptr<CreateQualityProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityProjectWithOptions(request, runtime);
}

QuerySkillGroupsResponse Alibabacloud_Aiccs20191015::Client::querySkillGroupsWithOptions(shared_ptr<QuerySkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySkillGroupsResponse(doRPCRequest(make_shared<string>("QuerySkillGroups"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySkillGroupsResponse Alibabacloud_Aiccs20191015::Client::querySkillGroups(shared_ptr<QuerySkillGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySkillGroupsWithOptions(request, runtime);
}

CreateQualityRuleResponse Alibabacloud_Aiccs20191015::Client::createQualityRuleWithOptions(shared_ptr<CreateQualityRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateQualityRuleResponse(doRPCRequest(make_shared<string>("CreateQualityRule"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateQualityRuleResponse Alibabacloud_Aiccs20191015::Client::createQualityRule(shared_ptr<CreateQualityRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createQualityRuleWithOptions(request, runtime);
}

ListRolesResponse Alibabacloud_Aiccs20191015::Client::listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListRolesResponse(doRPCRequest(make_shared<string>("ListRoles"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRolesResponse Alibabacloud_Aiccs20191015::Client::listRoles(shared_ptr<ListRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRolesWithOptions(request, runtime);
}

GetHotlineCallActionResponse Alibabacloud_Aiccs20191015::Client::getHotlineCallActionWithOptions(shared_ptr<GetHotlineCallActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHotlineCallActionResponse(doRPCRequest(make_shared<string>("GetHotlineCallAction"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineCallActionResponse Alibabacloud_Aiccs20191015::Client::getHotlineCallAction(shared_ptr<GetHotlineCallActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineCallActionWithOptions(request, runtime);
}

ListSkillGroupResponse Alibabacloud_Aiccs20191015::Client::listSkillGroupWithOptions(shared_ptr<ListSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListSkillGroupResponse(doRPCRequest(make_shared<string>("ListSkillGroup"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupResponse Alibabacloud_Aiccs20191015::Client::listSkillGroup(shared_ptr<ListSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupWithOptions(request, runtime);
}

GetOnlineSeatInformationResponse Alibabacloud_Aiccs20191015::Client::getOnlineSeatInformationWithOptions(shared_ptr<GetOnlineSeatInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetOnlineSeatInformationShrinkRequest> request = make_shared<GetOnlineSeatInformationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetOnlineSeatInformationResponse(doRPCRequest(make_shared<string>("GetOnlineSeatInformation"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOnlineSeatInformationResponse Alibabacloud_Aiccs20191015::Client::getOnlineSeatInformation(shared_ptr<GetOnlineSeatInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOnlineSeatInformationWithOptions(request, runtime);
}

DeleteQualityProjectResponse Alibabacloud_Aiccs20191015::Client::deleteQualityProjectWithOptions(shared_ptr<DeleteQualityProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteQualityProjectResponse(doRPCRequest(make_shared<string>("DeleteQualityProject"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteQualityProjectResponse Alibabacloud_Aiccs20191015::Client::deleteQualityProject(shared_ptr<DeleteQualityProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteQualityProjectWithOptions(request, runtime);
}

QueryTouchListResponse Alibabacloud_Aiccs20191015::Client::queryTouchListWithOptions(shared_ptr<QueryTouchListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTouchListResponse(doRPCRequest(make_shared<string>("QueryTouchList"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTouchListResponse Alibabacloud_Aiccs20191015::Client::queryTouchList(shared_ptr<QueryTouchListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTouchListWithOptions(request, runtime);
}

QueryHotlineInQueueResponse Alibabacloud_Aiccs20191015::Client::queryHotlineInQueueWithOptions(shared_ptr<QueryHotlineInQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryHotlineInQueueResponse(doRPCRequest(make_shared<string>("QueryHotlineInQueue"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryHotlineInQueueResponse Alibabacloud_Aiccs20191015::Client::queryHotlineInQueue(shared_ptr<QueryHotlineInQueueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHotlineInQueueWithOptions(request, runtime);
}

FinishHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::finishHotlineServiceWithOptions(shared_ptr<FinishHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FinishHotlineServiceResponse(doRPCRequest(make_shared<string>("FinishHotlineService"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FinishHotlineServiceResponse Alibabacloud_Aiccs20191015::Client::finishHotlineService(shared_ptr<FinishHotlineServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return finishHotlineServiceWithOptions(request, runtime);
}

ListOutboundStrategiesResponse Alibabacloud_Aiccs20191015::Client::listOutboundStrategiesWithOptions(shared_ptr<ListOutboundStrategiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOutboundStrategiesResponse(doRPCRequest(make_shared<string>("ListOutboundStrategies"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOutboundStrategiesResponse Alibabacloud_Aiccs20191015::Client::listOutboundStrategies(shared_ptr<ListOutboundStrategiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOutboundStrategiesWithOptions(request, runtime);
}

ListHotlineRecordResponse Alibabacloud_Aiccs20191015::Client::listHotlineRecordWithOptions(shared_ptr<ListHotlineRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListHotlineRecordResponse(doRPCRequest(make_shared<string>("ListHotlineRecord"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHotlineRecordResponse Alibabacloud_Aiccs20191015::Client::listHotlineRecord(shared_ptr<ListHotlineRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotlineRecordWithOptions(request, runtime);
}

ChangeQualityProjectStatusResponse Alibabacloud_Aiccs20191015::Client::changeQualityProjectStatusWithOptions(shared_ptr<ChangeQualityProjectStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeQualityProjectStatusResponse(doRPCRequest(make_shared<string>("ChangeQualityProjectStatus"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeQualityProjectStatusResponse Alibabacloud_Aiccs20191015::Client::changeQualityProjectStatus(shared_ptr<ChangeQualityProjectStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeQualityProjectStatusWithOptions(request, runtime);
}

TransferCallToSkillGroupResponse Alibabacloud_Aiccs20191015::Client::transferCallToSkillGroupWithOptions(shared_ptr<TransferCallToSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TransferCallToSkillGroupResponse(doRPCRequest(make_shared<string>("TransferCallToSkillGroup"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TransferCallToSkillGroupResponse Alibabacloud_Aiccs20191015::Client::transferCallToSkillGroup(shared_ptr<TransferCallToSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferCallToSkillGroupWithOptions(request, runtime);
}

GetSkillGroupServiceCapabilityResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupServiceCapabilityWithOptions(shared_ptr<GetSkillGroupServiceCapabilityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupServiceCapabilityShrinkRequest> request = make_shared<GetSkillGroupServiceCapabilityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSkillGroupServiceCapabilityResponse(doRPCRequest(make_shared<string>("GetSkillGroupServiceCapability"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSkillGroupServiceCapabilityResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupServiceCapability(shared_ptr<GetSkillGroupServiceCapabilityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupServiceCapabilityWithOptions(request, runtime);
}

RemoveSkillGroupResponse Alibabacloud_Aiccs20191015::Client::removeSkillGroupWithOptions(shared_ptr<RemoveSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveSkillGroupResponse(doRPCRequest(make_shared<string>("RemoveSkillGroup"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveSkillGroupResponse Alibabacloud_Aiccs20191015::Client::removeSkillGroup(shared_ptr<RemoveSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSkillGroupWithOptions(request, runtime);
}

StartCallV2Response Alibabacloud_Aiccs20191015::Client::startCallV2WithOptions(shared_ptr<StartCallV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartCallV2Response(doRPCRequest(make_shared<string>("StartCallV2"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartCallV2Response Alibabacloud_Aiccs20191015::Client::startCallV2(shared_ptr<StartCallV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCallV2WithOptions(request, runtime);
}

ChangeChatAgentStatusResponse Alibabacloud_Aiccs20191015::Client::changeChatAgentStatusWithOptions(shared_ptr<ChangeChatAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeChatAgentStatusResponse(doRPCRequest(make_shared<string>("ChangeChatAgentStatus"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeChatAgentStatusResponse Alibabacloud_Aiccs20191015::Client::changeChatAgentStatus(shared_ptr<ChangeChatAgentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeChatAgentStatusWithOptions(request, runtime);
}

DescribeRecordDataResponse Alibabacloud_Aiccs20191015::Client::describeRecordDataWithOptions(shared_ptr<DescribeRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRecordDataResponse(doRPCRequest(make_shared<string>("DescribeRecordData"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRecordDataResponse Alibabacloud_Aiccs20191015::Client::describeRecordData(shared_ptr<DescribeRecordDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecordDataWithOptions(request, runtime);
}

DeleteOuterAccountResponse Alibabacloud_Aiccs20191015::Client::deleteOuterAccountWithOptions(shared_ptr<DeleteOuterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DeleteOuterAccountResponse(doRPCRequest(make_shared<string>("DeleteOuterAccount"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteOuterAccountResponse Alibabacloud_Aiccs20191015::Client::deleteOuterAccount(shared_ptr<DeleteOuterAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOuterAccountWithOptions(request, runtime);
}

GetDepartmentalLatitudeAgentStatusResponse Alibabacloud_Aiccs20191015::Client::getDepartmentalLatitudeAgentStatusWithOptions(shared_ptr<GetDepartmentalLatitudeAgentStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDepartmentalLatitudeAgentStatusShrinkRequest> request = make_shared<GetDepartmentalLatitudeAgentStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetDepartmentalLatitudeAgentStatusResponse(doRPCRequest(make_shared<string>("GetDepartmentalLatitudeAgentStatus"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDepartmentalLatitudeAgentStatusResponse Alibabacloud_Aiccs20191015::Client::getDepartmentalLatitudeAgentStatus(shared_ptr<GetDepartmentalLatitudeAgentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDepartmentalLatitudeAgentStatusWithOptions(request, runtime);
}

GetHotlineAgentDetailResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentDetailWithOptions(shared_ptr<GetHotlineAgentDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetHotlineAgentDetailResponse(doRPCRequest(make_shared<string>("GetHotlineAgentDetail"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineAgentDetailResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentDetail(shared_ptr<GetHotlineAgentDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineAgentDetailWithOptions(request, runtime);
}

MakeCallResponse Alibabacloud_Aiccs20191015::Client::makeCallWithOptions(shared_ptr<MakeCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MakeCallResponse(doRPCRequest(make_shared<string>("MakeCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MakeCallResponse Alibabacloud_Aiccs20191015::Client::makeCall(shared_ptr<MakeCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return makeCallWithOptions(request, runtime);
}

FetchCallResponse Alibabacloud_Aiccs20191015::Client::fetchCallWithOptions(shared_ptr<FetchCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FetchCallResponse(doRPCRequest(make_shared<string>("FetchCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FetchCallResponse Alibabacloud_Aiccs20191015::Client::fetchCall(shared_ptr<FetchCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fetchCallWithOptions(request, runtime);
}

GetHotlineAgentStatusResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentStatusWithOptions(shared_ptr<GetHotlineAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHotlineAgentStatusResponse(doRPCRequest(make_shared<string>("GetHotlineAgentStatus"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineAgentStatusResponse Alibabacloud_Aiccs20191015::Client::getHotlineAgentStatus(shared_ptr<GetHotlineAgentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineAgentStatusWithOptions(request, runtime);
}

StartCallResponse Alibabacloud_Aiccs20191015::Client::startCallWithOptions(shared_ptr<StartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartCallResponse(doRPCRequest(make_shared<string>("StartCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartCallResponse Alibabacloud_Aiccs20191015::Client::startCall(shared_ptr<StartCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCallWithOptions(request, runtime);
}

GetQualityRuleTagListResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleTagListWithOptions(shared_ptr<GetQualityRuleTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetQualityRuleTagListResponse(doRPCRequest(make_shared<string>("GetQualityRuleTagList"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQualityRuleTagListResponse Alibabacloud_Aiccs20191015::Client::getQualityRuleTagList(shared_ptr<GetQualityRuleTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQualityRuleTagListWithOptions(request, runtime);
}

GetOutbounNumListResponse Alibabacloud_Aiccs20191015::Client::getOutbounNumListWithOptions(shared_ptr<GetOutbounNumListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOutbounNumListResponse(doRPCRequest(make_shared<string>("GetOutbounNumList"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOutbounNumListResponse Alibabacloud_Aiccs20191015::Client::getOutbounNumList(shared_ptr<GetOutbounNumListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOutbounNumListWithOptions(request, runtime);
}

CreateThirdSsoAgentResponse Alibabacloud_Aiccs20191015::Client::createThirdSsoAgentWithOptions(shared_ptr<CreateThirdSsoAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateThirdSsoAgentResponse(doRPCRequest(make_shared<string>("CreateThirdSsoAgent"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateThirdSsoAgentResponse Alibabacloud_Aiccs20191015::Client::createThirdSsoAgent(shared_ptr<CreateThirdSsoAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createThirdSsoAgentWithOptions(request, runtime);
}

GetSkillGroupStatusTotalResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupStatusTotalWithOptions(shared_ptr<GetSkillGroupStatusTotalRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupStatusTotalShrinkRequest> request = make_shared<GetSkillGroupStatusTotalShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSkillGroupStatusTotalResponse(doRPCRequest(make_shared<string>("GetSkillGroupStatusTotal"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSkillGroupStatusTotalResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupStatusTotal(shared_ptr<GetSkillGroupStatusTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupStatusTotalWithOptions(request, runtime);
}

BatchCreateQualityProjectsResponse Alibabacloud_Aiccs20191015::Client::batchCreateQualityProjectsWithOptions(shared_ptr<BatchCreateQualityProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchCreateQualityProjectsResponse(doRPCRequest(make_shared<string>("BatchCreateQualityProjects"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchCreateQualityProjectsResponse Alibabacloud_Aiccs20191015::Client::batchCreateQualityProjects(shared_ptr<BatchCreateQualityProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCreateQualityProjectsWithOptions(request, runtime);
}

InsertTaskDetailResponse Alibabacloud_Aiccs20191015::Client::insertTaskDetailWithOptions(shared_ptr<InsertTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InsertTaskDetailResponse(doRPCRequest(make_shared<string>("InsertTaskDetail"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InsertTaskDetailResponse Alibabacloud_Aiccs20191015::Client::insertTaskDetail(shared_ptr<InsertTaskDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertTaskDetailWithOptions(request, runtime);
}

UpdateSkillGroupResponse Alibabacloud_Aiccs20191015::Client::updateSkillGroupWithOptions(shared_ptr<UpdateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSkillGroupResponse(doRPCRequest(make_shared<string>("UpdateSkillGroup"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSkillGroupResponse Alibabacloud_Aiccs20191015::Client::updateSkillGroup(shared_ptr<UpdateSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSkillGroupWithOptions(request, runtime);
}

HotlineSessionQueryResponse Alibabacloud_Aiccs20191015::Client::hotlineSessionQueryWithOptions(shared_ptr<HotlineSessionQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HotlineSessionQueryResponse(doRPCRequest(make_shared<string>("HotlineSessionQuery"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HotlineSessionQueryResponse Alibabacloud_Aiccs20191015::Client::hotlineSessionQuery(shared_ptr<HotlineSessionQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hotlineSessionQueryWithOptions(request, runtime);
}

GetQueueInformationResponse Alibabacloud_Aiccs20191015::Client::getQueueInformationWithOptions(shared_ptr<GetQueueInformationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetQueueInformationShrinkRequest> request = make_shared<GetQueueInformationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetQueueInformationResponse(doRPCRequest(make_shared<string>("GetQueueInformation"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetQueueInformationResponse Alibabacloud_Aiccs20191015::Client::getQueueInformation(shared_ptr<GetQueueInformationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQueueInformationWithOptions(request, runtime);
}

GetSkillGroupServiceStatusResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupServiceStatusWithOptions(shared_ptr<GetSkillGroupServiceStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSkillGroupServiceStatusShrinkRequest> request = make_shared<GetSkillGroupServiceStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->groupIds)) {
    request->groupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->groupIds, make_shared<string>("GroupIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetSkillGroupServiceStatusResponse(doRPCRequest(make_shared<string>("GetSkillGroupServiceStatus"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSkillGroupServiceStatusResponse Alibabacloud_Aiccs20191015::Client::getSkillGroupServiceStatus(shared_ptr<GetSkillGroupServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSkillGroupServiceStatusWithOptions(request, runtime);
}

GetAgentDetailReportResponse Alibabacloud_Aiccs20191015::Client::getAgentDetailReportWithOptions(shared_ptr<GetAgentDetailReportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAgentDetailReportShrinkRequest> request = make_shared<GetAgentDetailReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->agentIds)) {
    request->agentIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->agentIds, make_shared<string>("AgentIds"), make_shared<string>("simple")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->depIds)) {
    request->depIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depIds, make_shared<string>("DepIds"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAgentDetailReportResponse(doRPCRequest(make_shared<string>("GetAgentDetailReport"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentDetailReportResponse Alibabacloud_Aiccs20191015::Client::getAgentDetailReport(shared_ptr<GetAgentDetailReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentDetailReportWithOptions(request, runtime);
}

QueryTicketsResponse Alibabacloud_Aiccs20191015::Client::queryTicketsWithOptions(shared_ptr<QueryTicketsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryTicketsShrinkRequest> request = make_shared<QueryTicketsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("Extra"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTicketsResponse(doRPCRequest(make_shared<string>("QueryTickets"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTicketsResponse Alibabacloud_Aiccs20191015::Client::queryTickets(shared_ptr<QueryTicketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTicketsWithOptions(request, runtime);
}

QueryOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::queryOutboundTaskWithOptions(shared_ptr<QueryOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOutboundTaskResponse(doRPCRequest(make_shared<string>("QueryOutboundTask"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::queryOutboundTask(shared_ptr<QueryOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOutboundTaskWithOptions(request, runtime);
}

JoinThirdCallResponse Alibabacloud_Aiccs20191015::Client::joinThirdCallWithOptions(shared_ptr<JoinThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return JoinThirdCallResponse(doRPCRequest(make_shared<string>("JoinThirdCall"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

JoinThirdCallResponse Alibabacloud_Aiccs20191015::Client::joinThirdCall(shared_ptr<JoinThirdCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinThirdCallWithOptions(request, runtime);
}

CreateSkillGroupResponse Alibabacloud_Aiccs20191015::Client::createSkillGroupWithOptions(shared_ptr<CreateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSkillGroupResponse(doRPCRequest(make_shared<string>("CreateSkillGroup"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSkillGroupResponse Alibabacloud_Aiccs20191015::Client::createSkillGroup(shared_ptr<CreateSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSkillGroupWithOptions(request, runtime);
}

RestartOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::restartOutboundTaskWithOptions(shared_ptr<RestartOutboundTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RestartOutboundTaskResponse(doRPCRequest(make_shared<string>("RestartOutboundTask"), make_shared<string>("2019-10-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RestartOutboundTaskResponse Alibabacloud_Aiccs20191015::Client::restartOutboundTask(shared_ptr<RestartOutboundTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartOutboundTaskWithOptions(request, runtime);
}

