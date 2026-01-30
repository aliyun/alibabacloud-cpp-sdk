// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHVSERVERGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHVSERVERGROUPSREQUEST_HPP_
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
    class VServerGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VServerGroups& obj) { 
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(VServerGroupAttributes, VServerGroupAttributes_);
      };
      friend void from_json(const Darabonba::Json& j, VServerGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(VServerGroupAttributes, VServerGroupAttributes_);
      };
      VServerGroups() = default ;
      VServerGroups(const VServerGroups &) = default ;
      VServerGroups(VServerGroups &&) = default ;
      VServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VServerGroups() = default ;
      VServerGroups& operator=(const VServerGroups &) = default ;
      VServerGroups& operator=(VServerGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VServerGroupAttributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VServerGroupAttributes& obj) { 
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, VServerGroupAttributes& obj) { 
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
        };
        VServerGroupAttributes() = default ;
        VServerGroupAttributes(const VServerGroupAttributes &) = default ;
        VServerGroupAttributes(VServerGroupAttributes &&) = default ;
        VServerGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VServerGroupAttributes() = default ;
        VServerGroupAttributes& operator=(const VServerGroupAttributes &) = default ;
        VServerGroupAttributes& operator=(VServerGroupAttributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->VServerGroupId_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline VServerGroupAttributes& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // VServerGroupId Field Functions 
        bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
        void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
        inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
        inline VServerGroupAttributes& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


      protected:
        // The port number that Auto Scaling employs to incorporate instances into the vServer group. Valid values: 1 to 65535.
        shared_ptr<int32_t> port_ {};
        // The ID of the backend vServer group.
        shared_ptr<string> VServerGroupId_ {};
      };

      virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && this->VServerGroupAttributes_ == nullptr; };
      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline VServerGroups& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // VServerGroupAttributes Field Functions 
      bool hasVServerGroupAttributes() const { return this->VServerGroupAttributes_ != nullptr;};
      void deleteVServerGroupAttributes() { this->VServerGroupAttributes_ = nullptr;};
      inline const vector<VServerGroups::VServerGroupAttributes> & getVServerGroupAttributes() const { DARABONBA_PTR_GET_CONST(VServerGroupAttributes_, vector<VServerGroups::VServerGroupAttributes>) };
      inline vector<VServerGroups::VServerGroupAttributes> getVServerGroupAttributes() { DARABONBA_PTR_GET(VServerGroupAttributes_, vector<VServerGroups::VServerGroupAttributes>) };
      inline VServerGroups& setVServerGroupAttributes(const vector<VServerGroups::VServerGroupAttributes> & vServerGroupAttributes) { DARABONBA_PTR_SET_VALUE(VServerGroupAttributes_, vServerGroupAttributes) };
      inline VServerGroups& setVServerGroupAttributes(vector<VServerGroups::VServerGroupAttributes> && vServerGroupAttributes) { DARABONBA_PTR_SET_RVALUE(VServerGroupAttributes_, vServerGroupAttributes) };


    protected:
      // The ID of the load balancer to which the vServer group belongs.
      // 
      // >  You can detach vServer groups of up to five load balancers from a scaling group in one call.
      shared_ptr<string> loadBalancerId_ {};
      // The attributes of the backend vServer group.
      shared_ptr<vector<VServerGroups::VServerGroupAttributes>> VServerGroupAttributes_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->forceDetach_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->scalingGroupId_ == nullptr
        && this->VServerGroups_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DetachVServerGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forceDetach Field Functions 
    bool hasForceDetach() const { return this->forceDetach_ != nullptr;};
    void deleteForceDetach() { this->forceDetach_ = nullptr;};
    inline bool getForceDetach() const { DARABONBA_PTR_GET_DEFAULT(forceDetach_, false) };
    inline DetachVServerGroupsRequest& setForceDetach(bool forceDetach) { DARABONBA_PTR_SET_VALUE(forceDetach_, forceDetach) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DetachVServerGroupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DetachVServerGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DetachVServerGroupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DetachVServerGroupsRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // VServerGroups Field Functions 
    bool hasVServerGroups() const { return this->VServerGroups_ != nullptr;};
    void deleteVServerGroups() { this->VServerGroups_ = nullptr;};
    inline const vector<DetachVServerGroupsRequest::VServerGroups> & getVServerGroups() const { DARABONBA_PTR_GET_CONST(VServerGroups_, vector<DetachVServerGroupsRequest::VServerGroups>) };
    inline vector<DetachVServerGroupsRequest::VServerGroups> getVServerGroups() { DARABONBA_PTR_GET(VServerGroups_, vector<DetachVServerGroupsRequest::VServerGroups>) };
    inline DetachVServerGroupsRequest& setVServerGroups(const vector<DetachVServerGroupsRequest::VServerGroups> & vServerGroups) { DARABONBA_PTR_SET_VALUE(VServerGroups_, vServerGroups) };
    inline DetachVServerGroupsRequest& setVServerGroups(vector<DetachVServerGroupsRequest::VServerGroups> && vServerGroups) { DARABONBA_PTR_SET_RVALUE(VServerGroups_, vServerGroups) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25965.html).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to remove the existing instances in the scaling group from the vServer group marked for detachment.
    // 
    // *   true: If you set this parameter to `true`, the detachment of the load balancer from the scaling group causes automatic removal of the existing instances in the scaling group from the corresponding vServer group.
    // *   false: If you set this parameter to `false`, the detachment of the load balancer from the scaling group does not cause automatic removal of the existing instances in the scaling group from the corresponding vServer group.
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
    // The collection of information about the vServer groups marked for detachment.
    // 
    // This parameter is required.
    shared_ptr<vector<DetachVServerGroupsRequest::VServerGroups>> VServerGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
