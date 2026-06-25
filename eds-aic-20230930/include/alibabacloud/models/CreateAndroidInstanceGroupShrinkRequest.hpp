// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAndroidInstanceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndroidInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_TO_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_TO_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_TO_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_TO_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(NetworkInfo, networkInfoShrink_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PaidCallBackUrl, paidCallBackUrl_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_TO_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndroidInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableIpv6, enableIpv6_);
      DARABONBA_PTR_FROM_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_FROM_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(NetworkInfo, networkInfoShrink_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PaidCallBackUrl, paidCallBackUrl_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_FROM_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateAndroidInstanceGroupShrinkRequest() = default ;
    CreateAndroidInstanceGroupShrinkRequest(const CreateAndroidInstanceGroupShrinkRequest &) = default ;
    CreateAndroidInstanceGroupShrinkRequest(CreateAndroidInstanceGroupShrinkRequest &&) = default ;
    CreateAndroidInstanceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndroidInstanceGroupShrinkRequest() = default ;
    CreateAndroidInstanceGroupShrinkRequest& operator=(const CreateAndroidInstanceGroupShrinkRequest &) = default ;
    CreateAndroidInstanceGroupShrinkRequest& operator=(CreateAndroidInstanceGroupShrinkRequest &&) = default ;
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bandwidthPackageId_ == nullptr && this->bandwidthPackageType_ == nullptr && this->bizRegionId_ == nullptr
        && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->enableIpv6_ == nullptr && this->gpuAcceleration_ == nullptr && this->imageId_ == nullptr
        && this->instanceGroupName_ == nullptr && this->instanceGroupSpec_ == nullptr && this->instanceVersion_ == nullptr && this->ipv6Bandwidth_ == nullptr && this->keyPairId_ == nullptr
        && this->networkInfoShrink_ == nullptr && this->networkType_ == nullptr && this->numberOfInstances_ == nullptr && this->officeSiteId_ == nullptr && this->paidCallBackUrl_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->policyGroupId_ == nullptr && this->promotionId_ == nullptr && this->saleMode_ == nullptr
        && this->streamMode_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateAndroidInstanceGroupShrinkRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateAndroidInstanceGroupShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAndroidInstanceGroupShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string getBandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool getEnableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline CreateAndroidInstanceGroupShrinkRequest& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline bool getGpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, false) };
    inline CreateAndroidInstanceGroupShrinkRequest& setGpuAcceleration(bool gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceGroupName Field Functions 
    bool hasInstanceGroupName() const { return this->instanceGroupName_ != nullptr;};
    void deleteInstanceGroupName() { this->instanceGroupName_ = nullptr;};
    inline string getInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupName_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setInstanceGroupName(string instanceGroupName) { DARABONBA_PTR_SET_VALUE(instanceGroupName_, instanceGroupName) };


    // instanceGroupSpec Field Functions 
    bool hasInstanceGroupSpec() const { return this->instanceGroupSpec_ != nullptr;};
    void deleteInstanceGroupSpec() { this->instanceGroupSpec_ = nullptr;};
    inline string getInstanceGroupSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupSpec_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setInstanceGroupSpec(string instanceGroupSpec) { DARABONBA_PTR_SET_VALUE(instanceGroupSpec_, instanceGroupSpec) };


    // instanceVersion Field Functions 
    bool hasInstanceVersion() const { return this->instanceVersion_ != nullptr;};
    void deleteInstanceVersion() { this->instanceVersion_ = nullptr;};
    inline string getInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceVersion_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setInstanceVersion(string instanceVersion) { DARABONBA_PTR_SET_VALUE(instanceVersion_, instanceVersion) };


    // ipv6Bandwidth Field Functions 
    bool hasIpv6Bandwidth() const { return this->ipv6Bandwidth_ != nullptr;};
    void deleteIpv6Bandwidth() { this->ipv6Bandwidth_ = nullptr;};
    inline int32_t getIpv6Bandwidth() const { DARABONBA_PTR_GET_DEFAULT(ipv6Bandwidth_, 0) };
    inline CreateAndroidInstanceGroupShrinkRequest& setIpv6Bandwidth(int32_t ipv6Bandwidth) { DARABONBA_PTR_SET_VALUE(ipv6Bandwidth_, ipv6Bandwidth) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // networkInfoShrink Field Functions 
    bool hasNetworkInfoShrink() const { return this->networkInfoShrink_ != nullptr;};
    void deleteNetworkInfoShrink() { this->networkInfoShrink_ = nullptr;};
    inline string getNetworkInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(networkInfoShrink_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setNetworkInfoShrink(string networkInfoShrink) { DARABONBA_PTR_SET_VALUE(networkInfoShrink_, networkInfoShrink) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // numberOfInstances Field Functions 
    bool hasNumberOfInstances() const { return this->numberOfInstances_ != nullptr;};
    void deleteNumberOfInstances() { this->numberOfInstances_ = nullptr;};
    inline int32_t getNumberOfInstances() const { DARABONBA_PTR_GET_DEFAULT(numberOfInstances_, 0) };
    inline CreateAndroidInstanceGroupShrinkRequest& setNumberOfInstances(int32_t numberOfInstances) { DARABONBA_PTR_SET_VALUE(numberOfInstances_, numberOfInstances) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // paidCallBackUrl Field Functions 
    bool hasPaidCallBackUrl() const { return this->paidCallBackUrl_ != nullptr;};
    void deletePaidCallBackUrl() { this->paidCallBackUrl_ = nullptr;};
    inline string getPaidCallBackUrl() const { DARABONBA_PTR_GET_DEFAULT(paidCallBackUrl_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setPaidCallBackUrl(string paidCallBackUrl) { DARABONBA_PTR_SET_VALUE(paidCallBackUrl_, paidCallBackUrl) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAndroidInstanceGroupShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string getSaleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // streamMode Field Functions 
    bool hasStreamMode() const { return this->streamMode_ != nullptr;};
    void deleteStreamMode() { this->streamMode_ = nullptr;};
    inline int32_t getStreamMode() const { DARABONBA_PTR_GET_DEFAULT(streamMode_, 0) };
    inline CreateAndroidInstanceGroupShrinkRequest& setStreamMode(int32_t streamMode) { DARABONBA_PTR_SET_VALUE(streamMode_, streamMode) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAndroidInstanceGroupShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAndroidInstanceGroupShrinkRequest::Tag>) };
    inline vector<CreateAndroidInstanceGroupShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateAndroidInstanceGroupShrinkRequest::Tag>) };
    inline CreateAndroidInstanceGroupShrinkRequest& setTag(const vector<CreateAndroidInstanceGroupShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAndroidInstanceGroupShrinkRequest& setTag(vector<CreateAndroidInstanceGroupShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The number of instance groups to create. Valid values: 1 to 100. Default value: 1.
    shared_ptr<int32_t> amount_ {};
    // Specifies whether to enable automatic payment. Default value: false.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal for subscription resources. Default value: false.
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<string> bandwidthPackageId_ {};
    shared_ptr<string> bandwidthPackageType_ {};
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions where Cloud Phone instances are available.
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The billing method.
    shared_ptr<string> chargeType_ {};
    // A client-generated token to ensure request idempotence. This parameter prevents duplicate requests. The token can be up to 100 characters in length.
    shared_ptr<string> clientToken_ {};
    // > This parameter is not publicly available.
    shared_ptr<bool> enableIpv6_ {};
    // Specifies whether to enable GPU acceleration.
    shared_ptr<bool> gpuAcceleration_ {};
    // The image ID. You can call the [DescribeImageList](~~DescribeImageList~~) operation to query available images for Cloud Phone instances.
    // 
    // This parameter is required.
    shared_ptr<string> imageId_ {};
    // The name of the instance group.
    // 
    // > The name can be up to 30 characters in length. It must start with an uppercase or lowercase letter or a Chinese character, and cannot start with `http://` or `https://`. The name can contain only Chinese characters, letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    shared_ptr<string> instanceGroupName_ {};
    // The instance group specification. You can call the [DescribeSpec](~~DescribeSpec~~) operation to query the specifications that are available for Cloud Phone instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceGroupSpec_ {};
    shared_ptr<string> instanceVersion_ {};
    // > This parameter is not publicly available.
    shared_ptr<int32_t> ipv6Bandwidth_ {};
    // The key pair ID. If you specify a valid key pair ID when you create the instance group, the system attaches the key pair to all successfully created instances. No separate API call is required to attach the key pair.
    // 
    // > Attaching a key pair during a scale-out operation is not supported.
    shared_ptr<string> keyPairId_ {};
    shared_ptr<string> networkInfoShrink_ {};
    shared_ptr<string> networkType_ {};
    // The number of instances in the instance group. The maximum value is 100.
    shared_ptr<int32_t> numberOfInstances_ {};
    // The network ID.
    // 
    // - To create instances in a Shared Network: This parameter is optional. Specify the ID of a **Shared Network**. You can find the ID on the [Cloud Phone console > Network](https://wya.wuying.aliyun.com/network) page. If no Shared Network is available in the console, you can omit this parameter. The system automatically creates a Shared Network when you create the instance group.
    // 
    // - To create instances in a VPC: This parameter is required. Specify the ID of a **VPC**. You can find the ID on the [Cloud Phone console > Network](https://wya.wuying.aliyun.com/network) page. If no VPC is available in the console, you must create one first.
    shared_ptr<string> officeSiteId_ {};
    shared_ptr<string> paidCallBackUrl_ {};
    // The subscription duration. The PeriodUnit parameter specifies the unit.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration.
    shared_ptr<string> periodUnit_ {};
    // The policy ID. You can call the [ListPolicyGroups](~~ListPolicyGroups~~) operation to query available policies.
    shared_ptr<string> policyGroupId_ {};
    shared_ptr<string> promotionId_ {};
    shared_ptr<string> saleMode_ {};
    shared_ptr<int32_t> streamMode_ {};
    // The resource tags.
    shared_ptr<vector<CreateAndroidInstanceGroupShrinkRequest::Tag>> tag_ {};
    // The vSwitch ID. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/448774.html) operation to query available vSwitches.
    // 
    // - If you create instances in a Shared Network, omit this parameter.
    // 
    // - If you create instances in a VPC, this parameter is required. The system creates the instances in the specified vSwitch.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
