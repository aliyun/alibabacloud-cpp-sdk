// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ccc20200701.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_CCC20200701;

Alibabacloud_CCC20200701::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "ccc.aliyuncs.com"},
    {"ap-south-1", "ccc.aliyuncs.com"},
    {"ap-southeast-1", "ccc.aliyuncs.com"},
    {"ap-southeast-2", "ccc.aliyuncs.com"},
    {"ap-southeast-3", "ccc.aliyuncs.com"},
    {"ap-southeast-5", "ccc.aliyuncs.com"},
    {"cn-beijing", "ccc.aliyuncs.com"},
    {"cn-chengdu", "ccc.aliyuncs.com"},
    {"cn-hongkong", "ccc.aliyuncs.com"},
    {"cn-huhehaote", "ccc.aliyuncs.com"},
    {"cn-qingdao", "ccc.aliyuncs.com"},
    {"cn-shenzhen", "ccc.aliyuncs.com"},
    {"cn-zhangjiakou", "ccc.aliyuncs.com"},
    {"eu-central-1", "ccc.aliyuncs.com"},
    {"eu-west-1", "ccc.aliyuncs.com"},
    {"me-east-1", "ccc.aliyuncs.com"},
    {"us-east-1", "ccc.aliyuncs.com"},
    {"us-west-1", "ccc.aliyuncs.com"},
    {"cn-hangzhou-finance", "ccc.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ccc.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ccc.aliyuncs.com"},
    {"cn-north-2-gov-1", "ccc.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ccc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CCC20200701::Client::getEndpoint(shared_ptr<string> productId,
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

AddSkillGroupsToUserResponse Alibabacloud_CCC20200701::Client::addSkillGroupsToUserWithOptions(shared_ptr<AddSkillGroupsToUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddSkillGroupsToUserResponse(doRPCRequest(make_shared<string>("AddSkillGroupsToUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSkillGroupsToUserResponse Alibabacloud_CCC20200701::Client::addSkillGroupsToUser(shared_ptr<AddSkillGroupsToUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSkillGroupsToUserWithOptions(request, runtime);
}

SaveWebRTCStatsResponse Alibabacloud_CCC20200701::Client::saveWebRTCStatsWithOptions(shared_ptr<SaveWebRTCStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveWebRTCStatsResponse(doRPCRequest(make_shared<string>("SaveWebRTCStats"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveWebRTCStatsResponse Alibabacloud_CCC20200701::Client::saveWebRTCStats(shared_ptr<SaveWebRTCStatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveWebRTCStatsWithOptions(request, runtime);
}

GetMonoRecordingResponse Alibabacloud_CCC20200701::Client::getMonoRecordingWithOptions(shared_ptr<GetMonoRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMonoRecordingResponse(doRPCRequest(make_shared<string>("GetMonoRecording"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMonoRecordingResponse Alibabacloud_CCC20200701::Client::getMonoRecording(shared_ptr<GetMonoRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMonoRecordingWithOptions(request, runtime);
}

ListUsersResponse Alibabacloud_CCC20200701::Client::listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUsersResponse(doRPCRequest(make_shared<string>("ListUsers"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUsersResponse Alibabacloud_CCC20200701::Client::listUsers(shared_ptr<ListUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUsersWithOptions(request, runtime);
}

ListAgentStateLogsResponse Alibabacloud_CCC20200701::Client::listAgentStateLogsWithOptions(shared_ptr<ListAgentStateLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAgentStateLogsResponse(doRPCRequest(make_shared<string>("ListAgentStateLogs"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentStateLogsResponse Alibabacloud_CCC20200701::Client::listAgentStateLogs(shared_ptr<ListAgentStateLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentStateLogsWithOptions(request, runtime);
}

RemovePhoneNumberFromSkillGroupsResponse Alibabacloud_CCC20200701::Client::removePhoneNumberFromSkillGroupsWithOptions(shared_ptr<RemovePhoneNumberFromSkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemovePhoneNumberFromSkillGroupsResponse(doRPCRequest(make_shared<string>("RemovePhoneNumberFromSkillGroups"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemovePhoneNumberFromSkillGroupsResponse Alibabacloud_CCC20200701::Client::removePhoneNumberFromSkillGroups(shared_ptr<RemovePhoneNumberFromSkillGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removePhoneNumberFromSkillGroupsWithOptions(request, runtime);
}

ListPhoneNumbersResponse Alibabacloud_CCC20200701::Client::listPhoneNumbersWithOptions(shared_ptr<ListPhoneNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPhoneNumbersResponse(doRPCRequest(make_shared<string>("ListPhoneNumbers"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPhoneNumbersResponse Alibabacloud_CCC20200701::Client::listPhoneNumbers(shared_ptr<ListPhoneNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPhoneNumbersWithOptions(request, runtime);
}

AddNumbersToSkillGroupResponse Alibabacloud_CCC20200701::Client::addNumbersToSkillGroupWithOptions(shared_ptr<AddNumbersToSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddNumbersToSkillGroupResponse(doRPCRequest(make_shared<string>("AddNumbersToSkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddNumbersToSkillGroupResponse Alibabacloud_CCC20200701::Client::addNumbersToSkillGroup(shared_ptr<AddNumbersToSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addNumbersToSkillGroupWithOptions(request, runtime);
}

ResetAgentStateResponse Alibabacloud_CCC20200701::Client::resetAgentStateWithOptions(shared_ptr<ResetAgentStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetAgentStateResponse(doRPCRequest(make_shared<string>("ResetAgentState"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetAgentStateResponse Alibabacloud_CCC20200701::Client::resetAgentState(shared_ptr<ResetAgentStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAgentStateWithOptions(request, runtime);
}

ChangeWorkModeResponse Alibabacloud_CCC20200701::Client::changeWorkModeWithOptions(shared_ptr<ChangeWorkModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeWorkModeResponse(doRPCRequest(make_shared<string>("ChangeWorkMode"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeWorkModeResponse Alibabacloud_CCC20200701::Client::changeWorkMode(shared_ptr<ChangeWorkModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeWorkModeWithOptions(request, runtime);
}

GetTurnCredentialsResponse Alibabacloud_CCC20200701::Client::getTurnCredentialsWithOptions(shared_ptr<GetTurnCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTurnCredentialsResponse(doRPCRequest(make_shared<string>("GetTurnCredentials"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTurnCredentialsResponse Alibabacloud_CCC20200701::Client::getTurnCredentials(shared_ptr<GetTurnCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTurnCredentialsWithOptions(request, runtime);
}

AddPhoneNumbersResponse Alibabacloud_CCC20200701::Client::addPhoneNumbersWithOptions(shared_ptr<AddPhoneNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddPhoneNumbersResponse(doRPCRequest(make_shared<string>("AddPhoneNumbers"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddPhoneNumbersResponse Alibabacloud_CCC20200701::Client::addPhoneNumbers(shared_ptr<AddPhoneNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPhoneNumbersWithOptions(request, runtime);
}

SaveWebRtcInfoResponse Alibabacloud_CCC20200701::Client::saveWebRtcInfoWithOptions(shared_ptr<SaveWebRtcInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveWebRtcInfoResponse(doRPCRequest(make_shared<string>("SaveWebRtcInfo"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveWebRtcInfoResponse Alibabacloud_CCC20200701::Client::saveWebRtcInfo(shared_ptr<SaveWebRtcInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveWebRtcInfoWithOptions(request, runtime);
}

ListIntervalSkillGroupReportResponse Alibabacloud_CCC20200701::Client::listIntervalSkillGroupReportWithOptions(shared_ptr<ListIntervalSkillGroupReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListIntervalSkillGroupReportResponse(doRPCRequest(make_shared<string>("ListIntervalSkillGroupReport"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListIntervalSkillGroupReportResponse Alibabacloud_CCC20200701::Client::listIntervalSkillGroupReport(shared_ptr<ListIntervalSkillGroupReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIntervalSkillGroupReportWithOptions(request, runtime);
}

MonitorCallResponse Alibabacloud_CCC20200701::Client::monitorCallWithOptions(shared_ptr<MonitorCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MonitorCallResponse(doRPCRequest(make_shared<string>("MonitorCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MonitorCallResponse Alibabacloud_CCC20200701::Client::monitorCall(shared_ptr<MonitorCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return monitorCallWithOptions(request, runtime);
}

RemoveUsersFromSkillGroupResponse Alibabacloud_CCC20200701::Client::removeUsersFromSkillGroupWithOptions(shared_ptr<RemoveUsersFromSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveUsersFromSkillGroupResponse(doRPCRequest(make_shared<string>("RemoveUsersFromSkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveUsersFromSkillGroupResponse Alibabacloud_CCC20200701::Client::removeUsersFromSkillGroup(shared_ptr<RemoveUsersFromSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUsersFromSkillGroupWithOptions(request, runtime);
}

DeleteSkillGroupResponse Alibabacloud_CCC20200701::Client::deleteSkillGroupWithOptions(shared_ptr<DeleteSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSkillGroupResponse(doRPCRequest(make_shared<string>("DeleteSkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSkillGroupResponse Alibabacloud_CCC20200701::Client::deleteSkillGroup(shared_ptr<DeleteSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSkillGroupWithOptions(request, runtime);
}

BlindTransferResponse Alibabacloud_CCC20200701::Client::blindTransferWithOptions(shared_ptr<BlindTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BlindTransferResponse(doRPCRequest(make_shared<string>("BlindTransfer"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BlindTransferResponse Alibabacloud_CCC20200701::Client::blindTransfer(shared_ptr<BlindTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return blindTransferWithOptions(request, runtime);
}

ListSkillLevelsOfUserResponse Alibabacloud_CCC20200701::Client::listSkillLevelsOfUserWithOptions(shared_ptr<ListSkillLevelsOfUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSkillLevelsOfUserResponse(doRPCRequest(make_shared<string>("ListSkillLevelsOfUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillLevelsOfUserResponse Alibabacloud_CCC20200701::Client::listSkillLevelsOfUser(shared_ptr<ListSkillLevelsOfUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillLevelsOfUserWithOptions(request, runtime);
}

ListUnassignedNumbersResponse Alibabacloud_CCC20200701::Client::listUnassignedNumbersWithOptions(shared_ptr<ListUnassignedNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUnassignedNumbersResponse(doRPCRequest(make_shared<string>("ListUnassignedNumbers"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUnassignedNumbersResponse Alibabacloud_CCC20200701::Client::listUnassignedNumbers(shared_ptr<ListUnassignedNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUnassignedNumbersWithOptions(request, runtime);
}

GetInstanceTrendingReportResponse Alibabacloud_CCC20200701::Client::getInstanceTrendingReportWithOptions(shared_ptr<GetInstanceTrendingReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceTrendingReportResponse(doRPCRequest(make_shared<string>("GetInstanceTrendingReport"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceTrendingReportResponse Alibabacloud_CCC20200701::Client::getInstanceTrendingReport(shared_ptr<GetInstanceTrendingReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceTrendingReportWithOptions(request, runtime);
}

ListInstancesOfUserResponse Alibabacloud_CCC20200701::Client::listInstancesOfUserWithOptions(shared_ptr<ListInstancesOfUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListInstancesOfUserResponse(doRPCRequest(make_shared<string>("ListInstancesOfUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstancesOfUserResponse Alibabacloud_CCC20200701::Client::listInstancesOfUser(shared_ptr<ListInstancesOfUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesOfUserWithOptions(request, runtime);
}

LaunchSurveyResponse Alibabacloud_CCC20200701::Client::launchSurveyWithOptions(shared_ptr<LaunchSurveyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LaunchSurveyResponse(doRPCRequest(make_shared<string>("LaunchSurvey"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LaunchSurveyResponse Alibabacloud_CCC20200701::Client::launchSurvey(shared_ptr<LaunchSurveyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return launchSurveyWithOptions(request, runtime);
}

ListIvrTrackingDetailsResponse Alibabacloud_CCC20200701::Client::listIvrTrackingDetailsWithOptions(shared_ptr<ListIvrTrackingDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListIvrTrackingDetailsResponse(doRPCRequest(make_shared<string>("ListIvrTrackingDetails"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListIvrTrackingDetailsResponse Alibabacloud_CCC20200701::Client::listIvrTrackingDetails(shared_ptr<ListIvrTrackingDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIvrTrackingDetailsWithOptions(request, runtime);
}

ListBriefSkillGroupsResponse Alibabacloud_CCC20200701::Client::listBriefSkillGroupsWithOptions(shared_ptr<ListBriefSkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListBriefSkillGroupsResponse(doRPCRequest(make_shared<string>("ListBriefSkillGroups"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListBriefSkillGroupsResponse Alibabacloud_CCC20200701::Client::listBriefSkillGroups(shared_ptr<ListBriefSkillGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBriefSkillGroupsWithOptions(request, runtime);
}

UnmuteCallResponse Alibabacloud_CCC20200701::Client::unmuteCallWithOptions(shared_ptr<UnmuteCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnmuteCallResponse(doRPCRequest(make_shared<string>("UnmuteCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnmuteCallResponse Alibabacloud_CCC20200701::Client::unmuteCall(shared_ptr<UnmuteCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unmuteCallWithOptions(request, runtime);
}

ModifySkillLevelsOfUserResponse Alibabacloud_CCC20200701::Client::modifySkillLevelsOfUserWithOptions(shared_ptr<ModifySkillLevelsOfUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySkillLevelsOfUserResponse(doRPCRequest(make_shared<string>("ModifySkillLevelsOfUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySkillLevelsOfUserResponse Alibabacloud_CCC20200701::Client::modifySkillLevelsOfUser(shared_ptr<ModifySkillLevelsOfUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySkillLevelsOfUserWithOptions(request, runtime);
}

AssignUsersResponse Alibabacloud_CCC20200701::Client::assignUsersWithOptions(shared_ptr<AssignUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssignUsersResponse(doRPCRequest(make_shared<string>("AssignUsers"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssignUsersResponse Alibabacloud_CCC20200701::Client::assignUsers(shared_ptr<AssignUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignUsersWithOptions(request, runtime);
}

ListUserLevelsOfSkillGroupResponse Alibabacloud_CCC20200701::Client::listUserLevelsOfSkillGroupWithOptions(shared_ptr<ListUserLevelsOfSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListUserLevelsOfSkillGroupResponse(doRPCRequest(make_shared<string>("ListUserLevelsOfSkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListUserLevelsOfSkillGroupResponse Alibabacloud_CCC20200701::Client::listUserLevelsOfSkillGroup(shared_ptr<ListUserLevelsOfSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserLevelsOfSkillGroupWithOptions(request, runtime);
}

ListRolesResponse Alibabacloud_CCC20200701::Client::listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRolesResponse(doRPCRequest(make_shared<string>("ListRoles"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRolesResponse Alibabacloud_CCC20200701::Client::listRoles(shared_ptr<ListRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRolesWithOptions(request, runtime);
}

UpdateConfigItemsResponse Alibabacloud_CCC20200701::Client::updateConfigItemsWithOptions(shared_ptr<UpdateConfigItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateConfigItemsResponse(doRPCRequest(make_shared<string>("UpdateConfigItems"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateConfigItemsResponse Alibabacloud_CCC20200701::Client::updateConfigItems(shared_ptr<UpdateConfigItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConfigItemsWithOptions(request, runtime);
}

GetCallDetailRecordResponse Alibabacloud_CCC20200701::Client::getCallDetailRecordWithOptions(shared_ptr<GetCallDetailRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCallDetailRecordResponse(doRPCRequest(make_shared<string>("GetCallDetailRecord"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCallDetailRecordResponse Alibabacloud_CCC20200701::Client::getCallDetailRecord(shared_ptr<GetCallDetailRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCallDetailRecordWithOptions(request, runtime);
}

ModifyPhoneNumberResponse Alibabacloud_CCC20200701::Client::modifyPhoneNumberWithOptions(shared_ptr<ModifyPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyPhoneNumberResponse(doRPCRequest(make_shared<string>("ModifyPhoneNumber"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyPhoneNumberResponse Alibabacloud_CCC20200701::Client::modifyPhoneNumber(shared_ptr<ModifyPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyPhoneNumberWithOptions(request, runtime);
}

CoachCallResponse Alibabacloud_CCC20200701::Client::coachCallWithOptions(shared_ptr<CoachCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CoachCallResponse(doRPCRequest(make_shared<string>("CoachCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CoachCallResponse Alibabacloud_CCC20200701::Client::coachCall(shared_ptr<CoachCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return coachCallWithOptions(request, runtime);
}

CreateUserResponse Alibabacloud_CCC20200701::Client::createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateUserResponse(doRPCRequest(make_shared<string>("CreateUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateUserResponse Alibabacloud_CCC20200701::Client::createUser(shared_ptr<CreateUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserWithOptions(request, runtime);
}

ListPrivilegesOfUserResponse Alibabacloud_CCC20200701::Client::listPrivilegesOfUserWithOptions(shared_ptr<ListPrivilegesOfUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPrivilegesOfUserResponse(doRPCRequest(make_shared<string>("ListPrivilegesOfUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPrivilegesOfUserResponse Alibabacloud_CCC20200701::Client::listPrivilegesOfUser(shared_ptr<ListPrivilegesOfUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPrivilegesOfUserWithOptions(request, runtime);
}

AddPersonalNumbersToUserResponse Alibabacloud_CCC20200701::Client::addPersonalNumbersToUserWithOptions(shared_ptr<AddPersonalNumbersToUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddPersonalNumbersToUserResponse(doRPCRequest(make_shared<string>("AddPersonalNumbersToUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddPersonalNumbersToUserResponse Alibabacloud_CCC20200701::Client::addPersonalNumbersToUser(shared_ptr<AddPersonalNumbersToUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPersonalNumbersToUserWithOptions(request, runtime);
}

ListHistoricalAgentReportResponse Alibabacloud_CCC20200701::Client::listHistoricalAgentReportWithOptions(shared_ptr<ListHistoricalAgentReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHistoricalAgentReportResponse(doRPCRequest(make_shared<string>("ListHistoricalAgentReport"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHistoricalAgentReportResponse Alibabacloud_CCC20200701::Client::listHistoricalAgentReport(shared_ptr<ListHistoricalAgentReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHistoricalAgentReportWithOptions(request, runtime);
}

InterceptCallResponse Alibabacloud_CCC20200701::Client::interceptCallWithOptions(shared_ptr<InterceptCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InterceptCallResponse(doRPCRequest(make_shared<string>("InterceptCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InterceptCallResponse Alibabacloud_CCC20200701::Client::interceptCall(shared_ptr<InterceptCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return interceptCallWithOptions(request, runtime);
}

ListContactFlowsResponse Alibabacloud_CCC20200701::Client::listContactFlowsWithOptions(shared_ptr<ListContactFlowsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListContactFlowsResponse(doRPCRequest(make_shared<string>("ListContactFlows"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListContactFlowsResponse Alibabacloud_CCC20200701::Client::listContactFlows(shared_ptr<ListContactFlowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listContactFlowsWithOptions(request, runtime);
}

ListPersonalNumbersOfUserResponse Alibabacloud_CCC20200701::Client::listPersonalNumbersOfUserWithOptions(shared_ptr<ListPersonalNumbersOfUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPersonalNumbersOfUserResponse(doRPCRequest(make_shared<string>("ListPersonalNumbersOfUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPersonalNumbersOfUserResponse Alibabacloud_CCC20200701::Client::listPersonalNumbersOfUser(shared_ptr<ListPersonalNumbersOfUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPersonalNumbersOfUserWithOptions(request, runtime);
}

StartPredictiveCallResponse Alibabacloud_CCC20200701::Client::startPredictiveCallWithOptions(shared_ptr<StartPredictiveCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartPredictiveCallResponse(doRPCRequest(make_shared<string>("StartPredictiveCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartPredictiveCallResponse Alibabacloud_CCC20200701::Client::startPredictiveCall(shared_ptr<StartPredictiveCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startPredictiveCallWithOptions(request, runtime);
}

ListIntervalInstanceReportResponse Alibabacloud_CCC20200701::Client::listIntervalInstanceReportWithOptions(shared_ptr<ListIntervalInstanceReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListIntervalInstanceReportResponse(doRPCRequest(make_shared<string>("ListIntervalInstanceReport"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListIntervalInstanceReportResponse Alibabacloud_CCC20200701::Client::listIntervalInstanceReport(shared_ptr<ListIntervalInstanceReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIntervalInstanceReportWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_CCC20200701::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstanceResponse(doRPCRequest(make_shared<string>("CreateInstance"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstanceResponse Alibabacloud_CCC20200701::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

RemoveSkillGroupsFromUserResponse Alibabacloud_CCC20200701::Client::removeSkillGroupsFromUserWithOptions(shared_ptr<RemoveSkillGroupsFromUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveSkillGroupsFromUserResponse(doRPCRequest(make_shared<string>("RemoveSkillGroupsFromUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveSkillGroupsFromUserResponse Alibabacloud_CCC20200701::Client::removeSkillGroupsFromUser(shared_ptr<RemoveSkillGroupsFromUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSkillGroupsFromUserWithOptions(request, runtime);
}

ListRealtimeAgentStatesResponse Alibabacloud_CCC20200701::Client::listRealtimeAgentStatesWithOptions(shared_ptr<ListRealtimeAgentStatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRealtimeAgentStatesResponse(doRPCRequest(make_shared<string>("ListRealtimeAgentStates"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRealtimeAgentStatesResponse Alibabacloud_CCC20200701::Client::listRealtimeAgentStates(shared_ptr<ListRealtimeAgentStatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRealtimeAgentStatesWithOptions(request, runtime);
}

LaunchAuthenticationResponse Alibabacloud_CCC20200701::Client::launchAuthenticationWithOptions(shared_ptr<LaunchAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LaunchAuthenticationResponse(doRPCRequest(make_shared<string>("LaunchAuthentication"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LaunchAuthenticationResponse Alibabacloud_CCC20200701::Client::launchAuthentication(shared_ptr<LaunchAuthenticationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return launchAuthenticationWithOptions(request, runtime);
}

ListInstancesResponse Alibabacloud_CCC20200701::Client::listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListInstancesResponse(doRPCRequest(make_shared<string>("ListInstances"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListInstancesResponse Alibabacloud_CCC20200701::Client::listInstances(shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstancesWithOptions(request, runtime);
}

GetHistoricalInstanceReportResponse Alibabacloud_CCC20200701::Client::getHistoricalInstanceReportWithOptions(shared_ptr<GetHistoricalInstanceReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHistoricalInstanceReportResponse(doRPCRequest(make_shared<string>("GetHistoricalInstanceReport"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHistoricalInstanceReportResponse Alibabacloud_CCC20200701::Client::getHistoricalInstanceReport(shared_ptr<GetHistoricalInstanceReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHistoricalInstanceReportWithOptions(request, runtime);
}

RemoveUsersResponse Alibabacloud_CCC20200701::Client::removeUsersWithOptions(shared_ptr<RemoveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveUsersResponse(doRPCRequest(make_shared<string>("RemoveUsers"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveUsersResponse Alibabacloud_CCC20200701::Client::removeUsers(shared_ptr<RemoveUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUsersWithOptions(request, runtime);
}

StartBack2BackCallResponse Alibabacloud_CCC20200701::Client::startBack2BackCallWithOptions(shared_ptr<StartBack2BackCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartBack2BackCallResponse(doRPCRequest(make_shared<string>("StartBack2BackCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartBack2BackCallResponse Alibabacloud_CCC20200701::Client::startBack2BackCall(shared_ptr<StartBack2BackCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startBack2BackCallWithOptions(request, runtime);
}

GetUserResponse Alibabacloud_CCC20200701::Client::getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserResponse(doRPCRequest(make_shared<string>("GetUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserResponse Alibabacloud_CCC20200701::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserWithOptions(request, runtime);
}

RemovePhoneNumbersFromSkillGroupResponse Alibabacloud_CCC20200701::Client::removePhoneNumbersFromSkillGroupWithOptions(shared_ptr<RemovePhoneNumbersFromSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemovePhoneNumbersFromSkillGroupResponse(doRPCRequest(make_shared<string>("RemovePhoneNumbersFromSkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemovePhoneNumbersFromSkillGroupResponse Alibabacloud_CCC20200701::Client::removePhoneNumbersFromSkillGroup(shared_ptr<RemovePhoneNumbersFromSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removePhoneNumbersFromSkillGroupWithOptions(request, runtime);
}

CompleteAttendedTransferResponse Alibabacloud_CCC20200701::Client::completeAttendedTransferWithOptions(shared_ptr<CompleteAttendedTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CompleteAttendedTransferResponse(doRPCRequest(make_shared<string>("CompleteAttendedTransfer"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CompleteAttendedTransferResponse Alibabacloud_CCC20200701::Client::completeAttendedTransfer(shared_ptr<CompleteAttendedTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return completeAttendedTransferWithOptions(request, runtime);
}

ResetUserPasswordResponse Alibabacloud_CCC20200701::Client::resetUserPasswordWithOptions(shared_ptr<ResetUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetUserPasswordResponse(doRPCRequest(make_shared<string>("ResetUserPassword"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetUserPasswordResponse Alibabacloud_CCC20200701::Client::resetUserPassword(shared_ptr<ResetUserPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetUserPasswordWithOptions(request, runtime);
}

GetTurnServerListResponse Alibabacloud_CCC20200701::Client::getTurnServerListWithOptions(shared_ptr<GetTurnServerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTurnServerListResponse(doRPCRequest(make_shared<string>("GetTurnServerList"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTurnServerListResponse Alibabacloud_CCC20200701::Client::getTurnServerList(shared_ptr<GetTurnServerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTurnServerListWithOptions(request, runtime);
}

GetNumberLocationResponse Alibabacloud_CCC20200701::Client::getNumberLocationWithOptions(shared_ptr<GetNumberLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNumberLocationResponse(doRPCRequest(make_shared<string>("GetNumberLocation"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNumberLocationResponse Alibabacloud_CCC20200701::Client::getNumberLocation(shared_ptr<GetNumberLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNumberLocationWithOptions(request, runtime);
}

ListRamUsersResponse Alibabacloud_CCC20200701::Client::listRamUsersWithOptions(shared_ptr<ListRamUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRamUsersResponse(doRPCRequest(make_shared<string>("ListRamUsers"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRamUsersResponse Alibabacloud_CCC20200701::Client::listRamUsers(shared_ptr<ListRamUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRamUsersWithOptions(request, runtime);
}

MuteCallResponse Alibabacloud_CCC20200701::Client::muteCallWithOptions(shared_ptr<MuteCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MuteCallResponse(doRPCRequest(make_shared<string>("MuteCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MuteCallResponse Alibabacloud_CCC20200701::Client::muteCall(shared_ptr<MuteCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return muteCallWithOptions(request, runtime);
}

AnswerCallResponse Alibabacloud_CCC20200701::Client::answerCallWithOptions(shared_ptr<AnswerCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AnswerCallResponse(doRPCRequest(make_shared<string>("AnswerCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AnswerCallResponse Alibabacloud_CCC20200701::Client::answerCall(shared_ptr<AnswerCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return answerCallWithOptions(request, runtime);
}

ListIntervalAgentReportResponse Alibabacloud_CCC20200701::Client::listIntervalAgentReportWithOptions(shared_ptr<ListIntervalAgentReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListIntervalAgentReportResponse(doRPCRequest(make_shared<string>("ListIntervalAgentReport"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListIntervalAgentReportResponse Alibabacloud_CCC20200701::Client::listIntervalAgentReport(shared_ptr<ListIntervalAgentReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIntervalAgentReportWithOptions(request, runtime);
}

ListCallDetailRecordsResponse Alibabacloud_CCC20200701::Client::listCallDetailRecordsWithOptions(shared_ptr<ListCallDetailRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListCallDetailRecordsResponse(doRPCRequest(make_shared<string>("ListCallDetailRecords"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCallDetailRecordsResponse Alibabacloud_CCC20200701::Client::listCallDetailRecords(shared_ptr<ListCallDetailRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCallDetailRecordsWithOptions(request, runtime);
}

RemovePhoneNumbersResponse Alibabacloud_CCC20200701::Client::removePhoneNumbersWithOptions(shared_ptr<RemovePhoneNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemovePhoneNumbersResponse(doRPCRequest(make_shared<string>("RemovePhoneNumbers"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemovePhoneNumbersResponse Alibabacloud_CCC20200701::Client::removePhoneNumbers(shared_ptr<RemovePhoneNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removePhoneNumbersWithOptions(request, runtime);
}

CancelAttendedTransferResponse Alibabacloud_CCC20200701::Client::cancelAttendedTransferWithOptions(shared_ptr<CancelAttendedTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelAttendedTransferResponse(doRPCRequest(make_shared<string>("CancelAttendedTransfer"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelAttendedTransferResponse Alibabacloud_CCC20200701::Client::cancelAttendedTransfer(shared_ptr<CancelAttendedTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelAttendedTransferWithOptions(request, runtime);
}

TakeBreakResponse Alibabacloud_CCC20200701::Client::takeBreakWithOptions(shared_ptr<TakeBreakRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TakeBreakResponse(doRPCRequest(make_shared<string>("TakeBreak"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TakeBreakResponse Alibabacloud_CCC20200701::Client::takeBreak(shared_ptr<TakeBreakRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return takeBreakWithOptions(request, runtime);
}

ListHistoricalSkillGroupReportResponse Alibabacloud_CCC20200701::Client::listHistoricalSkillGroupReportWithOptions(shared_ptr<ListHistoricalSkillGroupReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListHistoricalSkillGroupReportResponse(doRPCRequest(make_shared<string>("ListHistoricalSkillGroupReport"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHistoricalSkillGroupReportResponse Alibabacloud_CCC20200701::Client::listHistoricalSkillGroupReport(shared_ptr<ListHistoricalSkillGroupReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHistoricalSkillGroupReportWithOptions(request, runtime);
}

SendDtmfSignalingResponse Alibabacloud_CCC20200701::Client::sendDtmfSignalingWithOptions(shared_ptr<SendDtmfSignalingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendDtmfSignalingResponse(doRPCRequest(make_shared<string>("SendDtmfSignaling"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendDtmfSignalingResponse Alibabacloud_CCC20200701::Client::sendDtmfSignaling(shared_ptr<SendDtmfSignalingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendDtmfSignalingWithOptions(request, runtime);
}

ListRecentCallDetailRecordsResponse Alibabacloud_CCC20200701::Client::listRecentCallDetailRecordsWithOptions(shared_ptr<ListRecentCallDetailRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRecentCallDetailRecordsResponse(doRPCRequest(make_shared<string>("ListRecentCallDetailRecords"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRecentCallDetailRecordsResponse Alibabacloud_CCC20200701::Client::listRecentCallDetailRecords(shared_ptr<ListRecentCallDetailRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecentCallDetailRecordsWithOptions(request, runtime);
}

InitiateAttendedTransferResponse Alibabacloud_CCC20200701::Client::initiateAttendedTransferWithOptions(shared_ptr<InitiateAttendedTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InitiateAttendedTransferResponse(doRPCRequest(make_shared<string>("InitiateAttendedTransfer"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitiateAttendedTransferResponse Alibabacloud_CCC20200701::Client::initiateAttendedTransfer(shared_ptr<InitiateAttendedTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initiateAttendedTransferWithOptions(request, runtime);
}

MakeCallResponse Alibabacloud_CCC20200701::Client::makeCallWithOptions(shared_ptr<MakeCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MakeCallResponse(doRPCRequest(make_shared<string>("MakeCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MakeCallResponse Alibabacloud_CCC20200701::Client::makeCall(shared_ptr<MakeCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return makeCallWithOptions(request, runtime);
}

GetInstanceResponse Alibabacloud_CCC20200701::Client::getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetInstanceResponse(doRPCRequest(make_shared<string>("GetInstance"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetInstanceResponse Alibabacloud_CCC20200701::Client::getInstance(shared_ptr<GetInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceWithOptions(request, runtime);
}

AddUsersToSkillGroupResponse Alibabacloud_CCC20200701::Client::addUsersToSkillGroupWithOptions(shared_ptr<AddUsersToSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddUsersToSkillGroupResponse(doRPCRequest(make_shared<string>("AddUsersToSkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddUsersToSkillGroupResponse Alibabacloud_CCC20200701::Client::addUsersToSkillGroup(shared_ptr<AddUsersToSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addUsersToSkillGroupWithOptions(request, runtime);
}

ListConfigItemsResponse Alibabacloud_CCC20200701::Client::listConfigItemsWithOptions(shared_ptr<ListConfigItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListConfigItemsResponse(doRPCRequest(make_shared<string>("ListConfigItems"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConfigItemsResponse Alibabacloud_CCC20200701::Client::listConfigItems(shared_ptr<ListConfigItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfigItemsWithOptions(request, runtime);
}

SignInGroupResponse Alibabacloud_CCC20200701::Client::signInGroupWithOptions(shared_ptr<SignInGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SignInGroupResponse(doRPCRequest(make_shared<string>("SignInGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SignInGroupResponse Alibabacloud_CCC20200701::Client::signInGroup(shared_ptr<SignInGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return signInGroupWithOptions(request, runtime);
}

GetRealtimeInstanceStatesResponse Alibabacloud_CCC20200701::Client::getRealtimeInstanceStatesWithOptions(shared_ptr<GetRealtimeInstanceStatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRealtimeInstanceStatesResponse(doRPCRequest(make_shared<string>("GetRealtimeInstanceStates"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRealtimeInstanceStatesResponse Alibabacloud_CCC20200701::Client::getRealtimeInstanceStates(shared_ptr<GetRealtimeInstanceStatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRealtimeInstanceStatesWithOptions(request, runtime);
}

ModifySkillGroupResponse Alibabacloud_CCC20200701::Client::modifySkillGroupWithOptions(shared_ptr<ModifySkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifySkillGroupResponse(doRPCRequest(make_shared<string>("ModifySkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifySkillGroupResponse Alibabacloud_CCC20200701::Client::modifySkillGroup(shared_ptr<ModifySkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySkillGroupWithOptions(request, runtime);
}

ModifyUserResponse Alibabacloud_CCC20200701::Client::modifyUserWithOptions(shared_ptr<ModifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyUserResponse(doRPCRequest(make_shared<string>("ModifyUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserResponse Alibabacloud_CCC20200701::Client::modifyUser(shared_ptr<ModifyUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserWithOptions(request, runtime);
}

AddPhoneNumberToSkillGroupsResponse Alibabacloud_CCC20200701::Client::addPhoneNumberToSkillGroupsWithOptions(shared_ptr<AddPhoneNumberToSkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddPhoneNumberToSkillGroupsResponse(doRPCRequest(make_shared<string>("AddPhoneNumberToSkillGroups"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddPhoneNumberToSkillGroupsResponse Alibabacloud_CCC20200701::Client::addPhoneNumberToSkillGroups(shared_ptr<AddPhoneNumberToSkillGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPhoneNumberToSkillGroupsWithOptions(request, runtime);
}

ListDevicesResponse Alibabacloud_CCC20200701::Client::listDevicesWithOptions(shared_ptr<ListDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDevicesResponse(doRPCRequest(make_shared<string>("ListDevices"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDevicesResponse Alibabacloud_CCC20200701::Client::listDevices(shared_ptr<ListDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDevicesWithOptions(request, runtime);
}

RetrieveCallResponse Alibabacloud_CCC20200701::Client::retrieveCallWithOptions(shared_ptr<RetrieveCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RetrieveCallResponse(doRPCRequest(make_shared<string>("RetrieveCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RetrieveCallResponse Alibabacloud_CCC20200701::Client::retrieveCall(shared_ptr<RetrieveCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retrieveCallWithOptions(request, runtime);
}

ListSkillGroupsResponse Alibabacloud_CCC20200701::Client::listSkillGroupsWithOptions(shared_ptr<ListSkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListSkillGroupsResponse(doRPCRequest(make_shared<string>("ListSkillGroups"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupsResponse Alibabacloud_CCC20200701::Client::listSkillGroups(shared_ptr<ListSkillGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupsWithOptions(request, runtime);
}

HoldCallResponse Alibabacloud_CCC20200701::Client::holdCallWithOptions(shared_ptr<HoldCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HoldCallResponse(doRPCRequest(make_shared<string>("HoldCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HoldCallResponse Alibabacloud_CCC20200701::Client::holdCall(shared_ptr<HoldCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return holdCallWithOptions(request, runtime);
}

RegisterDeviceResponse Alibabacloud_CCC20200701::Client::registerDeviceWithOptions(shared_ptr<RegisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterDeviceResponse(doRPCRequest(make_shared<string>("RegisterDevice"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterDeviceResponse Alibabacloud_CCC20200701::Client::registerDevice(shared_ptr<RegisterDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerDeviceWithOptions(request, runtime);
}

RemovePersonalNumbersFromUserResponse Alibabacloud_CCC20200701::Client::removePersonalNumbersFromUserWithOptions(shared_ptr<RemovePersonalNumbersFromUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemovePersonalNumbersFromUserResponse(doRPCRequest(make_shared<string>("RemovePersonalNumbersFromUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemovePersonalNumbersFromUserResponse Alibabacloud_CCC20200701::Client::removePersonalNumbersFromUser(shared_ptr<RemovePersonalNumbersFromUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removePersonalNumbersFromUserWithOptions(request, runtime);
}

ModifyInstanceResponse Alibabacloud_CCC20200701::Client::modifyInstanceWithOptions(shared_ptr<ModifyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceResponse(doRPCRequest(make_shared<string>("ModifyInstance"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceResponse Alibabacloud_CCC20200701::Client::modifyInstance(shared_ptr<ModifyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceWithOptions(request, runtime);
}

ListOutboundNumbersOfUserResponse Alibabacloud_CCC20200701::Client::listOutboundNumbersOfUserWithOptions(shared_ptr<ListOutboundNumbersOfUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOutboundNumbersOfUserResponse(doRPCRequest(make_shared<string>("ListOutboundNumbersOfUser"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOutboundNumbersOfUserResponse Alibabacloud_CCC20200701::Client::listOutboundNumbersOfUser(shared_ptr<ListOutboundNumbersOfUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOutboundNumbersOfUserWithOptions(request, runtime);
}

PollUserStatusResponse Alibabacloud_CCC20200701::Client::pollUserStatusWithOptions(shared_ptr<PollUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PollUserStatusResponse(doRPCRequest(make_shared<string>("PollUserStatus"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PollUserStatusResponse Alibabacloud_CCC20200701::Client::pollUserStatus(shared_ptr<PollUserStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pollUserStatusWithOptions(request, runtime);
}

ReadyForServiceResponse Alibabacloud_CCC20200701::Client::readyForServiceWithOptions(shared_ptr<ReadyForServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReadyForServiceResponse(doRPCRequest(make_shared<string>("ReadyForService"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReadyForServiceResponse Alibabacloud_CCC20200701::Client::readyForService(shared_ptr<ReadyForServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return readyForServiceWithOptions(request, runtime);
}

GetMultiChannelRecordingResponse Alibabacloud_CCC20200701::Client::getMultiChannelRecordingWithOptions(shared_ptr<GetMultiChannelRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMultiChannelRecordingResponse(doRPCRequest(make_shared<string>("GetMultiChannelRecording"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMultiChannelRecordingResponse Alibabacloud_CCC20200701::Client::getMultiChannelRecording(shared_ptr<GetMultiChannelRecordingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultiChannelRecordingWithOptions(request, runtime);
}

BargeInCallResponse Alibabacloud_CCC20200701::Client::bargeInCallWithOptions(shared_ptr<BargeInCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BargeInCallResponse(doRPCRequest(make_shared<string>("BargeInCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BargeInCallResponse Alibabacloud_CCC20200701::Client::bargeInCall(shared_ptr<BargeInCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bargeInCallWithOptions(request, runtime);
}

ListPhoneNumbersOfSkillGroupResponse Alibabacloud_CCC20200701::Client::listPhoneNumbersOfSkillGroupWithOptions(shared_ptr<ListPhoneNumbersOfSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListPhoneNumbersOfSkillGroupResponse(doRPCRequest(make_shared<string>("ListPhoneNumbersOfSkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListPhoneNumbersOfSkillGroupResponse Alibabacloud_CCC20200701::Client::listPhoneNumbersOfSkillGroup(shared_ptr<ListPhoneNumbersOfSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPhoneNumbersOfSkillGroupWithOptions(request, runtime);
}

SignOutGroupResponse Alibabacloud_CCC20200701::Client::signOutGroupWithOptions(shared_ptr<SignOutGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SignOutGroupResponse(doRPCRequest(make_shared<string>("SignOutGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SignOutGroupResponse Alibabacloud_CCC20200701::Client::signOutGroup(shared_ptr<SignOutGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return signOutGroupWithOptions(request, runtime);
}

SaveRTCStatsV2Response Alibabacloud_CCC20200701::Client::saveRTCStatsV2WithOptions(shared_ptr<SaveRTCStatsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveRTCStatsV2Response(doRPCRequest(make_shared<string>("SaveRTCStatsV2"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveRTCStatsV2Response Alibabacloud_CCC20200701::Client::saveRTCStatsV2(shared_ptr<SaveRTCStatsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveRTCStatsV2WithOptions(request, runtime);
}

GetHistoricalCallerReportResponse Alibabacloud_CCC20200701::Client::getHistoricalCallerReportWithOptions(shared_ptr<GetHistoricalCallerReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHistoricalCallerReportResponse(doRPCRequest(make_shared<string>("GetHistoricalCallerReport"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHistoricalCallerReportResponse Alibabacloud_CCC20200701::Client::getHistoricalCallerReport(shared_ptr<GetHistoricalCallerReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHistoricalCallerReportWithOptions(request, runtime);
}

ModifyUserLevelsOfSkillGroupResponse Alibabacloud_CCC20200701::Client::modifyUserLevelsOfSkillGroupWithOptions(shared_ptr<ModifyUserLevelsOfSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyUserLevelsOfSkillGroupResponse(doRPCRequest(make_shared<string>("ModifyUserLevelsOfSkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyUserLevelsOfSkillGroupResponse Alibabacloud_CCC20200701::Client::modifyUserLevelsOfSkillGroup(shared_ptr<ModifyUserLevelsOfSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserLevelsOfSkillGroupWithOptions(request, runtime);
}

SaveTerminalLogResponse Alibabacloud_CCC20200701::Client::saveTerminalLogWithOptions(shared_ptr<SaveTerminalLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveTerminalLogResponse(doRPCRequest(make_shared<string>("SaveTerminalLog"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveTerminalLogResponse Alibabacloud_CCC20200701::Client::saveTerminalLog(shared_ptr<SaveTerminalLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTerminalLogWithOptions(request, runtime);
}

ListRealtimeSkillGroupStatesResponse Alibabacloud_CCC20200701::Client::listRealtimeSkillGroupStatesWithOptions(shared_ptr<ListRealtimeSkillGroupStatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRealtimeSkillGroupStatesResponse(doRPCRequest(make_shared<string>("ListRealtimeSkillGroupStates"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRealtimeSkillGroupStatesResponse Alibabacloud_CCC20200701::Client::listRealtimeSkillGroupStates(shared_ptr<ListRealtimeSkillGroupStatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRealtimeSkillGroupStatesWithOptions(request, runtime);
}

CreateSkillGroupResponse Alibabacloud_CCC20200701::Client::createSkillGroupWithOptions(shared_ptr<CreateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSkillGroupResponse(doRPCRequest(make_shared<string>("CreateSkillGroup"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSkillGroupResponse Alibabacloud_CCC20200701::Client::createSkillGroup(shared_ptr<CreateSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSkillGroupWithOptions(request, runtime);
}

PickOutboundNumbersResponse Alibabacloud_CCC20200701::Client::pickOutboundNumbersWithOptions(shared_ptr<PickOutboundNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PickOutboundNumbersResponse(doRPCRequest(make_shared<string>("PickOutboundNumbers"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PickOutboundNumbersResponse Alibabacloud_CCC20200701::Client::pickOutboundNumbers(shared_ptr<PickOutboundNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pickOutboundNumbersWithOptions(request, runtime);
}

ReleaseCallResponse Alibabacloud_CCC20200701::Client::releaseCallWithOptions(shared_ptr<ReleaseCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseCallResponse(doRPCRequest(make_shared<string>("ReleaseCall"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseCallResponse Alibabacloud_CCC20200701::Client::releaseCall(shared_ptr<ReleaseCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseCallWithOptions(request, runtime);
}

GetLoginDetailsResponse Alibabacloud_CCC20200701::Client::getLoginDetailsWithOptions(shared_ptr<GetLoginDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLoginDetailsResponse(doRPCRequest(make_shared<string>("GetLoginDetails"), make_shared<string>("2020-07-01"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLoginDetailsResponse Alibabacloud_CCC20200701::Client::getLoginDetails(shared_ptr<GetLoginDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoginDetailsWithOptions(request, runtime);
}

