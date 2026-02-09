#include <darabonba/Core.hpp>
#include <alibabacloud/Workorder20200326.hpp>
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
using namespace AlibabaCloud::Workorder20200326::Models;
namespace AlibabaCloud
{
namespace Workorder20200326
{

AlibabaCloud::Workorder20200326::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"ap-northeast-1" , "workorder.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-1" , "workorder.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("workorder", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @deprecated OpenAPI CloseTicket is deprecated, please use Workorder::2021-06-10::CloseTicket instead.
 *
 * @param request CloseTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseTicketResponse
 */
CloseTicketResponse Client::closeTicketWithOptions(const CloseTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseTicket"},
    {"version" , "2020-03-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseTicketResponse>();
}

/**
 * @deprecated OpenAPI CloseTicket is deprecated, please use Workorder::2021-06-10::CloseTicket instead.
 *
 * @param request CloseTicketRequest
 * @return CloseTicketResponse
 */
CloseTicketResponse Client::closeTicket(const CloseTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeTicketWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateTicket is deprecated, please use Workorder::2021-06-10::CreateTicket instead.
 *
 * @param request CreateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicketWithOptions(const CreateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasNotifyTimeRange()) {
    query["NotifyTimeRange"] = request.getNotifyTimeRange();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSecretContent()) {
    query["SecretContent"] = request.getSecretContent();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTicket"},
    {"version" , "2020-03-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTicketResponse>();
}

/**
 * @deprecated OpenAPI CreateTicket is deprecated, please use Workorder::2021-06-10::CreateTicket instead.
 *
 * @param request CreateTicketRequest
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicket(const CreateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTicketWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListCategories is deprecated, please use Workorder::2021-06-10::ListCategories instead.
 *
 * @param request ListCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategoriesWithOptions(const ListCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCategories"},
    {"version" , "2020-03-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCategoriesResponse>();
}

/**
 * @deprecated OpenAPI ListCategories is deprecated, please use Workorder::2021-06-10::ListCategories instead.
 *
 * @param request ListCategoriesRequest
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategories(const ListCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCategoriesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListProducts is deprecated, please use Workorder::2021-06-10::ListProducts instead.
 *
 * @param request ListProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProducts"},
    {"version" , "2020-03-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductsResponse>();
}

/**
 * @deprecated OpenAPI ListProducts is deprecated, please use Workorder::2021-06-10::ListProducts instead.
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListTicketNotes is deprecated, please use Workorder::2021-06-10::ListTicketNotes instead.
 *
 * @param request ListTicketNotesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketNotesResponse
 */
ListTicketNotesResponse Client::listTicketNotesWithOptions(const ListTicketNotesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTicketNotes"},
    {"version" , "2020-03-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTicketNotesResponse>();
}

/**
 * @deprecated OpenAPI ListTicketNotes is deprecated, please use Workorder::2021-06-10::ListTicketNotes instead.
 *
 * @param request ListTicketNotesRequest
 * @return ListTicketNotesResponse
 */
ListTicketNotesResponse Client::listTicketNotes(const ListTicketNotesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTicketNotesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListTickets is deprecated, please use Workorder::2021-06-10::ListTickets instead.
 *
 * @param request ListTicketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTicketsWithOptions(const ListTicketsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreatedAfterTime()) {
    query["CreatedAfterTime"] = request.getCreatedAfterTime();
  }

  if (!!request.hasCreatedBeforeTime()) {
    query["CreatedBeforeTime"] = request.getCreatedBeforeTime();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPageStart()) {
    query["PageStart"] = request.getPageStart();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasSubUserId()) {
    query["SubUserId"] = request.getSubUserId();
  }

  if (!!request.hasTicketStatus()) {
    query["TicketStatus"] = request.getTicketStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTickets"},
    {"version" , "2020-03-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTicketsResponse>();
}

/**
 * @deprecated OpenAPI ListTickets is deprecated, please use Workorder::2021-06-10::ListTickets instead.
 *
 * @param request ListTicketsRequest
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTickets(const ListTicketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTicketsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Workorder20200326