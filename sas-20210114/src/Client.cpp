#include <darabonba/Core.hpp>
#include <alibabacloud/Sas20210114.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Sas20210114::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Sas20210114
{

AlibabaCloud::Sas20210114::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-beijing" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-zhangjiakou" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-huhehaote" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-wulanchabu" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-nanjing" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-fuzhou" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-heyuan" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-guangzhou" , "tds.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-2" , "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-6" , "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3" , "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-7" , "tds.ap-southeast-1.aliyuncs.com"},
    {"cn-chengdu" , "tds.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-1" , "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "tds.ap-southeast-1.aliyuncs.com"},
    {"cn-hongkong" , "tds.cn-shanghai.aliyuncs.com"},
    {"eu-central-1" , "tds.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "tds.ap-southeast-1.aliyuncs.com"},
    {"us-west-1" , "tds.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "tds.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "tds.ap-southeast-1.aliyuncs.com"},
    {"me-central-1" , "tds.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "tds.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou-finance" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-north-2-gov-1" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao-acdr-ut-1" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai-mybk" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-wuhan-lr" , "tds.cn-shanghai.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "tds.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("sas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 新增或者修改用户大屏设置
 *
 * @param request CreateScreenSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScreenSettingResponse
 */
CreateScreenSettingResponse Client::createScreenSettingWithOptions(const CreateScreenSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLogoPower()) {
    query["LogoPower"] = request.logoPower();
  }

  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.logoUrl();
  }

  if (!!request.hasMonitorUrl()) {
    query["MonitorUrl"] = request.monitorUrl();
  }

  if (!!request.hasScreenDataMap()) {
    query["ScreenDataMap"] = request.screenDataMap();
  }

  if (!!request.hasScreenDefault()) {
    query["ScreenDefault"] = request.screenDefault();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScreenSetting"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScreenSettingResponse>();
}

/**
 * @summary 新增或者修改用户大屏设置
 *
 * @param request CreateScreenSettingRequest
 * @return CreateScreenSettingResponse
 */
CreateScreenSettingResponse Client::createScreenSetting(const CreateScreenSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScreenSettingWithOptions(request, runtime);
}

/**
 * @summary 删除大屏设置
 *
 * @param request DeleteScreenSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScreenSettingResponse
 */
DeleteScreenSettingResponse Client::deleteScreenSettingWithOptions(const DeleteScreenSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScreenSetting"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScreenSettingResponse>();
}

/**
 * @summary 删除大屏设置
 *
 * @param request DeleteScreenSettingRequest
 * @return DeleteScreenSettingResponse
 */
DeleteScreenSettingResponse Client::deleteScreenSetting(const DeleteScreenSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScreenSettingWithOptions(request, runtime);
}

/**
 * @summary 查询安全大屏告警事件
 *
 * @param request DescribeScreenAlarmEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenAlarmEventListResponse
 */
DescribeScreenAlarmEventListResponse Client::describeScreenAlarmEventListWithOptions(const DescribeScreenAlarmEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlarmEventName()) {
    query["AlarmEventName"] = request.alarmEventName();
  }

  if (!!request.hasAlarmEventType()) {
    query["AlarmEventType"] = request.alarmEventType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDealed()) {
    query["Dealed"] = request.dealed();
  }

  if (!!request.hasFrom()) {
    query["From"] = request.from();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasLevels()) {
    query["Levels"] = request.levels();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasTimeEnd()) {
    query["TimeEnd"] = request.timeEnd();
  }

  if (!!request.hasTimeStart()) {
    query["TimeStart"] = request.timeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScreenAlarmEventList"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenAlarmEventListResponse>();
}

/**
 * @summary 查询安全大屏告警事件
 *
 * @param request DescribeScreenAlarmEventListRequest
 * @return DescribeScreenAlarmEventListResponse
 */
DescribeScreenAlarmEventListResponse Client::describeScreenAlarmEventList(const DescribeScreenAlarmEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenAlarmEventListWithOptions(request, runtime);
}

/**
 * @summary 查询大屏攻击防御事件
 *
 * @param request DescribeScreenAttackAnalysisDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenAttackAnalysisDataResponse
 */
DescribeScreenAttackAnalysisDataResponse Client::describeScreenAttackAnalysisDataWithOptions(const DescribeScreenAttackAnalysisDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBase64()) {
    query["Base64"] = request.base64();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasData()) {
    query["Data"] = request.data();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScreenAttackAnalysisData"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenAttackAnalysisDataResponse>();
}

/**
 * @summary 查询大屏攻击防御事件
 *
 * @param request DescribeScreenAttackAnalysisDataRequest
 * @return DescribeScreenAttackAnalysisDataResponse
 */
DescribeScreenAttackAnalysisDataResponse Client::describeScreenAttackAnalysisData(const DescribeScreenAttackAnalysisDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenAttackAnalysisDataWithOptions(request, runtime);
}

/**
 * @summary 查询云产品基线问题
 *
 * @param request DescribeScreenCloudHcRiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenCloudHcRiskResponse
 */
DescribeScreenCloudHcRiskResponse Client::describeScreenCloudHcRiskWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeScreenCloudHcRisk"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenCloudHcRiskResponse>();
}

/**
 * @summary 查询云产品基线问题
 *
 * @return DescribeScreenCloudHcRiskResponse
 */
DescribeScreenCloudHcRiskResponse Client::describeScreenCloudHcRisk() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenCloudHcRiskWithOptions(runtime);
}

/**
 * @summary 获取大屏可展示数据列表
 *
 * @param request DescribeScreenDataMapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenDataMapResponse
 */
DescribeScreenDataMapResponse Client::describeScreenDataMapWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeScreenDataMap"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenDataMapResponse>();
}

/**
 * @summary 获取大屏可展示数据列表
 *
 * @return DescribeScreenDataMapResponse
 */
DescribeScreenDataMapResponse Client::describeScreenDataMap() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenDataMapWithOptions(runtime);
}

/**
 * @summary 查询云产品漏洞风险
 *
 * @param request DescribeScreenEmerRiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenEmerRiskResponse
 */
DescribeScreenEmerRiskResponse Client::describeScreenEmerRiskWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeScreenEmerRisk"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenEmerRiskResponse>();
}

/**
 * @summary 查询云产品漏洞风险
 *
 * @return DescribeScreenEmerRiskResponse
 */
DescribeScreenEmerRiskResponse Client::describeScreenEmerRisk() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenEmerRiskWithOptions(runtime);
}

/**
 * @summary 查询大屏主机统计数据
 *
 * @param request DescribeScreenHostStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenHostStatisticsResponse
 */
DescribeScreenHostStatisticsResponse Client::describeScreenHostStatisticsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeScreenHostStatistics"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenHostStatisticsResponse>();
}

/**
 * @summary 查询大屏主机统计数据
 *
 * @return DescribeScreenHostStatisticsResponse
 */
DescribeScreenHostStatisticsResponse Client::describeScreenHostStatistics() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenHostStatisticsWithOptions(runtime);
}

/**
 * @summary 查看运营信息
 *
 * @param request DescribeScreenOperateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenOperateInfoResponse
 */
DescribeScreenOperateInfoResponse Client::describeScreenOperateInfoWithOptions(const DescribeScreenOperateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScreenOperateInfo"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenOperateInfoResponse>();
}

/**
 * @summary 查看运营信息
 *
 * @param request DescribeScreenOperateInfoRequest
 * @return DescribeScreenOperateInfoResponse
 */
DescribeScreenOperateInfoResponse Client::describeScreenOperateInfo(const DescribeScreenOperateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenOperateInfoWithOptions(request, runtime);
}

/**
 * @summary 查询大屏上传信息
 *
 * @param request DescribeScreenOssUploadInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenOssUploadInfoResponse
 */
DescribeScreenOssUploadInfoResponse Client::describeScreenOssUploadInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeScreenOssUploadInfo"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenOssUploadInfoResponse>();
}

/**
 * @summary 查询大屏上传信息
 *
 * @return DescribeScreenOssUploadInfoResponse
 */
DescribeScreenOssUploadInfoResponse Client::describeScreenOssUploadInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenOssUploadInfoWithOptions(runtime);
}

/**
 * @summary 查询安全大屏分数趋势
 *
 * @param request DescribeScreenScoreThreadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenScoreThreadResponse
 */
DescribeScreenScoreThreadResponse Client::describeScreenScoreThreadWithOptions(const DescribeScreenScoreThreadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScreenScoreThread"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenScoreThreadResponse>();
}

/**
 * @summary 查询安全大屏分数趋势
 *
 * @param request DescribeScreenScoreThreadRequest
 * @return DescribeScreenScoreThreadResponse
 */
DescribeScreenScoreThreadResponse Client::describeScreenScoreThread(const DescribeScreenScoreThreadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenScoreThreadWithOptions(request, runtime);
}

/**
 * @summary 查询已处理的风险
 *
 * @param request DescribeScreenSecurityStatInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenSecurityStatInfoResponse
 */
DescribeScreenSecurityStatInfoResponse Client::describeScreenSecurityStatInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeScreenSecurityStatInfo"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenSecurityStatInfoResponse>();
}

/**
 * @summary 查询已处理的风险
 *
 * @return DescribeScreenSecurityStatInfoResponse
 */
DescribeScreenSecurityStatInfoResponse Client::describeScreenSecurityStatInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenSecurityStatInfoWithOptions(runtime);
}

/**
 * @summary 查询大屏配置
 *
 * @param request DescribeScreenSettingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenSettingResponse
 */
DescribeScreenSettingResponse Client::describeScreenSettingWithOptions(const DescribeScreenSettingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScreenSetting"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenSettingResponse>();
}

/**
 * @summary 查询大屏配置
 *
 * @param request DescribeScreenSettingRequest
 * @return DescribeScreenSettingResponse
 */
DescribeScreenSettingResponse Client::describeScreenSetting(const DescribeScreenSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenSettingWithOptions(request, runtime);
}

/**
 * @summary 查询大屏统计信息
 *
 * @param request DescribeScreenSummaryInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenSummaryInfoResponse
 */
DescribeScreenSummaryInfoResponse Client::describeScreenSummaryInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeScreenSummaryInfo"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenSummaryInfoResponse>();
}

/**
 * @summary 查询大屏统计信息
 *
 * @return DescribeScreenSummaryInfoResponse
 */
DescribeScreenSummaryInfoResponse Client::describeScreenSummaryInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenSummaryInfoWithOptions(runtime);
}

/**
 * @summary 获取大屏幕设置全部列表
 *
 * @param request DescribeScreenTitlesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenTitlesResponse
 */
DescribeScreenTitlesResponse Client::describeScreenTitlesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeScreenTitles"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenTitlesResponse>();
}

/**
 * @summary 获取大屏幕设置全部列表
 *
 * @return DescribeScreenTitlesResponse
 */
DescribeScreenTitlesResponse Client::describeScreenTitles() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenTitlesWithOptions(runtime);
}

/**
 * @summary 查询上传之后的图片显示地址
 *
 * @param request DescribeScreenUploadPictureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenUploadPictureResponse
 */
DescribeScreenUploadPictureResponse Client::describeScreenUploadPictureWithOptions(const DescribeScreenUploadPictureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLogoUrl()) {
    query["LogoUrl"] = request.logoUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScreenUploadPicture"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenUploadPictureResponse>();
}

/**
 * @summary 查询上传之后的图片显示地址
 *
 * @param request DescribeScreenUploadPictureRequest
 * @return DescribeScreenUploadPictureResponse
 */
DescribeScreenUploadPictureResponse Client::describeScreenUploadPicture(const DescribeScreenUploadPictureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenUploadPictureWithOptions(request, runtime);
}

/**
 * @summary 查询安全大屏版本配置
 *
 * @param request DescribeScreenVersionConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScreenVersionConfigResponse
 */
DescribeScreenVersionConfigResponse Client::describeScreenVersionConfigWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeScreenVersionConfig"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScreenVersionConfigResponse>();
}

/**
 * @summary 查询安全大屏版本配置
 *
 * @return DescribeScreenVersionConfigResponse
 */
DescribeScreenVersionConfigResponse Client::describeScreenVersionConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScreenVersionConfigWithOptions(runtime);
}

/**
 * @summary 获取文件检测结果。
 *
 * @param request GetFileDetectResultInnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileDetectResultInnerResponse
 */
GetFileDetectResultInnerResponse Client::getFileDetectResultInnerWithOptions(const GetFileDetectResultInnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnaHashKeyList()) {
    query["DnaHashKeyList"] = request.dnaHashKeyList();
  }

  if (!!request.hasHashKeyList()) {
    query["HashKeyList"] = request.hashKeyList();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.sourceIp();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFileDetectResultInner"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileDetectResultInnerResponse>();
}

/**
 * @summary 获取文件检测结果。
 *
 * @param request GetFileDetectResultInnerRequest
 * @return GetFileDetectResultInnerResponse
 */
GetFileDetectResultInnerResponse Client::getFileDetectResultInner(const GetFileDetectResultInnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileDetectResultInnerWithOptions(request, runtime);
}

/**
 * @summary 首页配置情况汇总接口
 *
 * @param tmpReq ListGlobalUserConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGlobalUserConfigResponse
 */
ListGlobalUserConfigResponse Client::listGlobalUserConfigWithOptions(const ListGlobalUserConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGlobalUserConfigShrinkRequest request = ListGlobalUserConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasModuleList()) {
    request.setModuleListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.moduleList(), "ModuleList", "json"));
  }

  json query = {};
  if (!!request.hasModuleListShrink()) {
    query["ModuleList"] = request.moduleListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGlobalUserConfig"},
    {"version" , "2021-01-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGlobalUserConfigResponse>();
}

/**
 * @summary 首页配置情况汇总接口
 *
 * @param request ListGlobalUserConfigRequest
 * @return ListGlobalUserConfigResponse
 */
ListGlobalUserConfigResponse Client::listGlobalUserConfig(const ListGlobalUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGlobalUserConfigWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Sas20210114