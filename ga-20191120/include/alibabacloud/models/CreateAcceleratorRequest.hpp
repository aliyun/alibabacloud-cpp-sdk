// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCELERATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCELERATORREQUEST_HPP_
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
  class CreateAcceleratorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAcceleratorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthBillingType, bandwidthBillingType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(IpSetConfig, ipSetConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAcceleratorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthBillingType, bandwidthBillingType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(IpSetConfig, ipSetConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateAcceleratorRequest() = default ;
    CreateAcceleratorRequest(const CreateAcceleratorRequest &) = default ;
    CreateAcceleratorRequest(CreateAcceleratorRequest &&) = default ;
    CreateAcceleratorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAcceleratorRequest() = default ;
    CreateAcceleratorRequest& operator=(const CreateAcceleratorRequest &) = default ;
    CreateAcceleratorRequest& operator=(CreateAcceleratorRequest &&) = default ;
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
      // The tag key of the GA instance. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      // 
      // You can specify up to 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value of the GA instance. The tag value cannot be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. It cannot start with `aliyun` or `acs:`.
      // 
      // You can specify up to 20 tag values.
      shared_ptr<string> value_ {};
    };

    class IpSetConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpSetConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      };
      friend void from_json(const Darabonba::Json& j, IpSetConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      };
      IpSetConfig() = default ;
      IpSetConfig(const IpSetConfig &) = default ;
      IpSetConfig(IpSetConfig &&) = default ;
      IpSetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpSetConfig() = default ;
      IpSetConfig& operator=(const IpSetConfig &) = default ;
      IpSetConfig& operator=(IpSetConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessMode_ == nullptr; };
      // accessMode Field Functions 
      bool hasAccessMode() const { return this->accessMode_ != nullptr;};
      void deleteAccessMode() { this->accessMode_ = nullptr;};
      inline string getAccessMode() const { DARABONBA_PTR_GET_DEFAULT(accessMode_, "") };
      inline IpSetConfig& setAccessMode(string accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };


    protected:
      // The access mode of the acceleration area. Valid values:
      // 
      // *   **UserDefine:** custom nearby access mode. You can select acceleration areas and regions based on your business requirements. GA allocates a separate EIP to each acceleration region.
      // *   **Anycast:** automatic nearby access mode. You do not need to specify an acceleration area. GA allocates an Anycast EIP to multiple regions across the globe. Users can connect to the nearest access point of the Alibaba Cloud global transmission network by sending requests to the Anycast EIP.
      shared_ptr<string> accessMode_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewDuration_ == nullptr && this->autoUseCoupon_ == nullptr && this->bandwidth_ == nullptr && this->bandwidthBillingType_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->duration_ == nullptr && this->instanceChargeType_ == nullptr && this->ipSetConfig_ == nullptr
        && this->name_ == nullptr && this->pricingCycle_ == nullptr && this->promotionOptionNo_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->spec_ == nullptr && this->tag_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateAcceleratorRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAcceleratorRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t getAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline CreateAcceleratorRequest& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline string getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, "") };
    inline CreateAcceleratorRequest& setAutoUseCoupon(string autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateAcceleratorRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthBillingType Field Functions 
    bool hasBandwidthBillingType() const { return this->bandwidthBillingType_ != nullptr;};
    void deleteBandwidthBillingType() { this->bandwidthBillingType_ = nullptr;};
    inline string getBandwidthBillingType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthBillingType_, "") };
    inline CreateAcceleratorRequest& setBandwidthBillingType(string bandwidthBillingType) { DARABONBA_PTR_SET_VALUE(bandwidthBillingType_, bandwidthBillingType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAcceleratorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateAcceleratorRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateAcceleratorRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateAcceleratorRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // ipSetConfig Field Functions 
    bool hasIpSetConfig() const { return this->ipSetConfig_ != nullptr;};
    void deleteIpSetConfig() { this->ipSetConfig_ = nullptr;};
    inline const CreateAcceleratorRequest::IpSetConfig & getIpSetConfig() const { DARABONBA_PTR_GET_CONST(ipSetConfig_, CreateAcceleratorRequest::IpSetConfig) };
    inline CreateAcceleratorRequest::IpSetConfig getIpSetConfig() { DARABONBA_PTR_GET(ipSetConfig_, CreateAcceleratorRequest::IpSetConfig) };
    inline CreateAcceleratorRequest& setIpSetConfig(const CreateAcceleratorRequest::IpSetConfig & ipSetConfig) { DARABONBA_PTR_SET_VALUE(ipSetConfig_, ipSetConfig) };
    inline CreateAcceleratorRequest& setIpSetConfig(CreateAcceleratorRequest::IpSetConfig && ipSetConfig) { DARABONBA_PTR_SET_RVALUE(ipSetConfig_, ipSetConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAcceleratorRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateAcceleratorRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline CreateAcceleratorRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAcceleratorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAcceleratorRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateAcceleratorRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAcceleratorRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAcceleratorRequest::Tag>) };
    inline vector<CreateAcceleratorRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateAcceleratorRequest::Tag>) };
    inline CreateAcceleratorRequest& setTag(const vector<CreateAcceleratorRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAcceleratorRequest& setTag(vector<CreateAcceleratorRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to enable automatic payment. Default value: false. Valid values:
    // 
    // *   **false:** disables automatic payment. If you select this option, you must go to the Order Center to complete the payment after an order is generated.
    // *   **true:** enables automatic payment. Payments are automatically completed.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal for the GA instance. Default value: false. Valid values:
    // 
    // *   **true:** enables auto-renewal.
    // *   **false:** disables auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal duration. Unit: months.
    // 
    // Valid values: **1** to **12**. Default value: **1**.
    // 
    // >  This parameter takes effect only when **AutoRenew** is set to **true**.
    shared_ptr<int32_t> autoRenewDuration_ {};
    // Specifies whether to automatically use coupons when making payments. Default value: false. Valid values:
    // 
    // *   **true:** automatically pays bill by using coupons.
    // *   **false:** does not automatically pay bills by using coupons.
    // 
    // >  This parameter takes effect only when **AutoPay** is set to **true**.
    shared_ptr<string> autoUseCoupon_ {};
    shared_ptr<int32_t> bandwidth_ {};
    // The bandwidth billing method.
    // 
    // *   **BandwidthPackage:** billed based on bandwidth plans.
    // *   **CDT:** billed based on data transfer.
    // *   **CDT95:** billed based on the 95th percentile bandwidth. The billing is managed by Cloud Data Transfer (CDT). This bandwidth billing method is not available by default. Contact your Alibaba Cloud account manager for more information.
    shared_ptr<string> bandwidthBillingType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true:** performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The subscription duration of the GA instance.
    // 
    // *   If the **PricingCycle** parameter is set to **Month**, the valid values for the **Duration** parameter are **1** to **9**.
    // *   If the **PricingCycle** parameter is set to **Year**, the valid values for the **Duration** parameter are **1** to **3**.
    // 
    // >  If the **InstanceChargeType** parameter is set to **PREPAY**, you must configure this parameter.
    shared_ptr<int32_t> duration_ {};
    // The billing method of the GA instance.
    // 
    // *   PREPAY (default): subscription
    // *   POSTPAY: pay-as-you-go
    shared_ptr<string> instanceChargeType_ {};
    // The configurations of the acceleration area.
    shared_ptr<CreateAcceleratorRequest::IpSetConfig> ipSetConfig_ {};
    // The name of the GA instance.
    // 
    // The name must be 2 to 128 characters in length and can contain digits, underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> name_ {};
    // The billing cycle of the GA instance. Valid values:
    // 
    // *   **Month:** billed on a monthly basis.
    // *   **Year:** billed on an annual basis.
    // 
    // >  If the **InstanceChargeType** parameter is set to **PREPAY**, you must configure this parameter.
    shared_ptr<string> pricingCycle_ {};
    // The coupon code.
    shared_ptr<string> promotionOptionNo_ {};
    // The ID of the region in which to create the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the standard GA instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The type of the GA instance. Valid values:
    // 
    // *   **1**: Small Ⅰ.
    // *   **2**: Small Ⅱ.
    // *   **3**: Small Ⅲ.
    // *   **5**: Medium Ⅰ.
    // *   **8**: Medium Ⅱ.
    // *   **10**: Medium Ⅲ.
    // *   **20**: Large Ⅰ.
    // *   **30**: Large Ⅱ.
    // *   **40**: Large Ⅲ.
    // *   **50**: Large IV.
    // *   **60**: Large V.
    // *   **70**: Large VI.
    // *   **80**: Large VII.
    // *   **90**: Large VIII.
    // *   **100**: Super Large Ⅰ.
    // *   **200**: Super Large Ⅱ.
    // 
    // > *   GA instances Large III and above are not available by default. To use these instances, contact your Alibaba Cloud account manager.
    // >*   If the **InstanceChargeType** parameter is set to **PREPAY**, you must configure this parameter.
    // 
    // Different specifications provide different capabilities. For more information, see [Instance type](https://help.aliyun.com/document_detail/153127.html).
    shared_ptr<string> spec_ {};
    // The tags of the GA instance.
    shared_ptr<vector<CreateAcceleratorRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
