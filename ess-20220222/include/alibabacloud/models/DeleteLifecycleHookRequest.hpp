// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIFECYCLEHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIFECYCLEHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DeleteLifecycleHookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLifecycleHookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_TO_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLifecycleHookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecycleHookId, lifecycleHookId_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookName, lifecycleHookName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DeleteLifecycleHookRequest() = default ;
    DeleteLifecycleHookRequest(const DeleteLifecycleHookRequest &) = default ;
    DeleteLifecycleHookRequest(DeleteLifecycleHookRequest &&) = default ;
    DeleteLifecycleHookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLifecycleHookRequest() = default ;
    DeleteLifecycleHookRequest& operator=(const DeleteLifecycleHookRequest &) = default ;
    DeleteLifecycleHookRequest& operator=(DeleteLifecycleHookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lifecycleHookId_ == nullptr
        && return this->lifecycleHookName_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->scalingGroupId_ == nullptr; };
    // lifecycleHookId Field Functions 
    bool hasLifecycleHookId() const { return this->lifecycleHookId_ != nullptr;};
    void deleteLifecycleHookId() { this->lifecycleHookId_ = nullptr;};
    inline string lifecycleHookId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookId_, "") };
    inline DeleteLifecycleHookRequest& setLifecycleHookId(string lifecycleHookId) { DARABONBA_PTR_SET_VALUE(lifecycleHookId_, lifecycleHookId) };


    // lifecycleHookName Field Functions 
    bool hasLifecycleHookName() const { return this->lifecycleHookName_ != nullptr;};
    void deleteLifecycleHookName() { this->lifecycleHookName_ = nullptr;};
    inline string lifecycleHookName() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookName_, "") };
    inline DeleteLifecycleHookRequest& setLifecycleHookName(string lifecycleHookName) { DARABONBA_PTR_SET_VALUE(lifecycleHookName_, lifecycleHookName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteLifecycleHookRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteLifecycleHookRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLifecycleHookRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteLifecycleHookRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DeleteLifecycleHookRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The ID of the lifecycle hook.
    std::shared_ptr<string> lifecycleHookId_ = nullptr;
    // The name of the lifecycle hook.
    std::shared_ptr<string> lifecycleHookName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
