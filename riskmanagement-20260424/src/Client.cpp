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
 * @summary sas-查看已购买的云安全中心实例的版本详情
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
 * @summary sas-查看已购买的云安全中心实例的版本详情
 *
 * @param request DescribeVersionConfigRequest
 * @return DescribeVersionConfigResponse
 */
DescribeVersionConfigResponse Client::describeVersionConfig(const DescribeVersionConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVersionConfigWithOptions(request, runtime);
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
 * @summary 获取安全合规包id
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
 * @summary 获取安全合规包id
 *
 * @param request GetCompliancePackIdRequest
 * @return GetCompliancePackIdResponse
 */
GetCompliancePackIdResponse Client::getCompliancePackId(const GetCompliancePackIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCompliancePackIdWithOptions(request, runtime);
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
 * @summary 获取用户确认安全联系人记录
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
 * @summary 获取用户确认安全联系人记录
 *
 * @param request GetNotificationClickRecordRequest
 * @return GetNotificationClickRecordResponse
 */
GetNotificationClickRecordResponse Client::getNotificationClickRecord(const GetNotificationClickRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotificationClickRecordWithOptions(request, runtime);
}

/**
 * @summary 获取安全联系人全部信息
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
 * @summary 获取安全联系人全部信息
 *
 * @param request GetNotificationContactsRequest
 * @return GetNotificationContactsResponse
 */
GetNotificationContactsResponse Client::getNotificationContacts(const GetNotificationContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotificationContactsWithOptions(request, runtime);
}

/**
 * @summary 获取安全联系人待处理数
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
 * @summary 获取安全联系人待处理数
 *
 * @param request GetNotificationPendNumberRequest
 * @return GetNotificationPendNumberResponse
 */
GetNotificationPendNumberResponse Client::getNotificationPendNumber(const GetNotificationPendNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNotificationPendNumberWithOptions(request, runtime);
}

/**
 * @summary 查询云资源管控事件详情
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
 * @summary 查询云资源管控事件详情
 *
 * @param request GetResourceControlEventRequest
 * @return GetResourceControlEventResponse
 */
GetResourceControlEventResponse Client::getResourceControlEvent(const GetResourceControlEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceControlEventWithOptions(request, runtime);
}

/**
 * @summary 获取安全体检基础信息
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
 * @summary 获取安全体检基础信息
 *
 * @param request GetSecurityCheckBaseInfoRequest
 * @return GetSecurityCheckBaseInfoResponse
 */
GetSecurityCheckBaseInfoResponse Client::getSecurityCheckBaseInfo(const GetSecurityCheckBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityCheckBaseInfoWithOptions(request, runtime);
}

/**
 * @summary 获取安全检查结果基础信息
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
 * @summary 获取安全检查结果基础信息
 *
 * @param request GetSecurityCheckResultBaseInfoRequest
 * @return GetSecurityCheckResultBaseInfoResponse
 */
GetSecurityCheckResultBaseInfoResponse Client::getSecurityCheckResultBaseInfo(const GetSecurityCheckResultBaseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityCheckResultBaseInfoWithOptions(request, runtime);
}

/**
 * @summary 获取安全优化建议列表
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
 * @summary 获取安全优化建议列表
 *
 * @param request GetSecuritySuggestionListRequest
 * @return GetSecuritySuggestionListResponse
 */
GetSecuritySuggestionListResponse Client::getSecuritySuggestionList(const GetSecuritySuggestionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecuritySuggestionListWithOptions(request, runtime);
}

/**
 * @summary 获取安全优化建议条数
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
 * @summary 获取安全优化建议条数
 *
 * @param request GetSecuritySuggestionNumberRequest
 * @return GetSecuritySuggestionNumberResponse
 */
GetSecuritySuggestionNumberResponse Client::getSecuritySuggestionNumber(const GetSecuritySuggestionNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecuritySuggestionNumberWithOptions(request, runtime);
}

/**
 * @summary 获取服务关联角色状态
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
 * @summary 获取服务关联角色状态
 *
 * @param request GetServiceLinkedRoleStatusRequest
 * @return GetServiceLinkedRoleStatusResponse
 */
GetServiceLinkedRoleStatusResponse Client::getServiceLinkedRoleStatus(const GetServiceLinkedRoleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServiceLinkedRoleStatusWithOptions(request, runtime);
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
 * @summary 查询账号安全事件
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
 * @summary 查询账号安全事件
 *
 * @param request QueryAccountSafetyIncidentRequest
 * @return QueryAccountSafetyIncidentResponse
 */
QueryAccountSafetyIncidentResponse Client::queryAccountSafetyIncident(const QueryAccountSafetyIncidentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountSafetyIncidentWithOptions(request, runtime);
}

/**
 * @summary 查询云上安全指南的订阅状态
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
 * @summary 查询云上安全指南的订阅状态
 *
 * @param request QueryGuideSubStatusRequest
 * @return QueryGuideSubStatusResponse
 */
QueryGuideSubStatusResponse Client::queryGuideSubStatus(const QueryGuideSubStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGuideSubStatusWithOptions(request, runtime);
}

/**
 * @summary 查询云资源管控事件
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
 * @summary 查询云资源管控事件
 *
 * @param request QueryResourceControlEventsRequest
 * @return QueryResourceControlEventsResponse
 */
QueryResourceControlEventsResponse Client::queryResourceControlEvents(const QueryResourceControlEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryResourceControlEventsWithOptions(request, runtime);
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
 * @summary 开启安全体检
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
 * @summary 开启安全体检
 *
 * @param request StartSecurityCheckServiceRequest
 * @return StartSecurityCheckServiceResponse
 */
StartSecurityCheckServiceResponse Client::startSecurityCheckService(const StartSecurityCheckServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSecurityCheckServiceWithOptions(request, runtime);
}

/**
 * @summary 申请解封
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
 * @summary 申请解封
 *
 * @param request SubmitApplyRecordRequest
 * @return SubmitApplyRecordResponse
 */
SubmitApplyRecordResponse Client::submitApplyRecord(const SubmitApplyRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitApplyRecordWithOptions(request, runtime);
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

/**
 * @summary 更新体检结果
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
 * @summary 更新体检结果
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