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
       * @summary 申请退款。
       *
       * @param request TicketApplyRefundRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketApplyRefundResponse
       */
      Models::TicketApplyRefundResponse ticketApplyRefundWithOptions(const Models::TicketApplyRefundRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请退款。
       *
       * @param request TicketApplyRefundRequest
       * @return TicketApplyRefundResponse
       */
      Models::TicketApplyRefundResponse ticketApplyRefund(const Models::TicketApplyRefundRequest &request);

      /**
       * @summary 取消订单。
       *
       * @param request TicketCancelOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketCancelOrderResponse
       */
      Models::TicketCancelOrderResponse ticketCancelOrderWithOptions(const Models::TicketCancelOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消订单。
       *
       * @param request TicketCancelOrderRequest
       * @return TicketCancelOrderResponse
       */
      Models::TicketCancelOrderResponse ticketCancelOrder(const Models::TicketCancelOrderRequest &request);

      /**
       * @summary 检查退款。
       *
       * @param request TicketCheckRefundRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketCheckRefundResponse
       */
      Models::TicketCheckRefundResponse ticketCheckRefundWithOptions(const Models::TicketCheckRefundRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查退款。
       *
       * @param request TicketCheckRefundRequest
       * @return TicketCheckRefundResponse
       */
      Models::TicketCheckRefundResponse ticketCheckRefund(const Models::TicketCheckRefundRequest &request);

      /**
       * @summary 创建订单。
       *
       * @param tmpReq TicketCreateOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketCreateOrderResponse
       */
      Models::TicketCreateOrderResponse ticketCreateOrderWithOptions(const Models::TicketCreateOrderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建订单。
       *
       * @param request TicketCreateOrderRequest
       * @return TicketCreateOrderResponse
       */
      Models::TicketCreateOrderResponse ticketCreateOrder(const Models::TicketCreateOrderRequest &request);

      /**
       * @summary 分页查询门票产品。
       *
       * @param request TicketPageQueryProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketPageQueryProductResponse
       */
      Models::TicketPageQueryProductResponse ticketPageQueryProductWithOptions(const Models::TicketPageQueryProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询门票产品。
       *
       * @param request TicketPageQueryProductRequest
       * @return TicketPageQueryProductResponse
       */
      Models::TicketPageQueryProductResponse ticketPageQueryProduct(const Models::TicketPageQueryProductRequest &request);

      /**
       * @summary 分页查询景区。
       *
       * @param request TicketPageQueryScenicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketPageQueryScenicResponse
       */
      Models::TicketPageQueryScenicResponse ticketPageQueryScenicWithOptions(const Models::TicketPageQueryScenicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询景区。
       *
       * @param request TicketPageQueryScenicRequest
       * @return TicketPageQueryScenicResponse
       */
      Models::TicketPageQueryScenicResponse ticketPageQueryScenic(const Models::TicketPageQueryScenicRequest &request);

      /**
       * @summary 支付订单。
       *
       * @param request TicketPayOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketPayOrderResponse
       */
      Models::TicketPayOrderResponse ticketPayOrderWithOptions(const Models::TicketPayOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 支付订单。
       *
       * @param request TicketPayOrderRequest
       * @return TicketPayOrderResponse
       */
      Models::TicketPayOrderResponse ticketPayOrder(const Models::TicketPayOrderRequest &request);

      /**
       * @summary 查询订单。
       *
       * @param request TicketQueryOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketQueryOrderResponse
       */
      Models::TicketQueryOrderResponse ticketQueryOrderWithOptions(const Models::TicketQueryOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订单。
       *
       * @param request TicketQueryOrderRequest
       * @return TicketQueryOrderResponse
       */
      Models::TicketQueryOrderResponse ticketQueryOrder(const Models::TicketQueryOrderRequest &request);

      /**
       * @summary 查询门票价库。
       *
       * @param request TicketQueryPriceStockRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketQueryPriceStockResponse
       */
      Models::TicketQueryPriceStockResponse ticketQueryPriceStockWithOptions(const Models::TicketQueryPriceStockRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询门票价库。
       *
       * @param request TicketQueryPriceStockRequest
       * @return TicketQueryPriceStockResponse
       */
      Models::TicketQueryPriceStockResponse ticketQueryPriceStock(const Models::TicketQueryPriceStockRequest &request);

      /**
       * @summary 查询门票产品。
       *
       * @param request TicketQueryProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketQueryProductResponse
       */
      Models::TicketQueryProductResponse ticketQueryProductWithOptions(const Models::TicketQueryProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询门票产品。
       *
       * @param request TicketQueryProductRequest
       * @return TicketQueryProductResponse
       */
      Models::TicketQueryProductResponse ticketQueryProduct(const Models::TicketQueryProductRequest &request);

      /**
       * @summary 查询退款单。
       *
       * @param request TicketQueryRefundOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketQueryRefundOrderResponse
       */
      Models::TicketQueryRefundOrderResponse ticketQueryRefundOrderWithOptions(const Models::TicketQueryRefundOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询退款单。
       *
       * @param request TicketQueryRefundOrderRequest
       * @return TicketQueryRefundOrderResponse
       */
      Models::TicketQueryRefundOrderResponse ticketQueryRefundOrder(const Models::TicketQueryRefundOrderRequest &request);

      /**
       * @summary 查询门票景区。
       *
       * @param request TicketQueryScenicRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketQueryScenicResponse
       */
      Models::TicketQueryScenicResponse ticketQueryScenicWithOptions(const Models::TicketQueryScenicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询门票景区。
       *
       * @param request TicketQueryScenicRequest
       * @return TicketQueryScenicResponse
       */
      Models::TicketQueryScenicResponse ticketQueryScenic(const Models::TicketQueryScenicRequest &request);

      /**
       * @summary 查询货架。
       *
       * @param request TicketQueryShelfRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketQueryShelfResponse
       */
      Models::TicketQueryShelfResponse ticketQueryShelfWithOptions(const Models::TicketQueryShelfRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询货架。
       *
       * @param request TicketQueryShelfRequest
       * @return TicketQueryShelfResponse
       */
      Models::TicketQueryShelfResponse ticketQueryShelf(const Models::TicketQueryShelfRequest &request);

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

      /**
       * @summary 申请退款
       *
       * @param request ApplyRefundRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyRefundResponse
       */
      Models::ApplyRefundResponse applyRefundWithOptions(const Models::ApplyRefundRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 申请退款
       *
       * @param request ApplyRefundRequest
       * @return ApplyRefundResponse
       */
      Models::ApplyRefundResponse applyRefund(const Models::ApplyRefundRequest &request);

      /**
       * @summary 批量查询酒店详情
       *
       * @param tmpReq BatchGetHotelDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetHotelDetailResponse
       */
      Models::BatchGetHotelDetailResponse batchGetHotelDetailWithOptions(const Models::BatchGetHotelDetailRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询酒店详情
       *
       * @param request BatchGetHotelDetailRequest
       * @return BatchGetHotelDetailResponse
       */
      Models::BatchGetHotelDetailResponse batchGetHotelDetail(const Models::BatchGetHotelDetailRequest &request);

      /**
       * @summary 取消或退款
       *
       * @param request CancelOrRefundRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOrRefundResponse
       */
      Models::CancelOrRefundResponse cancelOrRefundWithOptions(const Models::CancelOrRefundRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消或退款
       *
       * @param request CancelOrRefundRequest
       * @return CancelOrRefundResponse
       */
      Models::CancelOrRefundResponse cancelOrRefund(const Models::CancelOrRefundRequest &request);

      /**
       * @summary 取消订单
       *
       * @param request CancelOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOrderResponse
       */
      Models::CancelOrderResponse cancelOrderWithOptions(const Models::CancelOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消订单
       *
       * @param request CancelOrderRequest
       * @return CancelOrderResponse
       */
      Models::CancelOrderResponse cancelOrder(const Models::CancelOrderRequest &request);

      /**
       * @summary 创单并支付
       *
       * @param tmpReq CreateAndPayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndPayResponse
       */
      Models::CreateAndPayResponse createAndPayWithOptions(const Models::CreateAndPayRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创单并支付
       *
       * @param request CreateAndPayRequest
       * @return CreateAndPayResponse
       */
      Models::CreateAndPayResponse createAndPay(const Models::CreateAndPayRequest &request);

      /**
       * @summary 创建订单
       *
       * @param tmpReq CreateOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrderWithOptions(const Models::CreateOrderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建订单
       *
       * @param request CreateOrderRequest
       * @return CreateOrderResponse
       */
      Models::CreateOrderResponse createOrder(const Models::CreateOrderRequest &request);

      /**
       * @summary Applies for a refund.
       *
       * @param request GlobalHotelApplyRefundRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelApplyRefundResponse
       */
      Models::GlobalHotelApplyRefundResponse globalHotelApplyRefundWithOptions(const Models::GlobalHotelApplyRefundRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a refund.
       *
       * @param request GlobalHotelApplyRefundRequest
       * @return GlobalHotelApplyRefundResponse
       */
      Models::GlobalHotelApplyRefundResponse globalHotelApplyRefund(const Models::GlobalHotelApplyRefundRequest &request);

      /**
       * @summary Queries hotel details in batches.
       *
       * @param tmpReq GlobalHotelBatchGetHotelDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelBatchGetHotelDetailResponse
       */
      Models::GlobalHotelBatchGetHotelDetailResponse globalHotelBatchGetHotelDetailWithOptions(const Models::GlobalHotelBatchGetHotelDetailRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries hotel details in batches.
       *
       * @param request GlobalHotelBatchGetHotelDetailRequest
       * @return GlobalHotelBatchGetHotelDetailResponse
       */
      Models::GlobalHotelBatchGetHotelDetailResponse globalHotelBatchGetHotelDetail(const Models::GlobalHotelBatchGetHotelDetailRequest &request);

      /**
       * @summary Cancels or refunds an order.
       *
       * @param request GlobalHotelCancelOrRefundRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelCancelOrRefundResponse
       */
      Models::GlobalHotelCancelOrRefundResponse globalHotelCancelOrRefundWithOptions(const Models::GlobalHotelCancelOrRefundRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels or refunds an order.
       *
       * @param request GlobalHotelCancelOrRefundRequest
       * @return GlobalHotelCancelOrRefundResponse
       */
      Models::GlobalHotelCancelOrRefundResponse globalHotelCancelOrRefund(const Models::GlobalHotelCancelOrRefundRequest &request);

      /**
       * @summary Cancels an order.
       *
       * @param request GlobalHotelCancelOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelCancelOrderResponse
       */
      Models::GlobalHotelCancelOrderResponse globalHotelCancelOrderWithOptions(const Models::GlobalHotelCancelOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an order.
       *
       * @param request GlobalHotelCancelOrderRequest
       * @return GlobalHotelCancelOrderResponse
       */
      Models::GlobalHotelCancelOrderResponse globalHotelCancelOrder(const Models::GlobalHotelCancelOrderRequest &request);

      /**
       * @summary Creates an order and processes the payment.
       *
       * @param tmpReq GlobalHotelCreateAndPayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelCreateAndPayResponse
       */
      Models::GlobalHotelCreateAndPayResponse globalHotelCreateAndPayWithOptions(const Models::GlobalHotelCreateAndPayRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an order and processes the payment.
       *
       * @param request GlobalHotelCreateAndPayRequest
       * @return GlobalHotelCreateAndPayResponse
       */
      Models::GlobalHotelCreateAndPayResponse globalHotelCreateAndPay(const Models::GlobalHotelCreateAndPayRequest &request);

      /**
       * @summary Creates an order.
       *
       * @param tmpReq GlobalHotelCreateOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelCreateOrderResponse
       */
      Models::GlobalHotelCreateOrderResponse globalHotelCreateOrderWithOptions(const Models::GlobalHotelCreateOrderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an order.
       *
       * @param request GlobalHotelCreateOrderRequest
       * @return GlobalHotelCreateOrderResponse
       */
      Models::GlobalHotelCreateOrderResponse globalHotelCreateOrder(const Models::GlobalHotelCreateOrderRequest &request);

      /**
       * @summary Processes a distribution payment.
       *
       * @param request GlobalHotelPayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelPayResponse
       */
      Models::GlobalHotelPayResponse globalHotelPayWithOptions(const Models::GlobalHotelPayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Processes a distribution payment.
       *
       * @param request GlobalHotelPayRequest
       * @return GlobalHotelPayResponse
       */
      Models::GlobalHotelPayResponse globalHotelPay(const Models::GlobalHotelPayRequest &request);

      /**
       * @summary Queries the availability of hotel rate plans.
       *
       * @param tmpReq GlobalHotelQueryAvailabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelQueryAvailabilityResponse
       */
      Models::GlobalHotelQueryAvailabilityResponse globalHotelQueryAvailabilityWithOptions(const Models::GlobalHotelQueryAvailabilityRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the availability of hotel rate plans.
       *
       * @param request GlobalHotelQueryAvailabilityRequest
       * @return GlobalHotelQueryAvailabilityResponse
       */
      Models::GlobalHotelQueryAvailabilityResponse globalHotelQueryAvailability(const Models::GlobalHotelQueryAvailabilityRequest &request);

      /**
       * @summary Queries calendar-based rate availability for hotels in batch.
       *
       * @param tmpReq GlobalHotelQueryCalendarAvailabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelQueryCalendarAvailabilityResponse
       */
      Models::GlobalHotelQueryCalendarAvailabilityResponse globalHotelQueryCalendarAvailabilityWithOptions(const Models::GlobalHotelQueryCalendarAvailabilityRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries calendar-based rate availability for hotels in batch.
       *
       * @param request GlobalHotelQueryCalendarAvailabilityRequest
       * @return GlobalHotelQueryCalendarAvailabilityResponse
       */
      Models::GlobalHotelQueryCalendarAvailabilityResponse globalHotelQueryCalendarAvailability(const Models::GlobalHotelQueryCalendarAvailabilityRequest &request);

      /**
       * @summary Queries an order.
       *
       * @param request GlobalHotelQueryOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelQueryOrderResponse
       */
      Models::GlobalHotelQueryOrderResponse globalHotelQueryOrderWithOptions(const Models::GlobalHotelQueryOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an order.
       *
       * @param request GlobalHotelQueryOrderRequest
       * @return GlobalHotelQueryOrderResponse
       */
      Models::GlobalHotelQueryOrderResponse globalHotelQueryOrder(const Models::GlobalHotelQueryOrderRequest &request);

      /**
       * @summary Queries city administrative divisions (in Chinese and English) by paging.
       *
       * @param request GlobalHotelSearchCityPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelSearchCityPageResponse
       */
      Models::GlobalHotelSearchCityPageResponse globalHotelSearchCityPageWithOptions(const Models::GlobalHotelSearchCityPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries city administrative divisions (in Chinese and English) by paging.
       *
       * @param request GlobalHotelSearchCityPageRequest
       * @return GlobalHotelSearchCityPageResponse
       */
      Models::GlobalHotelSearchCityPageResponse globalHotelSearchCityPage(const Models::GlobalHotelSearchCityPageRequest &request);

      /**
       * @summary Performs a paged query of the hotel list by city with paging support.
       *
       * @param request GlobalHotelSearchHotelListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelSearchHotelListResponse
       */
      Models::GlobalHotelSearchHotelListResponse globalHotelSearchHotelListWithOptions(const Models::GlobalHotelSearchHotelListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query of the hotel list by city with paging support.
       *
       * @param request GlobalHotelSearchHotelListRequest
       * @return GlobalHotelSearchHotelListResponse
       */
      Models::GlobalHotelSearchHotelListResponse globalHotelSearchHotelList(const Models::GlobalHotelSearchHotelListRequest &request);

      /**
       * @summary Validates the price of a hotel offer.
       *
       * @param tmpReq GlobalHotelValidatePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GlobalHotelValidatePriceResponse
       */
      Models::GlobalHotelValidatePriceResponse globalHotelValidatePriceWithOptions(const Models::GlobalHotelValidatePriceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the price of a hotel offer.
       *
       * @param request GlobalHotelValidatePriceRequest
       * @return GlobalHotelValidatePriceResponse
       */
      Models::GlobalHotelValidatePriceResponse globalHotelValidatePrice(const Models::GlobalHotelValidatePriceRequest &request);

      /**
       * @summary 分销支付
       *
       * @param request PayRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PayResponse
       */
      Models::PayResponse payWithOptions(const Models::PayRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分销支付
       *
       * @param request PayRequest
       * @return PayResponse
       */
      Models::PayResponse pay(const Models::PayRequest &request);

      /**
       * @summary 查询酒店报价可用性
       *
       * @param tmpReq QueryAvailabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvailabilityResponse
       */
      Models::QueryAvailabilityResponse queryAvailabilityWithOptions(const Models::QueryAvailabilityRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询酒店报价可用性
       *
       * @param request QueryAvailabilityRequest
       * @return QueryAvailabilityResponse
       */
      Models::QueryAvailabilityResponse queryAvailability(const Models::QueryAvailabilityRequest &request);

      /**
       * @summary 批量日历报价查询
       *
       * @param tmpReq QueryCalendarAvailabilityRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCalendarAvailabilityResponse
       */
      Models::QueryCalendarAvailabilityResponse queryCalendarAvailabilityWithOptions(const Models::QueryCalendarAvailabilityRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量日历报价查询
       *
       * @param request QueryCalendarAvailabilityRequest
       * @return QueryCalendarAvailabilityResponse
       */
      Models::QueryCalendarAvailabilityResponse queryCalendarAvailability(const Models::QueryCalendarAvailabilityRequest &request);

      /**
       * @summary 查询订单
       *
       * @param request QueryOrderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrderResponse
       */
      Models::QueryOrderResponse queryOrderWithOptions(const Models::QueryOrderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询订单
       *
       * @param request QueryOrderRequest
       * @return QueryOrderResponse
       */
      Models::QueryOrderResponse queryOrder(const Models::QueryOrderRequest &request);

      /**
       * @summary 分页查询城市行政区划（中英文）
       *
       * @param request SearchCityPageRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchCityPageResponse
       */
      Models::SearchCityPageResponse searchCityPageWithOptions(const Models::SearchCityPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询城市行政区划（中英文）
       *
       * @param request SearchCityPageRequest
       * @return SearchCityPageResponse
       */
      Models::SearchCityPageResponse searchCityPage(const Models::SearchCityPageRequest &request);

      /**
       * @summary 按城市分页查询酒店列表
       *
       * @param request SearchHotelListRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchHotelListResponse
       */
      Models::SearchHotelListResponse searchHotelListWithOptions(const Models::SearchHotelListRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 按城市分页查询酒店列表
       *
       * @param request SearchHotelListRequest
       * @return SearchHotelListResponse
       */
      Models::SearchHotelListResponse searchHotelList(const Models::SearchHotelListRequest &request);

      /**
       * @summary 验价
       *
       * @param tmpReq ValidatePriceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidatePriceResponse
       */
      Models::ValidatePriceResponse validatePriceWithOptions(const Models::ValidatePriceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验价
       *
       * @param request ValidatePriceRequest
       * @return ValidatePriceResponse
       */
      Models::ValidatePriceResponse validatePrice(const Models::ValidatePriceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
