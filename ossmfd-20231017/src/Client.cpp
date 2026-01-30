#include <darabonba/Core.hpp>
#include <alibabacloud/OssMfd20231017.hpp>
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
using namespace AlibabaCloud::OssMfd20231017::Models;
namespace AlibabaCloud
{
namespace OssMfd20231017
{

AlibabaCloud::OssMfd20231017::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("ossmfd", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 检查服务是否开通
 *
 * @param request CheckMfdServiceOpenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckMfdServiceOpenResponse
 */
CheckMfdServiceOpenResponse Client::checkMfdServiceOpenWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CheckMfdServiceOpen"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckMfdServiceOpenResponse>();
}

/**
 * @summary 检查服务是否开通
 *
 * @return CheckMfdServiceOpenResponse
 */
CheckMfdServiceOpenResponse Client::checkMfdServiceOpen() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkMfdServiceOpenWithOptions(runtime);
}

/**
 * @summary 创建bucket扫描任务
 *
 * @param request CreateOssBucketScanTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOssBucketScanTaskResponse
 */
CreateOssBucketScanTaskResponse Client::createOssBucketScanTaskWithOptions(const CreateOssBucketScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllKeyPrefix()) {
    query["AllKeyPrefix"] = request.getAllKeyPrefix();
  }

  if (!!request.hasBucketNameList()) {
    query["BucketNameList"] = request.getBucketNameList();
  }

  if (!!request.hasDecompressMaxFileCount()) {
    query["DecompressMaxFileCount"] = request.getDecompressMaxFileCount();
  }

  if (!!request.hasDecompressMaxLayer()) {
    query["DecompressMaxLayer"] = request.getDecompressMaxLayer();
  }

  if (!!request.hasDecryptionList()) {
    query["DecryptionList"] = request.getDecryptionList();
  }

  if (!!request.hasExcludeKeySuffixList()) {
    query["ExcludeKeySuffixList"] = request.getExcludeKeySuffixList();
  }

  if (!!request.hasKeyPrefixList()) {
    query["KeyPrefixList"] = request.getKeyPrefixList();
  }

  if (!!request.hasKeySuffixList()) {
    query["KeySuffixList"] = request.getKeySuffixList();
  }

  if (!!request.hasLastModifiedStartTime()) {
    query["LastModifiedStartTime"] = request.getLastModifiedStartTime();
  }

  if (!!request.hasScanMode()) {
    query["ScanMode"] = request.getScanMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOssBucketScanTask"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOssBucketScanTaskResponse>();
}

/**
 * @summary 创建bucket扫描任务
 *
 * @param request CreateOssBucketScanTaskRequest
 * @return CreateOssBucketScanTaskResponse
 */
CreateOssBucketScanTaskResponse Client::createOssBucketScanTask(const CreateOssBucketScanTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOssBucketScanTaskWithOptions(request, runtime);
}

/**
 * @summary 创建Bucket检测策略配置
 *
 * @param request CreateOssScanConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOssScanConfigResponse
 */
CreateOssScanConfigResponse Client::createOssScanConfigWithOptions(const CreateOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllKeyPrefix()) {
    query["AllKeyPrefix"] = request.getAllKeyPrefix();
  }

  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasDecompressMaxFileCount()) {
    query["DecompressMaxFileCount"] = request.getDecompressMaxFileCount();
  }

  if (!!request.hasDecompressMaxLayer()) {
    query["DecompressMaxLayer"] = request.getDecompressMaxLayer();
  }

  if (!!request.hasDecryptionList()) {
    query["DecryptionList"] = request.getDecryptionList();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasKeyPrefixList()) {
    query["KeyPrefixList"] = request.getKeyPrefixList();
  }

  if (!!request.hasKeySuffixList()) {
    query["KeySuffixList"] = request.getKeySuffixList();
  }

  if (!!request.hasLastModifiedStartTime()) {
    query["LastModifiedStartTime"] = request.getLastModifiedStartTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRealTimeIncr()) {
    query["RealTimeIncr"] = request.getRealTimeIncr();
  }

  if (!!request.hasScanDayList()) {
    query["ScanDayList"] = request.getScanDayList();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOssScanConfig"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOssScanConfigResponse>();
}

/**
 * @summary 创建Bucket检测策略配置
 *
 * @param request CreateOssScanConfigRequest
 * @return CreateOssScanConfigResponse
 */
CreateOssScanConfigResponse Client::createOssScanConfig(const CreateOssScanConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOssScanConfigWithOptions(request, runtime);
}

/**
 * @summary 查询导出信息
 *
 * @param request DescribeExportInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExportInfoResponse
 */
DescribeExportInfoResponse Client::describeExportInfoWithOptions(const DescribeExportInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExportId()) {
    query["ExportId"] = request.getExportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExportInfo"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExportInfoResponse>();
}

/**
 * @summary 查询导出信息
 *
 * @param request DescribeExportInfoRequest
 * @return DescribeExportInfoResponse
 */
DescribeExportInfoResponse Client::describeExportInfo(const DescribeExportInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExportInfoWithOptions(request, runtime);
}

/**
 * @summary 查询您是否已创建云安全中心服务关联角色
 *
 * @param request DescribeServiceLinkedRoleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceLinkedRoleStatusResponse
 */
DescribeServiceLinkedRoleStatusResponse Client::describeServiceLinkedRoleStatusWithOptions(const DescribeServiceLinkedRoleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceLinkedRole()) {
    query["ServiceLinkedRole"] = request.getServiceLinkedRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceLinkedRoleStatus"},
    {"version" , "2023-10-17"},
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
 * @summary 查询您是否已创建云安全中心服务关联角色
 *
 * @param request DescribeServiceLinkedRoleStatusRequest
 * @return DescribeServiceLinkedRoleStatusResponse
 */
DescribeServiceLinkedRoleStatusResponse Client::describeServiceLinkedRoleStatus(const DescribeServiceLinkedRoleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceLinkedRoleStatusWithOptions(request, runtime);
}

/**
 * @summary 导出恶意文件列表
 *
 * @param request ExportRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportRecordResponse
 */
ExportRecordResponse Client::exportRecordWithOptions(const ExportRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExportType()) {
    query["ExportType"] = request.getExportType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.getParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportRecord"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportRecordResponse>();
}

/**
 * @summary 导出恶意文件列表
 *
 * @param request ExportRecordRequest
 * @return ExportRecordResponse
 */
ExportRecordResponse Client::exportRecord(const ExportRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportRecordWithOptions(request, runtime);
}

/**
 * @summary 获取沙箱检测报告。
 *
 * @param request GetFileDetectReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileDetectReportResponse
 */
GetFileDetectReportResponse Client::getFileDetectReportWithOptions(const GetFileDetectReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasField()) {
    query["Field"] = request.getField();
  }

  if (!!request.hasFileHash()) {
    query["FileHash"] = request.getFileHash();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFileDetectReport"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileDetectReportResponse>();
}

/**
 * @summary 获取沙箱检测报告。
 *
 * @param request GetFileDetectReportRequest
 * @return GetFileDetectReportResponse
 */
GetFileDetectReportResponse Client::getFileDetectReport(const GetFileDetectReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileDetectReportWithOptions(request, runtime);
}

/**
 * @summary 获取bucket检测统计信息
 *
 * @param request GetOssBucketScanStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssBucketScanStatisticResponse
 */
GetOssBucketScanStatisticResponse Client::getOssBucketScanStatisticWithOptions(const GetOssBucketScanStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketNameList()) {
    query["BucketNameList"] = request.getBucketNameList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssBucketScanStatistic"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssBucketScanStatisticResponse>();
}

/**
 * @summary 获取bucket检测统计信息
 *
 * @param request GetOssBucketScanStatisticRequest
 * @return GetOssBucketScanStatisticResponse
 */
GetOssBucketScanStatisticResponse Client::getOssBucketScanStatistic(const GetOssBucketScanStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssBucketScanStatisticWithOptions(request, runtime);
}

/**
 * @summary 获取Bucket检测配置
 *
 * @param request GetOssScanConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssScanConfigResponse
 */
GetOssScanConfigResponse Client::getOssScanConfigWithOptions(const GetOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssScanConfig"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssScanConfigResponse>();
}

/**
 * @summary 获取Bucket检测配置
 *
 * @param request GetOssScanConfigRequest
 * @return GetOssScanConfigResponse
 */
GetOssScanConfigResponse Client::getOssScanConfig(const GetOssScanConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssScanConfigWithOptions(request, runtime);
}

/**
 * @summary 获取文件检测告警列表
 *
 * @param request ListObjectScanEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListObjectScanEventResponse
 */
ListObjectScanEventResponse Client::listObjectScanEventWithOptions(const ListObjectScanEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchType()) {
    query["BatchType"] = request.getBatchType();
  }

  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.getEventId();
  }

  if (!!request.hasEventName()) {
    query["EventName"] = request.getEventName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMd5()) {
    query["Md5"] = request.getMd5();
  }

  if (!!request.hasOssKey()) {
    query["OssKey"] = request.getOssKey();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentEventId()) {
    query["ParentEventId"] = request.getParentEventId();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTimeEnd()) {
    query["TimeEnd"] = request.getTimeEnd();
  }

  if (!!request.hasTimeStart()) {
    query["TimeStart"] = request.getTimeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListObjectScanEvent"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListObjectScanEventResponse>();
}

/**
 * @summary 获取文件检测告警列表
 *
 * @param request ListObjectScanEventRequest
 * @return ListObjectScanEventResponse
 */
ListObjectScanEventResponse Client::listObjectScanEvent(const ListObjectScanEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listObjectScanEventWithOptions(request, runtime);
}

/**
 * @summary 列举用户所有的bucket
 *
 * @param request ListOssBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOssBucketResponse
 */
ListOssBucketResponse Client::listOssBucketWithOptions(const ListOssBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOssBucket"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOssBucketResponse>();
}

/**
 * @summary 列举用户所有的bucket
 *
 * @param request ListOssBucketRequest
 * @return ListOssBucketResponse
 */
ListOssBucketResponse Client::listOssBucket(const ListOssBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOssBucketWithOptions(request, runtime);
}

/**
 * @summary 获取bucket详情
 *
 * @param request ListOssBucketScanInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOssBucketScanInfoResponse
 */
ListOssBucketScanInfoResponse Client::listOssBucketScanInfoWithOptions(const ListOssBucketScanInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasFuzzBucketName()) {
    query["FuzzBucketName"] = request.getFuzzBucketName();
  }

  if (!!request.hasHasRisk()) {
    query["HasRisk"] = request.getHasRisk();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOssBucketScanInfo"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOssBucketScanInfoResponse>();
}

/**
 * @summary 获取bucket详情
 *
 * @param request ListOssBucketScanInfoRequest
 * @return ListOssBucketScanInfoResponse
 */
ListOssBucketScanInfoResponse Client::listOssBucketScanInfo(const ListOssBucketScanInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOssBucketScanInfoWithOptions(request, runtime);
}

/**
 * @summary 获取支持的文件后缀
 *
 * @param request ListSupportObjectSuffixRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSupportObjectSuffixResponse
 */
ListSupportObjectSuffixResponse Client::listSupportObjectSuffixWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListSupportObjectSuffix"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSupportObjectSuffixResponse>();
}

/**
 * @summary 获取支持的文件后缀
 *
 * @return ListSupportObjectSuffixResponse
 */
ListSupportObjectSuffixResponse Client::listSupportObjectSuffix() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSupportObjectSuffixWithOptions(runtime);
}

/**
 * @summary 操作oss检测任务
 *
 * @param request OperateBucketScanTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateBucketScanTaskResponse
 */
OperateBucketScanTaskResponse Client::operateBucketScanTaskWithOptions(const OperateBucketScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasOperateCode()) {
    query["OperateCode"] = request.getOperateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateBucketScanTask"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateBucketScanTaskResponse>();
}

/**
 * @summary 操作oss检测任务
 *
 * @param request OperateBucketScanTaskRequest
 * @return OperateBucketScanTaskResponse
 */
OperateBucketScanTaskResponse Client::operateBucketScanTask(const OperateBucketScanTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateBucketScanTaskWithOptions(request, runtime);
}

/**
 * @summary 修改Bucket检测配置
 *
 * @param request UpdateOssScanConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOssScanConfigResponse
 */
UpdateOssScanConfigResponse Client::updateOssScanConfigWithOptions(const UpdateOssScanConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllKeyPrefix()) {
    query["AllKeyPrefix"] = request.getAllKeyPrefix();
  }

  if (!!request.hasBucketName()) {
    query["BucketName"] = request.getBucketName();
  }

  if (!!request.hasDecompressMaxFileCount()) {
    query["DecompressMaxFileCount"] = request.getDecompressMaxFileCount();
  }

  if (!!request.hasDecompressMaxLayer()) {
    query["DecompressMaxLayer"] = request.getDecompressMaxLayer();
  }

  if (!!request.hasDecryptionList()) {
    query["DecryptionList"] = request.getDecryptionList();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasKeyPrefixList()) {
    query["KeyPrefixList"] = request.getKeyPrefixList();
  }

  if (!!request.hasKeySuffixList()) {
    query["KeySuffixList"] = request.getKeySuffixList();
  }

  if (!!request.hasLastModifiedStartTime()) {
    query["LastModifiedStartTime"] = request.getLastModifiedStartTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRealTimeIncr()) {
    query["RealTimeIncr"] = request.getRealTimeIncr();
  }

  if (!!request.hasScanDayList()) {
    query["ScanDayList"] = request.getScanDayList();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOssScanConfig"},
    {"version" , "2023-10-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOssScanConfigResponse>();
}

/**
 * @summary 修改Bucket检测配置
 *
 * @param request UpdateOssScanConfigRequest
 * @return UpdateOssScanConfigResponse
 */
UpdateOssScanConfigResponse Client::updateOssScanConfig(const UpdateOssScanConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOssScanConfigWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace OssMfd20231017