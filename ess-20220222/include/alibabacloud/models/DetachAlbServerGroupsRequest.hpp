// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHALBSERVERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHALBSERVERGROUPSREQUEST_HPP_
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
  class DetachAlbServerGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachAlbServerGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ForceDetach, forceDetach_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachAlbServerGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbServerGroups, albServerGroups_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ForceDetach, forceDetach_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DetachAlbServerGroupsRequest() = default ;
    DetachAlbServerGroupsRequest(const DetachAlbServerGroupsRequest &) = default ;
    DetachAlbServerGroupsRequest(DetachAlbServerGroupsRequest &&) = default ;
    DetachAlbServerGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachAlbServerGroupsRequest() = default ;
    DetachAlbServerGroupsRequest& operator=(const DetachAlbServerGroupsRequest &) = default ;
    DetachAlbServerGroupsRequest& operator=(DetachAlbServerGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlbServerGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlbServerGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AlbServerGroupId, albServerGroupId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, AlbServerGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AlbServerGroupId, albServerGroupId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      AlbServerGroups() = default ;
      AlbServerGroups(const AlbServerGroups &) = default ;
      AlbServerGroups(AlbServerGroups &&) = default ;
      AlbServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlbServerGroups() = default ;
      AlbServerGroups& operator=(const AlbServerGroups &) = default ;
      AlbServerGroups& operator=(AlbServerGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->albServerGroupId_ == nullptr
        && this->port_ == nullptr; };
      // albServerGroupId Field Functions 
      bool hasAlbServerGroupId() const { return this->albServerGroupId_ != nullptr;};
      void deleteAlbServerGroupId() { this->albServerGroupId_ = nullptr;};
      inline string getAlbServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(albServerGroupId_, "") };
      inline AlbServerGroups& setAlbServerGroupId(string albServerGroupId) { DARABONBA_PTR_SET_VALUE(albServerGroupId_, albServerGroupId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline AlbServerGroups& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The ID of the ALB server group.
      // 
      // This parameter is required.
      shared_ptr<string> albServerGroupId_ {};
      // The port number used by the ECS instances in the ALB server group.
      // 
      // This parameter is required.
      shared_ptr<int32_t> port_ {};
    };

    virtual bool empty() const override { return this->albServerGroups_ == nullptr
        && this->clientToken_ == nullptr && this->forceDetach_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->scalingGroupId_ == nullptr; };
    // albServerGroups Field Functions 
    bool hasAlbServerGroups() const { return this->albServerGroups_ != nullptr;};
    void deleteAlbServerGroups() { this->albServerGroups_ = nullptr;};
    inline const vector<DetachAlbServerGroupsRequest::AlbServerGroups> & getAlbServerGroups() const { DARABONBA_PTR_GET_CONST(albServerGroups_, vector<DetachAlbServerGroupsRequest::AlbServerGroups>) };
    inline vector<DetachAlbServerGroupsRequest::AlbServerGroups> getAlbServerGroups() { DARABONBA_PTR_GET(albServerGroups_, vector<DetachAlbServerGroupsRequest::AlbServerGroups>) };
    inline DetachAlbServerGroupsRequest& setAlbServerGroups(const vector<DetachAlbServerGroupsRequest::AlbServerGroups> & albServerGroups) { DARABONBA_PTR_SET_VALUE(albServerGroups_, albServerGroups) };
    inline DetachAlbServerGroupsRequest& setAlbServerGroups(vector<DetachAlbServerGroupsRequest::AlbServerGroups> && albServerGroups) { DARABONBA_PTR_SET_RVALUE(albServerGroups_, albServerGroups) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachAlbServerGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forceDetach Field Functions 
    bool hasForceDetach() const { return this->forceDetach_ != nullptr;};
    void deleteForceDetach() { this->forceDetach_ = nullptr;};
    inline bool getForceDetach() const { DARABONBA_PTR_GET_DEFAULT(forceDetach_, false) };
    inline DetachAlbServerGroupsRequest& setForceDetach(bool forceDetach) { DARABONBA_PTR_SET_VALUE(forceDetach_, forceDetach) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DetachAlbServerGroupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachAlbServerGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DetachAlbServerGroupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DetachAlbServerGroupsRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // Details of the ALB server groups.
    // 
    // This parameter is required.
    shared_ptr<vector<DetachAlbServerGroupsRequest::AlbServerGroups>> albServerGroups_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that the value is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure the idempotence of a request](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to remove the existing Elastic Compute Service (ECS) instances from the Application Load Balancer (ALB) server group marked for detachment. Valid values:
    // 
    // *   true: removes the existing ECS instances from the ALB server group and returns the value of `ScalingActivityId`. You can query the value of ScalingActivityId to check whether the existing ECS instances are removed from the ALB server group.
    // *   false: does not remove the existing ECS instances from the ALB server group.
    // 
    // Default value: false.
    shared_ptr<bool> forceDetach_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group. Examples: cn-hangzhou and cn-shanghai.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
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
