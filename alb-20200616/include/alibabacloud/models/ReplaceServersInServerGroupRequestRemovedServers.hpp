// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACESERVERSINSERVERGROUPREQUESTREMOVEDSERVERS_HPP_
#define ALIBABACLOUD_MODELS_REPLACESERVERSINSERVERGROUPREQUESTREMOVEDSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ReplaceServersInServerGroupRequestRemovedServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceServersInServerGroupRequestRemovedServers& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceServersInServerGroupRequestRemovedServers& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
    };
    ReplaceServersInServerGroupRequestRemovedServers() = default ;
    ReplaceServersInServerGroupRequestRemovedServers(const ReplaceServersInServerGroupRequestRemovedServers &) = default ;
    ReplaceServersInServerGroupRequestRemovedServers(ReplaceServersInServerGroupRequestRemovedServers &&) = default ;
    ReplaceServersInServerGroupRequestRemovedServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceServersInServerGroupRequestRemovedServers() = default ;
    ReplaceServersInServerGroupRequestRemovedServers& operator=(const ReplaceServersInServerGroupRequestRemovedServers &) = default ;
    ReplaceServersInServerGroupRequestRemovedServers& operator=(ReplaceServersInServerGroupRequestRemovedServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->port_ != nullptr
        && this->serverId_ != nullptr && this->serverIp_ != nullptr && this->serverType_ != nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ReplaceServersInServerGroupRequestRemovedServers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline ReplaceServersInServerGroupRequestRemovedServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline ReplaceServersInServerGroupRequestRemovedServers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline ReplaceServersInServerGroupRequestRemovedServers& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


  protected:
    // The port that is used by the backend server. Valid values: **1** to **65535**. You can specify at most 200 servers in each call.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the backend server. You can specify at most 200 servers in each call.
    // 
    // *   If the server group is of the **Instance** type, set ServerId to the ID of a resource of the **Ecs**, **Eni**, or **Eci** type.
    // *   If the server group is of the **Ip** type, set ServerId to IP addresses.
    // 
    // >  You cannot perform this operation on a server group of the Function Compute type. You can call the [ListServerGroups](https://help.aliyun.com/document_detail/213627.html) operation to query the type of server groups.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverId_ = nullptr;
    // The IP address of the ENI in exclusive mode.
    std::shared_ptr<string> serverIp_ = nullptr;
    // The type of backend server. You can specify at most 200 servers in each call. Valid values:
    // 
    // *   **Ecs**: ECS instance
    // *   **Eni**: ENI
    // *   **Eci**: elastic container instance
    std::shared_ptr<string> serverType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
