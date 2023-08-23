// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloud_call_center_20200701.hpp>
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

using namespace Alibabacloud_CloudCallCenter20200701;

Alibabacloud_CloudCallCenter20200701::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudcallcenter"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CloudCallCenter20200701::Client::getEndpoint(shared_ptr<string> productId,
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

AbortCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::abortCampaignWithOptions(shared_ptr<AbortCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->campaignId)) {
    query->insert(pair<string, string>("CampaignId", *request->campaignId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbortCampaign"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbortCampaignResponse(callApi(params, req, runtime));
}

AbortCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::abortCampaign(shared_ptr<AbortCampaignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abortCampaignWithOptions(request, runtime);
}

AbortCasesResponse Alibabacloud_CloudCallCenter20200701::Client::abortCasesWithOptions(shared_ptr<AbortCasesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AbortCasesShrinkRequest> request = make_shared<AbortCasesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->phoneNumberList)) {
    request->phoneNumberListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->phoneNumberList, make_shared<string>("PhoneNumberList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->campaignId)) {
    query->insert(pair<string, string>("CampaignId", *request->campaignId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumberListShrink)) {
    query->insert(pair<string, string>("PhoneNumberList", *request->phoneNumberListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbortCases"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbortCasesResponse(callApi(params, req, runtime));
}

AbortCasesResponse Alibabacloud_CloudCallCenter20200701::Client::abortCases(shared_ptr<AbortCasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abortCasesWithOptions(request, runtime);
}

CheckDemoInstanceExistsResponse Alibabacloud_CloudCallCenter20200701::Client::checkDemoInstanceExistsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDemoInstanceExists"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDemoInstanceExistsResponse(callApi(params, req, runtime));
}

CheckDemoInstanceExistsResponse Alibabacloud_CloudCallCenter20200701::Client::checkDemoInstanceExists() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDemoInstanceExistsWithOptions(runtime);
}

CheckMQRoleAssumptionAuthorityResponse Alibabacloud_CloudCallCenter20200701::Client::checkMQRoleAssumptionAuthorityWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckMQRoleAssumptionAuthority"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckMQRoleAssumptionAuthorityResponse(callApi(params, req, runtime));
}

CheckMQRoleAssumptionAuthorityResponse Alibabacloud_CloudCallCenter20200701::Client::checkMQRoleAssumptionAuthority() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkMQRoleAssumptionAuthorityWithOptions(runtime);
}

CreateCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::createCampaignWithOptions(shared_ptr<CreateCampaignRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateCampaignShrinkRequest> request = make_shared<CreateCampaignShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateCampaignRequestCaseList>>(tmpReq->caseList)) {
    request->caseListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->caseList, make_shared<string>("CaseList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callableTime)) {
    query->insert(pair<string, string>("CallableTime", *request->callableTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->caseFileKey)) {
    query->insert(pair<string, string>("CaseFileKey", *request->caseFileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->caseListShrink)) {
    query->insert(pair<string, string>("CaseList", *request->caseListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactFlowId)) {
    query->insert(pair<string, string>("ContactFlowId", *request->contactFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->executingUntilTimeout)) {
    query->insert(pair<string, bool>("ExecutingUntilTimeout", *request->executingUntilTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAttemptCount)) {
    query->insert(pair<string, long>("MaxAttemptCount", *request->maxAttemptCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minAttemptInterval)) {
    query->insert(pair<string, long>("MinAttemptInterval", *request->minAttemptInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueId)) {
    query->insert(pair<string, string>("QueueId", *request->queueId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->simulation)) {
    query->insert(pair<string, bool>("Simulation", *request->simulation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->simulationParameters)) {
    query->insert(pair<string, string>("SimulationParameters", *request->simulationParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyParameters)) {
    query->insert(pair<string, string>("StrategyParameters", *request->strategyParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->strategyType)) {
    query->insert(pair<string, string>("StrategyType", *request->strategyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCampaign"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCampaignResponse(callApi(params, req, runtime));
}

CreateCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::createCampaign(shared_ptr<CreateCampaignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCampaignWithOptions(request, runtime);
}

CreateCorpNumberGroupResponse Alibabacloud_CloudCallCenter20200701::Client::createCorpNumberGroupWithOptions(shared_ptr<CreateCorpNumberGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCorpNumberGroup"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCorpNumberGroupResponse(callApi(params, req, runtime));
}

CreateCorpNumberGroupResponse Alibabacloud_CloudCallCenter20200701::Client::createCorpNumberGroup(shared_ptr<CreateCorpNumberGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCorpNumberGroupWithOptions(request, runtime);
}

CreateDemoInstanceResponse Alibabacloud_CloudCallCenter20200701::Client::createDemoInstanceWithOptions(shared_ptr<CreateDemoInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outboundCallWhitelist)) {
    query->insert(pair<string, string>("OutboundCallWhitelist", *request->outboundCallWhitelist));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDemoInstance"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDemoInstanceResponse(callApi(params, req, runtime));
}

CreateDemoInstanceResponse Alibabacloud_CloudCallCenter20200701::Client::createDemoInstance(shared_ptr<CreateDemoInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDemoInstanceWithOptions(request, runtime);
}

GetCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::getCampaignWithOptions(shared_ptr<GetCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->campaignId)) {
    query->insert(pair<string, string>("CampaignId", *request->campaignId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCampaign"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCampaignResponse(callApi(params, req, runtime));
}

GetCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::getCampaign(shared_ptr<GetCampaignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCampaignWithOptions(request, runtime);
}

GetHistoricalCampaignReportResponse Alibabacloud_CloudCallCenter20200701::Client::getHistoricalCampaignReportWithOptions(shared_ptr<GetHistoricalCampaignReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHistoricalCampaignReport"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHistoricalCampaignReportResponse(callApi(params, req, runtime));
}

GetHistoricalCampaignReportResponse Alibabacloud_CloudCallCenter20200701::Client::getHistoricalCampaignReport(shared_ptr<GetHistoricalCampaignReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHistoricalCampaignReportWithOptions(request, runtime);
}

GetInstanceIdsByAliyunUidV2Response Alibabacloud_CloudCallCenter20200701::Client::getInstanceIdsByAliyunUidV2WithOptions(shared_ptr<GetInstanceIdsByAliyunUidV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunUid)) {
    query->insert(pair<string, string>("AliyunUid", *request->aliyunUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceIdsByAliyunUidV2"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceIdsByAliyunUidV2Response(callApi(params, req, runtime));
}

GetInstanceIdsByAliyunUidV2Response Alibabacloud_CloudCallCenter20200701::Client::getInstanceIdsByAliyunUidV2(shared_ptr<GetInstanceIdsByAliyunUidV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstanceIdsByAliyunUidV2WithOptions(request, runtime);
}

GetRealtimeCampaignStatsResponse Alibabacloud_CloudCallCenter20200701::Client::getRealtimeCampaignStatsWithOptions(shared_ptr<GetRealtimeCampaignStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRealtimeCampaignStats"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRealtimeCampaignStatsResponse(callApi(params, req, runtime));
}

GetRealtimeCampaignStatsResponse Alibabacloud_CloudCallCenter20200701::Client::getRealtimeCampaignStats(shared_ptr<GetRealtimeCampaignStatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRealtimeCampaignStatsWithOptions(request, runtime);
}

ImportAdminsResponse Alibabacloud_CloudCallCenter20200701::Client::importAdminsWithOptions(shared_ptr<ImportAdminsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramIdList)) {
    query->insert(pair<string, string>("RamIdList", *request->ramIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportAdmins"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportAdminsResponse(callApi(params, req, runtime));
}

ImportAdminsResponse Alibabacloud_CloudCallCenter20200701::Client::importAdmins(shared_ptr<ImportAdminsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importAdminsWithOptions(request, runtime);
}

IssueSoftphoneCommandResponse Alibabacloud_CloudCallCenter20200701::Client::issueSoftphoneCommandWithOptions(shared_ptr<IssueSoftphoneCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IssueSoftphoneCommand"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IssueSoftphoneCommandResponse(callApi(params, req, runtime));
}

IssueSoftphoneCommandResponse Alibabacloud_CloudCallCenter20200701::Client::issueSoftphoneCommand(shared_ptr<IssueSoftphoneCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return issueSoftphoneCommandWithOptions(request, runtime);
}

ListAttemptsResponse Alibabacloud_CloudCallCenter20200701::Client::listAttemptsWithOptions(shared_ptr<ListAttemptsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAttempts"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAttemptsResponse(callApi(params, req, runtime));
}

ListAttemptsResponse Alibabacloud_CloudCallCenter20200701::Client::listAttempts(shared_ptr<ListAttemptsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAttemptsWithOptions(request, runtime);
}

ListCampaignTrendingReportResponse Alibabacloud_CloudCallCenter20200701::Client::listCampaignTrendingReportWithOptions(shared_ptr<ListCampaignTrendingReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCampaignTrendingReport"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCampaignTrendingReportResponse(callApi(params, req, runtime));
}

ListCampaignTrendingReportResponse Alibabacloud_CloudCallCenter20200701::Client::listCampaignTrendingReport(shared_ptr<ListCampaignTrendingReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCampaignTrendingReportWithOptions(request, runtime);
}

ListCampaignsResponse Alibabacloud_CloudCallCenter20200701::Client::listCampaignsWithOptions(shared_ptr<ListCampaignsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actualStartTimeFrom)) {
    query->insert(pair<string, string>("ActualStartTimeFrom", *request->actualStartTimeFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->actualStartTimeTo)) {
    query->insert(pair<string, string>("ActualStartTimeTo", *request->actualStartTimeTo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planedStartTimeFrom)) {
    query->insert(pair<string, string>("PlanedStartTimeFrom", *request->planedStartTimeFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planedStartTimeTo)) {
    query->insert(pair<string, string>("PlanedStartTimeTo", *request->planedStartTimeTo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueId)) {
    query->insert(pair<string, string>("QueueId", *request->queueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCampaigns"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCampaignsResponse(callApi(params, req, runtime));
}

ListCampaignsResponse Alibabacloud_CloudCallCenter20200701::Client::listCampaigns(shared_ptr<ListCampaignsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCampaignsWithOptions(request, runtime);
}

ListCasesResponse Alibabacloud_CloudCallCenter20200701::Client::listCasesWithOptions(shared_ptr<ListCasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->campaignId)) {
    query->insert(pair<string, string>("CampaignId", *request->campaignId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneNumber)) {
    query->insert(pair<string, string>("PhoneNumber", *request->phoneNumber));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCases"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCasesResponse(callApi(params, req, runtime));
}

ListCasesResponse Alibabacloud_CloudCallCenter20200701::Client::listCases(shared_ptr<ListCasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCasesWithOptions(request, runtime);
}

ListHistoricalAgentSkillGroupReportResponse Alibabacloud_CloudCallCenter20200701::Client::listHistoricalAgentSkillGroupReportWithOptions(shared_ptr<ListHistoricalAgentSkillGroupReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skillGroupIdList)) {
    query->insert(pair<string, string>("SkillGroupIdList", *request->skillGroupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentIdList)) {
    body->insert(pair<string, string>("AgentIdList", *request->agentIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHistoricalAgentSkillGroupReport"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHistoricalAgentSkillGroupReportResponse(callApi(params, req, runtime));
}

ListHistoricalAgentSkillGroupReportResponse Alibabacloud_CloudCallCenter20200701::Client::listHistoricalAgentSkillGroupReport(shared_ptr<ListHistoricalAgentSkillGroupReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHistoricalAgentSkillGroupReportWithOptions(request, runtime);
}

ListIntervalAgentSkillGroupReportResponse Alibabacloud_CloudCallCenter20200701::Client::listIntervalAgentSkillGroupReportWithOptions(shared_ptr<ListIntervalAgentSkillGroupReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->agentId)) {
    query->insert(pair<string, string>("AgentId", *request->agentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skillGroupId)) {
    query->insert(pair<string, string>("SkillGroupId", *request->skillGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListIntervalAgentSkillGroupReport"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListIntervalAgentSkillGroupReportResponse(callApi(params, req, runtime));
}

ListIntervalAgentSkillGroupReportResponse Alibabacloud_CloudCallCenter20200701::Client::listIntervalAgentSkillGroupReport(shared_ptr<ListIntervalAgentSkillGroupReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listIntervalAgentSkillGroupReportWithOptions(request, runtime);
}

ListMonoRecordingsResponse Alibabacloud_CloudCallCenter20200701::Client::listMonoRecordingsWithOptions(shared_ptr<ListMonoRecordingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactId)) {
    query->insert(pair<string, string>("ContactId", *request->contactId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMonoRecordings"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMonoRecordingsResponse(callApi(params, req, runtime));
}

ListMonoRecordingsResponse Alibabacloud_CloudCallCenter20200701::Client::listMonoRecordings(shared_ptr<ListMonoRecordingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMonoRecordingsWithOptions(request, runtime);
}

PauseCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::pauseCampaignWithOptions(shared_ptr<PauseCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->campaignId)) {
    query->insert(pair<string, string>("CampaignId", *request->campaignId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PauseCampaign"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PauseCampaignResponse(callApi(params, req, runtime));
}

PauseCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::pauseCampaign(shared_ptr<PauseCampaignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pauseCampaignWithOptions(request, runtime);
}

ReplaceMigrationAvailableNumbersResponse Alibabacloud_CloudCallCenter20200701::Client::replaceMigrationAvailableNumbersWithOptions(shared_ptr<ReplaceMigrationAvailableNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorName)) {
    query->insert(pair<string, string>("OperatorName", *request->operatorName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->operatorUid)) {
    query->insert(pair<string, long>("OperatorUid", *request->operatorUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->v1Numbers)) {
    query->insert(pair<string, string>("V1Numbers", *request->v1Numbers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->v2Numbers)) {
    query->insert(pair<string, string>("V2Numbers", *request->v2Numbers));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceMigrationAvailableNumbers"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceMigrationAvailableNumbersResponse(callApi(params, req, runtime));
}

ReplaceMigrationAvailableNumbersResponse Alibabacloud_CloudCallCenter20200701::Client::replaceMigrationAvailableNumbers(shared_ptr<ReplaceMigrationAvailableNumbersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceMigrationAvailableNumbersWithOptions(request, runtime);
}

ResumeCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::resumeCampaignWithOptions(shared_ptr<ResumeCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->campaignId)) {
    query->insert(pair<string, string>("CampaignId", *request->campaignId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeCampaign"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeCampaignResponse(callApi(params, req, runtime));
}

ResumeCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::resumeCampaign(shared_ptr<ResumeCampaignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeCampaignWithOptions(request, runtime);
}

SaveRTCStatsV2Response Alibabacloud_CloudCallCenter20200701::Client::saveRTCStatsV2WithOptions(shared_ptr<SaveRTCStatsV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->generalInfo)) {
    query->insert(pair<string, string>("GeneralInfo", *request->generalInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->googAddress)) {
    query->insert(pair<string, string>("GoogAddress", *request->googAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiverReport)) {
    query->insert(pair<string, string>("ReceiverReport", *request->receiverReport));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderReport)) {
    query->insert(pair<string, string>("SenderReport", *request->senderReport));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveRTCStatsV2"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveRTCStatsV2Response(callApi(params, req, runtime));
}

SaveRTCStatsV2Response Alibabacloud_CloudCallCenter20200701::Client::saveRTCStatsV2(shared_ptr<SaveRTCStatsV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveRTCStatsV2WithOptions(request, runtime);
}

SaveTerminalLogResponse Alibabacloud_CloudCallCenter20200701::Client::saveTerminalLogWithOptions(shared_ptr<SaveTerminalLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataType)) {
    query->insert(pair<string, long>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->methodName)) {
    query->insert(pair<string, string>("MethodName", *request->methodName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniqueRequestId)) {
    query->insert(pair<string, string>("UniqueRequestId", *request->uniqueRequestId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveTerminalLog"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveTerminalLogResponse(callApi(params, req, runtime));
}

SaveTerminalLogResponse Alibabacloud_CloudCallCenter20200701::Client::saveTerminalLog(shared_ptr<SaveTerminalLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveTerminalLogWithOptions(request, runtime);
}

SaveWebRtcInfoResponse Alibabacloud_CloudCallCenter20200701::Client::saveWebRtcInfoWithOptions(shared_ptr<SaveWebRtcInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callId)) {
    query->insert(pair<string, string>("CallId", *request->callId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    query->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveWebRtcInfo"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveWebRtcInfoResponse(callApi(params, req, runtime));
}

SaveWebRtcInfoResponse Alibabacloud_CloudCallCenter20200701::Client::saveWebRtcInfo(shared_ptr<SaveWebRtcInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveWebRtcInfoWithOptions(request, runtime);
}

SubmitCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::submitCampaignWithOptions(shared_ptr<SubmitCampaignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->campaignId)) {
    query->insert(pair<string, string>("CampaignId", *request->campaignId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCampaign"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitCampaignResponse(callApi(params, req, runtime));
}

SubmitCampaignResponse Alibabacloud_CloudCallCenter20200701::Client::submitCampaign(shared_ptr<SubmitCampaignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCampaignWithOptions(request, runtime);
}

UnregisterDeviceResponse Alibabacloud_CloudCallCenter20200701::Client::unregisterDeviceWithOptions(shared_ptr<UnregisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnregisterDevice"))},
    {"version", boost::any(string("2020-07-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnregisterDeviceResponse(callApi(params, req, runtime));
}

UnregisterDeviceResponse Alibabacloud_CloudCallCenter20200701::Client::unregisterDevice(shared_ptr<UnregisterDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unregisterDeviceWithOptions(request, runtime);
}

