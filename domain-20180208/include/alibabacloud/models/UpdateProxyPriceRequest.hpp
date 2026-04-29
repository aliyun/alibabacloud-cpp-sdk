// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROXYPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROXYPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class UpdateProxyPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProxyPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(Price, price_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProxyPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuctionId, auctionId_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
    };
    UpdateProxyPriceRequest() = default ;
    UpdateProxyPriceRequest(const UpdateProxyPriceRequest &) = default ;
    UpdateProxyPriceRequest(UpdateProxyPriceRequest &&) = default ;
    UpdateProxyPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProxyPriceRequest() = default ;
    UpdateProxyPriceRequest& operator=(const UpdateProxyPriceRequest &) = default ;
    UpdateProxyPriceRequest& operator=(UpdateProxyPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auctionId_ == nullptr
        && this->currency_ == nullptr && this->price_ == nullptr; };
    // auctionId Field Functions 
    bool hasAuctionId() const { return this->auctionId_ != nullptr;};
    void deleteAuctionId() { this->auctionId_ = nullptr;};
    inline string getAuctionId() const { DARABONBA_PTR_GET_DEFAULT(auctionId_, "") };
    inline UpdateProxyPriceRequest& setAuctionId(string auctionId) { DARABONBA_PTR_SET_VALUE(auctionId_, auctionId) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline UpdateProxyPriceRequest& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline float getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
    inline UpdateProxyPriceRequest& setPrice(float price) { DARABONBA_PTR_SET_VALUE(price_, price) };


  protected:
    shared_ptr<string> auctionId_ {};
    shared_ptr<string> currency_ {};
    shared_ptr<float> price_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
