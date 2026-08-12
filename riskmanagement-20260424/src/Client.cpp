#include <darabonba/Core.hpp>
#include <alibabacloud/RiskManagement20260424.hpp>
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
using namespace AlibabaCloud::RiskManagement20260424::Models;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{

AlibabaCloud::RiskManagement20260424::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"public" , "riskmanagement.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("riskmanagement", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Bindss authorization to machines in Security Center.
 *
 * @param tmpReq BindAuthToMachineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAuthToMachineResponse
 */
BindAuthToMachineResponse Client::bindAuthToMachineWithOptions(const BindAuthToMachineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BindAuthToMachineShrinkRequest request = BindAuthToMachineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAuthToMachine"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAuthToMachineResponse>();
}

/**
 * @summary Bindss authorization to machines in Security Center.
 *
 * @param request BindAuthToMachineRequest
 * @return BindAuthToMachineResponse
 */
BindAuthToMachineResponse Client::bindAuthToMachine(const BindAuthToMachineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAuthToMachineWithOptions(request, runtime);
}

/**
 * @summary Initializes Security Center module rules.
 *
 * @param tmpReq CreateSasTrialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSasTrialResponse
 */
CreateSasTrialResponse Client::createSasTrialWithOptions(const CreateSasTrialRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSasTrialShrinkRequest request = CreateSasTrialShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSasTrial"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSasTrialResponse>();
}

/**
 * @summary Initializes Security Center module rules.
 *
 * @param request CreateSasTrialRequest
 * @return CreateSasTrialResponse
 */
CreateSasTrialResponse Client::createSasTrial(const CreateSasTrialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSasTrialWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role for Security Center and authorizes Security Center to access cloud resources.
 *
 * @param tmpReq CreateServiceLinkedRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRoleWithOptions(const CreateServiceLinkedRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateServiceLinkedRoleShrinkRequest request = CreateServiceLinkedRoleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRole"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceLinkedRoleResponse>();
}

/**
 * @summary Creates a service-linked role for Security Center and authorizes Security Center to access cloud resources.
 *
 * @param request CreateServiceLinkedRoleRequest
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary Creates a full disk scan task.
 *
 * @param request CreateVirusScanOnceTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVirusScanOnceTaskResponse
 */
CreateVirusScanOnceTaskResponse Client::createVirusScanOnceTaskWithOptions(const CreateVirusScanOnceTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVirusScanOnceTask"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVirusScanOnceTaskResponse>();
}

/**
 * @summary Creates a full disk scan task.
 *
 * @param request CreateVirusScanOnceTaskRequest
 * @return CreateVirusScanOnceTaskResponse
 */
CreateVirusScanOnceTaskResponse Client::createVirusScanOnceTask(const CreateVirusScanOnceTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVirusScanOnceTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Security Center instances.
 *
 * @param tmpReq DescribeCloudCenterInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudCenterInstancesResponse
 */
DescribeCloudCenterInstancesResponse Client::describeCloudCenterInstancesWithOptions(const DescribeCloudCenterInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCloudCenterInstancesShrinkRequest request = DescribeCloudCenterInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudCenterInstances"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudCenterInstancesResponse>();
}

/**
 * @summary Queries the list of Security Center instances.
 *
 * @param request DescribeCloudCenterInstancesRequest
 * @return DescribeCloudCenterInstancesResponse
 */
DescribeCloudCenterInstancesResponse Client::describeCloudCenterInstances(const DescribeCloudCenterInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudCenterInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a service-linked role for Security Center.
 *
 * @param tmpReq DescribeServiceLinkedRoleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceLinkedRoleStatusResponse
 */
DescribeServiceLinkedRoleStatusResponse Client::describeServiceLinkedRoleStatusWithOptions(const DescribeServiceLinkedRoleStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeServiceLinkedRoleStatusShrinkRequest request = DescribeServiceLinkedRoleStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceLinkedRoleStatus"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceLinkedRoleStatusResponse>();
}

/**
 * @summary Queries the status of a service-linked role for Security Center.
 *
 * @param request DescribeServiceLinkedRoleStatusRequest
 * @return DescribeServiceLinkedRoleStatusResponse
 */
DescribeServiceLinkedRoleStatusResponse Client::describeServiceLinkedRoleStatus(const DescribeServiceLinkedRoleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceLinkedRoleStatusWithOptions(request, runtime);
}

/**
 * @summary Queries security alert events in Security Center.
 *
 * @param tmpReq DescribeSuspEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSuspEventsResponse
 */
DescribeSuspEventsResponse Client::describeSuspEventsWithOptions(const DescribeSuspEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSuspEventsShrinkRequest request = DescribeSuspEventsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSuspEvents"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSuspEventsResponse>();
}

/**
 * @summary Queries security alert events in Security Center.
 *
 * @param request DescribeSuspEventsRequest
 * @return DescribeSuspEventsResponse
 */
DescribeSuspEventsResponse Client::describeSuspEvents(const DescribeSuspEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSuspEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the edition details of a purchased Security Center instance.
 *
 * @param tmpReq DescribeVersionConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVersionConfigResponse
 */
DescribeVersionConfigResponse Client::describeVersionConfigWithOptions(const DescribeVersionConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeVersionConfigShrinkRequest request = DescribeVersionConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVersionConfig"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVersionConfigResponse>();
}

/**
 * @summary Queries the edition details of a purchased Security Center instance.
 *
 * @param request DescribeVersionConfigRequest
 * @return DescribeVersionConfigResponse
 */
DescribeVersionConfigResponse Client::describeVersionConfig(const DescribeVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVersionConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the analysis results of alert records.
 *
 * @param tmpReq GetAlertRecordAnalysisResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlertRecordAnalysisResultResponse
 */
GetAlertRecordAnalysisResultResponse Client::getAlertRecordAnalysisResultWithOptions(const GetAlertRecordAnalysisResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAlertRecordAnalysisResultShrinkRequest request = GetAlertRecordAnalysisResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUniqueTagList()) {
    request.setUniqueTagListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUniqueTagList(), "UniqueTagList", "json"));
  }

  json query = {};
  if (!!request.hasAlarmUniqueInfo()) {
    query["AlarmUniqueInfo"] = request.getAlarmUniqueInfo();
  }

  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasUniqueInfo()) {
    query["UniqueInfo"] = request.getUniqueInfo();
  }

  if (!!request.hasUniqueTagListShrink()) {
    query["UniqueTagList"] = request.getUniqueTagListShrink();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlertRecordAnalysisResult"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlertRecordAnalysisResultResponse>();
}

/**
 * @summary Retrieves the analysis results of alert records.
 *
 * @param request GetAlertRecordAnalysisResultRequest
 * @return GetAlertRecordAnalysisResultResponse
 */
GetAlertRecordAnalysisResultResponse Client::getAlertRecordAnalysisResult(const GetAlertRecordAnalysisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlertRecordAnalysisResultWithOptions(request, runtime);
}

/**
 * @summary Calls specific Security Center API operations.
 *
 * @param tmpReq GetAliYunSafeCenterResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAliYunSafeCenterResultResponse
 */
GetAliYunSafeCenterResultResponse Client::getAliYunSafeCenterResultWithOptions(const GetAliYunSafeCenterResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAliYunSafeCenterResultShrinkRequest request = GetAliYunSafeCenterResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateSimilarSecurityEventsQueryTaskRequest()) {
    request.setCreateSimilarSecurityEventsQueryTaskRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateSimilarSecurityEventsQueryTaskRequest(), "CreateSimilarSecurityEventsQueryTaskRequest", "json"));
  }

  if (!!tmpReq.hasDescribeInstancesFullStatusRequest()) {
    request.setDescribeInstancesFullStatusRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDescribeInstancesFullStatusRequest(), "DescribeInstancesFullStatusRequest", "json"));
  }

  if (!!tmpReq.hasDescribeSecurityEventOperationStatusRequest()) {
    request.setDescribeSecurityEventOperationStatusRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDescribeSecurityEventOperationStatusRequest(), "DescribeSecurityEventOperationStatusRequest", "json"));
  }

  if (!!tmpReq.hasDescribeSimilarSecurityEventsRequest()) {
    request.setDescribeSimilarSecurityEventsRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDescribeSimilarSecurityEventsRequest(), "DescribeSimilarSecurityEventsRequest", "json"));
  }

  if (!!tmpReq.hasGetAssetDetailByUuidRequest()) {
    request.setGetAssetDetailByUuidRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGetAssetDetailByUuidRequest(), "GetAssetDetailByUuidRequest", "json"));
  }

  if (!!tmpReq.hasHandleSecurityEventsRequest()) {
    request.setHandleSecurityEventsRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHandleSecurityEventsRequest(), "HandleSecurityEventsRequest", "json"));
  }

  if (!!tmpReq.hasHandleSimilarSecurityEventsRequest()) {
    request.setHandleSimilarSecurityEventsRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHandleSimilarSecurityEventsRequest(), "HandleSimilarSecurityEventsRequest", "json"));
  }

  if (!!tmpReq.hasListInstancesRequest()) {
    request.setListInstancesRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListInstancesRequest(), "ListInstancesRequest", "json"));
  }

  json query = {};
  if (!!request.hasCreateSimilarSecurityEventsQueryTaskRequestShrink()) {
    query["CreateSimilarSecurityEventsQueryTaskRequest"] = request.getCreateSimilarSecurityEventsQueryTaskRequestShrink();
  }

  if (!!request.hasDescribeInstancesFullStatusRequestShrink()) {
    query["DescribeInstancesFullStatusRequest"] = request.getDescribeInstancesFullStatusRequestShrink();
  }

  if (!!request.hasDescribeSecurityEventOperationStatusRequestShrink()) {
    query["DescribeSecurityEventOperationStatusRequest"] = request.getDescribeSecurityEventOperationStatusRequestShrink();
  }

  if (!!request.hasDescribeSimilarSecurityEventsRequestShrink()) {
    query["DescribeSimilarSecurityEventsRequest"] = request.getDescribeSimilarSecurityEventsRequestShrink();
  }

  if (!!request.hasGetAssetDetailByUuidRequestShrink()) {
    query["GetAssetDetailByUuidRequest"] = request.getGetAssetDetailByUuidRequestShrink();
  }

  if (!!request.hasHandleSecurityEventsRequestShrink()) {
    query["HandleSecurityEventsRequest"] = request.getHandleSecurityEventsRequestShrink();
  }

  if (!!request.hasHandleSimilarSecurityEventsRequestShrink()) {
    query["HandleSimilarSecurityEventsRequest"] = request.getHandleSimilarSecurityEventsRequestShrink();
  }

  if (!!request.hasInterfaceCode()) {
    query["InterfaceCode"] = request.getInterfaceCode();
  }

  if (!!request.hasListInstancesRequestShrink()) {
    query["ListInstancesRequest"] = request.getListInstancesRequestShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAliYunSafeCenterResult"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAliYunSafeCenterResultResponse>();
}

/**
 * @summary Calls specific Security Center API operations.
 *
 * @param request GetAliYunSafeCenterResultRequest
 * @return GetAliYunSafeCenterResultResponse
 */
GetAliYunSafeCenterResultResponse Client::getAliYunSafeCenterResult(const GetAliYunSafeCenterResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAliYunSafeCenterResultWithOptions(request, runtime);
}

/**
 * @summary Queries whether a user is eligible for a Security Center free trial.
 *
 * @param tmpReq GetCanTrySasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCanTrySasResponse
 */
GetCanTrySasResponse Client::getCanTrySasWithOptions(const GetCanTrySasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCanTrySasShrinkRequest request = GetCanTrySasShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCanTrySas"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCanTrySasResponse>();
}

/**
 * @summary Queries whether a user is eligible for a Security Center free trial.
 *
 * @param request GetCanTrySasRequest
 * @return GetCanTrySasResponse
 */
GetCanTrySasResponse Client::getCanTrySas(const GetCanTrySasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCanTrySasWithOptions(request, runtime);
}

/**
 * @summary Retrieves the security compliance package ID.
 *
 * @param request GetCompliancePackIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCompliancePackIdResponse
 */
GetCompliancePackIdResponse Client::getCompliancePackIdWithOptions(const GetCompliancePackIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetCompliancePackId"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCompliancePackIdResponse>();
}

/**
 * @summary Retrieves the security compliance package ID.
 *
 * @param request GetCompliancePackIdRequest
 * @return GetCompliancePackIdResponse
 */
GetCompliancePackIdResponse Client::getCompliancePackId(const GetCompliancePackIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCompliancePackIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves the authorization status for one-click disposal.
 *
 * @param request GetDisposalToolStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDisposalToolStatusResponse
 */
GetDisposalToolStatusResponse Client::getDisposalToolStatusWithOptions(const GetDisposalToolStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDisposalToolStatus"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDisposalToolStatusResponse>();
}

/**
 * @summary Retrieves the authorization status for one-click disposal.
 *
 * @param request GetDisposalToolStatusRequest
 * @return GetDisposalToolStatusResponse
 */
GetDisposalToolStatusResponse Client::getDisposalToolStatus(const GetDisposalToolStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDisposalToolStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves the record of a user confirming a security contact.
 *
 * @param request GetNotificationClickRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNotificationClickRecordResponse
 */
GetNotificationClickRecordResponse Client::getNotificationClickRecordWithOptions(const GetNotificationClickRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetNotificationClickRecord"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNotificationClickRecordResponse>();
}

/**
 * @summary Retrieves the record of a user confirming a security contact.
 *
 * @param request GetNotificationClickRecordRequest
 * @return GetNotificationClickRecordResponse
 */
GetNotificationClickRecordResponse Client::getNotificationClickRecord(const GetNotificationClickRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotificationClickRecordWithOptions(request, runtime);
}

/**
 * @summary Retrieves all information about security contacts.
 *
 * @param request GetNotificationContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNotificationContactsResponse
 */
GetNotificationContactsResponse Client::getNotificationContactsWithOptions(const GetNotificationContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetNotificationContacts"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNotificationContactsResponse>();
}

/**
 * @summary Retrieves all information about security contacts.
 *
 * @param request GetNotificationContactsRequest
 * @return GetNotificationContactsResponse
 */
GetNotificationContactsResponse Client::getNotificationContacts(const GetNotificationContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotificationContactsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the number of pending items for security contacts.
 *
 * @param request GetNotificationPendNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNotificationPendNumberResponse
 */
GetNotificationPendNumberResponse Client::getNotificationPendNumberWithOptions(const GetNotificationPendNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetNotificationPendNumber"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNotificationPendNumberResponse>();
}

/**
 * @summary Retrieves the number of pending items for security contacts.
 *
 * @param request GetNotificationPendNumberRequest
 * @return GetNotificationPendNumberResponse
 */
GetNotificationPendNumberResponse Client::getNotificationPendNumber(const GetNotificationPendNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotificationPendNumberWithOptions(request, runtime);
}

/**
 * @summary Queries the details of cloud resource control events.
 *
 * @param tmpReq GetResourceControlEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceControlEventResponse
 */
GetResourceControlEventResponse Client::getResourceControlEventWithOptions(const GetResourceControlEventRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetResourceControlEventShrinkRequest request = GetResourceControlEventShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventIdList()) {
    request.setEventIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventIdList(), "EventIdList", "json"));
  }

  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasEventIdListShrink()) {
    query["EventIdList"] = request.getEventIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceControlEvent"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceControlEventResponse>();
}

/**
 * @summary Queries the details of cloud resource control events.
 *
 * @param request GetResourceControlEventRequest
 * @return GetResourceControlEventResponse
 */
GetResourceControlEventResponse Client::getResourceControlEvent(const GetResourceControlEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceControlEventWithOptions(request, runtime);
}

/**
 * @summary Retrieves the basic information of a security check.
 *
 * @param request GetSecurityCheckBaseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecurityCheckBaseInfoResponse
 */
GetSecurityCheckBaseInfoResponse Client::getSecurityCheckBaseInfoWithOptions(const GetSecurityCheckBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetSecurityCheckBaseInfo"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecurityCheckBaseInfoResponse>();
}

/**
 * @summary Retrieves the basic information of a security check.
 *
 * @param request GetSecurityCheckBaseInfoRequest
 * @return GetSecurityCheckBaseInfoResponse
 */
GetSecurityCheckBaseInfoResponse Client::getSecurityCheckBaseInfo(const GetSecurityCheckBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityCheckBaseInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the basic information of security check results.
 *
 * @param request GetSecurityCheckResultBaseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecurityCheckResultBaseInfoResponse
 */
GetSecurityCheckResultBaseInfoResponse Client::getSecurityCheckResultBaseInfoWithOptions(const GetSecurityCheckResultBaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetSecurityCheckResultBaseInfo"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecurityCheckResultBaseInfoResponse>();
}

/**
 * @summary Retrieves the basic information of security check results.
 *
 * @param request GetSecurityCheckResultBaseInfoRequest
 * @return GetSecurityCheckResultBaseInfoResponse
 */
GetSecurityCheckResultBaseInfoResponse Client::getSecurityCheckResultBaseInfo(const GetSecurityCheckResultBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityCheckResultBaseInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of security optimization suggestions.
 *
 * @param tmpReq GetSecuritySuggestionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecuritySuggestionListResponse
 */
GetSecuritySuggestionListResponse Client::getSecuritySuggestionListWithOptions(const GetSecuritySuggestionListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSecuritySuggestionListShrinkRequest request = GetSecuritySuggestionListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListConfigRulesRequest()) {
    request.setListConfigRulesRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListConfigRulesRequest(), "ListConfigRulesRequest", "json"));
  }

  json query = {};
  if (!!request.hasListConfigRulesRequestShrink()) {
    query["ListConfigRulesRequest"] = request.getListConfigRulesRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecuritySuggestionList"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecuritySuggestionListResponse>();
}

/**
 * @summary Retrieves a list of security optimization suggestions.
 *
 * @param request GetSecuritySuggestionListRequest
 * @return GetSecuritySuggestionListResponse
 */
GetSecuritySuggestionListResponse Client::getSecuritySuggestionList(const GetSecuritySuggestionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecuritySuggestionListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the number of security optimization suggestions.
 *
 * @param request GetSecuritySuggestionNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecuritySuggestionNumberResponse
 */
GetSecuritySuggestionNumberResponse Client::getSecuritySuggestionNumberWithOptions(const GetSecuritySuggestionNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetSecuritySuggestionNumber"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecuritySuggestionNumberResponse>();
}

/**
 * @summary Retrieves the number of security optimization suggestions.
 *
 * @param request GetSecuritySuggestionNumberRequest
 * @return GetSecuritySuggestionNumberResponse
 */
GetSecuritySuggestionNumberResponse Client::getSecuritySuggestionNumber(const GetSecuritySuggestionNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecuritySuggestionNumberWithOptions(request, runtime);
}

/**
 * @summary Retrieves the status of a service-linked role.
 *
 * @param request GetServiceLinkedRoleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceLinkedRoleStatusResponse
 */
GetServiceLinkedRoleStatusResponse Client::getServiceLinkedRoleStatusWithOptions(const GetServiceLinkedRoleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceLinkedRoleStatus"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceLinkedRoleStatusResponse>();
}

/**
 * @summary Retrieves the status of a service-linked role.
 *
 * @param request GetServiceLinkedRoleStatusRequest
 * @return GetServiceLinkedRoleStatusResponse
 */
GetServiceLinkedRoleStatusResponse Client::getServiceLinkedRoleStatus(const GetServiceLinkedRoleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceLinkedRoleStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves valid deductible instances for Security Center.
 *
 * @param tmpReq GetValidDeductInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetValidDeductInstancesResponse
 */
GetValidDeductInstancesResponse Client::getValidDeductInstancesWithOptions(const GetValidDeductInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetValidDeductInstancesShrinkRequest request = GetValidDeductInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetValidDeductInstances"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetValidDeductInstancesResponse>();
}

/**
 * @summary Retrieves valid deductible instances for Security Center.
 *
 * @param request GetValidDeductInstancesRequest
 * @return GetValidDeductInstancesResponse
 */
GetValidDeductInstancesResponse Client::getValidDeductInstances(const GetValidDeductInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getValidDeductInstancesWithOptions(request, runtime);
}

/**
 * @summary Initializes module rules for Security Center.
 *
 * @param tmpReq InitSasModuleRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitSasModuleRuleResponse
 */
InitSasModuleRuleResponse Client::initSasModuleRuleWithOptions(const InitSasModuleRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InitSasModuleRuleShrinkRequest request = InitSasModuleRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstances()) {
    request.setInstancesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstances(), "Instances", "json"));
  }

  json query = {};
  if (!!request.hasAutoBind()) {
    query["AutoBind"] = request.getAutoBind();
  }

  if (!!request.hasInstancesShrink()) {
    query["Instances"] = request.getInstancesShrink();
  }

  if (!!request.hasIsTrial()) {
    query["IsTrial"] = request.getIsTrial();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InitSasModuleRule"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitSasModuleRuleResponse>();
}

/**
 * @summary Initializes module rules for Security Center.
 *
 * @param request InitSasModuleRuleRequest
 * @return InitSasModuleRuleResponse
 */
InitSasModuleRuleResponse Client::initSasModuleRule(const InitSasModuleRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initSasModuleRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the results of a full disk scan.
 *
 * @param request ListVirusScanMachineEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVirusScanMachineEventResponse
 */
ListVirusScanMachineEventResponse Client::listVirusScanMachineEventWithOptions(const ListVirusScanMachineEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOperateTaskId()) {
    query["OperateTaskId"] = request.getOperateTaskId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVirusScanMachineEvent"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVirusScanMachineEventResponse>();
}

/**
 * @summary Queries the results of a full disk scan.
 *
 * @param request ListVirusScanMachineEventRequest
 * @return ListVirusScanMachineEventResponse
 */
ListVirusScanMachineEventResponse Client::listVirusScanMachineEvent(const ListVirusScanMachineEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVirusScanMachineEventWithOptions(request, runtime);
}

/**
 * @summary Starts a free trial of Security Center.
 *
 * @param request OpenTrialPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenTrialPackageResponse
 */
OpenTrialPackageResponse Client::openTrialPackageWithOptions(const OpenTrialPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoCloseSwitch()) {
    query["AutoCloseSwitch"] = request.getAutoCloseSwitch();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenTrialPackage"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenTrialPackageResponse>();
}

/**
 * @summary Starts a free trial of Security Center.
 *
 * @param request OpenTrialPackageRequest
 * @return OpenTrialPackageResponse
 */
OpenTrialPackageResponse Client::openTrialPackage(const OpenTrialPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openTrialPackageWithOptions(request, runtime);
}

/**
 * @summary Queries account security events.
 *
 * @param request QueryAccountSafetyIncidentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountSafetyIncidentResponse
 */
QueryAccountSafetyIncidentResponse Client::queryAccountSafetyIncidentWithOptions(const QueryAccountSafetyIncidentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasCaseCode()) {
    query["CaseCode"] = request.getCaseCode();
  }

  if (!!request.hasCurrent()) {
    query["Current"] = request.getCurrent();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPunishEndTime()) {
    query["PunishEndTime"] = request.getPunishEndTime();
  }

  if (!!request.hasPunishStartTime()) {
    query["PunishStartTime"] = request.getPunishStartTime();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountSafetyIncident"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountSafetyIncidentResponse>();
}

/**
 * @summary Queries account security events.
 *
 * @param request QueryAccountSafetyIncidentRequest
 * @return QueryAccountSafetyIncidentResponse
 */
QueryAccountSafetyIncidentResponse Client::queryAccountSafetyIncident(const QueryAccountSafetyIncidentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountSafetyIncidentWithOptions(request, runtime);
}

/**
 * @summary Queries the subscription status of the cloud security guide.
 *
 * @param request QueryGuideSubStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGuideSubStatusResponse
 */
QueryGuideSubStatusResponse Client::queryGuideSubStatusWithOptions(const QueryGuideSubStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QueryGuideSubStatus"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGuideSubStatusResponse>();
}

/**
 * @summary Queries the subscription status of the cloud security guide.
 *
 * @param request QueryGuideSubStatusRequest
 * @return QueryGuideSubStatusResponse
 */
QueryGuideSubStatusResponse Client::queryGuideSubStatus(const QueryGuideSubStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGuideSubStatusWithOptions(request, runtime);
}

/**
 * @summary Queries cloud resource control events.
 *
 * @param tmpReq QueryResourceControlEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryResourceControlEventsResponse
 */
QueryResourceControlEventsResponse Client::queryResourceControlEventsWithOptions(const QueryResourceControlEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryResourceControlEventsShrinkRequest request = QueryResourceControlEventsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasActionCodes()) {
    request.setActionCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getActionCodes(), "ActionCodes", "json"));
  }

  if (!!tmpReq.hasBusinessCodes()) {
    request.setBusinessCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBusinessCodes(), "BusinessCodes", "json"));
  }

  if (!!tmpReq.hasCaseCodesPrefix()) {
    request.setCaseCodesPrefixShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCaseCodesPrefix(), "CaseCodesPrefix", "json"));
  }

  if (!!tmpReq.hasEventCodes()) {
    request.setEventCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventCodes(), "EventCodes", "json"));
  }

  if (!!tmpReq.hasEventIdList()) {
    request.setEventIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventIdList(), "EventIdList", "json"));
  }

  if (!!tmpReq.hasExcludeActionCodes()) {
    request.setExcludeActionCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeActionCodes(), "ExcludeActionCodes", "json"));
  }

  if (!!tmpReq.hasExcludeEventCodes()) {
    request.setExcludeEventCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeEventCodes(), "ExcludeEventCodes", "json"));
  }

  if (!!tmpReq.hasExcludeReasons()) {
    request.setExcludeReasonsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeReasons(), "ExcludeReasons", "json"));
  }

  if (!!tmpReq.hasIncludeReasons()) {
    request.setIncludeReasonsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIncludeReasons(), "IncludeReasons", "json"));
  }

  if (!!tmpReq.hasSourceCodes()) {
    request.setSourceCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceCodes(), "SourceCodes", "json"));
  }

  if (!!tmpReq.hasStatusList()) {
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatusList(), "StatusList", "json"));
  }

  json query = {};
  if (!!request.hasActionCode()) {
    query["ActionCode"] = request.getActionCode();
  }

  if (!!request.hasActionCodesShrink()) {
    query["ActionCodes"] = request.getActionCodesShrink();
  }

  if (!!request.hasAliyunLang()) {
    query["AliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasBusinessCode()) {
    query["BusinessCode"] = request.getBusinessCode();
  }

  if (!!request.hasBusinessCodesShrink()) {
    query["BusinessCodes"] = request.getBusinessCodesShrink();
  }

  if (!!request.hasCaseCodesPrefixShrink()) {
    query["CaseCodesPrefix"] = request.getCaseCodesPrefixShrink();
  }

  if (!!request.hasCurrent()) {
    query["Current"] = request.getCurrent();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEventCode()) {
    query["EventCode"] = request.getEventCode();
  }

  if (!!request.hasEventCodesShrink()) {
    query["EventCodes"] = request.getEventCodesShrink();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasEventIdListShrink()) {
    query["EventIdList"] = request.getEventIdListShrink();
  }

  if (!!request.hasExcludeActionCodesShrink()) {
    query["ExcludeActionCodes"] = request.getExcludeActionCodesShrink();
  }

  if (!!request.hasExcludeEventCodesShrink()) {
    query["ExcludeEventCodes"] = request.getExcludeEventCodesShrink();
  }

  if (!!request.hasExcludeReasonsShrink()) {
    query["ExcludeReasons"] = request.getExcludeReasonsShrink();
  }

  if (!!request.hasIncludeReasonsShrink()) {
    query["IncludeReasons"] = request.getIncludeReasonsShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPunishEndTime()) {
    query["PunishEndTime"] = request.getPunishEndTime();
  }

  if (!!request.hasPunishStartTime()) {
    query["PunishStartTime"] = request.getPunishStartTime();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.getReason();
  }

  if (!!request.hasSourceCodesShrink()) {
    query["SourceCodes"] = request.getSourceCodesShrink();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStatusListShrink()) {
    query["StatusList"] = request.getStatusListShrink();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryResourceControlEvents"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryResourceControlEventsResponse>();
}

/**
 * @summary Queries cloud resource control events.
 *
 * @param request QueryResourceControlEventsRequest
 * @return QueryResourceControlEventsResponse
 */
QueryResourceControlEventsResponse Client::queryResourceControlEvents(const QueryResourceControlEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryResourceControlEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the security check brief.
 *
 * @param request QuerySecurityCheckReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySecurityCheckReportResponse
 */
QuerySecurityCheckReportResponse Client::querySecurityCheckReportWithOptions(const QuerySecurityCheckReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QuerySecurityCheckReport"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySecurityCheckReportResponse>();
}

/**
 * @summary Queries the security check brief.
 *
 * @param request QuerySecurityCheckReportRequest
 * @return QuerySecurityCheckReportResponse
 */
QuerySecurityCheckReportResponse Client::querySecurityCheckReport(const QuerySecurityCheckReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySecurityCheckReportWithOptions(request, runtime);
}

/**
 * @summary Enables disposal tool authorization.
 *
 * @param request StartDisposalToolServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDisposalToolServiceResponse
 */
StartDisposalToolServiceResponse Client::startDisposalToolServiceWithOptions(const StartDisposalToolServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDisposalToolService"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDisposalToolServiceResponse>();
}

/**
 * @summary Enables disposal tool authorization.
 *
 * @param request StartDisposalToolServiceRequest
 * @return StartDisposalToolServiceResponse
 */
StartDisposalToolServiceResponse Client::startDisposalToolService(const StartDisposalToolServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDisposalToolServiceWithOptions(request, runtime);
}

/**
 * @summary Enables security check.
 *
 * @param request StartSecurityCheckServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSecurityCheckServiceResponse
 */
StartSecurityCheckServiceResponse Client::startSecurityCheckServiceWithOptions(const StartSecurityCheckServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "StartSecurityCheckService"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSecurityCheckServiceResponse>();
}

/**
 * @summary Enables security check.
 *
 * @param request StartSecurityCheckServiceRequest
 * @return StartSecurityCheckServiceResponse
 */
StartSecurityCheckServiceResponse Client::startSecurityCheckService(const StartSecurityCheckServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSecurityCheckServiceWithOptions(request, runtime);
}

/**
 * @summary Submits an unblocking request.
 *
 * @param tmpReq SubmitApplyRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitApplyRecordResponse
 */
SubmitApplyRecordResponse Client::submitApplyRecordWithOptions(const SubmitApplyRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitApplyRecordShrinkRequest request = SubmitApplyRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventIdList()) {
    request.setEventIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventIdList(), "EventIdList", "json"));
  }

  json query = {};
  if (!!request.hasApplyRequest()) {
    query["ApplyRequest"] = request.getApplyRequest();
  }

  if (!!request.hasCommitmentLetter()) {
    query["CommitmentLetter"] = request.getCommitmentLetter();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEventIdListShrink()) {
    query["EventIdList"] = request.getEventIdListShrink();
  }

  if (!!request.hasQualificationProof()) {
    query["QualificationProof"] = request.getQualificationProof();
  }

  if (!!request.hasTrial()) {
    query["Trial"] = request.getTrial();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitApplyRecord"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitApplyRecordResponse>();
}

/**
 * @summary Submits an unblocking request.
 *
 * @param request SubmitApplyRecordRequest
 * @return SubmitApplyRecordResponse
 */
SubmitApplyRecordResponse Client::submitApplyRecord(const SubmitApplyRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitApplyRecordWithOptions(request, runtime);
}

/**
 * @summary Updates the pay-as-you-go binding relationship for Security Center.
 *
 * @param tmpReq UpdatePostPaidBindRelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePostPaidBindRelResponse
 */
UpdatePostPaidBindRelResponse Client::updatePostPaidBindRelWithOptions(const UpdatePostPaidBindRelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePostPaidBindRelShrinkRequest request = UpdatePostPaidBindRelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSdkRequest()) {
    request.setSdkRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSdkRequest(), "SdkRequest", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSdkRequestShrink()) {
    query["SdkRequest"] = request.getSdkRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePostPaidBindRel"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePostPaidBindRelResponse>();
}

/**
 * @summary Updates the pay-as-you-go binding relationship for Security Center.
 *
 * @param request UpdatePostPaidBindRelRequest
 * @return UpdatePostPaidBindRelResponse
 */
UpdatePostPaidBindRelResponse Client::updatePostPaidBindRel(const UpdatePostPaidBindRelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePostPaidBindRelWithOptions(request, runtime);
}

/**
 * @summary Updates the health check result.
 *
 * @param request UpdateSecurityCheckResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityCheckResultResponse
 */
UpdateSecurityCheckResultResponse Client::updateSecurityCheckResultWithOptions(const UpdateSecurityCheckResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "UpdateSecurityCheckResult"},
    {"version" , "2026-04-24"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecurityCheckResultResponse>();
}

/**
 * @summary Updates the health check result.
 *
 * @param request UpdateSecurityCheckResultRequest
 * @return UpdateSecurityCheckResultResponse
 */
UpdateSecurityCheckResultResponse Client::updateSecurityCheckResult(const UpdateSecurityCheckResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityCheckResultWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace RiskManagement20260424