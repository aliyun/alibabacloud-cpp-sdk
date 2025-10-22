// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BIDDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BIDDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BidDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BidDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(MaxBid, maxBid_);
    };
    friend void from_json(const Darabonba::Json& j, BidDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(MaxBid, maxBid_);
    };
    BidDomainRequest() = default ;
    BidDomainRequest(const BidDomainRequest &) = default ;
    BidDomainRequest(BidDomainRequest &&) = default ;
    BidDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BidDomainRequest() = default ;
    BidDomainRequest& operator=(const BidDomainRequest &) = default ;
    BidDomainRequest& operator=(BidDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionId_ == nullptr
        && return this->currency_ == nullptr && return this->maxBid_ == nullptr; };
    // auctionId Field Functions 
    bool hasAuctionId() const { return this->auctionId_ != nullptr;};
    void deleteAuctionId() { this->auctionId_ = nullptr;};
    inline string auctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, "") };
    inline BidDomainRequest& setAuctionId(string auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline BidDomainRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // maxBid Field Functions 
    bool hasMaxBid() const { return this->maxBid_ != nullptr;};
    void deleteMaxBid() { this->maxBid_ = nullptr;};
    inline float maxBid() const { DARABONBA_PTR_GET_DEFAULT(maxBid_, 0.0) };
    inline BidDomainRequest& setMaxBid(float maxBid) { DARABONBA_PTR_SET_VALUE(maxBid_, maxBid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> auctionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> maxBid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
