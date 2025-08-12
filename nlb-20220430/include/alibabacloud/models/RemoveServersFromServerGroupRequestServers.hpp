// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESERVERSFROMSERVERGROUPREQUESTSERVERS_HPP_
#define ALIBABACLOUD_MODELS_REMOVESERVERSFROMSERVERGROUPREQUESTSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class RemoveServersFromServerGroupRequestServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveServersFromServerGroupRequestServers& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveServersFromServerGroupRequestServers& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
    };
    RemoveServersFromServerGroupRequestServers() = default ;
    RemoveServersFromServerGroupRequestServers(const RemoveServersFromServerGroupRequestServers &) = default ;
    RemoveServersFromServerGroupRequestServers(RemoveServersFromServerGroupRequestServers &&) = default ;
    RemoveServersFromServerGroupRequestServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveServersFromServerGroupRequestServers() = default ;
    RemoveServersFromServerGroupRequestServers& operator=(const RemoveServersFromServerGroupRequestServers &) = default ;
    RemoveServersFromServerGroupRequestServers& operator=(RemoveServersFromServerGroupRequestServers &&) = default ;
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
    inline RemoveServersFromServerGroupRequestServers& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline RemoveServersFromServerGroupRequestServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline RemoveServersFromServerGroupRequestServers& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline RemoveServersFromServerGroupRequestServers& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


  protected:
    // The port that is used by the backend server. Valid values: **0** to **65535**. If you do not set this parameter, the default value **0** is used.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The backend server ID.
    // 
    // *   If the server group is of the **Instance** type, set this parameter to the IDs of servers of the **Ecs**, **Eni**, or **Eci** type.
    // *   If the server group is of the **Ip** type, set ServerId to IP addresses.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverId_ = nullptr;
    // The IP addresses of the server. If the server group type is **Ip**, set the ServerId parameter to IP addresses.
    std::shared_ptr<string> serverIp_ = nullptr;
    // The type of the backend server. Valid values:
    // 
    // *   **Ecs**: the Elastic Compute Service (ECS) instance
    // *   **Eni**: the elastic network interface (ENI)
    // *   **Eci**: the elastic container instance
    // *   **Ip**: the IP address
    // 
    // This parameter is required.
    std::shared_ptr<string> serverType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
