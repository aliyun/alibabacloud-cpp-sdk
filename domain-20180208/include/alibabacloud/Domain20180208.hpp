// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DOMAIN20180208_HPP_
#define ALIBABACLOUD_DOMAIN20180208_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Domain20180208Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Domain20180208.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AcceptDemandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AcceptDemandResponse
       */
      Models::AcceptDemandResponse acceptDemandWithOptions(const Models::AcceptDemandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AcceptDemandRequest
       * @return AcceptDemandResponse
       */
      Models::AcceptDemandResponse acceptDemand(const Models::AcceptDemandRequest &request);

      /**
       * @summary 闯入接口
       *
       * @param tmpReq BatchIntrudeDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchIntrudeDomainsResponse
       */
      Models::BatchIntrudeDomainsResponse batchIntrudeDomainsWithOptions(const Models::BatchIntrudeDomainsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 闯入接口
       *
       * @param request BatchIntrudeDomainsRequest
       * @return BatchIntrudeDomainsResponse
       */
      Models::BatchIntrudeDomainsResponse batchIntrudeDomains(const Models::BatchIntrudeDomainsRequest &request);

      /**
       * @summary 根据OutBizId（批量）查看带价PUSH状态，通常用于超时场景补偿
       *
       * @param tmpReq BatchQueryPushStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchQueryPushStatusResponse
       */
      Models::BatchQueryPushStatusResponse batchQueryPushStatusWithOptions(const Models::BatchQueryPushStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据OutBizId（批量）查看带价PUSH状态，通常用于超时场景补偿
       *
       * @param request BatchQueryPushStatusRequest
       * @return BatchQueryPushStatusResponse
       */
      Models::BatchQueryPushStatusResponse batchQueryPushStatus(const Models::BatchQueryPushStatusRequest &request);

      /**
       * @summary 批量撤回带价PUSH
       *
       * @param tmpReq BatchRecallPushRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRecallPushResponse
       */
      Models::BatchRecallPushResponse batchRecallPushWithOptions(const Models::BatchRecallPushRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量撤回带价PUSH
       *
       * @param request BatchRecallPushRequest
       * @return BatchRecallPushResponse
       */
      Models::BatchRecallPushResponse batchRecallPush(const Models::BatchRecallPushRequest &request);

      /**
       * @param request BidDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BidDomainResponse
       */
      Models::BidDomainResponse bidDomainWithOptions(const Models::BidDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BidDomainRequest
       * @return BidDomainResponse
       */
      Models::BidDomainResponse bidDomain(const Models::BidDomainRequest &request);

      /**
       * @param request ChangeAuctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeAuctionResponse
       */
      Models::ChangeAuctionResponse changeAuctionWithOptions(const Models::ChangeAuctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeAuctionRequest
       * @return ChangeAuctionResponse
       */
      Models::ChangeAuctionResponse changeAuction(const Models::ChangeAuctionRequest &request);

      /**
       * @summary 校验域名在售状态
       *
       * @param request CheckDomainStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDomainStatusResponse
       */
      Models::CheckDomainStatusResponse checkDomainStatusWithOptions(const Models::CheckDomainStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验域名在售状态
       *
       * @param request CheckDomainStatusRequest
       * @return CheckDomainStatusResponse
       */
      Models::CheckDomainStatusResponse checkDomainStatus(const Models::CheckDomainStatusRequest &request);

      /**
       * @summary 校验域名带价PUSH接收方可接收
       *
       * @param request CheckPushReceiverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckPushReceiverResponse
       */
      Models::CheckPushReceiverResponse checkPushReceiverWithOptions(const Models::CheckPushReceiverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 校验域名带价PUSH接收方可接收
       *
       * @param request CheckPushReceiverRequest
       * @return CheckPushReceiverResponse
       */
      Models::CheckPushReceiverResponse checkPushReceiver(const Models::CheckPushReceiverRequest &request);

      /**
       * @summary 一口价严选询价接口
       *
       * @param request CheckSelectedDomainStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSelectedDomainStatusResponse
       */
      Models::CheckSelectedDomainStatusResponse checkSelectedDomainStatusWithOptions(const Models::CheckSelectedDomainStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 一口价严选询价接口
       *
       * @param request CheckSelectedDomainStatusRequest
       * @return CheckSelectedDomainStatusResponse
       */
      Models::CheckSelectedDomainStatusResponse checkSelectedDomainStatus(const Models::CheckSelectedDomainStatusRequest &request);

      /**
       * @summary 创建一口价需求单
       *
       * @param request CreateFixedPriceDemandOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFixedPriceDemandOrderResponse
       */
      Models::CreateFixedPriceDemandOrderResponse createFixedPriceDemandOrderWithOptions(const Models::CreateFixedPriceDemandOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一口价需求单
       *
       * @param request CreateFixedPriceDemandOrderRequest
       * @return CreateFixedPriceDemandOrderResponse
       */
      Models::CreateFixedPriceDemandOrderResponse createFixedPriceDemandOrder(const Models::CreateFixedPriceDemandOrderRequest &request);

      /**
       * @summary 一口价严选下单购买接口，阿里云账户余额直接扣费
       *
       * @param request CreateFixedPriceSelectedOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFixedPriceSelectedOrderResponse
       */
      Models::CreateFixedPriceSelectedOrderResponse createFixedPriceSelectedOrderWithOptions(const Models::CreateFixedPriceSelectedOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 一口价严选下单购买接口，阿里云账户余额直接扣费
       *
       * @param request CreateFixedPriceSelectedOrderRequest
       * @return CreateFixedPriceSelectedOrderResponse
       */
      Models::CreateFixedPriceSelectedOrderResponse createFixedPriceSelectedOrder(const Models::CreateFixedPriceSelectedOrderRequest &request);

      /**
       * @param request FailDemandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FailDemandResponse
       */
      Models::FailDemandResponse failDemandWithOptions(const Models::FailDemandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FailDemandRequest
       * @return FailDemandResponse
       */
      Models::FailDemandResponse failDemand(const Models::FailDemandRequest &request);

      /**
       * @param request FinishDemandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FinishDemandResponse
       */
      Models::FinishDemandResponse finishDemandWithOptions(const Models::FinishDemandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FinishDemandRequest
       * @return FinishDemandResponse
       */
      Models::FinishDemandResponse finishDemand(const Models::FinishDemandRequest &request);

      /**
       * @param request GetIntlDomainDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIntlDomainDownloadUrlResponse
       */
      Models::GetIntlDomainDownloadUrlResponse getIntlDomainDownloadUrlWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetIntlDomainDownloadUrlResponse
       */
      Models::GetIntlDomainDownloadUrlResponse getIntlDomainDownloadUrl();

      /**
       * @param request GetReserveDomainUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReserveDomainUrlResponse
       */
      Models::GetReserveDomainUrlResponse getReserveDomainUrlWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return GetReserveDomainUrlResponse
       */
      Models::GetReserveDomainUrlResponse getReserveDomainUrl();

      /**
       * @summary 购买国际站预释放域名
       *
       * @param request PurchaseIntlDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PurchaseIntlDomainResponse
       */
      Models::PurchaseIntlDomainResponse purchaseIntlDomainWithOptions(const Models::PurchaseIntlDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 购买国际站预释放域名
       *
       * @param request PurchaseIntlDomainRequest
       * @return PurchaseIntlDomainResponse
       */
      Models::PurchaseIntlDomainResponse purchaseIntlDomain(const Models::PurchaseIntlDomainRequest &request);

      /**
       * @summary 发布域名PUSH，目前只支持0元PUSH
       *
       * @param tmpReq PushDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushDomainsResponse
       */
      Models::PushDomainsResponse pushDomainsWithOptions(const Models::PushDomainsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布域名PUSH，目前只支持0元PUSH
       *
       * @param request PushDomainsRequest
       * @return PushDomainsResponse
       */
      Models::PushDomainsResponse pushDomains(const Models::PushDomainsRequest &request);

      /**
       * @param request QueryAuctionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAuctionDetailResponse
       */
      Models::QueryAuctionDetailResponse queryAuctionDetailWithOptions(const Models::QueryAuctionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAuctionDetailRequest
       * @return QueryAuctionDetailResponse
       */
      Models::QueryAuctionDetailResponse queryAuctionDetail(const Models::QueryAuctionDetailRequest &request);

      /**
       * @param request QueryAuctionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAuctionsResponse
       */
      Models::QueryAuctionsResponse queryAuctionsWithOptions(const Models::QueryAuctionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAuctionsRequest
       * @return QueryAuctionsResponse
       */
      Models::QueryAuctionsResponse queryAuctions(const Models::QueryAuctionsRequest &request);

      /**
       * @param request QueryBidRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBidRecordsResponse
       */
      Models::QueryBidRecordsResponse queryBidRecordsWithOptions(const Models::QueryBidRecordsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryBidRecordsRequest
       * @return QueryBidRecordsResponse
       */
      Models::QueryBidRecordsResponse queryBidRecords(const Models::QueryBidRecordsRequest &request);

      /**
       * @param request QueryBookingDomainInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBookingDomainInfoResponse
       */
      Models::QueryBookingDomainInfoResponse queryBookingDomainInfoWithOptions(const Models::QueryBookingDomainInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryBookingDomainInfoRequest
       * @return QueryBookingDomainInfoResponse
       */
      Models::QueryBookingDomainInfoResponse queryBookingDomainInfo(const Models::QueryBookingDomainInfoRequest &request);

      /**
       * @summary 查询回购订单列表
       *
       * @param request QueryBrokerDemandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBrokerDemandResponse
       */
      Models::QueryBrokerDemandResponse queryBrokerDemandWithOptions(const Models::QueryBrokerDemandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询回购订单列表
       *
       * @param request QueryBrokerDemandRequest
       * @return QueryBrokerDemandResponse
       */
      Models::QueryBrokerDemandResponse queryBrokerDemand(const Models::QueryBrokerDemandRequest &request);

      /**
       * @param request QueryBrokerDemandRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryBrokerDemandRecordResponse
       */
      Models::QueryBrokerDemandRecordResponse queryBrokerDemandRecordWithOptions(const Models::QueryBrokerDemandRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryBrokerDemandRecordRequest
       * @return QueryBrokerDemandRecordResponse
       */
      Models::QueryBrokerDemandRecordResponse queryBrokerDemandRecord(const Models::QueryBrokerDemandRecordRequest &request);

      /**
       * @param request QueryDomainTransferStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDomainTransferStatusResponse
       */
      Models::QueryDomainTransferStatusResponse queryDomainTransferStatusWithOptions(const Models::QueryDomainTransferStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryDomainTransferStatusRequest
       * @return QueryDomainTransferStatusResponse
       */
      Models::QueryDomainTransferStatusResponse queryDomainTransferStatus(const Models::QueryDomainTransferStatusRequest &request);

      /**
       * @summary 查询汇率
       *
       * @param request QueryExchangeRateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryExchangeRateResponse
       */
      Models::QueryExchangeRateResponse queryExchangeRateWithOptions(const Models::QueryExchangeRateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询汇率
       *
       * @param request QueryExchangeRateRequest
       * @return QueryExchangeRateResponse
       */
      Models::QueryExchangeRateResponse queryExchangeRate(const Models::QueryExchangeRateRequest &request);

      /**
       * @summary 查询竞价商品详情
       *
       * @param request QueryExportAuctionDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryExportAuctionDetailResponse
       */
      Models::QueryExportAuctionDetailResponse queryExportAuctionDetailWithOptions(const Models::QueryExportAuctionDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询竞价商品详情
       *
       * @param request QueryExportAuctionDetailRequest
       * @return QueryExportAuctionDetailResponse
       */
      Models::QueryExportAuctionDetailResponse queryExportAuctionDetail(const Models::QueryExportAuctionDetailRequest &request);

      /**
       * @summary 查询导出的抢注域名
       *
       * @param request QueryExportDomainExpireSnatchsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryExportDomainExpireSnatchsResponse
       */
      Models::QueryExportDomainExpireSnatchsResponse queryExportDomainExpireSnatchsWithOptions(const Models::QueryExportDomainExpireSnatchsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询导出的抢注域名
       *
       * @param request QueryExportDomainExpireSnatchsRequest
       * @return QueryExportDomainExpireSnatchsResponse
       */
      Models::QueryExportDomainExpireSnatchsResponse queryExportDomainExpireSnatchs(const Models::QueryExportDomainExpireSnatchsRequest &request);

      /**
       * @param request QueryPurchasedDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPurchasedDomainsResponse
       */
      Models::QueryPurchasedDomainsResponse queryPurchasedDomainsWithOptions(const Models::QueryPurchasedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryPurchasedDomainsRequest
       * @return QueryPurchasedDomainsResponse
       */
      Models::QueryPurchasedDomainsResponse queryPurchasedDomains(const Models::QueryPurchasedDomainsRequest &request);

      /**
       * @param request RecordDemandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecordDemandResponse
       */
      Models::RecordDemandResponse recordDemandWithOptions(const Models::RecordDemandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecordDemandRequest
       * @return RecordDemandResponse
       */
      Models::RecordDemandResponse recordDemand(const Models::RecordDemandRequest &request);

      /**
       * @param request RefuseDemandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefuseDemandResponse
       */
      Models::RefuseDemandResponse refuseDemandWithOptions(const Models::RefuseDemandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RefuseDemandRequest
       * @return RefuseDemandResponse
       */
      Models::RefuseDemandResponse refuseDemand(const Models::RefuseDemandRequest &request);

      /**
       * @param request RequestPayDemandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RequestPayDemandResponse
       */
      Models::RequestPayDemandResponse requestPayDemandWithOptions(const Models::RequestPayDemandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RequestPayDemandRequest
       * @return RequestPayDemandResponse
       */
      Models::RequestPayDemandResponse requestPayDemand(const Models::RequestPayDemandRequest &request);

      /**
       * @param request ReserveDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReserveDomainResponse
       */
      Models::ReserveDomainResponse reserveDomainWithOptions(const Models::ReserveDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReserveDomainRequest
       * @return ReserveDomainResponse
       */
      Models::ReserveDomainResponse reserveDomain(const Models::ReserveDomainRequest &request);

      /**
       * @param request ReserveIntlDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReserveIntlDomainResponse
       */
      Models::ReserveIntlDomainResponse reserveIntlDomainWithOptions(const Models::ReserveIntlDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ReserveIntlDomainRequest
       * @return ReserveIntlDomainResponse
       */
      Models::ReserveIntlDomainResponse reserveIntlDomain(const Models::ReserveIntlDomainRequest &request);

      /**
       * @summary 严选列表导出，明日凌晨2点前生成文件，导出凌晨1点前所有在售严选域名
       *
       * @param request SelectedDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SelectedDomainListResponse
       */
      Models::SelectedDomainListResponse selectedDomainListWithOptions(const Models::SelectedDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 严选列表导出，明日凌晨2点前生成文件，导出凌晨1点前所有在售严选域名
       *
       * @param request SelectedDomainListRequest
       * @return SelectedDomainListResponse
       */
      Models::SelectedDomainListResponse selectedDomainList(const Models::SelectedDomainListRequest &request);

      /**
       * @summary 提交采购信息
       *
       * @param request SubmitPurchaseInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitPurchaseInfoResponse
       */
      Models::SubmitPurchaseInfoResponse submitPurchaseInfoWithOptions(const Models::SubmitPurchaseInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交采购信息
       *
       * @param request SubmitPurchaseInfoRequest
       * @return SubmitPurchaseInfoResponse
       */
      Models::SubmitPurchaseInfoResponse submitPurchaseInfo(const Models::SubmitPurchaseInfoRequest &request);

      /**
       * @summary 合作方同步报价
       *
       * @param request UpdatePartnerReservePriceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePartnerReservePriceResponse
       */
      Models::UpdatePartnerReservePriceResponse updatePartnerReservePriceWithOptions(const Models::UpdatePartnerReservePriceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 合作方同步报价
       *
       * @param request UpdatePartnerReservePriceRequest
       * @return UpdatePartnerReservePriceResponse
       */
      Models::UpdatePartnerReservePriceResponse updatePartnerReservePrice(const Models::UpdatePartnerReservePriceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
