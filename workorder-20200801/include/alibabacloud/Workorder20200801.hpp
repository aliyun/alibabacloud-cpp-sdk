// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WORKORDER20200801_HPP_
#define ALIBABACLOUD_WORKORDER20200801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Workorder20200801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Workorder20200801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @deprecated OpenAPI CreateTicket is deprecated, please use Workorder::2021-06-10::CreateTicket instead.
       *
       * @param request CreateTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicketWithOptions(const Models::CreateTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CreateTicket is deprecated, please use Workorder::2021-06-10::CreateTicket instead.
       *
       * @param request CreateTicketRequest
       * @return CreateTicketResponse
       */
      Models::CreateTicketResponse createTicket(const Models::CreateTicketRequest &request);

      /**
       * @param request GetAttachmentUploadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttachmentUploadUrlResponse
       */
      Models::GetAttachmentUploadUrlResponse getAttachmentUploadUrlWithOptions(const Models::GetAttachmentUploadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAttachmentUploadUrlRequest
       * @return GetAttachmentUploadUrlResponse
       */
      Models::GetAttachmentUploadUrlResponse getAttachmentUploadUrl(const Models::GetAttachmentUploadUrlRequest &request);

      /**
       * @param request GetAttachmentUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttachmentUrlResponse
       */
      Models::GetAttachmentUrlResponse getAttachmentUrlWithOptions(const Models::GetAttachmentUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAttachmentUrlRequest
       * @return GetAttachmentUrlResponse
       */
      Models::GetAttachmentUrlResponse getAttachmentUrl(const Models::GetAttachmentUrlRequest &request);

      /**
       * @deprecated OpenAPI GetTicket is deprecated, please use Workorder::2021-06-10::GetTicket instead.
       *
       * @param request GetTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicketWithOptions(const Models::GetTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetTicket is deprecated, please use Workorder::2021-06-10::GetTicket instead.
       *
       * @param request GetTicketRequest
       * @return GetTicketResponse
       */
      Models::GetTicketResponse getTicket(const Models::GetTicketRequest &request);

      /**
       * @deprecated OpenAPI ListTickets is deprecated, please use Workorder::2021-06-10::ListTickets instead.
       *
       * @param request ListTicketsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTicketsWithOptions(const Models::ListTicketsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListTickets is deprecated, please use Workorder::2021-06-10::ListTickets instead.
       *
       * @param request ListTicketsRequest
       * @return ListTicketsResponse
       */
      Models::ListTicketsResponse listTickets(const Models::ListTicketsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Workorder20200801
#endif
