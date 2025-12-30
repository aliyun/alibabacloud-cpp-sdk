// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBIDRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBIDRECORDSRESPONSEBODY_HPP_
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
  class QueryBidRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBidRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBidRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryBidRecordsResponseBody() = default ;
    QueryBidRecordsResponseBody(const QueryBidRecordsResponseBody &) = default ;
    QueryBidRecordsResponseBody(QueryBidRecordsResponseBody &&) = default ;
    QueryBidRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBidRecordsResponseBody() = default ;
    QueryBidRecordsResponseBody& operator=(const QueryBidRecordsResponseBody &) = default ;
    QueryBidRecordsResponseBody& operator=(QueryBidRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bid, bid_);
        DARABONBA_PTR_TO_JSON(BidTime, bidTime_);
        DARABONBA_PTR_TO_JSON(Bidder, bidder_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bid, bid_);
        DARABONBA_PTR_FROM_JSON(BidTime, bidTime_);
        DARABONBA_PTR_FROM_JSON(Bidder, bidder_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
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
      virtual bool empty() const override { return this->bid_ == nullptr
        && this->bidTime_ == nullptr && this->bidder_ == nullptr && this->currency_ == nullptr && this->domainName_ == nullptr; };
      // bid Field Functions 
      bool hasBid() const { return this->bid_ != nullptr;};
      void deleteBid() { this->bid_ = nullptr;};
      inline float getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, 0.0) };
      inline Data& setBid(float bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


      // bidTime Field Functions 
      bool hasBidTime() const { return this->bidTime_ != nullptr;};
      void deleteBidTime() { this->bidTime_ = nullptr;};
      inline int64_t getBidTime() const { DARABONBA_PTR_GET_DEFAULT(bidTime_, 0L) };
      inline Data& setBidTime(int64_t bidTime) { DARABONBA_PTR_SET_VALUE(bidTime_, bidTime) };


      // bidder Field Functions 
      bool hasBidder() const { return this->bidder_ != nullptr;};
      void deleteBidder() { this->bidder_ = nullptr;};
      inline string getBidder() const { DARABONBA_PTR_GET_DEFAULT(bidder_, "") };
      inline Data& setBidder(string bidder) { DARABONBA_PTR_SET_VALUE(bidder_, bidder) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    protected:
      shared_ptr<float> bid_ {};
      shared_ptr<int64_t> bidTime_ {};
      shared_ptr<string> bidder_ {};
      shared_ptr<string> currency_ {};
      shared_ptr<string> domainName_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryBidRecordsResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryBidRecordsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryBidRecordsResponseBody::Data>) };
    inline vector<QueryBidRecordsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryBidRecordsResponseBody::Data>) };
    inline QueryBidRecordsResponseBody& setData(const vector<QueryBidRecordsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryBidRecordsResponseBody& setData(vector<QueryBidRecordsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryBidRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBidRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryBidRecordsResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryBidRecordsResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<vector<QueryBidRecordsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
