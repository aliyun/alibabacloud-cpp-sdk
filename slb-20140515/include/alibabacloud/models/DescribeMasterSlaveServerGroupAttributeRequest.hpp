// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMASTERSLAVESERVERGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeMasterSlaveServerGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMasterSlaveServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMasterSlaveServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeMasterSlaveServerGroupAttributeRequest() = default ;
    DescribeMasterSlaveServerGroupAttributeRequest(const DescribeMasterSlaveServerGroupAttributeRequest &) = default ;
    DescribeMasterSlaveServerGroupAttributeRequest(DescribeMasterSlaveServerGroupAttributeRequest &&) = default ;
    DescribeMasterSlaveServerGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMasterSlaveServerGroupAttributeRequest() = default ;
    DescribeMasterSlaveServerGroupAttributeRequest& operator=(const DescribeMasterSlaveServerGroupAttributeRequest &) = default ;
    DescribeMasterSlaveServerGroupAttributeRequest& operator=(DescribeMasterSlaveServerGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->masterSlaveServerGroupId_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string masterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline DescribeMasterSlaveServerGroupAttributeRequest& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeMasterSlaveServerGroupAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeMasterSlaveServerGroupAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMasterSlaveServerGroupAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeMasterSlaveServerGroupAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeMasterSlaveServerGroupAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the primary/secondary server group.
    // 
    // This parameter is required.
    std::shared_ptr<string> masterSlaveServerGroupId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the Classic Load Balancer (CLB) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
