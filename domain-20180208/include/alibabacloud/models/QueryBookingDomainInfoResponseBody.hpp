// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBOOKINGDOMAININFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBOOKINGDOMAININFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBookingDomainInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBookingDomainInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_TO_JSON(BookEndTime, bookEndTime_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(MaxBid, maxBid_);
      DARABONBA_PTR_TO_JSON(PartnerType, partnerType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnatchNo, snatchNo_);
      DARABONBA_PTR_TO_JSON(TransferInPrice, transferInPrice_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBookingDomainInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_FROM_JSON(BookEndTime, bookEndTime_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(MaxBid, maxBid_);
      DARABONBA_PTR_FROM_JSON(PartnerType, partnerType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnatchNo, snatchNo_);
      DARABONBA_PTR_FROM_JSON(TransferInPrice, transferInPrice_);
    };
    QueryBookingDomainInfoResponseBody() = default ;
    QueryBookingDomainInfoResponseBody(const QueryBookingDomainInfoResponseBody &) = default ;
    QueryBookingDomainInfoResponseBody(QueryBookingDomainInfoResponseBody &&) = default ;
    QueryBookingDomainInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBookingDomainInfoResponseBody() = default ;
    QueryBookingDomainInfoResponseBody& operator=(const QueryBookingDomainInfoResponseBody &) = default ;
    QueryBookingDomainInfoResponseBody& operator=(QueryBookingDomainInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionId_ == nullptr
        && return this->bookEndTime_ == nullptr && return this->currency_ == nullptr && return this->maxBid_ == nullptr && return this->partnerType_ == nullptr && return this->requestId_ == nullptr
        && return this->snatchNo_ == nullptr && return this->transferInPrice_ == nullptr; };
    // auctionId Field Functions 
    bool hasAuctionId() const { return this->auctionId_ != nullptr;};
    void deleteAuctionId() { this->auctionId_ = nullptr;};
    inline int32_t auctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, 0) };
    inline QueryBookingDomainInfoResponseBody& setAuctionId(int32_t auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


    // bookEndTime Field Functions 
    bool hasBookEndTime() const { return this->bookEndTime_ != nullptr;};
    void deleteBookEndTime() { this->bookEndTime_ = nullptr;};
    inline int64_t bookEndTime() const { DARABONBA_PTR_GET_DEFAULT(bookEndTime_, 0L) };
    inline QueryBookingDomainInfoResponseBody& setBookEndTime(int64_t bookEndTime) { DARABONBA_PTR_SET_VALUE(bookEndTime_, bookEndTime) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryBookingDomainInfoResponseBody& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // maxBid Field Functions 
    bool hasMaxBid() const { return this->maxBid_ != nullptr;};
    void deleteMaxBid() { this->maxBid_ = nullptr;};
    inline float maxBid() const { DARABONBA_PTR_GET_DEFAULT(maxBid_, 0.0) };
    inline QueryBookingDomainInfoResponseBody& setMaxBid(float maxBid) { DARABONBA_PTR_SET_VALUE(maxBid_, maxBid) };


    // partnerType Field Functions 
    bool hasPartnerType() const { return this->partnerType_ != nullptr;};
    void deletePartnerType() { this->partnerType_ = nullptr;};
    inline string partnerType() const { DARABONBA_PTR_GET_DEFAULT(partnerType_, "") };
    inline QueryBookingDomainInfoResponseBody& setPartnerType(string partnerType) { DARABONBA_PTR_SET_VALUE(partnerType_, partnerType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBookingDomainInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snatchNo Field Functions 
    bool hasSnatchNo() const { return this->snatchNo_ != nullptr;};
    void deleteSnatchNo() { this->snatchNo_ = nullptr;};
    inline string snatchNo() const { DARABONBA_PTR_GET_DEFAULT(snatchNo_, "") };
    inline QueryBookingDomainInfoResponseBody& setSnatchNo(string snatchNo) { DARABONBA_PTR_SET_VALUE(snatchNo_, snatchNo) };


    // transferInPrice Field Functions 
    bool hasTransferInPrice() const { return this->transferInPrice_ != nullptr;};
    void deleteTransferInPrice() { this->transferInPrice_ = nullptr;};
    inline float transferInPrice() const { DARABONBA_PTR_GET_DEFAULT(transferInPrice_, 0.0) };
    inline QueryBookingDomainInfoResponseBody& setTransferInPrice(float transferInPrice) { DARABONBA_PTR_SET_VALUE(transferInPrice_, transferInPrice) };


  protected:
    std::shared_ptr<int32_t> auctionId_ = nullptr;
    std::shared_ptr<int64_t> bookEndTime_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<float> maxBid_ = nullptr;
    std::shared_ptr<string> partnerType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> snatchNo_ = nullptr;
    std::shared_ptr<float> transferInPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
