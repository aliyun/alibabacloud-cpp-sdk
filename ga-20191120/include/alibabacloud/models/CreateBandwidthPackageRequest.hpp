// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBANDWIDTHPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBANDWIDTHPACKAGEREQUEST_HPP_
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
  class CreateBandwidthPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_TO_JSON(BillingType, billingType_);
      DARABONBA_PTR_TO_JSON(CbnGeographicRegionIdA, cbnGeographicRegionIdA_);
      DARABONBA_PTR_TO_JSON(CbnGeographicRegionIdB, cbnGeographicRegionIdB_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBandwidthPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthType, bandwidthType_);
      DARABONBA_PTR_FROM_JSON(BillingType, billingType_);
      DARABONBA_PTR_FROM_JSON(CbnGeographicRegionIdA, cbnGeographicRegionIdA_);
      DARABONBA_PTR_FROM_JSON(CbnGeographicRegionIdB, cbnGeographicRegionIdB_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateBandwidthPackageRequest() = default ;
    CreateBandwidthPackageRequest(const CreateBandwidthPackageRequest &) = default ;
    CreateBandwidthPackageRequest(CreateBandwidthPackageRequest &&) = default ;
    CreateBandwidthPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBandwidthPackageRequest() = default ;
    CreateBandwidthPackageRequest& operator=(const CreateBandwidthPackageRequest &) = default ;
    CreateBandwidthPackageRequest& operator=(CreateBandwidthPackageRequest &&) = default ;
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
      // The tag key of the bandwidth plan. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // You can specify up to 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value of the bandwidth plan. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // You can specify up to 20 tag values.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewDuration_ == nullptr && this->autoUseCoupon_ == nullptr && this->bandwidth_ == nullptr && this->bandwidthType_ == nullptr
        && this->billingType_ == nullptr && this->cbnGeographicRegionIdA_ == nullptr && this->cbnGeographicRegionIdB_ == nullptr && this->chargeType_ == nullptr && this->clientToken_ == nullptr
        && this->duration_ == nullptr && this->pricingCycle_ == nullptr && this->promotionOptionNo_ == nullptr && this->ratio_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr && this->type_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateBandwidthPackageRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateBandwidthPackageRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t getAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline CreateBandwidthPackageRequest& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline string getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, "") };
    inline CreateBandwidthPackageRequest& setAutoUseCoupon(string autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateBandwidthPackageRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthType Field Functions 
    bool hasBandwidthType() const { return this->bandwidthType_ != nullptr;};
    void deleteBandwidthType() { this->bandwidthType_ = nullptr;};
    inline string getBandwidthType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthType_, "") };
    inline CreateBandwidthPackageRequest& setBandwidthType(string bandwidthType) { DARABONBA_PTR_SET_VALUE(bandwidthType_, bandwidthType) };


    // billingType Field Functions 
    bool hasBillingType() const { return this->billingType_ != nullptr;};
    void deleteBillingType() { this->billingType_ = nullptr;};
    inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
    inline CreateBandwidthPackageRequest& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


    // cbnGeographicRegionIdA Field Functions 
    bool hasCbnGeographicRegionIdA() const { return this->cbnGeographicRegionIdA_ != nullptr;};
    void deleteCbnGeographicRegionIdA() { this->cbnGeographicRegionIdA_ = nullptr;};
    inline string getCbnGeographicRegionIdA() const { DARABONBA_PTR_GET_DEFAULT(cbnGeographicRegionIdA_, "") };
    inline CreateBandwidthPackageRequest& setCbnGeographicRegionIdA(string cbnGeographicRegionIdA) { DARABONBA_PTR_SET_VALUE(cbnGeographicRegionIdA_, cbnGeographicRegionIdA) };


    // cbnGeographicRegionIdB Field Functions 
    bool hasCbnGeographicRegionIdB() const { return this->cbnGeographicRegionIdB_ != nullptr;};
    void deleteCbnGeographicRegionIdB() { this->cbnGeographicRegionIdB_ = nullptr;};
    inline string getCbnGeographicRegionIdB() const { DARABONBA_PTR_GET_DEFAULT(cbnGeographicRegionIdB_, "") };
    inline CreateBandwidthPackageRequest& setCbnGeographicRegionIdB(string cbnGeographicRegionIdB) { DARABONBA_PTR_SET_VALUE(cbnGeographicRegionIdB_, cbnGeographicRegionIdB) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateBandwidthPackageRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBandwidthPackageRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateBandwidthPackageRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateBandwidthPackageRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline CreateBandwidthPackageRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline int32_t getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0) };
    inline CreateBandwidthPackageRequest& setRatio(int32_t ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBandwidthPackageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateBandwidthPackageRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateBandwidthPackageRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateBandwidthPackageRequest::Tag>) };
    inline vector<CreateBandwidthPackageRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateBandwidthPackageRequest::Tag>) };
    inline CreateBandwidthPackageRequest& setTag(const vector<CreateBandwidthPackageRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateBandwidthPackageRequest& setTag(vector<CreateBandwidthPackageRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateBandwidthPackageRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **false** (default): Disables automatic payment. After an order is generated, go to the Order Hub to complete the payment.
    // 
    // - **true**: Enables automatic payment. Payments are automatically completed.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. Valid values:
    // 
    // - **true**: Yes.
    // 
    // - **false** (default): No.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal duration. Unit: months.
    // 
    // Valid values: **1** to **12**. Default value: **1**.
    // 
    // > This parameter takes effect only if **AutoRenew** is set to **true**.
    shared_ptr<int32_t> autoRenewDuration_ {};
    // Specifies whether to use a coupon to automatically pay for the bill. Valid values:
    // 
    // - **true**: Yes.
    // 
    // - **false** (default): No.
    // 
    // > This parameter takes effect only if **AutoPay** is set to **true**.
    shared_ptr<string> autoUseCoupon_ {};
    // The bandwidth of the bandwidth plan. Unit: Mbps.
    // Valid values: **2** to **2000**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> bandwidth_ {};
    // The type of bandwidth. Valid values:
    // 
    // - **Basic**: Basic bandwidth.
    // 
    // - **Enhanced**: Enhanced bandwidth.
    // 
    // - **Advanced**: Advanced bandwidth.
    // 
    // This parameter is required if you set **Type** to **Basic**.
    shared_ptr<string> bandwidthType_ {};
    // The billing method for a pay-as-you-go bandwidth plan. Valid values:
    // 
    // - **PayByTraffic** (default): pay-by-traffic.
    // 
    // - **PayBY95**: pay-by-95th-percentile. This billing method is not available by default. Contact your account manager to use this billing method.
    // 
    // > This parameter takes effect only if **ChargeType** is set to **POSTPAY**.
    shared_ptr<string> billingType_ {};
    // Connected area A of the cross-region acceleration bandwidth plan. Set the value to **China-mainland**.
    // 
    // This parameter is available only on the Alibaba Cloud International Website (www\\.alibabacloud.com).
    shared_ptr<string> cbnGeographicRegionIdA_ {};
    // Connected area B of the cross-region acceleration bandwidth plan. Set the value to **Global**.
    // 
    // This parameter is available only on the Alibaba Cloud International Website (www\\.alibabacloud.com).
    shared_ptr<string> cbnGeographicRegionIdB_ {};
    // The billing method. Valid values:
    // 
    // - **PREPAY** (default): subscription.
    // 
    // - **POSTPAY**: pay-as-you-go. The pay-as-you-go billing method is not available by default. Contact your account manager to use this billing method.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a client token from your client to make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the request as the **ClientToken**. The **RequestId** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The subscription duration.
    // 
    // - If you set **PricingCycle** to **Month**, valid values for **Duration** are **1** to **9**.
    // 
    // - If you set **PricingCycle** to **Year**, valid values for **Duration** are **1** to **3**.
    // 
    // This parameter is required if you set **ChargeType** to **PREPAY**.
    shared_ptr<string> duration_ {};
    // The billing cycle. Valid values:
    // 
    // - **Month**: monthly billing.
    // 
    // - **Year**: yearly billing.
    // 
    // This parameter is required if you set **ChargeType** to **PREPAY**.
    shared_ptr<string> pricingCycle_ {};
    // The coupon code.
    // 
    // > This parameter is available only on the Alibaba Cloud International Website (www\\.alibabacloud.com).
    shared_ptr<string> promotionOptionNo_ {};
    // The percentage of the guaranteed minimum bandwidth if you use the pay-by-95th-percentile metering method. Valid values: **30** to **100**.
    // 
    // > This parameter takes effect only if **BillingType** is set to **PayBY95**.
    shared_ptr<int32_t> ratio_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The tags of the bandwidth plan.
    shared_ptr<vector<CreateBandwidthPackageRequest::Tag>> tag_ {};
    // The type of the bandwidth plan. Valid values:
    // 
    // - **Basic**: a basic bandwidth plan.
    // 
    // - **CrossDomain**: a cross-region acceleration bandwidth plan.
    // 
    // Only **Basic** is supported on the Alibaba Cloud China Website (www\\.aliyun.com).
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
