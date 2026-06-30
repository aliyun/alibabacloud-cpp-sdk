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
      // The tag key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // You can specify up to 20 tag keys.
      shared_ptr<string> key_ {};
      // The tag value of the GA instance. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
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
      // - **UserDefine**: Custom nearby access mode. Select acceleration areas and regions as needed. Global Accelerator provides a separate elastic IP address (EIP) for each acceleration region.
      // 
      // - **Anycast**: Automatic nearby access mode. You do not need to configure an acceleration area. Global Accelerator provides an Anycast EIP for multiple regions. Users connect to the nearest access point of the Alibaba Cloud network using the Anycast EIP.
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
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **false** (default): Disables automatic payment. After an order is generated, go to the Order Hub to complete the payment.
    // 
    // - **true**: Enables automatic payment. The system automatically completes the payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal for the instance. Valid values:
    // 
    // - **true**: Yes.
    // 
    // - **false** (default): No.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal duration. Unit: month.
    // 
    // Valid values: **1** to **12**. Default value: **1**.
    // 
    // > This parameter is valid only when **AutoRenew** is set to **true**.
    shared_ptr<int32_t> autoRenewDuration_ {};
    // Specifies whether to automatically apply coupons to your bills. Valid values:
    // 
    // - **true**: Yes.
    // 
    // - **false** (default): No.
    // 
    // > This parameter is valid only when **AutoPay** is set to **true**.
    shared_ptr<string> autoUseCoupon_ {};
    // The bandwidth of the standard GA instance. Unit: **Mbps**.
    // 
    // Valid values: 200 to 5000.
    // 
    // > This parameter is required and valid only when the access mode of the acceleration area is Anycast.
    shared_ptr<int32_t> bandwidth_ {};
    // The bandwidth billing method.
    // 
    // - **BandwidthPackage**: Billed by bandwidth plan.
    // 
    // - **CDT**: Billed by data transfer.
    shared_ptr<string> bandwidthBillingType_ {};
    // A client token that is used to ensure the idempotence of the request.
    // 
    // Generate a parameter value from your client to make sure that the value is unique among different requests. The ClientToken parameter can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the request as the **ClientToken**. The **RequestId** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Performs a dry run. The system checks the required parameters, request format, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // 
    // - **false** (default): Sends a normal request. If the request passes the check, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The subscription duration.
    // 
    // - If **PricingCycle** is set to **Month**, the valid values for **Duration** are **1** to **9**.
    // 
    // - If **PricingCycle** is set to **Year**, the valid values for **Duration** are **1** to **3**.
    // 
    // > This parameter is required if **InstanceChargeType** (the billing method of the GA instance) is set to **PREPAY** (subscription).
    shared_ptr<int32_t> duration_ {};
    // The billing method of the GA instance.
    // 
    // - PREPAY (default): subscription.
    // 
    // - POSTPAY: pay-as-you-go.
    shared_ptr<string> instanceChargeType_ {};
    // The configurations of the acceleration area.
    shared_ptr<CreateAcceleratorRequest::IpSetConfig> ipSetConfig_ {};
    // The name of the GA instance.
    // 
    // The name must be 1 to 128 characters in length, start with a letter, and can contain digits, underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    // The billing cycle. Valid values:
    // 
    // - **Month**: Billed by month.
    // 
    // - **Year**: Billed by year.
    // 
    // > This parameter is required if **InstanceChargeType** (the billing method of the GA instance) is set to **PREPAY** (subscription).
    shared_ptr<string> pricingCycle_ {};
    // The coupon code.
    // 
    // > This parameter is available only on the Alibaba Cloud International Website (www\\.alibabacloud.com).
    shared_ptr<string> promotionOptionNo_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the standard GA instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The instance type of the GA instance. Valid values:
    // 
    // - **1**: Small I
    // 
    // - **2**: Small II
    // 
    // - **3**: Small III
    // 
    // - **5**: Medium I
    // 
    // - **8**: Medium II
    // 
    // - **10**: Medium III
    // 
    // - **20**: Large I
    // 
    // - **30**: Large II
    // 
    // - **40**: Large III
    // 
    // - **50**: Large IV
    // 
    // - **60**: Large V
    // 
    // - **70**: Large VI
    // 
    // - **80**: Large VII
    // 
    // - **90**: Large VIII
    // 
    // - **100**: Super Large I
    // 
    // - **200**: Super Large II
    // 
    // > * Currently, the Large III and higher instance types are available only to users on the whitelist. To use these instance types, contact your account manager.
    // >
    // > * This parameter is required if **InstanceChargeType** (the billing method of the GA instance) is set to **PREPAY** (subscription).
    // 
    // The definitions of different instance types are different. For more information, see [Instance types](https://help.aliyun.com/document_detail/153127.html).
    shared_ptr<string> spec_ {};
    // The tags of the GA instance.
    shared_ptr<vector<CreateAcceleratorRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
