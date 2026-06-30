// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBASICACCELERATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBASICACCELERATORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class CreateBasicAcceleratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBasicAcceleratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(BandwidthBillingType, bandwidthBillingType_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBasicAcceleratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(BandwidthBillingType, bandwidthBillingType_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateBasicAcceleratorRequest() = default ;
    CreateBasicAcceleratorRequest(const CreateBasicAcceleratorRequest &) = default ;
    CreateBasicAcceleratorRequest(CreateBasicAcceleratorRequest &&) = default ;
    CreateBasicAcceleratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBasicAcceleratorRequest() = default ;
    CreateBasicAcceleratorRequest& operator=(const CreateBasicAcceleratorRequest &) = default ;
    CreateBasicAcceleratorRequest& operator=(CreateBasicAcceleratorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The label key of the basic Alibaba Cloud Global Accelerator (GA) instance. If you specify this parameter, the value cannot be an empty string.
      // 
      // The label key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // You can specify up to 20 label keys.
      shared_ptr<string> key_ {};
      // The label value of the basic Alibaba Cloud Global Accelerator (GA) instance. If you specify this parameter, the value cannot be an empty string.
      // 
      // The label value can be up to 128 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // You can specify up to 20 label values.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewDuration_ == nullptr && this->autoUseCoupon_ == nullptr && this->bandwidthBillingType_ == nullptr && this->chargeType_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->duration_ == nullptr && this->pricingCycle_ == nullptr && this->promotionOptionNo_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateBasicAcceleratorRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateBasicAcceleratorRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t getAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline CreateBasicAcceleratorRequest& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline string getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, "") };
    inline CreateBasicAcceleratorRequest& setAutoUseCoupon(string autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // bandwidthBillingType Field Functions 
    bool hasBandwidthBillingType() const { return this->bandwidthBillingType_ != nullptr;};
    void deleteBandwidthBillingType() { this->bandwidthBillingType_ = nullptr;};
    inline string getBandwidthBillingType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthBillingType_, "") };
    inline CreateBasicAcceleratorRequest& setBandwidthBillingType(string bandwidthBillingType) { DARABONBA_PTR_SET_VALUE(bandwidthBillingType_, bandwidthBillingType) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateBasicAcceleratorRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBasicAcceleratorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateBasicAcceleratorRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateBasicAcceleratorRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateBasicAcceleratorRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline CreateBasicAcceleratorRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBasicAcceleratorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateBasicAcceleratorRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateBasicAcceleratorRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateBasicAcceleratorRequest::Tag>) };
    inline vector<CreateBasicAcceleratorRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateBasicAcceleratorRequest::Tag>) };
    inline CreateBasicAcceleratorRequest& setTag(const vector<CreateBasicAcceleratorRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateBasicAcceleratorRequest& setTag(vector<CreateBasicAcceleratorRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **false** (default): disables automatic payment. After an order is generated, go to the Order Center to complete the payment.
    // 
    // - **true**: enables automatic payment. The order is automatically paid.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal.
    // 
    // - **true**: enables auto-renewal.
    // 
    // - **false** (default): disables auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal duration. Unit: months.
    // 
    // Valid values: **1** to **12**. Default value: **1**.
    // 
    // > This parameter takes effect only when **AutoRenew** is set to **true**.
    shared_ptr<int32_t> autoRenewDuration_ {};
    // Specifies whether to use coupons for automatic payment of the bill. Valid values:
    // 
    // - **true**: uses coupons.
    // 
    // - **false** (default): does not use coupons.
    // 
    // > This parameter takes effect only when **AutoPay** is set to **true**.
    shared_ptr<string> autoUseCoupon_ {};
    // The bandwidth billing method. Valid values:
    // - **BandwidthPackage**: billed by bandwidth plan.
    // - **CDT**: billed by traffic and settled through unified settlement by Cloud Data Transfer (CDT).
    // - **CDT95**: billed by the 95th percentile bandwidth and settled through unified settlement by CDT. This bandwidth billing method is available only to users in the whitelist.
    shared_ptr<string> bandwidthBillingType_ {};
    // The billing method. Valid values:
    // - **PREPAY (default)**: subscription.
    // - **POSTPAY**: pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // - **true**: performs a dry run without creating the resource. The system checks the required parameters, request syntax, and business limitations. If the check fails, the corresponding error is returned. If the check succeeds, the `DryRunOperation` error code is returned.
    // - **false** (default): performs a dry run and sends the request. If the check succeeds, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The subscription duration.
    // 
    // - If **PricingCycle** is set to **Month**, valid values of **Duration** are **1** to **9**.
    // 
    // - If **PricingCycle** is set to **Year**, valid values of **Duration** are **1** to **3**.
    shared_ptr<int32_t> duration_ {};
    // The billing cycle. Valid values:
    // 
    // - **Month**: billed on a monthly basis.
    // 
    // - **Year**: billed on a yearly basis.
    shared_ptr<string> pricingCycle_ {};
    // The coupon number.
    // > This parameter is applicable only to the China site (aliyun.com).
    shared_ptr<string> promotionOptionNo_ {};
    // The region ID of the basic Alibaba Cloud Global Accelerator (GA) instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the basic Alibaba Cloud Global Accelerator (GA) instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The labels of the basic Alibaba Cloud Global Accelerator (GA) instance.
    shared_ptr<vector<CreateBasicAcceleratorRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
