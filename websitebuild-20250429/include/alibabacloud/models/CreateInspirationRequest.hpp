// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSPIRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSPIRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateInspirationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInspirationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amountspec, amountspec_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInspirationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amountspec, amountspec_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
    };
    CreateInspirationRequest() = default ;
    CreateInspirationRequest(const CreateInspirationRequest &) = default ;
    CreateInspirationRequest(CreateInspirationRequest &&) = default ;
    CreateInspirationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInspirationRequest() = default ;
    CreateInspirationRequest& operator=(const CreateInspirationRequest &) = default ;
    CreateInspirationRequest& operator=(CreateInspirationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amountspec_ == nullptr
        && this->clientToken_ == nullptr && this->duration_ == nullptr && this->extend_ == nullptr && this->paymentType_ == nullptr && this->pricingCycle_ == nullptr
        && this->quantity_ == nullptr; };
    // amountspec Field Functions 
    bool hasAmountspec() const { return this->amountspec_ != nullptr;};
    void deleteAmountspec() { this->amountspec_ = nullptr;};
    inline string getAmountspec() const { DARABONBA_PTR_GET_DEFAULT(amountspec_, "") };
    inline CreateInspirationRequest& setAmountspec(string amountspec) { DARABONBA_PTR_SET_VALUE(amountspec_, amountspec) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInspirationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateInspirationRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline CreateInspirationRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateInspirationRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateInspirationRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline CreateInspirationRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


  protected:
    // The specification of the resource plan.
    shared_ptr<string> amountspec_ {};
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The subscription duration.
    shared_ptr<int32_t> duration_ {};
    // The extended information in JSON format.
    shared_ptr<string> extend_ {};
    // The payment type.
    shared_ptr<string> paymentType_ {};
    // The unit of the subscription cycle. Valid values:
    // - Year: year
    // - Month: month
    // - Day: day
    // - Hour: hour
    shared_ptr<string> pricingCycle_ {};
    // The number of instances to subscribe to.
    shared_ptr<int32_t> quantity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
