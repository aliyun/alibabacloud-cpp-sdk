// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHNETWORKINTERFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHNETWORKINTERFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class AttachNetworkInterfaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkCardIndex, networkCardIndex_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrunkNetworkInstanceId, trunkNetworkInstanceId_);
      DARABONBA_PTR_TO_JSON(WaitForNetworkConfigurationReady, waitForNetworkConfigurationReady_);
    };
    friend void from_json(const Darabonba::Json& j, AttachNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkCardIndex, networkCardIndex_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrunkNetworkInstanceId, trunkNetworkInstanceId_);
      DARABONBA_PTR_FROM_JSON(WaitForNetworkConfigurationReady, waitForNetworkConfigurationReady_);
    };
    AttachNetworkInterfaceRequest() = default ;
    AttachNetworkInterfaceRequest(const AttachNetworkInterfaceRequest &) = default ;
    AttachNetworkInterfaceRequest(AttachNetworkInterfaceRequest &&) = default ;
    AttachNetworkInterfaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachNetworkInterfaceRequest() = default ;
    AttachNetworkInterfaceRequest& operator=(const AttachNetworkInterfaceRequest &) = default ;
    AttachNetworkInterfaceRequest& operator=(AttachNetworkInterfaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->networkCardIndex_ != nullptr && this->networkInterfaceId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->trunkNetworkInstanceId_ != nullptr && this->waitForNetworkConfigurationReady_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachNetworkInterfaceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkCardIndex Field Functions 
    bool hasNetworkCardIndex() const { return this->networkCardIndex_ != nullptr;};
    void deleteNetworkCardIndex() { this->networkCardIndex_ = nullptr;};
    inline int32_t networkCardIndex() const { DARABONBA_PTR_GET_DEFAULT(networkCardIndex_, 0) };
    inline AttachNetworkInterfaceRequest& setNetworkCardIndex(int32_t networkCardIndex) { DARABONBA_PTR_SET_VALUE(networkCardIndex_, networkCardIndex) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline AttachNetworkInterfaceRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AttachNetworkInterfaceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachNetworkInterfaceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachNetworkInterfaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachNetworkInterfaceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AttachNetworkInterfaceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trunkNetworkInstanceId Field Functions 
    bool hasTrunkNetworkInstanceId() const { return this->trunkNetworkInstanceId_ != nullptr;};
    void deleteTrunkNetworkInstanceId() { this->trunkNetworkInstanceId_ = nullptr;};
    inline string trunkNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(trunkNetworkInstanceId_, "") };
    inline AttachNetworkInterfaceRequest& setTrunkNetworkInstanceId(string trunkNetworkInstanceId) { DARABONBA_PTR_SET_VALUE(trunkNetworkInstanceId_, trunkNetworkInstanceId) };


    // waitForNetworkConfigurationReady Field Functions 
    bool hasWaitForNetworkConfigurationReady() const { return this->waitForNetworkConfigurationReady_ != nullptr;};
    void deleteWaitForNetworkConfigurationReady() { this->waitForNetworkConfigurationReady_ = nullptr;};
    inline bool waitForNetworkConfigurationReady() const { DARABONBA_PTR_GET_DEFAULT(waitForNetworkConfigurationReady_, false) };
    inline AttachNetworkInterfaceRequest& setWaitForNetworkConfigurationReady(bool waitForNetworkConfigurationReady) { DARABONBA_PTR_SET_VALUE(waitForNetworkConfigurationReady_, waitForNetworkConfigurationReady) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The index of the network interface controller (NIC).
    // 
    // > The value of this parameter varies based on the instance family of the specified instance. If the instance type of the specified instance does not support NICs, leave this parameter empty. If the instance type of the specified instance supports NICs, set this parameter to a valid value. For information about the valid values of this parameter, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<int32_t> networkCardIndex_ = nullptr;
    // The ID of the ENI.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the trunk ENI.
    // 
    // > This parameter is unavailable.
    std::shared_ptr<string> trunkNetworkInstanceId_ = nullptr;
    // > This parameter is no longer supported.
    std::shared_ptr<bool> waitForNetworkConfigurationReady_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
