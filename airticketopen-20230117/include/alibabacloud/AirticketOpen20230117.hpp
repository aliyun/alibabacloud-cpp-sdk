// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AIRTICKETOPEN20230117_HPP_
#define ALIBABACLOUD_AIRTICKETOPEN20230117_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AirticketOpen20230117Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AirticketOpen20230117.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Queries the account fund flow list.
       *
       * @param request AccountFlowListRequest
       * @param headers AccountFlowListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccountFlowListResponse
       */
      Models::AccountFlowListResponse accountFlowListWithOptions(const Models::AccountFlowListRequest &request, const Models::AccountFlowListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the account fund flow list.
       *
       * @param request AccountFlowListRequest
       * @return AccountFlowListResponse
       */
      Models::AccountFlowListResponse accountFlowList(const Models::AccountFlowListRequest &request);

      /**
       * @summary Recommends ancillary products.
       *
       * @param request AncillarySuggestRequest
       * @param headers AncillarySuggestHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AncillarySuggestResponse
       */
      Models::AncillarySuggestResponse ancillarySuggestWithOptions(const Models::AncillarySuggestRequest &request, const Models::AncillarySuggestHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Recommends ancillary products.
       *
       * @param request AncillarySuggestRequest
       * @return AncillarySuggestResponse
       */
      Models::AncillarySuggestResponse ancillarySuggest(const Models::AncillarySuggestRequest &request);

      /**
       * @summary Creates a booking order.
       *
       * @param tmpReq BookRequest
       * @param headers BookHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BookResponse
       */
      Models::BookResponse bookWithOptions(const Models::BookRequest &tmpReq, const Models::BookHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a booking order.
       *
       * @param request BookRequest
       * @return BookResponse
       */
      Models::BookResponse book(const Models::BookRequest &request);

      /**
       * @summary Cancels an unpaid order.
       *
       * @param request CancelRequest
       * @param headers CancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelResponse
       */
      Models::CancelResponse cancelWithOptions(const Models::CancelRequest &request, const Models::CancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an unpaid order.
       *
       * @param request CancelRequest
       * @return CancelResponse
       */
      Models::CancelResponse cancel(const Models::CancelRequest &request);

      /**
       * @summary Submits a change application.
       *
       * @param tmpReq ChangeApplyRequest
       * @param headers ChangeApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeApplyResponse
       */
      Models::ChangeApplyResponse changeApplyWithOptions(const Models::ChangeApplyRequest &tmpReq, const Models::ChangeApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a change application.
       *
       * @param request ChangeApplyRequest
       * @return ChangeApplyResponse
       */
      Models::ChangeApplyResponse changeApply(const Models::ChangeApplyRequest &request);

      /**
       * @summary Cancel the change order.
       *
       * @param request ChangeCancelRequest
       * @param headers ChangeCancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeCancelResponse
       */
      Models::ChangeCancelResponse changeCancelWithOptions(const Models::ChangeCancelRequest &request, const Models::ChangeCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancel the change order.
       *
       * @param request ChangeCancelRequest
       * @return ChangeCancelResponse
       */
      Models::ChangeCancelResponse changeCancel(const Models::ChangeCancelRequest &request);

      /**
       * @summary Confirms a flight change order.
       *
       * @param request ChangeConfirmRequest
       * @param headers ChangeConfirmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeConfirmResponse
       */
      Models::ChangeConfirmResponse changeConfirmWithOptions(const Models::ChangeConfirmRequest &request, const Models::ChangeConfirmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirms a flight change order.
       *
       * @param request ChangeConfirmRequest
       * @return ChangeConfirmResponse
       */
      Models::ChangeConfirmResponse changeConfirm(const Models::ChangeConfirmRequest &request);

      /**
       * @summary Retrieves the details of a flight change order.
       *
       * @param request ChangeDetailRequest
       * @param headers ChangeDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDetailResponse
       */
      Models::ChangeDetailResponse changeDetailWithOptions(const Models::ChangeDetailRequest &request, const Models::ChangeDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a flight change order.
       *
       * @param request ChangeDetailRequest
       * @return ChangeDetailResponse
       */
      Models::ChangeDetailResponse changeDetail(const Models::ChangeDetailRequest &request);

      /**
       * @summary Queries a paging list of change order summaries by buyer account.
       *
       * @param request ChangeDetailListOfBuyerRequest
       * @param headers ChangeDetailListOfBuyerHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDetailListOfBuyerResponse
       */
      Models::ChangeDetailListOfBuyerResponse changeDetailListOfBuyerWithOptions(const Models::ChangeDetailListOfBuyerRequest &request, const Models::ChangeDetailListOfBuyerHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a paging list of change order summaries by buyer account.
       *
       * @param request ChangeDetailListOfBuyerRequest
       * @return ChangeDetailListOfBuyerResponse
       */
      Models::ChangeDetailListOfBuyerResponse changeDetailListOfBuyer(const Models::ChangeDetailListOfBuyerRequest &request);

      /**
       * @summary Queries the list of change orders by the original order number.
       *
       * @param request ChangeDetailListOfOrderNumRequest
       * @param headers ChangeDetailListOfOrderNumHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDetailListOfOrderNumResponse
       */
      Models::ChangeDetailListOfOrderNumResponse changeDetailListOfOrderNumWithOptions(const Models::ChangeDetailListOfOrderNumRequest &request, const Models::ChangeDetailListOfOrderNumHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of change orders by the original order number.
       *
       * @param request ChangeDetailListOfOrderNumRequest
       * @return ChangeDetailListOfOrderNumResponse
       */
      Models::ChangeDetailListOfOrderNumResponse changeDetailListOfOrderNum(const Models::ChangeDetailListOfOrderNumRequest &request);

      /**
       * @summary Collects lowest-price flight information.
       *
       * @description Collects lowest-price flight information.
       *
       * @param tmpReq CollectFlightLowestPriceRequest
       * @param headers CollectFlightLowestPriceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CollectFlightLowestPriceResponse
       */
      Models::CollectFlightLowestPriceResponse collectFlightLowestPriceWithOptions(const Models::CollectFlightLowestPriceRequest &tmpReq, const Models::CollectFlightLowestPriceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Collects lowest-price flight information.
       *
       * @description Collects lowest-price flight information.
       *
       * @param request CollectFlightLowestPriceRequest
       * @return CollectFlightLowestPriceResponse
       */
      Models::CollectFlightLowestPriceResponse collectFlightLowestPrice(const Models::CollectFlightLowestPriceRequest &request);

      /**
       * @summary Find richer quote information for the itinerary, including free baggage allowance, refund and change rules, and baggage through-check rules.
       *
       * @description In the input parameters, choose either solution_id or journey_param_list. solution_id must be obtained from the Search API.
       *
       * @param tmpReq EnrichRequest
       * @param headers EnrichHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnrichResponse
       */
      Models::EnrichResponse enrichWithOptions(const Models::EnrichRequest &tmpReq, const Models::EnrichHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Find richer quote information for the itinerary, including free baggage allowance, refund and change rules, and baggage through-check rules.
       *
       * @description In the input parameters, choose either solution_id or journey_param_list. solution_id must be obtained from the Search API.
       *
       * @param request EnrichRequest
       * @return EnrichResponse
       */
      Models::EnrichResponse enrich(const Models::EnrichRequest &request);

      /**
       * @summary Uploads a file as an attachment image. The file size is limited to 300 KB or less.
       *
       * @param request FileUploadRequest
       * @param headers FileUploadHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FileUploadResponse
       */
      Models::FileUploadResponse fileUploadWithOptions(const Models::FileUploadRequest &request, const Models::FileUploadHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a file as an attachment image. The file size is limited to 300 KB or less.
       *
       * @param request FileUploadRequest
       * @return FileUploadResponse
       */
      Models::FileUploadResponse fileUpload(const Models::FileUploadRequest &request);

      /**
       * @summary Queries flight change information by order number.
       *
       * @param request FlightChangeOfOrderRequest
       * @param headers FlightChangeOfOrderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightChangeOfOrderResponse
       */
      Models::FlightChangeOfOrderResponse flightChangeOfOrderWithOptions(const Models::FlightChangeOfOrderRequest &request, const Models::FlightChangeOfOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries flight change information by order number.
       *
       * @param request FlightChangeOfOrderRequest
       * @return FlightChangeOfOrderResponse
       */
      Models::FlightChangeOfOrderResponse flightChangeOfOrder(const Models::FlightChangeOfOrderRequest &request);

      /**
       * @summary Obtains a token for API calls. The token is valid for 2 hours.
       *
       * @param request GetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a token for API calls. The token is valid for 2 hours.
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary Queries luggage through-check information for an itinerary.
       *
       * @description Queries luggage through-check information for an itinerary. Provide itinerary information as input, and the API returns whether luggage through-check is supported for the itinerary. Luggage through-check applies to transfer and stopover scenarios.
       *
       * @param tmpReq LuggageDirectRequest
       * @param headers LuggageDirectHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return LuggageDirectResponse
       */
      Models::LuggageDirectResponse luggageDirectWithOptions(const Models::LuggageDirectRequest &tmpReq, const Models::LuggageDirectHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries luggage through-check information for an itinerary.
       *
       * @description Queries luggage through-check information for an itinerary. Provide itinerary information as input, and the API returns whether luggage through-check is supported for the itinerary. Luggage through-check applies to transfer and stopover scenarios.
       *
       * @param request LuggageDirectRequest
       * @return LuggageDirectResponse
       */
      Models::LuggageDirectResponse luggageDirect(const Models::LuggageDirectRequest &request);

      /**
       * @summary Queries order details.
       *
       * @param request OrderDetailRequest
       * @param headers OrderDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OrderDetailResponse
       */
      Models::OrderDetailResponse orderDetailWithOptions(const Models::OrderDetailRequest &request, const Models::OrderDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries order details.
       *
       * @param request OrderDetailRequest
       * @return OrderDetailResponse
       */
      Models::OrderDetailResponse orderDetail(const Models::OrderDetailRequest &request);

      /**
       * @summary Queries the order list.
       *
       * @param request OrderListRequest
       * @param headers OrderListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OrderListResponse
       */
      Models::OrderListResponse orderListWithOptions(const Models::OrderListRequest &request, const Models::OrderListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the order list.
       *
       * @param request OrderListRequest
       * @return OrderListResponse
       */
      Models::OrderListResponse orderList(const Models::OrderListRequest &request);

      /**
       * @summary Verifies seat availability and pricing. If the price has changed, the developer can proceed with Book at the updated price. If the price has not changed, the order is placed at the original price.
       *
       * @param request PricingRequest
       * @param headers PricingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PricingResponse
       */
      Models::PricingResponse pricingWithOptions(const Models::PricingRequest &request, const Models::PricingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies seat availability and pricing. If the price has changed, the developer can proceed with Book at the updated price. If the price has not changed, the order is placed at the original price.
       *
       * @param request PricingRequest
       * @return PricingResponse
       */
      Models::PricingResponse pricing(const Models::PricingRequest &request);

      /**
       * @summary Submits a refund application for an air ticket.
       *
       * @param tmpReq RefundApplyRequest
       * @param headers RefundApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundApplyResponse
       */
      Models::RefundApplyResponse refundApplyWithOptions(const Models::RefundApplyRequest &tmpReq, const Models::RefundApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a refund application for an air ticket.
       *
       * @param request RefundApplyRequest
       * @return RefundApplyResponse
       */
      Models::RefundApplyResponse refundApply(const Models::RefundApplyRequest &request);

      /**
       * @summary Retrieves the details of a refund order.
       *
       * @param request RefundDetailRequest
       * @param headers RefundDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundDetailResponse
       */
      Models::RefundDetailResponse refundDetailWithOptions(const Models::RefundDetailRequest &request, const Models::RefundDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a refund order.
       *
       * @param request RefundDetailRequest
       * @return RefundDetailResponse
       */
      Models::RefundDetailResponse refundDetail(const Models::RefundDetailRequest &request);

      /**
       * @summary Queries the details of refund orders.
       *
       * @param request RefundDetailListRequest
       * @param headers RefundDetailListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundDetailListResponse
       */
      Models::RefundDetailListResponse refundDetailListWithOptions(const Models::RefundDetailListRequest &request, const Models::RefundDetailListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of refund orders.
       *
       * @param request RefundDetailListRequest
       * @return RefundDetailListResponse
       */
      Models::RefundDetailListResponse refundDetailList(const Models::RefundDetailListRequest &request);

      /**
       * @summary Searches for flight quotes and returns the lowest price across multiple flights. Note that the response of this operation does not include refund and change rules, free baggage allowance, or baggage through-check rules.
       *
       * @param tmpReq SearchRequest
       * @param headers SearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchResponse
       */
      Models::SearchResponse searchWithOptions(const Models::SearchRequest &tmpReq, const Models::SearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Searches for flight quotes and returns the lowest price across multiple flights. Note that the response of this operation does not include refund and change rules, free baggage allowance, or baggage through-check rules.
       *
       * @param request SearchRequest
       * @return SearchResponse
       */
      Models::SearchResponse search(const Models::SearchRequest &request);

      /**
       * @summary Search and quote prices, currently providing the lowest price across multiple flights. Note that this API response includes refund/change rules, free baggage allowance, and baggage through-check rules.
       *
       * @param tmpReq StandardSearchRequest
       * @param headers StandardSearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StandardSearchResponse
       */
      Models::StandardSearchResponse standardSearchWithOptions(const Models::StandardSearchRequest &tmpReq, const Models::StandardSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search and quote prices, currently providing the lowest price across multiple flights. Note that this API response includes refund/change rules, free baggage allowance, and baggage through-check rules.
       *
       * @param request StandardSearchRequest
       * @return StandardSearchResponse
       */
      Models::StandardSearchResponse standardSearch(const Models::StandardSearchRequest &request);

      /**
       * @summary Pays for and issues a ticket.
       *
       * @param request TicketingRequest
       * @param headers TicketingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketingResponse
       */
      Models::TicketingResponse ticketingWithOptions(const Models::TicketingRequest &request, const Models::TicketingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Pays for and issues a ticket.
       *
       * @param request TicketingRequest
       * @return TicketingResponse
       */
      Models::TicketingResponse ticketing(const Models::TicketingRequest &request);

      /**
       * @summary Performs a pre-ticketing check. This operation is optional.
       *
       * @description Performs a pre-ticketing check. This operation is optional.
       *
       * @param request TicketingCheckRequest
       * @param headers TicketingCheckHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketingCheckResponse
       */
      Models::TicketingCheckResponse ticketingCheckWithOptions(const Models::TicketingCheckRequest &request, const Models::TicketingCheckHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a pre-ticketing check. This operation is optional.
       *
       * @description Performs a pre-ticketing check. This operation is optional.
       *
       * @param request TicketingCheckRequest
       * @return TicketingCheckResponse
       */
      Models::TicketingCheckResponse ticketingCheck(const Models::TicketingCheckRequest &request);

      /**
       * @summary Queries transit visa requirements for a flight itinerary. You provide flight information, and the API returns whether a transit visa is required for the itinerary. Only transfer or stopover segments are valid input parameters (transfers or stopovers passing through a third country). The supported passenger type defaults to Chinese mainland travelers.
       *
       * @description Queries transit visa requirements for a flight itinerary. You provide flight information, and the API returns whether a transit visa is required for the itinerary. Only transfer or stopover segments are valid input parameters (transfers or stopovers passing through a third country). The supported passenger type defaults to Chinese mainland travelers.
       *
       * @param tmpReq TransitVisaRequest
       * @param headers TransitVisaHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransitVisaResponse
       */
      Models::TransitVisaResponse transitVisaWithOptions(const Models::TransitVisaRequest &tmpReq, const Models::TransitVisaHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries transit visa requirements for a flight itinerary. You provide flight information, and the API returns whether a transit visa is required for the itinerary. Only transfer or stopover segments are valid input parameters (transfers or stopovers passing through a third country). The supported passenger type defaults to Chinese mainland travelers.
       *
       * @description Queries transit visa requirements for a flight itinerary. You provide flight information, and the API returns whether a transit visa is required for the itinerary. Only transfer or stopover segments are valid input parameters (transfers or stopovers passing through a third country). The supported passenger type defaults to Chinese mainland travelers.
       *
       * @param request TransitVisaRequest
       * @return TransitVisaResponse
       */
      Models::TransitVisaResponse transitVisa(const Models::TransitVisaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
