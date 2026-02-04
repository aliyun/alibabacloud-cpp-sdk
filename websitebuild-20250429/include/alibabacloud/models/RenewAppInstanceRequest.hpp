// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWAPPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWAPPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class RenewAppInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewAppInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
    };
    friend void from_json(const Darabonba::Json& j, RenewAppInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
    };
    RenewAppInstanceRequest() = default ;
    RenewAppInstanceRequest(const RenewAppInstanceRequest &) = default ;
    RenewAppInstanceRequest(RenewAppInstanceRequest &&) = default ;
    RenewAppInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewAppInstanceRequest() = default ;
    RenewAppInstanceRequest& operator=(const RenewAppInstanceRequest &) = default ;
    RenewAppInstanceRequest& operator=(RenewAppInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->clientToken_ == nullptr && this->duration_ == nullptr && this->extend_ == nullptr && this->paymentType_ == nullptr && this->pricingCycle_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline RenewAppInstanceRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RenewAppInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline RenewAppInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline RenewAppInstanceRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline RenewAppInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline RenewAppInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


  protected:
    // Business ID
    shared_ptr<string> bizId_ {};
    // Ensures idempotence of requests. Generate a unique value from your client to ensure it is unique across different requests. ClientToken only supports ASCII characters and cannot exceed 64 characters.
    shared_ptr<string> clientToken_ {};
    // Required. The number of subscription periods.
    shared_ptr<int32_t> duration_ {};
    // Extended information
    shared_ptr<string> extend_ {};
    // Payment type
    shared_ptr<string> paymentType_ {};
    // Required. The unit of the subscription period, Year: Year, Month: Month, Day: Day, Hour: Hour.
    shared_ptr<string> pricingCycle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
