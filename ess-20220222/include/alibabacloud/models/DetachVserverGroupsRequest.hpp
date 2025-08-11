// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHVSERVERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHVSERVERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachVServerGroupsRequestVServerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DetachVServerGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachVServerGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ForceDetach, forceDetach_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(VServerGroups, VServerGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DetachVServerGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ForceDetach, forceDetach_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(VServerGroups, VServerGroups_);
    };
    DetachVServerGroupsRequest() = default ;
    DetachVServerGroupsRequest(const DetachVServerGroupsRequest &) = default ;
    DetachVServerGroupsRequest(DetachVServerGroupsRequest &&) = default ;
    DetachVServerGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachVServerGroupsRequest() = default ;
    DetachVServerGroupsRequest& operator=(const DetachVServerGroupsRequest &) = default ;
    DetachVServerGroupsRequest& operator=(DetachVServerGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->forceDetach_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->scalingGroupId_ != nullptr
        && this->VServerGroups_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachVServerGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forceDetach Field Functions 
    bool hasForceDetach() const { return this->forceDetach_ != nullptr;};
    void deleteForceDetach() { this->forceDetach_ = nullptr;};
    inline bool forceDetach() const { DARABONBA_PTR_GET_DEFAULT(forceDetach_, false) };
    inline DetachVServerGroupsRequest& setForceDetach(bool forceDetach) { DARABONBA_PTR_SET_VALUE(forceDetach_, forceDetach) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DetachVServerGroupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachVServerGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DetachVServerGroupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DetachVServerGroupsRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // VServerGroups Field Functions 
    bool hasVServerGroups() const { return this->VServerGroups_ != nullptr;};
    void deleteVServerGroups() { this->VServerGroups_ = nullptr;};
    inline const vector<DetachVServerGroupsRequestVServerGroups> & VServerGroups() const { DARABONBA_PTR_GET_CONST(VServerGroups_, vector<DetachVServerGroupsRequestVServerGroups>) };
    inline vector<DetachVServerGroupsRequestVServerGroups> VServerGroups() { DARABONBA_PTR_GET(VServerGroups_, vector<DetachVServerGroupsRequestVServerGroups>) };
    inline DetachVServerGroupsRequest& setVServerGroups(const vector<DetachVServerGroupsRequestVServerGroups> & VServerGroups) { DARABONBA_PTR_SET_VALUE(VServerGroups_, VServerGroups) };
    inline DetachVServerGroupsRequest& setVServerGroups(vector<DetachVServerGroupsRequestVServerGroups> && VServerGroups) { DARABONBA_PTR_SET_RVALUE(VServerGroups_, VServerGroups) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to remove the existing instances in the scaling group from the vServer group marked for detachment.
    // 
    // *   true: If you set this parameter to `true`, the detachment of the load balancer from the scaling group causes automatic removal of the existing instances in the scaling group from the corresponding vServer group.
    // *   false: If you set this parameter to `false`, the detachment of the load balancer from the scaling group does not cause automatic removal of the existing instances in the scaling group from the corresponding vServer group.
    // 
    // Default value: false.
    std::shared_ptr<bool> forceDetach_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group. Examples: cn-hangzhou and cn-shanghai.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The collection of information about the vServer groups marked for detachment.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DetachVServerGroupsRequestVServerGroups>> VServerGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
