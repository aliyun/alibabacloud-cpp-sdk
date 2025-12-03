// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVSERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVSERVERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVServerGroupRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateVServerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVServerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VServerGroupName, VServerGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVServerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VServerGroupName, VServerGroupName_);
    };
    CreateVServerGroupRequest() = default ;
    CreateVServerGroupRequest(const CreateVServerGroupRequest &) = default ;
    CreateVServerGroupRequest(CreateVServerGroupRequest &&) = default ;
    CreateVServerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVServerGroupRequest() = default ;
    CreateVServerGroupRequest& operator=(const CreateVServerGroupRequest &) = default ;
    CreateVServerGroupRequest& operator=(CreateVServerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServers_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->tag_ == nullptr && return this->VServerGroupName_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline string backendServers() const { DARABONBA_PTR_GET_DEFAULT(backendServers_, "") };
    inline CreateVServerGroupRequest& setBackendServers(string backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateVServerGroupRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateVServerGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateVServerGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVServerGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateVServerGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateVServerGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVServerGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVServerGroupRequestTag>) };
    inline vector<CreateVServerGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateVServerGroupRequestTag>) };
    inline CreateVServerGroupRequest& setTag(const vector<CreateVServerGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVServerGroupRequest& setTag(vector<CreateVServerGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // VServerGroupName Field Functions 
    bool hasVServerGroupName() const { return this->VServerGroupName_ != nullptr;};
    void deleteVServerGroupName() { this->VServerGroupName_ = nullptr;};
    inline string VServerGroupName() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupName_, "") };
    inline CreateVServerGroupRequest& setVServerGroupName(string VServerGroupName) { DARABONBA_PTR_SET_VALUE(VServerGroupName_, VServerGroupName) };


  protected:
    // The backend servers that you want to add. Configure the following parameters:
    // 
    // *   **ServerId**:  required. The ID of the backend server. Specify the ID in a string. You can specify the ID of an Elastic Compute Service (ECS) instance, an elastic network interface (ENI), or an elastic container instance. If you set ServerId to the ID of an ENI or an elastic container instance, you must configure the Type parameter.
    // 
    // *   **Weight**: the weight of the backend server. Valid values: 0 to 100. Default value: 100. If you set the weight of a backend server to 0, no requests are forwarded to the backend server.
    // 
    // *   **Description**: optional. The description of the backend server. Specify the description in a string. The description must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
    // 
    // *   **Type**: the type of the backend server. Valid values:
    // 
    //     *   **ecs (default)**: ECS instance
    //     *   **eni**: ENI.
    //     *   **eni**: elastic container instance.
    // 
    // > You can specify ENIs and elastic container instances as backend servers only for high-performance SLB instances.
    // 
    // *   **ServerIp**: The IP address of the ECS instance or ENI.
    // *   **Port**: the backend port.
    // 
    // Examples:
    // 
    // - Add an ECS instance:
    // 
    //   `[{ "ServerId": "i-xxxxxxxxx", "Weight": "100", "Type": "ecs", "Port":"80","Description":"test-112" }]`
    // - Add an ENI:
    // 
    //   ` [{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-112" }]`
    // - Add an ENI with multiple IP addresses:
    // 
    //    `[{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-113" },{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``172.166.**.**``", "Port":"80","Description":"test-113" }]`
    // - Add an elastic container instance:
    // 
    //   ` [{ "ServerId": "eci-xxxxxxxxx", "Weight": "100", "Type": "eci", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-114" }]`
    // 
    // > You can add only running backend servers to SLB instances. You can specify at most 20 backend servers.
    std::shared_ptr<string> backendServers_ = nullptr;
    // The ID of the Server Load Balancer (SLB) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the SLB instance is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateVServerGroupRequestTag>> tag_ = nullptr;
    // The name of the vServer group.
    // 
    // The name must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.),and underscores (_).
    std::shared_ptr<string> VServerGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
