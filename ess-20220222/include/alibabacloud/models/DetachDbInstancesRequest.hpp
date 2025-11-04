// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDBINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHDBINSTANCESREQUEST_HPP_
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
  class DetachDBInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachDBInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_TO_JSON(ForceDetach, forceDetach_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveSecurityGroup, removeSecurityGroup_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachDBInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstances, DBInstances_);
      DARABONBA_PTR_FROM_JSON(ForceDetach, forceDetach_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveSecurityGroup, removeSecurityGroup_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DetachDBInstancesRequest() = default ;
    DetachDBInstancesRequest(const DetachDBInstancesRequest &) = default ;
    DetachDBInstancesRequest(DetachDBInstancesRequest &&) = default ;
    DetachDBInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachDBInstancesRequest() = default ;
    DetachDBInstancesRequest& operator=(const DetachDBInstancesRequest &) = default ;
    DetachDBInstancesRequest& operator=(DetachDBInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->DBInstances_ == nullptr && return this->forceDetach_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->removeSecurityGroup_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->scalingGroupId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachDBInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstances Field Functions 
    bool hasDBInstances() const { return this->DBInstances_ != nullptr;};
    void deleteDBInstances() { this->DBInstances_ = nullptr;};
    inline const vector<string> & DBInstances() const { DARABONBA_PTR_GET_CONST(DBInstances_, vector<string>) };
    inline vector<string> DBInstances() { DARABONBA_PTR_GET(DBInstances_, vector<string>) };
    inline DetachDBInstancesRequest& setDBInstances(const vector<string> & DBInstances) { DARABONBA_PTR_SET_VALUE(DBInstances_, DBInstances) };
    inline DetachDBInstancesRequest& setDBInstances(vector<string> && DBInstances) { DARABONBA_PTR_SET_RVALUE(DBInstances_, DBInstances) };


    // forceDetach Field Functions 
    bool hasForceDetach() const { return this->forceDetach_ != nullptr;};
    void deleteForceDetach() { this->forceDetach_ = nullptr;};
    inline bool forceDetach() const { DARABONBA_PTR_GET_DEFAULT(forceDetach_, false) };
    inline DetachDBInstancesRequest& setForceDetach(bool forceDetach) { DARABONBA_PTR_SET_VALUE(forceDetach_, forceDetach) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DetachDBInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachDBInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeSecurityGroup Field Functions 
    bool hasRemoveSecurityGroup() const { return this->removeSecurityGroup_ != nullptr;};
    void deleteRemoveSecurityGroup() { this->removeSecurityGroup_ = nullptr;};
    inline bool removeSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(removeSecurityGroup_, false) };
    inline DetachDBInstancesRequest& setRemoveSecurityGroup(bool removeSecurityGroup) { DARABONBA_PTR_SET_VALUE(removeSecurityGroup_, removeSecurityGroup) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DetachDBInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DetachDBInstancesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The IDs of the ApsaraDB RDS instances. You can specify up to five ApsaraDB RDS instances.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> DBInstances_ = nullptr;
    // Specifies whether to remove the private IP addresses of the existing instances in the scaling group from the IP address whitelist of the ApsaraDB RDS instance. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> forceDetach_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to remove the security group. This parameter takes effect only if you set `AttachMode` to `SecurityGroup`. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> removeSecurityGroup_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
