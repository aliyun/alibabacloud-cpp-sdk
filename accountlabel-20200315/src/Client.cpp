#include <darabonba/Core.hpp>
#include <alibabacloud/AccountLabel20200315.hpp>
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
using namespace AlibabaCloud::AccountLabel20200315::Models;
namespace AlibabaCloud
{
namespace AccountLabel20200315
{

AlibabaCloud::AccountLabel20200315::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("accountlabel", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AddCustomerLabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomerLabelResponse
 */
AddCustomerLabelResponse Client::addCustomerLabelWithOptions(const AddCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndtime()) {
    query["Endtime"] = request.getEndtime();
  }

  if (!!request.hasLabelSeries()) {
    query["LabelSeries"] = request.getLabelSeries();
  }

  if (!!request.hasLabelTypes()) {
    query["LabelTypes"] = request.getLabelTypes();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCustomerLabel"},
    {"version" , "2020-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomerLabelResponse>();
}

/**
 * @param request AddCustomerLabelRequest
 * @return AddCustomerLabelResponse
 */
AddCustomerLabelResponse Client::addCustomerLabel(const AddCustomerLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomerLabelWithOptions(request, runtime);
}

/**
 * @summary 传入多个labelSeries查询标签
 *
 * @param tmpReq BatchFetchAccountLabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchFetchAccountLabelResponse
 */
BatchFetchAccountLabelResponse Client::batchFetchAccountLabelWithOptions(const BatchFetchAccountLabelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchFetchAccountLabelShrinkRequest request = BatchFetchAccountLabelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabelSeriesList()) {
    request.setLabelSeriesListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabelSeriesList(), "LabelSeriesList", "simple"));
  }

  json query = {};
  if (!!request.hasInstant()) {
    query["Instant"] = request.getInstant();
  }

  if (!!request.hasLabelSeriesListShrink()) {
    query["LabelSeriesList"] = request.getLabelSeriesListShrink();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchFetchAccountLabel"},
    {"version" , "2020-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchFetchAccountLabelResponse>();
}

/**
 * @summary 传入多个labelSeries查询标签
 *
 * @param request BatchFetchAccountLabelRequest
 * @return BatchFetchAccountLabelResponse
 */
BatchFetchAccountLabelResponse Client::batchFetchAccountLabel(const BatchFetchAccountLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchFetchAccountLabelWithOptions(request, runtime);
}

/**
 * @param request DeleteCustomerLabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomerLabelResponse
 */
DeleteCustomerLabelResponse Client::deleteCustomerLabelWithOptions(const DeleteCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabelSeries()) {
    query["LabelSeries"] = request.getLabelSeries();
  }

  if (!!request.hasLabelTypes()) {
    query["LabelTypes"] = request.getLabelTypes();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomerLabel"},
    {"version" , "2020-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomerLabelResponse>();
}

/**
 * @param request DeleteCustomerLabelRequest
 * @return DeleteCustomerLabelResponse
 */
DeleteCustomerLabelResponse Client::deleteCustomerLabel(const DeleteCustomerLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomerLabelWithOptions(request, runtime);
}

/**
 * @param request QueryCustomerLabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomerLabelResponse
 */
QueryCustomerLabelResponse Client::queryCustomerLabelWithOptions(const QueryCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstant()) {
    query["Instant"] = request.getInstant();
  }

  if (!!request.hasLabelSeries()) {
    query["LabelSeries"] = request.getLabelSeries();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCustomerLabel"},
    {"version" , "2020-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCustomerLabelResponse>();
}

/**
 * @param request QueryCustomerLabelRequest
 * @return QueryCustomerLabelResponse
 */
QueryCustomerLabelResponse Client::queryCustomerLabel(const QueryCustomerLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCustomerLabelWithOptions(request, runtime);
}

/**
 * @param request QueryCustomerLabelByConfigGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomerLabelByConfigGroupResponse
 */
QueryCustomerLabelByConfigGroupResponse Client::queryCustomerLabelByConfigGroupWithOptions(const QueryCustomerLabelByConfigGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupType()) {
    query["GroupType"] = request.getGroupType();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCustomerLabelByConfigGroup"},
    {"version" , "2020-03-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCustomerLabelByConfigGroupResponse>();
}

/**
 * @param request QueryCustomerLabelByConfigGroupRequest
 * @return QueryCustomerLabelByConfigGroupResponse
 */
QueryCustomerLabelByConfigGroupResponse Client::queryCustomerLabelByConfigGroup(const QueryCustomerLabelByConfigGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCustomerLabelByConfigGroupWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AccountLabel20200315