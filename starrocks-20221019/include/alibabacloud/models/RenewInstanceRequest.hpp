// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class RenewInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillingInstanceIds, billingInstanceIds_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
    };
    friend void from_json(const Darabonba::Json& j, RenewInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingInstanceIds, billingInstanceIds_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
    };
    RenewInstanceRequest() = default ;
    RenewInstanceRequest(const RenewInstanceRequest &) = default ;
    RenewInstanceRequest(RenewInstanceRequest &&) = default ;
    RenewInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewInstanceRequest() = default ;
    RenewInstanceRequest& operator=(const RenewInstanceRequest &) = default ;
    RenewInstanceRequest& operator=(RenewInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingInstanceIds_ == nullptr
        && this->duration_ == nullptr && this->instanceId_ == nullptr && this->pricingCycle_ == nullptr && this->promotionOptionNo_ == nullptr; };
    // billingInstanceIds Field Functions 
    bool hasBillingInstanceIds() const { return this->billingInstanceIds_ != nullptr;};
    void deleteBillingInstanceIds() { this->billingInstanceIds_ = nullptr;};
    inline string getBillingInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(billingInstanceIds_, "") };
    inline RenewInstanceRequest& setBillingInstanceIds(string billingInstanceIds) { DARABONBA_PTR_SET_VALUE(billingInstanceIds_, billingInstanceIds) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline RenewInstanceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RenewInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline RenewInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline RenewInstanceRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


  protected:
    // This parameter is required.
    shared_ptr<string> billingInstanceIds_ {};
    // This parameter is required.
    shared_ptr<int32_t> duration_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> pricingCycle_ {};
    shared_ptr<string> promotionOptionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
