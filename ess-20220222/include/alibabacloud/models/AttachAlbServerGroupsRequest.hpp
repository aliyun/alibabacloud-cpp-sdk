// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHALBSERVERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHALBSERVERGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachAlbServerGroupsRequestAlbServerGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class AttachAlbServerGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachAlbServerGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ForceAttach, forceAttach_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachAlbServerGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ForceAttach, forceAttach_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    AttachAlbServerGroupsRequest() = default ;
    AttachAlbServerGroupsRequest(const AttachAlbServerGroupsRequest &) = default ;
    AttachAlbServerGroupsRequest(AttachAlbServerGroupsRequest &&) = default ;
    AttachAlbServerGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachAlbServerGroupsRequest() = default ;
    AttachAlbServerGroupsRequest& operator=(const AttachAlbServerGroupsRequest &) = default ;
    AttachAlbServerGroupsRequest& operator=(AttachAlbServerGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->albServerGroups_ == nullptr
        && return this->clientToken_ == nullptr && return this->forceAttach_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->scalingGroupId_ == nullptr; };
    // albServerGroups Field Functions 
    bool hasAlbServerGroups() const { return this->albServerGroups_ != nullptr;};
    void deleteAlbServerGroups() { this->albServerGroups_ = nullptr;};
    inline const vector<AttachAlbServerGroupsRequestAlbServerGroups> & albServerGroups() const { DARABONBA_PTR_GET_CONST(albServerGroups_, vector<AttachAlbServerGroupsRequestAlbServerGroups>) };
    inline vector<AttachAlbServerGroupsRequestAlbServerGroups> albServerGroups() { DARABONBA_PTR_GET(albServerGroups_, vector<AttachAlbServerGroupsRequestAlbServerGroups>) };
    inline AttachAlbServerGroupsRequest& setAlbServerGroups(const vector<AttachAlbServerGroupsRequestAlbServerGroups> & albServerGroups) { DARABONBA_PTR_SET_VALUE(albServerGroups_, albServerGroups) };
    inline AttachAlbServerGroupsRequest& setAlbServerGroups(vector<AttachAlbServerGroupsRequestAlbServerGroups> && albServerGroups) { DARABONBA_PTR_SET_RVALUE(albServerGroups_, albServerGroups) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachAlbServerGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forceAttach Field Functions 
    bool hasForceAttach() const { return this->forceAttach_ != nullptr;};
    void deleteForceAttach() { this->forceAttach_ = nullptr;};
    inline bool forceAttach() const { DARABONBA_PTR_GET_DEFAULT(forceAttach_, false) };
    inline AttachAlbServerGroupsRequest& setForceAttach(bool forceAttach) { DARABONBA_PTR_SET_VALUE(forceAttach_, forceAttach) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachAlbServerGroupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachAlbServerGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachAlbServerGroupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline AttachAlbServerGroupsRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The information about the ALB server groups.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AttachAlbServerGroupsRequestAlbServerGroups>> albServerGroups_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to add the existing Elastic Compute Service (ECS) instances or elastic container instances in the scaling group to the new ALB server group. Valid values:
    // 
    // *   true: adds the existing ECS instances or elastic container instances in the scaling group to the new ALB server group and returns the value of `ScalingActivityId`. You can query the value of ScalingActivityId to check whether the existing ECS instances are added to the ALB server group.
    // *   false: does not add the existing ECS instances or elastic container instances in the scaling group to the new ALB server group.
    // 
    // Default value: false.
    std::shared_ptr<bool> forceAttach_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    // 
    // Examples: `cn-hangzhou` and `cn-shanghai`. For more information about regions and zones, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
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
