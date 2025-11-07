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
       * @summary 账号资金流水
       *
       * @param request AccountFlowListRequest
       * @param headers AccountFlowListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AccountFlowListResponse
       */
      Models::AccountFlowListResponse accountFlowListWithOptions(const Models::AccountFlowListRequest &request, const Models::AccountFlowListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 账号资金流水
       *
       * @param request AccountFlowListRequest
       * @return AccountFlowListResponse
       */
      Models::AccountFlowListResponse accountFlowList(const Models::AccountFlowListRequest &request);

      /**
       * @summary Ancillary - Suggestion
       *
       * @description search ancillary for selected solution, you should enter the solution_id returned by enrich.
       *
       * @param request AncillarySuggestRequest
       * @param headers AncillarySuggestHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AncillarySuggestResponse
       */
      Models::AncillarySuggestResponse ancillarySuggestWithOptions(const Models::AncillarySuggestRequest &request, const Models::AncillarySuggestHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ancillary - Suggestion
       *
       * @description search ancillary for selected solution, you should enter the solution_id returned by enrich.
       *
       * @param request AncillarySuggestRequest
       * @return AncillarySuggestResponse
       */
      Models::AncillarySuggestResponse ancillarySuggest(const Models::AncillarySuggestRequest &request);

      /**
       * @summary Transaction-Reservation
       *
       * @description Enter solution_id returned by enrich, ancillary_id returned by ancillarySuggest(optional), passengers information and contact information, the book interface will create an order wait for pay.
       * There are two issues should be noticed:
       * 1. the solution_id must be processed by pricing.
       * 2. the order created by book interface should be pay within 30 minutes, otherwise the order will be closed.
       *
       * @param tmpReq BookRequest
       * @param headers BookHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return BookResponse
       */
      Models::BookResponse bookWithOptions(const Models::BookRequest &tmpReq, const Models::BookHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transaction-Reservation
       *
       * @description Enter solution_id returned by enrich, ancillary_id returned by ancillarySuggest(optional), passengers information and contact information, the book interface will create an order wait for pay.
       * There are two issues should be noticed:
       * 1. the solution_id must be processed by pricing.
       * 2. the order created by book interface should be pay within 30 minutes, otherwise the order will be closed.
       *
       * @param request BookRequest
       * @return BookResponse
       */
      Models::BookResponse book(const Models::BookRequest &request);

      /**
       * @summary Transaction - Unpaid Cancellation
       *
       * @description close an unpaid order
       *
       * @param request CancelRequest
       * @param headers CancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelResponse
       */
      Models::CancelResponse cancelWithOptions(const Models::CancelRequest &request, const Models::CancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transaction - Unpaid Cancellation
       *
       * @description close an unpaid order
       *
       * @param request CancelRequest
       * @return CancelResponse
       */
      Models::CancelResponse cancel(const Models::CancelRequest &request);

      /**
       * @summary 改签-Apply
       *
       * @param tmpReq ChangeApplyRequest
       * @param headers ChangeApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeApplyResponse
       */
      Models::ChangeApplyResponse changeApplyWithOptions(const Models::ChangeApplyRequest &tmpReq, const Models::ChangeApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 改签-Apply
       *
       * @param request ChangeApplyRequest
       * @return ChangeApplyResponse
       */
      Models::ChangeApplyResponse changeApply(const Models::ChangeApplyRequest &request);

      /**
       * @summary 改签-取消
       *
       * @param request ChangeCancelRequest
       * @param headers ChangeCancelHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeCancelResponse
       */
      Models::ChangeCancelResponse changeCancelWithOptions(const Models::ChangeCancelRequest &request, const Models::ChangeCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 改签-取消
       *
       * @param request ChangeCancelRequest
       * @return ChangeCancelResponse
       */
      Models::ChangeCancelResponse changeCancel(const Models::ChangeCancelRequest &request);

      /**
       * @summary 改签-确认
       *
       * @param request ChangeConfirmRequest
       * @param headers ChangeConfirmHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeConfirmResponse
       */
      Models::ChangeConfirmResponse changeConfirmWithOptions(const Models::ChangeConfirmRequest &request, const Models::ChangeConfirmHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 改签-确认
       *
       * @param request ChangeConfirmRequest
       * @return ChangeConfirmResponse
       */
      Models::ChangeConfirmResponse changeConfirm(const Models::ChangeConfirmRequest &request);

      /**
       * @summary 改签-Detail
       *
       * @param request ChangeDetailRequest
       * @param headers ChangeDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDetailResponse
       */
      Models::ChangeDetailResponse changeDetailWithOptions(const Models::ChangeDetailRequest &request, const Models::ChangeDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 改签-Detail
       *
       * @param request ChangeDetailRequest
       * @return ChangeDetailResponse
       */
      Models::ChangeDetailResponse changeDetail(const Models::ChangeDetailRequest &request);

      /**
       * @summary 改签单列表-关于买家账号
       *
       * @param request ChangeDetailListOfBuyerRequest
       * @param headers ChangeDetailListOfBuyerHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDetailListOfBuyerResponse
       */
      Models::ChangeDetailListOfBuyerResponse changeDetailListOfBuyerWithOptions(const Models::ChangeDetailListOfBuyerRequest &request, const Models::ChangeDetailListOfBuyerHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 改签单列表-关于买家账号
       *
       * @param request ChangeDetailListOfBuyerRequest
       * @return ChangeDetailListOfBuyerResponse
       */
      Models::ChangeDetailListOfBuyerResponse changeDetailListOfBuyer(const Models::ChangeDetailListOfBuyerRequest &request);

      /**
       * @summary 改签单列表-关于正向订单
       *
       * @param request ChangeDetailListOfOrderNumRequest
       * @param headers ChangeDetailListOfOrderNumHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeDetailListOfOrderNumResponse
       */
      Models::ChangeDetailListOfOrderNumResponse changeDetailListOfOrderNumWithOptions(const Models::ChangeDetailListOfOrderNumRequest &request, const Models::ChangeDetailListOfOrderNumHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 改签单列表-关于正向订单
       *
       * @param request ChangeDetailListOfOrderNumRequest
       * @return ChangeDetailListOfOrderNumResponse
       */
      Models::ChangeDetailListOfOrderNumResponse changeDetailListOfOrderNum(const Models::ChangeDetailListOfOrderNumRequest &request);

      /**
       * @summary 数据收集-低价航班信息
       *
       * @param tmpReq CollectFlightLowestPriceRequest
       * @param headers CollectFlightLowestPriceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CollectFlightLowestPriceResponse
       */
      Models::CollectFlightLowestPriceResponse collectFlightLowestPriceWithOptions(const Models::CollectFlightLowestPriceRequest &tmpReq, const Models::CollectFlightLowestPriceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据收集-低价航班信息
       *
       * @param request CollectFlightLowestPriceRequest
       * @return CollectFlightLowestPriceResponse
       */
      Models::CollectFlightLowestPriceResponse collectFlightLowestPrice(const Models::CollectFlightLowestPriceRequest &request);

      /**
       * @summary Search-Enrich
       *
       * @description Choose either `solution_id` or `journey_param_list` in the parameters, and `solution_id` needs to be obtained from the Search interface.
       *
       * @param tmpReq EnrichRequest
       * @param headers EnrichHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnrichResponse
       */
      Models::EnrichResponse enrichWithOptions(const Models::EnrichRequest &tmpReq, const Models::EnrichHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Search-Enrich
       *
       * @description Choose either `solution_id` or `journey_param_list` in the parameters, and `solution_id` needs to be obtained from the Search interface.
       *
       * @param request EnrichRequest
       * @return EnrichResponse
       */
      Models::EnrichResponse enrich(const Models::EnrichRequest &request);

      /**
       * @summary 附件上传
       *
       * @param request FileUploadRequest
       * @param headers FileUploadHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FileUploadResponse
       */
      Models::FileUploadResponse fileUploadWithOptions(const Models::FileUploadRequest &request, const Models::FileUploadHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 附件上传
       *
       * @param request FileUploadRequest
       * @return FileUploadResponse
       */
      Models::FileUploadResponse fileUpload(const Models::FileUploadRequest &request);

      /**
       * @summary 航变信息-关于订单
       *
       * @param request FlightChangeOfOrderRequest
       * @param headers FlightChangeOfOrderHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return FlightChangeOfOrderResponse
       */
      Models::FlightChangeOfOrderResponse flightChangeOfOrderWithOptions(const Models::FlightChangeOfOrderRequest &request, const Models::FlightChangeOfOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航变信息-关于订单
       *
       * @param request FlightChangeOfOrderRequest
       * @return FlightChangeOfOrderResponse
       */
      Models::FlightChangeOfOrderResponse flightChangeOfOrder(const Models::FlightChangeOfOrderRequest &request);

      /**
       * @summary Get Token
       *
       * @param request GetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Token
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary 航程行李直挂
       *
       * @param tmpReq LuggageDirectRequest
       * @param headers LuggageDirectHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return LuggageDirectResponse
       */
      Models::LuggageDirectResponse luggageDirectWithOptions(const Models::LuggageDirectRequest &tmpReq, const Models::LuggageDirectHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航程行李直挂
       *
       * @param request LuggageDirectRequest
       * @return LuggageDirectResponse
       */
      Models::LuggageDirectResponse luggageDirect(const Models::LuggageDirectRequest &request);

      /**
       * @summary Trade-Order Details
       *
       * @description query order detail
       *
       * @param request OrderDetailRequest
       * @param headers OrderDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OrderDetailResponse
       */
      Models::OrderDetailResponse orderDetailWithOptions(const Models::OrderDetailRequest &request, const Models::OrderDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Trade-Order Details
       *
       * @description query order detail
       *
       * @param request OrderDetailRequest
       * @return OrderDetailResponse
       */
      Models::OrderDetailResponse orderDetail(const Models::OrderDetailRequest &request);

      /**
       * @summary Trade - Order List
       *
       * @description query order list
       *
       * @param request OrderListRequest
       * @param headers OrderListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OrderListResponse
       */
      Models::OrderListResponse orderListWithOptions(const Models::OrderListRequest &request, const Models::OrderListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Trade - Order List
       *
       * @description query order list
       *
       * @param request OrderListRequest
       * @return OrderListResponse
       */
      Models::OrderListResponse orderList(const Models::OrderListRequest &request);

      /**
       * @summary Trade - Seat and Price Verification
       *
       * @description Check is price and remaining seats of solution you selected has changed. You should enter the solution_id returned by enrich.
       *
       * @param request PricingRequest
       * @param headers PricingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PricingResponse
       */
      Models::PricingResponse pricingWithOptions(const Models::PricingRequest &request, const Models::PricingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Trade - Seat and Price Verification
       *
       * @description Check is price and remaining seats of solution you selected has changed. You should enter the solution_id returned by enrich.
       *
       * @param request PricingRequest
       * @return PricingResponse
       */
      Models::PricingResponse pricing(const Models::PricingRequest &request);

      /**
       * @summary 退票-申请
       *
       * @description Apply for a refund and generate a refund order.
       *
       * @param tmpReq RefundApplyRequest
       * @param headers RefundApplyHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundApplyResponse
       */
      Models::RefundApplyResponse refundApplyWithOptions(const Models::RefundApplyRequest &tmpReq, const Models::RefundApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 退票-申请
       *
       * @description Apply for a refund and generate a refund order.
       *
       * @param request RefundApplyRequest
       * @return RefundApplyResponse
       */
      Models::RefundApplyResponse refundApply(const Models::RefundApplyRequest &request);

      /**
       * @summary Refund - Detail
       *
       * @description Query refund order detail.
       *
       * @param request RefundDetailRequest
       * @param headers RefundDetailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundDetailResponse
       */
      Models::RefundDetailResponse refundDetailWithOptions(const Models::RefundDetailRequest &request, const Models::RefundDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refund - Detail
       *
       * @description Query refund order detail.
       *
       * @param request RefundDetailRequest
       * @return RefundDetailResponse
       */
      Models::RefundDetailResponse refundDetail(const Models::RefundDetailRequest &request);

      /**
       * @summary Refund - Detail List
       *
       * @description Query refund order detail.
       *
       * @param request RefundDetailListRequest
       * @param headers RefundDetailListHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundDetailListResponse
       */
      Models::RefundDetailListResponse refundDetailListWithOptions(const Models::RefundDetailListRequest &request, const Models::RefundDetailListHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refund - Detail List
       *
       * @description Query refund order detail.
       *
       * @param request RefundDetailListRequest
       * @return RefundDetailListResponse
       */
      Models::RefundDetailListResponse refundDetailList(const Models::RefundDetailListRequest &request);

      /**
       * @summary search
       *
       * @description Enter the information of departure, arrival, departure date, passenger number and cabin, return the lowest price for each flight.
       *
       * @param tmpReq SearchRequest
       * @param headers SearchHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchResponse
       */
      Models::SearchResponse searchWithOptions(const Models::SearchRequest &tmpReq, const Models::SearchHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary search
       *
       * @description Enter the information of departure, arrival, departure date, passenger number and cabin, return the lowest price for each flight.
       *
       * @param request SearchRequest
       * @return SearchResponse
       */
      Models::SearchResponse search(const Models::SearchRequest &request);

      /**
       * @summary Transaction - Payment and Ticket Issuance
       *
       * @param request TicketingRequest
       * @param headers TicketingHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketingResponse
       */
      Models::TicketingResponse ticketingWithOptions(const Models::TicketingRequest &request, const Models::TicketingHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transaction - Payment and Ticket Issuance
       *
       * @param request TicketingRequest
       * @return TicketingResponse
       */
      Models::TicketingResponse ticketing(const Models::TicketingRequest &request);

      /**
       * @summary Transaction - Pre-payment verification
       *
       * @description Pre-check for Ticketing, this interface is optional to use.
       *
       * @param request TicketingCheckRequest
       * @param headers TicketingCheckHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TicketingCheckResponse
       */
      Models::TicketingCheckResponse ticketingCheckWithOptions(const Models::TicketingCheckRequest &request, const Models::TicketingCheckHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transaction - Pre-payment verification
       *
       * @description Pre-check for Ticketing, this interface is optional to use.
       *
       * @param request TicketingCheckRequest
       * @return TicketingCheckResponse
       */
      Models::TicketingCheckResponse ticketingCheck(const Models::TicketingCheckRequest &request);

      /**
       * @summary 航程过境签
       *
       * @param tmpReq TransitVisaRequest
       * @param headers TransitVisaHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransitVisaResponse
       */
      Models::TransitVisaResponse transitVisaWithOptions(const Models::TransitVisaRequest &tmpReq, const Models::TransitVisaHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 航程过境签
       *
       * @param request TransitVisaRequest
       * @return TransitVisaResponse
       */
      Models::TransitVisaResponse transitVisa(const Models::TransitVisaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
