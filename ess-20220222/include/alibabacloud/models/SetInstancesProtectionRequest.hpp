// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETINSTANCESPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETINSTANCESPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class SetInstancesProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetInstancesProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProtectedFromScaleIn, protectedFromScaleIn_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, SetInstancesProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProtectedFromScaleIn, protectedFromScaleIn_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    SetInstancesProtectionRequest() = default ;
    SetInstancesProtectionRequest(const SetInstancesProtectionRequest &) = default ;
    SetInstancesProtectionRequest(SetInstancesProtectionRequest &&) = default ;
    SetInstancesProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetInstancesProtectionRequest() = default ;
    SetInstancesProtectionRequest& operator=(const SetInstancesProtectionRequest &) = default ;
    SetInstancesProtectionRequest& operator=(SetInstancesProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->ownerId_ == nullptr && this->protectedFromScaleIn_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->scalingGroupId_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline SetInstancesProtectionRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline SetInstancesProtectionRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetInstancesProtectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // protectedFromScaleIn Field Functions 
    bool hasProtectedFromScaleIn() const { return this->protectedFromScaleIn_ != nullptr;};
    void deleteProtectedFromScaleIn() { this->protectedFromScaleIn_ = nullptr;};
    inline bool getProtectedFromScaleIn() const { DARABONBA_PTR_GET_DEFAULT(protectedFromScaleIn_, false) };
    inline SetInstancesProtectionRequest& setProtectedFromScaleIn(bool protectedFromScaleIn) { DARABONBA_PTR_SET_VALUE(protectedFromScaleIn_, protectedFromScaleIn) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetInstancesProtectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline SetInstancesProtectionRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The IDs of the ECS instances.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to protect ECS instances from being stopped or removed from the scaling group during scale-ins. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    shared_ptr<bool> protectedFromScaleIn_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The ID of the scaling group.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
