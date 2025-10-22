// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BIDDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BIDDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BidDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BidDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BidDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BidDomainResponseBody() = default ;
    BidDomainResponseBody(const BidDomainResponseBody &) = default ;
    BidDomainResponseBody(BidDomainResponseBody &&) = default ;
    BidDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BidDomainResponseBody() = default ;
    BidDomainResponseBody& operator=(const BidDomainResponseBody &) = default ;
    BidDomainResponseBody& operator=(BidDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionId_ == nullptr
        && return this->requestId_ == nullptr; };
    // auctionId Field Functions 
    bool hasAuctionId() const { return this->auctionId_ != nullptr;};
    void deleteAuctionId() { this->auctionId_ = nullptr;};
    inline string auctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, "") };
    inline BidDomainResponseBody& setAuctionId(string auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BidDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> auctionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
