// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHALBSERVERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHALBSERVERGROUPSREQUEST_HPP_
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
    class AlbServerGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlbServerGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AlbServerGroupId, albServerGroupId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, AlbServerGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AlbServerGroupId, albServerGroupId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
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
        && this->port_ == nullptr && this->weight_ == nullptr; };
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


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline AlbServerGroups& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The ID of the ALB server group.
      // 
      // You can attach only a limited number of ALB server groups to a scaling group. To view the predefined quota limit or manually request a quota increase, go to [Quota Center](https://quotas.console.aliyun.com/products/ess/quotas).
      // 
      // This parameter is required.
      shared_ptr<string> albServerGroupId_ {};
      // The port used by ECS instances or elastic container instances after being added as backend servers to the ALB server group.
      // 
      // Valid values: 1 to 65535.
      // 
      // This parameter is required.
      shared_ptr<int32_t> port_ {};
      // The weight of an ECS instance or elastic container instance after being added as a backend server to the ALB server group. Valid values: 0 to 100.
      // 
      // If you assign a higher weight to an instance, the instance is allocated a larger proportion of access requests. If you assign zero weight to an instance, the instance is allocated no access requests.
      // 
      // This parameter is required.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->albServerGroups_ == nullptr
        && this->clientToken_ == nullptr && this->forceAttach_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->scalingGroupId_ == nullptr; };
    // albServerGroups Field Functions 
    bool hasAlbServerGroups() const { return this->albServerGroups_ != nullptr;};
    void deleteAlbServerGroups() { this->albServerGroups_ = nullptr;};
    inline const vector<AttachAlbServerGroupsRequest::AlbServerGroups> & getAlbServerGroups() const { DARABONBA_PTR_GET_CONST(albServerGroups_, vector<AttachAlbServerGroupsRequest::AlbServerGroups>) };
    inline vector<AttachAlbServerGroupsRequest::AlbServerGroups> getAlbServerGroups() { DARABONBA_PTR_GET(albServerGroups_, vector<AttachAlbServerGroupsRequest::AlbServerGroups>) };
    inline AttachAlbServerGroupsRequest& setAlbServerGroups(const vector<AttachAlbServerGroupsRequest::AlbServerGroups> & albServerGroups) { DARABONBA_PTR_SET_VALUE(albServerGroups_, albServerGroups) };
    inline AttachAlbServerGroupsRequest& setAlbServerGroups(vector<AttachAlbServerGroupsRequest::AlbServerGroups> && albServerGroups) { DARABONBA_PTR_SET_RVALUE(albServerGroups_, albServerGroups) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachAlbServerGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forceAttach Field Functions 
    bool hasForceAttach() const { return this->forceAttach_ != nullptr;};
    void deleteForceAttach() { this->forceAttach_ = nullptr;};
    inline bool getForceAttach() const { DARABONBA_PTR_GET_DEFAULT(forceAttach_, false) };
    inline AttachAlbServerGroupsRequest& setForceAttach(bool forceAttach) { DARABONBA_PTR_SET_VALUE(forceAttach_, forceAttach) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AttachAlbServerGroupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachAlbServerGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AttachAlbServerGroupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline AttachAlbServerGroupsRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The information about the ALB server groups.
    // 
    // This parameter is required.
    shared_ptr<vector<AttachAlbServerGroupsRequest::AlbServerGroups>> albServerGroups_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to add the existing Elastic Compute Service (ECS) instances or elastic container instances in the scaling group to the new ALB server group. Valid values:
    // 
    // *   true: adds the existing ECS instances or elastic container instances in the scaling group to the new ALB server group and returns the value of `ScalingActivityId`. You can query the value of ScalingActivityId to check whether the existing ECS instances are added to the ALB server group.
    // *   false: does not add the existing ECS instances or elastic container instances in the scaling group to the new ALB server group.
    // 
    // Default value: false.
    shared_ptr<bool> forceAttach_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the scaling group.
    // 
    // Examples: `cn-hangzhou` and `cn-shanghai`. For more information about regions and zones, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
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
