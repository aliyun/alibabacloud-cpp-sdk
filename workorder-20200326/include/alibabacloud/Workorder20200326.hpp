// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WORKORDER20200326_HPP_
#define ALIBABACLOUD_WORKORDER20200326_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Workorder20200326Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Workorder20200326.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200326
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @deprecated OpenAPI CloseTicket is deprecated, please use Workorder::2021-06-10::CloseTicket instead.
       *
       * @param request CloseTicketRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseTicketResponse
       */
      Models::CloseTicketResponse closeTicketWithOptions(const Models::CloseTicketRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI CloseTicket is deprecated, please use Workorder::2021-06-10::CloseTicket instead.
       *
       * @param request CloseTicketRequest
       * @return CloseTicketResponse
       */
      Models::CloseTicketResponse closeTicket(const Models::CloseTicketRequest &request);

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
       * @deprecated OpenAPI ListCategories is deprecated, please use Workorder::2021-06-10::ListCategories instead.
       *
       * @param request ListCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategoriesWithOptions(const Models::ListCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListCategories is deprecated, please use Workorder::2021-06-10::ListCategories instead.
       *
       * @param request ListCategoriesRequest
       * @return ListCategoriesResponse
       */
      Models::ListCategoriesResponse listCategories(const Models::ListCategoriesRequest &request);

      /**
       * @deprecated OpenAPI ListProducts is deprecated, please use Workorder::2021-06-10::ListProducts instead.
       *
       * @param request ListProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListProducts is deprecated, please use Workorder::2021-06-10::ListProducts instead.
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @deprecated OpenAPI ListTicketNotes is deprecated, please use Workorder::2021-06-10::ListTicketNotes instead.
       *
       * @param request ListTicketNotesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTicketNotesResponse
       */
      Models::ListTicketNotesResponse listTicketNotesWithOptions(const Models::ListTicketNotesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ListTicketNotes is deprecated, please use Workorder::2021-06-10::ListTicketNotes instead.
       *
       * @param request ListTicketNotesRequest
       * @return ListTicketNotesResponse
       */
      Models::ListTicketNotesResponse listTicketNotes(const Models::ListTicketNotesRequest &request);

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
} // namespace Workorder20200326
#endif
