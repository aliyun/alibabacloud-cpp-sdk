#include <darabonba/Core.hpp>
#include <alibabacloud/Workorder20210610.hpp>
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
using namespace AlibabaCloud::Workorder20210610::Models;
namespace AlibabaCloud
{
namespace Workorder20210610
{

AlibabaCloud::Workorder20210610::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary Closes a ticket.
 *
 * @param request CloseTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseTicketResponse
 */
CloseTicketResponse Client::closeTicketWithOptions(const CloseTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTicketId()) {
    body["TicketId"] = request.ticketId();
  }

  if (!!request.hasUid()) {
    body["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CloseTicket"},
    {"version" , "2021-06-10"},
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
 * @summary Closes a ticket.
 *
 * @param request CloseTicketRequest
 * @return CloseTicketResponse
 */
CloseTicketResponse Client::closeTicket(const CloseTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeTicketWithOptions(request, runtime);
}

/**
 * @summary Creates a ticket.
 *
 * @param tmpReq CreateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicketWithOptions(const CreateTicketRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTicketShrinkRequest request = CreateTicketShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileNameList()) {
    request.setFileNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.fileNameList(), "FileNameList", "simple"));
  }

  if (!!tmpReq.hasSecretInfo()) {
    request.setSecretInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.secretInfo(), "SecretInfo", "json"));
  }

  json query = {};
  if (!!request.hasSecretInfoShrink()) {
    query["SecretInfo"] = request.secretInfoShrink();
  }

  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.categoryId();
  }

  if (!!request.hasCreatorId()) {
    body["CreatorId"] = request.creatorId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEmail()) {
    body["Email"] = request.email();
  }

  if (!!request.hasFileNameListShrink()) {
    body["FileNameList"] = request.fileNameListShrink();
  }

  if (!!request.hasSeverity()) {
    body["Severity"] = request.severity();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTicket"},
    {"version" , "2021-06-10"},
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
 * @summary Creates a ticket.
 *
 * @param request CreateTicketRequest
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicket(const CreateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTicketWithOptions(request, runtime);
}

/**
 * @summary Evaluates a ticket.
 *
 * @param request EvaluateTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EvaluateTicketResponse
 */
EvaluateTicketResponse Client::evaluateTicketWithOptions(const EvaluateTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasScore()) {
    body["Score"] = request.score();
  }

  if (!!request.hasSolved()) {
    body["Solved"] = request.solved();
  }

  if (!!request.hasTicketId()) {
    body["TicketId"] = request.ticketId();
  }

  if (!!request.hasUid()) {
    body["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EvaluateTicket"},
    {"version" , "2021-06-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EvaluateTicketResponse>();
}

/**
 * @summary Evaluates a ticket.
 *
 * @param request EvaluateTicketRequest
 * @return EvaluateTicketResponse
 */
EvaluateTicketResponse Client::evaluateTicket(const EvaluateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return evaluateTicketWithOptions(request, runtime);
}

/**
 * @summary Queries the Object Storage Service (OSS) URL that is used to upload attachments.
 *
 * @param request GetAttachmentUploadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAttachmentUploadUrlResponse
 */
GetAttachmentUploadUrlResponse Client::getAttachmentUploadUrlWithOptions(const GetAttachmentUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAttachmentUploadUrl"},
    {"version" , "2021-06-10"},
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
 * @summary Queries the Object Storage Service (OSS) URL that is used to upload attachments.
 *
 * @param request GetAttachmentUploadUrlRequest
 * @return GetAttachmentUploadUrlResponse
 */
GetAttachmentUploadUrlResponse Client::getAttachmentUploadUrl(const GetAttachmentUploadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAttachmentUploadUrlWithOptions(request, runtime);
}

/**
 * @param request GetMqConsumerTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMqConsumerTagResponse
 */
GetMqConsumerTagResponse Client::getMqConsumerTagWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetMqConsumerTag"},
    {"version" , "2021-06-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMqConsumerTagResponse>();
}

/**
 * @return GetMqConsumerTagResponse
 */
GetMqConsumerTagResponse Client::getMqConsumerTag() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMqConsumerTagWithOptions(runtime);
}

/**
 * @summary Query tickets.
 *
 * @param request GetTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicketWithOptions(const GetTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTicketId()) {
    body["TicketId"] = request.ticketId();
  }

  if (!!request.hasUid()) {
    body["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTicket"},
    {"version" , "2021-06-10"},
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
 * @summary Query tickets.
 *
 * @param request GetTicketRequest
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicket(const GetTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTicketWithOptions(request, runtime);
}

/**
 * @summary Obtains the list data of ticket problem categories.
 *
 * @param request ListCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategoriesWithOptions(const ListCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasProductId()) {
    body["ProductId"] = request.productId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCategories"},
    {"version" , "2021-06-10"},
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
 * @summary Obtains the list data of ticket problem categories.
 *
 * @param request ListCategoriesRequest
 * @return ListCategoriesResponse
 */
ListCategoriesResponse Client::listCategories(const ListCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCategoriesWithOptions(request, runtime);
}

/**
 * @summary Obtains the data of the Alibaba Cloud product list.
 *
 * @param request ListProductsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProducts"},
    {"version" , "2021-06-10"},
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
 * @summary Obtains the data of the Alibaba Cloud product list.
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProductsWithOptions(request, runtime);
}

/**
 * @summary Obtains the ticket communication records.
 *
 * @param request ListTicketNotesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketNotesResponse
 */
ListTicketNotesResponse Client::listTicketNotesWithOptions(const ListTicketNotesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTicketId()) {
    query["TicketId"] = request.ticketId();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTicketNotes"},
    {"version" , "2021-06-10"},
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
 * @summary Obtains the ticket communication records.
 *
 * @param request ListTicketNotesRequest
 * @return ListTicketNotesResponse
 */
ListTicketNotesResponse Client::listTicketNotes(const ListTicketNotesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTicketNotesWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to obtain the list of my tickets.
 *
 * @param tmpReq ListTicketsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTicketsWithOptions(const ListTicketsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTicketsShrinkRequest request = ListTicketsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTicketIdList()) {
    request.setTicketIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ticketIdList(), "TicketIdList", "simple"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasStatusList()) {
    body["StatusList"] = request.statusList();
  }

  if (!!request.hasTicketId()) {
    body["TicketId"] = request.ticketId();
  }

  if (!!request.hasTicketIdListShrink()) {
    body["TicketIdList"] = request.ticketIdListShrink();
  }

  if (!!request.hasUid()) {
    body["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTickets"},
    {"version" , "2021-06-10"},
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
 * @summary You can call this operation to obtain the list of my tickets.
 *
 * @param request ListTicketsRequest
 * @return ListTicketsResponse
 */
ListTicketsResponse Client::listTickets(const ListTicketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTicketsWithOptions(request, runtime);
}

/**
 * @summary Reopens a ticket
 *
 * @param request ReopenTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReopenTicketResponse
 */
ReopenTicketResponse Client::reopenTicketWithOptions(const ReopenTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasTicketId()) {
    body["TicketId"] = request.ticketId();
  }

  if (!!request.hasUid()) {
    body["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ReopenTicket"},
    {"version" , "2021-06-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReopenTicketResponse>();
}

/**
 * @summary Reopens a ticket
 *
 * @param request ReopenTicketRequest
 * @return ReopenTicketResponse
 */
ReopenTicketResponse Client::reopenTicket(const ReopenTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reopenTicketWithOptions(request, runtime);
}

/**
 * @summary Reply to the ticket. You can call the ListTicketNotes operation to obtain the content of the reply.
 *
 * @param tmpReq ReplyTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplyTicketResponse
 */
ReplyTicketResponse Client::replyTicketWithOptions(const ReplyTicketRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplyTicketShrinkRequest request = ReplyTicketShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileNameList()) {
    request.setFileNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.fileNameList(), "FileNameList", "simple"));
  }

  json query = {};
  if (!!request.hasFileNameListShrink()) {
    query["FileNameList"] = request.fileNameListShrink();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasEncrypt()) {
    body["Encrypt"] = request.encrypt();
  }

  if (!!request.hasTicketId()) {
    body["TicketId"] = request.ticketId();
  }

  if (!!request.hasUid()) {
    body["Uid"] = request.uid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplyTicket"},
    {"version" , "2021-06-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplyTicketResponse>();
}

/**
 * @summary Reply to the ticket. You can call the ListTicketNotes operation to obtain the content of the reply.
 *
 * @param request ReplyTicketRequest
 * @return ReplyTicketResponse
 */
ReplyTicketResponse Client::replyTicket(const ReplyTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replyTicketWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Workorder20210610