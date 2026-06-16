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
  this->_endpointRule = "";
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
 * @summary sas-绑定授权到机器
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
 * @summary sas-绑定授权到机器
 *
 * @param request BindAuthToMachineRequest
 * @return BindAuthToMachineResponse
 */
BindAuthToMachineResponse Client::bindAuthToMachine(const BindAuthToMachineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAuthToMachineWithOptions(request, runtime);
}

/**
 * @summary sas-初始化云安全中心模块规则
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
 * @summary sas-初始化云安全中心模块规则
 *
 * @param request CreateSasTrialRequest
 * @return CreateSasTrialResponse
 */
CreateSasTrialResponse Client::createSasTrial(const CreateSasTrialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSasTrialWithOptions(request, runtime);
}

/**
 * @summary sas-创建服务关联角色
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
 * @summary sas-创建服务关联角色
 *
 * @param request CreateServiceLinkedRoleRequest
 * @return CreateServiceLinkedRoleResponse
 */
CreateServiceLinkedRoleResponse Client::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleWithOptions(request, runtime);
}

/**
 * @summary 创建全盘扫描任务
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
 * @summary 创建全盘扫描任务
 *
 * @param request CreateVirusScanOnceTaskRequest
 * @return CreateVirusScanOnceTaskResponse
 */
CreateVirusScanOnceTaskResponse Client::createVirusScanOnceTask(const CreateVirusScanOnceTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVirusScanOnceTaskWithOptions(request, runtime);
}

/**
 * @summary sas-查询云安全中心实例列表
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
 * @summary sas-查询云安全中心实例列表
 *
 * @param request DescribeCloudCenterInstancesRequest
 * @return DescribeCloudCenterInstancesResponse
 */
DescribeCloudCenterInstancesResponse Client::describeCloudCenterInstances(const DescribeCloudCenterInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudCenterInstancesWithOptions(request, runtime);
}

/**
 * @summary sas-查询服务关联角色状态
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
 * @summary sas-查询服务关联角色状态
 *
 * @param request DescribeServiceLinkedRoleStatusRequest
 * @return DescribeServiceLinkedRoleStatusResponse
 */
DescribeServiceLinkedRoleStatusResponse Client::describeServiceLinkedRoleStatus(const DescribeServiceLinkedRoleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceLinkedRoleStatusWithOptions(request, runtime);
}

/**
 * @summary sas-查询安全告警事件
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
 * @summary sas-查询安全告警事件
 *
 * @param request DescribeSuspEventsRequest
 * @return DescribeSuspEventsResponse
 */
DescribeSuspEventsResponse Client::describeSuspEvents(const DescribeSuspEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSuspEventsWithOptions(request, runtime);
}

/**
 * @summary 获取告警记录分析结果
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
 * @summary 获取告警记录分析结果
 *
 * @param request GetAlertRecordAnalysisResultRequest
 * @return GetAlertRecordAnalysisResultResponse
 */
GetAlertRecordAnalysisResultResponse Client::getAlertRecordAnalysisResult(const GetAlertRecordAnalysisResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlertRecordAnalysisResultWithOptions(request, runtime);
}

/**
 * @summary 调用云安全中心部分接口
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
 * @summary 调用云安全中心部分接口
 *
 * @param request GetAliYunSafeCenterResultRequest
 * @return GetAliYunSafeCenterResultResponse
 */
GetAliYunSafeCenterResultResponse Client::getAliYunSafeCenterResult(const GetAliYunSafeCenterResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAliYunSafeCenterResultWithOptions(request, runtime);
}

/**
 * @summary sas-获取能否试用
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
 * @summary sas-获取能否试用
 *
 * @param request GetCanTrySasRequest
 * @return GetCanTrySasResponse
 */
GetCanTrySasResponse Client::getCanTrySas(const GetCanTrySasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCanTrySasWithOptions(request, runtime);
}

/**
 * @summary 获取一键处置赋权状态
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
 * @summary 获取一键处置赋权状态
 *
 * @param request GetDisposalToolStatusRequest
 * @return GetDisposalToolStatusResponse
 */
GetDisposalToolStatusResponse Client::getDisposalToolStatus(const GetDisposalToolStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDisposalToolStatusWithOptions(request, runtime);
}

/**
 * @summary sas-获取有效抵扣实例
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
 * @summary sas-获取有效抵扣实例
 *
 * @param request GetValidDeductInstancesRequest
 * @return GetValidDeductInstancesResponse
 */
GetValidDeductInstancesResponse Client::getValidDeductInstances(const GetValidDeductInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getValidDeductInstancesWithOptions(request, runtime);
}

/**
 * @summary sas-初始化云安全中心模块规则
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
 * @summary sas-初始化云安全中心模块规则
 *
 * @param request InitSasModuleRuleRequest
 * @return InitSasModuleRuleResponse
 */
InitSasModuleRuleResponse Client::initSasModuleRule(const InitSasModuleRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initSasModuleRuleWithOptions(request, runtime);
}

/**
 * @summary 查询全盘扫描结果
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
 * @summary 查询全盘扫描结果
 *
 * @param request ListVirusScanMachineEventRequest
 * @return ListVirusScanMachineEventResponse
 */
ListVirusScanMachineEventResponse Client::listVirusScanMachineEvent(const ListVirusScanMachineEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVirusScanMachineEventWithOptions(request, runtime);
}

/**
 * @summary sas-开启试用套餐
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
 * @summary sas-开启试用套餐
 *
 * @param request OpenTrialPackageRequest
 * @return OpenTrialPackageResponse
 */
OpenTrialPackageResponse Client::openTrialPackage(const OpenTrialPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openTrialPackageWithOptions(request, runtime);
}

/**
 * @summary 查询安全体检简报
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
 * @summary 查询安全体检简报
 *
 * @param request QuerySecurityCheckReportRequest
 * @return QuerySecurityCheckReportResponse
 */
QuerySecurityCheckReportResponse Client::querySecurityCheckReport(const QuerySecurityCheckReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySecurityCheckReportWithOptions(request, runtime);
}

/**
 * @summary 开启处置工具授权
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
 * @summary 开启处置工具授权
 *
 * @param request StartDisposalToolServiceRequest
 * @return StartDisposalToolServiceResponse
 */
StartDisposalToolServiceResponse Client::startDisposalToolService(const StartDisposalToolServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDisposalToolServiceWithOptions(request, runtime);
}

/**
 * @summary sas-更新后付费绑定关系
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
 * @summary sas-更新后付费绑定关系
 *
 * @param request UpdatePostPaidBindRelRequest
 * @return UpdatePostPaidBindRelResponse
 */
UpdatePostPaidBindRelResponse Client::updatePostPaidBindRel(const UpdatePostPaidBindRelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePostPaidBindRelWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace RiskManagement20260424