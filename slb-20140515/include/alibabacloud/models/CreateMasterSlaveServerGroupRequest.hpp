// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMASTERSLAVESERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMASTERSLAVESERVERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMasterSlaveServerGroupRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateMasterSlaveServerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMasterSlaveServerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMasterSlaveServerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveBackendServers, masterSlaveBackendServers_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupName, masterSlaveServerGroupName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateMasterSlaveServerGroupRequest() = default ;
    CreateMasterSlaveServerGroupRequest(const CreateMasterSlaveServerGroupRequest &) = default ;
    CreateMasterSlaveServerGroupRequest(CreateMasterSlaveServerGroupRequest &&) = default ;
    CreateMasterSlaveServerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMasterSlaveServerGroupRequest() = default ;
    CreateMasterSlaveServerGroupRequest& operator=(const CreateMasterSlaveServerGroupRequest &) = default ;
    CreateMasterSlaveServerGroupRequest& operator=(CreateMasterSlaveServerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && return this->masterSlaveBackendServers_ == nullptr && return this->masterSlaveServerGroupName_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->tag_ == nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateMasterSlaveServerGroupRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // masterSlaveBackendServers Field Functions 
    bool hasMasterSlaveBackendServers() const { return this->masterSlaveBackendServers_ != nullptr;};
    void deleteMasterSlaveBackendServers() { this->masterSlaveBackendServers_ = nullptr;};
    inline string masterSlaveBackendServers() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveBackendServers_, "") };
    inline CreateMasterSlaveServerGroupRequest& setMasterSlaveBackendServers(string masterSlaveBackendServers) { DARABONBA_PTR_SET_VALUE(masterSlaveBackendServers_, masterSlaveBackendServers) };


    // masterSlaveServerGroupName Field Functions 
    bool hasMasterSlaveServerGroupName() const { return this->masterSlaveServerGroupName_ != nullptr;};
    void deleteMasterSlaveServerGroupName() { this->masterSlaveServerGroupName_ = nullptr;};
    inline string masterSlaveServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupName_, "") };
    inline CreateMasterSlaveServerGroupRequest& setMasterSlaveServerGroupName(string masterSlaveServerGroupName) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupName_, masterSlaveServerGroupName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateMasterSlaveServerGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateMasterSlaveServerGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMasterSlaveServerGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateMasterSlaveServerGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateMasterSlaveServerGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateMasterSlaveServerGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateMasterSlaveServerGroupRequestTag>) };
    inline vector<CreateMasterSlaveServerGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateMasterSlaveServerGroupRequestTag>) };
    inline CreateMasterSlaveServerGroupRequest& setTag(const vector<CreateMasterSlaveServerGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateMasterSlaveServerGroupRequest& setTag(vector<CreateMasterSlaveServerGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The CLB instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The backend servers in the primary/secondary server group. Each primary/secondary server group consists of two backend servers.
    // 
    // Configure the following parameters:
    // 
    // *   **ServerId**: required. The IDs of the backend servers. Specify the IDs in a string. You can specify the IDs of Elastic Compute Service (ECS) instances, elastic network interfaces (ENIs), and elastic container instances. If you set **ServerId** to the IDs of ENIs or elastic container instances, you must configure the **Type** parameter.
    // 
    // *   **Weight**: the weight of the backend server. Valid values: **0** to **100**. Default value: **100**. If you set the weight of a backend server to 0, no requests are forwarded to the backend server.
    // 
    // *   **Description**: optional. The description of the backend servers. Specify the description in a string. The description must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/). periods (.), and underscores (_).
    // 
    // *   **Type**: the type of the backend server. Valid values:
    // 
    //     *   **ecs** (default): ECS instance
    //     *   **eni**: ENI
    //     *   **eci**: elastic container instance
    // 
    // >  You can specify ENIs and elastic container instances as backend servers only for high-performance CLB instances.
    // 
    // *   **ServerIp**: the IP address of the ENI or elastic container instance.
    // 
    // *   **Port**: the backend port.
    // 
    // *   **ServerType**: Specify the primary and secondary backend servers in a string. Valid values:
    // 
    //     *   **Master**: primary server
    //     *   **Slave**: secondary server
    std::shared_ptr<string> masterSlaveBackendServers_ = nullptr;
    // The name of the primary/secondary server group.
    std::shared_ptr<string> masterSlaveServerGroupName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the Classic Load Balancer (CLB) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateMasterSlaveServerGroupRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
