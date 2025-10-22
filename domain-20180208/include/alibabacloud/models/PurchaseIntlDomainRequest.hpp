// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEINTLDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEINTLDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class PurchaseIntlDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseIntlDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(Price, price_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseIntlDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
    };
    PurchaseIntlDomainRequest() = default ;
    PurchaseIntlDomainRequest(const PurchaseIntlDomainRequest &) = default ;
    PurchaseIntlDomainRequest(PurchaseIntlDomainRequest &&) = default ;
    PurchaseIntlDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseIntlDomainRequest() = default ;
    PurchaseIntlDomainRequest& operator=(const PurchaseIntlDomainRequest &) = default ;
    PurchaseIntlDomainRequest& operator=(PurchaseIntlDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionId_ == nullptr
        && return this->currency_ == nullptr && return this->price_ == nullptr; };
    // auctionId Field Functions 
    bool hasAuctionId() const { return this->auctionId_ != nullptr;};
    void deleteAuctionId() { this->auctionId_ = nullptr;};
    inline string auctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, "") };
    inline PurchaseIntlDomainRequest& setAuctionId(string auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline PurchaseIntlDomainRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline double price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline PurchaseIntlDomainRequest& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> auctionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> currency_ = nullptr;
    // This parameter is required.
    std::shared_ptr<double> price_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
