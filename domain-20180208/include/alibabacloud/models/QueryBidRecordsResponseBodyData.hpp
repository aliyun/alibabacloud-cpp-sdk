// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBIDRECORDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYBIDRECORDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryBidRecordsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBidRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(BidTime, bidTime_);
      DARABONBA_PTR_TO_JSON(Bidder, bidder_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBidRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(BidTime, bidTime_);
      DARABONBA_PTR_FROM_JSON(Bidder, bidder_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
    };
    QueryBidRecordsResponseBodyData() = default ;
    QueryBidRecordsResponseBodyData(const QueryBidRecordsResponseBodyData &) = default ;
    QueryBidRecordsResponseBodyData(QueryBidRecordsResponseBodyData &&) = default ;
    QueryBidRecordsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBidRecordsResponseBodyData() = default ;
    QueryBidRecordsResponseBodyData& operator=(const QueryBidRecordsResponseBodyData &) = default ;
    QueryBidRecordsResponseBodyData& operator=(QueryBidRecordsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bid_ == nullptr
        && return this->bidTime_ == nullptr && return this->bidder_ == nullptr && return this->currency_ == nullptr && return this->domainName_ == nullptr; };
    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline float bid() const { DARABONBA_PTR_GET_DEFAULT(bid_, 0.0) };
    inline QueryBidRecordsResponseBodyData& setBid(float bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // bidTime Field Functions 
    bool hasBidTime() const { return this->bidTime_ != nullptr;};
    void deleteBidTime() { this->bidTime_ = nullptr;};
    inline int64_t bidTime() const { DARABONBA_PTR_GET_DEFAULT(bidTime_, 0L) };
    inline QueryBidRecordsResponseBodyData& setBidTime(int64_t bidTime) { DARABONBA_PTR_SET_VALUE(bidTime_, bidTime) };


    // bidder Field Functions 
    bool hasBidder() const { return this->bidder_ != nullptr;};
    void deleteBidder() { this->bidder_ = nullptr;};
    inline string bidder() const { DARABONBA_PTR_GET_DEFAULT(bidder_, "") };
    inline QueryBidRecordsResponseBodyData& setBidder(string bidder) { DARABONBA_PTR_SET_VALUE(bidder_, bidder) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryBidRecordsResponseBodyData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryBidRecordsResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


  protected:
    std::shared_ptr<float> bid_ = nullptr;
    std::shared_ptr<int64_t> bidTime_ = nullptr;
    std::shared_ptr<string> bidder_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
