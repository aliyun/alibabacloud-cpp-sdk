#include <darabonba/Core.hpp>
#include <alibabacloud/Workorder20200801.hpp>
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
using namespace AlibabaCloud::Workorder20200801::Models;
namespace AlibabaCloud
{
namespace Workorder20200801
{

AlibabaCloud::Workorder20200801::Client::Client(Config &config): OpenApiClient(config){
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
 * @deprecated OpenAPI CreateTicket is deprecated, please use Workorder::2021-06-10::CreateTicket instead.
 *
 * @param request CreateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicketWithOptions(const CreateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommonQuestionId()) {
    query["CommonQuestionId"] = request.getCommonQuestionId();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasFileNameList()) {
    query["FileNameList"] = request.getFileNameList();
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
    {"version" , "2020-08-01"},
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
 * @param request GetAttachmentUploadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAttachmentUploadUrlResponse
 */
GetAttachmentUploadUrlResponse Client::getAttachmentUploadUrlWithOptions(const GetAttachmentUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAttachmentUploadUrl"},
    {"version" , "2020-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAttachmentUploadUrlResponse>();
}

/**
 * @param request GetAttachmentUploadUrlRequest
 * @return GetAttachmentUploadUrlResponse
 */
GetAttachmentUploadUrlResponse Client::getAttachmentUploadUrl(const GetAttachmentUploadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAttachmentUploadUrlWithOptions(request, runtime);
}

/**
 * @param request GetAttachmentUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAttachmentUrlResponse
 */
GetAttachmentUrlResponse Client::getAttachmentUrlWithOptions(const GetAttachmentUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttachName()) {
    query["AttachName"] = request.getAttachName();
  }

  if (!!request.hasNoteId()) {
    query["NoteId"] = request.getNoteId();
  }

  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAttachmentUrl"},
    {"version" , "2020-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAttachmentUrlResponse>();
}

/**
 * @param request GetAttachmentUrlRequest
 * @return GetAttachmentUrlResponse
 */
GetAttachmentUrlResponse Client::getAttachmentUrl(const GetAttachmentUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAttachmentUrlWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetTicket is deprecated, please use Workorder::2021-06-10::GetTicket instead.
 *
 * @param request GetTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicketWithOptions(const GetTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTicketId()) {
    query["TicketId"] = request.getTicketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTicket"},
    {"version" , "2020-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTicketResponse>();
}

/**
 * @deprecated OpenAPI GetTicket is deprecated, please use Workorder::2021-06-10::GetTicket instead.
 *
 * @param request GetTicketRequest
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicket(const GetTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTicketWithOptions(request, runtime);
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

  if (!!request.hasExtraConditionList()) {
    query["ExtraConditionList"] = request.getExtraConditionList();
  }

  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
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

  if (!!request.hasTicketStatus()) {
    query["TicketStatus"] = request.getTicketStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTickets"},
    {"version" , "2020-08-01"},
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
} // namespace Workorder20200801