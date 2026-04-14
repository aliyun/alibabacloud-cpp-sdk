// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVSERVERGROUPBACKENDSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVSERVERGROUPBACKENDSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class ModifyVServerGroupBackendServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVServerGroupBackendServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewBackendServers, newBackendServers_);
      DARABONBA_PTR_TO_JSON(OldBackendServers, oldBackendServers_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVServerGroupBackendServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewBackendServers, newBackendServers_);
      DARABONBA_PTR_FROM_JSON(OldBackendServers, oldBackendServers_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    ModifyVServerGroupBackendServersRequest() = default ;
    ModifyVServerGroupBackendServersRequest(const ModifyVServerGroupBackendServersRequest &) = default ;
    ModifyVServerGroupBackendServersRequest(ModifyVServerGroupBackendServersRequest &&) = default ;
    ModifyVServerGroupBackendServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVServerGroupBackendServersRequest() = default ;
    ModifyVServerGroupBackendServersRequest& operator=(const ModifyVServerGroupBackendServersRequest &) = default ;
    ModifyVServerGroupBackendServersRequest& operator=(ModifyVServerGroupBackendServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newBackendServers_ == nullptr
        && this->oldBackendServers_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->VServerGroupId_ == nullptr; };
    // newBackendServers Field Functions 
    bool hasNewBackendServers() const { return this->newBackendServers_ != nullptr;};
    void deleteNewBackendServers() { this->newBackendServers_ = nullptr;};
    inline string getNewBackendServers() const { DARABONBA_PTR_GET_DEFAULT(newBackendServers_, "") };
    inline ModifyVServerGroupBackendServersRequest& setNewBackendServers(string newBackendServers) { DARABONBA_PTR_SET_VALUE(newBackendServers_, newBackendServers) };


    // oldBackendServers Field Functions 
    bool hasOldBackendServers() const { return this->oldBackendServers_ != nullptr;};
    void deleteOldBackendServers() { this->oldBackendServers_ = nullptr;};
    inline string getOldBackendServers() const { DARABONBA_PTR_GET_DEFAULT(oldBackendServers_, "") };
    inline ModifyVServerGroupBackendServersRequest& setOldBackendServers(string oldBackendServers) { DARABONBA_PTR_SET_VALUE(oldBackendServers_, oldBackendServers) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVServerGroupBackendServersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVServerGroupBackendServersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVServerGroupBackendServersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVServerGroupBackendServersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVServerGroupBackendServersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string getVServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline ModifyVServerGroupBackendServersRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The backend servers that you want to add to the vServer group. Configure the following parameters:
    // 
    // *   **ServerId**: required. The IDs of the backend servers. Specify the IDs in a string. You can specify the IDs of ECS instances, ENIs, and elastic container instances. If you set **ServerId** to the IDs of ENIs or elastic container instances, you must configure the **Type** parameter.
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
    // >  You can specify ENIs and elastic container instances as backend servers only for high-performance SLB instances.
    // 
    // *   **ServerIp**: the IP address of the ENI or elastic container instance.
    // *   **Port**: the backend port.
    // 
    // Examples:
    // 
    // *   Add an ECS instance:
    // 
    //     `[{ "ServerId": "i-xxxxxxxxx", "Weight": "100", "Type": "ecs", "Port":"80","Description":"test-112" }]`
    // 
    // *   Add an ENI:
    // 
    //     `[{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-112" }]`
    // 
    // *   Add an ENI with multiple IP addresses:
    // 
    //     `[{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-113" },{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``172.166.**.**``", "Port":"80","Description":"test-113" }]`
    // 
    // *   Add an elastic container instance
    // 
    //     `[{ "ServerId": "eci-xxxxxxxxx", "Weight": "100", "Type": "eci", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-114" }]`
    // 
    // >  You can add only running backend servers to SLB instances. You can specify at most 20 backend servers in each call.
    shared_ptr<string> newBackendServers_ {};
    // The backend servers that you want to replace. Configure the following parameters:
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
    // >  You can specify ENIs and elastic container instances as backend servers only for high-performance SLB instances.
    // 
    // *   **ServerIp**: the IP address of the ENI or elastic container instance.
    // *   **Port**: the backend port.
    // 
    // Examples:
    // 
    // *   Add an ECS instance:
    // 
    //     `[{ "ServerId": "i-xxxxxxxxx", "Weight": "100", "Type": "ecs", "Port":"80","Description":"test-112" }]`
    // 
    // *   Add an ENI:
    // 
    //     `[{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-112" }]`
    // 
    // *   Add an ENI with multiple IP addresses:
    // 
    //     `[{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-113" },{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``172.166.**.**``", "Port":"80","Description":"test-113" }]`
    // 
    // *   Add an elastic container instance
    // 
    //     `[{ "ServerId": "eci-xxxxxxxxx", "Weight": "100", "Type": "eci", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-114" }]`
    // 
    // >  You can add only running backend servers to SLB instances. You can specify at most 20 backend servers in each call.
    shared_ptr<string> oldBackendServers_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the Classic Load Balancer (CLB) instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the vServer group.
    // 
    // This parameter is required.
    shared_ptr<string> VServerGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
