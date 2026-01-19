#include <darabonba/Core.hpp>
#include <alibabacloud/CloudCallCenter20200701.hpp>
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
using namespace AlibabaCloud::CloudCallCenter20200701::Models;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{

AlibabaCloud::CloudCallCenter20200701::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("cloudcallcenter", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary abort campaign
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
 * @summary abort campaign
 *
 * @param request AbortCampaignRequest
 * @return AbortCampaignResponse
 */
AbortCampaignResponse Client::abortCampaign(const AbortCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abortCampaignWithOptions(request, runtime);
}

/**
 * @summary abort cases
 *
 * @param tmpReq AbortCasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbortCasesResponse
 */
AbortCasesResponse Client::abortCasesWithOptions(const AbortCasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AbortCasesShrinkRequest request = AbortCasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPhoneNumberList()) {
    request.setPhoneNumberListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhoneNumberList(), "PhoneNumberList", "json"));
  }

  json query = {};
  if (!!request.hasCampaignId()) {
    query["CampaignId"] = request.getCampaignId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPhoneNumberListShrink()) {
    query["PhoneNumberList"] = request.getPhoneNumberListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AbortCases"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbortCasesResponse>();
}

/**
 * @summary abort cases
 *
 * @param request AbortCasesRequest
 * @return AbortCasesResponse
 */
AbortCasesResponse Client::abortCases(const AbortCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abortCasesWithOptions(request, runtime);
}

/**
 * @param request CheckDemoInstanceExistsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDemoInstanceExistsResponse
 */
CheckDemoInstanceExistsResponse Client::checkDemoInstanceExistsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CheckDemoInstanceExists"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDemoInstanceExistsResponse>();
}

/**
 * @return CheckDemoInstanceExistsResponse
 */
CheckDemoInstanceExistsResponse Client::checkDemoInstanceExists() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDemoInstanceExistsWithOptions(runtime);
}

/**
 * @param request CheckMQRoleAssumptionAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckMQRoleAssumptionAuthorityResponse
 */
CheckMQRoleAssumptionAuthorityResponse Client::checkMQRoleAssumptionAuthorityWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CheckMQRoleAssumptionAuthority"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckMQRoleAssumptionAuthorityResponse>();
}

/**
 * @return CheckMQRoleAssumptionAuthorityResponse
 */
CheckMQRoleAssumptionAuthorityResponse Client::checkMQRoleAssumptionAuthority() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkMQRoleAssumptionAuthorityWithOptions(runtime);
}

/**
 * @summary create campaign
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
 * @summary create campaign
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
 * @param request CreateCorpNumberGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCorpNumberGroupResponse
 */
CreateCorpNumberGroupResponse Client::createCorpNumberGroupWithOptions(const CreateCorpNumberGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCorpNumberGroup"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCorpNumberGroupResponse>();
}

/**
 * @param request CreateCorpNumberGroupRequest
 * @return CreateCorpNumberGroupResponse
 */
CreateCorpNumberGroupResponse Client::createCorpNumberGroup(const CreateCorpNumberGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCorpNumberGroupWithOptions(request, runtime);
}

/**
 * @param request CreateDemoInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDemoInstanceResponse
 */
CreateDemoInstanceResponse Client::createDemoInstanceWithOptions(const CreateDemoInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutboundCallWhitelist()) {
    query["OutboundCallWhitelist"] = request.getOutboundCallWhitelist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDemoInstance"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDemoInstanceResponse>();
}

/**
 * @param request CreateDemoInstanceRequest
 * @return CreateDemoInstanceResponse
 */
CreateDemoInstanceResponse Client::createDemoInstance(const CreateDemoInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDemoInstanceWithOptions(request, runtime);
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
 * @summary 获取预测式外呼活动
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
 * @summary 获取预测式外呼活动
 *
 * @param request GetCampaignRequest
 * @return GetCampaignResponse
 */
GetCampaignResponse Client::getCampaign(const GetCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCampaignWithOptions(request, runtime);
}

/**
 * @summary GetDocument
 *
 * @param request GetDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocumentResponse
 */
GetDocumentResponse Client::getDocumentWithOptions(const GetDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetDocument"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocumentResponse>();
}

/**
 * @summary GetDocument
 *
 * @param request GetDocumentRequest
 * @return GetDocumentResponse
 */
GetDocumentResponse Client::getDocument(const GetDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDocumentWithOptions(request, runtime);
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
 * @summary 根据aliyunuid获取实例
 *
 * @param request GetInstanceIdsByAliyunUidV2Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceIdsByAliyunUidV2Response
 */
GetInstanceIdsByAliyunUidV2Response Client::getInstanceIdsByAliyunUidV2WithOptions(const GetInstanceIdsByAliyunUidV2Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunUid()) {
    query["AliyunUid"] = request.getAliyunUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInstanceIdsByAliyunUidV2"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceIdsByAliyunUidV2Response>();
}

/**
 * @summary 根据aliyunuid获取实例
 *
 * @param request GetInstanceIdsByAliyunUidV2Request
 * @return GetInstanceIdsByAliyunUidV2Response
 */
GetInstanceIdsByAliyunUidV2Response Client::getInstanceIdsByAliyunUidV2(const GetInstanceIdsByAliyunUidV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceIdsByAliyunUidV2WithOptions(request, runtime);
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
 * @param request ImportAdminsRequest
 * @return ImportAdminsResponse
 */
ImportAdminsResponse Client::importAdmins(const ImportAdminsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importAdminsWithOptions(request, runtime);
}

/**
 * @param request IssueSoftphoneCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IssueSoftphoneCommandResponse
 */
IssueSoftphoneCommandResponse Client::issueSoftphoneCommandWithOptions(const IssueSoftphoneCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasData()) {
    query["Data"] = request.getData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IssueSoftphoneCommand"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IssueSoftphoneCommandResponse>();
}

/**
 * @param request IssueSoftphoneCommandRequest
 * @return IssueSoftphoneCommandResponse
 */
IssueSoftphoneCommandResponse Client::issueSoftphoneCommand(const IssueSoftphoneCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return issueSoftphoneCommandWithOptions(request, runtime);
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
 * @summary 查询预测式外呼列表
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
 * @summary 查询预测式外呼列表
 *
 * @param request ListCampaignsRequest
 * @return ListCampaignsResponse
 */
ListCampaignsResponse Client::listCampaigns(const ListCampaignsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCampaignsWithOptions(request, runtime);
}

/**
 * @summary list case
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
 * @summary list case
 *
 * @param request ListCasesRequest
 * @return ListCasesResponse
 */
ListCasesResponse Client::listCases(const ListCasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCasesWithOptions(request, runtime);
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
 * @param request ListFlashSmsSettingsRequest
 * @return ListFlashSmsSettingsResponse
 */
ListFlashSmsSettingsResponse Client::listFlashSmsSettings(const ListFlashSmsSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFlashSmsSettingsWithOptions(request, runtime);
}

/**
 * @summary 查询坐席技能组报表
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
 * @summary 查询坐席技能组报表
 *
 * @param request ListHistoricalAgentSkillGroupReportRequest
 * @return ListHistoricalAgentSkillGroupReportResponse
 */
ListHistoricalAgentSkillGroupReportResponse Client::listHistoricalAgentSkillGroupReport(const ListHistoricalAgentSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHistoricalAgentSkillGroupReportWithOptions(request, runtime);
}

/**
 * @summary 查询坐席技能组报表
 *
 * @param request ListIntervalAgentSkillGroupReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntervalAgentSkillGroupReportResponse
 */
ListIntervalAgentSkillGroupReportResponse Client::listIntervalAgentSkillGroupReportWithOptions(const ListIntervalAgentSkillGroupReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasShowDefaultIfEmpty()) {
    query["ShowDefaultIfEmpty"] = request.getShowDefaultIfEmpty();
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
    {"action" , "ListIntervalAgentSkillGroupReport"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntervalAgentSkillGroupReportResponse>();
}

/**
 * @summary 查询坐席技能组报表
 *
 * @param request ListIntervalAgentSkillGroupReportRequest
 * @return ListIntervalAgentSkillGroupReportResponse
 */
ListIntervalAgentSkillGroupReportResponse Client::listIntervalAgentSkillGroupReport(const ListIntervalAgentSkillGroupReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listIntervalAgentSkillGroupReportWithOptions(request, runtime);
}

/**
 * @summary 录音查询
 *
 * @param request ListMonoRecordingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMonoRecordingsResponse
 */
ListMonoRecordingsResponse Client::listMonoRecordingsWithOptions(const ListMonoRecordingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary 录音查询
 *
 * @param request ListMonoRecordingsRequest
 * @return ListMonoRecordingsResponse
 */
ListMonoRecordingsResponse Client::listMonoRecordings(const ListMonoRecordingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMonoRecordingsWithOptions(request, runtime);
}

/**
 * @summary 暂停预测式外呼
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
 * @summary 暂停预测式外呼
 *
 * @param request PauseCampaignRequest
 * @return PauseCampaignResponse
 */
PauseCampaignResponse Client::pauseCampaign(const PauseCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseCampaignWithOptions(request, runtime);
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
 * @summary ccc migration
 *
 * @param request ReplaceMigrationAvailableNumbersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceMigrationAvailableNumbersResponse
 */
ReplaceMigrationAvailableNumbersResponse Client::replaceMigrationAvailableNumbersWithOptions(const ReplaceMigrationAvailableNumbersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOperatorName()) {
    query["OperatorName"] = request.getOperatorName();
  }

  if (!!request.hasOperatorUid()) {
    query["OperatorUid"] = request.getOperatorUid();
  }

  if (!!request.hasV1Numbers()) {
    query["V1Numbers"] = request.getV1Numbers();
  }

  if (!!request.hasV2Numbers()) {
    query["V2Numbers"] = request.getV2Numbers();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReplaceMigrationAvailableNumbers"},
    {"version" , "2020-07-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceMigrationAvailableNumbersResponse>();
}

/**
 * @summary ccc migration
 *
 * @param request ReplaceMigrationAvailableNumbersRequest
 * @return ReplaceMigrationAvailableNumbersResponse
 */
ReplaceMigrationAvailableNumbersResponse Client::replaceMigrationAvailableNumbers(const ReplaceMigrationAvailableNumbersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceMigrationAvailableNumbersWithOptions(request, runtime);
}

/**
 * @summary resume campaign
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
 * @summary resume campaign
 *
 * @param request ResumeCampaignRequest
 * @return ResumeCampaignResponse
 */
ResumeCampaignResponse Client::resumeCampaign(const ResumeCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeCampaignWithOptions(request, runtime);
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
 * @param request SaveRTCStatsV2Request
 * @return SaveRTCStatsV2Response
 */
SaveRTCStatsV2Response Client::saveRTCStatsV2(const SaveRTCStatsV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveRTCStatsV2WithOptions(request, runtime);
}

/**
 * @summary -
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
 * @summary -
 *
 * @param request SaveTerminalLogRequest
 * @return SaveTerminalLogResponse
 */
SaveTerminalLogResponse Client::saveTerminalLog(const SaveTerminalLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveTerminalLogWithOptions(request, runtime);
}

/**
 * @summary -
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
 * @summary -
 *
 * @param request SaveWebRtcInfoRequest
 * @return SaveWebRtcInfoResponse
 */
SaveWebRtcInfoResponse Client::saveWebRtcInfo(const SaveWebRtcInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveWebRtcInfoWithOptions(request, runtime);
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
 * @summary submit campaign
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
 * @summary submit campaign
 *
 * @param request SubmitCampaignRequest
 * @return SubmitCampaignResponse
 */
SubmitCampaignResponse Client::submitCampaign(const SubmitCampaignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCampaignWithOptions(request, runtime);
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
 * @summary 删除注册设备
 *
 * @param request UnregisterDeviceRequest
 * @return UnregisterDeviceResponse
 */
UnregisterDeviceResponse Client::unregisterDevice(const UnregisterDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unregisterDeviceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701