#include <darabonba/Core.hpp>
#include <alibabacloud/IQS20241121.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::IQS20241121::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace IQS20241121
{

AlibabaCloud::IQS20241121::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("iqs", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 申请正式开通
 *
 * @param request ApplyFormalServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyFormalServiceResponse
 */
ApplyFormalServiceResponse Client::applyFormalServiceWithOptions(const ApplyFormalServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ApplyFormalService"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/services/commands/applyFormalService")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyFormalServiceResponse>();
}

/**
 * @summary 申请正式开通
 *
 * @param request ApplyFormalServiceRequest
 * @return ApplyFormalServiceResponse
 */
ApplyFormalServiceResponse Client::applyFormalService(const ApplyFormalServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return applyFormalServiceWithOptions(request, headers, runtime);
}

/**
 * @summary 校验账号类型
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAccountTypeResponse
 */
CheckAccountTypeResponse Client::checkAccountTypeWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAccountType"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/openService/v1/account/commands/checkAccountType")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAccountTypeResponse>();
}

/**
 * @summary 校验账号类型
 *
 * @return CheckAccountTypeResponse
 */
CheckAccountTypeResponse Client::checkAccountType() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkAccountTypeWithOptions(headers, runtime);
}

/**
 * @summary 下载接口计量日明细
 *
 * @param request DownloadApiCallDailyDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadApiCallDailyDetailResponse
 */
DownloadApiCallDailyDetailResponse Client::downloadApiCallDailyDetailWithOptions(const DownloadApiCallDailyDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "DownloadApiCallDailyDetail"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/monitors/commands/downloadApiCallDailyDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadApiCallDailyDetailResponse>();
}

/**
 * @summary 下载接口计量日明细
 *
 * @param request DownloadApiCallDailyDetailRequest
 * @return DownloadApiCallDailyDetailResponse
 */
DownloadApiCallDailyDetailResponse Client::downloadApiCallDailyDetail(const DownloadApiCallDailyDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return downloadApiCallDailyDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 下载接口计量日明细
 *
 * @param request DownloadMeteringDailyDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadMeteringDailyDetailResponse
 */
DownloadMeteringDailyDetailResponse Client::downloadMeteringDailyDetailWithOptions(const DownloadMeteringDailyDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "DownloadMeteringDailyDetail"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/monitors/commands/downloadMeteringDailyDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadMeteringDailyDetailResponse>();
}

/**
 * @summary 下载接口计量日明细
 *
 * @param request DownloadMeteringDailyDetailRequest
 * @return DownloadMeteringDailyDetailResponse
 */
DownloadMeteringDailyDetailResponse Client::downloadMeteringDailyDetail(const DownloadMeteringDailyDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return downloadMeteringDailyDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 延长测试时间
 *
 * @param request ExpandSearchExpiredTimeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExpandSearchExpiredTimeResponse
 */
ExpandSearchExpiredTimeResponse Client::expandSearchExpiredTimeWithOptions(const ExpandSearchExpiredTimeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ExpandSearchExpiredTime"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/openService/v1/account/commands/expendExpiredTime")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExpandSearchExpiredTimeResponse>();
}

/**
 * @summary 延长测试时间
 *
 * @param request ExpandSearchExpiredTimeRequest
 * @return ExpandSearchExpiredTimeResponse
 */
ExpandSearchExpiredTimeResponse Client::expandSearchExpiredTime(const ExpandSearchExpiredTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return expandSearchExpiredTimeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取账号配置信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountConfigInfoResponse
 */
GetAccountConfigInfoResponse Client::getAccountConfigInfoWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountConfigInfo"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/openService/v1/account/command/accountConfig")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountConfigInfoResponse>();
}

/**
 * @summary 获取账号配置信息
 *
 * @return GetAccountConfigInfoResponse
 */
GetAccountConfigInfoResponse Client::getAccountConfigInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAccountConfigInfoWithOptions(headers, runtime);
}

/**
 * @summary 查询用户申请记录
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountReviewRecordResponse
 */
GetAccountReviewRecordResponse Client::getAccountReviewRecordWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccountReviewRecord"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/services/commands/reviewRecord")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountReviewRecordResponse>();
}

/**
 * @summary 查询用户申请记录
 *
 * @return GetAccountReviewRecordResponse
 */
GetAccountReviewRecordResponse Client::getAccountReviewRecord() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAccountReviewRecordWithOptions(headers, runtime);
}

/**
 * @summary 查询计量汇总信息
 *
 * @param request GetMeteringSummaryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMeteringSummaryResponse
 */
GetMeteringSummaryResponse Client::getMeteringSummaryWithOptions(const GetMeteringSummaryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillPeriod()) {
    query["billPeriod"] = request.getBillPeriod();
  }

  if (!!request.hasBillingItem()) {
    query["billingItem"] = request.getBillingItem();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasSubAccountId()) {
    query["subAccountId"] = request.getSubAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMeteringSummary"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/monitors/commands/metering/summary")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMeteringSummaryResponse>();
}

/**
 * @summary 查询计量汇总信息
 *
 * @param request GetMeteringSummaryRequest
 * @return GetMeteringSummaryResponse
 */
GetMeteringSummaryResponse Client::getMeteringSummary(const GetMeteringSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMeteringSummaryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务额度信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceConfigResponse
 */
GetServiceConfigResponse Client::getServiceConfigWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceConfig"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/services/commands/serviceConfig")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceConfigResponse>();
}

/**
 * @summary 查询服务额度信息
 *
 * @return GetServiceConfigResponse
 */
GetServiceConfigResponse Client::getServiceConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceConfigWithOptions(headers, runtime);
}

/**
 * @summary 查询Api调用量（性能）日明细
 *
 * @param request ListApiCallDailyDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiCallDailyDetailResponse
 */
ListApiCallDailyDetailResponse Client::listApiCallDailyDetailWithOptions(const ListApiCallDailyDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["apiName"] = request.getApiName();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEngineType()) {
    query["engineType"] = request.getEngineType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiCallDailyDetail"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/monitors/commands/apiCall/dailyDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiCallDailyDetailResponse>();
}

/**
 * @summary 查询Api调用量（性能）日明细
 *
 * @param request ListApiCallDailyDetailRequest
 * @return ListApiCallDailyDetailResponse
 */
ListApiCallDailyDetailResponse Client::listApiCallDailyDetail(const ListApiCallDailyDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApiCallDailyDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Api名称列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiNamesResponse
 */
ListApiNamesResponse Client::listApiNamesWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiNames"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/monitors/commands/apiNames")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiNamesResponse>();
}

/**
 * @summary Api名称列表
 *
 * @return ListApiNamesResponse
 */
ListApiNamesResponse Client::listApiNames() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listApiNamesWithOptions(headers, runtime);
}

/**
 * @summary 查询计量日明细信息
 *
 * @param request ListMeteringDailyDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMeteringDailyDetailResponse
 */
ListMeteringDailyDetailResponse Client::listMeteringDailyDetailWithOptions(const ListMeteringDailyDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillPeriod()) {
    query["billPeriod"] = request.getBillPeriod();
  }

  if (!!request.hasBillingItem()) {
    query["billingItem"] = request.getBillingItem();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasSubAccountId()) {
    query["subAccountId"] = request.getSubAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMeteringDailyDetail"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/monitors/commands/metering/dailyDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMeteringDailyDetailResponse>();
}

/**
 * @summary 查询计量日明细信息
 *
 * @param request ListMeteringDailyDetailRequest
 * @return ListMeteringDailyDetailResponse
 */
ListMeteringDailyDetailResponse Client::listMeteringDailyDetail(const ListMeteringDailyDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMeteringDailyDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 查询主账号的所有子账号信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubAccountInfoResponse
 */
ListSubAccountInfoResponse Client::listSubAccountInfoWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubAccountInfo"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/console/v1/monitors/commands/subAccountInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubAccountInfoResponse>();
}

/**
 * @summary 查询主账号的所有子账号信息
 *
 * @return ListSubAccountInfoResponse
 */
ListSubAccountInfoResponse Client::listSubAccountInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSubAccountInfoWithOptions(headers, runtime);
}

/**
 * @summary 管理智搜用户
 *
 * @param request ManageSearchAccountInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManageSearchAccountInfoResponse
 */
ManageSearchAccountInfoResponse Client::manageSearchAccountInfoWithOptions(const ManageSearchAccountInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ManageSearchAccountInfo"},
    {"version" , "2024-11-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/linked-retrieval/linked-retrieval-admin/openService/v1/account/commands/manage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManageSearchAccountInfoResponse>();
}

/**
 * @summary 管理智搜用户
 *
 * @param request ManageSearchAccountInfoRequest
 * @return ManageSearchAccountInfoResponse
 */
ManageSearchAccountInfoResponse Client::manageSearchAccountInfo(const ManageSearchAccountInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return manageSearchAccountInfoWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace IQS20241121