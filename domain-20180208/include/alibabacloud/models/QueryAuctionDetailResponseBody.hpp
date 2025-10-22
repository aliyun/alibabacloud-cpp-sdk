// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUCTIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUCTIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryAuctionDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuctionDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionEndTime, auctionEndTime_);
      DARABONBA_PTR_TO_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_TO_JSON(BookEndTime, bookEndTime_);
      DARABONBA_PTR_TO_JSON(BookedPartner, bookedPartner_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(FailCode, failCode_);
      DARABONBA_PTR_TO_JSON(HighBid, highBid_);
      DARABONBA_PTR_TO_JSON(HighBidder, highBidder_);
      DARABONBA_PTR_TO_JSON(NextValidBid, nextValidBid_);
      DARABONBA_PTR_TO_JSON(PartnerType, partnerType_);
      DARABONBA_PTR_TO_JSON(PayEndTime, payEndTime_);
      DARABONBA_PTR_TO_JSON(PayPrice, payPrice_);
      DARABONBA_PTR_TO_JSON(PayStatus, payStatus_);
      DARABONBA_PTR_TO_JSON(ProduceStatus, produceStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReserveMet, reserveMet_);
      DARABONBA_PTR_TO_JSON(ReservePrice, reservePrice_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransferInPrice, transferInPrice_);
      DARABONBA_PTR_TO_JSON(YourCurrentBid, yourCurrentBid_);
      DARABONBA_PTR_TO_JSON(YourMaxBid, yourMaxBid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuctionDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionEndTime, auctionEndTime_);
      DARABONBA_PTR_FROM_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_FROM_JSON(BookEndTime, bookEndTime_);
      DARABONBA_PTR_FROM_JSON(BookedPartner, bookedPartner_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(FailCode, failCode_);
      DARABONBA_PTR_FROM_JSON(HighBid, highBid_);
      DARABONBA_PTR_FROM_JSON(HighBidder, highBidder_);
      DARABONBA_PTR_FROM_JSON(NextValidBid, nextValidBid_);
      DARABONBA_PTR_FROM_JSON(PartnerType, partnerType_);
      DARABONBA_PTR_FROM_JSON(PayEndTime, payEndTime_);
      DARABONBA_PTR_FROM_JSON(PayPrice, payPrice_);
      DARABONBA_PTR_FROM_JSON(PayStatus, payStatus_);
      DARABONBA_PTR_FROM_JSON(ProduceStatus, produceStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReserveMet, reserveMet_);
      DARABONBA_PTR_FROM_JSON(ReservePrice, reservePrice_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransferInPrice, transferInPrice_);
      DARABONBA_PTR_FROM_JSON(YourCurrentBid, yourCurrentBid_);
      DARABONBA_PTR_FROM_JSON(YourMaxBid, yourMaxBid_);
    };
    QueryAuctionDetailResponseBody() = default ;
    QueryAuctionDetailResponseBody(const QueryAuctionDetailResponseBody &) = default ;
    QueryAuctionDetailResponseBody(QueryAuctionDetailResponseBody &&) = default ;
    QueryAuctionDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuctionDetailResponseBody() = default ;
    QueryAuctionDetailResponseBody& operator=(const QueryAuctionDetailResponseBody &) = default ;
    QueryAuctionDetailResponseBody& operator=(QueryAuctionDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionEndTime_ == nullptr
        && return this->auctionId_ == nullptr && return this->bookEndTime_ == nullptr && return this->bookedPartner_ == nullptr && return this->currency_ == nullptr && return this->deliveryTime_ == nullptr
        && return this->domainName_ == nullptr && return this->domainType_ == nullptr && return this->failCode_ == nullptr && return this->highBid_ == nullptr && return this->highBidder_ == nullptr
        && return this->nextValidBid_ == nullptr && return this->partnerType_ == nullptr && return this->payEndTime_ == nullptr && return this->payPrice_ == nullptr && return this->payStatus_ == nullptr
        && return this->produceStatus_ == nullptr && return this->requestId_ == nullptr && return this->reserveMet_ == nullptr && return this->reservePrice_ == nullptr && return this->status_ == nullptr
        && return this->transferInPrice_ == nullptr && return this->yourCurrentBid_ == nullptr && return this->yourMaxBid_ == nullptr; };
    // auctionEndTime Field Functions 
    bool hasAuctionEndTime() const { return this->auctionEndTime_ != nullptr;};
    void deleteAuctionEndTime() { this->auctionEndTime_ = nullptr;};
    inline int64_t auctionEndTime() const { DARABONBA_PTR_GET_DEFAULT(auctionEndTime_, 0L) };
    inline QueryAuctionDetailResponseBody& setAuctionEndTime(int64_t auctionEndTime) { DARABONBA_PTR_SET_VALUE(auctionEndTime_, auctionEndTime) };


    // auctionId Field Functions 
    bool hasAuctionId() const { return this->auctionId_ != nullptr;};
    void deleteAuctionId() { this->auctionId_ = nullptr;};
    inline string auctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, "") };
    inline QueryAuctionDetailResponseBody& setAuctionId(string auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


    // bookEndTime Field Functions 
    bool hasBookEndTime() const { return this->bookEndTime_ != nullptr;};
    void deleteBookEndTime() { this->bookEndTime_ = nullptr;};
    inline int64_t bookEndTime() const { DARABONBA_PTR_GET_DEFAULT(bookEndTime_, 0L) };
    inline QueryAuctionDetailResponseBody& setBookEndTime(int64_t bookEndTime) { DARABONBA_PTR_SET_VALUE(bookEndTime_, bookEndTime) };


    // bookedPartner Field Functions 
    bool hasBookedPartner() const { return this->bookedPartner_ != nullptr;};
    void deleteBookedPartner() { this->bookedPartner_ = nullptr;};
    inline string bookedPartner() const { DARABONBA_PTR_GET_DEFAULT(bookedPartner_, "") };
    inline QueryAuctionDetailResponseBody& setBookedPartner(string bookedPartner) { DARABONBA_PTR_SET_VALUE(bookedPartner_, bookedPartner) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryAuctionDetailResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deliveryTime Field Functions 
    bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
    void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
    inline int64_t deliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, 0L) };
    inline QueryAuctionDetailResponseBody& setDeliveryTime(int64_t deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryAuctionDetailResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string domainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline QueryAuctionDetailResponseBody& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // failCode Field Functions 
    bool hasFailCode() const { return this->failCode_ != nullptr;};
    void deleteFailCode() { this->failCode_ = nullptr;};
    inline string failCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
    inline QueryAuctionDetailResponseBody& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


    // highBid Field Functions 
    bool hasHighBid() const { return this->highBid_ != nullptr;};
    void deleteHighBid() { this->highBid_ = nullptr;};
    inline float highBid() const { DARABONBA_PTR_GET_DEFAULT(highBid_, 0.0) };
    inline QueryAuctionDetailResponseBody& setHighBid(float highBid) { DARABONBA_PTR_SET_VALUE(highBid_, highBid) };


    // highBidder Field Functions 
    bool hasHighBidder() const { return this->highBidder_ != nullptr;};
    void deleteHighBidder() { this->highBidder_ = nullptr;};
    inline string highBidder() const { DARABONBA_PTR_GET_DEFAULT(highBidder_, "") };
    inline QueryAuctionDetailResponseBody& setHighBidder(string highBidder) { DARABONBA_PTR_SET_VALUE(highBidder_, highBidder) };


    // nextValidBid Field Functions 
    bool hasNextValidBid() const { return this->nextValidBid_ != nullptr;};
    void deleteNextValidBid() { this->nextValidBid_ = nullptr;};
    inline float nextValidBid() const { DARABONBA_PTR_GET_DEFAULT(nextValidBid_, 0.0) };
    inline QueryAuctionDetailResponseBody& setNextValidBid(float nextValidBid) { DARABONBA_PTR_SET_VALUE(nextValidBid_, nextValidBid) };


    // partnerType Field Functions 
    bool hasPartnerType() const { return this->partnerType_ != nullptr;};
    void deletePartnerType() { this->partnerType_ = nullptr;};
    inline string partnerType() const { DARABONBA_PTR_GET_DEFAULT(partnerType_, "") };
    inline QueryAuctionDetailResponseBody& setPartnerType(string partnerType) { DARABONBA_PTR_SET_VALUE(partnerType_, partnerType) };


    // payEndTime Field Functions 
    bool hasPayEndTime() const { return this->payEndTime_ != nullptr;};
    void deletePayEndTime() { this->payEndTime_ = nullptr;};
    inline int64_t payEndTime() const { DARABONBA_PTR_GET_DEFAULT(payEndTime_, 0L) };
    inline QueryAuctionDetailResponseBody& setPayEndTime(int64_t payEndTime) { DARABONBA_PTR_SET_VALUE(payEndTime_, payEndTime) };


    // payPrice Field Functions 
    bool hasPayPrice() const { return this->payPrice_ != nullptr;};
    void deletePayPrice() { this->payPrice_ = nullptr;};
    inline float payPrice() const { DARABONBA_PTR_GET_DEFAULT(payPrice_, 0.0) };
    inline QueryAuctionDetailResponseBody& setPayPrice(float payPrice) { DARABONBA_PTR_SET_VALUE(payPrice_, payPrice) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline string payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, "") };
    inline QueryAuctionDetailResponseBody& setPayStatus(string payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // produceStatus Field Functions 
    bool hasProduceStatus() const { return this->produceStatus_ != nullptr;};
    void deleteProduceStatus() { this->produceStatus_ = nullptr;};
    inline string produceStatus() const { DARABONBA_PTR_GET_DEFAULT(produceStatus_, "") };
    inline QueryAuctionDetailResponseBody& setProduceStatus(string produceStatus) { DARABONBA_PTR_SET_VALUE(produceStatus_, produceStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAuctionDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserveMet Field Functions 
    bool hasReserveMet() const { return this->reserveMet_ != nullptr;};
    void deleteReserveMet() { this->reserveMet_ = nullptr;};
    inline bool reserveMet() const { DARABONBA_PTR_GET_DEFAULT(reserveMet_, false) };
    inline QueryAuctionDetailResponseBody& setReserveMet(bool reserveMet) { DARABONBA_PTR_SET_VALUE(reserveMet_, reserveMet) };


    // reservePrice Field Functions 
    bool hasReservePrice() const { return this->reservePrice_ != nullptr;};
    void deleteReservePrice() { this->reservePrice_ = nullptr;};
    inline float reservePrice() const { DARABONBA_PTR_GET_DEFAULT(reservePrice_, 0.0) };
    inline QueryAuctionDetailResponseBody& setReservePrice(float reservePrice) { DARABONBA_PTR_SET_VALUE(reservePrice_, reservePrice) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryAuctionDetailResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transferInPrice Field Functions 
    bool hasTransferInPrice() const { return this->transferInPrice_ != nullptr;};
    void deleteTransferInPrice() { this->transferInPrice_ = nullptr;};
    inline float transferInPrice() const { DARABONBA_PTR_GET_DEFAULT(transferInPrice_, 0.0) };
    inline QueryAuctionDetailResponseBody& setTransferInPrice(float transferInPrice) { DARABONBA_PTR_SET_VALUE(transferInPrice_, transferInPrice) };


    // yourCurrentBid Field Functions 
    bool hasYourCurrentBid() const { return this->yourCurrentBid_ != nullptr;};
    void deleteYourCurrentBid() { this->yourCurrentBid_ = nullptr;};
    inline float yourCurrentBid() const { DARABONBA_PTR_GET_DEFAULT(yourCurrentBid_, 0.0) };
    inline QueryAuctionDetailResponseBody& setYourCurrentBid(float yourCurrentBid) { DARABONBA_PTR_SET_VALUE(yourCurrentBid_, yourCurrentBid) };


    // yourMaxBid Field Functions 
    bool hasYourMaxBid() const { return this->yourMaxBid_ != nullptr;};
    void deleteYourMaxBid() { this->yourMaxBid_ = nullptr;};
    inline float yourMaxBid() const { DARABONBA_PTR_GET_DEFAULT(yourMaxBid_, 0.0) };
    inline QueryAuctionDetailResponseBody& setYourMaxBid(float yourMaxBid) { DARABONBA_PTR_SET_VALUE(yourMaxBid_, yourMaxBid) };


  protected:
    std::shared_ptr<int64_t> auctionEndTime_ = nullptr;
    std::shared_ptr<string> auctionId_ = nullptr;
    std::shared_ptr<int64_t> bookEndTime_ = nullptr;
    std::shared_ptr<string> bookedPartner_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<int64_t> deliveryTime_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> domainType_ = nullptr;
    std::shared_ptr<string> failCode_ = nullptr;
    std::shared_ptr<float> highBid_ = nullptr;
    std::shared_ptr<string> highBidder_ = nullptr;
    std::shared_ptr<float> nextValidBid_ = nullptr;
    std::shared_ptr<string> partnerType_ = nullptr;
    std::shared_ptr<int64_t> payEndTime_ = nullptr;
    std::shared_ptr<float> payPrice_ = nullptr;
    std::shared_ptr<string> payStatus_ = nullptr;
    std::shared_ptr<string> produceStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> reserveMet_ = nullptr;
    std::shared_ptr<float> reservePrice_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<float> transferInPrice_ = nullptr;
    std::shared_ptr<float> yourCurrentBid_ = nullptr;
    std::shared_ptr<float> yourMaxBid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
