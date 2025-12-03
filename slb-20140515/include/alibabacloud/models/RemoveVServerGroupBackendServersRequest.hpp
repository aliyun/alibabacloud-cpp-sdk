// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVSERVERGROUPBACKENDSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVSERVERGROUPBACKENDSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class RemoveVServerGroupBackendServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVServerGroupBackendServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVServerGroupBackendServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServers, backendServers_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    RemoveVServerGroupBackendServersRequest() = default ;
    RemoveVServerGroupBackendServersRequest(const RemoveVServerGroupBackendServersRequest &) = default ;
    RemoveVServerGroupBackendServersRequest(RemoveVServerGroupBackendServersRequest &&) = default ;
    RemoveVServerGroupBackendServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVServerGroupBackendServersRequest() = default ;
    RemoveVServerGroupBackendServersRequest& operator=(const RemoveVServerGroupBackendServersRequest &) = default ;
    RemoveVServerGroupBackendServersRequest& operator=(RemoveVServerGroupBackendServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServers_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->VServerGroupId_ == nullptr; };
    // backendServers Field Functions 
    bool hasBackendServers() const { return this->backendServers_ != nullptr;};
    void deleteBackendServers() { this->backendServers_ = nullptr;};
    inline string backendServers() const { DARABONBA_PTR_GET_DEFAULT(backendServers_, "") };
    inline RemoveVServerGroupBackendServersRequest& setBackendServers(string backendServers) { DARABONBA_PTR_SET_VALUE(backendServers_, backendServers) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RemoveVServerGroupBackendServersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RemoveVServerGroupBackendServersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RemoveVServerGroupBackendServersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RemoveVServerGroupBackendServersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RemoveVServerGroupBackendServersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline RemoveVServerGroupBackendServersRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The backend servers that you want to remove. Configure the following parameters:
    // 
    // *   **ServerId**: Required. The ID of the backend server. Specify the value in a string. You can specify the ID of an Elastic Compute Service (ECS) instance, an elastic network interface (ENI), or an elastic container instance. If you set **ServerId** to the ID of an ENI or an elastic container instance, you must configure the **Type** parameter.
    // 
    // *   **Weight**: the weight of the backend server. Valid values: **0** to **100**. Default value: **100**. If you set the weight of a backend server to 0, no requests are forwarded to the backend server.
    // 
    // *   **Description**: Optional. The description of the backend server. Specify the value in a string. The description must be 1 to 80 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
    // 
    // *   **Type**: the type of the backend server. Valid values:
    // 
    //     *   **ecs**: ECS instance
    //     *   **eni**: ENI
    //     *   **eci**: elastic container instance
    // 
    // >  You can specify ENIs and elastic container instances as backend servers only for high-performance SLB instances.
    // 
    // *   **ServerIp**: the IP address of an ENI or an elastic container instance.
    // *   **Port**: the backend port.
    // 
    // Examples:
    // 
    // *   Add ECS instances:
    // 
    //     `[{ "ServerId": "i-xxxxxxxxx", "Weight": "100", "Type": "ecs", "Port":"80","Description":"test-112" }]`
    // 
    // *   Add ENIs:
    // 
    //     `[{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-112" }]`
    // 
    // *   Add ENIs with multiple IP addresses:
    // 
    //     `[{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-113" },{ "ServerId": "eni-xxxxxxxxx", "Weight": "100", "Type": "eni", "ServerIp": "``172.166.**.**``", "Port":"80","Description":"test-113" }]`
    // 
    // *   Add elastic container instances:
    // 
    //     `[{ "ServerId": "eci-xxxxxxxxx", "Weight": "100", "Type": "eci", "ServerIp": "``192.168.**.**``", "Port":"80","Description":"test-114" }]`
    // 
    // >  You can add only running backend servers to SLB instances. You can specify at most 20 backend servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> backendServers_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the Server Load Balancer (SLB) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the vServer group.
    // 
    // This parameter is required.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
