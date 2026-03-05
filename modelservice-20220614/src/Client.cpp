#include <darabonba/Core.hpp>
#include <alibabacloud/ModelService20220614.hpp>
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
using namespace AlibabaCloud::ModelService20220614::Models;
namespace AlibabaCloud
{
namespace ModelService20220614
{

AlibabaCloud::ModelService20220614::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("modelservice", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 获取当月的使用量
 *
 * @param request GetMonthAmountRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonthAmountResponse
 */
GetMonthAmountResponse Client::getMonthAmountWithOptions(const GetMonthAmountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneType()) {
    query["SceneType"] = request.getSceneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMonthAmount"},
    {"version" , "2022-06-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/statistics/month/amount")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMonthAmountResponse>();
}

/**
 * @summary 获取当月的使用量
 *
 * @param request GetMonthAmountRequest
 * @return GetMonthAmountResponse
 */
GetMonthAmountResponse Client::getMonthAmount(const GetMonthAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMonthAmountWithOptions(request, headers, runtime);
}

/**
 * @summary 获取user相关的appid, token等信息
 *
 * @param request GetUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSceneType()) {
    query["SceneType"] = request.getSceneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2022-06-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/user/info")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary 获取user相关的appid, token等信息
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUserWithOptions(request, headers, runtime);
}

/**
 * @summary 每天的调用量列表
 *
 * @param request ListDayAmountRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDayAmountResponse
 */
ListDayAmountResponse Client::listDayAmountWithOptions(const ListDayAmountRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.getSceneType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDayAmount"},
    {"version" , "2022-06-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/statistics/day/amount")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDayAmountResponse>();
}

/**
 * @summary 每天的调用量列表
 *
 * @param request ListDayAmountRequest
 * @return ListDayAmountResponse
 */
ListDayAmountResponse Client::listDayAmount(const ListDayAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDayAmountWithOptions(request, headers, runtime);
}

/**
 * @summary 用户充值列表
 *
 * @param request ListRechargeBillsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRechargeBillsResponse
 */
ListRechargeBillsResponse Client::listRechargeBillsWithOptions(const ListRechargeBillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.getSceneType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRechargeBills"},
    {"version" , "2022-06-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/statistics/rechargebills")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRechargeBillsResponse>();
}

/**
 * @summary 用户充值列表
 *
 * @param request ListRechargeBillsRequest
 * @return ListRechargeBillsResponse
 */
ListRechargeBillsResponse Client::listRechargeBills(const ListRechargeBillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRechargeBillsWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace ModelService20220614