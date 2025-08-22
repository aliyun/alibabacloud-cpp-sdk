// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAndroidInstanceGroupShrinkRequestTag.hpp>
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
      DARABONBA_PTR_TO_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(NetworkInfo, networkInfoShrink_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
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
      DARABONBA_PTR_FROM_JSON(Ipv6Bandwidth, ipv6Bandwidth_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(NetworkInfo, networkInfoShrink_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NumberOfInstances, numberOfInstances_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
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
    virtual bool empty() const override { this->amount_ != nullptr
        && this->autoPay_ != nullptr && this->autoRenew_ != nullptr && this->bandwidthPackageId_ != nullptr && this->bandwidthPackageType_ != nullptr && this->bizRegionId_ != nullptr
        && this->chargeType_ != nullptr && this->clientToken_ != nullptr && this->enableIpv6_ != nullptr && this->gpuAcceleration_ != nullptr && this->imageId_ != nullptr
        && this->instanceGroupName_ != nullptr && this->instanceGroupSpec_ != nullptr && this->ipv6Bandwidth_ != nullptr && this->keyPairId_ != nullptr && this->networkInfoShrink_ != nullptr
        && this->networkType_ != nullptr && this->numberOfInstances_ != nullptr && this->officeSiteId_ != nullptr && this->period_ != nullptr && this->periodUnit_ != nullptr
        && this->policyGroupId_ != nullptr && this->tag_ != nullptr && this->vSwitchId_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateAndroidInstanceGroupShrinkRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateAndroidInstanceGroupShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateAndroidInstanceGroupShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string bandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableIpv6 Field Functions 
    bool hasEnableIpv6() const { return this->enableIpv6_ != nullptr;};
    void deleteEnableIpv6() { this->enableIpv6_ = nullptr;};
    inline bool enableIpv6() const { DARABONBA_PTR_GET_DEFAULT(enableIpv6_, false) };
    inline CreateAndroidInstanceGroupShrinkRequest& setEnableIpv6(bool enableIpv6) { DARABONBA_PTR_SET_VALUE(enableIpv6_, enableIpv6) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline bool gpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, false) };
    inline CreateAndroidInstanceGroupShrinkRequest& setGpuAcceleration(bool gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceGroupName Field Functions 
    bool hasInstanceGroupName() const { return this->instanceGroupName_ != nullptr;};
    void deleteInstanceGroupName() { this->instanceGroupName_ = nullptr;};
    inline string instanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupName_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setInstanceGroupName(string instanceGroupName) { DARABONBA_PTR_SET_VALUE(instanceGroupName_, instanceGroupName) };


    // instanceGroupSpec Field Functions 
    bool hasInstanceGroupSpec() const { return this->instanceGroupSpec_ != nullptr;};
    void deleteInstanceGroupSpec() { this->instanceGroupSpec_ = nullptr;};
    inline string instanceGroupSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupSpec_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setInstanceGroupSpec(string instanceGroupSpec) { DARABONBA_PTR_SET_VALUE(instanceGroupSpec_, instanceGroupSpec) };


    // ipv6Bandwidth Field Functions 
    bool hasIpv6Bandwidth() const { return this->ipv6Bandwidth_ != nullptr;};
    void deleteIpv6Bandwidth() { this->ipv6Bandwidth_ = nullptr;};
    inline int32_t ipv6Bandwidth() const { DARABONBA_PTR_GET_DEFAULT(ipv6Bandwidth_, 0) };
    inline CreateAndroidInstanceGroupShrinkRequest& setIpv6Bandwidth(int32_t ipv6Bandwidth) { DARABONBA_PTR_SET_VALUE(ipv6Bandwidth_, ipv6Bandwidth) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // networkInfoShrink Field Functions 
    bool hasNetworkInfoShrink() const { return this->networkInfoShrink_ != nullptr;};
    void deleteNetworkInfoShrink() { this->networkInfoShrink_ = nullptr;};
    inline string networkInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(networkInfoShrink_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setNetworkInfoShrink(string networkInfoShrink) { DARABONBA_PTR_SET_VALUE(networkInfoShrink_, networkInfoShrink) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // numberOfInstances Field Functions 
    bool hasNumberOfInstances() const { return this->numberOfInstances_ != nullptr;};
    void deleteNumberOfInstances() { this->numberOfInstances_ = nullptr;};
    inline int32_t numberOfInstances() const { DARABONBA_PTR_GET_DEFAULT(numberOfInstances_, 0) };
    inline CreateAndroidInstanceGroupShrinkRequest& setNumberOfInstances(int32_t numberOfInstances) { DARABONBA_PTR_SET_VALUE(numberOfInstances_, numberOfInstances) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateAndroidInstanceGroupShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAndroidInstanceGroupShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAndroidInstanceGroupShrinkRequestTag>) };
    inline vector<CreateAndroidInstanceGroupShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateAndroidInstanceGroupShrinkRequestTag>) };
    inline CreateAndroidInstanceGroupShrinkRequest& setTag(const vector<CreateAndroidInstanceGroupShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAndroidInstanceGroupShrinkRequest& setTag(vector<CreateAndroidInstanceGroupShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAndroidInstanceGroupShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The number of instance groups. Default value: 1. Maximum value: 1.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // Specifies whether to enable automatic payment. Default value: false.
    // 
    // Valid values:
    // 
    // *   true: enables automatic payment. Make sure that your Alibaba Cloud account has sufficient balance.
    // *   false: disables automatic payment. You must manually complete the payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable auto-renewal. Default value: false.
    // 
    // Valid values:
    // 
    // *   true: automatically renew resource upon expiration.
    // *   false: manually renew resources upon expiration.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    std::shared_ptr<string> bandwidthPackageType_ = nullptr;
    // The ID of the region. You can call the DescribeRegions operation to query the regions where Cloud Phone is supported.
    // 
    // Valid values:
    // 
    // *   cn-shenzhen: China (Shenzhen).
    // *   cn-beijing: China (Beijing).
    // *   cn-shanghai: China (Shanghai).
    // *   cn-hongkong: China (Hong Kong).
    // *   ap-southeast-1: Singapore.
    // *   cn-hangzhou: China (Hangzhou).
    // 
    // This parameter is required.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. The value cannot exceed 100 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<bool> enableIpv6_ = nullptr;
    // Specifies whether to enable GPU acceleration.
    // 
    // Valid values:
    // 
    // *   true: enables GPU acceleration.
    // *   false (default): disables GPU acceleration.
    std::shared_ptr<bool> gpuAcceleration_ = nullptr;
    // The ID of the image. You can call the [DescribeImageList](https://help.aliyun.com/document_detail/2807324.html) operation to query images.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
    // The name of the instance group.
    // 
    // >  The name can be up to 30 characters in length. It can contain letters, digits, colons (:), underscores (_), periods (.), or hyphens (-). It must start with letters but cannot start with `http://` or `https://`.
    std::shared_ptr<string> instanceGroupName_ = nullptr;
    // The specifications of the instance group. You can call the [DescribeSpec](https://help.aliyun.com/document_detail/2807299.html) operation to query the available specifications.
    // 
    // Valid values:
    // 
    // *   acp.perf.large: Performance (8 vCPUs, 16 GiB of memory, and 32 GiB of storage.
    // *   acp.basic.small: Lightweight (2 vCPUs, 4 GiB of memory, and 32 GiB of storage).
    // *   acp.std.large: Standard (4 vCPUs, 8 GiB of memory, and 32 GiB of storage).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceGroupSpec_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<int32_t> ipv6Bandwidth_ = nullptr;
    // The ID of the key pair. When you create an instance group and specify a valid key pair ID, all cloud phone instances within the group will automatically be bound to that key pair upon creation. This eliminates the need to manually bind key pairs to individual cloud phone instances.
    // 
    // >  Binding key pairs to cloud phone instances is currently not supported during instance group resizing.
    std::shared_ptr<string> keyPairId_ = nullptr;
    std::shared_ptr<string> networkInfoShrink_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    // The number of cloud phones in the instance group. Maximum value: 100.
    std::shared_ptr<int32_t> numberOfInstances_ = nullptr;
    // The ID of the network.
    // 
    // *   This parameter is required if you assign a shared network to cloud phones. You can go to the [Network](https://wya.wuying.aliyun.com/network) page of the Cloud Phone console to retrieve the ID of a **shared network**. If no shared network is available in the Cloud Phone console, you can leave this parameter empty. The system automatically creates one when you create an instance group.
    // *   This parameter is required if you assign a virtual private cloud (VPC) to cloud phones. You can go to the [Network](https://wya.wuying.aliyun.com/network) page of the Cloud Phone console to retrieve the ID of a **VPC**. If no VPC is available in the Cloud Phone console, you must first create one.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The subscription duration. The unit is specified by PeriodUnit.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration.
    // 
    // Valid values:
    // 
    // *   Month
    // *   Year
    // *   Hour (Note that this unit is supported only by pay-as-you-go.)
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The ID of the policy. You can call the [ListPolicyGroups](https://help.aliyun.com/document_detail/2807352.html) operation to query policies.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The tags
    std::shared_ptr<vector<CreateAndroidInstanceGroupShrinkRequestTag>> tag_ = nullptr;
    // The ID of the vSwitch. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/448774.html) operation to query vSwitches.
    // 
    // *   This parameter is not required if you assign a shared network to cloud phones.
    // *   This parameter is required if you assign a VPC to cloud phones. The vSwitch specified by this parameter is used to create cloud phones.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
