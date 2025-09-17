#include <darabonba/Core.hpp>
#include <alibabacloud/MarketplaceIntl20221230.hpp>
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
using namespace AlibabaCloud::MarketplaceIntl20221230::Models;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{

AlibabaCloud::MarketplaceIntl20221230::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("marketplaceintl", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 获取推送计量数据结果
 *
 * @param request DescribePushMeteringDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePushMeteringDataResponse
 */
DescribePushMeteringDataResponse Client::describePushMeteringDataWithOptions(const DescribePushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPushOrderBizId()) {
    query["PushOrderBizId"] = request.pushOrderBizId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePushMeteringData"},
    {"version" , "2022-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePushMeteringDataResponse>();
}

/**
 * @summary 获取推送计量数据结果
 *
 * @param request DescribePushMeteringDataRequest
 * @return DescribePushMeteringDataResponse
 */
DescribePushMeteringDataResponse Client::describePushMeteringData(const DescribePushMeteringDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePushMeteringDataWithOptions(request, runtime);
}

/**
 * @summary 卖家查询实例列表
 *
 * @param request DescribeSellerInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSellerInstancesResponse
 */
DescribeSellerInstancesResponse Client::describeSellerInstancesWithOptions(const DescribeSellerInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceStatus()) {
    query["InstanceStatus"] = request.instanceStatus();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSellerInstances"},
    {"version" , "2022-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSellerInstancesResponse>();
}

/**
 * @summary 卖家查询实例列表
 *
 * @param request DescribeSellerInstancesRequest
 * @return DescribeSellerInstancesResponse
 */
DescribeSellerInstancesResponse Client::describeSellerInstances(const DescribeSellerInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSellerInstancesWithOptions(request, runtime);
}

/**
 * @summary isv推送实例消息给用户
 *
 * @param request NoticeInstanceUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return NoticeInstanceUserResponse
 */
NoticeInstanceUserResponse Client::noticeInstanceUserWithOptions(const NoticeInstanceUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNoticeParam()) {
    body["NoticeParam"] = request.noticeParam();
  }

  if (!!request.hasNoticeType()) {
    body["NoticeType"] = request.noticeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "NoticeInstanceUser"},
    {"version" , "2022-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<NoticeInstanceUserResponse>();
}

/**
 * @summary isv推送实例消息给用户
 *
 * @param request NoticeInstanceUserRequest
 * @return NoticeInstanceUserResponse
 */
NoticeInstanceUserResponse Client::noticeInstanceUser(const NoticeInstanceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return noticeInstanceUserWithOptions(request, runtime);
}

/**
 * @summary 国际云市场推送计量数据
 *
 * @param request PushMeteringDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringDataWithOptions(const PushMeteringDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGmtCreate()) {
    body["GmtCreate"] = request.gmtCreate();
  }

  if (!!request.hasMeteringData()) {
    body["MeteringData"] = request.meteringData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PushMeteringData"},
    {"version" , "2022-12-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PushMeteringDataResponse>();
}

/**
 * @summary 国际云市场推送计量数据
 *
 * @param request PushMeteringDataRequest
 * @return PushMeteringDataResponse
 */
PushMeteringDataResponse Client::pushMeteringData(const PushMeteringDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pushMeteringDataWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230