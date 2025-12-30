// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryAuctionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuctionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuctionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryAuctionsResponseBody() = default ;
    QueryAuctionsResponseBody(const QueryAuctionsResponseBody &) = default ;
    QueryAuctionsResponseBody(QueryAuctionsResponseBody &&) = default ;
    QueryAuctionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuctionsResponseBody() = default ;
    QueryAuctionsResponseBody& operator=(const QueryAuctionsResponseBody &) = default ;
    QueryAuctionsResponseBody& operator=(QueryAuctionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
        DARABONBA_PTR_TO_JSON(ReserveMax, reserveMax_);
        DARABONBA_PTR_TO_JSON(ReserveMet, reserveMet_);
        DARABONBA_PTR_TO_JSON(ReserveMin, reserveMin_);
        DARABONBA_PTR_TO_JSON(ReservePrice, reservePrice_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TransferInPrice, transferInPrice_);
        DARABONBA_PTR_TO_JSON(YourCurrentBid, yourCurrentBid_);
        DARABONBA_PTR_TO_JSON(YourMaxBid, yourMaxBid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
        DARABONBA_PTR_FROM_JSON(ReserveMax, reserveMax_);
        DARABONBA_PTR_FROM_JSON(ReserveMet, reserveMet_);
        DARABONBA_PTR_FROM_JSON(ReserveMin, reserveMin_);
        DARABONBA_PTR_FROM_JSON(ReservePrice, reservePrice_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TransferInPrice, transferInPrice_);
        DARABONBA_PTR_FROM_JSON(YourCurrentBid, yourCurrentBid_);
        DARABONBA_PTR_FROM_JSON(YourMaxBid, yourMaxBid_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auctionEndTime_ == nullptr
        && this->auctionId_ == nullptr && this->bookEndTime_ == nullptr && this->bookedPartner_ == nullptr && this->currency_ == nullptr && this->deliveryTime_ == nullptr
        && this->domainName_ == nullptr && this->domainType_ == nullptr && this->failCode_ == nullptr && this->highBid_ == nullptr && this->highBidder_ == nullptr
        && this->nextValidBid_ == nullptr && this->partnerType_ == nullptr && this->payEndTime_ == nullptr && this->payPrice_ == nullptr && this->payStatus_ == nullptr
        && this->produceStatus_ == nullptr && this->reserveMax_ == nullptr && this->reserveMet_ == nullptr && this->reserveMin_ == nullptr && this->reservePrice_ == nullptr
        && this->status_ == nullptr && this->transferInPrice_ == nullptr && this->yourCurrentBid_ == nullptr && this->yourMaxBid_ == nullptr; };
      // auctionEndTime Field Functions 
      bool hasAuctionEndTime() const { return this->auctionEndTime_ != nullptr;};
      void deleteAuctionEndTime() { this->auctionEndTime_ = nullptr;};
      inline int64_t getAuctionEndTime() const { DARABONBA_PTR_GET_DEFAULT(auctionEndTime_, 0L) };
      inline Data& setAuctionEndTime(int64_t auctionEndTime) { DARABONBA_PTR_SET_VALUE(auctionEndTime_, auctionEndTime) };


      // auctionId Field Functions 
      bool hasAuctionId() const { return this->auctionId_ != nullptr;};
      void deleteAuctionId() { this->auctionId_ = nullptr;};
      inline string getAuctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, "") };
      inline Data& setAuctionId(string auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


      // bookEndTime Field Functions 
      bool hasBookEndTime() const { return this->bookEndTime_ != nullptr;};
      void deleteBookEndTime() { this->bookEndTime_ = nullptr;};
      inline int64_t getBookEndTime() const { DARABONBA_PTR_GET_DEFAULT(bookEndTime_, 0L) };
      inline Data& setBookEndTime(int64_t bookEndTime) { DARABONBA_PTR_SET_VALUE(bookEndTime_, bookEndTime) };


      // bookedPartner Field Functions 
      bool hasBookedPartner() const { return this->bookedPartner_ != nullptr;};
      void deleteBookedPartner() { this->bookedPartner_ = nullptr;};
      inline string getBookedPartner() const { DARABONBA_PTR_GET_DEFAULT(bookedPartner_, "") };
      inline Data& setBookedPartner(string bookedPartner) { DARABONBA_PTR_SET_VALUE(bookedPartner_, bookedPartner) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // deliveryTime Field Functions 
      bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
      void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
      inline int64_t getDeliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, 0L) };
      inline Data& setDeliveryTime(int64_t deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainType Field Functions 
      bool hasDomainType() const { return this->domainType_ != nullptr;};
      void deleteDomainType() { this->domainType_ = nullptr;};
      inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
      inline Data& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


      // failCode Field Functions 
      bool hasFailCode() const { return this->failCode_ != nullptr;};
      void deleteFailCode() { this->failCode_ = nullptr;};
      inline string getFailCode() const { DARABONBA_PTR_GET_DEFAULT(failCode_, "") };
      inline Data& setFailCode(string failCode) { DARABONBA_PTR_SET_VALUE(failCode_, failCode) };


      // highBid Field Functions 
      bool hasHighBid() const { return this->highBid_ != nullptr;};
      void deleteHighBid() { this->highBid_ = nullptr;};
      inline float getHighBid() const { DARABONBA_PTR_GET_DEFAULT(highBid_, 0.0) };
      inline Data& setHighBid(float highBid) { DARABONBA_PTR_SET_VALUE(highBid_, highBid) };


      // highBidder Field Functions 
      bool hasHighBidder() const { return this->highBidder_ != nullptr;};
      void deleteHighBidder() { this->highBidder_ = nullptr;};
      inline string getHighBidder() const { DARABONBA_PTR_GET_DEFAULT(highBidder_, "") };
      inline Data& setHighBidder(string highBidder) { DARABONBA_PTR_SET_VALUE(highBidder_, highBidder) };


      // nextValidBid Field Functions 
      bool hasNextValidBid() const { return this->nextValidBid_ != nullptr;};
      void deleteNextValidBid() { this->nextValidBid_ = nullptr;};
      inline float getNextValidBid() const { DARABONBA_PTR_GET_DEFAULT(nextValidBid_, 0.0) };
      inline Data& setNextValidBid(float nextValidBid) { DARABONBA_PTR_SET_VALUE(nextValidBid_, nextValidBid) };


      // partnerType Field Functions 
      bool hasPartnerType() const { return this->partnerType_ != nullptr;};
      void deletePartnerType() { this->partnerType_ = nullptr;};
      inline string getPartnerType() const { DARABONBA_PTR_GET_DEFAULT(partnerType_, "") };
      inline Data& setPartnerType(string partnerType) { DARABONBA_PTR_SET_VALUE(partnerType_, partnerType) };


      // payEndTime Field Functions 
      bool hasPayEndTime() const { return this->payEndTime_ != nullptr;};
      void deletePayEndTime() { this->payEndTime_ = nullptr;};
      inline int64_t getPayEndTime() const { DARABONBA_PTR_GET_DEFAULT(payEndTime_, 0L) };
      inline Data& setPayEndTime(int64_t payEndTime) { DARABONBA_PTR_SET_VALUE(payEndTime_, payEndTime) };


      // payPrice Field Functions 
      bool hasPayPrice() const { return this->payPrice_ != nullptr;};
      void deletePayPrice() { this->payPrice_ = nullptr;};
      inline float getPayPrice() const { DARABONBA_PTR_GET_DEFAULT(payPrice_, 0.0) };
      inline Data& setPayPrice(float payPrice) { DARABONBA_PTR_SET_VALUE(payPrice_, payPrice) };


      // payStatus Field Functions 
      bool hasPayStatus() const { return this->payStatus_ != nullptr;};
      void deletePayStatus() { this->payStatus_ = nullptr;};
      inline string getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, "") };
      inline Data& setPayStatus(string payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


      // produceStatus Field Functions 
      bool hasProduceStatus() const { return this->produceStatus_ != nullptr;};
      void deleteProduceStatus() { this->produceStatus_ = nullptr;};
      inline string getProduceStatus() const { DARABONBA_PTR_GET_DEFAULT(produceStatus_, "") };
      inline Data& setProduceStatus(string produceStatus) { DARABONBA_PTR_SET_VALUE(produceStatus_, produceStatus) };


      // reserveMax Field Functions 
      bool hasReserveMax() const { return this->reserveMax_ != nullptr;};
      void deleteReserveMax() { this->reserveMax_ = nullptr;};
      inline int64_t getReserveMax() const { DARABONBA_PTR_GET_DEFAULT(reserveMax_, 0L) };
      inline Data& setReserveMax(int64_t reserveMax) { DARABONBA_PTR_SET_VALUE(reserveMax_, reserveMax) };


      // reserveMet Field Functions 
      bool hasReserveMet() const { return this->reserveMet_ != nullptr;};
      void deleteReserveMet() { this->reserveMet_ = nullptr;};
      inline bool getReserveMet() const { DARABONBA_PTR_GET_DEFAULT(reserveMet_, false) };
      inline Data& setReserveMet(bool reserveMet) { DARABONBA_PTR_SET_VALUE(reserveMet_, reserveMet) };


      // reserveMin Field Functions 
      bool hasReserveMin() const { return this->reserveMin_ != nullptr;};
      void deleteReserveMin() { this->reserveMin_ = nullptr;};
      inline int64_t getReserveMin() const { DARABONBA_PTR_GET_DEFAULT(reserveMin_, 0L) };
      inline Data& setReserveMin(int64_t reserveMin) { DARABONBA_PTR_SET_VALUE(reserveMin_, reserveMin) };


      // reservePrice Field Functions 
      bool hasReservePrice() const { return this->reservePrice_ != nullptr;};
      void deleteReservePrice() { this->reservePrice_ = nullptr;};
      inline int64_t getReservePrice() const { DARABONBA_PTR_GET_DEFAULT(reservePrice_, 0L) };
      inline Data& setReservePrice(int64_t reservePrice) { DARABONBA_PTR_SET_VALUE(reservePrice_, reservePrice) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // transferInPrice Field Functions 
      bool hasTransferInPrice() const { return this->transferInPrice_ != nullptr;};
      void deleteTransferInPrice() { this->transferInPrice_ = nullptr;};
      inline float getTransferInPrice() const { DARABONBA_PTR_GET_DEFAULT(transferInPrice_, 0.0) };
      inline Data& setTransferInPrice(float transferInPrice) { DARABONBA_PTR_SET_VALUE(transferInPrice_, transferInPrice) };


      // yourCurrentBid Field Functions 
      bool hasYourCurrentBid() const { return this->yourCurrentBid_ != nullptr;};
      void deleteYourCurrentBid() { this->yourCurrentBid_ = nullptr;};
      inline float getYourCurrentBid() const { DARABONBA_PTR_GET_DEFAULT(yourCurrentBid_, 0.0) };
      inline Data& setYourCurrentBid(float yourCurrentBid) { DARABONBA_PTR_SET_VALUE(yourCurrentBid_, yourCurrentBid) };


      // yourMaxBid Field Functions 
      bool hasYourMaxBid() const { return this->yourMaxBid_ != nullptr;};
      void deleteYourMaxBid() { this->yourMaxBid_ = nullptr;};
      inline float getYourMaxBid() const { DARABONBA_PTR_GET_DEFAULT(yourMaxBid_, 0.0) };
      inline Data& setYourMaxBid(float yourMaxBid) { DARABONBA_PTR_SET_VALUE(yourMaxBid_, yourMaxBid) };


    protected:
      shared_ptr<int64_t> auctionEndTime_ {};
      shared_ptr<string> auctionId_ {};
      shared_ptr<int64_t> bookEndTime_ {};
      shared_ptr<string> bookedPartner_ {};
      shared_ptr<string> currency_ {};
      shared_ptr<int64_t> deliveryTime_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> domainType_ {};
      shared_ptr<string> failCode_ {};
      shared_ptr<float> highBid_ {};
      shared_ptr<string> highBidder_ {};
      shared_ptr<float> nextValidBid_ {};
      shared_ptr<string> partnerType_ {};
      shared_ptr<int64_t> payEndTime_ {};
      shared_ptr<float> payPrice_ {};
      shared_ptr<string> payStatus_ {};
      shared_ptr<string> produceStatus_ {};
      shared_ptr<int64_t> reserveMax_ {};
      shared_ptr<bool> reserveMet_ {};
      shared_ptr<int64_t> reserveMin_ {};
      shared_ptr<int64_t> reservePrice_ {};
      shared_ptr<string> status_ {};
      shared_ptr<float> transferInPrice_ {};
      shared_ptr<float> yourCurrentBid_ {};
      shared_ptr<float> yourMaxBid_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryAuctionsResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryAuctionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryAuctionsResponseBody::Data>) };
    inline vector<QueryAuctionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryAuctionsResponseBody::Data>) };
    inline QueryAuctionsResponseBody& setData(const vector<QueryAuctionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAuctionsResponseBody& setData(vector<QueryAuctionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAuctionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAuctionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryAuctionsResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryAuctionsResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<vector<QueryAuctionsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
