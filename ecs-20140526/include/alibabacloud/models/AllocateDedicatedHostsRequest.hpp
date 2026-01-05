// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATEDEDICATEDHOSTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATEDEDICATEDHOSTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AllocateDedicatedHostsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateDedicatedHostsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_TO_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_TO_JSON(AutoPlacement, autoPlacement_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CpuOverCommitRatio, cpuOverCommitRatio_);
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
      DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MinQuantity, minQuantity_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateDedicatedHostsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_FROM_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_FROM_JSON(AutoPlacement, autoPlacement_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CpuOverCommitRatio, cpuOverCommitRatio_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostName, dedicatedHostName_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MinQuantity, minQuantity_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    AllocateDedicatedHostsRequest() = default ;
    AllocateDedicatedHostsRequest(const AllocateDedicatedHostsRequest &) = default ;
    AllocateDedicatedHostsRequest(AllocateDedicatedHostsRequest &&) = default ;
    AllocateDedicatedHostsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateDedicatedHostsRequest() = default ;
    AllocateDedicatedHostsRequest& operator=(const AllocateDedicatedHostsRequest &) = default ;
    AllocateDedicatedHostsRequest& operator=(AllocateDedicatedHostsRequest &&) = default ;
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
      // The key of tag N to add to the dedicated host. Valid values of N: 1 to 20.
      // 
      // The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with acs: or aliyun.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the dedicated host. Valid values of N: 1 to 20.
      // 
      // The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class NetworkAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(SlbUdpTimeout, slbUdpTimeout_);
        DARABONBA_PTR_TO_JSON(UdpTimeout, udpTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(SlbUdpTimeout, slbUdpTimeout_);
        DARABONBA_PTR_FROM_JSON(UdpTimeout, udpTimeout_);
      };
      NetworkAttributes() = default ;
      NetworkAttributes(const NetworkAttributes &) = default ;
      NetworkAttributes(NetworkAttributes &&) = default ;
      NetworkAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkAttributes() = default ;
      NetworkAttributes& operator=(const NetworkAttributes &) = default ;
      NetworkAttributes& operator=(NetworkAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->slbUdpTimeout_ == nullptr
        && this->udpTimeout_ == nullptr; };
      // slbUdpTimeout Field Functions 
      bool hasSlbUdpTimeout() const { return this->slbUdpTimeout_ != nullptr;};
      void deleteSlbUdpTimeout() { this->slbUdpTimeout_ = nullptr;};
      inline int32_t getSlbUdpTimeout() const { DARABONBA_PTR_GET_DEFAULT(slbUdpTimeout_, 0) };
      inline NetworkAttributes& setSlbUdpTimeout(int32_t slbUdpTimeout) { DARABONBA_PTR_SET_VALUE(slbUdpTimeout_, slbUdpTimeout) };


      // udpTimeout Field Functions 
      bool hasUdpTimeout() const { return this->udpTimeout_ != nullptr;};
      void deleteUdpTimeout() { this->udpTimeout_ = nullptr;};
      inline int32_t getUdpTimeout() const { DARABONBA_PTR_GET_DEFAULT(udpTimeout_, 0) };
      inline NetworkAttributes& setUdpTimeout(int32_t udpTimeout) { DARABONBA_PTR_SET_VALUE(udpTimeout_, udpTimeout) };


    protected:
      // The timeout period for a UDP session between a Server Load Balancer (SLB) instance and the dedicated host. Unit: seconds. Valid values: 15 to 310.
      shared_ptr<int32_t> slbUdpTimeout_ {};
      // The timeout period for a UDP session between a user and an Alibaba Cloud service on the dedicated host. Unit: seconds. Valid values: 15 to 310.
      shared_ptr<int32_t> udpTimeout_ {};
    };

    virtual bool empty() const override { return this->networkAttributes_ == nullptr
        && this->actionOnMaintenance_ == nullptr && this->autoPlacement_ == nullptr && this->autoReleaseTime_ == nullptr && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr
        && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->cpuOverCommitRatio_ == nullptr && this->dedicatedHostClusterId_ == nullptr && this->dedicatedHostName_ == nullptr
        && this->dedicatedHostType_ == nullptr && this->description_ == nullptr && this->minQuantity_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->quantity_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->zoneId_ == nullptr; };
    // networkAttributes Field Functions 
    bool hasNetworkAttributes() const { return this->networkAttributes_ != nullptr;};
    void deleteNetworkAttributes() { this->networkAttributes_ = nullptr;};
    inline const AllocateDedicatedHostsRequest::NetworkAttributes & getNetworkAttributes() const { DARABONBA_PTR_GET_CONST(networkAttributes_, AllocateDedicatedHostsRequest::NetworkAttributes) };
    inline AllocateDedicatedHostsRequest::NetworkAttributes getNetworkAttributes() { DARABONBA_PTR_GET(networkAttributes_, AllocateDedicatedHostsRequest::NetworkAttributes) };
    inline AllocateDedicatedHostsRequest& setNetworkAttributes(const AllocateDedicatedHostsRequest::NetworkAttributes & networkAttributes) { DARABONBA_PTR_SET_VALUE(networkAttributes_, networkAttributes) };
    inline AllocateDedicatedHostsRequest& setNetworkAttributes(AllocateDedicatedHostsRequest::NetworkAttributes && networkAttributes) { DARABONBA_PTR_SET_RVALUE(networkAttributes_, networkAttributes) };


    // actionOnMaintenance Field Functions 
    bool hasActionOnMaintenance() const { return this->actionOnMaintenance_ != nullptr;};
    void deleteActionOnMaintenance() { this->actionOnMaintenance_ = nullptr;};
    inline string getActionOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(actionOnMaintenance_, "") };
    inline AllocateDedicatedHostsRequest& setActionOnMaintenance(string actionOnMaintenance) { DARABONBA_PTR_SET_VALUE(actionOnMaintenance_, actionOnMaintenance) };


    // autoPlacement Field Functions 
    bool hasAutoPlacement() const { return this->autoPlacement_ != nullptr;};
    void deleteAutoPlacement() { this->autoPlacement_ = nullptr;};
    inline string getAutoPlacement() const { DARABONBA_PTR_GET_DEFAULT(autoPlacement_, "") };
    inline AllocateDedicatedHostsRequest& setAutoPlacement(string autoPlacement) { DARABONBA_PTR_SET_VALUE(autoPlacement_, autoPlacement) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline string getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
    inline AllocateDedicatedHostsRequest& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline AllocateDedicatedHostsRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline AllocateDedicatedHostsRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline AllocateDedicatedHostsRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AllocateDedicatedHostsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cpuOverCommitRatio Field Functions 
    bool hasCpuOverCommitRatio() const { return this->cpuOverCommitRatio_ != nullptr;};
    void deleteCpuOverCommitRatio() { this->cpuOverCommitRatio_ = nullptr;};
    inline float getCpuOverCommitRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuOverCommitRatio_, 0.0) };
    inline AllocateDedicatedHostsRequest& setCpuOverCommitRatio(float cpuOverCommitRatio) { DARABONBA_PTR_SET_VALUE(cpuOverCommitRatio_, cpuOverCommitRatio) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline AllocateDedicatedHostsRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostName Field Functions 
    bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
    void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
    inline string getDedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
    inline AllocateDedicatedHostsRequest& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


    // dedicatedHostType Field Functions 
    bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
    void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
    inline string getDedicatedHostType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostType_, "") };
    inline AllocateDedicatedHostsRequest& setDedicatedHostType(string dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AllocateDedicatedHostsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // minQuantity Field Functions 
    bool hasMinQuantity() const { return this->minQuantity_ != nullptr;};
    void deleteMinQuantity() { this->minQuantity_ = nullptr;};
    inline int32_t getMinQuantity() const { DARABONBA_PTR_GET_DEFAULT(minQuantity_, 0) };
    inline AllocateDedicatedHostsRequest& setMinQuantity(int32_t minQuantity) { DARABONBA_PTR_SET_VALUE(minQuantity_, minQuantity) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AllocateDedicatedHostsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AllocateDedicatedHostsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline AllocateDedicatedHostsRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline AllocateDedicatedHostsRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline AllocateDedicatedHostsRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AllocateDedicatedHostsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AllocateDedicatedHostsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AllocateDedicatedHostsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AllocateDedicatedHostsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<AllocateDedicatedHostsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<AllocateDedicatedHostsRequest::Tag>) };
    inline vector<AllocateDedicatedHostsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<AllocateDedicatedHostsRequest::Tag>) };
    inline AllocateDedicatedHostsRequest& setTag(const vector<AllocateDedicatedHostsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline AllocateDedicatedHostsRequest& setTag(vector<AllocateDedicatedHostsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline AllocateDedicatedHostsRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<AllocateDedicatedHostsRequest::NetworkAttributes> networkAttributes_ {};
    // The policy for migrating the instances deployed on the dedicated host when the dedicated host fails or needs to be repaired online. Valid values:
    // 
    // *   Migrate: The instances are migrated to another physical machine and then restarted.
    // 
    //     If cloud disks are attached to the dedicated host, the default value is Migrate.
    // 
    // *   Stop: The instances are stopped. If the dedicated host cannot be repaired, the instances are migrated to another physical machine and then restarted.
    // 
    //     If local disks are attached to the dedicated host, the default value is Stop.
    shared_ptr<string> actionOnMaintenance_ {};
    // Specifies whether to add the dedicated host to the resource pool for automatic deployment. If you create an ECS instance on a dedicated host without specifying the **DedicatedHostId** parameter, Alibaba Cloud selects a dedicated host from the resource pool to host the instance. For more information, see [Automatic deployment](https://help.aliyun.com/document_detail/118938.html). Valid values:
    // 
    // *   on: adds the dedicated host to the resource pool for automatic deployment.
    // *   off: does not add the dedicated host to the resource pool for automatic deployment.
    // 
    // Default value: on.
    // 
    // > If you do not want to add the dedicated host to the resource pool for automatic deployment, set this parameter to off.
    shared_ptr<string> autoPlacement_ {};
    // The time when to automatically release the dedicated host. Specify the time in the `ISO 8601` standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > 
    // 
    // *   It must be at least half an hour later than the current time.
    // 
    // *   It must be at most three years later than the current time.
    // 
    // *   If the value of seconds (ss) is not 00, it is automatically set to 00.
    shared_ptr<string> autoReleaseTime_ {};
    // Specifies whether to automatically renew the subscription dedicated host.
    // 
    // > The **AutoRenew** parameter takes effect only when the **ChargeType** parameter is set to PrePaid.
    // 
    // Default value: false
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal duration of the dedicated host. The **AutoRenewPeriod** parameter takes effect and is required only when the **AutoRenew** parameter is set to true. Valid values:
    // 
    // Valid values when PeriodUnit is set to Month: 1, 2, 3, 6, and 12.
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The billing method of the dedicated host. Valid values:
    // 
    // *   PrePaid: subscription. If you set this parameter to PrePaid, make sure that you have sufficient account balance or credits. Otherwise, `InvalidPayMethod` is returned.
    // *   PostPaid: pay-as-you-go.
    // 
    // Default value: PostPaid.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The CPU overcommit ratio. You can configure CPU overcommit ratios only for the following dedicated host types: g6s, c6s, and r6s. Valid values: 1 to 5.
    // 
    // The CPU overcommit ratio affects the number of available vCPUs on a dedicated host. You can use the following formula to calculate the number of available vCPUs on a dedicated host: Number of available vCPUs = Number of physical CPU cores × 2 × CPU overcommit ratio. For example, the number of physical CPU cores on each g6s dedicated host is 52. If you set the CPU overcommit ratio of a g6s dedicated host to 4, the number of available vCPUs on the dedicated host is 416. For scenarios that have minimal requirements on CPU stability or where CPU load is not heavy, such as development and test environments, you can increase the number of available vCPUs on a dedicated host by increasing the CPU overcommit ratio. This way, you can deploy more ECS instances of the same specifications on the dedicated host and reduce the unit deployment cost.
    shared_ptr<float> cpuOverCommitRatio_ {};
    // The ID of the dedicated host cluster in which to create the dedicated host.
    shared_ptr<string> dedicatedHostClusterId_ {};
    // The name of the dedicated host. The name must be 2 to 128 characters in length and can contain letters and digits. The name can contain colons (:), underscores (_), periods (.), and hyphens (-).
    shared_ptr<string> dedicatedHostName_ {};
    // The dedicated host type. You can call the [DescribeDedicatedHostTypes](https://help.aliyun.com/document_detail/134240.html) operation to query the most recent list of dedicated host types.
    // 
    // This parameter is required.
    shared_ptr<string> dedicatedHostType_ {};
    // The description of the dedicated host. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The minimum number of dedicated hosts to create. Valid values: 1 to 100.
    // 
    // > If the number of available dedicated hosts is less than the minimum number of dedicated hosts to create, the dedicated hosts fail to be created.
    shared_ptr<int32_t> minQuantity_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The subscription duration of the dedicated host. The `Period` parameter is required and takes effect only when the `ChargeType` parameter is set to `PrePaid`. Valid values:
    // 
    // *   Valid values when the PeriodUnit parameter is set to Month: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    // *   Valid values when the PeriodUnit parameter is set to Year: 1, 2, 3, 4, and 5.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration of the dedicated host. Valid values:
    // 
    // *   Month
    // *   Year
    // 
    // Default value: Month.
    shared_ptr<string> periodUnit_ {};
    // The number of dedicated hosts that you want to create. Valid values: 1 to 100.
    // 
    // Default value: 1.
    shared_ptr<int32_t> quantity_ {};
    // The ID of the region in which to create the dedicated host. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which to assign the dedicated host.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags to add to the dedicated host.
    shared_ptr<vector<AllocateDedicatedHostsRequest::Tag>> tag_ {};
    // The ID of the zone in which to create the dedicated host.
    // 
    // This parameter is empty by default. If you do not specify a zone, the system selects a zone.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
