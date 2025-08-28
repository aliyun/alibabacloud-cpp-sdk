// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGLOBALACCELERATIONINSTANCEIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGLOBALACCELERATIONINSTANCEIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AddGlobalAccelerationInstanceIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGlobalAccelerationInstanceIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
      DARABONBA_PTR_TO_JSON(IpInstanceId, ipInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, AddGlobalAccelerationInstanceIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstanceId, globalAccelerationInstanceId_);
      DARABONBA_PTR_FROM_JSON(IpInstanceId, ipInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    AddGlobalAccelerationInstanceIpRequest() = default ;
    AddGlobalAccelerationInstanceIpRequest(const AddGlobalAccelerationInstanceIpRequest &) = default ;
    AddGlobalAccelerationInstanceIpRequest(AddGlobalAccelerationInstanceIpRequest &&) = default ;
    AddGlobalAccelerationInstanceIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGlobalAccelerationInstanceIpRequest() = default ;
    AddGlobalAccelerationInstanceIpRequest& operator=(const AddGlobalAccelerationInstanceIpRequest &) = default ;
    AddGlobalAccelerationInstanceIpRequest& operator=(AddGlobalAccelerationInstanceIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->globalAccelerationInstanceId_ != nullptr
        && this->ipInstanceId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // globalAccelerationInstanceId Field Functions 
    bool hasGlobalAccelerationInstanceId() const { return this->globalAccelerationInstanceId_ != nullptr;};
    void deleteGlobalAccelerationInstanceId() { this->globalAccelerationInstanceId_ = nullptr;};
    inline string globalAccelerationInstanceId() const { DARABONBA_PTR_GET_DEFAULT(globalAccelerationInstanceId_, "") };
    inline AddGlobalAccelerationInstanceIpRequest& setGlobalAccelerationInstanceId(string globalAccelerationInstanceId) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstanceId_, globalAccelerationInstanceId) };


    // ipInstanceId Field Functions 
    bool hasIpInstanceId() const { return this->ipInstanceId_ != nullptr;};
    void deleteIpInstanceId() { this->ipInstanceId_ = nullptr;};
    inline string ipInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ipInstanceId_, "") };
    inline AddGlobalAccelerationInstanceIpRequest& setIpInstanceId(string ipInstanceId) { DARABONBA_PTR_SET_VALUE(ipInstanceId_, ipInstanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddGlobalAccelerationInstanceIpRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddGlobalAccelerationInstanceIpRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddGlobalAccelerationInstanceIpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddGlobalAccelerationInstanceIpRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddGlobalAccelerationInstanceIpRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the shared-bandwidth GA instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> globalAccelerationInstanceId_ = nullptr;
    // The EIP ID. You can call the [DescribeEipAddresses](https://help.aliyun.com/document_detail/36018.html) operation to query EIP IDs.
    // 
    // >  Make sure that the billing method of the EIP is pay-as-you-go, and the EIP and the shared-bandwidth GA instance belong to the same region.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipInstanceId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region of the shared-bandwidth GA instance.
    // 
    // You can call the **DescribeRegions** operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
