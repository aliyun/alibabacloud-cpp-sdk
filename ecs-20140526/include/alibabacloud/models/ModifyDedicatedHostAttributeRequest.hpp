// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDedicatedHostAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDedicatedHostAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_TO_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_TO_JSON(AutoPlacement, autoPlacement_);
      DARABONBA_PTR_TO_JSON(CpuOverCommitRatio, cpuOverCommitRatio_);
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDedicatedHostAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAttributes, networkAttributes_);
      DARABONBA_PTR_FROM_JSON(ActionOnMaintenance, actionOnMaintenance_);
      DARABONBA_PTR_FROM_JSON(AutoPlacement, autoPlacement_);
      DARABONBA_PTR_FROM_JSON(CpuOverCommitRatio, cpuOverCommitRatio_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostName, dedicatedHostName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDedicatedHostAttributeRequest() = default ;
    ModifyDedicatedHostAttributeRequest(const ModifyDedicatedHostAttributeRequest &) = default ;
    ModifyDedicatedHostAttributeRequest(ModifyDedicatedHostAttributeRequest &&) = default ;
    ModifyDedicatedHostAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDedicatedHostAttributeRequest() = default ;
    ModifyDedicatedHostAttributeRequest& operator=(const ModifyDedicatedHostAttributeRequest &) = default ;
    ModifyDedicatedHostAttributeRequest& operator=(ModifyDedicatedHostAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->actionOnMaintenance_ == nullptr && this->autoPlacement_ == nullptr && this->cpuOverCommitRatio_ == nullptr && this->dedicatedHostClusterId_ == nullptr && this->dedicatedHostId_ == nullptr
        && this->dedicatedHostName_ == nullptr && this->description_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // networkAttributes Field Functions 
    bool hasNetworkAttributes() const { return this->networkAttributes_ != nullptr;};
    void deleteNetworkAttributes() { this->networkAttributes_ = nullptr;};
    inline const ModifyDedicatedHostAttributeRequest::NetworkAttributes & getNetworkAttributes() const { DARABONBA_PTR_GET_CONST(networkAttributes_, ModifyDedicatedHostAttributeRequest::NetworkAttributes) };
    inline ModifyDedicatedHostAttributeRequest::NetworkAttributes getNetworkAttributes() { DARABONBA_PTR_GET(networkAttributes_, ModifyDedicatedHostAttributeRequest::NetworkAttributes) };
    inline ModifyDedicatedHostAttributeRequest& setNetworkAttributes(const ModifyDedicatedHostAttributeRequest::NetworkAttributes & networkAttributes) { DARABONBA_PTR_SET_VALUE(networkAttributes_, networkAttributes) };
    inline ModifyDedicatedHostAttributeRequest& setNetworkAttributes(ModifyDedicatedHostAttributeRequest::NetworkAttributes && networkAttributes) { DARABONBA_PTR_SET_RVALUE(networkAttributes_, networkAttributes) };


    // actionOnMaintenance Field Functions 
    bool hasActionOnMaintenance() const { return this->actionOnMaintenance_ != nullptr;};
    void deleteActionOnMaintenance() { this->actionOnMaintenance_ = nullptr;};
    inline string getActionOnMaintenance() const { DARABONBA_PTR_GET_DEFAULT(actionOnMaintenance_, "") };
    inline ModifyDedicatedHostAttributeRequest& setActionOnMaintenance(string actionOnMaintenance) { DARABONBA_PTR_SET_VALUE(actionOnMaintenance_, actionOnMaintenance) };


    // autoPlacement Field Functions 
    bool hasAutoPlacement() const { return this->autoPlacement_ != nullptr;};
    void deleteAutoPlacement() { this->autoPlacement_ = nullptr;};
    inline string getAutoPlacement() const { DARABONBA_PTR_GET_DEFAULT(autoPlacement_, "") };
    inline ModifyDedicatedHostAttributeRequest& setAutoPlacement(string autoPlacement) { DARABONBA_PTR_SET_VALUE(autoPlacement_, autoPlacement) };


    // cpuOverCommitRatio Field Functions 
    bool hasCpuOverCommitRatio() const { return this->cpuOverCommitRatio_ != nullptr;};
    void deleteCpuOverCommitRatio() { this->cpuOverCommitRatio_ = nullptr;};
    inline float getCpuOverCommitRatio() const { DARABONBA_PTR_GET_DEFAULT(cpuOverCommitRatio_, 0.0) };
    inline ModifyDedicatedHostAttributeRequest& setCpuOverCommitRatio(float cpuOverCommitRatio) { DARABONBA_PTR_SET_VALUE(cpuOverCommitRatio_, cpuOverCommitRatio) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline ModifyDedicatedHostAttributeRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline ModifyDedicatedHostAttributeRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // dedicatedHostName Field Functions 
    bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
    void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
    inline string getDedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
    inline ModifyDedicatedHostAttributeRequest& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDedicatedHostAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDedicatedHostAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDedicatedHostAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDedicatedHostAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDedicatedHostAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDedicatedHostAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<ModifyDedicatedHostAttributeRequest::NetworkAttributes> networkAttributes_ {};
    // The policy for migrating the instances deployed on the dedicated host when the dedicated host fails or needs to be repaired online. Valid values:
    // 
    // *   Migrate: The instances are migrated to another physical machine and then restarted.
    // *   Stop: The instances are stopped. If the dedicated host cannot be repaired, the instances are migrated to another physical machine and then restarted.
    // 
    // If the dedicated host has cloud disks attached, the default value is Migrate.
    // 
    // If the dedicated host has local disks attached, the default value is Stop.
    shared_ptr<string> actionOnMaintenance_ {};
    // Specifies whether to add the dedicated host to the resource pool for automatic deployment. If you do not specify **DedicatedHostId** when you create an instance on a dedicated host, Alibaba Cloud automatically selects a dedicated host from the resource pool to host the instance. Valid values:
    // 
    // *   on: adds the dedicated host to the resource pool for automatic deployment.
    // *   off: does not add the dedicated host to the resource pool for automatic deployment.
    // 
    // For information about automatic deployment, see [Functions and features](https://help.aliyun.com/document_detail/118938.html).
    shared_ptr<string> autoPlacement_ {};
    // The CPU overcommit ratio. You can configure CPU overcommit ratios only for the following dedicated host types: g6s, c6s, and r6s. Valid values: 1 to 5.
    // 
    // The CPU overcommit ratio affects the number of available vCPUs on a dedicated host. You can use the following formula to calculate the number of available vCPUs on a dedicated host: Number of available vCPUs = Number of physical CPU cores × 2 × CPU overcommit ratio. For example, the number of physical CPU cores on each g6s dedicated host is 52. If you change the CPU overcommit ratio of a g6s dedicated host to 4, the number of available vCPUs on the dedicated host is 416. For scenarios that have minimal requirements for CPU stability or where CPU load is not heavy, such as development and test environments, you can increase the number of available vCPUs on a dedicated host by increasing the CPU overcommit ratio. This allows you to deploy more ECS instances of the same specifications on the dedicated host and reduce the unit deployment cost.
    shared_ptr<float> cpuOverCommitRatio_ {};
    // The ID of the dedicated host cluster to which to assign the dedicated host.
    shared_ptr<string> dedicatedHostClusterId_ {};
    // The ID of the dedicated host.
    // 
    // This parameter is required.
    shared_ptr<string> dedicatedHostId_ {};
    // The name of the dedicated host. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with http:// or https://. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> dedicatedHostName_ {};
    // The description of the dedicated host. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the dedicated host resides. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
