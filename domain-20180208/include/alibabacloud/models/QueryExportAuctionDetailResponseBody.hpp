// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEXPORTAUCTIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEXPORTAUCTIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryExportAuctionDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryExportAuctionDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionEndTime, auctionEndTime_);
      DARABONBA_PTR_TO_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_TO_JSON(AuctionStatus, auctionStatus_);
      DARABONBA_PTR_TO_JSON(BookEndTime, bookEndTime_);
      DARABONBA_PTR_TO_JSON(BuyerStatus, buyerStatus_);
      DARABONBA_PTR_TO_JSON(CurrentPrice, currentPrice_);
      DARABONBA_PTR_TO_JSON(IncreasePrice, increasePrice_);
      DARABONBA_PTR_TO_JSON(MyPrice, myPrice_);
      DARABONBA_PTR_TO_JSON(MyProxyPrice, myProxyPrice_);
      DARABONBA_PTR_TO_JSON(OthersMaxProxyPrice, othersMaxProxyPrice_);
      DARABONBA_PTR_TO_JSON(ProxyPrice, proxyPrice_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryExportAuctionDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionEndTime, auctionEndTime_);
      DARABONBA_PTR_FROM_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_FROM_JSON(AuctionStatus, auctionStatus_);
      DARABONBA_PTR_FROM_JSON(BookEndTime, bookEndTime_);
      DARABONBA_PTR_FROM_JSON(BuyerStatus, buyerStatus_);
      DARABONBA_PTR_FROM_JSON(CurrentPrice, currentPrice_);
      DARABONBA_PTR_FROM_JSON(IncreasePrice, increasePrice_);
      DARABONBA_PTR_FROM_JSON(MyPrice, myPrice_);
      DARABONBA_PTR_FROM_JSON(MyProxyPrice, myProxyPrice_);
      DARABONBA_PTR_FROM_JSON(OthersMaxProxyPrice, othersMaxProxyPrice_);
      DARABONBA_PTR_FROM_JSON(ProxyPrice, proxyPrice_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryExportAuctionDetailResponseBody() = default ;
    QueryExportAuctionDetailResponseBody(const QueryExportAuctionDetailResponseBody &) = default ;
    QueryExportAuctionDetailResponseBody(QueryExportAuctionDetailResponseBody &&) = default ;
    QueryExportAuctionDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryExportAuctionDetailResponseBody() = default ;
    QueryExportAuctionDetailResponseBody& operator=(const QueryExportAuctionDetailResponseBody &) = default ;
    QueryExportAuctionDetailResponseBody& operator=(QueryExportAuctionDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionEndTime_ == nullptr
        && return this->auctionId_ == nullptr && return this->auctionStatus_ == nullptr && return this->bookEndTime_ == nullptr && return this->buyerStatus_ == nullptr && return this->currentPrice_ == nullptr
        && return this->increasePrice_ == nullptr && return this->myPrice_ == nullptr && return this->myProxyPrice_ == nullptr && return this->othersMaxProxyPrice_ == nullptr && return this->proxyPrice_ == nullptr
        && return this->requestId_ == nullptr; };
    // auctionEndTime Field Functions 
    bool hasAuctionEndTime() const { return this->auctionEndTime_ != nullptr;};
    void deleteAuctionEndTime() { this->auctionEndTime_ = nullptr;};
    inline string auctionEndTime() const { DARABONBA_PTR_GET_DEFAULT(auctionEndTime_, "") };
    inline QueryExportAuctionDetailResponseBody& setAuctionEndTime(string auctionEndTime) { DARABONBA_PTR_SET_VALUE(auctionEndTime_, auctionEndTime) };


    // auctionId Field Functions 
    bool hasAuctionId() const { return this->auctionId_ != nullptr;};
    void deleteAuctionId() { this->auctionId_ = nullptr;};
    inline string auctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, "") };
    inline QueryExportAuctionDetailResponseBody& setAuctionId(string auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


    // auctionStatus Field Functions 
    bool hasAuctionStatus() const { return this->auctionStatus_ != nullptr;};
    void deleteAuctionStatus() { this->auctionStatus_ = nullptr;};
    inline string auctionStatus() const { DARABONBA_PTR_GET_DEFAULT(auctionStatus_, "") };
    inline QueryExportAuctionDetailResponseBody& setAuctionStatus(string auctionStatus) { DARABONBA_PTR_SET_VALUE(auctionStatus_, auctionStatus) };


    // bookEndTime Field Functions 
    bool hasBookEndTime() const { return this->bookEndTime_ != nullptr;};
    void deleteBookEndTime() { this->bookEndTime_ = nullptr;};
    inline string bookEndTime() const { DARABONBA_PTR_GET_DEFAULT(bookEndTime_, "") };
    inline QueryExportAuctionDetailResponseBody& setBookEndTime(string bookEndTime) { DARABONBA_PTR_SET_VALUE(bookEndTime_, bookEndTime) };


    // buyerStatus Field Functions 
    bool hasBuyerStatus() const { return this->buyerStatus_ != nullptr;};
    void deleteBuyerStatus() { this->buyerStatus_ = nullptr;};
    inline string buyerStatus() const { DARABONBA_PTR_GET_DEFAULT(buyerStatus_, "") };
    inline QueryExportAuctionDetailResponseBody& setBuyerStatus(string buyerStatus) { DARABONBA_PTR_SET_VALUE(buyerStatus_, buyerStatus) };


    // currentPrice Field Functions 
    bool hasCurrentPrice() const { return this->currentPrice_ != nullptr;};
    void deleteCurrentPrice() { this->currentPrice_ = nullptr;};
    inline double currentPrice() const { DARABONBA_PTR_GET_DEFAULT(currentPrice_, 0.0) };
    inline QueryExportAuctionDetailResponseBody& setCurrentPrice(double currentPrice) { DARABONBA_PTR_SET_VALUE(currentPrice_, currentPrice) };


    // increasePrice Field Functions 
    bool hasIncreasePrice() const { return this->increasePrice_ != nullptr;};
    void deleteIncreasePrice() { this->increasePrice_ = nullptr;};
    inline double increasePrice() const { DARABONBA_PTR_GET_DEFAULT(increasePrice_, 0.0) };
    inline QueryExportAuctionDetailResponseBody& setIncreasePrice(double increasePrice) { DARABONBA_PTR_SET_VALUE(increasePrice_, increasePrice) };


    // myPrice Field Functions 
    bool hasMyPrice() const { return this->myPrice_ != nullptr;};
    void deleteMyPrice() { this->myPrice_ = nullptr;};
    inline double myPrice() const { DARABONBA_PTR_GET_DEFAULT(myPrice_, 0.0) };
    inline QueryExportAuctionDetailResponseBody& setMyPrice(double myPrice) { DARABONBA_PTR_SET_VALUE(myPrice_, myPrice) };


    // myProxyPrice Field Functions 
    bool hasMyProxyPrice() const { return this->myProxyPrice_ != nullptr;};
    void deleteMyProxyPrice() { this->myProxyPrice_ = nullptr;};
    inline double myProxyPrice() const { DARABONBA_PTR_GET_DEFAULT(myProxyPrice_, 0.0) };
    inline QueryExportAuctionDetailResponseBody& setMyProxyPrice(double myProxyPrice) { DARABONBA_PTR_SET_VALUE(myProxyPrice_, myProxyPrice) };


    // othersMaxProxyPrice Field Functions 
    bool hasOthersMaxProxyPrice() const { return this->othersMaxProxyPrice_ != nullptr;};
    void deleteOthersMaxProxyPrice() { this->othersMaxProxyPrice_ = nullptr;};
    inline double othersMaxProxyPrice() const { DARABONBA_PTR_GET_DEFAULT(othersMaxProxyPrice_, 0.0) };
    inline QueryExportAuctionDetailResponseBody& setOthersMaxProxyPrice(double othersMaxProxyPrice) { DARABONBA_PTR_SET_VALUE(othersMaxProxyPrice_, othersMaxProxyPrice) };


    // proxyPrice Field Functions 
    bool hasProxyPrice() const { return this->proxyPrice_ != nullptr;};
    void deleteProxyPrice() { this->proxyPrice_ = nullptr;};
    inline double proxyPrice() const { DARABONBA_PTR_GET_DEFAULT(proxyPrice_, 0.0) };
    inline QueryExportAuctionDetailResponseBody& setProxyPrice(double proxyPrice) { DARABONBA_PTR_SET_VALUE(proxyPrice_, proxyPrice) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryExportAuctionDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> auctionEndTime_ = nullptr;
    std::shared_ptr<string> auctionId_ = nullptr;
    std::shared_ptr<string> auctionStatus_ = nullptr;
    std::shared_ptr<string> bookEndTime_ = nullptr;
    std::shared_ptr<string> buyerStatus_ = nullptr;
    std::shared_ptr<double> currentPrice_ = nullptr;
    std::shared_ptr<double> increasePrice_ = nullptr;
    std::shared_ptr<double> myPrice_ = nullptr;
    std::shared_ptr<double> myProxyPrice_ = nullptr;
    std::shared_ptr<double> othersMaxProxyPrice_ = nullptr;
    std::shared_ptr<double> proxyPrice_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
