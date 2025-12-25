// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WORKORDER20210610_HPP_
#define ALIBABACLOUD_WORKORDER20210610_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Workorder20210610Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Workorder20210610.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Closes a ticket.
       *
       * @param request CloseTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseTicketResponse
       */
      Models::CloseTicketResponse closeTicketWithOptions(const Models::CloseTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Closes a ticket.
       *
       * @param request CloseTicketRequest
       * @return CloseTicketResponse
       */
      Models::CloseTicketResponse closeTicket(const Models::CloseTicketRequest &request);

      /**
       * @summary Creates a ticket.
       *
       * @param tmpReq CreateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ticket.
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @summary Evaluates a ticket.
       *
       * @param request EvaluateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EvaluateTicketResponse
       */
      Models::EvaluateTicketResponse evaluateTicketWithOptions(const Models::EvaluateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Evaluates a ticket.
       *
       * @param request EvaluateTicketRequest
       * @return EvaluateTicketResponse
       */
      Models::EvaluateTicketResponse evaluateTicket(const Models::EvaluateTicketRequest &request);

      /**
       * @summary Queries the Object Storage Service (OSS) URL that is used to upload attachments.
       *
       * @param request GetAttachmentUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttachmentUploadUrlResponse
       */
      Models::GetAttachmentUploadUrlResponse getAttachmentUploadUrlWithOptions(const Models::GetAttachmentUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Object Storage Service (OSS) URL that is used to upload attachments.
       *
       * @param request GetAttachmentUploadUrlRequest
       * @return GetAttachmentUploadUrlResponse
       */
      Models::GetAttachmentUploadUrlResponse getAttachmentUploadUrl(const Models::GetAttachmentUploadUrlRequest &request);

      /**
       * @param request GetMqConsumerTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMqConsumerTagResponse
       */
      Models::GetMqConsumerTagResponse getMqConsumerTagWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetMqConsumerTagResponse
       */
      Models::GetMqConsumerTagResponse getMqConsumerTag();

      /**
       * @summary Query tickets.
       *
       * @param request GetTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicketWithOptions(const Models::GetTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query tickets.
       *
       * @param request GetTicketRequest
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicket(const Models::GetTicketRequest &request);

      /**
       * @summary Obtains the list data of ticket problem categories.
       *
       * @param request ListCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategoriesWithOptions(const Models::ListCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the list data of ticket problem categories.
       *
       * @param request ListCategoriesRequest
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategories(const Models::ListCategoriesRequest &request);

      /**
       * @summary Obtains the data of the Alibaba Cloud product list.
       *
       * @param request ListProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the data of the Alibaba Cloud product list.
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary Obtains the ticket communication records.
       *
       * @param request ListTicketNotesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketNotesResponse
       */
      Models::ListTicketNotesResponse listTicketNotesWithOptions(const Models::ListTicketNotesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the ticket communication records.
       *
       * @param request ListTicketNotesRequest
       * @return ListTicketNotesResponse
       */
      Models::ListTicketNotesResponse listTicketNotes(const Models::ListTicketNotesRequest &request);

      /**
       * @summary You can call this operation to obtain the list of my tickets.
       *
       * @param tmpReq ListTicketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTicketsWithOptions(const Models::ListTicketsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to obtain the list of my tickets.
       *
       * @param request ListTicketsRequest
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTickets(const Models::ListTicketsRequest &request);

      /**
       * @summary Reopens a ticket
       *
       * @param request ReopenTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReopenTicketResponse
       */
      Models::ReopenTicketResponse reopenTicketWithOptions(const Models::ReopenTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reopens a ticket
       *
       * @param request ReopenTicketRequest
       * @return ReopenTicketResponse
       */
      Models::ReopenTicketResponse reopenTicket(const Models::ReopenTicketRequest &request);

      /**
       * @summary Reply to the ticket. You can call the ListTicketNotes operation to obtain the content of the reply.
       *
       * @param tmpReq ReplyTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplyTicketResponse
       */
      Models::ReplyTicketResponse replyTicketWithOptions(const Models::ReplyTicketRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reply to the ticket. You can call the ListTicketNotes operation to obtain the content of the reply.
       *
       * @param request ReplyTicketRequest
       * @return ReplyTicketResponse
       */
      Models::ReplyTicketResponse replyTicket(const Models::ReplyTicketRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
