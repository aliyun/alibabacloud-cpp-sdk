#include <darabonba/Core.hpp>
#include <alibabacloud/Eduaiservice20231218.hpp>
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
using namespace AlibabaCloud::Eduaiservice20231218::Models;
namespace AlibabaCloud
{
namespace Eduaiservice20231218
{

AlibabaCloud::Eduaiservice20231218::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("eduaiservice", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 查询指定学生实验记录
 *
 * @param request QueryOrgLabRecordListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOrgLabRecordListResponse
 */
QueryOrgLabRecordListResponse Client::queryOrgLabRecordListWithOptions(const QueryOrgLabRecordListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunUid()) {
    query["AliyunUid"] = request.aliyunUid();
  }

  if (!!request.hasLabId()) {
    query["LabId"] = request.labId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["OrderDirection"] = request.orderDirection();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryOrgLabRecordList"},
    {"version" , "2023-12-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOrgLabRecordListResponse>();
}

/**
 * @summary 查询指定学生实验记录
 *
 * @param request QueryOrgLabRecordListRequest
 * @return QueryOrgLabRecordListResponse
 */
QueryOrgLabRecordListResponse Client::queryOrgLabRecordList(const QueryOrgLabRecordListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOrgLabRecordListWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Eduaiservice20231218